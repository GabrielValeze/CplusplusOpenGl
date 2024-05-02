// Copyright (c) 2020-2023, NVIDIA CORPORATION. All rights reserved.
//
// NVIDIA CORPORATION and its licensors retain all intellectual property
// and proprietary rights in and to this software, related documentation
// and any modifications thereto. Any use, reproduction, disclosure or
// distribution of this software and related documentation without an express
// license agreement from NVIDIA CORPORATION is strictly prohibited.
//
#ifndef DOXYGEN_BUILD // Just need the full listing
#    define OMNI_LOG_DEFAULT_CHANNEL kGlfwChannel

// clang-format off
#include <omni/core/ReplaceCarbAssert.h>
// clang-format on

#    include <SDLGameControllerDB/include/GameControllerDB.h>

#    include <carb/thread/RecursiveSharedMutex.h>

#    include <omni/core/Omni.h>
#    include <windowing/IWindowSystem.h>

#    include <omni/log/LogChannel.h>

#    if CARB_PLATFORM_WINDOWS
#        define GLFW_EXPOSE_NATIVE_WIN32
#    elif CARB_PLATFORM_LINUX
#        define GLFW_EXPOSE_NATIVE_X11
#    endif
#    if CARB_PLATFORM_WINDOWS
#        define NOMINMAX
#    endif
#    include <GLFW/glfw3.h>
#    include <GLFW/glfw3native.h>

#    include <array>
#    include <bitset>
#    include <functional>
#    include <memory>
#    include <shared_mutex> // std::shared_lock
#    include <vector>
#    include <utility>

OMNI_LOG_ADD_CHANNEL(kInputChannel, "example.input-glfw", "Input related functionality in example-glfw");
OMNI_LOG_ADD_CHANNEL(kKeyboardChannel, "example.input.keyboard-glfw", "Keyboard related functionality in example-glfw");
OMNI_LOG_ADD_CHANNEL(kWindowChannel, "example.window-glfw", "Window system related functionality in example-glfw");

namespace omni
{
    using namespace omni::core;
} // namespace omni

namespace
{
    using SharedLock = std::shared_lock<carb::thread::recursive_shared_mutex>;
    using UniqueLock = std::unique_lock<carb::thread::recursive_shared_mutex>;

    std::thread::id s_mainThreadId;

    bool isMainThread()
    {
        return (s_mainThreadId == std::this_thread::get_id());
    }

    // most glfw functions can only be called on the main thread.
#    define ASSERT_IS_MAIN_THREAD()                                                                                    \
        OMNI_ASSERT(isMainThread(), "a window system function was call on a thread other than the main thread");

// ensures glfwTerminate is called when the program exts (or when the module is unloaded)
    struct GlfwTerminator
    {
        ~GlfwTerminator()
        {
            ASSERT_IS_MAIN_THREAD();
            glfwTerminate();
        }
    };

    std::unique_ptr<GlfwTerminator> s_glfwTerminator;

    // calls glfwInit() and sets up some global vars.
    //
    // returns true if initialization was successful or if initialize() previously succeeded.
    bool initialize()
    {
        if (s_glfwTerminator)
        {
            return true;
        }

        glfwSetErrorCallback(
            [](int errorCode, const char* description) { OMNI_LOG_ERROR("GLFW error: %d: %s", errorCode, description); });

        int result = glfwInit();
        if (GLFW_FALSE == result)
        {
            OMNI_LOG_ERROR("GLFW initialization failed.");
            return false;
        }

        for (size_t idx = 0; idx < g_sdlGameControllerDbCount; ++idx)
        {
            glfwUpdateGamepadMappings(g_sdlGameControllerDb[idx]);
        }

        s_mainThreadId = std::this_thread::get_id();
        s_glfwTerminator.reset(new GlfwTerminator);

        return true;
    }

    // A list of objects to iterate over, invoking a supplied callback on each object.  While executing a callback, the list
    // can be modified by the callback itself.
    //
    // The design expectation of this class is that there will be few objects, objects will be infrequently added and
    // removed from the list, and the callback will be invoked often.
    template <typename T>
    class CallbackList
    {
    public:
        CallbackList() = default;

        // invokes the given function on each item in the list
        void call(const std::function<void(T*)>& callback)
        {
            m_inCallback = true;

            // we capture the size of the list at the start of the loop.  this ensures that if an object is added while
            // processing, it will not be notified (it shouldn't be notified because the event happened before the object
            // was added to the list).
            size_t i = 0;
            size_t sz = m_objects.size();

            while (i < sz)
            {
                if (m_objects[i]) // pointer can be nullptr if it was removed in another callback
                {
                    callback(m_objects[i].get());
                }

                ++i;
            }

            m_inCallback = false;

            // we repack (remove holes) the array if an object was removed during one of the callbacks
            if (m_shouldRepack)
            {
                // remove all nullptrs
                m_objects.erase(
                    std::remove_if(m_objects.begin(), m_objects.end(), [](const omni::ObjectPtr<T>& obj) { return !obj; }),
                    m_objects.end());
                m_shouldRepack = false;
            }
        }

        void add(T* obj)
        {
            OMNI_ASSERT(obj);
            m_objects.emplace_back(obj, omni::kBorrow);
        }

        void remove(const T* obj)
        {
            // we use reverse iterators here because we want to remove the latest copy of obj
            auto itr = std::find(m_objects.rbegin(), m_objects.rend(), obj);
            if (m_objects.rend() != itr)
            {
                itr->release();
                m_shouldRepack = true;
            }
        }

    private:
        CARB_PREVENT_COPY_AND_MOVE(CallbackList);

        std::vector<omni::ObjectPtr<T>> m_objects;
        bool m_inCallback{ false };
        bool m_shouldRepack{ false };
    };

    class Keyboard;
    class Mouse;

    // A buffer of events.  Each event is associated with a device it should be delivered to.
    //
    // This buffer is used to buffer events generated outside of the main thread.  WindowSystem will process the events
    // during its event loop.
    //
    // Events have an associated device pointer, but do not increment the device's reference count.  This can lead to the
    // device pointer becoming invalid.  It is up to devices to call remove() when the device is being destructed to remove
    // the device's events from the event buffer.
    class EventBuffer
    {
    private:
        enum class EventType
        {
            kKeyboard,
            kMouse,

            // when a device is removed, we mark all of its events as removed rather than physically removing them from the
            // event list. the list is implicitly cleaned up during the ping-pong.
            kRemoved,
        };

    public:
        EventBuffer() = default;
        ~EventBuffer() = default; // events will be dropped

        void add(Keyboard* keyboard, const input::KeyboardEvent& event)
        {
            UniqueLock lock(m_mutex);
            auto buffer = getEventBuffer();
            auto itr = buffer->emplace({});
            itr->type = EventType::kKeyboard;
            itr->keyboard = keyboard;
            std::memcpy(&(itr->keyboardEvent), &event, sizeof(event));
        }

        void remove(Keyboard* keyboard)
        {
            UniqueLock lock(m_mutex);
            for (auto& event : *getEventBuffer())
            {
                if ((EventType::kKeyboard == event.type) && (event.keyboard == keyboard))
                {
                    event.type = EventType::kRemoved;
                }
            }
        }

        void add(Mouse* mouse, const input::MouseEvent* event)
        {
            UniqueLock lock(m_mutex);
            auto buffer = getEventBuffer();
            auto itr = buffer->emplace({});
            itr->type = EventType::kMouse;
            itr->mouse = mouse;
            std::memcpy(&(itr->keyboardEvent), event, sizeof(*event));
        }

        void remove(Mouse* mouse)
        {
            UniqueLock lock(m_mutex);
            for (auto& event : *getEventBuffer())
            {
                if ((EventType::kMouse == event.type) && (event.mouse == mouse))
                {
                    event.type = EventType::kRemoved;
                }
            }
        }

        void processEvents();

        bool isProcessingEvents()
        {
            SharedLock lock(m_mutex);
            return m_isProcessingEvents;
        }

    private:
        CARB_PREVENT_COPY_AND_MOVE(EventBuffer);

        struct Event
        {
            EventType type;
            union
            {
                struct
                {
                    Keyboard* keyboard;
                    input::KeyboardEvent keyboardEvent;
                };

                struct
                {
                    Mouse* mouse;
                    input::MouseEvent mouseEvent;
                };
            };
        };

        std::vector<Event>* getEventBuffer()
        {
            return &(m_eventBuffers[m_eventBufferIndex]);
        }

        carb::thread::recursive_shared_mutex m_mutex;
        bool m_isProcessingEvents{ false };
        size_t m_eventBufferIndex{ 0 };
        std::array<std::vector<Event>, 2> m_eventBuffers;
    };

    class Gamepad : public omni::Implements<input::IGamepad>
    {
    protected:
        // abi /////////////////////////////////////////////////////////////////////////////////////////////////////////////

        virtual void addOnStateChangeConsumer_abi(input::IGamepadOnStateChangeConsumer* consumer) noexcept override
        {
            UniqueLock lock(m_mutex);
            m_onStateChangeConsumers.add(consumer);
        }

        virtual void removeOnStateChangeConsumer_abi(input::IGamepadOnStateChangeConsumer* consumer) noexcept override
        {
            UniqueLock lock(m_mutex);
            m_onStateChangeConsumers.remove(consumer);
        }

        virtual void getState_abi(input::GamepadState* outState) noexcept override
        {
            SharedLock lock(m_mutex);
            const input::GamepadState* state = &(m_state[m_stateIndex]);
            std::memcpy(outState, state, sizeof(*state));
        }

        virtual omni::Result setState_abi(const input::GamepadState* incomingState) noexcept override
        {
            UniqueLock lock(m_mutex);

            if (m_inNotify)
            {
                // we're not allowed to change the state of the gamepad while we're in the process of notifying consumers of
                // a state change.
                return omni::kResultInvalidState;
            }

            const input::GamepadState* oldState = &(m_state[m_stateIndex]);
            m_stateIndex = (m_stateIndex + 1) % m_state.size();
            input::GamepadState* newState = &(m_state[m_stateIndex]);

            std::memcpy(newState, incomingState, sizeof(*newState));

            notifyConsumers(oldState, newState);

            return omni::kResultSuccess;
        }

        // implementation details //////////////////////////////////////////////////////////////////////////////////////////

    public:
        using ConnectFn = std::function<void(Gamepad*, bool)>;

        Gamepad(ConnectFn connectFn, int glfwIndex) : m_onConnect(std::move(connectFn)), m_glfwIndex{ glfwIndex }
        {
            input::GamepadState* state = &(m_state[m_stateIndex]);
            std::memset(state, 0, sizeof(*state));
            update();
        }

        void update()
        {
            ASSERT_IS_MAIN_THREAD();

            UniqueLock lock(m_mutex);

            const input::GamepadState* oldState = &(m_state[m_stateIndex]);
            m_stateIndex = (m_stateIndex + 1) % m_state.size();
            input::GamepadState* newState = &(m_state[m_stateIndex]);

            memset(newState, 0, sizeof(*newState));
            newState->isConnected = glfwJoystickPresent(m_glfwIndex);

            GLFWgamepadstate state;
            if (newState->isConnected && (GLFW_TRUE == glfwGetGamepadState(GLFW_JOYSTICK_1 + m_glfwIndex, &state)))
            {
                newState->leftStick.x = state.axes[GLFW_GAMEPAD_AXIS_LEFT_X];
                newState->leftStick.y = -state.axes[GLFW_GAMEPAD_AXIS_LEFT_Y];

                newState->rightStick.x = state.axes[GLFW_GAMEPAD_AXIS_RIGHT_X];
                newState->rightStick.y = -state.axes[GLFW_GAMEPAD_AXIS_RIGHT_Y];

                auto normalize = [](float x) -> float { return (x + 1.0f) / 2.0f; };
                newState->leftTrigger = normalize(state.axes[GLFW_GAMEPAD_AXIS_LEFT_TRIGGER]);
                newState->rightTrigger = normalize(state.axes[GLFW_GAMEPAD_AXIS_RIGHT_TRIGGER]);

                newState->a = (GLFW_PRESS == state.buttons[GLFW_GAMEPAD_BUTTON_A]) ? 1.0f : 0.0f;
                newState->b = (GLFW_PRESS == state.buttons[GLFW_GAMEPAD_BUTTON_B]) ? 1.0f : 0.0f;
                newState->x = (GLFW_PRESS == state.buttons[GLFW_GAMEPAD_BUTTON_X]) ? 1.0f : 0.0f;
                newState->y = (GLFW_PRESS == state.buttons[GLFW_GAMEPAD_BUTTON_Y]) ? 1.0f : 0.0f;

                newState->leftStickButton = (GLFW_PRESS == state.buttons[GLFW_GAMEPAD_BUTTON_LEFT_THUMB]) ? 1.0f : 0.0f;
                newState->rightStickButton = (GLFW_PRESS == state.buttons[GLFW_GAMEPAD_BUTTON_RIGHT_THUMB]) ? 1.0f : 0.0f;

                newState->leftShoulder = (GLFW_PRESS == state.buttons[GLFW_GAMEPAD_BUTTON_LEFT_BUMPER]) ? 1.0f : 0.0f;
                newState->rightShoulder = (GLFW_PRESS == state.buttons[GLFW_GAMEPAD_BUTTON_RIGHT_BUMPER]) ? 1.0f : 0.0f;

                newState->select = (GLFW_PRESS == state.buttons[GLFW_GAMEPAD_BUTTON_BACK]);
                newState->start = (GLFW_PRESS == state.buttons[GLFW_GAMEPAD_BUTTON_START]);

                if (GLFW_PRESS == state.buttons[GLFW_GAMEPAD_BUTTON_DPAD_LEFT])
                {
                    newState->directionPad.x = -1;
                }
                else if (GLFW_PRESS == state.buttons[GLFW_GAMEPAD_BUTTON_DPAD_RIGHT])
                {
                    newState->directionPad.x = 1;
                }

                if (GLFW_PRESS == state.buttons[GLFW_GAMEPAD_BUTTON_DPAD_DOWN])
                {
                    newState->directionPad.y = -1;
                }
                else if (GLFW_PRESS == state.buttons[GLFW_GAMEPAD_BUTTON_DPAD_UP])
                {
                    newState->directionPad.y = 1;
                }
            }

            notifyConsumers(oldState, newState);
        }

        void notifyConsumers(const input::GamepadState* oldState, const input::GamepadState* newState)
        {
            if (0 == std::memcmp(oldState, newState, sizeof(*newState)))
            {
                return; // no state change
            }

            m_inNotify = true;

            m_onStateChangeConsumers.call([=](input::IGamepadOnStateChangeConsumer* consumer) {
                consumer->onGamepadStateChange(this, oldState, newState);
                });

            if (oldState->isConnected != newState->isConnected)
            {
                m_onConnect(this, newState->isConnected);
            }

            m_inNotify = false;
        }

    private:
        ConnectFn m_onConnect;
        int m_glfwIndex;
        bool m_inNotify{ false };
        std::array<input::GamepadState, 2> m_state;
        size_t m_stateIndex{ 0 };
        CallbackList<input::IGamepadOnStateChangeConsumer> m_onStateChangeConsumers;
        carb::thread::recursive_shared_mutex m_mutex;
    };

    class WindowSystem : public omni::Implements<windowing::IWindowSystem>
    {
    protected:
        // abi /////////////////////////////////////////////////////////////////////////////////////////////////////////////

        virtual windowing::IWindow* createWindow_abi(omni::UInt2 size,
            const char* title,
            windowing::WindowHints hints) noexcept override;

        virtual void addOnGamepadConnectConsumer_abi(input::IGamepadOnConnectConsumer* consumer) noexcept override
        {
            ASSERT_IS_MAIN_THREAD();
            m_onGamepadConnectConsumers.add(consumer);
        }

        virtual void removeOnGamepadConnectConsumer_abi(input::IGamepadOnConnectConsumer* consumer) noexcept override
        {
            ASSERT_IS_MAIN_THREAD();
            m_onGamepadConnectConsumers.remove(consumer);
        }

        virtual void pollEvents_abi() noexcept override;

        virtual void waitEvents_abi() noexcept override;

    public:
        // implementation details //////////////////////////////////////////////////////////////////////////////////////////

        WindowSystem();

    private:
        void pollGamepads() noexcept;

        std::shared_ptr<EventBuffer> m_eventBuffer;

        std::vector<omni::ObjectPtr<Gamepad>> m_gamepads{ GLFW_JOYSTICK_LAST + 1 };
        CallbackList<input::IGamepadOnConnectConsumer> m_onGamepadConnectConsumers;
    };

    class Keyboard : public omni::Implements<input::IKeyboard>
    {
    protected:
        // abi /////////////////////////////////////////////////////////////////////////////////////////////////////////////

        virtual void addOnEventConsumer_abi(input::IKeyboardOnEventConsumer* consumer) noexcept override
        {
            UniqueLock lock(m_mutex);
            m_onEventConsumers.add(consumer);
        }

        virtual void removeOnEventConsumer_abi(input::IKeyboardOnEventConsumer* consumer) noexcept override
        {
            UniqueLock lock(m_mutex);
            m_onEventConsumers.remove(consumer);
        }

        virtual bool isKeyDown_abi(input::KeyboardKey key) noexcept override
        {
            SharedLock lock(m_mutex);
            return m_isKeyDown[static_cast<size_t>(key)];
        }

        virtual omni::Result addEvent_abi(const input::KeyboardEvent* event) noexcept override
        {
            UniqueLock lock(m_mutex);

            if (!isMainThread() || m_eventBuffer->isProcessingEvents())
            {
                m_eventBuffer->add(this, *event);
            }
            else
            {
                doProcessEvent(*event);
            }

            return omni::kResultSuccess;
        }

        // implementation details //////////////////////////////////////////////////////////////////////////////////////////

    public:
        Keyboard(std::shared_ptr<EventBuffer> eventBuffer) : m_eventBuffer(std::move(eventBuffer))
        {
        }

        ~Keyboard()
        {
            // m_eventBuffer doesn't increment our reference count (to avoid cyclical dependencies) so we must explicitly
            // remove our events from the event buffer.
            m_eventBuffer->remove(this);
        }

        input::KeyboardModifierFlags getModifiers() noexcept
        {
            return m_modifiers;
        }

        void processEvent(const input::KeyboardEvent& event) noexcept
        {
            UniqueLock lock(m_mutex);
            doProcessEvent(event);
        }

    private:
        void doProcessEvent(const input::KeyboardEvent& event) noexcept
        {
            if (input::KeyboardEventType::eKeyPress == event.type)
            {
                m_isKeyDown[static_cast<size_t>(event.key)] = true;
            }
            else if (input::KeyboardEventType::eKeyRelease == event.type)
            {
                m_isKeyDown[static_cast<size_t>(event.key)] = false;
            }

            m_modifiers = event.modifiers;

            m_onEventConsumers.call(
                [=](input::IKeyboardOnEventConsumer* consumer) { consumer->onKeyboardEvent(this, &event); });
        }

        std::shared_ptr<EventBuffer> m_eventBuffer;

        carb::thread::recursive_shared_mutex m_mutex;
        CallbackList<input::IKeyboardOnEventConsumer> m_onEventConsumers;

        std::bitset<static_cast<size_t>(input::KeyboardKey::eCount)> m_isKeyDown;
        input::KeyboardModifierFlags m_modifiers{ 0 };
    };

    class Mouse : public omni::Implements<input::IMouse>
    {
    protected:
        // abi /////////////////////////////////////////////////////////////////////////////////////////////////////////////

        virtual void addOnEventConsumer_abi(input::IMouseOnEventConsumer* consumer) noexcept override
        {
            UniqueLock lock(m_mutex);
            m_onEventConsumers.add(consumer);
        }

        virtual void removeOnEventConsumer_abi(input::IMouseOnEventConsumer* consumer) noexcept override
        {
            UniqueLock lock(m_mutex);
            m_onEventConsumers.remove(consumer);
        }

        virtual bool isButtonDown_abi(input::MouseButton button) noexcept override
        {
            SharedLock lock(m_mutex);
            return m_isButtonDown[static_cast<size_t>(button)];
        }

        virtual omni::Result addEvent_abi(const input::MouseEvent* event) noexcept override
        {
            UniqueLock lock(m_mutex);

            if (!isMainThread() || m_eventBuffer->isProcessingEvents())
            {
                m_eventBuffer->add(this, event);
            }
            else
            {
                doProcessEvent(event);
            }

            return omni::kResultSuccess;
        }

        virtual omni::Float2 getPosition_abi() noexcept override
        {
            SharedLock lock(m_mutex);
            return m_position;
        }

        virtual omni::UInt2 getSize_abi() noexcept override
        {
            SharedLock lock(m_mutex);
            return m_size;
        }

        // implementation details //////////////////////////////////////////////////////////////////////////////////////////

    public:
        Mouse(std::shared_ptr<EventBuffer> eventBuffer) : m_eventBuffer(std::move(eventBuffer))
        {
        }

        ~Mouse()
        {
            // m_eventBuffer doesn't increment our reference count (to avoid cyclical dependencies) so we must explicitly
            // remove our events from the event buffer.
            m_eventBuffer->remove(this);
        }

        void setSize(omni::UInt2& sz) noexcept
        {
            UniqueLock lock(m_mutex);
            m_size = sz;
        }

        void processEvent(const input::MouseEvent* event) noexcept
        {
            UniqueLock lock(m_mutex);
            doProcessEvent(event);
        }

    private:
        void doProcessEvent(const input::MouseEvent* event) noexcept
        {
            if (input::MouseEventType::eButtonPress == event->type)
            {
                m_isButtonDown[static_cast<size_t>(event->button)] = true;
            }
            else if (input::MouseEventType::eButtonRelease == event->type)
            {
                m_isButtonDown[static_cast<size_t>(event->button)] = false;
            }
            else if (input::MouseEventType::eMotion == event->type)
            {
                m_position = event->position;
            }

            m_onEventConsumers.call([=](input::IMouseOnEventConsumer* consumer) { consumer->onMouseEvent(this, event); });
        }

        std::shared_ptr<EventBuffer> m_eventBuffer;

        carb::thread::recursive_shared_mutex m_mutex;
        CallbackList<input::IMouseOnEventConsumer> m_onEventConsumers;

        std::bitset<static_cast<size_t>(input::MouseButton::eCount)> m_isButtonDown;
        omni::Float2 m_position{ 0.0f, 0.0f };
        omni::UInt2 m_size{ 0, 0 };
    };

    int getRectangleOverlap(omni::Int2 r0Pos, omni::Int2 r0Size, omni::Int2 r1Pos, omni::Int2 r1Size)
    {
        omni::Int2 r0PosSize;
        r0PosSize.x = r0Pos.x + r0Size.x;
        r0PosSize.y = r0Pos.y + r0Size.y;

        omni::Int2 r1PosSize;
        r1PosSize.x = r1Pos.x + r1Size.x;
        r1PosSize.y = r1Pos.y + r1Size.y;

        int overlapX = std::max(0, std::min(r0PosSize.x, r1PosSize.x) - std::max(r0Pos.x, r1Pos.x));
        int overlapY = std::max(0, std::min(r0PosSize.y, r1PosSize.y) - std::max(r0Pos.y, r1Pos.y));

        return overlapX * overlapY;
    }

    class Window : public omni::Implements<windowing::IWindow>
    {
    protected:
        // abi /////////////////////////////////////////////////////////////////////////////////////////////////////////////

        virtual void setShown_abi(bool shouldShow) noexcept override
        {
            ASSERT_IS_MAIN_THREAD();
            if (shouldShow)
            {
                glfwShowWindow(m_window);
            }
            else
            {
                glfwHideWindow(m_window);
            }
        }

        virtual bool isShown_abi() noexcept override
        {
            ASSERT_IS_MAIN_THREAD();
            return !!glfwGetWindowAttrib(m_window, GLFW_VISIBLE);
        }

        virtual omni::Int2 getPosition_abi() noexcept override
        {
            ASSERT_IS_MAIN_THREAD();
            omni::Int2 pos;
            glfwGetWindowPos(m_window, &(pos.x), &(pos.y));
            return { pos.x, pos.y };
        }

        virtual void setPosition_abi(omni::Int2 pos) noexcept override
        {
            ASSERT_IS_MAIN_THREAD();
            glfwSetWindowPos(m_window, pos.x, pos.y);
        }

        virtual void setFullscreen_abi(bool enable) noexcept override
        {
            ASSERT_IS_MAIN_THREAD();
            if (enable == m_isFullscreen)
            {
                return;
            }

            if (enable)
            {
                glfwGetWindowPos(m_window, &(m_windowedPosition.x), &(m_windowedPosition.y));
                glfwGetWindowSize(m_window, &(m_windowedSize.x), &(m_windowedSize.y));
                GLFWmonitor* monitor = getMonitor();
                const GLFWvidmode* mode = glfwGetVideoMode(monitor);
                glfwSetWindowMonitor(m_window, monitor, 0, 0, mode->width, mode->height, mode->refreshRate);
                glfwSetWindowSize(m_window, mode->width, mode->height);
            }
            else
            {
                glfwSetWindowMonitor(m_window, nullptr, m_windowedPosition.x, m_windowedPosition.y, m_windowedSize.x,
                    m_windowedSize.y, GLFW_DONT_CARE);
                glfwSetWindowSize(m_window, m_windowedSize.x, m_windowedSize.y);
            }

            m_isFullscreen = enable;
        }

        virtual bool isFullscreen_abi() noexcept override
        {
            ASSERT_IS_MAIN_THREAD();
            return m_isFullscreen;
        }

        virtual void setMaximized_abi(bool maximized) noexcept override
        {
            ASSERT_IS_MAIN_THREAD();
            if (maximized == isMaximized_abi())
            {
                return;
            }

            if (maximized)
            {
                glfwMaximizeWindow(m_window);
            }
            else
            {
                glfwRestoreWindow(m_window);
            }
        }

        virtual bool isMaximized_abi() noexcept override
        {
            ASSERT_IS_MAIN_THREAD();
            return glfwGetWindowAttrib(m_window, GLFW_MAXIMIZED) == GLFW_TRUE;
        }

        virtual void addOnMaximizeConsumer_abi(windowing::IWindowOnMaximizeConsumer* consumer) noexcept override
        {
            ASSERT_IS_MAIN_THREAD();
            m_onMaximizeConsumers.add(consumer);
        }

        virtual void removeOnMaximizeConsumer_abi(windowing::IWindowOnMaximizeConsumer* consumer) noexcept override
        {
            ASSERT_IS_MAIN_THREAD();
            m_onMaximizeConsumers.remove(consumer);
        }

        virtual void setMinimized_abi(bool enable) noexcept override
        {
            ASSERT_IS_MAIN_THREAD();
            if (enable == isMinimized_abi())
            {
                return;
            }

            if (enable)
            {
                glfwIconifyWindow(m_window);
            }
            else
            {
                glfwRestoreWindow(m_window);
            }
        }

        virtual bool isMinimized_abi() noexcept override
        {
            ASSERT_IS_MAIN_THREAD();
            return glfwGetWindowAttrib(m_window, GLFW_ICONIFIED) == GLFW_TRUE;
        }

        virtual void addOnMinimizeConsumer_abi(windowing::IWindowOnMinimizeConsumer* consumer) noexcept override
        {
            ASSERT_IS_MAIN_THREAD();
            m_onMinimizeConsumers.add(consumer);
        }

        virtual void removeOnMinimizeConsumer_abi(windowing::IWindowOnMinimizeConsumer* consumer) noexcept override
        {
            ASSERT_IS_MAIN_THREAD();
            m_onMinimizeConsumers.remove(consumer);
        }

        virtual void focus_abi() noexcept override
        {
            ASSERT_IS_MAIN_THREAD();
            glfwFocusWindow(m_window);
        }

        virtual bool isFocused_abi() noexcept override
        {
            ASSERT_IS_MAIN_THREAD();
            return !!glfwGetWindowAttrib(m_window, GLFW_FOCUSED);
        }

        virtual void addOnFocusConsumer_abi(windowing::IWindowOnFocusConsumer* consumer) noexcept override
        {
            ASSERT_IS_MAIN_THREAD();
            m_onFocusConsumers.add(consumer);
        }

        virtual void removeOnFocusConsumer_abi(windowing::IWindowOnFocusConsumer* consumer) noexcept override
        {
            ASSERT_IS_MAIN_THREAD();
            m_onFocusConsumers.remove(consumer);
        }

        virtual void setSize_abi(omni::UInt2 sz) noexcept override
        {
            ASSERT_IS_MAIN_THREAD();
            glfwSetWindowSize(m_window, int(sz.x), int(sz.y));
        }

        virtual omni::UInt2 getSize_abi() noexcept override
        {
            ASSERT_IS_MAIN_THREAD();
            return { uint32_t(m_size.x), uint32_t(m_size.y) };
        }

        virtual void addOnResizeConsumer_abi(windowing::IWindowOnResizeConsumer* consumer) noexcept override
        {
            ASSERT_IS_MAIN_THREAD();
            m_onResizeConsumers.add(consumer);
        }

        virtual void removeOnResizeConsumer_abi(windowing::IWindowOnResizeConsumer* consumer) noexcept override
        {
            ASSERT_IS_MAIN_THREAD();
            m_onResizeConsumers.remove(consumer);
        }

        virtual void setShouldClose_abi(bool shouldClose) noexcept override
        {
            ASSERT_IS_MAIN_THREAD();
            glfwSetWindowShouldClose(m_window, shouldClose);
        }

        virtual bool getShouldClose_abi() noexcept override
        {
            ASSERT_IS_MAIN_THREAD();
            return glfwWindowShouldClose(m_window);
        }

        virtual void addOnCloseConsumer_abi(windowing::IWindowOnCloseConsumer* consumer) noexcept override
        {
            ASSERT_IS_MAIN_THREAD();
            m_onCloseConsumers.add(consumer);
        }

        virtual void removeOnCloseConsumer_abi(windowing::IWindowOnCloseConsumer* consumer) noexcept override
        {
            ASSERT_IS_MAIN_THREAD();
            m_onCloseConsumers.remove(consumer);
        }

        virtual void addOnDropConsumer_abi(windowing::IWindowOnDropConsumer* consumer) noexcept override
        {
            ASSERT_IS_MAIN_THREAD();
            m_onDropConsumers.add(consumer);
        }

        virtual void removeOnDropConsumer_abi(windowing::IWindowOnDropConsumer* consumer) noexcept override
        {
            ASSERT_IS_MAIN_THREAD();
            m_onDropConsumers.remove(consumer);
        }

        virtual omni::Float2 getContentScale_abi() noexcept override
        {
            ASSERT_IS_MAIN_THREAD();
            omni::Float2 out;
            glfwGetWindowContentScale(m_window, &(out.x), &(out.y));
            return out;
        }

        virtual void addOnContentScaleConsumer_abi(windowing::IWindowOnContentScaleConsumer* consumer) noexcept override
        {
            ASSERT_IS_MAIN_THREAD();
            m_onContentScaleConsumers.add(consumer);
        }

        virtual void removeOnContentScaleConsumer_abi(windowing::IWindowOnContentScaleConsumer* consumer) noexcept override
        {
            ASSERT_IS_MAIN_THREAD();
            m_onContentScaleConsumers.remove(consumer);
        }

        virtual void addOnMouseOverConsumer_abi(windowing::IWindowOnMouseOverConsumer* consumer) noexcept override
        {
            ASSERT_IS_MAIN_THREAD();
            m_onMouseOverConsumers.add(consumer);
        }

        virtual void removeOnMouseOverConsumer_abi(windowing::IWindowOnMouseOverConsumer* consumer) noexcept override
        {
            ASSERT_IS_MAIN_THREAD();
            m_onMouseOverConsumers.remove(consumer);
        }

        virtual void* getNativeDisplay_abi() noexcept override
        {
            ASSERT_IS_MAIN_THREAD();
#    if CARB_PLATFORM_WINDOWS
            return nullptr;
#    elif CARB_PLATFORM_LINUX
            return glfwGetX11Display();
#    elif CARB_PLATFORM_MACOS
            CARB_MACOS_UNIMPLEMENTED(); // CC-673
            return nullptr;
#    else
            CARB_UNSUPPORTED_PLATFORM();
#    endif
        }

        virtual void* getNativeWindow_abi() noexcept override
        {
            ASSERT_IS_MAIN_THREAD();
#    if CARB_PLATFORM_WINDOWS
            return glfwGetWin32Window(m_window);
#    elif CARB_PLATFORM_LINUX
            return reinterpret_cast<void*>(glfwGetX11Window(m_window));
#    elif CARB_PLATFORM_MACOS
            CARB_MACOS_UNIMPLEMENTED(); // CC-673
            return nullptr;
#    else
            CARB_UNSUPPORTED_PLATFORM();
#    endif
        }

        virtual input::IKeyboard* getKeyboard_abi() noexcept override
        {
            ASSERT_IS_MAIN_THREAD();
            m_keyboard->acquire();
            return m_keyboard.get();
        }

        virtual input::IMouse* getMouse_abi() noexcept override
        {
            ASSERT_IS_MAIN_THREAD();
            m_mouse->acquire();
            return m_mouse.get();
        }

        virtual void setClipboardText_abi(const char* text) noexcept override
        {
            ASSERT_IS_MAIN_THREAD();
            glfwSetClipboardString(m_window, text);
        }

        virtual const char* getClipboardText_abi() noexcept override
        {
            ASSERT_IS_MAIN_THREAD();
            return glfwGetClipboardString(m_window);
        }

        virtual omni::Result setCursor_abi(windowing::CursorType type) noexcept override
        {
            ASSERT_IS_MAIN_THREAD();

            omni::Result result = omni::kResultSuccess;
            GLFWcursor* glfwCursor = nullptr;
            switch (type)
            {
            case windowing::CursorType::eArrow:
                glfwCursor = glfwCreateStandardCursor(GLFW_ARROW_CURSOR);
                break;
            case windowing::CursorType::eIBeam:
                glfwCursor = glfwCreateStandardCursor(GLFW_IBEAM_CURSOR);
                break;
            case windowing::CursorType::eCrosshair:
                glfwCursor = glfwCreateStandardCursor(GLFW_CROSSHAIR_CURSOR);
                break;
            case windowing::CursorType::eHand:
                glfwCursor = glfwCreateStandardCursor(GLFW_HAND_CURSOR);
                break;
            case windowing::CursorType::eHorizontalResize:
                glfwCursor = glfwCreateStandardCursor(GLFW_HRESIZE_CURSOR);
                break;
            case windowing::CursorType::eVerticalResize:
                glfwCursor = glfwCreateStandardCursor(GLFW_VRESIZE_CURSOR);
                break;
            default:
                glfwCursor = glfwCreateStandardCursor(GLFW_ARROW_CURSOR); // fallback to arrow.
                result = omni::kResultNotSupported;
            }

            m_cursor.reset(glfwCursor); // accepts nullptr
            glfwSetCursor(m_window, m_cursor.get()); // accepts nullptr
            return result;
        }

        virtual void setCustomCursor_abi(windowing::ICursor* cursor) noexcept override
        {
            ASSERT_IS_MAIN_THREAD();

            if (cursor)
            {
                omni::UInt2 sz = cursor->getSize();
                omni::Int2 hotSpot = cursor->getHotSpot();
                GLFWimage image{ int(sz.x), int(sz.y), const_cast<uint8_t*>(cursor->getPixels()) };
                GLFWcursor* glfwCursor = glfwCreateCursor(&image, hotSpot.x, hotSpot.y);
                m_cursor.reset(glfwCursor);
            }
            else
            {
                m_cursor.reset();
            }

            glfwSetCursor(m_window, m_cursor.get());
        }

        virtual void setTitle_abi(const char* title) noexcept override
        {
            ASSERT_IS_MAIN_THREAD();
            if (!title)
            {
                title = "";
            }
            m_title = title;
            glfwSetWindowTitle(m_window, title);
        }

        virtual const char* getTitle_abi() noexcept override
        {
            ASSERT_IS_MAIN_THREAD();
            return m_title.c_str();
        }

        virtual void setOpacity_abi(float opacity) noexcept override
        {
            ASSERT_IS_MAIN_THREAD();
            glfwSetWindowOpacity(m_window, opacity);
        }

        virtual float getOpacity_abi() noexcept override
        {
            ASSERT_IS_MAIN_THREAD();
            return glfwGetWindowOpacity(m_window);
        }

        // implementation details //////////////////////////////////////////////////////////////////////////////////////////

    public:
        Window(GLFWwindow* glfwWindow,
            const std::shared_ptr<EventBuffer>& eventBuffer,
            const char* title,
            windowing::WindowHints hints);

        ~Window()
        {
            glfwDestroyWindow(m_window);
        }

        void onMaximize(bool maximized) noexcept
        {
            m_onMaximizeConsumers.call(
                [=](windowing::IWindowOnMaximizeConsumer* consumer) { consumer->onMaximize(this, maximized); });
        }

        void onMinimize(bool minimized) noexcept
        {
            m_onMinimizeConsumers.call(
                [=](windowing::IWindowOnMinimizeConsumer* consumer) { consumer->onMinimize(this, minimized); });
        }

        void onFocus(bool focused) noexcept
        {
            m_onFocusConsumers.call([=](windowing::IWindowOnFocusConsumer* consumer) { consumer->onFocus(this, focused); });
        }

        void onResize(const omni::Int2 size) noexcept
        {
            m_size = size;

            omni::UInt2 uSize{ uint32_t(m_size.x), uint32_t(m_size.y) };
            m_mouse->setSize(uSize);

            m_onResizeConsumers.call([=](windowing::IWindowOnResizeConsumer* consumer) { consumer->onResize(this, uSize); });
        }

        void onClose() noexcept
        {
            m_onCloseConsumers.call([=](windowing::IWindowOnCloseConsumer* consumer) { consumer->onClose(this); });
        }

        void onDrop(const char* const* paths, int count) noexcept
        {
            m_onDropConsumers.call([=](windowing::IWindowOnDropConsumer* consumer) { consumer->onDrop(this, paths, count); });
        }

        void onContentScale(const omni::Float2& scale) noexcept
        {
            m_onContentScaleConsumers.call(
                [=](windowing::IWindowOnContentScaleConsumer* consumer) { consumer->onContentScale(this, scale); });
        }

        void onMouseOver(bool over) noexcept
        {
            // glfw sends a motion event followed by an enter event when the mouse enters the window. we don't want to
            // compute the position delta for the initial motion event.  so, we mark when the mouse leaves the window.
            if (!over)
            {
                m_shouldComputeMousePositionDelta = false;
            }

            m_onMouseOverConsumers.call(
                [=](windowing::IWindowOnMouseOverConsumer* consumer) { consumer->onMouseOver(this, over); });
        }

        Keyboard* getKeyboardWithoutAcquire() noexcept
        {
            return m_keyboard.get();
        }

        Mouse* getMouseWithoutAcquire() noexcept
        {
            return m_mouse.get();
        }

        bool shouldComputeMousePositionDelta() const noexcept
        {
            return m_shouldComputeMousePositionDelta;
        }

        void setShouldComputeMousePositionDelta(bool should) noexcept
        {
            m_shouldComputeMousePositionDelta = should;
        }

    private:
        GLFWmonitor* getMonitor();

        GLFWwindow* m_window = nullptr;
        bool m_isFullscreen{ false };

        omni::Int2 m_size;

        omni::Int2 m_windowedSize;
        omni::Int2 m_windowedPosition;

        omni::ObjectPtr<Keyboard> m_keyboard;

        bool m_shouldComputeMousePositionDelta{ false };
        omni::ObjectPtr<Mouse> m_mouse;

        std::string m_title;

        std::unique_ptr<GLFWcursor, decltype(&glfwDestroyCursor)> m_cursor;

        CallbackList<windowing::IWindowOnMaximizeConsumer> m_onMaximizeConsumers;
        CallbackList<windowing::IWindowOnMinimizeConsumer> m_onMinimizeConsumers;
        CallbackList<windowing::IWindowOnFocusConsumer> m_onFocusConsumers;
        CallbackList<windowing::IWindowOnResizeConsumer> m_onResizeConsumers;
        CallbackList<windowing::IWindowOnCloseConsumer> m_onCloseConsumers;
        CallbackList<windowing::IWindowOnDropConsumer> m_onDropConsumers;
        CallbackList<windowing::IWindowOnContentScaleConsumer> m_onContentScaleConsumers;
        CallbackList<windowing::IWindowOnMouseOverConsumer> m_onMouseOverConsumers;
    };

    void onWindowMaximize(GLFWwindow* glfwWindow, int maximized)
    {
        auto window = static_cast<Window*>(glfwGetWindowUserPointer(glfwWindow));
        window->onMaximize(!!maximized);
    }

    void onWindowMinimize(GLFWwindow* glfwWindow, int iconified)
    {
        auto window = static_cast<Window*>(glfwGetWindowUserPointer(glfwWindow));
        window->onMinimize(!!iconified);
    }

    void onWindowFocus(GLFWwindow* glfwWindow, int focused)
    {
        auto window = static_cast<Window*>(glfwGetWindowUserPointer(glfwWindow));
        window->onFocus(!!focused);
    }

    void onWindowResize(GLFWwindow* glfwWindow, int width, int height)
    {
        // We also get here in case the window was minimized, so we need to ignore it
        if ((width < 1) || (height < 1))
        {
            return;
        }

        auto window = static_cast<Window*>(glfwGetWindowUserPointer(glfwWindow));
        window->onResize({ width, height });
    }

    void onWindowClose(GLFWwindow* glfwWindow)
    {
        auto window = static_cast<Window*>(glfwGetWindowUserPointer(glfwWindow));
        window->onClose();
    }

    void onWindowDrop(GLFWwindow* glfwWindow, int count, const char** paths)
    {
        auto window = static_cast<Window*>(glfwGetWindowUserPointer(glfwWindow));
        window->onDrop(paths, count);
    }

    void onWindowContentScale(GLFWwindow* glfwWindow, float scaleX, float scaleY)
    {
        auto window = static_cast<Window*>(glfwGetWindowUserPointer(glfwWindow));
        window->onContentScale({ scaleX, scaleY });
    }

    input::KeyboardKey glfwToKey(int glfwKey)
    {
        switch (glfwKey)
        {
        case GLFW_KEY_SPACE:
            return input::KeyboardKey::eSpace;
        case GLFW_KEY_APOSTROPHE:
            return input::KeyboardKey::eApostrophe;
        case GLFW_KEY_COMMA:
            return input::KeyboardKey::eComma;
        case GLFW_KEY_MINUS:
            return input::KeyboardKey::eMinus;
        case GLFW_KEY_PERIOD:
            return input::KeyboardKey::ePeriod;
        case GLFW_KEY_SLASH:
            return input::KeyboardKey::eSlash;
        case GLFW_KEY_0:
            return input::KeyboardKey::eKey0;
        case GLFW_KEY_1:
            return input::KeyboardKey::eKey1;
        case GLFW_KEY_2:
            return input::KeyboardKey::eKey2;
        case GLFW_KEY_3:
            return input::KeyboardKey::eKey3;
        case GLFW_KEY_4:
            return input::KeyboardKey::eKey4;
        case GLFW_KEY_5:
            return input::KeyboardKey::eKey5;
        case GLFW_KEY_6:
            return input::KeyboardKey::eKey6;
        case GLFW_KEY_7:
            return input::KeyboardKey::eKey7;
        case GLFW_KEY_8:
            return input::KeyboardKey::eKey8;
        case GLFW_KEY_9:
            return input::KeyboardKey::eKey9;
        case GLFW_KEY_SEMICOLON:
            return input::KeyboardKey::eSemicolon;
        case GLFW_KEY_EQUAL:
            return input::KeyboardKey::eEqual;
        case GLFW_KEY_A:
            return input::KeyboardKey::eA;
        case GLFW_KEY_B:
            return input::KeyboardKey::eB;
        case GLFW_KEY_C:
            return input::KeyboardKey::eC;
        case GLFW_KEY_D:
            return input::KeyboardKey::eD;
        case GLFW_KEY_E:
            return input::KeyboardKey::eE;
        case GLFW_KEY_F:
            return input::KeyboardKey::eF;
        case GLFW_KEY_G:
            return input::KeyboardKey::eG;
        case GLFW_KEY_H:
            return input::KeyboardKey::eH;
        case GLFW_KEY_I:
            return input::KeyboardKey::eI;
        case GLFW_KEY_J:
            return input::KeyboardKey::eJ;
        case GLFW_KEY_K:
            return input::KeyboardKey::eK;
        case GLFW_KEY_L:
            return input::KeyboardKey::eL;
        case GLFW_KEY_M:
            return input::KeyboardKey::eM;
        case GLFW_KEY_N:
            return input::KeyboardKey::eN;
        case GLFW_KEY_O:
            return input::KeyboardKey::eO;
        case GLFW_KEY_P:
            return input::KeyboardKey::eP;
        case GLFW_KEY_Q:
            return input::KeyboardKey::eQ;
        case GLFW_KEY_R:
            return input::KeyboardKey::eR;
        case GLFW_KEY_S:
            return input::KeyboardKey::eS;
        case GLFW_KEY_T:
            return input::KeyboardKey::eT;
        case GLFW_KEY_U:
            return input::KeyboardKey::eU;
        case GLFW_KEY_V:
            return input::KeyboardKey::eV;
        case GLFW_KEY_W:
            return input::KeyboardKey::eW;
        case GLFW_KEY_X:
            return input::KeyboardKey::eX;
        case GLFW_KEY_Y:
            return input::KeyboardKey::eY;
        case GLFW_KEY_Z:
            return input::KeyboardKey::eZ;
        case GLFW_KEY_LEFT_BRACKET:
            return input::KeyboardKey::eLeftBracket;
        case GLFW_KEY_BACKSLASH:
            return input::KeyboardKey::eBackslash;
        case GLFW_KEY_RIGHT_BRACKET:
            return input::KeyboardKey::eRightBracket;
        case GLFW_KEY_GRAVE_ACCENT:
            return input::KeyboardKey::eGraveAccent;
        case GLFW_KEY_WORLD_1:
            return input::KeyboardKey::eUnknown;
        case GLFW_KEY_WORLD_2:
            return input::KeyboardKey::eUnknown;
        case GLFW_KEY_ESCAPE:
            return input::KeyboardKey::eEscape;
        case GLFW_KEY_ENTER:
            return input::KeyboardKey::eEnter;
        case GLFW_KEY_TAB:
            return input::KeyboardKey::eTab;
        case GLFW_KEY_BACKSPACE:
            return input::KeyboardKey::eBackspace;
        case GLFW_KEY_INSERT:
            return input::KeyboardKey::eInsert;
        case GLFW_KEY_DELETE:
            return input::KeyboardKey::eDel;
        case GLFW_KEY_RIGHT:
            return input::KeyboardKey::eRight;
        case GLFW_KEY_LEFT:
            return input::KeyboardKey::eLeft;
        case GLFW_KEY_DOWN:
            return input::KeyboardKey::eDown;
        case GLFW_KEY_UP:
            return input::KeyboardKey::eUp;
        case GLFW_KEY_PAGE_UP:
            return input::KeyboardKey::ePageUp;
        case GLFW_KEY_PAGE_DOWN:
            return input::KeyboardKey::ePageDown;
        case GLFW_KEY_HOME:
            return input::KeyboardKey::eHome;
        case GLFW_KEY_END:
            return input::KeyboardKey::eEnd;
        case GLFW_KEY_CAPS_LOCK:
            return input::KeyboardKey::eCapsLock;
        case GLFW_KEY_SCROLL_LOCK:
            return input::KeyboardKey::eScrollLock;
        case GLFW_KEY_NUM_LOCK:
            return input::KeyboardKey::eNumLock;
        case GLFW_KEY_PRINT_SCREEN:
            return input::KeyboardKey::ePrintScreen;
        case GLFW_KEY_PAUSE:
            return input::KeyboardKey::ePause;
        case GLFW_KEY_F1:
            return input::KeyboardKey::eF1;
        case GLFW_KEY_F2:
            return input::KeyboardKey::eF2;
        case GLFW_KEY_F3:
            return input::KeyboardKey::eF3;
        case GLFW_KEY_F4:
            return input::KeyboardKey::eF4;
        case GLFW_KEY_F5:
            return input::KeyboardKey::eF5;
        case GLFW_KEY_F6:
            return input::KeyboardKey::eF6;
        case GLFW_KEY_F7:
            return input::KeyboardKey::eF7;
        case GLFW_KEY_F8:
            return input::KeyboardKey::eF8;
        case GLFW_KEY_F9:
            return input::KeyboardKey::eF9;
        case GLFW_KEY_F10:
            return input::KeyboardKey::eF10;
        case GLFW_KEY_F11:
            return input::KeyboardKey::eF11;
        case GLFW_KEY_F12:
            return input::KeyboardKey::eF12;
        case GLFW_KEY_KP_0:
            return input::KeyboardKey::eNumpad0;
        case GLFW_KEY_KP_1:
            return input::KeyboardKey::eNumpad1;
        case GLFW_KEY_KP_2:
            return input::KeyboardKey::eNumpad2;
        case GLFW_KEY_KP_3:
            return input::KeyboardKey::eNumpad3;
        case GLFW_KEY_KP_4:
            return input::KeyboardKey::eNumpad4;
        case GLFW_KEY_KP_5:
            return input::KeyboardKey::eNumpad5;
        case GLFW_KEY_KP_6:
            return input::KeyboardKey::eNumpad6;
        case GLFW_KEY_KP_7:
            return input::KeyboardKey::eNumpad7;
        case GLFW_KEY_KP_8:
            return input::KeyboardKey::eNumpad8;
        case GLFW_KEY_KP_9:
            return input::KeyboardKey::eNumpad9;
        case GLFW_KEY_KP_DECIMAL:
            return input::KeyboardKey::eNumpadDel;
        case GLFW_KEY_KP_DIVIDE:
            return input::KeyboardKey::eNumpadDivide;
        case GLFW_KEY_KP_MULTIPLY:
            return input::KeyboardKey::eNumpadMultiply;
        case GLFW_KEY_KP_SUBTRACT:
            return input::KeyboardKey::eNumpadSubtract;
        case GLFW_KEY_KP_ADD:
            return input::KeyboardKey::eNumpadAdd;
        case GLFW_KEY_KP_ENTER:
            return input::KeyboardKey::eNumpadEnter;
        case GLFW_KEY_KP_EQUAL:
            return input::KeyboardKey::eNumpadEqual;
        case GLFW_KEY_LEFT_SHIFT:
            return input::KeyboardKey::eLeftShift;
        case GLFW_KEY_LEFT_CONTROL:
            return input::KeyboardKey::eLeftControl;
        case GLFW_KEY_LEFT_ALT:
            return input::KeyboardKey::eLeftAlt;
        case GLFW_KEY_LEFT_SUPER:
            return input::KeyboardKey::eLeftSuper;
        case GLFW_KEY_RIGHT_SHIFT:
            return input::KeyboardKey::eRightShift;
        case GLFW_KEY_RIGHT_CONTROL:
            return input::KeyboardKey::eRightControl;
        case GLFW_KEY_RIGHT_ALT:
            return input::KeyboardKey::eRightAlt;
        case GLFW_KEY_RIGHT_SUPER:
            return input::KeyboardKey::eRightSuper;
        case GLFW_KEY_MENU:
            return input::KeyboardKey::eMenu;
        case GLFW_KEY_UNKNOWN:
            return input::KeyboardKey::eUnknown;
        default:
            OMNI_ASSERT(!"logic error: not all glfw keys are handled in switch");
            return input::KeyboardKey::eUnknown;
        }
    }

    static input::KeyboardModifierFlags glfwToKeyboardModifiers(int glfwModifiers)
    {
        // mapped one to one currently:
        static_assert(GLFW_MOD_SHIFT == input::fKeyboardModifierFlagShift, "");
        static_assert(GLFW_MOD_CONTROL == input::fKeyboardModifierFlagControl, "");
        static_assert(GLFW_MOD_ALT == input::fKeyboardModifierFlagAlt, "");
        static_assert(GLFW_MOD_SUPER == input::fKeyboardModifierFlagSuper, "");
        static_assert(GLFW_MOD_CAPS_LOCK == input::fKeyboardModifierFlagCapsLock, "");
        static_assert(GLFW_MOD_NUM_LOCK == input::fKeyboardModifierFlagNumLock, "");
        return glfwModifiers;
    }

    void onKey(GLFWwindow* glfwWindow, int key, int scancode, int action, int mods)
    {
        auto window = static_cast<Window*>(glfwGetWindowUserPointer(glfwWindow));

        input::KeyboardEvent event;
        event.type = ((action == GLFW_RELEASE) ? input::KeyboardEventType::eKeyRelease : input::KeyboardEventType::eKeyPress);
        event.key = glfwToKey(key);
        event.modifiers = glfwToKeyboardModifiers(mods);

        window->getKeyboardWithoutAcquire()->addEvent(&event);
    }

    input::MouseButton glfwToButton(int glfwButton)
    {
        switch (glfwButton)
        {
        case GLFW_MOUSE_BUTTON_1:
            return input::MouseButton::eLeft;
        case GLFW_MOUSE_BUTTON_2:
            return input::MouseButton::eRight;
        case GLFW_MOUSE_BUTTON_3:
            return input::MouseButton::eMiddle;
        case GLFW_MOUSE_BUTTON_4:
            return input::MouseButton::e3;
        case GLFW_MOUSE_BUTTON_5:
            return input::MouseButton::e4;
        case GLFW_MOUSE_BUTTON_6:
            return input::MouseButton::e5;
        case GLFW_MOUSE_BUTTON_7:
            return input::MouseButton::e6;
        case GLFW_MOUSE_BUTTON_8:
            return input::MouseButton::e7;
        default:
            return input::MouseButton::eUnknown;
        }
    }

    input::MouseModifierFlags glfwToMouseModifiers(int glfwModifiers)
    {
        // mapped one to one currently:
        static_assert(GLFW_MOD_SHIFT == input::fMouseModifierFlagShift, "");
        static_assert(GLFW_MOD_CONTROL == input::fMouseModifierFlagControl, "");
        static_assert(GLFW_MOD_ALT == input::fMouseModifierFlagAlt, "");
        static_assert(GLFW_MOD_SUPER == input::fMouseModifierFlagSuper, "");
        static_assert(GLFW_MOD_CAPS_LOCK == input::fMouseModifierFlagCapsLock, "");
        static_assert(GLFW_MOD_NUM_LOCK == input::fMouseModifierFlagNumLock, "");
        return glfwModifiers;
    }

    void onMouse(GLFWwindow* glfwWindow, int button, int action, int mods)
    {
        auto window = static_cast<Window*>(glfwGetWindowUserPointer(glfwWindow));

        input::MouseEvent event;
        event.type = ((action == GLFW_RELEASE) ? input::MouseEventType::eButtonRelease : input::MouseEventType::eButtonPress);
        event.button = glfwToButton(button);
        event.modifiers = glfwToMouseModifiers(mods);

        window->getMouseWithoutAcquire()->addEvent(&event);
    }

    void onMouseMotion(GLFWwindow* glfwWindow, double mouseX, double mouseY)
    {
        auto window = static_cast<Window*>(glfwGetWindowUserPointer(glfwWindow));

        input::MouseEvent event { input::MouseEventType::eMotion };
        event.position.x = float(mouseX);
        event.position.y = float(mouseY);

        omni::Float2 oldPosition = window->getMouseWithoutAcquire()->getPosition();

        if (window->shouldComputeMousePositionDelta())
        {
            event.positionDelta.x = event.position.x - oldPosition.x;
            event.positionDelta.y = event.position.y - oldPosition.y;
        }
        else
        {
            event.positionDelta.x = 0.0f;
            event.positionDelta.y = 0.0f;

            // we don't compute the position delta on the first event
            window->setShouldComputeMousePositionDelta(true);
        }

        event.modifiers = window->getKeyboardWithoutAcquire()->getModifiers();

        window->getMouseWithoutAcquire()->addEvent(&event);
    }

    void onMouseScroll(GLFWwindow* glfwWindow, double scrollX, double scrollY)
    {
        auto window = static_cast<Window*>(glfwGetWindowUserPointer(glfwWindow));

        input::MouseEvent event { input::MouseEventType::eScroll };
        event.scrollDelta.x = float(scrollX);
        event.scrollDelta.y = float(scrollY);
        event.modifiers = window->getKeyboardWithoutAcquire()->getModifiers();

        window->getMouseWithoutAcquire()->addEvent(&event);
    }

    void onMouseEnter(GLFWwindow* glfwWindow, int enter)
    {
        auto window = static_cast<Window*>(glfwGetWindowUserPointer(glfwWindow));
        window->onMouseOver(!!enter);
    }

    Window::Window(GLFWwindow* glfwWindow,
        const std::shared_ptr<EventBuffer>& eventBuffer,
        const char* title,
        windowing::WindowHints hints)
        : m_window(glfwWindow),
        m_keyboard{ new Keyboard(eventBuffer), omni::kSteal },
        m_mouse{ new Mouse(eventBuffer), omni::kSteal },
        m_cursor(nullptr, glfwDestroyCursor)
    {
        setTitle(title);

        glfwSetWindowUserPointer(glfwWindow, this);

        glfwSetWindowMaximizeCallback(glfwWindow, onWindowMaximize);
        glfwSetWindowIconifyCallback(glfwWindow, onWindowMinimize);
        glfwSetWindowFocusCallback(glfwWindow, onWindowFocus);
        glfwSetWindowSizeCallback(glfwWindow, onWindowResize);
        glfwSetWindowCloseCallback(glfwWindow, onWindowClose);
        glfwSetDropCallback(glfwWindow, onWindowDrop);
        glfwSetWindowContentScaleCallback(glfwWindow, onWindowContentScale);
        glfwSetCursorEnterCallback(glfwWindow, onMouseEnter);

        glfwSetKeyCallback(glfwWindow, onKey);
        glfwSetMouseButtonCallback(glfwWindow, onMouse);
        glfwSetCursorPosCallback(glfwWindow, onMouseMotion);
        glfwSetScrollCallback(glfwWindow, onMouseScroll);

        // glfwSetCharCallback(glfwWindow, onChar); // TODO

        // TODO: needed?
        glfwGetWindowSize(glfwWindow, &(m_windowedSize.x), &(m_windowedSize.y));
        glfwGetWindowPos(glfwWindow, &(m_windowedPosition.x), &(m_windowedPosition.y));

        m_size = m_windowedSize;

        setFullscreen(hints & windowing::fWindowHintFullscreen);
    }

    GLFWmonitor* Window::getMonitor()
    {
        GLFWmonitor* retMonitor = nullptr;

        omni::Int2 wndPos;
        glfwGetWindowPos(m_window, &wndPos.x, &wndPos.y);

        int monitorCount;
        GLFWmonitor** monitors = glfwGetMonitors(&monitorCount);

        int bestOverlap = 0;
        for (int mIdx = 0; mIdx < monitorCount; ++mIdx)
        {
            GLFWmonitor* curMonitor = monitors[mIdx];
            const GLFWvidmode* mode = glfwGetVideoMode(curMonitor);

            omni::Int2 monitorPos;
            glfwGetMonitorPos(curMonitor, &monitorPos.x, &monitorPos.y);

            int overlap = getRectangleOverlap(
                wndPos, { int32_t(m_size.x), int32_t(m_size.y) }, monitorPos, { mode->width, mode->height });
            if (bestOverlap < overlap)
            {
                bestOverlap = overlap;
                retMonitor = curMonitor;
            }
        }

        return retMonitor;
    }

    windowing::IWindow* WindowSystem::createWindow_abi(omni::UInt2 size, const char* title, windowing::WindowHints hints) noexcept
    {
        OMNI_LOG_VERBOSE(kWindowChannel, "creating GLFW window");

        ASSERT_IS_MAIN_THREAD();

        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
        glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 2);
        glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);

#    if CARB_DEBUG
        glfwWindowHint(GLFW_OPENGL_DEBUG_CONTEXT, GLFW_TRUE);
#    endif

        glfwWindowHint(GLFW_VISIBLE, GLFW_FALSE);
        glfwWindowHint(GLFW_FOCUSED, GLFW_FALSE);

        glfwWindowHint(GLFW_RESIZABLE, (hints & windowing::fWindowHintNoResize) ? GLFW_FALSE : GLFW_TRUE);
        glfwWindowHint(GLFW_DECORATED, (hints & windowing::fWindowHintNoDecoration) ? GLFW_FALSE : GLFW_TRUE);
        glfwWindowHint(GLFW_AUTO_ICONIFY, (hints & windowing::fWindowHintNoAutoMinimize) ? GLFW_FALSE : GLFW_TRUE);
        glfwWindowHint(GLFW_FOCUS_ON_SHOW, (hints & windowing::fWindowHintNoFocusOnShow) ? GLFW_FALSE : GLFW_TRUE);

        glfwWindowHint(GLFW_SCALE_TO_MONITOR, (hints & windowing::fWindowHintScaleToMonitor) ? GLFW_TRUE : GLFW_FALSE);
        glfwWindowHint(GLFW_FLOATING, (hints & windowing::fWindowHintFloating) ? GLFW_TRUE : GLFW_FALSE);
        glfwWindowHint(GLFW_MAXIMIZED, (hints & windowing::fWindowHintMaximized) ? GLFW_TRUE : GLFW_FALSE);

        // Due to the issue with GLFW not properly saving the windows hinting state when
        // window is created fullscreen - we create window in windowed mode first always,
        // this triggers hinting state save on the GLFW side. Then we can proceed to
        // change the fullscreen mode to desired.
        if (hints & windowing::fWindowHintFullscreen)
        {
            const GLFWvidmode* mode = glfwGetVideoMode(glfwGetPrimaryMonitor());

            // Hints to help setting "borderless" fullscreen
            glfwWindowHint(GLFW_RED_BITS, mode->redBits);
            glfwWindowHint(GLFW_GREEN_BITS, mode->greenBits);
            glfwWindowHint(GLFW_BLUE_BITS, mode->blueBits);
            glfwWindowHint(GLFW_REFRESH_RATE, mode->refreshRate);
        }

        GLFWwindow* glfwWindow = glfwCreateWindow(int(size.x), int(size.y), title, nullptr, nullptr);
        if (!glfwWindow)
        {
            OMNI_LOG_ERROR(kWindowChannel, "GLFW window creation failed.");
            return nullptr;
        }

        auto window{ new Window(glfwWindow, m_eventBuffer, title, hints) };
        return window;
    }

    void WindowSystem::pollEvents_abi() noexcept
    {
        ASSERT_IS_MAIN_THREAD();
        glfwPollEvents();
        pollGamepads();
        m_eventBuffer->processEvents();
    }

    void WindowSystem::waitEvents_abi() noexcept
    {
        ASSERT_IS_MAIN_THREAD();
        glfwWaitEvents();
        m_eventBuffer->processEvents();
    }

    WindowSystem::WindowSystem() : m_eventBuffer{ new EventBuffer }
    {
        OMNI_LOG_VERBOSE(kWindowChannel, "created GLFW IWindowSystem");
    }

    void WindowSystem::pollGamepads() noexcept
    {
        ASSERT_IS_MAIN_THREAD();

        for (size_t i = 0; i < m_gamepads.size(); ++i)
        {
            int glfwIndex = GLFW_JOYSTICK_1 + int(i);
            bool isPresent = glfwJoystickPresent(glfwIndex);
            if (!m_gamepads[i])
            {
                if (isPresent)
                {
                    m_gamepads[i].steal(new Gamepad(
                        [=](Gamepad* gamepad, bool isConnected) {
                            this->m_onGamepadConnectConsumers.call([=](input::IGamepadOnConnectConsumer* consumer) {
                                consumer->onGamepadConnect(gamepad, isConnected);
                                });
                        },
                        glfwIndex)); // new joystick connected
                }
            }
            else
            {
                m_gamepads[i]->update();
                if (!isPresent)
                {
                    m_gamepads[i].release();
                }
            }
        }
    }

    void EventBuffer::processEvents()
    {
        UniqueLock lock(m_mutex);

        m_isProcessingEvents = true;

        // ping-pong buffers so that we don't process events added while processing events (which could cause an infinite
        // loop)
        auto buffer = getEventBuffer();
        m_eventBufferIndex = (m_eventBufferIndex + 1) % m_eventBuffers.size();

        for (auto& event : *buffer)
        {
            switch (event.type)
            {
            case EventType::kKeyboard:
                event.keyboard->processEvent(event.keyboardEvent);
                break;

            case EventType::kMouse:
                event.mouse->processEvent(&(event.mouseEvent));
                break;

            case EventType::kRemoved:
                // device was removed, meaning there's no one to listen for the event
                break;

            default:
                // this is a non-fatal logic error
                OMNI_ASSERT(!"logic error: unknown event type");
            }
        }

        buffer->clear();

        m_isProcessingEvents = false;
    }

    windowing::IWindowSystem* createWindowSystem()
    {
        if (initialize())
        {
            return new WindowSystem;
        }
        else
        {
            return nullptr;
        }
    }

    void getInterfaceImplementations(const omni::InterfaceImplementation** out, uint32_t* outCount)
    {
        // clang-format off
        static const char* interfacesImplemented[] = { "windowing.IWindowSystem" };
        static omni::InterfaceImplementation impls[] =
        {
            {
                "windowing.IWindowSystem-glfw",
                []() { return static_cast<omni::IObject*>(::createWindowSystem()); },
                1, // version
                interfacesImplemented, CARB_COUNTOF32(interfacesImplemented)
            },
        };
        // clang-format on

        *out = impls;
        *outCount = CARB_COUNTOF32(impls);
    }

} // end of anonymous namespace

#    ifdef OMNI_COMPILE_AS_MODULE

OMNI_MODULE_GLOBALS("example-glfw", "GLFW implementation of example.input and example.windowing.");

namespace
{

    omni::Result onLoad(const omni::InterfaceImplementation** out, uint32_t* outCount)
    {
        getInterfaceImplementations(out, outCount);

        return omni::kResultSuccess;
    }

    bool onCanUnload()
    {
        return true;
    }

} // anonymous namespace

OMNI_MODULE_API omni::Result omniModuleGetExports(omni::ModuleExports* out)
{
    OMNI_MODULE_SET_EXPORTS(out);
    OMNI_MODULE_ON_MODULE_LOAD(out, onLoad);
    OMNI_MODULE_ON_MODULE_CAN_UNLOAD(out, onCanUnload);

    return omni::kResultSuccess;
}

#    else

#        include <ExampleGlfw.h>

OMNI_LOG_ADD_CHANNEL(kGlfwChannel, "example-glfw", "GLFW implementation of example.input and example.windowing.");

OMNI_API void exampleRegisterGlfwInterfaceImplementations()
{
    omni::log::addModulesChannels();

    const omni::InterfaceImplementation* implementations;
    uint32_t implementationCount;
    getInterfaceImplementations(&implementations, &implementationCount);

    omni::registerInterfaceImplementations(implementations, implementationCount);
}

OMNI_API windowing::IWindowSystem* exampleCreateGlfwWindowSystem()
{
    return ::createWindowSystem();
}

#    endif // OMNI_COMPILE_AS_MODULE
#endif