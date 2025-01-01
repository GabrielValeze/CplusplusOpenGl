Missing HSTS Header Passive Scan Request&Response

< GET / HTTP/1.1
< Host: clinicahumanite.com.br
< User-Agent: Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/108.0.0.0 Safari/537.36
< 

> HTTP/1.1 200 OK
> Date: Wed, 01 Jan 2025 04:34:23 GMT
> Server: Apache
> Upgrade: h2,h2c
> Connection: Upgrade
> Last-Modified: Tue, 31 Dec 2024 16:36:47 GMT
> Cache-Control: max-age=0
> Expires: Wed, 01 Jan 2025 04:34:23 GMT
> Vary: Accept-Encoding
> Transfer-Encoding: chunked
> Content-Type: text/html; charset=UTF-8
> 
<!DOCTYPE html>
<html lang="pt-BR">
<head><meta charset="UTF-8"><script>if(navigator.userAgent.match(/MSIE|Internet Explorer/i)||navigator.userAgent.match(/Trident\/7\..*?rv:11/i)){var href=document.location.href;if(!href.match(/[?&]nowprocket/)){if(href.indexOf("?")==-1){if(href.indexOf("#")==-1){document.location.href=href+"?nowprocket=1"}else{document.location.href=href.replace("#","?nowprocket=1#")}}else{if(href.indexOf("#")==-1){document.location.href=href+"&nowprocket=1"}else{document.location.href=href.replace("#","&nowprocket=1#")}}}}</script><script>class RocketLazyLoadScripts{constructor(){this.triggerEvents=["keydown","mousedown","mousemove","touchmove","touchstart","touchend","wheel"],this.userEventHandler=this._triggerListener.bind(this),this.touchStartHandler=this._onTouchStart.bind(this),this.touchMoveHandler=this._onTouchMove.bind(this),this.touchEndHandler=this._onTouchEnd.bind(this),this.clickHandler=this._onClick.bind(this),this.interceptedClicks=[],window.addEventListener("pageshow",(e=>{this.persisted=e.persisted})),window.addEventListener("DOMContentLoaded",(()=>{this._preconnect3rdParties()})),this.delayedScripts={normal:[],async:[],defer:[]},this.allJQueries=[]}_addUserInteractionListener(e){document.hidden?e._triggerListener():(this.triggerEvents.forEach((t=>window.addEventListener(t,e.userEventHandler,{passive:!0}))),window.addEventListener("touchstart",e.touchStartHandler,{passive:!0}),window.addEventListener("mousedown",e.touchStartHandler),document.addEventListener("visibilitychange",e.userEventHandler))}_removeUserInteractionListener(){this.triggerEvents.forEach((e=>window.removeEventListener(e,this.userEventHandler,{passive:!0}))),document.removeEventListener("visibilitychange",this.userEventHandler)}_onTouchStart(e){"HTML"!==e.target.tagName&&(window.addEventListener("touchend",this.touchEndHandler),window.addEventListener("mouseup",this.touchEndHandler),window.addEventListener("touchmove",this.touchMoveHandler,{passive:!0}),window.addEventListener("mousemove",this.touchMoveHandler),e.target.addEventListener("click",this.clickHandler),this._renameDOMAttribute(e.target,"onclick","rocket-onclick"))}_onTouchMove(e){window.removeEventListener("touchend",this.touchEndHandler),window.removeEventListener("mouseup",this.touchEndHandler),window.removeEventListener("touchmove",this.touchMoveHandler,{passive:!0}),window.removeEventListener("mousemove",this.touchMoveHandler),e.target.removeEventListener("click",this.clickHandler),this._renameDOMAttribute(e.target,"rocket-onclick","onclick")}_onTouchEnd(e){window.removeEventListener("touchend",this.touchEndHandler),window.removeEventListener("mouseup",this.touchEndHandler),window.removeEventListener("touchmove",this.touchMoveHandler,{passive:!0}),window.removeEventListener("mousemove",this.touchMoveHandler)}_onClick(e){e.target.removeEventListener("click",this.clickHandler),this._renameDOMAttribute(e.target,"rocket-onclick","onclick"),this.interceptedClicks.push(e),e.preventDefault(),e.stopPropagation(),e.stopImmediatePropagation()}_replayClicks(){window.removeEventListener("touchstart",this.touchStartHandler,{passive:!0}),window.removeEventListener("mousedown",this.touchStartHandler),this.interceptedClicks.forEach((e=>{e.target.dispatchEvent(new MouseEvent("click",{view:e.view,bubbles:!0,cancelable:!0}))}))}_renameDOMAttribute(e,t,n){e.hasAttribute&&e.hasAttribute(t)&&(event.target.setAttribute(n,event.target.getAttribute(t)),event.target.removeAttribute(t))}_triggerListener(){this._removeUserInteractionListener(this),"loading"===document.readyState?document.addEventListener("DOMContentLoaded",this._loadEverythingNow.bind(this)):this._loadEverythingNow()}_preconnect3rdParties(){let e=[];document.querySelectorAll("script[type=rocketlazyloadscript]").forEach((t=>{if(t.hasAttribute("src")){const n=new URL(t.src).origin;n!==location.origin&&e.push({src:n,crossOrigin:t.crossOrigin||"module"===t.getAttribute("data-rocket-type")})}})),e=[...new Map(e.map((e=>[JSON.stringify(e),e]))).values()],this._batchInjectResourceHints(e,"preconnect")}async _loadEverythingNow(){this.lastBreath=Date.now(),this._delayEventListeners(),this._delayJQueryReady(this),this._handleDocumentWrite(),this._registerAllDelayedScripts(),this._preloadAllScripts(),await this._loadScriptsFromList(this.delayedScripts.normal),await this._loadScriptsFromList(this.delayedScripts.defer),await this._loadScriptsFromList(this.delayedScripts.async);try{await this._triggerDOMContentLoaded(),await this._triggerWindowLoad()}catch(e){}window.dispatchEvent(new Event("rocket-allScriptsLoaded")),this._replayClicks()}_registerAllDelayedScripts(){document.querySelectorAll("script[type=rocketlazyloadscript]").forEach((e=>{e.hasAttribute("src")?e.hasAttribute("async")&&!1!==e.async?this.delayedScripts.async.push(e):e.hasAttribute("defer")&&!1!==e.defer||"module"===e.getAttribute("data-rocket-type")?this.delayedScripts.defer.push(e):this.delayedScripts.normal.push(e):this.delayedScripts.normal.push(e)}))}async _transformScript(e){return await this._littleBreath(),new Promise((t=>{const n=document.createElement("script");[...e.attributes].forEach((e=>{let t=e.nodeName;"type"!==t&&("data-rocket-type"===t&&(t="type"),n.setAttribute(t,e.nodeValue))})),e.hasAttribute("src")?(n.addEventListener("load",t),n.addEventListener("error",t)):(n.text=e.text,t());try{e.parentNode.replaceChild(n,e)}catch(e){t()}}))}async _loadScriptsFromList(e){const t=e.shift();return t?(await this._transformScript(t),this._loadScriptsFromList(e)):Promise.resolve()}_preloadAllScripts(){this._batchInjectResourceHints([...this.delayedScripts.normal,...this.delayedScripts.defer,...this.delayedScripts.async],"preload")}_batchInjectResourceHints(e,t){var n=document.createDocumentFragment();e.forEach((e=>{if(e.src){const i=document.createElement("link");i.href=e.src,i.rel=t,"preconnect"!==t&&(i.as="script"),e.getAttribute&&"module"===e.getAttribute("data-rocket-type")&&(i.crossOrigin=!0),e.crossOrigin&&(i.crossOrigin=e.crossOrigin),n.appendChild(i)}})),document.head.appendChild(n)}_delayEventListeners(){let e={};function t(t,n){!function(t){function n(n){return e[t].eventsToRewrite.indexOf(n)>=0?"rocket-"+n:n}e[t]||(e[t]={originalFunctions:{add:t.addEventListener,remove:t.removeEventListener},eventsToRewrite:[]},t.addEventListener=function(){arguments[0]=n(arguments[0]),e[t].originalFunctions.add.apply(t,arguments)},t.removeEventListener=function(){arguments[0]=n(arguments[0]),e[t].originalFunctions.remove.apply(t,arguments)})}(t),e[t].eventsToRewrite.push(n)}function n(e,t){let n=e[t];Object.defineProperty(e,t,{get:()=>n||function(){},set(i){e["rocket"+t]=n=i}})}t(document,"DOMContentLoaded"),t(window,"DOMContentLoaded"),t(window,"load"),t(window,"pageshow"),t(document,"readystatechange"),n(document,"onreadystatechange"),n(window,"onload"),n(window,"onpageshow")}_delayJQueryReady(e){let t=window.jQuery;Object.defineProperty(window,"jQuery",{get:()=>t,set(n){if(n&&n.fn&&!e.allJQueries.includes(n)){n.fn.ready=n.fn.init.prototype.ready=function(t){e.domReadyFired?t.bind(document)(n):document.addEventListener("rocket-DOMContentLoaded",(()=>t.bind(document)(n)))};const t=n.fn.on;n.fn.on=n.fn.init.prototype.on=function(){if(this[0]===window){function e(e){return e.split(" ").map((e=>"load"===e||0===e.indexOf("load.")?"rocket-jquery-load":e)).join(" ")}"string"==typeof arguments[0]||arguments[0]instanceof String?arguments[0]=e(arguments[0]):"object"==typeof arguments[0]&&Object.keys(arguments[0]).forEach((t=>{delete Object.assign(arguments[0],{[e(t)]:arguments[0][t]})[t]}))}return t.apply(this,arguments),this},e.allJQueries.push(n)}t=n}})}async _triggerDOMContentLoaded(){this.domReadyFired=!0,await this._littleBreath(),document.dispatchEvent(new Event("rocket-DOMContentLoaded")),await this._littleBreath(),window.dispatchEvent(new Event("rocket-DOMContentLoaded")),await this._littleBreath(),document.dispatchEvent(new Event("rocket-readystatechange")),await this._littleBreath(),document.rocketonreadystatechange&&document.rocketonreadystatechange()}async _triggerWindowLoad(){await this._littleBreath(),window.dispatchEvent(new Event("rocket-load")),await this._littleBreath(),window.rocketonload&&window.rocketonload(),await this._littleBreath(),this.allJQueries.forEach((e=>e(window).trigger("rocket-jquery-load"))),await this._littleBreath();const e=new Event("rocket-pageshow");e.persisted=this.persisted,window.dispatchEvent(e),await this._littleBreath(),window.rocketonpageshow&&window.rocketonpageshow({persisted:this.persisted})}_handleDocumentWrite(){const e=new Map;document.write=document.writeln=function(t){const n=document.currentScript,i=document.createRange(),r=n.parentElement;let o=e.get(n);void 0===o&&(o=n.nextSibling,e.set(n,o));const s=document.createDocumentFragment();i.setStart(s,0),s.appendChild(i.createContextualFragment(t)),r.insertBefore(s,o)}}async _littleBreath(){Date.now()-this.lastBreath>45&&(await this._requestAnimFrame(),this.lastBreath=Date.now())}async _requestAnimFrame(){return document.hidden?new Promise((e=>setTimeout(e))):new Promise((e=>requestAnimationFrame(e)))}static run(){const e=new RocketLazyLoadScripts;e._addUserInteractionListener(e)}}RocketLazyLoadScripts.run();</script>
	
		<title>Clinica Humanite - Especialista em Serviços de Neuropsicológica</title><link rel='preload' href='https://clinicahumanite.com.br/wp-content/cache/perfmatters/clinicahumanite.com.br/css/front.used.css?ver=1731451057' as='style' onload="this.rel='stylesheet';this.removeAttribute('onload');"><link rel="stylesheet" id="perfmatters-used-css" href="https://clinicahumanite.com.br/wp-content/cache/perfmatters/clinicahumanite.com.br/css/front.used.css?ver=1731451057" media="all" /><link rel="preload" href="https://clinicahumanite.com.br/wp-content/uploads/2023/02/240866_1c7a7d68074543cd9268765f5e2753f0-1024x566.png" as="image" imagesrcset="https://clinicahumanite.com.br/wp-content/uploads/2023/02/240866_1c7a7d68074543cd9268765f5e2753f0-1024x566.png 1024w, https://clinicahumanite.com.br/wp-content/uploads/2023/02/240866_1c7a7d68074543cd9268765f5e2753f0-300x166.png 300w, https://clinicahumanite.com.br/wp-content/uploads/2023/02/240866_1c7a7d68074543cd9268765f5e2753f0-768x425.png 768w, https://clinicahumanite.com.br/wp-content/uploads/2023/02/240866_1c7a7d68074543cd9268765f5e2753f0-1536x849.png 1536w, https://clinicahumanite.com.br/wp-content/uploads/2023/02/240866_1c7a7d68074543cd9268765f5e2753f0.png 1548w" imagesizes="(max-width: 1024px) 100vw, 1024px" /><link rel="preload" href="//www.w3.org/2000/svg'%20viewBox='0%200%20709%201024'%3E%3C/svg%3E" as="image" /><link rel="preload" href="//www.w3.org/2000/svg'%20viewBox='0%200%20768%20512'%3E%3C/svg%3E" as="image" /><link rel="preload" href="//www.w3.org/2000/svg'%20viewBox='0%200%20768%20512'%3E%3C/svg%3E" as="image" /><link rel="preload" href="//www.w3.org/2000/svg'%20viewBox='0%200%20768%20512'%3E%3C/svg%3E" as="image" />
<script type="rocketlazyloadscript">window.koko_analytics = {"url":"https:\/\/clinicahumanite.com.br\/koko-analytics-collect.php","post_id":26936,"use_cookie":1,"cookie_path":"\/"};</script>	<style>img:is([sizes="auto" i], [sizes^="auto," i]) { contain-intrinsic-size: 3000px 1500px }</style>
	<meta name="description" content="A clínica é especialista em serviços de neuropsicológica em diversos campos, especialmente nos relacionados a transtornos, como: Autismo, TDAH ...">
<meta name="robots" content="index, follow, max-snippet:-1, max-image-preview:large, max-video-preview:-1">
<link rel="canonical" href="https://clinicahumanite.com.br/">
<script id="website-schema" type="application/ld+json">{"@context":"https:\/\/schema.org","@type":"WebSite","name":"Clinica Humanite","alternateName":"Clinica Humanite - Especialista em Servi\u00e7os de Neuropsicol\u00f3gica","description":"A cl\u00ednica \u00e9 especialista em servi\u00e7os de neuropsicol\u00f3gica em diversos campos, especialmente nos relacionados a transtornos, tais como: Autismo, TDAH, Esquizofrenia e Dem\u00eancias.","url":"https:\/\/clinicahumanite.com.br","potentialAction":{"@type":"SearchAction","target":{"@type":"EntryPoint","urlTemplate":"https:\/\/clinicahumanite.com.br\/?s={search_term_string}"},"query-input":"required name=search_term_string"}}</script>
<meta property="og:url" content="https://clinicahumanite.com.br/">
<meta property="og:site_name" content="Clinica Humanite">
<meta property="og:locale" content="pt_BR">
<meta property="og:type" content="website">
<meta property="og:title" content="Clinica Humanite - Especialista em Serviços de Neuropsicológica">
<meta property="og:description" content="A clínica é especialista em serviços de neuropsicológica em diversos campos, especialmente nos relacionados a transtornos, como: Autismo, TDAH ...">
<meta property="og:image" content="https://clinicahumanite.com.br/wp-content/uploads/2023/01/logo.png">
<meta property="og:image:secure_url" content="https://clinicahumanite.com.br/wp-content/uploads/2023/01/logo.png">
<meta property="og:image:width" content="217">
<meta property="og:image:height" content="217">
<meta property="fb:pages" content="">
<meta property="fb:admins" content="">
<meta property="fb:app_id" content="">
<meta name="twitter:card" content="summary">
<meta name="twitter:title" content="Clinica Humanite - Especialista em Serviços de Neuropsicológica">
<meta name="twitter:description" content="A clínica é especialista em serviços de neuropsicológica em diversos campos, especialmente nos relacionados a transtornos, como: Autismo, TDAH ...">
<meta name="twitter:image" content="https://clinicahumanite.com.br/wp-content/uploads/2023/01/logo3.png">
<link rel='dns-prefetch' href='//fonts.googleapis.com' />
<link rel='dns-prefetch' href='//maps.googleapis.com' />
<link rel='dns-prefetch' href='//maps.gstatic.com' />
<link rel='dns-prefetch' href='//fonts.gstatic.com' />
<link rel='dns-prefetch' href='//ajax.googleapis.com' />
<link rel='dns-prefetch' href='//apis.google.com' />
<link rel='dns-prefetch' href='//google-analytics.com' />
<link rel='dns-prefetch' href='//www.google-analytics.com' />
<link rel='dns-prefetch' href='//ssl.google-analytics.com' />
<link rel='dns-prefetch' href='//youtube.com' />
<link rel='dns-prefetch' href='//api.pinterest.com' />
<link rel='dns-prefetch' href='//cdnjs.cloudflare.com' />
<link rel='dns-prefetch' href='//connect.facebook.net' />
<link rel='dns-prefetch' href='//platform.twitter.com' />
<link rel='dns-prefetch' href='//syndication.twitter.com' />
<link rel='dns-prefetch' href='//platform.instagram.com' />
<link rel='dns-prefetch' href='//disqus.com' />
<link rel='dns-prefetch' href='//sitename.disqus.com' />
<link rel='dns-prefetch' href='//s7.addthis.com' />
<link rel='dns-prefetch' href='//platform.linkedin.com' />
<link rel='dns-prefetch' href='//w.sharethis.com' />
<link rel='dns-prefetch' href='//i0.wp.com' />
<link rel='dns-prefetch' href='//i1.wp.com' />
<link rel='dns-prefetch' href='//i2.wp.com' />
<link rel='dns-prefetch' href='//stats.wp.com' />
<link rel='dns-prefetch' href='//pixel.wp.com' />
<link rel='dns-prefetch' href='//s.gravatar.com' />
<link rel="alternate" type="application/rss+xml" title="Feed para Clinica Humanite &raquo;" href="https://clinicahumanite.com.br/feed/" />
<link rel="alternate" type="application/rss+xml" title="Feed de comentários para Clinica Humanite &raquo;" href="https://clinicahumanite.com.br/comments/feed/" />
<script type="rocketlazyloadscript">
window._wpemojiSettings = {"baseUrl":"https:\/\/s.w.org\/images\/core\/emoji\/15.0.3\/72x72\/","ext":".png","svgUrl":"https:\/\/s.w.org\/images\/core\/emoji\/15.0.3\/svg\/","svgExt":".svg","source":{"concatemoji":"https:\/\/clinicahumanite.com.br\/wp-includes\/js\/wp-emoji-release.min.js?ver=6.7.1"}};
/*! This file is auto-generated */
!function(i,n){var o,s,e;function c(e){try{var t={supportTests:e,timestamp:(new Date).valueOf()};sessionStorage.setItem(o,JSON.stringify(t))}catch(e){}}function p(e,t,n){e.clearRect(0,0,e.canvas.width,e.canvas.height),e.fillText(t,0,0);var t=new Uint32Array(e.getImageData(0,0,e.canvas.width,e.canvas.height).data),r=(e.clearRect(0,0,e.canvas.width,e.canvas.height),e.fillText(n,0,0),new Uint32Array(e.getImageData(0,0,e.canvas.width,e.canvas.height).data));return t.every(function(e,t){return e===r[t]})}function u(e,t,n){switch(t){case"flag":return n(e,"\ud83c\udff3\ufe0f\u200d\u26a7\ufe0f","\ud83c\udff3\ufe0f\u200b\u26a7\ufe0f")?!1:!n(e,"\ud83c\uddfa\ud83c\uddf3","\ud83c\uddfa\u200b\ud83c\uddf3")&&!n(e,"\ud83c\udff4\udb40\udc67\udb40\udc62\udb40\udc65\udb40\udc6e\udb40\udc67\udb40\udc7f","\ud83c\udff4\u200b\udb40\udc67\u200b\udb40\udc62\u200b\udb40\udc65\u200b\udb40\udc6e\u200b\udb40\udc67\u200b\udb40\udc7f");case"emoji":return!n(e,"\ud83d\udc26\u200d\u2b1b","\ud83d\udc26\u200b\u2b1b")}return!1}function f(e,t,n){var r="undefined"!=typeof WorkerGlobalScope&&self instanceof WorkerGlobalScope?new OffscreenCanvas(300,150):i.createElement("canvas"),a=r.getContext("2d",{willReadFrequently:!0}),o=(a.textBaseline="top",a.font="600 32px Arial",{});return e.forEach(function(e){o[e]=t(a,e,n)}),o}function t(e){var t=i.createElement("script");t.src=e,t.defer=!0,i.head.appendChild(t)}"undefined"!=typeof Promise&&(o="wpEmojiSettingsSupports",s=["flag","emoji"],n.supports={everything:!0,everythingExceptFlag:!0},e=new Promise(function(e){i.addEventListener("DOMContentLoaded",e,{once:!0})}),new Promise(function(t){var n=function(){try{var e=JSON.parse(sessionStorage.getItem(o));if("object"==typeof e&&"number"==typeof e.timestamp&&(new Date).valueOf()<e.timestamp+604800&&"object"==typeof e.supportTests)return e.supportTests}catch(e){}return null}();if(!n){if("undefined"!=typeof Worker&&"undefined"!=typeof OffscreenCanvas&&"undefined"!=typeof URL&&URL.createObjectURL&&"undefined"!=typeof Blob)try{var e="postMessage("+f.toString()+"("+[JSON.stringify(s),u.toString(),p.toString()].join(",")+"));",r=new Blob([e],{type:"text/javascript"}),a=new Worker(URL.createObjectURL(r),{name:"wpTestEmojiSupports"});return void(a.onmessage=function(e){c(n=e.data),a.terminate(),t(n)})}catch(e){}c(n=f(s,u,p))}t(n)}).then(function(e){for(var t in e)n.supports[t]=e[t],n.supports.everything=n.supports.everything&&n.supports[t],"flag"!==t&&(n.supports.everythingExceptFlag=n.supports.everythingExceptFlag&&n.supports[t]);n.supports.everythingExceptFlag=n.supports.everythingExceptFlag&&!n.supports.flag,n.DOMReady=!1,n.readyCallback=function(){n.DOMReady=!0}}).then(function(){return e}).then(function(){var e;n.supports.everything||(n.readyCallback(),(e=n.source||{}).concatemoji?t(e.concatemoji):e.wpemoji&&e.twemoji&&(t(e.twemoji),t(e.wpemoji)))}))}((window,document),window._wpemojiSettings);
</script>
<link rel='stylesheet' id='astra-theme-css-css' data-pmdelayedstyle="https://clinicahumanite.com.br/wp-content/themes/astra/assets/css/minified/frontend.min.css?ver=4.0.2" media='all' />
<style id='astra-theme-css-inline-css'>
.ast-no-sidebar .entry-content .alignfull {margin-left: calc( -50vw + 50%);margin-right: calc( -50vw + 50%);max-width: 100vw;width: 100vw;}.ast-no-sidebar .entry-content .alignwide {margin-left: calc(-41vw + 50%);margin-right: calc(-41vw + 50%);max-width: unset;width: unset;}.ast-no-sidebar .entry-content .alignfull .alignfull,.ast-no-sidebar .entry-content .alignfull .alignwide,.ast-no-sidebar .entry-content .alignwide .alignfull,.ast-no-sidebar .entry-content .alignwide .alignwide,.ast-no-sidebar .entry-content .wp-block-column .alignfull,.ast-no-sidebar .entry-content .wp-block-column .alignwide{width: 100%;margin-left: auto;margin-right: auto;}.wp-block-gallery,.blocks-gallery-grid {margin: 0;}.wp-block-separator {max-width: 100px;}.wp-block-separator.is-style-wide,.wp-block-separator.is-style-dots {max-width: none;}.entry-content .has-2-columns .wp-block-column:first-child {padding-right: 10px;}.entry-content .has-2-columns .wp-block-column:last-child {padding-left: 10px;}@media (max-width: 782px) {.entry-content .wp-block-columns .wp-block-column {flex-basis: 100%;}.entry-content .has-2-columns .wp-block-column:first-child {padding-right: 0;}.entry-content .has-2-columns .wp-block-column:last-child {padding-left: 0;}}body .entry-content .wp-block-latest-posts {margin-left: 0;}body .entry-content .wp-block-latest-posts li {list-style: none;}.ast-no-sidebar .ast-container .entry-content .wp-block-latest-posts {margin-left: 0;}.ast-header-break-point .entry-content .alignwide {margin-left: auto;margin-right: auto;}.entry-content .blocks-gallery-item img {margin-bottom: auto;}.wp-block-pullquote {border-top: 4px solid #555d66;border-bottom: 4px solid #555d66;color: #40464d;}:root{--ast-container-default-xlg-padding:6.67em;--ast-container-default-lg-padding:5.67em;--ast-container-default-slg-padding:4.34em;--ast-container-default-md-padding:3.34em;--ast-container-default-sm-padding:6.67em;--ast-container-default-xs-padding:2.4em;--ast-container-default-xxs-padding:1.4em;--ast-code-block-background:#EEEEEE;--ast-comment-inputs-background:#FAFAFA;}html{font-size:100%;}a,.page-title{color:var(--ast-global-color-0);}a:hover,a:focus{color:var(--ast-global-color-1);}body,button,input,select,textarea,.ast-button,.ast-custom-button{font-family:'Lato',sans-serif;font-weight:400;font-size:16px;font-size:1rem;}blockquote{color:var(--ast-global-color-3);}h1,.entry-content h1,h2,.entry-content h2,h3,.entry-content h3,h4,.entry-content h4,h5,.entry-content h5,h6,.entry-content h6,.site-title,.site-title a{font-family:'Poppins',sans-serif;font-weight:700;}.ast-site-identity .site-title a{color:#ffffff;}.site-title{font-size:35px;font-size:2.1875rem;display:none;}header .custom-logo-link img{max-width:57px;}.astra-logo-svg{width:57px;}.site-header .site-description{font-size:15px;font-size:0.9375rem;display:none;}.entry-title{font-size:30px;font-size:1.875rem;}h1,.entry-content h1{font-size:48px;font-size:3rem;font-weight:700;font-family:'Poppins',sans-serif;line-height:1.2em;}h2,.entry-content h2{font-size:35px;font-size:2.1875rem;font-weight:700;font-family:'Poppins',sans-serif;line-height:1.2em;}h3,.entry-content h3{font-size:20px;font-size:1.25rem;font-weight:700;font-family:'Poppins',sans-serif;}h4,.entry-content h4{font-size:18px;font-size:1.125rem;font-weight:500;font-family:'Poppins',sans-serif;}h5,.entry-content h5{font-size:16px;font-size:1rem;font-family:'Poppins',sans-serif;}h6,.entry-content h6{font-size:14px;font-size:0.875rem;font-family:'Poppins',sans-serif;}::selection{background-color:var(--ast-global-color-0);color:#ffffff;}body,h1,.entry-title a,.entry-content h1,h2,.entry-content h2,h3,.entry-content h3,h4,.entry-content h4,h5,.entry-content h5,h6,.entry-content h6{color:var(--ast-global-color-3);}.tagcloud a:hover,.tagcloud a:focus,.tagcloud a.current-item{color:#ffffff;border-color:var(--ast-global-color-0);background-color:var(--ast-global-color-0);}input:focus,input[type="text"]:focus,input[type="email"]:focus,input[type="url"]:focus,input[type="password"]:focus,input[type="reset"]:focus,input[type="search"]:focus,textarea:focus{border-color:var(--ast-global-color-0);}input[type="radio"]:checked,input[type=reset],input[type="checkbox"]:checked,input[type="checkbox"]:hover:checked,input[type="checkbox"]:focus:checked,input[type=range]::-webkit-slider-thumb{border-color:var(--ast-global-color-0);background-color:var(--ast-global-color-0);box-shadow:none;}.site-footer a:hover + .post-count,.site-footer a:focus + .post-count{background:var(--ast-global-color-0);border-color:var(--ast-global-color-0);}.single .nav-links .nav-previous,.single .nav-links .nav-next{color:var(--ast-global-color-0);}.entry-meta,.entry-meta *{line-height:1.45;color:var(--ast-global-color-0);}.entry-meta a:hover,.entry-meta a:hover *,.entry-meta a:focus,.entry-meta a:focus *,.page-links > .page-link,.page-links .page-link:hover,.post-navigation a:hover{color:var(--ast-global-color-1);}#cat option,.secondary .calendar_wrap thead a,.secondary .calendar_wrap thead a:visited{color:var(--ast-global-color-0);}.secondary .calendar_wrap #today,.ast-progress-val span{background:var(--ast-global-color-0);}.secondary a:hover + .post-count,.secondary a:focus + .post-count{background:var(--ast-global-color-0);border-color:var(--ast-global-color-0);}.calendar_wrap #today > a{color:#ffffff;}.page-links .page-link,.single .post-navigation a{color:var(--ast-global-color-0);}.widget-title{font-size:22px;font-size:1.375rem;color:var(--ast-global-color-3);}.site-logo-img img{ transition:all 0.2s linear;}.ast-page-builder-template .hentry {margin: 0;}.ast-page-builder-template .site-content > .ast-container {max-width: 100%;padding: 0;}.ast-page-builder-template .site-content #primary {padding: 0;margin: 0;}.ast-page-builder-template .no-results {text-align: center;margin: 4em auto;}.ast-page-builder-template .ast-pagination {padding: 2em;}.ast-page-builder-template .entry-header.ast-no-title.ast-no-thumbnail {margin-top: 0;}.ast-page-builder-template .entry-header.ast-header-without-markup {margin-top: 0;margin-bottom: 0;}.ast-page-builder-template .entry-header.ast-no-title.ast-no-meta {margin-bottom: 0;}.ast-page-builder-template.single .post-navigation {padding-bottom: 2em;}.ast-page-builder-template.single-post .site-content > .ast-container {max-width: 100%;}.ast-page-builder-template .entry-header {margin-top: 4em;margin-left: auto;margin-right: auto;padding-left: 20px;padding-right: 20px;}.single.ast-page-builder-template .entry-header {padding-left: 20px;padding-right: 20px;}.ast-page-builder-template .ast-archive-description {margin: 4em auto 0;padding-left: 20px;padding-right: 20px;}.ast-page-builder-template.ast-no-sidebar .entry-content .alignwide {margin-left: 0;margin-right: 0;}@media (max-width:921px){#ast-desktop-header{display:none;}}@media (min-width:921px){#ast-mobile-header{display:none;}}.wp-block-buttons.aligncenter{justify-content:center;}.ast-left-sidebar.ast-single-post #primary,.ast-right-sidebar.ast-single-post #primary,.ast-separate-container.ast-single-post.ast-right-sidebar #primary,.ast-separate-container.ast-single-post.ast-left-sidebar #primary,.ast-separate-container.ast-single-post #primary,.ast-narrow-container.ast-single-post #primary{padding-left:40px;padding-right:40px;}@media (max-width:782px){.entry-content .wp-block-columns .wp-block-column{margin-left:0px;}}.wp-block-image.aligncenter{margin-left:auto;margin-right:auto;}.wp-block-table.aligncenter{margin-left:auto;margin-right:auto;}@media (max-width:921px){.ast-separate-container #primary,.ast-separate-container #secondary{padding:1.5em 0;}#primary,#secondary{padding:1.5em 0;margin:0;}.ast-left-sidebar #content > .ast-container{display:flex;flex-direction:column-reverse;width:100%;}.ast-separate-container .ast-article-post,.ast-separate-container .ast-article-single{padding:1.5em 2.14em;}.ast-author-box img.avatar{margin:20px 0 0 0;}}@media (min-width:922px){.ast-separate-container.ast-right-sidebar #primary,.ast-separate-container.ast-left-sidebar #primary{border:0;}.search-no-results.ast-separate-container #primary{margin-bottom:4em;}}.elementor-button-wrapper .elementor-button{border-style:solid;text-decoration:none;border-top-width:0;border-right-width:0;border-left-width:0;border-bottom-width:0;}body .elementor-button.elementor-size-sm,body .elementor-button.elementor-size-xs,body .elementor-button.elementor-size-md,body .elementor-button.elementor-size-lg,body .elementor-button.elementor-size-xl,body .elementor-button{border-radius:50px;padding-top:15px;padding-right:40px;padding-bottom:16px;padding-left:40px;}.elementor-button-wrapper .elementor-button{border-color:var(--ast-global-color-0);background-color:var(--ast-global-color-0);}.elementor-button-wrapper .elementor-button:hover,.elementor-button-wrapper .elementor-button:focus{color:#ffffff;background-color:var(--ast-global-color-1);border-color:var(--ast-global-color-1);}.wp-block-button .wp-block-button__link ,.elementor-button-wrapper .elementor-button,.elementor-button-wrapper .elementor-button:visited{color:#ffffff;}.elementor-button-wrapper .elementor-button{font-weight:500;font-size:15px;font-size:0.9375rem;line-height:1em;}body .elementor-button.elementor-size-sm,body .elementor-button.elementor-size-xs,body .elementor-button.elementor-size-md,body .elementor-button.elementor-size-lg,body .elementor-button.elementor-size-xl,body .elementor-button{font-size:15px;font-size:0.9375rem;}.wp-block-button .wp-block-button__link:hover,.wp-block-button .wp-block-button__link:focus{color:#ffffff;background-color:var(--ast-global-color-1);border-color:var(--ast-global-color-1);}.elementor-widget-heading h1.elementor-heading-title{line-height:1.2em;}.elementor-widget-heading h2.elementor-heading-title{line-height:1.2em;}.wp-block-button .wp-block-button__link{border-top-width:0;border-right-width:0;border-left-width:0;border-bottom-width:0;border-color:var(--ast-global-color-0);background-color:var(--ast-global-color-0);color:#ffffff;font-family:inherit;font-weight:500;line-height:1em;font-size:15px;font-size:0.9375rem;border-radius:50px;padding-top:15px;padding-right:40px;padding-bottom:16px;padding-left:40px;}.menu-toggle,button,.ast-button,.ast-custom-button,.button,input#submit,input[type="button"],input[type="submit"],input[type="reset"]{border-style:solid;border-top-width:0;border-right-width:0;border-left-width:0;border-bottom-width:0;color:#ffffff;border-color:var(--ast-global-color-0);background-color:var(--ast-global-color-0);border-radius:50px;padding-top:15px;padding-right:40px;padding-bottom:16px;padding-left:40px;font-family:inherit;font-weight:500;font-size:15px;font-size:0.9375rem;line-height:1em;}button:focus,.menu-toggle:hover,button:hover,.ast-button:hover,.ast-custom-button:hover .button:hover,.ast-custom-button:hover ,input[type=reset]:hover,input[type=reset]:focus,input#submit:hover,input#submit:focus,input[type="button"]:hover,input[type="button"]:focus,input[type="submit"]:hover,input[type="submit"]:focus{color:#ffffff;background-color:var(--ast-global-color-1);border-color:var(--ast-global-color-1);}@media (min-width:544px){.ast-container{max-width:100%;}}@media (max-width:544px){.ast-separate-container .ast-article-post,.ast-separate-container .ast-article-single,.ast-separate-container .comments-title,.ast-separate-container .ast-archive-description{padding:1.5em 1em;}.ast-separate-container #content .ast-container{padding-left:0.54em;padding-right:0.54em;}.ast-separate-container .ast-comment-list li.depth-1{padding:1.5em 1em;margin-bottom:1.5em;}.ast-separate-container .ast-comment-list .bypostauthor{padding:.5em;}.ast-search-menu-icon.ast-dropdown-active .search-field{width:170px;}}@media (max-width:921px){.ast-mobile-header-stack .main-header-bar .ast-search-menu-icon{display:inline-block;}.ast-header-break-point.ast-header-custom-item-outside .ast-mobile-header-stack .main-header-bar .ast-search-icon{margin:0;}.ast-comment-avatar-wrap img{max-width:2.5em;}.ast-separate-container .ast-comment-list li.depth-1{padding:1.5em 2.14em;}.ast-separate-container .comment-respond{padding:2em 2.14em;}.ast-comment-meta{padding:0 1.8888em 1.3333em;}}body,.ast-separate-container{background-color:var(--ast-global-color-4);;background-image:none;;}.ast-no-sidebar.ast-separate-container .entry-content .alignfull {margin-left: -6.67em;margin-right: -6.67em;width: auto;}@media (max-width: 1200px) {.ast-no-sidebar.ast-separate-container .entry-content .alignfull {margin-left: -2.4em;margin-right: -2.4em;}}@media (max-width: 768px) {.ast-no-sidebar.ast-separate-container .entry-content .alignfull {margin-left: -2.14em;margin-right: -2.14em;}}@media (max-width: 544px) {.ast-no-sidebar.ast-separate-container .entry-content .alignfull {margin-left: -1em;margin-right: -1em;}}.ast-no-sidebar.ast-separate-container .entry-content .alignwide {margin-left: -20px;margin-right: -20px;}.ast-no-sidebar.ast-separate-container .entry-content .wp-block-column .alignfull,.ast-no-sidebar.ast-separate-container .entry-content .wp-block-column .alignwide {margin-left: auto;margin-right: auto;width: 100%;}@media (max-width:921px){.site-title{display:none;}.site-header .site-description{display:none;}.entry-title{font-size:30px;}h1,.entry-content h1{font-size:30px;}h2,.entry-content h2{font-size:25px;}h3,.entry-content h3{font-size:20px;}}@media (max-width:544px){.site-title{display:none;}.site-header .site-description{display:none;}.entry-title{font-size:30px;}h1,.entry-content h1{font-size:22px;}h2,.entry-content h2{font-size:25px;}h3,.entry-content h3{font-size:20px;}header .custom-logo-link img,.ast-header-break-point .site-branding img,.ast-header-break-point .custom-logo-link img{max-width:90px;}.astra-logo-svg{width:90px;}.ast-header-break-point .site-logo-img .custom-mobile-logo-link img{max-width:90px;}}@media (max-width:921px){html{font-size:91.2%;}}@media (max-width:544px){html{font-size:91.2%;}}@media (min-width:922px){.ast-container{max-width:1240px;}}@font-face {font-family: "Astra";src: url(https://clinicahumanite.com.br/wp-content/themes/astra/assets/fonts/astra.woff) format("woff"),url(https://clinicahumanite.com.br/wp-content/themes/astra/assets/fonts/astra.ttf) format("truetype"),url(https://clinicahumanite.com.br/wp-content/themes/astra/assets/fonts/astra.svg#astra) format("svg");font-weight: normal;font-style: normal;font-display: fallback;}@media (min-width:922px){.main-header-menu .sub-menu .menu-item.ast-left-align-sub-menu:hover > .sub-menu,.main-header-menu .sub-menu .menu-item.ast-left-align-sub-menu.focus > .sub-menu{margin-left:-0px;}}.ast-theme-transparent-header [data-section="section-header-mobile-trigger"] .ast-button-wrap .ast-mobile-menu-trigger-fill,.ast-theme-transparent-header [data-section="section-header-mobile-trigger"] .ast-button-wrap .ast-mobile-menu-trigger-minimal{border:none;}.astra-icon-down_arrow::after {content: "\e900";font-family: Astra;}.astra-icon-close::after {content: "\e5cd";font-family: Astra;}.astra-icon-drag_handle::after {content: "\e25d";font-family: Astra;}.astra-icon-format_align_justify::after {content: "\e235";font-family: Astra;}.astra-icon-menu::after {content: "\e5d2";font-family: Astra;}.astra-icon-reorder::after {content: "\e8fe";font-family: Astra;}.astra-icon-search::after {content: "\e8b6";font-family: Astra;}.astra-icon-zoom_in::after {content: "\e56b";font-family: Astra;}.astra-icon-check-circle::after {content: "\e901";font-family: Astra;}.astra-icon-shopping-cart::after {content: "\f07a";font-family: Astra;}.astra-icon-shopping-bag::after {content: "\f290";font-family: Astra;}.astra-icon-shopping-basket::after {content: "\f291";font-family: Astra;}.astra-icon-circle-o::after {content: "\e903";font-family: Astra;}.astra-icon-certificate::after {content: "\e902";font-family: Astra;}blockquote {padding: 1.2em;}:root .has-ast-global-color-0-color{color:var(--ast-global-color-0);}:root .has-ast-global-color-0-background-color{background-color:var(--ast-global-color-0);}:root .wp-block-button .has-ast-global-color-0-color{color:var(--ast-global-color-0);}:root .wp-block-button .has-ast-global-color-0-background-color{background-color:var(--ast-global-color-0);}:root .has-ast-global-color-1-color{color:var(--ast-global-color-1);}:root .has-ast-global-color-1-background-color{background-color:var(--ast-global-color-1);}:root .wp-block-button .has-ast-global-color-1-color{color:var(--ast-global-color-1);}:root .wp-block-button .has-ast-global-color-1-background-color{background-color:var(--ast-global-color-1);}:root .has-ast-global-color-2-color{color:var(--ast-global-color-2);}:root .has-ast-global-color-2-background-color{background-color:var(--ast-global-color-2);}:root .wp-block-button .has-ast-global-color-2-color{color:var(--ast-global-color-2);}:root .wp-block-button .has-ast-global-color-2-background-color{background-color:var(--ast-global-color-2);}:root .has-ast-global-color-3-color{color:var(--ast-global-color-3);}:root .has-ast-global-color-3-background-color{background-color:var(--ast-global-color-3);}:root .wp-block-button .has-ast-global-color-3-color{color:var(--ast-global-color-3);}:root .wp-block-button .has-ast-global-color-3-background-color{background-color:var(--ast-global-color-3);}:root .has-ast-global-color-4-color{color:var(--ast-global-color-4);}:root .has-ast-global-color-4-background-color{background-color:var(--ast-global-color-4);}:root .wp-block-button .has-ast-global-color-4-color{color:var(--ast-global-color-4);}:root .wp-block-button .has-ast-global-color-4-background-color{background-color:var(--ast-global-color-4);}:root .has-ast-global-color-5-color{color:var(--ast-global-color-5);}:root .has-ast-global-color-5-background-color{background-color:var(--ast-global-color-5);}:root .wp-block-button .has-ast-global-color-5-color{color:var(--ast-global-color-5);}:root .wp-block-button .has-ast-global-color-5-background-color{background-color:var(--ast-global-color-5);}:root .has-ast-global-color-6-color{color:var(--ast-global-color-6);}:root .has-ast-global-color-6-background-color{background-color:var(--ast-global-color-6);}:root .wp-block-button .has-ast-global-color-6-color{color:var(--ast-global-color-6);}:root .wp-block-button .has-ast-global-color-6-background-color{background-color:var(--ast-global-color-6);}:root .has-ast-global-color-7-color{color:var(--ast-global-color-7);}:root .has-ast-global-color-7-background-color{background-color:var(--ast-global-color-7);}:root .wp-block-button .has-ast-global-color-7-color{color:var(--ast-global-color-7);}:root .wp-block-button .has-ast-global-color-7-background-color{background-color:var(--ast-global-color-7);}:root .has-ast-global-color-8-color{color:var(--ast-global-color-8);}:root .has-ast-global-color-8-background-color{background-color:var(--ast-global-color-8);}:root .wp-block-button .has-ast-global-color-8-color{color:var(--ast-global-color-8);}:root .wp-block-button .has-ast-global-color-8-background-color{background-color:var(--ast-global-color-8);}:root{--ast-global-color-0:#0274be;--ast-global-color-1:#0d68ae;--ast-global-color-2:#2f3f50;--ast-global-color-3:#3a3a3a;--ast-global-color-4:#fafafa;--ast-global-color-5:#ffffff;--ast-global-color-6:#003bb1;--ast-global-color-7:#FBFCFF;--ast-global-color-8:#BFD1FF;}:root {--ast-border-color : #dddddd;}.ast-single-entry-banner {-js-display: flex;display: flex;flex-direction: column;justify-content: center;text-align: center;position: relative;background: #eeeeee;}.ast-single-entry-banner[data-banner-layout="layout-1"] {max-width: 1200px;background: inherit;padding: 20px 0;}.ast-single-entry-banner[data-banner-width-type="custom"] {margin: 0 auto;width: 100%;}.ast-single-entry-banner + .site-content .entry-header {margin-bottom: 0;}header.entry-header .entry-title{font-size:22px;font-size:1.375rem;}header.entry-header > *:not(:last-child){margin-bottom:10px;}@media (max-width:921px){header.entry-header .entry-title{font-size:22px;font-size:1.375rem;}}@media (max-width:544px){header.entry-header .entry-title{font-size:20px;font-size:1.25rem;}}.ast-archive-entry-banner {-js-display: flex;display: flex;flex-direction: column;justify-content: center;text-align: center;position: relative;background: #eeeeee;}.ast-archive-entry-banner[data-banner-width-type="custom"] {margin: 0 auto;width: 100%;}.ast-archive-entry-banner[data-banner-layout="layout-1"] {background: inherit;padding: 20px 0;text-align: left;}body.archive .ast-archive-description{max-width:1200px;width:100%;text-align:left;padding-top:3em;padding-right:3em;padding-bottom:3em;padding-left:3em;}body.archive .ast-archive-description .ast-archive-title,body.archive .ast-archive-description .ast-archive-title *{font-size:40px;font-size:2.5rem;}body.archive .ast-archive-description > *:not(:last-child){margin-bottom:10px;}@media (max-width:921px){body.archive .ast-archive-description{text-align:left;}}@media (max-width:544px){body.archive .ast-archive-description{text-align:left;}}.ast-theme-transparent-header #masthead .site-logo-img .transparent-custom-logo .astra-logo-svg{width:57px;}.ast-theme-transparent-header #masthead .site-logo-img .transparent-custom-logo img{ max-width:57px;}@media (min-width:921px){.ast-theme-transparent-header #masthead{position:absolute;left:0;right:0;}.ast-theme-transparent-header .main-header-bar,.ast-theme-transparent-header.ast-header-break-point .main-header-bar{background:none;}body.elementor-editor-active.ast-theme-transparent-header #masthead,.fl-builder-edit .ast-theme-transparent-header #masthead,body.vc_editor.ast-theme-transparent-header #masthead,body.brz-ed.ast-theme-transparent-header #masthead{z-index:0;}.ast-header-break-point.ast-replace-site-logo-transparent.ast-theme-transparent-header .custom-mobile-logo-link{display:none;}.ast-header-break-point.ast-replace-site-logo-transparent.ast-theme-transparent-header .transparent-custom-logo{display:inline-block;}.ast-theme-transparent-header .ast-above-header,.ast-theme-transparent-header .ast-above-header.ast-above-header-bar{background-image:none;background-color:transparent;}.ast-theme-transparent-header .ast-below-header{background-image:none;background-color:transparent;}}.ast-theme-transparent-header .site-title a,.ast-theme-transparent-header .site-title a:focus,.ast-theme-transparent-header .site-title a:hover,.ast-theme-transparent-header .site-title a:visited{color:var(--ast-global-color-4);}.ast-theme-transparent-header .site-header .site-description{color:var(--ast-global-color-4);}.ast-theme-transparent-header .ast-builder-menu .main-header-menu,.ast-theme-transparent-header .ast-builder-menu .main-header-menu .menu-link,.ast-theme-transparent-header [CLASS*="ast-builder-menu-"] .main-header-menu .menu-item > .menu-link,.ast-theme-transparent-header .ast-masthead-custom-menu-items,.ast-theme-transparent-header .ast-masthead-custom-menu-items a,.ast-theme-transparent-header .ast-builder-menu .main-header-menu .menu-item > .ast-menu-toggle,.ast-theme-transparent-header .ast-builder-menu .main-header-menu .menu-item > .ast-menu-toggle,.ast-theme-transparent-header .ast-above-header-navigation a,.ast-header-break-point.ast-theme-transparent-header .ast-above-header-navigation a,.ast-header-break-point.ast-theme-transparent-header .ast-above-header-navigation > ul.ast-above-header-menu > .menu-item-has-children:not(.current-menu-item) > .ast-menu-toggle,.ast-theme-transparent-header .ast-below-header-menu,.ast-theme-transparent-header .ast-below-header-menu a,.ast-header-break-point.ast-theme-transparent-header .ast-below-header-menu a,.ast-header-break-point.ast-theme-transparent-header .ast-below-header-menu,.ast-theme-transparent-header .main-header-menu .menu-link{color:var(--ast-global-color-4);}.ast-theme-transparent-header .ast-builder-menu .main-header-menu .menu-item:hover > .menu-link,.ast-theme-transparent-header .ast-builder-menu .main-header-menu .menu-item:hover > .ast-menu-toggle,.ast-theme-transparent-header .ast-builder-menu .main-header-menu .ast-masthead-custom-menu-items a:hover,.ast-theme-transparent-header .ast-builder-menu .main-header-menu .focus > .menu-link,.ast-theme-transparent-header .ast-builder-menu .main-header-menu .focus > .ast-menu-toggle,.ast-theme-transparent-header .ast-builder-menu .main-header-menu .current-menu-item > .menu-link,.ast-theme-transparent-header .ast-builder-menu .main-header-menu .current-menu-ancestor > .menu-link,.ast-theme-transparent-header .ast-builder-menu .main-header-menu .current-menu-item > .ast-menu-toggle,.ast-theme-transparent-header .ast-builder-menu .main-header-menu .current-menu-ancestor > .ast-menu-toggle,.ast-theme-transparent-header [CLASS*="ast-builder-menu-"] .main-header-menu .current-menu-item > .menu-link,.ast-theme-transparent-header [CLASS*="ast-builder-menu-"] .main-header-menu .current-menu-ancestor > .menu-link,.ast-theme-transparent-header [CLASS*="ast-builder-menu-"] .main-header-menu .current-menu-item > .ast-menu-toggle,.ast-theme-transparent-header [CLASS*="ast-builder-menu-"] .main-header-menu .current-menu-ancestor > .ast-menu-toggle,.ast-theme-transparent-header .main-header-menu .menu-item:hover > .menu-link,.ast-theme-transparent-header .main-header-menu .current-menu-item > .menu-link,.ast-theme-transparent-header .main-header-menu .current-menu-ancestor > .menu-link{color:var(--ast-global-color-4);}@media (max-width:921px){.ast-theme-transparent-header #masthead{position:absolute;left:0;right:0;}.ast-theme-transparent-header .main-header-bar,.ast-theme-transparent-header.ast-header-break-point .main-header-bar{background:none;}body.elementor-editor-active.ast-theme-transparent-header #masthead,.fl-builder-edit .ast-theme-transparent-header #masthead,body.vc_editor.ast-theme-transparent-header #masthead,body.brz-ed.ast-theme-transparent-header #masthead{z-index:0;}.ast-header-break-point.ast-replace-site-logo-transparent.ast-theme-transparent-header .custom-mobile-logo-link{display:none;}.ast-header-break-point.ast-replace-site-logo-transparent.ast-theme-transparent-header .transparent-custom-logo{display:inline-block;}.ast-theme-transparent-header .ast-above-header,.ast-theme-transparent-header .ast-above-header.ast-above-header-bar{background-image:none;background-color:transparent;}.ast-theme-transparent-header .ast-below-header{background-image:none;background-color:transparent;}}@media (max-width:921px){.ast-theme-transparent-header.ast-header-break-point .ast-builder-menu .main-header-menu,.ast-theme-transparent-header.ast-header-break-point .ast-builder-menu.main-header-menu .sub-menu,.ast-theme-transparent-header.ast-header-break-point .ast-builder-menu.main-header-menu,.ast-theme-transparent-header.ast-header-break-point .ast-builder-menu .main-header-bar-wrap .main-header-menu,.ast-flyout-menu-enable.ast-header-break-point.ast-theme-transparent-header .main-header-bar-navigation .site-navigation,.ast-fullscreen-menu-enable.ast-header-break-point.ast-theme-transparent-header .main-header-bar-navigation .site-navigation,.ast-flyout-above-menu-enable.ast-header-break-point.ast-theme-transparent-header .ast-above-header-navigation-wrap .ast-above-header-navigation,.ast-flyout-below-menu-enable.ast-header-break-point.ast-theme-transparent-header .ast-below-header-navigation-wrap .ast-below-header-actual-nav,.ast-fullscreen-above-menu-enable.ast-header-break-point.ast-theme-transparent-header .ast-above-header-navigation-wrap,.ast-fullscreen-below-menu-enable.ast-header-break-point.ast-theme-transparent-header .ast-below-header-navigation-wrap,.ast-theme-transparent-header .main-header-menu .menu-link{background-color:#ffffff;}.ast-theme-transparent-header .ast-builder-menu .main-header-menu .menu-item .sub-menu,.ast-header-break-point.ast-flyout-menu-enable.ast-header-break-point .ast-builder-menu .main-header-bar-navigation .main-header-menu .menu-item .sub-menu,.ast-theme-transparent-header.astra-hfb-header .ast-builder-menu [CLASS*="ast-builder-menu-"] .main-header-menu .menu-item .sub-menu,.ast-header-break-point.ast-flyout-menu-enable.astra-hfb-header .ast-builder-menu .main-header-bar-navigation [CLASS*="ast-builder-menu-"] .main-header-menu .menu-item .sub-menu,.ast-theme-transparent-header .ast-builder-menu .main-header-menu .menu-item .sub-menu .menu-link,.ast-header-break-point.ast-flyout-menu-enable.ast-header-break-point .ast-builder-menu .main-header-bar-navigation .main-header-menu .menu-item .sub-menu .menu-link,.ast-theme-transparent-header.astra-hfb-header .ast-builder-menu [CLASS*="ast-builder-menu-"] .main-header-menu .menu-item .sub-menu .menu-link,.ast-header-break-point.ast-flyout-menu-enable.astra-hfb-header .ast-builder-menu .main-header-bar-navigation [CLASS*="ast-builder-menu-"] .main-header-menu .menu-item .sub-menu .menu-link,.ast-theme-transparent-header .main-header-menu .menu-item .sub-menu .menu-link,.ast-header-break-point.ast-flyout-menu-enable.ast-header-break-point .main-header-bar-navigation .main-header-menu .menu-item .sub-menu .menu-link,.ast-theme-transparent-header .main-header-menu .menu-item .sub-menu,.ast-header-break-point.ast-flyout-menu-enable.ast-header-break-point .main-header-bar-navigation .main-header-menu .menu-item .sub-menu{background-color:#ffffff;}.ast-theme-transparent-header .ast-builder-menu .main-header-menu,.ast-theme-transparent-header .ast-builder-menu .main-header-menu .menu-link,.ast-theme-transparent-header [CLASS*="ast-builder-menu-"] .main-header-menu .menu-item > .menu-link,.ast-theme-transparent-header .ast-masthead-custom-menu-items,.ast-theme-transparent-header .ast-masthead-custom-menu-items a,.ast-theme-transparent-header .ast-builder-menu .main-header-menu .menu-item > .ast-menu-toggle,.ast-theme-transparent-header .ast-builder-menu .main-header-menu .menu-item > .ast-menu-toggle,.ast-theme-transparent-header .main-header-menu .menu-link{color:#2f3f50;}.ast-theme-transparent-header .ast-builder-menu .main-header-menu .menu-item:hover > .menu-link,.ast-theme-transparent-header .ast-builder-menu .main-header-menu .menu-item:hover > .ast-menu-toggle,.ast-theme-transparent-header .ast-builder-menu .main-header-menu .ast-masthead-custom-menu-items a:hover,.ast-theme-transparent-header .ast-builder-menu .main-header-menu .focus > .menu-link,.ast-theme-transparent-header .ast-builder-menu .main-header-menu .focus > .ast-menu-toggle,.ast-theme-transparent-header .ast-builder-menu .main-header-menu .current-menu-item > .menu-link,.ast-theme-transparent-header .ast-builder-menu .main-header-menu .current-menu-ancestor > .menu-link,.ast-theme-transparent-header .ast-builder-menu .main-header-menu .current-menu-item > .ast-menu-toggle,.ast-theme-transparent-header .ast-builder-menu .main-header-menu .current-menu-ancestor > .ast-menu-toggle,.ast-theme-transparent-header [CLASS*="ast-builder-menu-"] .main-header-menu .current-menu-item > .menu-link,.ast-theme-transparent-header [CLASS*="ast-builder-menu-"] .main-header-menu .current-menu-ancestor > .menu-link,.ast-theme-transparent-header [CLASS*="ast-builder-menu-"] .main-header-menu .current-menu-item > .ast-menu-toggle,.ast-theme-transparent-header [CLASS*="ast-builder-menu-"] .main-header-menu .current-menu-ancestor > .ast-menu-toggle,.ast-theme-transparent-header .main-header-menu .menu-item:hover > .menu-link,.ast-theme-transparent-header .main-header-menu .current-menu-item > .menu-link,.ast-theme-transparent-header .main-header-menu .current-menu-ancestor > .menu-link{color:#0984e3;}}@media (max-width:544px){.ast-theme-transparent-header.ast-header-break-point .ast-builder-menu .main-header-menu,.ast-theme-transparent-header.ast-header-break-point .ast-builder-menu.main-header-menu .sub-menu,.ast-theme-transparent-header.ast-header-break-point .ast-builder-menu.main-header-menu,.ast-theme-transparent-header.ast-header-break-point .ast-builder-menu .main-header-bar-wrap .main-header-menu,.ast-flyout-menu-enable.ast-header-break-point.ast-theme-transparent-header .main-header-bar-navigation .site-navigation,.ast-fullscreen-menu-enable.ast-header-break-point.ast-theme-transparent-header .main-header-bar-navigation .site-navigation,.ast-flyout-above-menu-enable.ast-header-break-point.ast-theme-transparent-header .ast-above-header-navigation-wrap .ast-above-header-navigation,.ast-flyout-below-menu-enable.ast-header-break-point.ast-theme-transparent-header .ast-below-header-navigation-wrap .ast-below-header-actual-nav,.ast-fullscreen-above-menu-enable.ast-header-break-point.ast-theme-transparent-header .ast-above-header-navigation-wrap,.ast-fullscreen-below-menu-enable.ast-header-break-point.ast-theme-transparent-header .ast-below-header-navigation-wrap,.ast-theme-transparent-header .main-header-menu .menu-link{background-color:#ffffff;}.ast-theme-transparent-header .ast-builder-menu .main-header-menu,.ast-theme-transparent-header .ast-builder-menu .main-header-menu .menu-item > .menu-link,.ast-theme-transparent-header .ast-builder-menu .main-header-menu .menu-link,.ast-theme-transparent-header .ast-masthead-custom-menu-items,.ast-theme-transparent-header .ast-masthead-custom-menu-items a,.ast-theme-transparent-header .ast-builder-menu .main-header-menu .menu-item > .ast-menu-toggle,.ast-theme-transparent-header .ast-builder-menu .main-header-menu .menu-item > .ast-menu-toggle,.ast-theme-transparent-header .main-header-menu .menu-link{color:#2f3f50;}.ast-theme-transparent-header .ast-builder-menu .main-header-menu .menu-item:hover > .menu-link,.ast-theme-transparent-header .ast-builder-menu .main-header-menu .menu-item:hover > .ast-menu-toggle,.ast-theme-transparent-header .ast-builder-menu .main-header-menu .ast-masthead-custom-menu-items a:hover,.ast-theme-transparent-header .ast-builder-menu .main-header-menu .focus > .menu-link,.ast-theme-transparent-header .ast-builder-menu .main-header-menu .focus > .ast-menu-toggle,.ast-theme-transparent-header .ast-builder-menu .main-header-menu .current-menu-item > .menu-link,.ast-theme-transparent-header .ast-builder-menu .main-header-menu .current-menu-ancestor > .menu-link,.ast-theme-transparent-header .ast-builder-menu .main-header-menu .current-menu-item > .ast-menu-toggle,.ast-theme-transparent-header .ast-builder-menu .main-header-menu .current-menu-ancestor > .ast-menu-toggle,.ast-theme-transparent-header [CLASS*="ast-builder-menu-"] .main-header-menu .current-menu-item > .menu-link,.ast-theme-transparent-header [CLASS*="ast-builder-menu-"] .main-header-menu .current-menu-ancestor > .menu-link,.ast-theme-transparent-header [CLASS*="ast-builder-menu-"] .main-header-menu .current-menu-item > .ast-menu-toggle,.ast-theme-transparent-header [CLASS*="ast-builder-menu-"] .main-header-menu .current-menu-ancestor > .ast-menu-toggle,.ast-theme-transparent-header .main-header-menu .menu-item:hover > .menu-link,.ast-theme-transparent-header .main-header-menu .current-menu-item > .menu-link,.ast-theme-transparent-header .main-header-menu .current-menu-ancestor > .menu-link{color:#4a80ec;}}.ast-theme-transparent-header #ast-desktop-header > [CLASS*="-header-wrap"]:nth-last-child(2) > [CLASS*="-header-bar"],.ast-theme-transparent-header.ast-header-break-point #ast-mobile-header > [CLASS*="-header-wrap"]:nth-last-child(2) > [CLASS*="-header-bar"]{border-bottom-width:0px;border-bottom-style:solid;}.ast-breadcrumbs .trail-browse,.ast-breadcrumbs .trail-items,.ast-breadcrumbs .trail-items li{display:inline-block;margin:0;padding:0;border:none;background:inherit;text-indent:0;}.ast-breadcrumbs .trail-browse{font-size:inherit;font-style:inherit;font-weight:inherit;color:inherit;}.ast-breadcrumbs .trail-items{list-style:none;}.trail-items li::after{padding:0 0.3em;content:"\00bb";}.trail-items li:last-of-type::after{display:none;}h1,.entry-content h1,h2,.entry-content h2,h3,.entry-content h3,h4,.entry-content h4,h5,.entry-content h5,h6,.entry-content h6{color:var(--ast-global-color-2);}@media (max-width:921px){.ast-builder-grid-row-container.ast-builder-grid-row-tablet-3-firstrow .ast-builder-grid-row > *:first-child,.ast-builder-grid-row-container.ast-builder-grid-row-tablet-3-lastrow .ast-builder-grid-row > *:last-child{grid-column:1 / -1;}}@media (max-width:544px){.ast-builder-grid-row-container.ast-builder-grid-row-mobile-3-firstrow .ast-builder-grid-row > *:first-child,.ast-builder-grid-row-container.ast-builder-grid-row-mobile-3-lastrow .ast-builder-grid-row > *:last-child{grid-column:1 / -1;}}.ast-builder-layout-element[data-section="title_tagline"]{display:flex;}@media (max-width:921px){.ast-header-break-point .ast-builder-layout-element[data-section="title_tagline"]{display:flex;}}@media (max-width:544px){.ast-header-break-point .ast-builder-layout-element[data-section="title_tagline"]{display:flex;}}.ast-builder-menu-1{font-family:inherit;font-weight:500;}.ast-builder-menu-1 .menu-item > .menu-link{font-size:15px;font-size:0.9375rem;color:var(--ast-global-color-3);}.ast-builder-menu-1 .menu-item > .ast-menu-toggle{color:var(--ast-global-color-3);}.ast-builder-menu-1 .menu-item:hover > .menu-link,.ast-builder-menu-1 .inline-on-mobile .menu-item:hover > .ast-menu-toggle{color:var(--ast-global-color-1);}.ast-builder-menu-1 .menu-item:hover > .ast-menu-toggle{color:var(--ast-global-color-1);}.ast-builder-menu-1 .menu-item.current-menu-item > .menu-link,.ast-builder-menu-1 .inline-on-mobile .menu-item.current-menu-item > .ast-menu-toggle,.ast-builder-menu-1 .current-menu-ancestor > .menu-link{color:var(--ast-global-color-1);}.ast-builder-menu-1 .menu-item.current-menu-item > .ast-menu-toggle{color:var(--ast-global-color-1);}.ast-builder-menu-1 .sub-menu,.ast-builder-menu-1 .inline-on-mobile .sub-menu{border-top-width:0px;border-bottom-width:0px;border-right-width:0px;border-left-width:0px;border-color:#adadad;border-style:solid;border-radius:0px;}.ast-builder-menu-1 .main-header-menu > .menu-item > .sub-menu,.ast-builder-menu-1 .main-header-menu > .menu-item > .astra-full-megamenu-wrapper{margin-top:0px;}.ast-desktop .ast-builder-menu-1 .main-header-menu > .menu-item > .sub-menu:before,.ast-desktop .ast-builder-menu-1 .main-header-menu > .menu-item > .astra-full-megamenu-wrapper:before{height:calc( 0px + 5px );}.ast-desktop .ast-builder-menu-1 .menu-item .sub-menu .menu-link{border-bottom-width:1px;border-color:rgba(39,44,108,0.15);border-style:solid;}.ast-desktop .ast-builder-menu-1 .menu-item .sub-menu .menu-item:last-child .menu-link{border-bottom-width:0;}@media (max-width:921px){.ast-header-break-point .ast-builder-menu-1 .main-header-menu .menu-item > .menu-link{padding-top:0px;padding-bottom:0px;padding-left:20px;padding-right:20px;}.ast-builder-menu-1 .main-header-menu .menu-item > .menu-link{color:#191a19;}.ast-builder-menu-1 .menu-item > .ast-menu-toggle{color:#191a19;}.ast-builder-menu-1 .menu-item:hover > .menu-link,.ast-builder-menu-1 .inline-on-mobile .menu-item:hover > .ast-menu-toggle{color:#4a80ec;}.ast-builder-menu-1 .menu-item:hover > .ast-menu-toggle{color:#4a80ec;}.ast-builder-menu-1 .menu-item.current-menu-item > .menu-link,.ast-builder-menu-1 .inline-on-mobile .menu-item.current-menu-item > .ast-menu-toggle,.ast-builder-menu-1 .current-menu-ancestor > .menu-link,.ast-builder-menu-1 .current-menu-ancestor > .ast-menu-toggle{color:#4a80ec;}.ast-builder-menu-1 .menu-item.current-menu-item > .ast-menu-toggle{color:#4a80ec;}.ast-header-break-point .ast-builder-menu-1 .menu-item.menu-item-has-children > .ast-menu-toggle{top:0px;right:calc( 20px - 0.907em );}.ast-builder-menu-1 .menu-item-has-children > .menu-link:after{content:unset;}.ast-builder-menu-1 .main-header-menu > .menu-item > .sub-menu,.ast-builder-menu-1 .main-header-menu > .menu-item > .astra-full-megamenu-wrapper{margin-top:0;}.ast-builder-menu-1 .main-header-menu,.ast-builder-menu-1 .main-header-menu .sub-menu{background-color:#ffffff;;background-image:none;;}}@media (max-width:544px){.ast-header-break-point .ast-builder-menu-1 .menu-item.menu-item-has-children > .ast-menu-toggle{top:0;}.ast-builder-menu-1 .main-header-menu > .menu-item > .sub-menu,.ast-builder-menu-1 .main-header-menu > .menu-item > .astra-full-megamenu-wrapper{margin-top:0;}}.ast-builder-menu-1{display:flex;}@media (max-width:921px){.ast-header-break-point .ast-builder-menu-1{display:flex;}}@media (max-width:544px){.ast-header-break-point .ast-builder-menu-1{display:flex;}}.site-below-footer-wrap{padding-top:20px;padding-bottom:20px;}.site-below-footer-wrap[data-section="section-below-footer-builder"]{background-color:;;background-image:none;;min-height:80px;border-style:solid;border-width:0px;border-top-width:1px;border-top-color:rgba(255,255,255,0.2);}.site-below-footer-wrap[data-section="section-below-footer-builder"] .ast-builder-grid-row{max-width:1200px;margin-left:auto;margin-right:auto;}.site-below-footer-wrap[data-section="section-below-footer-builder"] .ast-builder-grid-row,.site-below-footer-wrap[data-section="section-below-footer-builder"] .site-footer-section{align-items:flex-start;}.site-below-footer-wrap[data-section="section-below-footer-builder"].ast-footer-row-inline .site-footer-section{display:flex;margin-bottom:0;}.ast-builder-grid-row-full .ast-builder-grid-row{grid-template-columns:1fr;}@media (max-width:921px){.site-below-footer-wrap[data-section="section-below-footer-builder"].ast-footer-row-tablet-inline .site-footer-section{display:flex;margin-bottom:0;}.site-below-footer-wrap[data-section="section-below-footer-builder"].ast-footer-row-tablet-stack .site-footer-section{display:block;margin-bottom:10px;}.ast-builder-grid-row-container.ast-builder-grid-row-tablet-full .ast-builder-grid-row{grid-template-columns:1fr;}}@media (max-width:544px){.site-below-footer-wrap[data-section="section-below-footer-builder"].ast-footer-row-mobile-inline .site-footer-section{display:flex;margin-bottom:0;}.site-below-footer-wrap[data-section="section-below-footer-builder"].ast-footer-row-mobile-stack .site-footer-section{display:block;margin-bottom:10px;}.ast-builder-grid-row-container.ast-builder-grid-row-mobile-full .ast-builder-grid-row{grid-template-columns:1fr;}}.site-below-footer-wrap[data-section="section-below-footer-builder"]{padding-top:30px;padding-bottom:30px;padding-left:30px;padding-right:30px;}@media (max-width:921px){.site-below-footer-wrap[data-section="section-below-footer-builder"]{padding-top:30px;padding-bottom:30px;padding-left:25px;padding-right:25px;}}@media (max-width:544px){.site-below-footer-wrap[data-section="section-below-footer-builder"]{padding-top:30px;padding-bottom:30px;padding-left:20px;padding-right:20px;}}.site-below-footer-wrap[data-section="section-below-footer-builder"]{display:grid;}@media (max-width:921px){.ast-header-break-point .site-below-footer-wrap[data-section="section-below-footer-builder"]{display:grid;}}@media (max-width:544px){.ast-header-break-point .site-below-footer-wrap[data-section="section-below-footer-builder"]{display:grid;}}.ast-footer-copyright{text-align:center;}.ast-footer-copyright {color:var(--ast-global-color-5);}@media (max-width:921px){.ast-footer-copyright{text-align:center;}}@media (max-width:544px){.ast-footer-copyright{text-align:center;}}.ast-footer-copyright {font-size:16px;font-size:1rem;}@media (max-width:921px){.ast-footer-copyright {font-size:15px;font-size:0.9375rem;}}@media (max-width:544px){.ast-footer-copyright {font-size:15px;font-size:0.9375rem;}}.ast-footer-copyright.ast-builder-layout-element{display:flex;}@media (max-width:921px){.ast-header-break-point .ast-footer-copyright.ast-builder-layout-element{display:flex;}}@media (max-width:544px){.ast-header-break-point .ast-footer-copyright.ast-builder-layout-element{display:flex;}}.site-footer{background-color:var(--ast-global-color-1);;background-image:none;;}.site-primary-footer-wrap{padding-top:45px;padding-bottom:45px;}.site-primary-footer-wrap[data-section="section-primary-footer-builder"]{background-color:;;background-image:none;;}.site-primary-footer-wrap[data-section="section-primary-footer-builder"] .ast-builder-grid-row{max-width:1200px;margin-left:auto;margin-right:auto;}.site-primary-footer-wrap[data-section="section-primary-footer-builder"] .ast-builder-grid-row,.site-primary-footer-wrap[data-section="section-primary-footer-builder"] .site-footer-section{align-items:flex-start;}.site-primary-footer-wrap[data-section="section-primary-footer-builder"].ast-footer-row-inline .site-footer-section{display:flex;margin-bottom:0;}.ast-builder-grid-row-3-cwide .ast-builder-grid-row{grid-template-columns:1fr 3fr 1fr;}@media (max-width:921px){.site-primary-footer-wrap[data-section="section-primary-footer-builder"].ast-footer-row-tablet-inline .site-footer-section{display:flex;margin-bottom:0;}.site-primary-footer-wrap[data-section="section-primary-footer-builder"].ast-footer-row-tablet-stack .site-footer-section{display:block;margin-bottom:10px;}.ast-builder-grid-row-container.ast-builder-grid-row-tablet-full .ast-builder-grid-row{grid-template-columns:1fr;}}@media (max-width:544px){.site-primary-footer-wrap[data-section="section-primary-footer-builder"].ast-footer-row-mobile-inline .site-footer-section{display:flex;margin-bottom:0;}.site-primary-footer-wrap[data-section="section-primary-footer-builder"].ast-footer-row-mobile-stack .site-footer-section{display:block;margin-bottom:10px;}.ast-builder-grid-row-container.ast-builder-grid-row-mobile-full .ast-builder-grid-row{grid-template-columns:1fr;}}.site-primary-footer-wrap[data-section="section-primary-footer-builder"]{padding-top:100px;padding-bottom:75px;padding-left:30px;padding-right:30px;}@media (max-width:921px){.site-primary-footer-wrap[data-section="section-primary-footer-builder"]{padding-top:80px;padding-bottom:60px;padding-left:25px;padding-right:25px;}}@media (max-width:544px){.site-primary-footer-wrap[data-section="section-primary-footer-builder"]{padding-top:80px;padding-bottom:60px;padding-left:20px;padding-right:20px;}}.site-primary-footer-wrap[data-section="section-primary-footer-builder"]{display:grid;}@media (max-width:921px){.ast-header-break-point .site-primary-footer-wrap[data-section="section-primary-footer-builder"]{display:grid;}}@media (max-width:544px){.ast-header-break-point .site-primary-footer-wrap[data-section="section-primary-footer-builder"]{display:grid;}}.footer-widget-area[data-section="sidebar-widgets-footer-widget-1"] .footer-widget-area-inner{text-align:center;}@media (max-width:921px){.footer-widget-area[data-section="sidebar-widgets-footer-widget-1"] .footer-widget-area-inner{text-align:center;}}@media (max-width:544px){.footer-widget-area[data-section="sidebar-widgets-footer-widget-1"] .footer-widget-area-inner{text-align:center;}}.footer-widget-area[data-section="sidebar-widgets-footer-widget-1"] .footer-widget-area-inner{color:var(--ast-global-color-4);}.footer-widget-area[data-section="sidebar-widgets-footer-widget-1"] .widget-title{color:var(--ast-global-color-4);font-size:35px;font-size:2.1875rem;}@media (max-width:544px){.footer-widget-area[data-section="sidebar-widgets-footer-widget-1"] .widget-title{font-size:32px;font-size:2rem;}}.footer-widget-area[data-section="sidebar-widgets-footer-widget-1"]{display:block;}@media (max-width:921px){.ast-header-break-point .footer-widget-area[data-section="sidebar-widgets-footer-widget-1"]{display:block;}}@media (max-width:544px){.ast-header-break-point .footer-widget-area[data-section="sidebar-widgets-footer-widget-1"]{display:block;}}.elementor-widget-heading .elementor-heading-title{margin:0;}.elementor-page .ast-menu-toggle{color:unset !important;background:unset !important;}.elementor-post.elementor-grid-item.hentry{margin-bottom:0;}.woocommerce div.product .elementor-element.elementor-products-grid .related.products ul.products li.product,.elementor-element .elementor-wc-products .woocommerce[class*='columns-'] ul.products li.product{width:auto;margin:0;float:none;}.ast-left-sidebar .elementor-section.elementor-section-stretched,.ast-right-sidebar .elementor-section.elementor-section-stretched{max-width:100%;left:0 !important;}.elementor-template-full-width .ast-container{display:block;}@media (max-width:544px){.elementor-element .elementor-wc-products .woocommerce[class*="columns-"] ul.products li.product{width:auto;margin:0;}.elementor-element .woocommerce .woocommerce-result-count{float:none;}}.ast-header-break-point .main-header-bar{border-bottom-width:1px;border-bottom-color:#dbdee0;}@media (min-width:922px){.main-header-bar{border-bottom-width:1px;border-bottom-color:#dbdee0;}}.main-header-menu .menu-item, #astra-footer-menu .menu-item, .main-header-bar .ast-masthead-custom-menu-items{-js-display:flex;display:flex;-webkit-box-pack:center;-webkit-justify-content:center;-moz-box-pack:center;-ms-flex-pack:center;justify-content:center;-webkit-box-orient:vertical;-webkit-box-direction:normal;-webkit-flex-direction:column;-moz-box-orient:vertical;-moz-box-direction:normal;-ms-flex-direction:column;flex-direction:column;}.main-header-menu > .menu-item > .menu-link, #astra-footer-menu > .menu-item > .menu-link{height:100%;-webkit-box-align:center;-webkit-align-items:center;-moz-box-align:center;-ms-flex-align:center;align-items:center;-js-display:flex;display:flex;}.header-main-layout-1 .ast-flex.main-header-container, .header-main-layout-3 .ast-flex.main-header-container{-webkit-align-content:center;-ms-flex-line-pack:center;align-content:center;-webkit-box-align:center;-webkit-align-items:center;-moz-box-align:center;-ms-flex-align:center;align-items:center;}.main-header-menu .sub-menu .menu-item.menu-item-has-children > .menu-link:after{position:absolute;right:1em;top:50%;transform:translate(0,-50%) rotate(270deg);}.ast-header-break-point .main-header-bar .main-header-bar-navigation .page_item_has_children > .ast-menu-toggle::before, .ast-header-break-point .main-header-bar .main-header-bar-navigation .menu-item-has-children > .ast-menu-toggle::before, .ast-mobile-popup-drawer .main-header-bar-navigation .menu-item-has-children>.ast-menu-toggle::before, .ast-header-break-point .ast-mobile-header-wrap .main-header-bar-navigation .menu-item-has-children > .ast-menu-toggle::before{font-weight:bold;content:"\e900";font-family:Astra;text-decoration:inherit;display:inline-block;}.ast-header-break-point .main-navigation ul.sub-menu .menu-item .menu-link:before{content:"\e900";font-family:Astra;font-size:.65em;text-decoration:inherit;display:inline-block;transform:translate(0, -2px) rotateZ(270deg);margin-right:5px;}.widget_search .search-form:after{font-family:Astra;font-size:1.2em;font-weight:normal;content:"\e8b6";position:absolute;top:50%;right:15px;transform:translate(0, -50%);}.astra-search-icon::before{content:"\e8b6";font-family:Astra;font-style:normal;font-weight:normal;text-decoration:inherit;text-align:center;-webkit-font-smoothing:antialiased;-moz-osx-font-smoothing:grayscale;z-index:3;}.main-header-bar .main-header-bar-navigation .page_item_has_children > a:after, .main-header-bar .main-header-bar-navigation .menu-item-has-children > a:after, .site-header-focus-item .main-header-bar-navigation .menu-item-has-children > .menu-link:after{content:"\e900";display:inline-block;font-family:Astra;font-size:.6rem;font-weight:bold;text-rendering:auto;-webkit-font-smoothing:antialiased;-moz-osx-font-smoothing:grayscale;margin-left:10px;line-height:normal;}.ast-mobile-popup-drawer .main-header-bar-navigation .ast-submenu-expanded>.ast-menu-toggle::before{transform:rotateX(180deg);}.ast-header-break-point .main-header-bar-navigation .menu-item-has-children > .menu-link:after{display:none;}.ast-separate-container .blog-layout-1, .ast-separate-container .blog-layout-2, .ast-separate-container .blog-layout-3{background-color:transparent;background-image:none;}.ast-separate-container .ast-article-post{background-color:var(--ast-global-color-5);;background-image:none;;}@media (max-width:921px){.ast-separate-container .ast-article-post{background-color:var(--ast-global-color-5);;background-image:none;;}}@media (max-width:544px){.ast-separate-container .ast-article-post{background-color:var(--ast-global-color-5);;background-image:none;;}}.ast-separate-container .ast-article-single:not(.ast-related-post), .ast-separate-container .comments-area .comment-respond,.ast-separate-container .comments-area .ast-comment-list li, .ast-separate-container .ast-woocommerce-container, .ast-separate-container .error-404, .ast-separate-container .no-results, .single.ast-separate-container  .ast-author-meta, .ast-separate-container .related-posts-title-wrapper, .ast-separate-container.ast-two-container #secondary .widget,.ast-separate-container .comments-count-wrapper, .ast-box-layout.ast-plain-container .site-content,.ast-padded-layout.ast-plain-container .site-content, .ast-separate-container .comments-area .comments-title, .ast-narrow-container .site-content{background-color:var(--ast-global-color-5);;background-image:none;;}@media (max-width:921px){.ast-separate-container .ast-article-single:not(.ast-related-post), .ast-separate-container .comments-area .comment-respond,.ast-separate-container .comments-area .ast-comment-list li, .ast-separate-container .ast-woocommerce-container, .ast-separate-container .error-404, .ast-separate-container .no-results, .single.ast-separate-container  .ast-author-meta, .ast-separate-container .related-posts-title-wrapper, .ast-separate-container.ast-two-container #secondary .widget,.ast-separate-container .comments-count-wrapper, .ast-box-layout.ast-plain-container .site-content,.ast-padded-layout.ast-plain-container .site-content, .ast-separate-container .comments-area .comments-title, .ast-narrow-container .site-content{background-color:var(--ast-global-color-5);;background-image:none;;}}@media (max-width:544px){.ast-separate-container .ast-article-single:not(.ast-related-post), .ast-separate-container .comments-area .comment-respond,.ast-separate-container .comments-area .ast-comment-list li, .ast-separate-container .ast-woocommerce-container, .ast-separate-container .error-404, .ast-separate-container .no-results, .single.ast-separate-container  .ast-author-meta, .ast-separate-container .related-posts-title-wrapper, .ast-separate-container.ast-two-container #secondary .widget,.ast-separate-container .comments-count-wrapper, .ast-box-layout.ast-plain-container .site-content,.ast-padded-layout.ast-plain-container .site-content, .ast-separate-container .comments-area .comments-title, .ast-narrow-container .site-content{background-color:var(--ast-global-color-5);;background-image:none;;}}.ast-mobile-header-content > *,.ast-desktop-header-content > * {padding: 10px 0;height: auto;}.ast-mobile-header-content > *:first-child,.ast-desktop-header-content > *:first-child {padding-top: 10px;}.ast-mobile-header-content > .ast-builder-menu,.ast-desktop-header-content > .ast-builder-menu {padding-top: 0;}.ast-mobile-header-content > *:last-child,.ast-desktop-header-content > *:last-child {padding-bottom: 0;}.ast-mobile-header-content .ast-search-menu-icon.ast-inline-search label,.ast-desktop-header-content .ast-search-menu-icon.ast-inline-search label {width: 100%;}.ast-desktop-header-content .main-header-bar-navigation .ast-submenu-expanded > .ast-menu-toggle::before {transform: rotateX(180deg);}#ast-desktop-header .ast-desktop-header-content,.ast-mobile-header-content .ast-search-icon,.ast-desktop-header-content .ast-search-icon,.ast-mobile-header-wrap .ast-mobile-header-content,.ast-main-header-nav-open.ast-popup-nav-open .ast-mobile-header-wrap .ast-mobile-header-content,.ast-main-header-nav-open.ast-popup-nav-open .ast-desktop-header-content {display: none;}.ast-main-header-nav-open.ast-header-break-point #ast-desktop-header .ast-desktop-header-content,.ast-main-header-nav-open.ast-header-break-point .ast-mobile-header-wrap .ast-mobile-header-content {display: block;}.ast-desktop .ast-desktop-header-content .astra-menu-animation-slide-up > .menu-item > .sub-menu,.ast-desktop .ast-desktop-header-content .astra-menu-animation-slide-up > .menu-item .menu-item > .sub-menu,.ast-desktop .ast-desktop-header-content .astra-menu-animation-slide-down > .menu-item > .sub-menu,.ast-desktop .ast-desktop-header-content .astra-menu-animation-slide-down > .menu-item .menu-item > .sub-menu,.ast-desktop .ast-desktop-header-content .astra-menu-animation-fade > .menu-item > .sub-menu,.ast-desktop .ast-desktop-header-content .astra-menu-animation-fade > .menu-item .menu-item > .sub-menu {opacity: 1;visibility: visible;}.ast-hfb-header.ast-default-menu-enable.ast-header-break-point .ast-mobile-header-wrap .ast-mobile-header-content .main-header-bar-navigation {width: unset;margin: unset;}.ast-mobile-header-content.content-align-flex-end .main-header-bar-navigation .menu-item-has-children > .ast-menu-toggle,.ast-desktop-header-content.content-align-flex-end .main-header-bar-navigation .menu-item-has-children > .ast-menu-toggle {left: calc( 20px - 0.907em);}.ast-mobile-header-content .ast-search-menu-icon,.ast-mobile-header-content .ast-search-menu-icon.slide-search,.ast-desktop-header-content .ast-search-menu-icon,.ast-desktop-header-content .ast-search-menu-icon.slide-search {width: 100%;position: relative;display: block;right: auto;transform: none;}.ast-mobile-header-content .ast-search-menu-icon.slide-search .search-form,.ast-mobile-header-content .ast-search-menu-icon .search-form,.ast-desktop-header-content .ast-search-menu-icon.slide-search .search-form,.ast-desktop-header-content .ast-search-menu-icon .search-form {right: 0;visibility: visible;opacity: 1;position: relative;top: auto;transform: none;padding: 0;display: block;overflow: hidden;}.ast-mobile-header-content .ast-search-menu-icon.ast-inline-search .search-field,.ast-mobile-header-content .ast-search-menu-icon .search-field,.ast-desktop-header-content .ast-search-menu-icon.ast-inline-search .search-field,.ast-desktop-header-content .ast-search-menu-icon .search-field {width: 100%;padding-right: 5.5em;}.ast-mobile-header-content .ast-search-menu-icon .search-submit,.ast-desktop-header-content .ast-search-menu-icon .search-submit {display: block;position: absolute;height: 100%;top: 0;right: 0;padding: 0 1em;border-radius: 0;}.ast-hfb-header.ast-default-menu-enable.ast-header-break-point .ast-mobile-header-wrap .ast-mobile-header-content .main-header-bar-navigation ul .sub-menu .menu-link {padding-left: 30px;}.ast-hfb-header.ast-default-menu-enable.ast-header-break-point .ast-mobile-header-wrap .ast-mobile-header-content .main-header-bar-navigation .sub-menu .menu-item .menu-item .menu-link {padding-left: 40px;}.ast-mobile-popup-drawer.active .ast-mobile-popup-inner{background-color:#ffffff;;}.ast-mobile-header-wrap .ast-mobile-header-content, .ast-desktop-header-content{background-color:#ffffff;;}.ast-mobile-popup-content > *, .ast-mobile-header-content > *, .ast-desktop-popup-content > *, .ast-desktop-header-content > *{padding-top:0px;padding-bottom:0px;}.content-align-flex-start .ast-builder-layout-element{justify-content:flex-start;}.content-align-flex-start .main-header-menu{text-align:left;}.ast-mobile-popup-drawer.active .menu-toggle-close{color:#3a3a3a;}.ast-mobile-header-wrap .ast-primary-header-bar,.ast-primary-header-bar .site-primary-header-wrap{min-height:70px;}.ast-desktop .ast-primary-header-bar .main-header-menu > .menu-item{line-height:70px;}@media (max-width:921px){#masthead .ast-mobile-header-wrap .ast-primary-header-bar,#masthead .ast-mobile-header-wrap .ast-below-header-bar{padding-left:20px;padding-right:20px;}}.ast-header-break-point .ast-primary-header-bar{border-bottom-width:0px;border-bottom-color:#dbdee0;border-bottom-style:solid;}@media (min-width:922px){.ast-primary-header-bar{border-bottom-width:0px;border-bottom-color:#dbdee0;border-bottom-style:solid;}}.ast-primary-header-bar{background-color:var(--ast-global-color-0);;background-image:none;;}@media (max-width:921px){.ast-primary-header-bar.ast-primary-header{background-color:#272c6c;;background-image:none;;}}.ast-desktop .ast-primary-header-bar.main-header-bar, .ast-header-break-point #masthead .ast-primary-header-bar.main-header-bar{padding-top:10px;padding-bottom:10px;}@media (max-width:921px){.ast-desktop .ast-primary-header-bar.main-header-bar, .ast-header-break-point #masthead .ast-primary-header-bar.main-header-bar{padding-top:1em;padding-bottom:1em;}}@media (max-width:544px){.ast-desktop .ast-primary-header-bar.main-header-bar, .ast-header-break-point #masthead .ast-primary-header-bar.main-header-bar{padding-top:0.5em;padding-bottom:1em;}}.ast-primary-header-bar{display:block;}@media (max-width:921px){.ast-header-break-point .ast-primary-header-bar{display:grid;}}@media (max-width:544px){.ast-header-break-point .ast-primary-header-bar{display:grid;}}[data-section="section-header-mobile-trigger"] .ast-button-wrap .ast-mobile-menu-trigger-fill{color:var(--ast-global-color-2);border:none;background:var(--ast-global-color-5);border-radius:2px;}[data-section="section-header-mobile-trigger"] .ast-button-wrap .mobile-menu-toggle-icon .ast-mobile-svg{width:20px;height:20px;fill:var(--ast-global-color-2);}[data-section="section-header-mobile-trigger"] .ast-button-wrap .mobile-menu-wrap .mobile-menu{color:var(--ast-global-color-2);}:root{--e-global-color-astglobalcolor0:#0274be;--e-global-color-astglobalcolor1:#0d68ae;--e-global-color-astglobalcolor2:#2f3f50;--e-global-color-astglobalcolor3:#3a3a3a;--e-global-color-astglobalcolor4:#fafafa;--e-global-color-astglobalcolor5:#ffffff;--e-global-color-astglobalcolor6:#003bb1;--e-global-color-astglobalcolor7:#FBFCFF;--e-global-color-astglobalcolor8:#BFD1FF;}
</style>
<link rel='stylesheet' id='astra-google-fonts-css' href='https://fonts.googleapis.com/css?family=Lato%3A400%2C500%7CPoppins%3A700&ver=4.0.2&display=swap' media='all' />
<link rel='stylesheet' id='astra-menu-animation-css' data-pmdelayedstyle="https://clinicahumanite.com.br/wp-content/themes/astra/assets/css/minified/menu-animation.min.css?ver=4.0.2" media='all' />
<link rel='stylesheet' id='hfe-widgets-style-css' data-pmdelayedstyle="https://clinicahumanite.com.br/wp-content/plugins/header-footer-elementor/inc/widgets-css/frontend.css?ver=1.6.37" media='all' />
<style id='wp-emoji-styles-inline-css'>

	img.wp-smiley, img.emoji {
		display: inline !important;
		border: none !important;
		box-shadow: none !important;
		height: 1em !important;
		width: 1em !important;
		margin: 0 0.07em !important;
		vertical-align: -0.1em !important;
		background: none !important;
		padding: 0 !important;
	}
</style>
<style id='joinchat-button-style-inline-css'>
.wp-block-joinchat-button{border:none!important;text-align:center}.wp-block-joinchat-button figure{display:table;margin:0 auto;padding:0}.wp-block-joinchat-button figcaption{font:normal normal 400 .6em/2em var(--wp--preset--font-family--system-font,sans-serif);margin:0;padding:0}.wp-block-joinchat-button .joinchat-button__qr{background-color:#fff;border:6px solid #25d366;border-radius:30px;box-sizing:content-box;display:block;height:200px;margin:auto;overflow:hidden;padding:10px;width:200px}.wp-block-joinchat-button .joinchat-button__qr canvas,.wp-block-joinchat-button .joinchat-button__qr img{display:block;margin:auto}.wp-block-joinchat-button .joinchat-button__link{align-items:center;background-color:#25d366;border:6px solid #25d366;border-radius:30px;display:inline-flex;flex-flow:row nowrap;justify-content:center;line-height:1.25em;margin:0 auto;text-decoration:none}.wp-block-joinchat-button .joinchat-button__link:before{background:transparent var(--joinchat-ico) no-repeat center;background-size:100%;content:"";display:block;height:1.5em;margin:-.75em .75em -.75em 0;width:1.5em}.wp-block-joinchat-button figure+.joinchat-button__link{margin-top:10px}@media (orientation:landscape)and (min-height:481px),(orientation:portrait)and (min-width:481px){.wp-block-joinchat-button.joinchat-button--qr-only figure+.joinchat-button__link{display:none}}@media (max-width:480px),(orientation:landscape)and (max-height:480px){.wp-block-joinchat-button figure{display:none}}

</style>
<style id='global-styles-inline-css'>
:root{--wp--preset--aspect-ratio--square: 1;--wp--preset--aspect-ratio--4-3: 4/3;--wp--preset--aspect-ratio--3-4: 3/4;--wp--preset--aspect-ratio--3-2: 3/2;--wp--preset--aspect-ratio--2-3: 2/3;--wp--preset--aspect-ratio--16-9: 16/9;--wp--preset--aspect-ratio--9-16: 9/16;--wp--preset--color--black: #000000;--wp--preset--color--cyan-bluish-gray: #abb8c3;--wp--preset--color--white: #ffffff;--wp--preset--color--pale-pink: #f78da7;--wp--preset--color--vivid-red: #cf2e2e;--wp--preset--color--luminous-vivid-orange: #ff6900;--wp--preset--color--luminous-vivid-amber: #fcb900;--wp--preset--color--light-green-cyan: #7bdcb5;--wp--preset--color--vivid-green-cyan: #00d084;--wp--preset--color--pale-cyan-blue: #8ed1fc;--wp--preset--color--vivid-cyan-blue: #0693e3;--wp--preset--color--vivid-purple: #9b51e0;--wp--preset--color--ast-global-color-0: var(--ast-global-color-0);--wp--preset--color--ast-global-color-1: var(--ast-global-color-1);--wp--preset--color--ast-global-color-2: var(--ast-global-color-2);--wp--preset--color--ast-global-color-3: var(--ast-global-color-3);--wp--preset--color--ast-global-color-4: var(--ast-global-color-4);--wp--preset--color--ast-global-color-5: var(--ast-global-color-5);--wp--preset--color--ast-global-color-6: var(--ast-global-color-6);--wp--preset--color--ast-global-color-7: var(--ast-global-color-7);--wp--preset--color--ast-global-color-8: var(--ast-global-color-8);--wp--preset--gradient--vivid-cyan-blue-to-vivid-purple: linear-gradient(135deg,rgba(6,147,227,1) 0%,rgb(155,81,224) 100%);--wp--preset--gradient--light-green-cyan-to-vivid-green-cyan: linear-gradient(135deg,rgb(122,220,180) 0%,rgb(0,208,130) 100%);--wp--preset--gradient--luminous-vivid-amber-to-luminous-vivid-orange: linear-gradient(135deg,rgba(252,185,0,1) 0%,rgba(255,105,0,1) 100%);--wp--preset--gradient--luminous-vivid-orange-to-vivid-red: linear-gradient(135deg,rgba(255,105,0,1) 0%,rgb(207,46,46) 100%);--wp--preset--gradient--very-light-gray-to-cyan-bluish-gray: linear-gradient(135deg,rgb(238,238,238) 0%,rgb(169,184,195) 100%);--wp--preset--gradient--cool-to-warm-spectrum: linear-gradient(135deg,rgb(74,234,220) 0%,rgb(151,120,209) 20%,rgb(207,42,186) 40%,rgb(238,44,130) 60%,rgb(251,105,98) 80%,rgb(254,248,76) 100%);--wp--preset--gradient--blush-light-purple: linear-gradient(135deg,rgb(255,206,236) 0%,rgb(152,150,240) 100%);--wp--preset--gradient--blush-bordeaux: linear-gradient(135deg,rgb(254,205,165) 0%,rgb(254,45,45) 50%,rgb(107,0,62) 100%);--wp--preset--gradient--luminous-dusk: linear-gradient(135deg,rgb(255,203,112) 0%,rgb(199,81,192) 50%,rgb(65,88,208) 100%);--wp--preset--gradient--pale-ocean: linear-gradient(135deg,rgb(255,245,203) 0%,rgb(182,227,212) 50%,rgb(51,167,181) 100%);--wp--preset--gradient--electric-grass: linear-gradient(135deg,rgb(202,248,128) 0%,rgb(113,206,126) 100%);--wp--preset--gradient--midnight: linear-gradient(135deg,rgb(2,3,129) 0%,rgb(40,116,252) 100%);--wp--preset--font-size--small: 13px;--wp--preset--font-size--medium: 20px;--wp--preset--font-size--large: 36px;--wp--preset--font-size--x-large: 42px;--wp--preset--spacing--20: 0.44rem;--wp--preset--spacing--30: 0.67rem;--wp--preset--spacing--40: 1rem;--wp--preset--spacing--50: 1.5rem;--wp--preset--spacing--60: 2.25rem;--wp--preset--spacing--70: 3.38rem;--wp--preset--spacing--80: 5.06rem;--wp--preset--shadow--natural: 6px 6px 9px rgba(0, 0, 0, 0.2);--wp--preset--shadow--deep: 12px 12px 50px rgba(0, 0, 0, 0.4);--wp--preset--shadow--sharp: 6px 6px 0px rgba(0, 0, 0, 0.2);--wp--preset--shadow--outlined: 6px 6px 0px -3px rgba(255, 255, 255, 1), 6px 6px rgba(0, 0, 0, 1);--wp--preset--shadow--crisp: 6px 6px 0px rgba(0, 0, 0, 1);}:root { --wp--style--global--content-size: var(--wp--custom--ast-content-width-size);--wp--style--global--wide-size: var(--wp--custom--ast-wide-width-size); }:where(body) { margin: 0; }.wp-site-blocks > .alignleft { float: left; margin-right: 2em; }.wp-site-blocks > .alignright { float: right; margin-left: 2em; }.wp-site-blocks > .aligncenter { justify-content: center; margin-left: auto; margin-right: auto; }:where(.wp-site-blocks) > * { margin-block-start: 24px; margin-block-end: 0; }:where(.wp-site-blocks) > :first-child { margin-block-start: 0; }:where(.wp-site-blocks) > :last-child { margin-block-end: 0; }:root { --wp--style--block-gap: 24px; }:root :where(.is-layout-flow) > :first-child{margin-block-start: 0;}:root :where(.is-layout-flow) > :last-child{margin-block-end: 0;}:root :where(.is-layout-flow) > *{margin-block-start: 24px;margin-block-end: 0;}:root :where(.is-layout-constrained) > :first-child{margin-block-start: 0;}:root :where(.is-layout-constrained) > :last-child{margin-block-end: 0;}:root :where(.is-layout-constrained) > *{margin-block-start: 24px;margin-block-end: 0;}:root :where(.is-layout-flex){gap: 24px;}:root :where(.is-layout-grid){gap: 24px;}.is-layout-flow > .alignleft{float: left;margin-inline-start: 0;margin-inline-end: 2em;}.is-layout-flow > .alignright{float: right;margin-inline-start: 2em;margin-inline-end: 0;}.is-layout-flow > .aligncenter{margin-left: auto !important;margin-right: auto !important;}.is-layout-constrained > .alignleft{float: left;margin-inline-start: 0;margin-inline-end: 2em;}.is-layout-constrained > .alignright{float: right;margin-inline-start: 2em;margin-inline-end: 0;}.is-layout-constrained > .aligncenter{margin-left: auto !important;margin-right: auto !important;}.is-layout-constrained > :where(:not(.alignleft):not(.alignright):not(.alignfull)){max-width: var(--wp--style--global--content-size);margin-left: auto !important;margin-right: auto !important;}.is-layout-constrained > .alignwide{max-width: var(--wp--style--global--wide-size);}body .is-layout-flex{display: flex;}.is-layout-flex{flex-wrap: wrap;align-items: center;}.is-layout-flex > :is(*, div){margin: 0;}body .is-layout-grid{display: grid;}.is-layout-grid > :is(*, div){margin: 0;}body{padding-top: 0px;padding-right: 0px;padding-bottom: 0px;padding-left: 0px;}a:where(:not(.wp-element-button)){text-decoration: none;}:root :where(.wp-element-button, .wp-block-button__link){background-color: #32373c;border-width: 0;color: #fff;font-family: inherit;font-size: inherit;line-height: inherit;padding: calc(0.667em + 2px) calc(1.333em + 2px);text-decoration: none;}.has-black-color{color: var(--wp--preset--color--black) !important;}.has-cyan-bluish-gray-color{color: var(--wp--preset--color--cyan-bluish-gray) !important;}.has-white-color{color: var(--wp--preset--color--white) !important;}.has-pale-pink-color{color: var(--wp--preset--color--pale-pink) !important;}.has-vivid-red-color{color: var(--wp--preset--color--vivid-red) !important;}.has-luminous-vivid-orange-color{color: var(--wp--preset--color--luminous-vivid-orange) !important;}.has-luminous-vivid-amber-color{color: var(--wp--preset--color--luminous-vivid-amber) !important;}.has-light-green-cyan-color{color: var(--wp--preset--color--light-green-cyan) !important;}.has-vivid-green-cyan-color{color: var(--wp--preset--color--vivid-green-cyan) !important;}.has-pale-cyan-blue-color{color: var(--wp--preset--color--pale-cyan-blue) !important;}.has-vivid-cyan-blue-color{color: var(--wp--preset--color--vivid-cyan-blue) !important;}.has-vivid-purple-color{color: var(--wp--preset--color--vivid-purple) !important;}.has-ast-global-color-0-color{color: var(--wp--preset--color--ast-global-color-0) !important;}.has-ast-global-color-1-color{color: var(--wp--preset--color--ast-global-color-1) !important;}.has-ast-global-color-2-color{color: var(--wp--preset--color--ast-global-color-2) !important;}.has-ast-global-color-3-color{color: var(--wp--preset--color--ast-global-color-3) !important;}.has-ast-global-color-4-color{color: var(--wp--preset--color--ast-global-color-4) !important;}.has-ast-global-color-5-color{color: var(--wp--preset--color--ast-global-color-5) !important;}.has-ast-global-color-6-color{color: var(--wp--preset--color--ast-global-color-6) !important;}.has-ast-global-color-7-color{color: var(--wp--preset--color--ast-global-color-7) !important;}.has-ast-global-color-8-color{color: var(--wp--preset--color--ast-global-color-8) !important;}.has-black-background-color{background-color: var(--wp--preset--color--black) !important;}.has-cyan-bluish-gray-background-color{background-color: var(--wp--preset--color--cyan-bluish-gray) !important;}.has-white-background-color{background-color: var(--wp--preset--color--white) !important;}.has-pale-pink-background-color{background-color: var(--wp--preset--color--pale-pink) !important;}.has-vivid-red-background-color{background-color: var(--wp--preset--color--vivid-red) !important;}.has-luminous-vivid-orange-background-color{background-color: var(--wp--preset--color--luminous-vivid-orange) !important;}.has-luminous-vivid-amber-background-color{background-color: var(--wp--preset--color--luminous-vivid-amber) !important;}.has-light-green-cyan-background-color{background-color: var(--wp--preset--color--light-green-cyan) !important;}.has-vivid-green-cyan-background-color{background-color: var(--wp--preset--color--vivid-green-cyan) !important;}.has-pale-cyan-blue-background-color{background-color: var(--wp--preset--color--pale-cyan-blue) !important;}.has-vivid-cyan-blue-background-color{background-color: var(--wp--preset--color--vivid-cyan-blue) !important;}.has-vivid-purple-background-color{background-color: var(--wp--preset--color--vivid-purple) !important;}.has-ast-global-color-0-background-color{background-color: var(--wp--preset--color--ast-global-color-0) !important;}.has-ast-global-color-1-background-color{background-color: var(--wp--preset--color--ast-global-color-1) !important;}.has-ast-global-color-2-background-color{background-color: var(--wp--preset--color--ast-global-color-2) !important;}.has-ast-global-color-3-background-color{background-color: var(--wp--preset--color--ast-global-color-3) !important;}.has-ast-global-color-4-background-color{background-color: var(--wp--preset--color--ast-global-color-4) !important;}.has-ast-global-color-5-background-color{background-color: var(--wp--preset--color--ast-global-color-5) !important;}.has-ast-global-color-6-background-color{background-color: var(--wp--preset--color--ast-global-color-6) !important;}.has-ast-global-color-7-background-color{background-color: var(--wp--preset--color--ast-global-color-7) !important;}.has-ast-global-color-8-background-color{background-color: var(--wp--preset--color--ast-global-color-8) !important;}.has-black-border-color{border-color: var(--wp--preset--color--black) !important;}.has-cyan-bluish-gray-border-color{border-color: var(--wp--preset--color--cyan-bluish-gray) !important;}.has-white-border-color{border-color: var(--wp--preset--color--white) !important;}.has-pale-pink-border-color{border-color: var(--wp--preset--color--pale-pink) !important;}.has-vivid-red-border-color{border-color: var(--wp--preset--color--vivid-red) !important;}.has-luminous-vivid-orange-border-color{border-color: var(--wp--preset--color--luminous-vivid-orange) !important;}.has-luminous-vivid-amber-border-color{border-color: var(--wp--preset--color--luminous-vivid-amber) !important;}.has-light-green-cyan-border-color{border-color: var(--wp--preset--color--light-green-cyan) !important;}.has-vivid-green-cyan-border-color{border-color: var(--wp--preset--color--vivid-green-cyan) !important;}.has-pale-cyan-blue-border-color{border-color: var(--wp--preset--color--pale-cyan-blue) !important;}.has-vivid-cyan-blue-border-color{border-color: var(--wp--preset--color--vivid-cyan-blue) !important;}.has-vivid-purple-border-color{border-color: var(--wp--preset--color--vivid-purple) !important;}.has-ast-global-color-0-border-color{border-color: var(--wp--preset--color--ast-global-color-0) !important;}.has-ast-global-color-1-border-color{border-color: var(--wp--preset--color--ast-global-color-1) !important;}.has-ast-global-color-2-border-color{border-color: var(--wp--preset--color--ast-global-color-2) !important;}.has-ast-global-color-3-border-color{border-color: var(--wp--preset--color--ast-global-color-3) !important;}.has-ast-global-color-4-border-color{border-color: var(--wp--preset--color--ast-global-color-4) !important;}.has-ast-global-color-5-border-color{border-color: var(--wp--preset--color--ast-global-color-5) !important;}.has-ast-global-color-6-border-color{border-color: var(--wp--preset--color--ast-global-color-6) !important;}.has-ast-global-color-7-border-color{border-color: var(--wp--preset--color--ast-global-color-7) !important;}.has-ast-global-color-8-border-color{border-color: var(--wp--preset--color--ast-global-color-8) !important;}.has-vivid-cyan-blue-to-vivid-purple-gradient-background{background: var(--wp--preset--gradient--vivid-cyan-blue-to-vivid-purple) !important;}.has-light-green-cyan-to-vivid-green-cyan-gradient-background{background: var(--wp--preset--gradient--light-green-cyan-to-vivid-green-cyan) !important;}.has-luminous-vivid-amber-to-luminous-vivid-orange-gradient-background{background: var(--wp--preset--gradient--luminous-vivid-amber-to-luminous-vivid-orange) !important;}.has-luminous-vivid-orange-to-vivid-red-gradient-background{background: var(--wp--preset--gradient--luminous-vivid-orange-to-vivid-red) !important;}.has-very-light-gray-to-cyan-bluish-gray-gradient-background{background: var(--wp--preset--gradient--very-light-gray-to-cyan-bluish-gray) !important;}.has-cool-to-warm-spectrum-gradient-background{background: var(--wp--preset--gradient--cool-to-warm-spectrum) !important;}.has-blush-light-purple-gradient-background{background: var(--wp--preset--gradient--blush-light-purple) !important;}.has-blush-bordeaux-gradient-background{background: var(--wp--preset--gradient--blush-bordeaux) !important;}.has-luminous-dusk-gradient-background{background: var(--wp--preset--gradient--luminous-dusk) !important;}.has-pale-ocean-gradient-background{background: var(--wp--preset--gradient--pale-ocean) !important;}.has-electric-grass-gradient-background{background: var(--wp--preset--gradient--electric-grass) !important;}.has-midnight-gradient-background{background: var(--wp--preset--gradient--midnight) !important;}.has-small-font-size{font-size: var(--wp--preset--font-size--small) !important;}.has-medium-font-size{font-size: var(--wp--preset--font-size--medium) !important;}.has-large-font-size{font-size: var(--wp--preset--font-size--large) !important;}.has-x-large-font-size{font-size: var(--wp--preset--font-size--x-large) !important;}
:root :where(.wp-block-pullquote){font-size: 1.5em;line-height: 1.6;}
</style>
<link rel='stylesheet' id='cookie-notice-front-css' data-pmdelayedstyle="https://clinicahumanite.com.br/wp-content/plugins/cookie-notice/css/front.min.css?ver=2.4.18" media='all' />
<link rel='stylesheet' id='eae-css-css' data-pmdelayedstyle="https://clinicahumanite.com.br/wp-content/plugins/addon-elements-for-elementor-page-builder/assets/css/eae.min.css?ver=1.13.6" media='all' />
<link rel='stylesheet' id='eae-peel-css-css' data-pmdelayedstyle="https://clinicahumanite.com.br/wp-content/plugins/addon-elements-for-elementor-page-builder/assets/lib/peel/peel.css?ver=1.13.6" media='all' />
<link rel='stylesheet' id='font-awesome-4-shim-css' data-pmdelayedstyle="https://clinicahumanite.com.br/wp-content/plugins/elementor/assets/lib/font-awesome/css/v4-shims.min.css?ver=1.0" media='all' />
<link rel='stylesheet' id='font-awesome-5-all-css' data-pmdelayedstyle="https://clinicahumanite.com.br/wp-content/plugins/elementor/assets/lib/font-awesome/css/all.min.css?ver=1.0" media='all' />
<link rel='stylesheet' id='vegas-css-css' data-pmdelayedstyle="https://clinicahumanite.com.br/wp-content/plugins/addon-elements-for-elementor-page-builder/assets/lib/vegas/vegas.min.css?ver=2.4.0" media='all' />
<link rel='stylesheet' id='hfe-style-css' data-pmdelayedstyle="https://clinicahumanite.com.br/wp-content/plugins/header-footer-elementor/assets/css/header-footer-elementor.css?ver=1.6.37" media='all' />
<link rel='stylesheet' id='elementor-icons-css' data-pmdelayedstyle="https://clinicahumanite.com.br/wp-content/plugins/elementor/assets/lib/eicons/css/elementor-icons.min.css?ver=5.31.0" media='all' />
<link rel='stylesheet' id='elementor-frontend-css' data-pmdelayedstyle="https://clinicahumanite.com.br/wp-content/plugins/elementor/assets/css/frontend.min.css?ver=3.24.7" media='all' />
<link rel='stylesheet' id='swiper-css' data-pmdelayedstyle="https://clinicahumanite.com.br/wp-content/plugins/elementor/assets/lib/swiper/v8/css/swiper.min.css?ver=8.4.5" media='all' />
<link rel='stylesheet' id='e-swiper-css' data-pmdelayedstyle="https://clinicahumanite.com.br/wp-content/plugins/elementor/assets/css/conditionals/e-swiper.min.css?ver=3.24.7" media='all' />
<link rel='stylesheet' id='elementor-post-24888-css' href='https://clinicahumanite.com.br/wp-content/uploads/elementor/css/post-24888.css?ver=1676985520' media='all' />
<link rel='stylesheet' id='she-header-style-css' data-pmdelayedstyle="https://clinicahumanite.com.br/wp-content/plugins/sticky-header-effects-for-elementor/assets/css/she-header-style.css?ver=1.6.11" media='all' />
<link rel='stylesheet' id='widget-image-css' data-pmdelayedstyle="https://clinicahumanite.com.br/wp-content/plugins/elementor/assets/css/widget-image.min.css?ver=3.24.7" media='all' />
<link rel='stylesheet' id='widget-spacer-css' data-pmdelayedstyle="https://clinicahumanite.com.br/wp-content/plugins/elementor/assets/css/widget-spacer.min.css?ver=3.24.7" media='all' />
<link rel='stylesheet' id='widget-heading-css' data-pmdelayedstyle="https://clinicahumanite.com.br/wp-content/plugins/elementor/assets/css/widget-heading.min.css?ver=3.24.7" media='all' />
<link rel='stylesheet' id='widget-image-box-css' data-pmdelayedstyle="https://clinicahumanite.com.br/wp-content/plugins/elementor/assets/css/widget-image-box.min.css?ver=3.24.7" media='all' />
<link rel='stylesheet' id='e-animation-grow-css' data-pmdelayedstyle="https://clinicahumanite.com.br/wp-content/plugins/elementor/assets/lib/animations/styles/e-animation-grow.min.css?ver=3.24.7" media='all' />
<link rel='stylesheet' id='e-shapes-css' data-pmdelayedstyle="https://clinicahumanite.com.br/wp-content/plugins/elementor/assets/css/conditionals/shapes.min.css?ver=3.24.7" media='all' />
<link rel='stylesheet' id='widget-text-editor-css' data-pmdelayedstyle="https://clinicahumanite.com.br/wp-content/plugins/elementor/assets/css/widget-text-editor.min.css?ver=3.24.7" media='all' />
<link rel='stylesheet' id='e-animation-fadeInUp-css' data-pmdelayedstyle="https://clinicahumanite.com.br/wp-content/plugins/elementor/assets/lib/animations/styles/fadeInUp.min.css?ver=3.24.7" media='all' />
<link rel='stylesheet' id='widget-image-carousel-css' data-pmdelayedstyle="https://clinicahumanite.com.br/wp-content/plugins/elementor/assets/css/widget-image-carousel.min.css?ver=3.24.7" media='all' />
<link rel='stylesheet' id='e-animation-slideInUp-css' data-pmdelayedstyle="https://clinicahumanite.com.br/wp-content/plugins/elementor/assets/lib/animations/styles/slideInUp.min.css?ver=3.24.7" media='all' />
<link rel='stylesheet' id='widget-star-rating-css' data-pmdelayedstyle="https://clinicahumanite.com.br/wp-content/plugins/elementor/assets/css/widget-star-rating.min.css?ver=3.24.7" media='all' />
<link rel='stylesheet' id='widget-testimonial-css' data-pmdelayedstyle="https://clinicahumanite.com.br/wp-content/plugins/elementor/assets/css/widget-testimonial.min.css?ver=3.24.7" media='all' />
<link rel='stylesheet' id='widget-accordion-css' data-pmdelayedstyle="https://clinicahumanite.com.br/wp-content/plugins/elementor/assets/css/widget-accordion.min.css?ver=3.24.7" media='all' />
<link rel='stylesheet' id='widget-divider-css' data-pmdelayedstyle="https://clinicahumanite.com.br/wp-content/plugins/elementor/assets/css/widget-divider.min.css?ver=3.24.7" media='all' />
<link rel='stylesheet' id='widget-google_maps-css' data-pmdelayedstyle="https://clinicahumanite.com.br/wp-content/plugins/elementor/assets/css/widget-google_maps.min.css?ver=3.24.7" media='all' />
<link rel='stylesheet' id='widget-icon-list-css' data-pmdelayedstyle="https://clinicahumanite.com.br/wp-content/plugins/elementor/assets/css/widget-icon-list.min.css?ver=3.24.7" media='all' />
<link rel='stylesheet' id='elementor-post-26936-css' href='https://clinicahumanite.com.br/wp-content/uploads/elementor/css/post-26936.css?ver=1731512854' media='all' />
<link rel='stylesheet' id='wpforms-classic-base-css' data-pmdelayedstyle="https://clinicahumanite.com.br/wp-content/plugins/wpforms-lite/assets/css/frontend/classic/wpforms-base.min.css?ver=1.9.2.3" media='all' />
<link rel='stylesheet' id='elementor-icons-ekiticons-css' data-pmdelayedstyle="https://clinicahumanite.com.br/wp-content/plugins/elementskit-lite/modules/elementskit-icon-pack/assets/css/ekiticons.css?ver=3.2.4" media='all' />
<link rel='stylesheet' id='joinchat-css' data-pmdelayedstyle="https://clinicahumanite.com.br/wp-content/plugins/creame-whatsapp-me/public/css/joinchat-btn.min.css?ver=5.1.8" media='all' />
<link rel='stylesheet' id='ekit-widget-styles-css' data-pmdelayedstyle="https://clinicahumanite.com.br/wp-content/plugins/elementskit-lite/widgets/init/assets/css/widget-styles.css?ver=3.2.4" media='all' />
<link rel='stylesheet' id='ekit-responsive-css' data-pmdelayedstyle="https://clinicahumanite.com.br/wp-content/plugins/elementskit-lite/widgets/init/assets/css/responsive.css?ver=3.2.4" media='all' />
<style id='rocket-lazyload-inline-css'>
.rll-youtube-player{position:relative;padding-bottom:56.23%;height:0;overflow:hidden;max-width:100%;}.rll-youtube-player:focus-within{outline: 2px solid currentColor;outline-offset: 5px;}.rll-youtube-player iframe{position:absolute;top:0;left:0;width:100%;height:100%;z-index:100;background:0 0}.rll-youtube-player img{bottom:0;display:block;left:0;margin:auto;max-width:100%;width:100%;position:absolute;right:0;top:0;border:none;height:auto;-webkit-transition:.4s all;-moz-transition:.4s all;transition:.4s all}.rll-youtube-player img:hover{-webkit-filter:brightness(75%)}.rll-youtube-player .play{height:100%;width:100%;left:0;top:0;position:absolute;background:url(https://clinicahumanite.com.br/wp-content/plugins/wp-rocket/assets/img/youtube.png) no-repeat center;background-color: transparent !important;cursor:pointer;border:none;}
</style>
<link rel='stylesheet' id='google-fonts-1-css' href='https://fonts.googleapis.com/css?family=Roboto%3A100%2C100italic%2C200%2C200italic%2C300%2C300italic%2C400%2C400italic%2C500%2C500italic%2C600%2C600italic%2C700%2C700italic%2C800%2C800italic%2C900%2C900italic%7CRoboto+Slab%3A100%2C100italic%2C200%2C200italic%2C300%2C300italic%2C400%2C400italic%2C500%2C500italic%2C600%2C600italic%2C700%2C700italic%2C800%2C800italic%2C900%2C900italic%7CPoppins%3A100%2C100italic%2C200%2C200italic%2C300%2C300italic%2C400%2C400italic%2C500%2C500italic%2C600%2C600italic%2C700%2C700italic%2C800%2C800italic%2C900%2C900italic%7CLato%3A100%2C100italic%2C200%2C200italic%2C300%2C300italic%2C400%2C400italic%2C500%2C500italic%2C600%2C600italic%2C700%2C700italic%2C800%2C800italic%2C900%2C900italic&ver=6.7.1&display=swap' media='all' />
<link rel='stylesheet' id='elementor-icons-shared-0-css' data-pmdelayedstyle="https://clinicahumanite.com.br/wp-content/plugins/elementor/assets/lib/font-awesome/css/fontawesome.min.css?ver=5.15.3" media='all' />
<link rel='stylesheet' id='elementor-icons-fa-solid-css' data-pmdelayedstyle="https://clinicahumanite.com.br/wp-content/plugins/elementor/assets/lib/font-awesome/css/solid.min.css?ver=5.15.3" media='all' />
<link rel='stylesheet' id='elementor-icons-fa-regular-css' data-pmdelayedstyle="https://clinicahumanite.com.br/wp-content/plugins/elementor/assets/lib/font-awesome/css/regular.min.css?ver=5.15.3" media='all' />
<link rel='stylesheet' id='elementor-icons-fa-brands-css' data-pmdelayedstyle="https://clinicahumanite.com.br/wp-content/plugins/elementor/assets/lib/font-awesome/css/brands.min.css?ver=5.15.3" media='all' />
<link rel="preconnect" href="https://fonts.gstatic.com/" crossorigin><!--[if IE]>
<script src="https://clinicahumanite.com.br/wp-content/themes/astra/assets/js/minified/flexibility.min.js?ver=4.0.2" id="astra-flexibility-js"></script>
<script id="astra-flexibility-js-after">
flexibility(document.documentElement);</script>
<![endif]-->
<script type="rocketlazyloadscript" id="cookie-notice-front-js-before">
var cnArgs = {"ajaxUrl":"https:\/\/clinicahumanite.com.br\/wp-admin\/admin-ajax.php","nonce":"66f682cce3","hideEffect":"slide","position":"bottom","onScroll":false,"onScrollOffset":100,"onClick":false,"cookieName":"cookie_notice_accepted","cookieTime":2592000,"cookieTimeRejected":2592000,"globalCookie":false,"redirection":false,"cache":true,"revokeCookies":false,"revokeCookiesOpt":"automatic"};
</script>
<script type="rocketlazyloadscript" src="https://clinicahumanite.com.br/wp-content/plugins/cookie-notice/js/front.min.js?ver=2.4.18" id="cookie-notice-front-js" defer></script>
<script type="rocketlazyloadscript" src="https://clinicahumanite.com.br/wp-content/plugins/addon-elements-for-elementor-page-builder/assets/js/iconHelper.js?ver=1.0" id="eae-iconHelper-js" defer></script>
<script type="rocketlazyloadscript" src="https://clinicahumanite.com.br/wp-includes/js/jquery/jquery.min.js?ver=3.7.1" id="jquery-core-js" defer></script>
<script type="rocketlazyloadscript" src="https://clinicahumanite.com.br/wp-includes/js/jquery/jquery-migrate.min.js?ver=3.4.1" id="jquery-migrate-js" defer></script>
<script type="rocketlazyloadscript" src="https://clinicahumanite.com.br/wp-content/plugins/sticky-header-effects-for-elementor/assets/js/she-header.js?ver=1.6.11" id="she-header-js" defer></script>
<link rel="https://api.w.org/" href="https://clinicahumanite.com.br/wp-json/" /><link rel="alternate" title="JSON" type="application/json" href="https://clinicahumanite.com.br/wp-json/wp/v2/pages/26936" /><link rel="EditURI" type="application/rsd+xml" title="RSD" href="https://clinicahumanite.com.br/xmlrpc.php?rsd" />
<meta name="generator" content="WordPress 6.7.1" />
<link rel='shortlink' href='https://clinicahumanite.com.br/' />
<link rel="alternate" title="oEmbed (JSON)" type="application/json+oembed" href="https://clinicahumanite.com.br/wp-json/oembed/1.0/embed?url=https%3A%2F%2Fclinicahumanite.com.br%2F" />
<link rel="alternate" title="oEmbed (XML)" type="text/xml+oembed" href="https://clinicahumanite.com.br/wp-json/oembed/1.0/embed?url=https%3A%2F%2Fclinicahumanite.com.br%2F&#038;format=xml" />
<!-- Google Tag Manager -->
<script type="rocketlazyloadscript">(function(w,d,s,l,i){w[l]=w[l]||[];w[l].push({'gtm.start':
new Date().getTime(),event:'gtm.js'});var f=d.getElementsByTagName(s)[0],
j=d.createElement(s),dl=l!='dataLayer'?'&l='+l:'';j.async=true;j.src=
'https://www.googletagmanager.com/gtm.js?id='+i+dl;f.parentNode.insertBefore(j,f);
})(window,document,'script','dataLayer','GTM-5HGKZGMX');</script>
<!-- End Google Tag Manager -->
<meta property="og:image" content="https://clinicahumanite.com.br/wp-content/uploads/2023/01/logo3.png">

<meta name="generator" content="Elementor 3.24.7; features: additional_custom_breakpoints; settings: css_print_method-external, google_font-enabled, font_display-swap">
			<style>
				.e-con.e-parent:nth-of-type(n+4):not(.e-lazyloaded):not(.e-no-lazyload),
				.e-con.e-parent:nth-of-type(n+4):not(.e-lazyloaded):not(.e-no-lazyload) * {
					background-image: none !important;
				}
				@media screen and (max-height: 1024px) {
					.e-con.e-parent:nth-of-type(n+3):not(.e-lazyloaded):not(.e-no-lazyload),
					.e-con.e-parent:nth-of-type(n+3):not(.e-lazyloaded):not(.e-no-lazyload) * {
						background-image: none !important;
					}
				}
				@media screen and (max-height: 640px) {
					.e-con.e-parent:nth-of-type(n+2):not(.e-lazyloaded):not(.e-no-lazyload),
					.e-con.e-parent:nth-of-type(n+2):not(.e-lazyloaded):not(.e-no-lazyload) * {
						background-image: none !important;
					}
				}
			</style>
			<link rel="icon" href="https://clinicahumanite.com.br/wp-content/uploads/2023/01/logo-100x100.png" sizes="32x32" />
<link rel="icon" href="https://clinicahumanite.com.br/wp-content/uploads/2023/01/logo.png" sizes="192x192" />
<link rel="apple-touch-icon" href="https://clinicahumanite.com.br/wp-content/uploads/2023/01/logo.png" />
<meta name="msapplication-TileImage" content="https://clinicahumanite.com.br/wp-content/uploads/2023/01/logo.png" />
		<style id="wp-custom-css">
			body, html {
overflow-x: hidden !important;
}

/Corrigir escrollamento no Mobile/
@media (max-width: 786px){
body, html {
overflow-x: hidden!important;
}
}

.elementor-25066 .elementor-element.elementor-element-7209b3f6 .elementkit-tab-nav .elementkit-nav-link.active {
    color: #ffffff;
    background-color: transparent;
    background-image: linear-gradient(90deg, #6b85ff 0%, #4054b2 100%)!important;
    border-style: solid;
    border-width: 1px 1px 1px 1px;
    border-color: rgba(35,164,85,0);
}		</style>
		<noscript><style id="rocket-lazyload-nojs-css">.rll-youtube-player, [data-lazy-src]{display:none !important;}</style></noscript>	<meta name="viewport" content="width=device-width, initial-scale=1.0, viewport-fit=cover" /></head>
<body data-rsssl=1 class="home page-template page-template-elementor_canvas page page-id-26936 cookies-not-set ehf-template-astra ehf-stylesheet-astra ast-header-break-point ast-page-builder-template ast-no-sidebar astra-4.0.2 ast-single-post ast-replace-site-logo-transparent ast-inherit-site-logo-transparent ast-theme-transparent-header ast-hfb-header elementor-default elementor-template-canvas elementor-kit-24888 elementor-page elementor-page-26936">
	<!-- Google Tag Manager (noscript) -->
<noscript><iframe src="https://www.googletagmanager.com/ns.html?id=GTM-5HGKZGMX"
height="0" width="0" style="display:none;visibility:hidden"></iframe></noscript>
<!-- End Google Tag Manager (noscript) -->
		<div data-elementor-type="wp-post" data-elementor-id="26936" class="elementor elementor-26936">
						<section class="has_eae_slider elementor-section elementor-top-section elementor-element elementor-element-10354ab she-header-yes elementor-section-content-middle elementor-section-boxed elementor-section-height-default elementor-section-height-default" data-id="10354ab" data-element_type="section" data-settings="{&quot;background_background&quot;:&quot;classic&quot;,&quot;transparent&quot;:&quot;yes&quot;,&quot;background_show&quot;:&quot;yes&quot;,&quot;background&quot;:&quot;#EDEDEDD4&quot;,&quot;scroll_distance_mobile&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:10,&quot;sizes&quot;:[]},&quot;transparent_on&quot;:[&quot;desktop&quot;,&quot;tablet&quot;,&quot;mobile&quot;],&quot;scroll_distance&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:60,&quot;sizes&quot;:[]},&quot;scroll_distance_tablet&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]}}">
						<div class="elementor-container elementor-column-gap-wide">
					<div class="has_eae_slider elementor-column elementor-col-33 elementor-top-column elementor-element elementor-element-907ad1d" data-id="907ad1d" data-element_type="column">
			<div class="elementor-widget-wrap elementor-element-populated">
						<div class="elementor-element elementor-element-ea9cd8d elementor-widget elementor-widget-image" data-id="ea9cd8d" data-element_type="widget" data-widget_type="image.default">
				<div class="elementor-widget-container">
														<a href="https://clinicahumanite.com.br/home/">
							<img data-perfmatters-preload fetchpriority="high" decoding="async" width="1024" height="566" src="https://clinicahumanite.com.br/wp-content/uploads/2023/02/240866_1c7a7d68074543cd9268765f5e2753f0-1024x566.png" class="attachment-large size-large wp-image-27037" alt="humanite" srcset="https://clinicahumanite.com.br/wp-content/uploads/2023/02/240866_1c7a7d68074543cd9268765f5e2753f0-1024x566.png 1024w, https://clinicahumanite.com.br/wp-content/uploads/2023/02/240866_1c7a7d68074543cd9268765f5e2753f0-300x166.png 300w, https://clinicahumanite.com.br/wp-content/uploads/2023/02/240866_1c7a7d68074543cd9268765f5e2753f0-768x425.png 768w, https://clinicahumanite.com.br/wp-content/uploads/2023/02/240866_1c7a7d68074543cd9268765f5e2753f0-1536x849.png 1536w, https://clinicahumanite.com.br/wp-content/uploads/2023/02/240866_1c7a7d68074543cd9268765f5e2753f0.png 1548w" sizes="(max-width: 1024px) 100vw, 1024px" />								</a>
													</div>
				</div>
					</div>
		</div>
				<div class="has_eae_slider elementor-column elementor-col-33 elementor-top-column elementor-element elementor-element-de363d4" data-id="de363d4" data-element_type="column">
			<div class="elementor-widget-wrap elementor-element-populated">
						<div class="elementor-element elementor-element-9a1ccd5 e-transform hfe-nav-menu__align-center hfe-submenu-icon-arrow hfe-submenu-animation-none hfe-link-redirect-child hfe-nav-menu__breakpoint-tablet elementor-widget elementor-widget-navigation-menu" data-id="9a1ccd5" data-element_type="widget" data-settings="{&quot;_transform_translateX_effect_mobile&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:158,&quot;sizes&quot;:[]},&quot;_transform_translateX_effect_tablet&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:327,&quot;sizes&quot;:[]},&quot;padding_horizontal_menu_item&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:15,&quot;sizes&quot;:[]},&quot;padding_horizontal_menu_item_tablet&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;padding_horizontal_menu_item_mobile&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;padding_vertical_menu_item&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:15,&quot;sizes&quot;:[]},&quot;padding_vertical_menu_item_tablet&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;padding_vertical_menu_item_mobile&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;menu_space_between&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;menu_space_between_tablet&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;menu_space_between_mobile&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;menu_row_space&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;menu_row_space_tablet&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;menu_row_space_mobile&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;dropdown_border_radius&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;top&quot;:&quot;&quot;,&quot;right&quot;:&quot;&quot;,&quot;bottom&quot;:&quot;&quot;,&quot;left&quot;:&quot;&quot;,&quot;isLinked&quot;:true},&quot;dropdown_border_radius_tablet&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;top&quot;:&quot;&quot;,&quot;right&quot;:&quot;&quot;,&quot;bottom&quot;:&quot;&quot;,&quot;left&quot;:&quot;&quot;,&quot;isLinked&quot;:true},&quot;dropdown_border_radius_mobile&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;top&quot;:&quot;&quot;,&quot;right&quot;:&quot;&quot;,&quot;bottom&quot;:&quot;&quot;,&quot;left&quot;:&quot;&quot;,&quot;isLinked&quot;:true},&quot;width_dropdown_item&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;220&quot;,&quot;sizes&quot;:[]},&quot;width_dropdown_item_tablet&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;width_dropdown_item_mobile&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;padding_horizontal_dropdown_item&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;padding_horizontal_dropdown_item_tablet&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;padding_horizontal_dropdown_item_mobile&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;padding_vertical_dropdown_item&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:15,&quot;sizes&quot;:[]},&quot;padding_vertical_dropdown_item_tablet&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;padding_vertical_dropdown_item_mobile&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;distance_from_menu&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;distance_from_menu_tablet&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;distance_from_menu_mobile&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;toggle_size&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;toggle_size_tablet&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;toggle_size_mobile&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;toggle_border_width&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;toggle_border_width_tablet&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;toggle_border_width_mobile&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;toggle_border_radius&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;toggle_border_radius_tablet&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;toggle_border_radius_mobile&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;_transform_translateX_effect&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;_transform_translateY_effect&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;_transform_translateY_effect_tablet&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;_transform_translateY_effect_mobile&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]}}" data-widget_type="navigation-menu.default">
				<div class="elementor-widget-container">
						<div class="hfe-nav-menu hfe-layout-horizontal hfe-nav-menu-layout horizontal hfe-pointer__underline hfe-animation__fade" data-layout="horizontal">
				<div role="button" class="hfe-nav-menu__toggle elementor-clickable">
					<span class="screen-reader-text">Menu</span>
					<div class="hfe-nav-menu-icon">
						<i aria-hidden="true"  class="fas fa-align-justify"></i>					</div>
				</div>
				<nav class="hfe-nav-menu__layout-horizontal hfe-nav-menu__submenu-arrow" data-toggle-icon="&lt;i aria-hidden=&quot;true&quot; tabindex=&quot;0&quot; class=&quot;fas fa-align-justify&quot;&gt;&lt;/i&gt;" data-close-icon="&lt;i aria-hidden=&quot;true&quot; tabindex=&quot;0&quot; class=&quot;far fa-window-close&quot;&gt;&lt;/i&gt;" data-full-width="yes">
					<ul id="menu-1-9a1ccd5" class="hfe-nav-menu"><li id="menu-item-25314" class="menu-item menu-item-type-custom menu-item-object-custom parent hfe-creative-menu"><a href="#home" class = "hfe-menu-item">Home</a></li>
<li id="menu-item-25277" class="menu-item menu-item-type-custom menu-item-object-custom menu-item-has-children parent hfe-has-submenu hfe-creative-menu"><div class="hfe-has-submenu-container"><a href="#procedimentos" class = "hfe-menu-item">Procedimentos<span class='hfe-menu-toggle sub-arrow hfe-menu-child-0'><i class='fa'></i></span></a></div>
<ul class="sub-menu">
	<li id="menu-item-26019" class="menu-item menu-item-type-custom menu-item-object-custom hfe-creative-menu"><a href="#avaliacao" class = "hfe-sub-menu-item">Avaliação Neuropsicológica</a></li>
	<li id="menu-item-26022" class="menu-item menu-item-type-custom menu-item-object-custom hfe-creative-menu"><a href="#consulta" class = "hfe-sub-menu-item">Consultas Médicas</a></li>
	<li id="menu-item-26021" class="menu-item menu-item-type-custom menu-item-object-custom hfe-creative-menu"><a href="#forense" class = "hfe-sub-menu-item">Neuropsicologia Forense</a></li>
	<li id="menu-item-26020" class="menu-item menu-item-type-custom menu-item-object-custom hfe-creative-menu"><a href="#Cognitiva" class = "hfe-sub-menu-item">Reabilitação Cognitiva</a></li>
</ul>
</li>
<li id="menu-item-25276" class="menu-item menu-item-type-custom menu-item-object-custom parent hfe-creative-menu"><a href="#sobre" class = "hfe-menu-item">Quem Somos</a></li>
<li id="menu-item-25278" class="menu-item menu-item-type-custom menu-item-object-custom parent hfe-creative-menu"><a href="#contato" class = "hfe-menu-item">Contato</a></li>
</ul> 
				</nav>
			</div>
					</div>
				</div>
					</div>
		</div>
				<div class="has_eae_slider elementor-column elementor-col-33 elementor-top-column elementor-element elementor-element-b5ab39e" data-id="b5ab39e" data-element_type="column">
			<div class="elementor-widget-wrap elementor-element-populated">
						<div class="elementor-element elementor-element-f07801d elementor-mobile-align-left e-transform e-transform elementor-widget elementor-widget-button" data-id="f07801d" data-element_type="widget" data-settings="{&quot;_transform_translateX_effect_mobile&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:142,&quot;sizes&quot;:[]},&quot;_transform_translateY_effect_mobile&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:5,&quot;sizes&quot;:[]},&quot;_transform_scale_effect_mobile&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:0.6999999999999999555910790149937383830547332763671875,&quot;sizes&quot;:[]},&quot;_transform_translateX_effect&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;_transform_translateX_effect_tablet&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;_transform_translateY_effect&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;_transform_translateY_effect_tablet&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;_transform_scale_effect&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;_transform_scale_effect_tablet&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]}}" data-widget_type="button.default">
				<div class="elementor-widget-container">
					<div class="elementor-button-wrapper">
			<a class="elementor-button elementor-button-link elementor-size-sm" href="https://web.whatsapp.com/send?phone=+5541984020065&#038;text=Ol%C3%A1,+venho+do+site+e+gostaria+de+falar+com+atendente">
						<span class="elementor-button-content-wrapper">
									<span class="elementor-button-text">Agendar Consulta</span>
					</span>
					</a>
		</div>
				</div>
				</div>
					</div>
		</div>
					</div>
		</section>
				<section class="has_eae_slider elementor-section elementor-top-section elementor-element elementor-element-iz0pvyg elementor-section-content-top elementor-section-height-min-height elementor-section-items-top elementor-section-boxed elementor-section-height-default" data-id="iz0pvyg" data-element_type="section" id="home" data-settings="{&quot;background_background&quot;:&quot;slideshow&quot;,&quot;shape_divider_bottom&quot;:&quot;waves&quot;,&quot;background_slideshow_gallery&quot;:[{&quot;id&quot;:25187,&quot;url&quot;:&quot;https:\/\/clinicahumanite.com.br\/wp-content\/uploads\/2023\/01\/WhatsApp-Image-2023-01-19-at-17.09.35.jpeg&quot;},{&quot;id&quot;:25192,&quot;url&quot;:&quot;https:\/\/clinicahumanite.com.br\/wp-content\/uploads\/2023\/01\/WhatsApp-Image-2023-01-19-at-17.09.35-1.jpeg&quot;},{&quot;id&quot;:25191,&quot;url&quot;:&quot;https:\/\/clinicahumanite.com.br\/wp-content\/uploads\/2023\/01\/WhatsApp-Image-2023-01-19-at-17.09.35-2.jpeg&quot;},{&quot;id&quot;:25188,&quot;url&quot;:&quot;https:\/\/clinicahumanite.com.br\/wp-content\/uploads\/2023\/01\/WhatsApp-Image-2023-01-19-at-17.09.34.jpeg&quot;},{&quot;id&quot;:25189,&quot;url&quot;:&quot;https:\/\/clinicahumanite.com.br\/wp-content\/uploads\/2023\/01\/WhatsApp-Image-2023-01-19-at-17.09.36-1.jpeg&quot;}],&quot;background_slideshow_slide_duration&quot;:3000,&quot;background_slideshow_ken_burns&quot;:&quot;yes&quot;,&quot;background_slideshow_loop&quot;:&quot;yes&quot;,&quot;background_slideshow_slide_transition&quot;:&quot;fade&quot;,&quot;background_slideshow_transition_duration&quot;:500,&quot;background_slideshow_ken_burns_zoom_direction&quot;:&quot;in&quot;}">
							<div class="elementor-background-overlay"></div>
						<div class="elementor-shape elementor-shape-bottom" data-negative="false">
			<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 1000 100" preserveAspectRatio="none">
	<path class="elementor-shape-fill" d="M421.9,6.5c22.6-2.5,51.5,0.4,75.5,5.3c23.6,4.9,70.9,23.5,100.5,35.7c75.8,32.2,133.7,44.5,192.6,49.7
	c23.6,2.1,48.7,3.5,103.4-2.5c54.7-6,106.2-25.6,106.2-25.6V0H0v30.3c0,0,72,32.6,158.4,30.5c39.2-0.7,92.8-6.7,134-22.4
	c21.2-8.1,52.2-18.2,79.7-24.2C399.3,7.9,411.6,7.5,421.9,6.5z"/>
</svg>		</div>
					<div class="elementor-container elementor-column-gap-no">
					<div class="has_eae_slider elementor-column elementor-col-100 elementor-top-column elementor-element elementor-element-a8c8ff0" data-id="a8c8ff0" data-element_type="column">
			<div class="elementor-widget-wrap elementor-element-populated">
						<div class="elementor-element elementor-element-51c28a6 elementor-widget elementor-widget-spacer" data-id="51c28a6" data-element_type="widget" data-widget_type="spacer.default">
				<div class="elementor-widget-container">
					<div class="elementor-spacer">
			<div class="elementor-spacer-inner"></div>
		</div>
				</div>
				</div>
				<div class="elementor-element elementor-element-071603d elementor-widget elementor-widget-heading" data-id="071603d" data-element_type="widget" data-widget_type="heading.default">
				<div class="elementor-widget-container">
			<h2 class="elementor-heading-title elementor-size-default">Clinica de Neuropsicologia<br> em Curitiba</h2>		</div>
				</div>
				<div class="elementor-element elementor-element-75de0c89 elementor-widget elementor-widget-image-box" data-id="75de0c89" data-element_type="widget" data-widget_type="image-box.default">
				<div class="elementor-widget-container">
			<div class="elementor-image-box-wrapper"><div class="elementor-image-box-content"><p class="elementor-image-box-description">Especialistas em diagnósticos de saúde mental<br>Receba seu laudo completo <br> Experts em Autismo e TDAH</p></div></div>		</div>
				</div>
				<div class="elementor-element elementor-element-1213f093 elementor-align-center elementor-mobile-align-center elementor-widget elementor-widget-button" data-id="1213f093" data-element_type="widget" data-widget_type="button.default">
				<div class="elementor-widget-container">
					<div class="elementor-button-wrapper">
			<a class="elementor-button elementor-button-link elementor-size-lg elementor-animation-grow" href="https://web.whatsapp.com/send?phone=+5541984020065&#038;text=Ol%C3%A1,+venho+do+site+e+gostaria+de+falar+com+atendente" target="_blank">
						<span class="elementor-button-content-wrapper">
									<span class="elementor-button-text">Entre em Contato</span>
					</span>
					</a>
		</div>
				</div>
				</div>
					</div>
		</div>
					</div>
		</section>
				<section class="has_eae_slider elementor-section elementor-top-section elementor-element elementor-element-6f235b2 elementor-section-boxed elementor-section-height-default elementor-section-height-default" data-id="6f235b2" data-element_type="section" data-settings="{&quot;background_background&quot;:&quot;classic&quot;}">
						<div class="elementor-container elementor-column-gap-default">
					<div class="has_eae_slider elementor-column elementor-col-100 elementor-top-column elementor-element elementor-element-42cab80" data-id="42cab80" data-element_type="column">
			<div class="elementor-widget-wrap elementor-element-populated">
						<div class="elementor-element elementor-element-4bb9e591 elementor-widget elementor-widget-elementskit-heading" data-id="4bb9e591" data-element_type="widget" data-settings="{&quot;_animation&quot;:&quot;none&quot;}" data-widget_type="elementskit-heading.default">
				<div class="elementor-widget-container">
			<div class="ekit-wid-con" ><div class="ekit-heading elementskit-section-title-wraper text_center   ekit_heading_tablet-   ekit_heading_mobile-"><h2 class="ekit-heading--title elementskit-section-title ">Como funcionam as sessões</h2><div class="ekit_heading_separetor_wraper ekit_heading_elementskit-border-divider"><div class="elementskit-border-divider"></div></div></div></div>		</div>
				</div>
					</div>
		</div>
					</div>
		</section>
				<section class="has_eae_slider elementor-section elementor-top-section elementor-element elementor-element-r3tfzoj elementor-section-content-middle elementor-section-boxed elementor-section-height-default elementor-section-height-default" data-id="r3tfzoj" data-element_type="section" id="avaliacao" data-settings="{&quot;background_background&quot;:&quot;classic&quot;,&quot;animation&quot;:&quot;none&quot;}">
						<div class="elementor-container elementor-column-gap-no">
					<div class="has_eae_slider elementor-column elementor-col-100 elementor-top-column elementor-element elementor-element-258231d elementor-invisible" data-id="258231d" data-element_type="column" data-settings="{&quot;background_background&quot;:&quot;classic&quot;,&quot;animation&quot;:&quot;fadeInUp&quot;}">
			<div class="elementor-widget-wrap elementor-element-populated">
						<section class="has_eae_slider elementor-section elementor-inner-section elementor-element elementor-element-afeeed8 elementor-section-boxed elementor-section-height-default elementor-section-height-default" data-id="afeeed8" data-element_type="section" data-settings="{&quot;background_background&quot;:&quot;classic&quot;}">
						<div class="elementor-container elementor-column-gap-default">
					<div class="has_eae_slider elementor-column elementor-col-50 elementor-inner-column elementor-element elementor-element-5b2b9c5" data-id="5b2b9c5" data-element_type="column" data-settings="{&quot;background_background&quot;:&quot;classic&quot;}">
			<div class="elementor-widget-wrap elementor-element-populated">
						<div class="elementor-element elementor-element-ebc1e08 elementor-view-stacked elementor-shape-circle elementor-widget elementor-widget-icon" data-id="ebc1e08" data-element_type="widget" data-widget_type="icon.default">
				<div class="elementor-widget-container">
					<div class="elementor-icon-wrapper">
			<div class="elementor-icon">
			<i aria-hidden="true" class="fas fa-clipboard-list"></i>			</div>
		</div>
				</div>
				</div>
					</div>
		</div>
				<div class="has_eae_slider elementor-column elementor-col-50 elementor-inner-column elementor-element elementor-element-b7da757" data-id="b7da757" data-element_type="column">
			<div class="elementor-widget-wrap elementor-element-populated">
						<div class="elementor-element elementor-element-1401102 elementor-widget elementor-widget-heading" data-id="1401102" data-element_type="widget" data-widget_type="heading.default">
				<div class="elementor-widget-container">
			<h2 class="elementor-heading-title elementor-size-default">Avaliação Neuropsicológica</h2>		</div>
				</div>
					</div>
		</div>
					</div>
		</section>
				<div class="elementor-element elementor-element-4f6265e elementor-widget elementor-widget-text-editor" data-id="4f6265e" data-element_type="widget" data-widget_type="text-editor.default">
				<div class="elementor-widget-container">
							<h4><span style="vertical-align: inherit;">É um exame clínico que mede e descreve o perfil cognitivo, emocional e comportamental do indivíduo. É realizado através de entrevistas, testes, escalas, questionários e observações clínicas. Tem como objetivo avaliar as facilidades e dificuldades do paciente, além de muitas vezes, diagnosticar muitos tipos de Transtornos Mentais.<br /></span><br />A avaliação pode ser realizada em crianças, a partir dos 2 anos de idade, adolescentes, adultos e idosos. Temos os melhores os instrumentos de avaliação disponíveis no mercado nacional e internacional. Por isso, criamos um protocolo completo, o que é um grande diferencial e resulta em melhor qualidade na avaliação, deixando os pacientes mais seguros quanto aos resultados.</h4><div> </div><h4><span style="vertical-align: inherit;">A avaliação é composta por seis sessões ao todo:</span></h4><h4><span style="vertical-align: inherit;">&#8211; A primeira é de anamnese, em que será colhido todo o histórico do paciente. É recomendável que o paciente venha acompanhado de alguém que o conheça bem.</span></h4><h4><span style="vertical-align: inherit;">&#8211; Com base na anamnese são escolhidos os testes a serem aplicados, ao todo são quatro sessões de testagem;</span><br /><span style="vertical-align: inherit;">&#8211; Por fim, na sessão de devolutiva, com a entrega do laudo, serão explicados os resultados, quais as consequências, como tratar, fazer encaminhamentos, etc.</span></h4>						</div>
				</div>
					</div>
		</div>
					</div>
		</section>
				<section class="has_eae_slider elementor-section elementor-top-section elementor-element elementor-element-c58db89 elementor-section-content-middle elementor-section-boxed elementor-section-height-default elementor-section-height-default" data-id="c58db89" data-element_type="section" id="Cognitiva" data-settings="{&quot;background_background&quot;:&quot;classic&quot;,&quot;animation&quot;:&quot;none&quot;}">
						<div class="elementor-container elementor-column-gap-no">
					<div class="has_eae_slider elementor-column elementor-col-100 elementor-top-column elementor-element elementor-element-acad464 elementor-invisible" data-id="acad464" data-element_type="column" data-settings="{&quot;background_background&quot;:&quot;classic&quot;,&quot;animation&quot;:&quot;fadeInUp&quot;}">
			<div class="elementor-widget-wrap elementor-element-populated">
						<section class="has_eae_slider elementor-section elementor-inner-section elementor-element elementor-element-c47eb15 elementor-section-boxed elementor-section-height-default elementor-section-height-default" data-id="c47eb15" data-element_type="section" data-settings="{&quot;background_background&quot;:&quot;classic&quot;}">
						<div class="elementor-container elementor-column-gap-default">
					<div class="has_eae_slider elementor-column elementor-col-50 elementor-inner-column elementor-element elementor-element-d766f37" data-id="d766f37" data-element_type="column" data-settings="{&quot;background_background&quot;:&quot;classic&quot;}">
			<div class="elementor-widget-wrap elementor-element-populated">
						<div class="elementor-element elementor-element-ee36f9f elementor-view-stacked elementor-shape-circle elementor-widget elementor-widget-icon" data-id="ee36f9f" data-element_type="widget" data-widget_type="icon.default">
				<div class="elementor-widget-container">
					<div class="elementor-icon-wrapper">
			<div class="elementor-icon">
			<i aria-hidden="true" class="fas fa-brain"></i>			</div>
		</div>
				</div>
				</div>
					</div>
		</div>
				<div class="has_eae_slider elementor-column elementor-col-50 elementor-inner-column elementor-element elementor-element-50bb8ed" data-id="50bb8ed" data-element_type="column">
			<div class="elementor-widget-wrap elementor-element-populated">
						<div class="elementor-element elementor-element-59b1edc elementor-widget elementor-widget-heading" data-id="59b1edc" data-element_type="widget" data-widget_type="heading.default">
				<div class="elementor-widget-container">
			<h2 class="elementor-heading-title elementor-size-default">Reabilitação Cognitiva</h2>		</div>
				</div>
					</div>
		</div>
					</div>
		</section>
				<div class="elementor-element elementor-element-74a264f elementor-widget elementor-widget-text-editor" data-id="74a264f" data-element_type="widget" data-widget_type="text-editor.default">
				<div class="elementor-widget-container">
							<h4><span style="vertical-align: inherit;">Consiste em um conjunto de técnicas e práticas que melhoram as alterações cognitivas, emocionais e comportamentais encontradas, e auxiliam na melhora dos sintomas patológicos e disfuncionais. Na reabilitação, temos como bases teórico e práticas, a Neuropsicologia, a Neurociências e técnicas terapêuticas.<br /><br /></span></h4><h4><span style="vertical-align: inherit;">Realizamos um protocolo de reabilitação individualizado e semestral, que é entregue ao paciente no início da reabilitação. </span>No protocolo fazemos uma descrição de todas as funções a serem trabalhadas, suas especificidades e apresentamos cronograma.<br /><br /></h4><h4><span style="vertical-align: inherit;">Apesar do cronograma ser semestral, caso o paciente necessite e seja constatada necessidade, pode ser prolongado.</span><br /><span style="vertical-align: inherit;">A reabilitação é feita m crianças e adolescentes, entre 6 a 18 anos de idade, com uma Psicóloga especialista em Autismo Infantil. Também oferecemos reabilitação cognitiva para adultos, a partir de 18 anos, principalmente com diagnóstico de Autismo e TDAH.<br /></span><br /><span style="vertical-align: inherit;">Também oferecemos reabilitação cognitiva em grupo, voltadas especialmente para adolescentes, a partir dos 16 anos, e adultos com Esquizofrenia e Autismo. </span>Durante a reabilitação em grupo, várias temáticas são aplicadas, tais como: inserção do autista no mercado de trabalho; comunicação e sociabilidade no Autismo; cognição e funcionalidade na Esquizofrenia, dentre outros.</h4>						</div>
				</div>
					</div>
		</div>
					</div>
		</section>
				<section class="has_eae_slider elementor-section elementor-top-section elementor-element elementor-element-501ed42 elementor-section-content-middle elementor-section-boxed elementor-section-height-default elementor-section-height-default" data-id="501ed42" data-element_type="section" id="forense" data-settings="{&quot;background_background&quot;:&quot;classic&quot;,&quot;animation&quot;:&quot;none&quot;}">
						<div class="elementor-container elementor-column-gap-no">
					<div class="has_eae_slider elementor-column elementor-col-100 elementor-top-column elementor-element elementor-element-d9436b3 elementor-invisible" data-id="d9436b3" data-element_type="column" data-settings="{&quot;background_background&quot;:&quot;classic&quot;,&quot;animation&quot;:&quot;fadeInUp&quot;}">
			<div class="elementor-widget-wrap elementor-element-populated">
						<section class="has_eae_slider elementor-section elementor-inner-section elementor-element elementor-element-08d0050 elementor-section-boxed elementor-section-height-default elementor-section-height-default" data-id="08d0050" data-element_type="section" data-settings="{&quot;background_background&quot;:&quot;classic&quot;}">
						<div class="elementor-container elementor-column-gap-default">
					<div class="has_eae_slider elementor-column elementor-col-50 elementor-inner-column elementor-element elementor-element-6d37797" data-id="6d37797" data-element_type="column" data-settings="{&quot;background_background&quot;:&quot;classic&quot;}">
			<div class="elementor-widget-wrap elementor-element-populated">
						<div class="elementor-element elementor-element-61d716b elementor-view-stacked elementor-shape-circle elementor-widget elementor-widget-icon" data-id="61d716b" data-element_type="widget" data-widget_type="icon.default">
				<div class="elementor-widget-container">
					<div class="elementor-icon-wrapper">
			<div class="elementor-icon">
			<i aria-hidden="true" class="icon icon-brain"></i>			</div>
		</div>
				</div>
				</div>
					</div>
		</div>
				<div class="has_eae_slider elementor-column elementor-col-50 elementor-inner-column elementor-element elementor-element-8e45635" data-id="8e45635" data-element_type="column">
			<div class="elementor-widget-wrap elementor-element-populated">
						<div class="elementor-element elementor-element-b350e6b elementor-widget elementor-widget-heading" data-id="b350e6b" data-element_type="widget" data-widget_type="heading.default">
				<div class="elementor-widget-container">
			<h2 class="elementor-heading-title elementor-size-default">Neuropsicologia Forense</h2>		</div>
				</div>
					</div>
		</div>
					</div>
		</section>
				<div class="elementor-element elementor-element-f2c2059 elementor-widget elementor-widget-text-editor" data-id="f2c2059" data-element_type="widget" data-widget_type="text-editor.default">
				<div class="elementor-widget-container">
							<h4><span style="vertical-align: inherit;">Assistência técnica em juízo consiste em diversas atribuições, conforme dispõe o art. 159 do Código de Processo Penal e art. 477 do Código de Processo Civil. </span><span style="vertical-align: inherit;">Realizamos:<br /></span><br /><span style="vertical-align: inherit;">1º) avaliação neuropsicológica forense para detectar o perfil cognitivo, emocional e comportamental do paciente e verificar a presença de transtornos mentais; <br /></span><br /><span style="vertical-align: inherit;">2º) Estudo do processo, formulação de quesitos, elaboração de pareceres, acompanhamento do paciente em incidentes probatórios (perícias, exame de insanidade mental, etc.) <br /></span><br /><span style="vertical-align: inherit;">3º) Atendimento especializado em exames de insanidade mental, auxiliando a defesa na demonstração de inimputabilidade de réus.<br /></span><br /><span style="vertical-align: inherit;">4º) Atendimento especializado em meios probatórios diversos, como: depoimento sem dano, alienação parental e outros. </span><span style="vertical-align: inherit;">O protocolo de avaliação forense é composto por várias sessões de avaliação, a depender da complexidade da causa e das necessidades da parte.</span></h4>						</div>
				</div>
					</div>
		</div>
					</div>
		</section>
				<section class="has_eae_slider elementor-section elementor-top-section elementor-element elementor-element-09f4f48 elementor-section-content-middle elementor-section-boxed elementor-section-height-default elementor-section-height-default" data-id="09f4f48" data-element_type="section" id="consulta" data-settings="{&quot;background_background&quot;:&quot;classic&quot;,&quot;animation&quot;:&quot;none&quot;}">
						<div class="elementor-container elementor-column-gap-no">
					<div class="has_eae_slider elementor-column elementor-col-100 elementor-top-column elementor-element elementor-element-875e62d elementor-invisible" data-id="875e62d" data-element_type="column" data-settings="{&quot;background_background&quot;:&quot;classic&quot;,&quot;animation&quot;:&quot;fadeInUp&quot;}">
			<div class="elementor-widget-wrap elementor-element-populated">
						<section class="has_eae_slider elementor-section elementor-inner-section elementor-element elementor-element-7ba40fe elementor-section-boxed elementor-section-height-default elementor-section-height-default" data-id="7ba40fe" data-element_type="section" data-settings="{&quot;background_background&quot;:&quot;classic&quot;}">
						<div class="elementor-container elementor-column-gap-default">
					<div class="has_eae_slider elementor-column elementor-col-50 elementor-inner-column elementor-element elementor-element-639ea33" data-id="639ea33" data-element_type="column" data-settings="{&quot;background_background&quot;:&quot;classic&quot;}">
			<div class="elementor-widget-wrap elementor-element-populated">
						<div class="elementor-element elementor-element-3880ee4 elementor-view-stacked elementor-shape-circle elementor-widget elementor-widget-icon" data-id="3880ee4" data-element_type="widget" data-widget_type="icon.default">
				<div class="elementor-widget-container">
					<div class="elementor-icon-wrapper">
			<div class="elementor-icon">
			<i aria-hidden="true" class="fas fa-notes-medical"></i>			</div>
		</div>
				</div>
				</div>
					</div>
		</div>
				<div class="has_eae_slider elementor-column elementor-col-50 elementor-inner-column elementor-element elementor-element-68607c6" data-id="68607c6" data-element_type="column">
			<div class="elementor-widget-wrap elementor-element-populated">
						<div class="elementor-element elementor-element-0df934b elementor-widget elementor-widget-heading" data-id="0df934b" data-element_type="widget" data-widget_type="heading.default">
				<div class="elementor-widget-container">
			<h2 class="elementor-heading-title elementor-size-default">Consultas Médicas</h2>		</div>
				</div>
					</div>
		</div>
					</div>
		</section>
				<section class="has_eae_slider elementor-section elementor-inner-section elementor-element elementor-element-4fec20e elementor-section-boxed elementor-section-height-default elementor-section-height-default" data-id="4fec20e" data-element_type="section">
						<div class="elementor-container elementor-column-gap-default">
					<div class="has_eae_slider elementor-column elementor-col-50 elementor-inner-column elementor-element elementor-element-65a99c6" data-id="65a99c6" data-element_type="column" data-settings="{&quot;background_background&quot;:&quot;classic&quot;}">
			<div class="elementor-widget-wrap elementor-element-populated">
						<div class="elementor-element elementor-element-260cd66 elementor-widget elementor-widget-image" data-id="260cd66" data-element_type="widget" data-widget_type="image.default">
				<div class="elementor-widget-container">
													<img data-perfmatters-preload decoding="async" width="709" height="1024" src="data:image/svg+xml,%3Csvg%20xmlns='http://www.w3.org/2000/svg'%20viewBox='0%200%20709%201024'%3E%3C/svg%3E" class="attachment-large size-large wp-image-27061" alt="Médico" data-lazy-srcset="https://clinicahumanite.com.br/wp-content/uploads/2023/02/f4692abd-61b8-4e79-a290-ae13fba71685.jpg 709w, https://clinicahumanite.com.br/wp-content/uploads/2023/02/f4692abd-61b8-4e79-a290-ae13fba71685-208x300.jpg 208w" data-lazy-sizes="(max-width: 709px) 100vw, 709px" data-lazy-src="https://clinicahumanite.com.br/wp-content/uploads/2023/02/f4692abd-61b8-4e79-a290-ae13fba71685.jpg" /><noscript><img decoding="async" width="709" height="1024" src="https://clinicahumanite.com.br/wp-content/uploads/2023/02/f4692abd-61b8-4e79-a290-ae13fba71685.jpg" class="attachment-large size-large wp-image-27061" alt="Médico" srcset="https://clinicahumanite.com.br/wp-content/uploads/2023/02/f4692abd-61b8-4e79-a290-ae13fba71685.jpg 709w, https://clinicahumanite.com.br/wp-content/uploads/2023/02/f4692abd-61b8-4e79-a290-ae13fba71685-208x300.jpg 208w" sizes="(max-width: 709px) 100vw, 709px" /></noscript>													</div>
				</div>
				<div class="elementor-element elementor-element-de9c6e1 elementor-widget elementor-widget-heading" data-id="de9c6e1" data-element_type="widget" data-widget_type="heading.default">
				<div class="elementor-widget-container">
			<h2 class="elementor-heading-title elementor-size-default">Dr. Amur Ferreira Neto</h2>		</div>
				</div>
				<div class="elementor-element elementor-element-7d161b3 elementor-widget elementor-widget-heading" data-id="7d161b3" data-element_type="widget" data-widget_type="heading.default">
				<div class="elementor-widget-container">
			<h2 class="elementor-heading-title elementor-size-default"><span style="font-size: 22px">CRM 35573</span></h2>		</div>
				</div>
					</div>
		</div>
				<div class="has_eae_slider elementor-column elementor-col-50 elementor-inner-column elementor-element elementor-element-d33239b" data-id="d33239b" data-element_type="column">
			<div class="elementor-widget-wrap elementor-element-populated">
						<div class="elementor-element elementor-element-71e7ca2 elementor-widget elementor-widget-text-editor" data-id="71e7ca2" data-element_type="widget" data-widget_type="text-editor.default">
				<div class="elementor-widget-container">
							<h4><span style="vertical-align: inherit;">A clínica conta com atendimento de médicos especialistas e experientes. </span><span style="vertical-align: inherit;">Temos a especialidade de neurologia, que avalia e trata do sistema nervoso, faz diagnósticos, prescreve medicações e acompanha a evolução do quadro. É indicado para pessoas com alterações cognitivas, problemas emocionais ou doenças mentais. </span><span style="vertical-align: inherit;">Atendemos a partir de 6 anos, adolescentes, adultos e idosos.</span></h4><div> </div>						</div>
				</div>
					</div>
		</div>
					</div>
		</section>
					</div>
		</div>
					</div>
		</section>
				<section class="has_eae_slider elementor-section elementor-top-section elementor-element elementor-element-d3801dc elementor-section-content-middle elementor-section-boxed elementor-section-height-default elementor-section-height-default" data-id="d3801dc" data-element_type="section" data-settings="{&quot;background_background&quot;:&quot;classic&quot;,&quot;animation&quot;:&quot;none&quot;}">
						<div class="elementor-container elementor-column-gap-no">
					<div class="has_eae_slider elementor-column elementor-col-100 elementor-top-column elementor-element elementor-element-7365598" data-id="7365598" data-element_type="column">
			<div class="elementor-widget-wrap elementor-element-populated">
						<div class="elementor-element elementor-element-ca37c1f elementor-align-center elementor-mobile-align-center elementor-widget elementor-widget-button" data-id="ca37c1f" data-element_type="widget" data-widget_type="button.default">
				<div class="elementor-widget-container">
					<div class="elementor-button-wrapper">
			<a class="elementor-button elementor-button-link elementor-size-sm" href="https://web.whatsapp.com/send?phone=+5541984020065&#038;text=Ol%C3%A1%2C+Eu+Gostaria+de+agendar+uma+consulta">
						<span class="elementor-button-content-wrapper">
									<span class="elementor-button-text">Entre em Contato </span>
					</span>
					</a>
		</div>
				</div>
				</div>
					</div>
		</div>
					</div>
		</section>
				<section data-wts-url="" data-wts-link="yes" data-wts-new-window="" class="has_eae_slider elementor-section elementor-top-section elementor-element elementor-element-q9mzhzn ae-link-yes elementor-section-boxed elementor-section-height-default elementor-section-height-default" data-id="q9mzhzn" data-element_type="section" id="sobre" data-settings="{&quot;background_background&quot;:&quot;classic&quot;,&quot;shape_divider_top&quot;:&quot;waves&quot;,&quot;animation_mobile&quot;:&quot;none&quot;}">
					<div class="elementor-shape elementor-shape-top" data-negative="false">
			<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 1000 100" preserveAspectRatio="none">
	<path class="elementor-shape-fill" d="M421.9,6.5c22.6-2.5,51.5,0.4,75.5,5.3c23.6,4.9,70.9,23.5,100.5,35.7c75.8,32.2,133.7,44.5,192.6,49.7
	c23.6,2.1,48.7,3.5,103.4-2.5c54.7-6,106.2-25.6,106.2-25.6V0H0v30.3c0,0,72,32.6,158.4,30.5c39.2-0.7,92.8-6.7,134-22.4
	c21.2-8.1,52.2-18.2,79.7-24.2C399.3,7.9,411.6,7.5,421.9,6.5z"/>
</svg>		</div>
					<div class="elementor-container elementor-column-gap-no">
					<div class="has_eae_slider elementor-column elementor-col-100 elementor-top-column elementor-element elementor-element-730f282 elementor-invisible" data-id="730f282" data-element_type="column" data-settings="{&quot;animation&quot;:&quot;fadeInUp&quot;,&quot;animation_mobile&quot;:&quot;none&quot;}">
			<div class="elementor-widget-wrap elementor-element-populated">
						<div class="elementor-element elementor-element-789decc elementor-widget elementor-widget-elementskit-heading" data-id="789decc" data-element_type="widget" data-settings="{&quot;_animation&quot;:&quot;none&quot;}" data-widget_type="elementskit-heading.default">
				<div class="elementor-widget-container">
			<div class="ekit-wid-con" ><div class="ekit-heading elementskit-section-title-wraper text_center   ekit_heading_tablet-   ekit_heading_mobile-"><h2 class="ekit-heading--title elementskit-section-title ">Quem somos?</h2><div class="ekit_heading_separetor_wraper ekit_heading_elementskit-border-divider"><div class="elementskit-border-divider"></div></div></div></div>		</div>
				</div>
				<section class="has_eae_slider elementor-section elementor-inner-section elementor-element elementor-element-3e4e694 elementor-section-content-middle elementor-reverse-tablet elementor-reverse-mobile elementor-section-boxed elementor-section-height-default elementor-section-height-default" data-id="3e4e694" data-element_type="section" data-settings="{&quot;animation&quot;:&quot;none&quot;}">
						<div class="elementor-container elementor-column-gap-no">
					<div class="has_eae_slider elementor-column elementor-col-33 elementor-inner-column elementor-element elementor-element-d4d12d3" data-id="d4d12d3" data-element_type="column" data-settings="{&quot;background_background&quot;:&quot;classic&quot;}">
			<div class="elementor-widget-wrap elementor-element-populated">
						<div class="elementor-element elementor-element-02990d7 elementor-widget elementor-widget-heading" data-id="02990d7" data-element_type="widget" data-widget_type="heading.default">
				<div class="elementor-widget-container">
			<h1 class="elementor-heading-title elementor-size-default">Sobre a Clinica</h1>		</div>
				</div>
				<div class="elementor-element elementor-element-046212b elementor-widget elementor-widget-spacer" data-id="046212b" data-element_type="widget" data-widget_type="spacer.default">
				<div class="elementor-widget-container">
					<div class="elementor-spacer">
			<div class="elementor-spacer-inner"></div>
		</div>
				</div>
				</div>
				<div class="elementor-element elementor-element-fdaeba5 elementor-widget elementor-widget-text-editor" data-id="fdaeba5" data-element_type="widget" data-widget_type="text-editor.default">
				<div class="elementor-widget-container">
							<p>A clínica é especialista em serviços de neuropsicologia em diversos campos, especialmente nos relacionados a transtornos, tais como: Autismo, TDAH, Esquizofrenia e Demências.</p><p>Tem como pressuposto realizar um atendimento humanizado, acolhedor e, ao mesmo tempo, muito técnico e acurado.</p><p>Humanité possui serviços desenvolvidos para proporcionar um atendimento de forma personalizada, realizar o diagnóstico precoce e tratar dos sintomas disfuncionais, sempre prezando pela excelência.</p>						</div>
				</div>
				<div class="elementor-element elementor-element-f4bf655 elementor-align-left elementor-mobile-align-center elementor-widget elementor-widget-button" data-id="f4bf655" data-element_type="widget" data-widget_type="button.default">
				<div class="elementor-widget-container">
					<div class="elementor-button-wrapper">
			<a class="elementor-button elementor-button-link elementor-size-sm" href="https://web.whatsapp.com/send?phone=+5541984020065&#038;text=Ol%C3%A1%2C+Eu+Gostaria+de+agendar+uma+consulta">
						<span class="elementor-button-content-wrapper">
									<span class="elementor-button-text">Fale Conosco</span>
					</span>
					</a>
		</div>
				</div>
				</div>
					</div>
		</div>
				<div class="has_eae_slider elementor-column elementor-col-66 elementor-inner-column elementor-element elementor-element-22574b9" data-id="22574b9" data-element_type="column">
			<div class="elementor-widget-wrap elementor-element-populated">
						<div class="elementor-element elementor-element-1b359b6 e-transform elementor-widget elementor-widget-image-carousel" data-id="1b359b6" data-element_type="widget" data-settings="{&quot;slides_to_show&quot;:&quot;1&quot;,&quot;navigation&quot;:&quot;none&quot;,&quot;effect&quot;:&quot;fade&quot;,&quot;autoplay_speed&quot;:300,&quot;speed&quot;:300,&quot;autoplay&quot;:&quot;yes&quot;,&quot;pause_on_hover&quot;:&quot;yes&quot;,&quot;pause_on_interaction&quot;:&quot;yes&quot;,&quot;infinite&quot;:&quot;yes&quot;,&quot;_transform_scale_effect&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;_transform_scale_effect_tablet&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;_transform_scale_effect_mobile&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]}}" data-widget_type="image-carousel.default">
				<div class="elementor-widget-container">
					<div class="elementor-image-carousel-wrapper swiper" dir="ltr">
			<div class="elementor-image-carousel swiper-wrapper" aria-live="off">
								<div class="swiper-slide" role="group" aria-roledescription="slide" aria-label="1 de 5"><figure class="swiper-slide-inner"><img data-perfmatters-preload width="768" height="512" decoding="async" class="swiper-slide-image" src="data:image/svg+xml,%3Csvg%20xmlns='http://www.w3.org/2000/svg'%20viewBox='0%200%20768%20512'%3E%3C/svg%3E" alt="clinica,humanite,Neuropsicóloga,Neurociências,psicóloga,Psicologia,saude,curitiba,tdah,autismo,neuropsicológica infantil,neuropsicológica juvenil,neuropsicológica adulto,neuropsicologia geriatrica,Bruna de Assis Almeida,Agende aqui a sua consulta hoje mesmo" data-lazy-src="https://clinicahumanite.com.br/wp-content/uploads/2023/01/WhatsApp-Image-2023-01-19-at-17.09.35-1-768x512.jpeg" /><noscript><img width="768" height="512" decoding="async" class="swiper-slide-image" src="https://clinicahumanite.com.br/wp-content/uploads/2023/01/WhatsApp-Image-2023-01-19-at-17.09.35-1-768x512.jpeg" alt="clinica,humanite,Neuropsicóloga,Neurociências,psicóloga,Psicologia,saude,curitiba,tdah,autismo,neuropsicológica infantil,neuropsicológica juvenil,neuropsicológica adulto,neuropsicologia geriatrica,Bruna de Assis Almeida,Agende aqui a sua consulta hoje mesmo" /></noscript></figure></div><div class="swiper-slide" role="group" aria-roledescription="slide" aria-label="2 de 5"><figure class="swiper-slide-inner"><img data-perfmatters-preload width="768" height="512" decoding="async" class="swiper-slide-image" src="data:image/svg+xml,%3Csvg%20xmlns='http://www.w3.org/2000/svg'%20viewBox='0%200%20768%20512'%3E%3C/svg%3E" alt="clinica,humanite,Neuropsicóloga,Neurociências,psicóloga,Psicologia,saude,curitiba,tdah,autismo,neuropsicológica infantil,neuropsicológica juvenil,neuropsicológica adulto,neuropsicologia geriatrica,Bruna de Assis Almeida,Agende aqui a sua consulta hoje mesmo" data-lazy-src="https://clinicahumanite.com.br/wp-content/uploads/2023/01/WhatsApp-Image-2023-01-19-at-17.09.35-2-768x512.jpeg" /><noscript><img width="768" height="512" decoding="async" class="swiper-slide-image" src="https://clinicahumanite.com.br/wp-content/uploads/2023/01/WhatsApp-Image-2023-01-19-at-17.09.35-2-768x512.jpeg" alt="clinica,humanite,Neuropsicóloga,Neurociências,psicóloga,Psicologia,saude,curitiba,tdah,autismo,neuropsicológica infantil,neuropsicológica juvenil,neuropsicológica adulto,neuropsicologia geriatrica,Bruna de Assis Almeida,Agende aqui a sua consulta hoje mesmo" /></noscript></figure></div><div class="swiper-slide" role="group" aria-roledescription="slide" aria-label="3 de 5"><figure class="swiper-slide-inner"><img data-perfmatters-preload width="768" height="512" decoding="async" class="swiper-slide-image" src="data:image/svg+xml,%3Csvg%20xmlns='http://www.w3.org/2000/svg'%20viewBox='0%200%20768%20512'%3E%3C/svg%3E" alt="clinica,humanite,Neuropsicóloga,Neurociências,psicóloga,Psicologia,saude,curitiba,tdah,autismo,neuropsicológica infantil,neuropsicológica juvenil,neuropsicológica adulto,neuropsicologia geriatrica,Bruna de Assis Almeida,Agende aqui a sua consulta hoje mesmo" data-lazy-src="https://clinicahumanite.com.br/wp-content/uploads/2023/01/WhatsApp-Image-2023-01-19-at-17.09.34-768x512.jpeg" /><noscript><img width="768" height="512" decoding="async" class="swiper-slide-image" src="https://clinicahumanite.com.br/wp-content/uploads/2023/01/WhatsApp-Image-2023-01-19-at-17.09.34-768x512.jpeg" alt="clinica,humanite,Neuropsicóloga,Neurociências,psicóloga,Psicologia,saude,curitiba,tdah,autismo,neuropsicológica infantil,neuropsicológica juvenil,neuropsicológica adulto,neuropsicologia geriatrica,Bruna de Assis Almeida,Agende aqui a sua consulta hoje mesmo" /></noscript></figure></div><div class="swiper-slide" role="group" aria-roledescription="slide" aria-label="4 de 5"><figure class="swiper-slide-inner"><img width="768" height="512" decoding="async" class="swiper-slide-image" src="data:image/svg+xml,%3Csvg%20xmlns='http://www.w3.org/2000/svg'%20viewBox='0%200%20768%20512'%3E%3C/svg%3E" alt="clinica,humanite,Neuropsicóloga,Neurociências,psicóloga,Psicologia,saude,curitiba,tdah,autismo,neuropsicológica infantil,neuropsicológica juvenil,neuropsicológica adulto,neuropsicologia geriatrica,Bruna de Assis Almeida,Agende aqui a sua consulta hoje mesmo" data-lazy-src="https://clinicahumanite.com.br/wp-content/uploads/2023/01/WhatsApp-Image-2023-01-19-at-17.09.36-1-768x512.jpeg" /><noscript><img width="768" height="512" decoding="async" class="swiper-slide-image" src="https://clinicahumanite.com.br/wp-content/uploads/2023/01/WhatsApp-Image-2023-01-19-at-17.09.36-1-768x512.jpeg" alt="clinica,humanite,Neuropsicóloga,Neurociências,psicóloga,Psicologia,saude,curitiba,tdah,autismo,neuropsicológica infantil,neuropsicológica juvenil,neuropsicológica adulto,neuropsicologia geriatrica,Bruna de Assis Almeida,Agende aqui a sua consulta hoje mesmo" /></noscript></figure></div><div class="swiper-slide" role="group" aria-roledescription="slide" aria-label="5 de 5"><figure class="swiper-slide-inner"><img width="768" height="512" decoding="async" class="swiper-slide-image" src="data:image/svg+xml,%3Csvg%20xmlns='http://www.w3.org/2000/svg'%20viewBox='0%200%20768%20512'%3E%3C/svg%3E" alt="clinica,humanite,Neuropsicóloga,Neurociências,psicóloga,Psicologia,saude,curitiba,tdah,autismo,neuropsicológica infantil,neuropsicológica juvenil,neuropsicológica adulto,neuropsicologia geriatrica,Bruna de Assis Almeida,Agende aqui a sua consulta hoje mesmo" data-lazy-src="https://clinicahumanite.com.br/wp-content/uploads/2023/01/WhatsApp-Image-2023-01-19-at-17.09.35-768x512.jpeg" /><noscript><img width="768" height="512" decoding="async" class="swiper-slide-image" src="https://clinicahumanite.com.br/wp-content/uploads/2023/01/WhatsApp-Image-2023-01-19-at-17.09.35-768x512.jpeg" alt="clinica,humanite,Neuropsicóloga,Neurociências,psicóloga,Psicologia,saude,curitiba,tdah,autismo,neuropsicológica infantil,neuropsicológica juvenil,neuropsicológica adulto,neuropsicologia geriatrica,Bruna de Assis Almeida,Agende aqui a sua consulta hoje mesmo" /></noscript></figure></div>			</div>
							
									</div>
				</div>
				</div>
					</div>
		</div>
					</div>
		</section>
				<section class="has_eae_slider elementor-section elementor-inner-section elementor-element elementor-element-be5dae5 elementor-section-content-middle elementor-section-boxed elementor-section-height-default elementor-section-height-default elementor-invisible" data-id="be5dae5" data-element_type="section" data-settings="{&quot;animation&quot;:&quot;slideInUp&quot;,&quot;animation_mobile&quot;:&quot;none&quot;}">
						<div class="elementor-container elementor-column-gap-no">
					<div class="has_eae_slider elementor-column elementor-col-66 elementor-inner-column elementor-element elementor-element-956409c" data-id="956409c" data-element_type="column">
			<div class="elementor-widget-wrap elementor-element-populated">
						<div class="elementor-element elementor-element-d1ee831 elementor-widget elementor-widget-image" data-id="d1ee831" data-element_type="widget" data-widget_type="image.default">
				<div class="elementor-widget-container">
													<img decoding="async" width="1024" height="683" src="data:image/svg+xml,%3Csvg%20xmlns='http://www.w3.org/2000/svg'%20viewBox='0%200%201024%20683'%3E%3C/svg%3E" class="attachment-large size-large wp-image-25190" alt="humanite" data-lazy-srcset="https://clinicahumanite.com.br/wp-content/uploads/2023/01/WhatsApp-Image-2023-01-19-at-17.09.36-1024x683.jpeg 1024w, https://clinicahumanite.com.br/wp-content/uploads/2023/01/WhatsApp-Image-2023-01-19-at-17.09.36-300x200.jpeg 300w, https://clinicahumanite.com.br/wp-content/uploads/2023/01/WhatsApp-Image-2023-01-19-at-17.09.36-768x512.jpeg 768w, https://clinicahumanite.com.br/wp-content/uploads/2023/01/WhatsApp-Image-2023-01-19-at-17.09.36-600x400.jpeg 600w, https://clinicahumanite.com.br/wp-content/uploads/2023/01/WhatsApp-Image-2023-01-19-at-17.09.36.jpeg 1296w" data-lazy-sizes="(max-width: 1024px) 100vw, 1024px" data-lazy-src="https://clinicahumanite.com.br/wp-content/uploads/2023/01/WhatsApp-Image-2023-01-19-at-17.09.36-1024x683.jpeg" /><noscript><img decoding="async" width="1024" height="683" src="https://clinicahumanite.com.br/wp-content/uploads/2023/01/WhatsApp-Image-2023-01-19-at-17.09.36-1024x683.jpeg" class="attachment-large size-large wp-image-25190" alt="humanite" srcset="https://clinicahumanite.com.br/wp-content/uploads/2023/01/WhatsApp-Image-2023-01-19-at-17.09.36-1024x683.jpeg 1024w, https://clinicahumanite.com.br/wp-content/uploads/2023/01/WhatsApp-Image-2023-01-19-at-17.09.36-300x200.jpeg 300w, https://clinicahumanite.com.br/wp-content/uploads/2023/01/WhatsApp-Image-2023-01-19-at-17.09.36-768x512.jpeg 768w, https://clinicahumanite.com.br/wp-content/uploads/2023/01/WhatsApp-Image-2023-01-19-at-17.09.36-600x400.jpeg 600w, https://clinicahumanite.com.br/wp-content/uploads/2023/01/WhatsApp-Image-2023-01-19-at-17.09.36.jpeg 1296w" sizes="(max-width: 1024px) 100vw, 1024px" /></noscript>													</div>
				</div>
					</div>
		</div>
				<div class="has_eae_slider elementor-column elementor-col-33 elementor-inner-column elementor-element elementor-element-c8e4280" data-id="c8e4280" data-element_type="column" data-settings="{&quot;background_background&quot;:&quot;classic&quot;}">
			<div class="elementor-widget-wrap elementor-element-populated">
						<div class="elementor-element elementor-element-e78335d elementor-widget elementor-widget-heading" data-id="e78335d" data-element_type="widget" data-widget_type="heading.default">
				<div class="elementor-widget-container">
			<h2 class="elementor-heading-title elementor-size-default">Bruna de Assis Almeida</h2>		</div>
				</div>
				<div class="elementor-element elementor-element-9f61d71 elementor-widget elementor-widget-spacer" data-id="9f61d71" data-element_type="widget" data-widget_type="spacer.default">
				<div class="elementor-widget-container">
					<div class="elementor-spacer">
			<div class="elementor-spacer-inner"></div>
		</div>
				</div>
				</div>
				<div class="elementor-element elementor-element-51a22ff elementor-widget elementor-widget-text-editor" data-id="51a22ff" data-element_type="widget" data-widget_type="text-editor.default">
				<div class="elementor-widget-container">
							<p>A proprietária e Neuropsicóloga, Bruna de Assis Almeida, é Doutoranda pela UFMG, em Neurociências Clínicas. Em seu projeto atual, estuda sobre o sono, cognição e funcionalidade na Esquizofrenia.<br />É Mestre em Psicologia pela UFPR, na linha de Avaliação Neuropsicológica e Reabilitação, com dissertação sobre o Parkinson.<br />É Pós-Graduada em Neuropsicológica Educacional e Pós-Graduada em Análise do Comportamento Aplicada (ABA).Tem inscrição no <strong>CRP 08/26275</strong>. </p>						</div>
				</div>
				<div class="elementor-element elementor-element-5abe362 elementor-align-left elementor-mobile-align-center elementor-widget elementor-widget-button" data-id="5abe362" data-element_type="widget" data-widget_type="button.default">
				<div class="elementor-widget-container">
					<div class="elementor-button-wrapper">
			<a class="elementor-button elementor-button-link elementor-size-sm" href="http://lattes.cnpq.br/7741539983575230" target="_blank">
						<span class="elementor-button-content-wrapper">
									<span class="elementor-button-text">Veja o Curriculo </span>
					</span>
					</a>
		</div>
				</div>
				</div>
					</div>
		</div>
					</div>
		</section>
				<div class="elementor-element elementor-element-cf60f63 e-transform elementor-hidden-mobile elementor-widget elementor-widget-image" data-id="cf60f63" data-element_type="widget" data-settings="{&quot;_transform_translateX_effect&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:501,&quot;sizes&quot;:[]},&quot;_transform_translateY_effect&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:72,&quot;sizes&quot;:[]},&quot;_transform_translateX_effect_tablet&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;_transform_translateX_effect_mobile&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;_transform_translateY_effect_tablet&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;_transform_translateY_effect_mobile&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]}}" data-widget_type="image.default">
				<div class="elementor-widget-container">
													<img decoding="async" width="135" height="135" src="data:image/svg+xml,%3Csvg%20xmlns='http://www.w3.org/2000/svg'%20viewBox='0%200%20135%20135'%3E%3C/svg%3E" class="attachment-large size-large wp-image-25684" alt="Clinica humanité" data-lazy-src="https://clinicahumanite.com.br/wp-content/uploads/2023/01/giro.gif" /><noscript><img loading="lazy" decoding="async" width="135" height="135" src="https://clinicahumanite.com.br/wp-content/uploads/2023/01/giro.gif" class="attachment-large size-large wp-image-25684" alt="Clinica humanité" /></noscript>													</div>
				</div>
					</div>
		</div>
					</div>
		</section>
				<section class="has_eae_slider elementor-section elementor-top-section elementor-element elementor-element-14f241ad elementor-section-boxed elementor-section-height-default elementor-section-height-default" data-id="14f241ad" data-element_type="section" data-settings="{&quot;background_background&quot;:&quot;classic&quot;,&quot;animation_mobile&quot;:&quot;none&quot;}">
						<div class="elementor-container elementor-column-gap-default">
					<div class="has_eae_slider elementor-column elementor-col-100 elementor-top-column elementor-element elementor-element-3fa96f81 elementor-invisible" data-id="3fa96f81" data-element_type="column" data-settings="{&quot;animation&quot;:&quot;fadeInUp&quot;,&quot;animation_mobile&quot;:&quot;none&quot;}">
			<div class="elementor-widget-wrap elementor-element-populated">
						<div class="elementor-element elementor-element-fd39304 elementor-widget elementor-widget-elementskit-heading" data-id="fd39304" data-element_type="widget" data-widget_type="elementskit-heading.default">
				<div class="elementor-widget-container">
			<div class="ekit-wid-con" ><div class="ekit-heading elementskit-section-title-wraper text_center   ekit_heading_tablet-   ekit_heading_mobile-"><h2 class="ekit-heading--title elementskit-section-title ">Opiniões de Pacientes</h2><div class="ekit_heading_separetor_wraper ekit_heading_elementskit-border-divider"><div class="elementskit-border-divider"></div></div></div></div>		</div>
				</div>
				<section class="has_eae_slider elementor-section elementor-inner-section elementor-element elementor-element-9c96069 elementor-section-boxed elementor-section-height-default elementor-section-height-default" data-id="9c96069" data-element_type="section">
						<div class="elementor-container elementor-column-gap-default">
					<div class="has_eae_slider elementor-column elementor-col-50 elementor-inner-column elementor-element elementor-element-1925ea2" data-id="1925ea2" data-element_type="column" data-settings="{&quot;background_background&quot;:&quot;classic&quot;}">
			<div class="elementor-widget-wrap elementor-element-populated">
						<div class="elementor-element elementor-element-5a300bb elementor-star-rating-mobile--align-center elementor--star-style-star_fontawesome elementor-widget elementor-widget-star-rating" data-id="5a300bb" data-element_type="widget" data-widget_type="star-rating.default">
				<div class="elementor-widget-container">
			
		<div class="elementor-star-rating__wrapper">
						<div class="elementor-star-rating" title="5/5" itemtype="http://schema.org/Rating" itemscope="" itemprop="reviewRating"><i class="elementor-star-full">&#xE933;</i><i class="elementor-star-full">&#xE933;</i><i class="elementor-star-full">&#xE933;</i><i class="elementor-star-full">&#xE933;</i><i class="elementor-star-full">&#xE933;</i> <span itemprop="ratingValue" class="elementor-screen-only">5/5</span></div>		</div>
				</div>
				</div>
				<div class="elementor-element elementor-element-c7d3d10 elementor-widget elementor-widget-testimonial" data-id="c7d3d10" data-element_type="widget" data-widget_type="testimonial.default">
				<div class="elementor-widget-container">
					<div class="elementor-testimonial-wrapper">
							<div class="elementor-testimonial-content">Recomendo o trabalho da Dra Bruna, ela é uma profissional incrível, atenciosa e acolhedora. Explica o que é apontado no laudo de forma clara e orienta sobre os próximos passos a serem dados.  Uma profissional maravilhosa que merece todas as estrelas disponíveis.</div>
			
						<div class="elementor-testimonial-meta">
				<div class="elementor-testimonial-meta-inner">
					
										<div class="elementor-testimonial-details">
														<div class="elementor-testimonial-name">Alice Lemos</div>
																						<div class="elementor-testimonial-job">Paraná</div>
													</div>
									</div>
			</div>
					</div>
				</div>
				</div>
					</div>
		</div>
				<div class="has_eae_slider elementor-column elementor-col-50 elementor-inner-column elementor-element elementor-element-64467cb" data-id="64467cb" data-element_type="column" data-settings="{&quot;background_background&quot;:&quot;classic&quot;}">
			<div class="elementor-widget-wrap elementor-element-populated">
						<div class="elementor-element elementor-element-f1b2afd elementor-star-rating-mobile--align-center elementor--star-style-star_fontawesome elementor-widget elementor-widget-star-rating" data-id="f1b2afd" data-element_type="widget" data-widget_type="star-rating.default">
				<div class="elementor-widget-container">
			
		<div class="elementor-star-rating__wrapper">
						<div class="elementor-star-rating" title="5/5" itemtype="http://schema.org/Rating" itemscope="" itemprop="reviewRating"><i class="elementor-star-full">&#xE933;</i><i class="elementor-star-full">&#xE933;</i><i class="elementor-star-full">&#xE933;</i><i class="elementor-star-full">&#xE933;</i><i class="elementor-star-full">&#xE933;</i> <span itemprop="ratingValue" class="elementor-screen-only">5/5</span></div>		</div>
				</div>
				</div>
				<div class="elementor-element elementor-element-82300a2 elementor-widget elementor-widget-testimonial" data-id="82300a2" data-element_type="widget" data-widget_type="testimonial.default">
				<div class="elementor-widget-container">
					<div class="elementor-testimonial-wrapper">
							<div class="elementor-testimonial-content">Super recomendo a clínica Humanité. Equipe muito atenciosa e super profissional.Me senti muito acolhida. Sou muito grata a Bruna Almeida e o pessoal do atendimento</div>
			
						<div class="elementor-testimonial-meta">
				<div class="elementor-testimonial-meta-inner">
					
										<div class="elementor-testimonial-details">
														<div class="elementor-testimonial-name">Marjorie Belinelli</div>
																						<div class="elementor-testimonial-job">Paraná</div>
													</div>
									</div>
			</div>
					</div>
				</div>
				</div>
					</div>
		</div>
					</div>
		</section>
				<section class="has_eae_slider elementor-section elementor-inner-section elementor-element elementor-element-7d4a283 elementor-section-boxed elementor-section-height-default elementor-section-height-default" data-id="7d4a283" data-element_type="section">
						<div class="elementor-container elementor-column-gap-default">
					<div class="has_eae_slider elementor-column elementor-col-50 elementor-inner-column elementor-element elementor-element-3c6ed80" data-id="3c6ed80" data-element_type="column" data-settings="{&quot;background_background&quot;:&quot;classic&quot;}">
			<div class="elementor-widget-wrap elementor-element-populated">
						<div class="elementor-element elementor-element-0de8220 elementor-star-rating-mobile--align-center elementor--star-style-star_fontawesome elementor-widget elementor-widget-star-rating" data-id="0de8220" data-element_type="widget" data-widget_type="star-rating.default">
				<div class="elementor-widget-container">
			
		<div class="elementor-star-rating__wrapper">
						<div class="elementor-star-rating" title="5/5" itemtype="http://schema.org/Rating" itemscope="" itemprop="reviewRating"><i class="elementor-star-full">&#xE933;</i><i class="elementor-star-full">&#xE933;</i><i class="elementor-star-full">&#xE933;</i><i class="elementor-star-full">&#xE933;</i><i class="elementor-star-full">&#xE933;</i> <span itemprop="ratingValue" class="elementor-screen-only">5/5</span></div>		</div>
				</div>
				</div>
				<div class="elementor-element elementor-element-446cc6b elementor-widget elementor-widget-testimonial" data-id="446cc6b" data-element_type="widget" data-widget_type="testimonial.default">
				<div class="elementor-widget-container">
					<div class="elementor-testimonial-wrapper">
							<div class="elementor-testimonial-content">Excelente atendimento, a Dr. Bruna faz toda o processo se dar de uma forma muito tranquila, nos deixando muito a vontade. Sem contar que no momento de entregar o laudo é feita toda explicação e encaminhamentos necessários.</div>
			
						<div class="elementor-testimonial-meta">
				<div class="elementor-testimonial-meta-inner">
					
										<div class="elementor-testimonial-details">
														<div class="elementor-testimonial-name">Matheus Oliveira</div>
																						<div class="elementor-testimonial-job">Paraná</div>
													</div>
									</div>
			</div>
					</div>
				</div>
				</div>
					</div>
		</div>
				<div class="has_eae_slider elementor-column elementor-col-50 elementor-inner-column elementor-element elementor-element-1aa4beb" data-id="1aa4beb" data-element_type="column" data-settings="{&quot;background_background&quot;:&quot;classic&quot;}">
			<div class="elementor-widget-wrap elementor-element-populated">
						<div class="elementor-element elementor-element-aced1a0 elementor-star-rating-mobile--align-center elementor--star-style-star_fontawesome elementor-widget elementor-widget-star-rating" data-id="aced1a0" data-element_type="widget" data-widget_type="star-rating.default">
				<div class="elementor-widget-container">
			
		<div class="elementor-star-rating__wrapper">
						<div class="elementor-star-rating" title="5/5" itemtype="http://schema.org/Rating" itemscope="" itemprop="reviewRating"><i class="elementor-star-full">&#xE933;</i><i class="elementor-star-full">&#xE933;</i><i class="elementor-star-full">&#xE933;</i><i class="elementor-star-full">&#xE933;</i><i class="elementor-star-full">&#xE933;</i> <span itemprop="ratingValue" class="elementor-screen-only">5/5</span></div>		</div>
				</div>
				</div>
				<div class="elementor-element elementor-element-87450cb elementor-widget elementor-widget-testimonial" data-id="87450cb" data-element_type="widget" data-widget_type="testimonial.default">
				<div class="elementor-widget-container">
					<div class="elementor-testimonial-wrapper">
							<div class="elementor-testimonial-content">Lugar  muito tranquilo e lúdico, a Dr Bruna é maravilhosa, excelente profissional. Muito paciente e entende as nossas limitações na hora das sessões e testes. Recomendo muito este serviço.</div>
			
						<div class="elementor-testimonial-meta">
				<div class="elementor-testimonial-meta-inner">
					
										<div class="elementor-testimonial-details">
														<div class="elementor-testimonial-name">Fernanda Freyn</div>
																						<div class="elementor-testimonial-job">Paraná</div>
													</div>
									</div>
			</div>
					</div>
				</div>
				</div>
					</div>
		</div>
					</div>
		</section>
				<section class="has_eae_slider elementor-section elementor-inner-section elementor-element elementor-element-d1d473e elementor-hidden-tablet elementor-hidden-mobile elementor-section-boxed elementor-section-height-default elementor-section-height-default" data-id="d1d473e" data-element_type="section">
						<div class="elementor-container elementor-column-gap-default">
					<div class="has_eae_slider elementor-column elementor-col-50 elementor-inner-column elementor-element elementor-element-6bbcc29" data-id="6bbcc29" data-element_type="column" data-settings="{&quot;background_background&quot;:&quot;classic&quot;}">
			<div class="elementor-widget-wrap elementor-element-populated">
						<div class="elementor-element elementor-element-a474d45 elementor-star-rating-mobile--align-center elementor--star-style-star_fontawesome elementor-widget elementor-widget-star-rating" data-id="a474d45" data-element_type="widget" data-widget_type="star-rating.default">
				<div class="elementor-widget-container">
			
		<div class="elementor-star-rating__wrapper">
						<div class="elementor-star-rating" title="5/5" itemtype="http://schema.org/Rating" itemscope="" itemprop="reviewRating"><i class="elementor-star-full">&#xE933;</i><i class="elementor-star-full">&#xE933;</i><i class="elementor-star-full">&#xE933;</i><i class="elementor-star-full">&#xE933;</i><i class="elementor-star-full">&#xE933;</i> <span itemprop="ratingValue" class="elementor-screen-only">5/5</span></div>		</div>
				</div>
				</div>
				<div class="elementor-element elementor-element-c26a4f7 elementor-widget elementor-widget-testimonial" data-id="c26a4f7" data-element_type="widget" data-widget_type="testimonial.default">
				<div class="elementor-widget-container">
					<div class="elementor-testimonial-wrapper">
							<div class="elementor-testimonial-content">Atendimento de qualidade. 
<br>Profissional capacitada e humana. 
<br>Obrigada Dra. Bruna.</div>
			
						<div class="elementor-testimonial-meta">
				<div class="elementor-testimonial-meta-inner">
					
										<div class="elementor-testimonial-details">
														<div class="elementor-testimonial-name">Milena Ferreira</div>
																						<div class="elementor-testimonial-job">Paraná</div>
													</div>
									</div>
			</div>
					</div>
				</div>
				</div>
					</div>
		</div>
				<div class="has_eae_slider elementor-column elementor-col-50 elementor-inner-column elementor-element elementor-element-24fe901" data-id="24fe901" data-element_type="column" data-settings="{&quot;background_background&quot;:&quot;classic&quot;}">
			<div class="elementor-widget-wrap elementor-element-populated">
						<div class="elementor-element elementor-element-f0ce1ea elementor-star-rating-mobile--align-center elementor--star-style-star_fontawesome elementor-widget elementor-widget-star-rating" data-id="f0ce1ea" data-element_type="widget" data-widget_type="star-rating.default">
				<div class="elementor-widget-container">
			
		<div class="elementor-star-rating__wrapper">
						<div class="elementor-star-rating" title="5/5" itemtype="http://schema.org/Rating" itemscope="" itemprop="reviewRating"><i class="elementor-star-full">&#xE933;</i><i class="elementor-star-full">&#xE933;</i><i class="elementor-star-full">&#xE933;</i><i class="elementor-star-full">&#xE933;</i><i class="elementor-star-full">&#xE933;</i> <span itemprop="ratingValue" class="elementor-screen-only">5/5</span></div>		</div>
				</div>
				</div>
				<div class="elementor-element elementor-element-b18980c elementor-widget elementor-widget-testimonial" data-id="b18980c" data-element_type="widget" data-widget_type="testimonial.default">
				<div class="elementor-widget-container">
					<div class="elementor-testimonial-wrapper">
							<div class="elementor-testimonial-content">Profissionais qualificados, capacitados, dispostos e dispõem de toda atenção. Precisei dos serviços e fui muito bem tratado e recepcionado. So tenho a agradecer a essas proficionais.</div>
			
						<div class="elementor-testimonial-meta">
				<div class="elementor-testimonial-meta-inner">
					
										<div class="elementor-testimonial-details">
														<div class="elementor-testimonial-name">Sandro Chaves</div>
																						<div class="elementor-testimonial-job">Paraná</div>
													</div>
									</div>
			</div>
					</div>
				</div>
				</div>
					</div>
		</div>
					</div>
		</section>
				<div class="elementor-element elementor-element-3636210 elementor-widget elementor-widget-text-editor" data-id="3636210" data-element_type="widget" data-widget_type="text-editor.default">
				<div class="elementor-widget-container">
							<p><a href="https://www.google.com/search?q=clinica+humanite+bruna&amp;sxsrf=AJOqlzXbQrSbo4VJBDtqanfsU7_qIgP1qg%3A1674233966913&amp;ei=bsjKY6GrN7m85OUPsOyXiAk&amp;ved=0ahUKEwihmvnGz9b8AhU5HrkGHTD2BZEQ4dUDCA8&amp;uact=5&amp;oq=clinica+humanite+bruna&amp;gs_lcp=Cgxnd3Mtd2l6LXNlcnAQAzoKCAAQDRCABBCwAzoLCAAQCBAeEA0QsAM6BwgjELADECc6CAgAEIAEELADOg4ILhCABBDHARCvARCwAzoQCC4QgAQQxwEQrwEQsAMQCjoKCAAQgAQQsAMQCjoTCC4QgAQQxwEQrwEQyAMQsAMYAToVCC4QgAQQxwEQrwEQyAMQsAMQChgBOgQIIxAnOg0ILhCABBDHARCvARAKOgsILhCABBDHARCvAToHCAAQgAQQCjoFCCEQoAE6BAghEBVKBAhBGAFKBAhGGAFQ2hBYqBdg0hhoAXAAeACAAZ4BiAH3B5IBAzAuN5gBAKABAcgBEcABAdoBBggBEAEYCA&amp;sclient=gws-wiz-serp#lrd=0x94dce549fa5d5699:0x2b27f3586c179c21,1,,,,/" target="_blank" rel="noopener">Ver mais &gt;</a></p>						</div>
				</div>
					</div>
		</div>
					</div>
		</section>
				<section class="has_eae_slider elementor-section elementor-top-section elementor-element elementor-element-56fc06bb elementor-section-boxed elementor-section-height-default elementor-section-height-default" data-id="56fc06bb" data-element_type="section" data-settings="{&quot;background_background&quot;:&quot;classic&quot;}">
						<div class="elementor-container elementor-column-gap-default">
					<div class="has_eae_slider elementor-column elementor-col-100 elementor-top-column elementor-element elementor-element-7037673b" data-id="7037673b" data-element_type="column" data-settings="{&quot;animation&quot;:&quot;none&quot;,&quot;animation_mobile&quot;:&quot;none&quot;}">
			<div class="elementor-widget-wrap elementor-element-populated">
						<div class="elementor-element elementor-element-7fe3968 elementor-widget elementor-widget-elementskit-heading" data-id="7fe3968" data-element_type="widget" data-widget_type="elementskit-heading.default">
				<div class="elementor-widget-container">
			<div class="ekit-wid-con" ><div class="ekit-heading elementskit-section-title-wraper text_center   ekit_heading_tablet-   ekit_heading_mobile-"><h3 class="elementskit-section-subtitle  ">
						Perguntas frequentes
					</h3><h2 class="ekit-heading--title elementskit-section-title ">Ainda com dúvida? </h2><div class="ekit_heading_separetor_wraper ekit_heading_elementskit-border-divider"><div class="elementskit-border-divider"></div></div></div></div>		</div>
				</div>
				<div class="elementor-element elementor-element-4df9dd4 elementor-widget elementor-widget-spacer" data-id="4df9dd4" data-element_type="widget" data-widget_type="spacer.default">
				<div class="elementor-widget-container">
					<div class="elementor-spacer">
			<div class="elementor-spacer-inner"></div>
		</div>
				</div>
				</div>
				<section class="has_eae_slider elementor-section elementor-inner-section elementor-element elementor-element-772ac11 elementor-section-full_width elementor-section-height-default elementor-section-height-default" data-id="772ac11" data-element_type="section">
						<div class="elementor-container elementor-column-gap-default">
					<div class="has_eae_slider elementor-column elementor-col-33 elementor-inner-column elementor-element elementor-element-434feb1" data-id="434feb1" data-element_type="column">
			<div class="elementor-widget-wrap elementor-element-populated">
						<div class="elementor-element elementor-element-35306f58 elementor-widget elementor-widget-accordion" data-id="35306f58" data-element_type="widget" data-settings="{&quot;_animation&quot;:&quot;none&quot;}" data-widget_type="accordion.default">
				<div class="elementor-widget-container">
					<div class="elementor-accordion">
							<div class="elementor-accordion-item">
					<div id="elementor-tab-title-8921" class="elementor-tab-title" data-tab="1" role="button" aria-controls="elementor-tab-content-8921" aria-expanded="false">
													<span class="elementor-accordion-icon elementor-accordion-icon-left" aria-hidden="true">
															<span class="elementor-accordion-icon-closed"><i class="fas fa-caret-right"></i></span>
								<span class="elementor-accordion-icon-opened"><i class="fas fa-caret-down"></i></span>
														</span>
												<a class="elementor-accordion-title" tabindex="0">QUAIS OS DIAS E HORÁRIO DE ATENDIMENTO?</a>
					</div>
					<div id="elementor-tab-content-8921" class="elementor-tab-content elementor-clearfix" data-tab="1" role="region" aria-labelledby="elementor-tab-title-8921"><div>De segunda a sexta-feira das 8:00 às 20:00hs e alguns sábados mediante agendamento.</div></div>
				</div>
							<div class="elementor-accordion-item">
					<div id="elementor-tab-title-8922" class="elementor-tab-title" data-tab="2" role="button" aria-controls="elementor-tab-content-8922" aria-expanded="false">
													<span class="elementor-accordion-icon elementor-accordion-icon-left" aria-hidden="true">
															<span class="elementor-accordion-icon-closed"><i class="fas fa-caret-right"></i></span>
								<span class="elementor-accordion-icon-opened"><i class="fas fa-caret-down"></i></span>
														</span>
												<a class="elementor-accordion-title" tabindex="0">A HUMANITE ATENDE PLANOS DE SAÚDE?</a>
					</div>
					<div id="elementor-tab-content-8922" class="elementor-tab-content elementor-clearfix" data-tab="2" role="region" aria-labelledby="elementor-tab-title-8922"><p>Não, somente particular, mas indicamos nossos pacientes verificarem junto ao seu plano de saúde a possibilidade de reembolso.</p></div>
				</div>
							<div class="elementor-accordion-item">
					<div id="elementor-tab-title-8923" class="elementor-tab-title" data-tab="3" role="button" aria-controls="elementor-tab-content-8923" aria-expanded="false">
													<span class="elementor-accordion-icon elementor-accordion-icon-left" aria-hidden="true">
															<span class="elementor-accordion-icon-closed"><i class="fas fa-caret-right"></i></span>
								<span class="elementor-accordion-icon-opened"><i class="fas fa-caret-down"></i></span>
														</span>
												<a class="elementor-accordion-title" tabindex="0">COMO É REALIZADA A AVALIAÇÃO NEUROPSICOLOGICA?</a>
					</div>
					<div id="elementor-tab-content-8923" class="elementor-tab-content elementor-clearfix" data-tab="3" role="region" aria-labelledby="elementor-tab-title-8923"><div>São 6 sessões ao todo, sendo a primeira de anamnese, quatro sessões de testagem e a sexta e última a devolutiva e entrega do laudo.</div></div>
				</div>
							<div class="elementor-accordion-item">
					<div id="elementor-tab-title-8924" class="elementor-tab-title" data-tab="4" role="button" aria-controls="elementor-tab-content-8924" aria-expanded="false">
													<span class="elementor-accordion-icon elementor-accordion-icon-left" aria-hidden="true">
															<span class="elementor-accordion-icon-closed"><i class="fas fa-caret-right"></i></span>
								<span class="elementor-accordion-icon-opened"><i class="fas fa-caret-down"></i></span>
														</span>
												<a class="elementor-accordion-title" tabindex="0">POSSO REALIZAR MAIS DE UMA SESSÃO POR DIA OU POR SEMANA?</a>
					</div>
					<div id="elementor-tab-content-8924" class="elementor-tab-content elementor-clearfix" data-tab="4" role="region" aria-labelledby="elementor-tab-title-8924"><div>Sim, é possível. A depender da nossa disponibilidade de ambos.</div></div>
				</div>
							<div class="elementor-accordion-item">
					<div id="elementor-tab-title-8925" class="elementor-tab-title" data-tab="5" role="button" aria-controls="elementor-tab-content-8925" aria-expanded="false">
													<span class="elementor-accordion-icon elementor-accordion-icon-left" aria-hidden="true">
															<span class="elementor-accordion-icon-closed"><i class="fas fa-caret-right"></i></span>
								<span class="elementor-accordion-icon-opened"><i class="fas fa-caret-down"></i></span>
														</span>
												<a class="elementor-accordion-title" tabindex="0">QUAL O PRAZO PARA A ENTREGA DA LAUDO?</a>
					</div>
					<div id="elementor-tab-content-8925" class="elementor-tab-content elementor-clearfix" data-tab="5" role="region" aria-labelledby="elementor-tab-title-8925"><div>Até 15 dias úteis após a última sessão de testagem.</div></div>
				</div>
										<script type="application/ld+json">{"@context":"https:\/\/schema.org","@type":"FAQPage","mainEntity":[{"@type":"Question","name":"QUAIS OS DIAS E HOR\u00c1RIO DE ATENDIMENTO?","acceptedAnswer":{"@type":"Answer","text":"<div>De segunda a sexta-feira das 8:00 \u00e0s 20:00hs e alguns s\u00e1bados mediante agendamento.<\/div>"}},{"@type":"Question","name":"A HUMANITE ATENDE PLANOS DE SA\u00daDE?","acceptedAnswer":{"@type":"Answer","text":"<p>N\u00e3o, somente particular, mas indicamos nossos pacientes verificarem junto ao seu plano de sa\u00fade a possibilidade de reembolso.<\/p>"}},{"@type":"Question","name":"COMO \u00c9 REALIZADA A AVALIA\u00c7\u00c3O NEUROPSICOLOGICA?","acceptedAnswer":{"@type":"Answer","text":"<div>S\u00e3o 6 sess\u00f5es ao todo, sendo a primeira de anamnese, quatro sess\u00f5es de testagem e a sexta e \u00faltima a devolutiva e entrega do laudo.<\/div>"}},{"@type":"Question","name":"POSSO REALIZAR MAIS DE UMA SESS\u00c3O POR DIA OU POR SEMANA?","acceptedAnswer":{"@type":"Answer","text":"<div>Sim, \u00e9 poss\u00edvel. A depender da nossa disponibilidade de ambos.<\/div>"}},{"@type":"Question","name":"QUAL O PRAZO PARA A ENTREGA DA LAUDO?","acceptedAnswer":{"@type":"Answer","text":"<div>At\u00e9 15 dias \u00fateis ap\u00f3s a \u00faltima sess\u00e3o de testagem.<\/div>"}}]}</script>
					</div>
				</div>
				</div>
					</div>
		</div>
				<div class="has_eae_slider elementor-column elementor-col-33 elementor-inner-column elementor-element elementor-element-5f3ef3d" data-id="5f3ef3d" data-element_type="column">
			<div class="elementor-widget-wrap elementor-element-populated">
						<div class="elementor-element elementor-element-3a0d636 elementor-widget elementor-widget-accordion" data-id="3a0d636" data-element_type="widget" data-settings="{&quot;_animation&quot;:&quot;none&quot;}" data-widget_type="accordion.default">
				<div class="elementor-widget-container">
					<div class="elementor-accordion">
							<div class="elementor-accordion-item">
					<div id="elementor-tab-title-6081" class="elementor-tab-title" data-tab="1" role="button" aria-controls="elementor-tab-content-6081" aria-expanded="false">
													<span class="elementor-accordion-icon elementor-accordion-icon-left" aria-hidden="true">
															<span class="elementor-accordion-icon-closed"><i class="fas fa-caret-right"></i></span>
								<span class="elementor-accordion-icon-opened"><i class="fas fa-caret-down"></i></span>
														</span>
												<a class="elementor-accordion-title" tabindex="0">A CLÍNICA HUMANITÉ ATENDE A PARTIR DE QUANTOS ANOS?</a>
					</div>
					<div id="elementor-tab-content-6081" class="elementor-tab-content elementor-clearfix" data-tab="1" role="region" aria-labelledby="elementor-tab-title-6081"><div>A partir de 02 anos de idade para avaliação neuropsicológica, 06 anos para reabilitação cognitiva e neurologia.</div></div>
				</div>
							<div class="elementor-accordion-item">
					<div id="elementor-tab-title-6082" class="elementor-tab-title" data-tab="2" role="button" aria-controls="elementor-tab-content-6082" aria-expanded="false">
													<span class="elementor-accordion-icon elementor-accordion-icon-left" aria-hidden="true">
															<span class="elementor-accordion-icon-closed"><i class="fas fa-caret-right"></i></span>
								<span class="elementor-accordion-icon-opened"><i class="fas fa-caret-down"></i></span>
														</span>
												<a class="elementor-accordion-title" tabindex="0">COMO É A FORMA DE PAGAMENTO DA AVALIAÇÃO NEUROPSICOLOGICA?</a>
					</div>
					<div id="elementor-tab-content-6082" class="elementor-tab-content elementor-clearfix" data-tab="2" role="region" aria-labelledby="elementor-tab-title-6082"><div>• 4 x no cartão de crédito</div><div>• a vista com desconto</div><div>• por sessão na data a ser realizada</div></div>
				</div>
							<div class="elementor-accordion-item">
					<div id="elementor-tab-title-6083" class="elementor-tab-title" data-tab="3" role="button" aria-controls="elementor-tab-content-6083" aria-expanded="false">
													<span class="elementor-accordion-icon elementor-accordion-icon-left" aria-hidden="true">
															<span class="elementor-accordion-icon-closed"><i class="fas fa-caret-right"></i></span>
								<span class="elementor-accordion-icon-opened"><i class="fas fa-caret-down"></i></span>
														</span>
												<a class="elementor-accordion-title" tabindex="0">PARA QUEM É INDICADO REALIZAR A REABILITAÇÃO COGNITIVA?</a>
					</div>
					<div id="elementor-tab-content-6083" class="elementor-tab-content elementor-clearfix" data-tab="3" role="region" aria-labelledby="elementor-tab-title-6083"><p>Consiste em um conjunto de técnicas e práticas que melhoram as alterações cognitivas, emocionais e comportamentais encontradas, e auxiliam na melhora dos sintomas patológicos e disfuncionais. <br />Realizamos um protocolo de reabilitação individualizado e semestral, que é entregue ao paciente no início da reabilitação. No protocolo fazemos uma descrição de todas as funções a serem trabalhadas, suas especificidades e apresentamos cronograma.</p></div>
				</div>
							<div class="elementor-accordion-item">
					<div id="elementor-tab-title-6084" class="elementor-tab-title" data-tab="4" role="button" aria-controls="elementor-tab-content-6084" aria-expanded="false">
													<span class="elementor-accordion-icon elementor-accordion-icon-left" aria-hidden="true">
															<span class="elementor-accordion-icon-closed"><i class="fas fa-caret-right"></i></span>
								<span class="elementor-accordion-icon-opened"><i class="fas fa-caret-down"></i></span>
														</span>
												<a class="elementor-accordion-title" tabindex="0">REALIZAM A REABILITAÇÃO COGNITIVA EM CRIANÇAS?</a>
					</div>
					<div id="elementor-tab-content-6084" class="elementor-tab-content elementor-clearfix" data-tab="4" role="region" aria-labelledby="elementor-tab-title-6084"><p>A reabilitação é feita em crianças, a partir de 6 anos de idade, adolescentes, adultos e idosos, com qualquer tipo de dificuldade ou diagnóstico.</p></div>
				</div>
							<div class="elementor-accordion-item">
					<div id="elementor-tab-title-6085" class="elementor-tab-title" data-tab="5" role="button" aria-controls="elementor-tab-content-6085" aria-expanded="false">
													<span class="elementor-accordion-icon elementor-accordion-icon-left" aria-hidden="true">
															<span class="elementor-accordion-icon-closed"><i class="fas fa-caret-right"></i></span>
								<span class="elementor-accordion-icon-opened"><i class="fas fa-caret-down"></i></span>
														</span>
												<a class="elementor-accordion-title" tabindex="0"> SOU DE OUTRA CIDADE, COMO PODEMOS FAZER O AGENDAMENTO?</a>
					</div>
					<div id="elementor-tab-content-6085" class="elementor-tab-content elementor-clearfix" data-tab="5" role="region" aria-labelledby="elementor-tab-title-6085"><div>As sessões de anamnese e a devolutiva poder ser realizadas de modo online e as sessões de testagem precisam ser presenciais.</div></div>
				</div>
										<script type="application/ld+json">{"@context":"https:\/\/schema.org","@type":"FAQPage","mainEntity":[{"@type":"Question","name":"A CL\u00cdNICA HUMANIT\u00c9 ATENDE A PARTIR DE QUANTOS ANOS?","acceptedAnswer":{"@type":"Answer","text":"<div>A partir de 02 anos de idade para avalia\u00e7\u00e3o neuropsicol\u00f3gica, 06 anos para reabilita\u00e7\u00e3o cognitiva e neurologia.<\/div>"}},{"@type":"Question","name":"COMO \u00c9 A FORMA DE PAGAMENTO DA AVALIA\u00c7\u00c3O NEUROPSICOLOGICA?","acceptedAnswer":{"@type":"Answer","text":"<div>\u2022 4 x no cart\u00e3o de cr\u00e9dito<\/div><div>\u2022 a vista com desconto<\/div><div>\u2022 por sess\u00e3o na data a ser realizada<\/div>"}},{"@type":"Question","name":"PARA QUEM \u00c9 INDICADO REALIZAR A REABILITA\u00c7\u00c3O COGNITIVA?","acceptedAnswer":{"@type":"Answer","text":"<p>Consiste em um conjunto de t\u00e9cnicas e pr\u00e1ticas que melhoram as altera\u00e7\u00f5es cognitivas, emocionais e comportamentais encontradas, e auxiliam na melhora dos sintomas patol\u00f3gicos e disfuncionais. <br \/>Realizamos um protocolo de reabilita\u00e7\u00e3o individualizado e semestral, que \u00e9 entregue ao paciente no in\u00edcio da reabilita\u00e7\u00e3o. No protocolo fazemos uma descri\u00e7\u00e3o de todas as fun\u00e7\u00f5es a serem trabalhadas, suas especificidades e apresentamos cronograma.<\/p>"}},{"@type":"Question","name":"REALIZAM A REABILITA\u00c7\u00c3O COGNITIVA EM CRIAN\u00c7AS?","acceptedAnswer":{"@type":"Answer","text":"<p>A reabilita\u00e7\u00e3o \u00e9 feita em crian\u00e7as, a partir de 6 anos de idade, adolescentes, adultos e idosos, com qualquer tipo de dificuldade ou diagn\u00f3stico.<\/p>"}},{"@type":"Question","name":"SOU DE OUTRA CIDADE, COMO PODEMOS FAZER O AGENDAMENTO?","acceptedAnswer":{"@type":"Answer","text":"<div>As sess\u00f5es de anamnese e a devolutiva poder ser realizadas de modo online e as sess\u00f5es de testagem precisam ser presenciais.<\/div>"}}]}</script>
					</div>
				</div>
				</div>
					</div>
		</div>
				<div class="has_eae_slider elementor-column elementor-col-33 elementor-inner-column elementor-element elementor-element-e40c600" data-id="e40c600" data-element_type="column">
			<div class="elementor-widget-wrap elementor-element-populated">
						<div class="elementor-element elementor-element-6fc1165 elementor-widget elementor-widget-accordion" data-id="6fc1165" data-element_type="widget" data-settings="{&quot;_animation&quot;:&quot;none&quot;}" data-widget_type="accordion.default">
				<div class="elementor-widget-container">
					<div class="elementor-accordion">
							<div class="elementor-accordion-item">
					<div id="elementor-tab-title-1171" class="elementor-tab-title" data-tab="1" role="button" aria-controls="elementor-tab-content-1171" aria-expanded="false">
													<span class="elementor-accordion-icon elementor-accordion-icon-left" aria-hidden="true">
															<span class="elementor-accordion-icon-closed"><i class="fas fa-caret-right"></i></span>
								<span class="elementor-accordion-icon-opened"><i class="fas fa-caret-down"></i></span>
														</span>
												<a class="elementor-accordion-title" tabindex="0">A HUMANITÉ REALIZA PALESTRAS E WORKSHOP?</a>
					</div>
					<div id="elementor-tab-content-1171" class="elementor-tab-content elementor-clearfix" data-tab="1" role="region" aria-labelledby="elementor-tab-title-1171"><p>Sim, realizamos diversos tipos de palestras em escolas públicas, privada, empresas e instituições.</p></div>
				</div>
							<div class="elementor-accordion-item">
					<div id="elementor-tab-title-1172" class="elementor-tab-title" data-tab="2" role="button" aria-controls="elementor-tab-content-1172" aria-expanded="false">
													<span class="elementor-accordion-icon elementor-accordion-icon-left" aria-hidden="true">
															<span class="elementor-accordion-icon-closed"><i class="fas fa-caret-right"></i></span>
								<span class="elementor-accordion-icon-opened"><i class="fas fa-caret-down"></i></span>
														</span>
												<a class="elementor-accordion-title" tabindex="0">QUAIS SESSÕES PODEM SER ONLINE?</a>
					</div>
					<div id="elementor-tab-content-1172" class="elementor-tab-content elementor-clearfix" data-tab="2" role="region" aria-labelledby="elementor-tab-title-1172"><p>A primeira consulta e a última podem ser online.</p></div>
				</div>
							<div class="elementor-accordion-item">
					<div id="elementor-tab-title-1173" class="elementor-tab-title" data-tab="3" role="button" aria-controls="elementor-tab-content-1173" aria-expanded="false">
													<span class="elementor-accordion-icon elementor-accordion-icon-left" aria-hidden="true">
															<span class="elementor-accordion-icon-closed"><i class="fas fa-caret-right"></i></span>
								<span class="elementor-accordion-icon-opened"><i class="fas fa-caret-down"></i></span>
														</span>
												<a class="elementor-accordion-title" tabindex="0">A HUMANITÉ FAZ SUPERVISÃO CLÍNICA? PARA QUEM É INDICADO?</a>
					</div>
					<div id="elementor-tab-content-1173" class="elementor-tab-content elementor-clearfix" data-tab="3" role="region" aria-labelledby="elementor-tab-title-1173"><div>Sim, fazemos para profissionais de saúde que queiram se aprofundar sobre avaliações e tratamentos psicológicos.</div></div>
				</div>
							<div class="elementor-accordion-item">
					<div id="elementor-tab-title-1174" class="elementor-tab-title" data-tab="4" role="button" aria-controls="elementor-tab-content-1174" aria-expanded="false">
													<span class="elementor-accordion-icon elementor-accordion-icon-left" aria-hidden="true">
															<span class="elementor-accordion-icon-closed"><i class="fas fa-caret-right"></i></span>
								<span class="elementor-accordion-icon-opened"><i class="fas fa-caret-down"></i></span>
														</span>
												<a class="elementor-accordion-title" tabindex="0">CASO PRECISE ALTERAR MEU HORARIO, COMO DEVO PROCEDER?</a>
					</div>
					<div id="elementor-tab-content-1174" class="elementor-tab-content elementor-clearfix" data-tab="4" role="region" aria-labelledby="elementor-tab-title-1174"><div>Entre em contato via WhatsApp com antecedência minima de 24 horas</div></div>
				</div>
							<div class="elementor-accordion-item">
					<div id="elementor-tab-title-1175" class="elementor-tab-title" data-tab="5" role="button" aria-controls="elementor-tab-content-1175" aria-expanded="false">
													<span class="elementor-accordion-icon elementor-accordion-icon-left" aria-hidden="true">
															<span class="elementor-accordion-icon-closed"><i class="fas fa-caret-right"></i></span>
								<span class="elementor-accordion-icon-opened"><i class="fas fa-caret-down"></i></span>
														</span>
												<a class="elementor-accordion-title" tabindex="0">POSSO AGENDAR TODAS AS SESSÕES ANTES DA PRIMEIRA CONSULTA?</a>
					</div>
					<div id="elementor-tab-content-1175" class="elementor-tab-content elementor-clearfix" data-tab="5" role="region" aria-labelledby="elementor-tab-title-1175"><p>Não, apenas após a primeira consulta podemos agendar as próximas sessões.</p></div>
				</div>
										<script type="application/ld+json">{"@context":"https:\/\/schema.org","@type":"FAQPage","mainEntity":[{"@type":"Question","name":"A HUMANIT\u00c9 REALIZA PALESTRAS E WORKSHOP?","acceptedAnswer":{"@type":"Answer","text":"<p>Sim, realizamos diversos tipos de palestras em escolas p\u00fablicas, privada, empresas e institui\u00e7\u00f5es.<\/p>"}},{"@type":"Question","name":"QUAIS SESS\u00d5ES PODEM SER ONLINE?","acceptedAnswer":{"@type":"Answer","text":"<p>A primeira consulta e a \u00faltima podem ser online.<\/p>"}},{"@type":"Question","name":"A HUMANIT\u00c9 FAZ SUPERVIS\u00c3O CL\u00cdNICA? PARA QUEM \u00c9 INDICADO?","acceptedAnswer":{"@type":"Answer","text":"<div>Sim, fazemos para profissionais de sa\u00fade que queiram se aprofundar sobre avalia\u00e7\u00f5es e tratamentos psicol\u00f3gicos.<\/div>"}},{"@type":"Question","name":"CASO PRECISE ALTERAR MEU HORARIO, COMO DEVO PROCEDER?","acceptedAnswer":{"@type":"Answer","text":"<div>Entre em contato via WhatsApp com anteced\u00eancia minima de 24 horas<\/div>"}},{"@type":"Question","name":"POSSO AGENDAR TODAS AS SESS\u00d5ES ANTES DA PRIMEIRA CONSULTA?","acceptedAnswer":{"@type":"Answer","text":"<p>N\u00e3o, apenas ap\u00f3s a primeira consulta podemos agendar as pr\u00f3ximas sess\u00f5es.<\/p>"}}]}</script>
					</div>
				</div>
				</div>
					</div>
		</div>
					</div>
		</section>
					</div>
		</div>
					</div>
		</section>
				<section class="has_eae_slider elementor-section elementor-top-section elementor-element elementor-element-03db4aj elementor-section-content-middle elementor-section-boxed elementor-section-height-default elementor-section-height-default" data-id="03db4aj" data-element_type="section" data-settings="{&quot;shape_divider_top&quot;:&quot;waves&quot;,&quot;animation_mobile&quot;:&quot;none&quot;}">
					<div class="elementor-shape elementor-shape-top" data-negative="false">
			<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 1000 100" preserveAspectRatio="none">
	<path class="elementor-shape-fill" d="M421.9,6.5c22.6-2.5,51.5,0.4,75.5,5.3c23.6,4.9,70.9,23.5,100.5,35.7c75.8,32.2,133.7,44.5,192.6,49.7
	c23.6,2.1,48.7,3.5,103.4-2.5c54.7-6,106.2-25.6,106.2-25.6V0H0v30.3c0,0,72,32.6,158.4,30.5c39.2-0.7,92.8-6.7,134-22.4
	c21.2-8.1,52.2-18.2,79.7-24.2C399.3,7.9,411.6,7.5,421.9,6.5z"/>
</svg>		</div>
					<div class="elementor-container elementor-column-gap-no">
					<div class="has_eae_slider elementor-column elementor-col-100 elementor-top-column elementor-element elementor-element-50132724" data-id="50132724" data-element_type="column">
			<div class="elementor-widget-wrap elementor-element-populated">
						<section class="has_eae_slider elementor-section elementor-inner-section elementor-element elementor-element-0330b88 elementor-section-full_width elementor-section-height-default elementor-section-height-default" data-id="0330b88" data-element_type="section" data-settings="{&quot;animation&quot;:&quot;none&quot;}">
						<div class="elementor-container elementor-column-gap-default">
					<div class="has_eae_slider elementor-column elementor-col-100 elementor-inner-column elementor-element elementor-element-4ec9053" data-id="4ec9053" data-element_type="column">
			<div class="elementor-widget-wrap elementor-element-populated">
						<div class="elementor-element elementor-element-35878f7a elementor-widget elementor-widget-heading" data-id="35878f7a" data-element_type="widget" data-settings="{&quot;_animation&quot;:&quot;none&quot;}" data-widget_type="heading.default">
				<div class="elementor-widget-container">
			<h2 class="elementor-heading-title elementor-size-default">Siga nosso instagram</h2>		</div>
				</div>
				<div class="elementor-element elementor-element-502d823 ekit-image-accordion-horizontal ekit-image-accordion-click elementor-widget elementor-widget-elementskit-image-accordion" data-id="502d823" data-element_type="widget" data-settings="{&quot;_animation&quot;:&quot;none&quot;}" data-widget_type="elementskit-image-accordion.default">
				<div class="elementor-widget-container">
			<div class="ekit-wid-con" >		<div class="ekit-image-accordion elementskit-image-accordion-wraper">
			                <input type="radio" name="ekit_ia_502d823" id="ekit_ia_502d823_0" class="elementskit-single-image-accordion--input" hidden>
                <label for="ekit_ia_502d823_0" class="elementskit-single-image-accordion ekit-image-accordion-item" style="background-image: url(https://clinicahumanite.com.br/wp-content/uploads/2023/01/01.jpg)" data-link="{&quot;url&quot;:&quot;https:\/\/www.instagram.com\/humaniteneuropsicologia\/&quot;,&quot;is_external&quot;:&quot;&quot;,&quot;nofollow&quot;:&quot;&quot;,&quot;custom_attributes&quot;:&quot;&quot;}" data-behavior="click" data-active="no">
                    <span class="elementskit-accordion-content">
													<span class="elementskit-accordion-title-wraper">
								<span class="elementskit-accordion-title ">
								
								
																</span>
							</span>
							                    </span>
                </label>
                            <input type="radio" name="ekit_ia_502d823" id="ekit_ia_502d823_1" class="elementskit-single-image-accordion--input" hidden>
                <label for="ekit_ia_502d823_1" class="elementskit-single-image-accordion ekit-image-accordion-item" style="background-image: url(https://clinicahumanite.com.br/wp-content/uploads/2023/01/02.jpg)" data-link="{&quot;url&quot;:&quot;https:\/\/www.instagram.com\/humaniteneuropsicologia\/&quot;,&quot;is_external&quot;:&quot;&quot;,&quot;nofollow&quot;:&quot;&quot;,&quot;custom_attributes&quot;:&quot;&quot;}" data-behavior="click" data-active="no">
                    <span class="elementskit-accordion-content">
													<span class="elementskit-accordion-title-wraper">
								<span class="elementskit-accordion-title ">
								
								
																</span>
							</span>
							                    </span>
                </label>
                            <input type="radio" name="ekit_ia_502d823" id="ekit_ia_502d823_2" class="elementskit-single-image-accordion--input" hidden>
                <label for="ekit_ia_502d823_2" class="elementskit-single-image-accordion ekit-image-accordion-item" style="background-image: url(https://clinicahumanite.com.br/wp-content/uploads/2023/01/03.jpg)" data-link="{&quot;url&quot;:&quot;https:\/\/www.instagram.com\/humaniteneuropsicologia\/&quot;,&quot;is_external&quot;:&quot;&quot;,&quot;nofollow&quot;:&quot;&quot;,&quot;custom_attributes&quot;:&quot;&quot;}" data-behavior="click" data-active="no">
                    <span class="elementskit-accordion-content">
													<span class="elementskit-accordion-title-wraper">
								<span class="elementskit-accordion-title ">
								
								
																</span>
							</span>
							                    </span>
                </label>
                    </div>
    </div>		</div>
				</div>
				<div class="elementor-element elementor-element-7f6f5ff elementor-align-center elementor-mobile-align-center elementor-widget elementor-widget-button" data-id="7f6f5ff" data-element_type="widget" data-settings="{&quot;_animation&quot;:&quot;none&quot;}" data-widget_type="button.default">
				<div class="elementor-widget-container">
					<div class="elementor-button-wrapper">
			<a class="elementor-button elementor-button-link elementor-size-sm" href="https://www.instagram.com/humaniteneuropsicologia/" target="_blank">
						<span class="elementor-button-content-wrapper">
						<span class="elementor-button-icon">
				<i aria-hidden="true" class="fab fa-instagram"></i>			</span>
									<span class="elementor-button-text">Seguir</span>
					</span>
					</a>
		</div>
				</div>
				</div>
					</div>
		</div>
					</div>
		</section>
					</div>
		</div>
					</div>
		</section>
				<section class="has_eae_slider elementor-section elementor-top-section elementor-element elementor-element-876olvm elementor-section-content-middle elementor-section-boxed elementor-section-height-default elementor-section-height-default" data-id="876olvm" data-element_type="section" id="contato" data-settings="{&quot;background_background&quot;:&quot;classic&quot;}">
							<div class="elementor-background-overlay"></div>
							<div class="elementor-container elementor-column-gap-default">
					<div class="has_eae_slider elementor-column elementor-col-66 elementor-top-column elementor-element elementor-element-6118036" data-id="6118036" data-element_type="column">
			<div class="elementor-widget-wrap elementor-element-populated">
						<div class="elementor-element elementor-element-2fbe942 elementor-widget-divider--view-line_text elementor-widget-divider--element-align-left elementor-widget elementor-widget-divider" data-id="2fbe942" data-element_type="widget" data-widget_type="divider.default">
				<div class="elementor-widget-container">
					<div class="elementor-divider">
			<span class="elementor-divider-separator">
							<span class="elementor-divider__text elementor-divider__element">
				COMO CHEGAR ATÉ A CLÍNICA?				</span>
						</span>
		</div>
				</div>
				</div>
				<div class="elementor-element elementor-element-f922533 elementor-widget elementor-widget-google_maps" data-id="f922533" data-element_type="widget" data-widget_type="google_maps.default">
				<div class="elementor-widget-container">
					<div class="elementor-custom-embed">
			<iframe loading="lazy"
					src="about:blank"
					title="Al. Dr. Muricy, 542 - Sala 701 - Centro, Curitiba - PR, 80010-120"
					aria-label="Al. Dr. Muricy, 542 - Sala 701 - Centro, Curitiba - PR, 80010-120"
			 data-rocket-lazyload="fitvidscompatible" data-lazy-src="https://maps.google.com/maps?q=Al.%20Dr.%20Muricy%2C%20542%20-%20Sala%20701%20-%20Centro%2C%20Curitiba%20-%20PR%2C%2080010-120&#038;t=m&#038;z=10&#038;output=embed&#038;iwloc=near"></iframe><noscript><iframe loading="lazy"
					src="https://maps.google.com/maps?q=Al.%20Dr.%20Muricy%2C%20542%20-%20Sala%20701%20-%20Centro%2C%20Curitiba%20-%20PR%2C%2080010-120&#038;t=m&#038;z=10&#038;output=embed&#038;iwloc=near"
					title="Al. Dr. Muricy, 542 - Sala 701 - Centro, Curitiba - PR, 80010-120"
					aria-label="Al. Dr. Muricy, 542 - Sala 701 - Centro, Curitiba - PR, 80010-120"
			></iframe></noscript>
		</div>
				</div>
				</div>
				<div class="elementor-element elementor-element-486a7ab elementor-align-left elementor-icon-list--layout-traditional elementor-list-item-link-full_width elementor-widget elementor-widget-icon-list" data-id="486a7ab" data-element_type="widget" data-widget_type="icon-list.default">
				<div class="elementor-widget-container">
					<ul class="elementor-icon-list-items">
							<li class="elementor-icon-list-item">
											<span class="elementor-icon-list-icon">
							<i aria-hidden="true" class="fas fa-map-marker-alt"></i>						</span>
										<span class="elementor-icon-list-text">Al. Dr. Muricy, 542 - Sala 701 - Centro, Curitiba - PR, 80010-120</span>
									</li>
								<li class="elementor-icon-list-item">
											<a href="https://web.whatsapp.com/send?phone=+5541984020065">

												<span class="elementor-icon-list-icon">
							<i aria-hidden="true" class="fab fa-whatsapp-square"></i>						</span>
										<span class="elementor-icon-list-text">(41) 98402-0065</span>
											</a>
									</li>
								<li class="elementor-icon-list-item">
											<span class="elementor-icon-list-icon">
							<i aria-hidden="true" class="fas fa-envelope-square"></i>						</span>
										<span class="elementor-icon-list-text">contato@clinicahumanite.com.br​</span>
									</li>
						</ul>
				</div>
				</div>
					</div>
		</div>
				<div class="has_eae_slider elementor-column elementor-col-33 elementor-top-column elementor-element elementor-element-d58987b" data-id="d58987b" data-element_type="column" data-settings="{&quot;background_background&quot;:&quot;classic&quot;}">
			<div class="elementor-widget-wrap elementor-element-populated">
						<div class="elementor-element elementor-element-14e88f0 elementor-widget elementor-widget-heading" data-id="14e88f0" data-element_type="widget" data-widget_type="heading.default">
				<div class="elementor-widget-container">
			<h3 class="elementor-heading-title elementor-size-default">Entre em contato</h3>		</div>
				</div>
				<div class="elementor-element elementor-element-8d439e9 elementor-widget elementor-widget-shortcode" data-id="8d439e9" data-element_type="widget" data-widget_type="shortcode.default">
				<div class="elementor-widget-container">
					<div class="elementor-shortcode"><div class="wpforms-container " id="wpforms-251"><form id="wpforms-form-251" class="wpforms-validate wpforms-form" data-formid="251" method="post" enctype="multipart/form-data" action="/" data-token="087c1fc9ec79d4d855813cce07a1bd5d" data-token-time="1735663007"><noscript class="wpforms-error-noscript">Ative o JavaScript no seu navegador para preencher este formulário.</noscript><div class="wpforms-field-container"><div id="wpforms-251-field_0-container" class="wpforms-field wpforms-field-name" data-field-id="0"><label class="wpforms-field-label wpforms-label-hide" for="wpforms-251-field_0">Nome <span class="wpforms-required-label">*</span></label><input type="text" id="wpforms-251-field_0" class="wpforms-field-large wpforms-field-required" name="wpforms[fields][0]" placeholder="Nome" required></div><div id="wpforms-251-field_1-container" class="wpforms-field wpforms-field-email" data-field-id="1"><label class="wpforms-field-label wpforms-label-hide" for="wpforms-251-field_1">Email <span class="wpforms-required-label">*</span></label><input type="email" id="wpforms-251-field_1" class="wpforms-field-large wpforms-field-required" name="wpforms[fields][1]" placeholder="Email" spellcheck="false" required></div><div id="wpforms-251-field_3-container" class="wpforms-field wpforms-field-text" data-field-id="3"><label class="wpforms-field-label wpforms-label-hide" for="wpforms-251-field_3">Assunto <span class="wpforms-required-label">*</span></label><input type="text" id="wpforms-251-field_3" class="wpforms-field-large wpforms-field-required" name="wpforms[fields][3]" placeholder="Assunto" required></div><div id="wpforms-251-field_2-container" class="wpforms-field wpforms-field-textarea" data-field-id="2"><label class="wpforms-field-label wpforms-label-hide" for="wpforms-251-field_2">Mensagem <span class="wpforms-required-label">*</span></label><textarea id="wpforms-251-field_2" class="wpforms-field-medium wpforms-field-required" name="wpforms[fields][2]" placeholder="Mensagem" required></textarea></div></div><!-- .wpforms-field-container --><div class="wpforms-field wpforms-field-hp"><label for="wpforms-251-field-hp" class="wpforms-field-label">Comment</label><input type="text" name="wpforms[hp]" id="wpforms-251-field-hp" class="wpforms-field-medium"></div><div class="wpforms-recaptcha-container wpforms-is-recaptcha wpforms-is-recaptcha-type-v2" ><div class="g-recaptcha" data-sitekey="6LdTphQkAAAAAIvkQXBwT0iK79yCK4fkuSWPDLyX"></div><input type="text" name="g-recaptcha-hidden" class="wpforms-recaptcha-hidden" style="position:absolute!important;clip:rect(0,0,0,0)!important;height:1px!important;width:1px!important;border:0!important;overflow:hidden!important;padding:0!important;margin:0!important;" data-rule-recaptcha="1"></div><div class="wpforms-submit-container" ><input type="hidden" name="wpforms[id]" value="251"><input type="hidden" name="page_title" value="Home"><input type="hidden" name="page_url" value="https://clinicahumanite.com.br/"><input type="hidden" name="page_id" value="26936"><input type="hidden" name="wpforms[post_id]" value="26936"><button type="submit" name="wpforms[submit]" id="wpforms-submit-251" class="wpforms-submit" data-alt-text="Aguarde...." data-submit-text="Enviar" aria-live="assertive" value="wpforms-submit">Enviar</button></div></form></div>  <!-- .wpforms-container -->	</div>
				</div>
				</div>
					</div>
		</div>
					</div>
		</section>
				<section class="has_eae_slider elementor-section elementor-top-section elementor-element elementor-element-49595939 elementor-section-boxed elementor-section-height-default elementor-section-height-default" data-id="49595939" data-element_type="section" id="xs_footer_13">
						<div class="elementor-container elementor-column-gap-default">
					<div class="has_eae_slider elementor-column elementor-col-33 elementor-top-column elementor-element elementor-element-1b5b4276" data-id="1b5b4276" data-element_type="column">
			<div class="elementor-widget-wrap elementor-element-populated">
						<div class="elementor-element elementor-element-7b045c7f elementor-widget elementor-widget-image" data-id="7b045c7f" data-element_type="widget" data-widget_type="image.default">
				<div class="elementor-widget-container">
													<img loading="lazy" decoding="async" width="1548" height="856" src="https://clinicahumanite.com.br/wp-content/uploads/2023/02/240866_1c7a7d68074543cd9268765f5e2753f0.png" class="attachment-full size-full wp-image-27037" alt="humanite" srcset="https://clinicahumanite.com.br/wp-content/uploads/2023/02/240866_1c7a7d68074543cd9268765f5e2753f0.png 1548w, https://clinicahumanite.com.br/wp-content/uploads/2023/02/240866_1c7a7d68074543cd9268765f5e2753f0-300x166.png 300w, https://clinicahumanite.com.br/wp-content/uploads/2023/02/240866_1c7a7d68074543cd9268765f5e2753f0-1024x566.png 1024w, https://clinicahumanite.com.br/wp-content/uploads/2023/02/240866_1c7a7d68074543cd9268765f5e2753f0-768x425.png 768w, https://clinicahumanite.com.br/wp-content/uploads/2023/02/240866_1c7a7d68074543cd9268765f5e2753f0-1536x849.png 1536w" sizes="(max-width: 1548px) 100vw, 1548px" />													</div>
				</div>
				<div class="elementor-element elementor-element-5e21145 elementor-widget elementor-widget-heading" data-id="5e21145" data-element_type="widget" data-widget_type="heading.default">
				<div class="elementor-widget-container">
			<h3 class="elementor-heading-title elementor-size-default">Humanité</h3>		</div>
				</div>
				<div class="elementor-element elementor-element-5f2c90b3 elementor-widget elementor-widget-text-editor" data-id="5f2c90b3" data-element_type="widget" data-widget_type="text-editor.default">
				<div class="elementor-widget-container">
							<p>A clínica é especialista em serviços de neuropsicologia em diversos campos, especialmente nos relacionados a transtornos, tais como: Autismo, TDAH, Esquizofrenia e Demências.</p>						</div>
				</div>
				<div class="elementor-element elementor-element-4f634c24 elementor-widget elementor-widget-elementskit-social-media" data-id="4f634c24" data-element_type="widget" data-widget_type="elementskit-social-media.default">
				<div class="elementor-widget-container">
			<div class="ekit-wid-con" >			 <ul class="ekit_social_media">
														<li class="elementor-repeater-item-c8596be">
					    <a
						href="https://www.instagram.com/humaniteneuropsicologia/" target="_blank" aria-label="Instagram" class="2" >
														
							<i aria-hidden="true" class="fasicon icon-instagram-2"></i>									
                                                                                                            </a>
                    </li>
                    							</ul>
		</div>		</div>
				</div>
					</div>
		</div>
				<div class="has_eae_slider elementor-column elementor-col-33 elementor-top-column elementor-element elementor-element-59560faf" data-id="59560faf" data-element_type="column">
			<div class="elementor-widget-wrap">
							</div>
		</div>
				<div class="has_eae_slider elementor-column elementor-col-33 elementor-top-column elementor-element elementor-element-6ffeab67" data-id="6ffeab67" data-element_type="column">
			<div class="elementor-widget-wrap elementor-element-populated">
						<div class="elementor-element elementor-element-2c2ed574 elementor-widget elementor-widget-heading" data-id="2c2ed574" data-element_type="widget" data-widget_type="heading.default">
				<div class="elementor-widget-container">
			<h2 class="elementor-heading-title elementor-size-default">Menu</h2>		</div>
				</div>
				<section class="has_eae_slider elementor-section elementor-inner-section elementor-element elementor-element-7e7b42ee elementor-section-boxed elementor-section-height-default elementor-section-height-default" data-id="7e7b42ee" data-element_type="section">
						<div class="elementor-container elementor-column-gap-default">
					<div class="has_eae_slider elementor-column elementor-col-100 elementor-inner-column elementor-element elementor-element-3073ff3f" data-id="3073ff3f" data-element_type="column">
			<div class="elementor-widget-wrap elementor-element-populated">
						<div class="elementor-element elementor-element-adec155 hfe-nav-menu__breakpoint-none hfe-nav-menu__align-left hfe-submenu-icon-arrow hfe-link-redirect-child elementor-widget elementor-widget-navigation-menu" data-id="adec155" data-element_type="widget" data-settings="{&quot;padding_horizontal_menu_item&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:15,&quot;sizes&quot;:[]},&quot;padding_horizontal_menu_item_tablet&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;padding_horizontal_menu_item_mobile&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;padding_vertical_menu_item&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:15,&quot;sizes&quot;:[]},&quot;padding_vertical_menu_item_tablet&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;padding_vertical_menu_item_mobile&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;menu_space_between&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;menu_space_between_tablet&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;menu_space_between_mobile&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;dropdown_border_radius&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;top&quot;:&quot;&quot;,&quot;right&quot;:&quot;&quot;,&quot;bottom&quot;:&quot;&quot;,&quot;left&quot;:&quot;&quot;,&quot;isLinked&quot;:true},&quot;dropdown_border_radius_tablet&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;top&quot;:&quot;&quot;,&quot;right&quot;:&quot;&quot;,&quot;bottom&quot;:&quot;&quot;,&quot;left&quot;:&quot;&quot;,&quot;isLinked&quot;:true},&quot;dropdown_border_radius_mobile&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;top&quot;:&quot;&quot;,&quot;right&quot;:&quot;&quot;,&quot;bottom&quot;:&quot;&quot;,&quot;left&quot;:&quot;&quot;,&quot;isLinked&quot;:true},&quot;padding_horizontal_dropdown_item&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;padding_horizontal_dropdown_item_tablet&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;padding_horizontal_dropdown_item_mobile&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;padding_vertical_dropdown_item&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:15,&quot;sizes&quot;:[]},&quot;padding_vertical_dropdown_item_tablet&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;padding_vertical_dropdown_item_mobile&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;distance_from_menu&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;distance_from_menu_tablet&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;distance_from_menu_mobile&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;toggle_size&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;toggle_size_tablet&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;toggle_size_mobile&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;toggle_border_width&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;toggle_border_width_tablet&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;toggle_border_width_mobile&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;toggle_border_radius&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;toggle_border_radius_tablet&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]},&quot;toggle_border_radius_mobile&quot;:{&quot;unit&quot;:&quot;px&quot;,&quot;size&quot;:&quot;&quot;,&quot;sizes&quot;:[]}}" data-widget_type="navigation-menu.default">
				<div class="elementor-widget-container">
						<div class="hfe-nav-menu hfe-layout-vertical hfe-nav-menu-layout vertical" data-layout="vertical">
				<div role="button" class="hfe-nav-menu__toggle elementor-clickable">
					<span class="screen-reader-text">Menu</span>
					<div class="hfe-nav-menu-icon">
											</div>
				</div>
				<nav class="hfe-nav-menu__layout-vertical hfe-nav-menu__submenu-arrow" data-toggle-icon="" data-close-icon="" data-full-width="">
					<ul id="menu-1-adec155" class="hfe-nav-menu"><li id="menu-item-25928" class="menu-item menu-item-type-custom menu-item-object-custom parent hfe-creative-menu"><a href="#home" class = "hfe-menu-item">Home</a></li>
<li id="menu-item-25931" class="menu-item menu-item-type-custom menu-item-object-custom parent hfe-creative-menu"><a href="#sobre" class = "hfe-menu-item">Quem Somos</a></li>
<li id="menu-item-25930" class="menu-item menu-item-type-custom menu-item-object-custom parent hfe-creative-menu"><a href="#procedimentos" class = "hfe-menu-item">Procedimentos</a></li>
<li id="menu-item-25939" class="menu-item menu-item-type-post_type menu-item-object-page menu-item-privacy-policy parent hfe-creative-menu"><a href="https://clinicahumanite.com.br/politica-de-privacidade/" class = "hfe-menu-item">Política de privacidade</a></li>
</ul> 
				</nav>
			</div>
					</div>
				</div>
					</div>
		</div>
					</div>
		</section>
					</div>
		</div>
					</div>
		</section>
				<section class="has_eae_slider elementor-section elementor-top-section elementor-element elementor-element-fad18eb elementor-section-full_width elementor-section-height-default elementor-section-height-default" data-id="fad18eb" data-element_type="section" data-settings="{&quot;background_background&quot;:&quot;classic&quot;}">
						<div class="elementor-container elementor-column-gap-default">
					<div class="has_eae_slider elementor-column elementor-col-50 elementor-top-column elementor-element elementor-element-47aea7e0" data-id="47aea7e0" data-element_type="column">
			<div class="elementor-widget-wrap elementor-element-populated">
						<div class="elementor-element elementor-element-619fcb43 elementor-widget elementor-widget-elementskit-heading" data-id="619fcb43" data-element_type="widget" data-widget_type="elementskit-heading.default">
				<div class="elementor-widget-container">
			<div class="ekit-wid-con" ><div class="ekit-heading elementskit-section-title-wraper text_right   ekit_heading_tablet-   ekit_heading_mobile-text_center"><p class="ekit-heading--title elementskit-section-title ">©2023. Todos os direitos reservados | Clinica Humanite</p></div></div>		</div>
				</div>
					</div>
		</div>
				<div class="has_eae_slider elementor-column elementor-col-50 elementor-top-column elementor-element elementor-element-31902b70" data-id="31902b70" data-element_type="column">
			<div class="elementor-widget-wrap elementor-element-populated">
						<div class="elementor-element elementor-element-4d295af elementor-widget elementor-widget-text-editor" data-id="4d295af" data-element_type="widget" data-widget_type="text-editor.default">
				<div class="elementor-widget-container">
							<p class="rteBlock">Desenvolvido por <a style="text-decoration:none;color:#fff;"href="https://studioslore.web.app/">studioslore</a></p>						</div>
				</div>
					</div>
		</div>
					</div>
		</section>
				</div>
		
<div class="joinchat joinchat--right joinchat--dark-auto joinchat--btn" data-settings='{"telephone":"5541984020065","mobile_only":false,"button_delay":3,"whatsapp_web":false,"qr":false,"message_views":2,"message_delay":-10,"message_badge":false,"message_send":"Olá, venho do site e gostaria de falar com atendente","message_hash":""}'>
	<div class="joinchat__button">
		<div class="joinchat__button__open"></div>
									</div>
	</div>
			<script type="rocketlazyloadscript" data-rocket-type='text/javascript'>
				const lazyloadRunObserver = () => {
					const lazyloadBackgrounds = document.querySelectorAll( `.e-con.e-parent:not(.e-lazyloaded)` );
					const lazyloadBackgroundObserver = new IntersectionObserver( ( entries ) => {
						entries.forEach( ( entry ) => {
							if ( entry.isIntersecting ) {
								let lazyloadBackground = entry.target;
								if( lazyloadBackground ) {
									lazyloadBackground.classList.add( 'e-lazyloaded' );
								}
								lazyloadBackgroundObserver.unobserve( entry.target );
							}
						});
					}, { rootMargin: '200px 0px 200px 0px' } );
					lazyloadBackgrounds.forEach( ( lazyloadBackground ) => {
						lazyloadBackgroundObserver.observe( lazyloadBackground );
					} );
				};
				const events = [
					'DOMContentLoaded',
					'elementor/lazyload/observe',
				];
				events.forEach( ( event ) => {
					document.addEventListener( event, lazyloadRunObserver );
				} );
			</script>
			<script id="astra-theme-js-js-extra">
var astra = {"break_point":"921","isRtl":"","is_scroll_to_id":"","is_scroll_to_top":""};
</script>
<script type="rocketlazyloadscript" src="https://clinicahumanite.com.br/wp-content/themes/astra/assets/js/minified/frontend.min.js?ver=4.0.2" id="astra-theme-js-js" defer></script>
<script type="rocketlazyloadscript" defer src="https://clinicahumanite.com.br/wp-content/plugins/koko-analytics/assets/dist/js/script.js?ver=1.3.10" id="koko-analytics-js"></script>
<script id="eae-main-js-extra">
var eae = {"ajaxurl":"https:\/\/clinicahumanite.com.br\/wp-admin\/admin-ajax.php","current_url":"aHR0cHM6Ly9jbGluaWNhaHVtYW5pdGUuY29tLmJyLw==","nonce":"11abe7d9d0","plugin_url":"https:\/\/clinicahumanite.com.br\/wp-content\/plugins\/addon-elements-for-elementor-page-builder\/"};
var eae_editor = {"plugin_url":"https:\/\/clinicahumanite.com.br\/wp-content\/plugins\/addon-elements-for-elementor-page-builder\/"};
</script>
<script type="rocketlazyloadscript" src="https://clinicahumanite.com.br/wp-content/plugins/addon-elements-for-elementor-page-builder/assets/js/eae.min.js?ver=1.13.6" id="eae-main-js" defer></script>
<script type="rocketlazyloadscript" src="https://clinicahumanite.com.br/wp-content/plugins/addon-elements-for-elementor-page-builder/build/index.min.js?ver=1.13.6" id="eae-index-js" defer></script>
<script type="rocketlazyloadscript" src="https://clinicahumanite.com.br/wp-content/plugins/elementor/assets/lib/font-awesome/js/v4-shims.min.js?ver=1.0" id="font-awesome-4-shim-js" defer></script>
<script type="rocketlazyloadscript" src="https://clinicahumanite.com.br/wp-content/plugins/addon-elements-for-elementor-page-builder/assets/js/animated-main.min.js?ver=1.0" id="animated-main-js" defer></script>
<script type="rocketlazyloadscript" src="https://clinicahumanite.com.br/wp-content/plugins/addon-elements-for-elementor-page-builder/assets/js/particles.min.js?ver=2.0.0" id="eae-particles-js" defer></script>
<script type="rocketlazyloadscript" src="https://clinicahumanite.com.br/wp-content/plugins/addon-elements-for-elementor-page-builder/assets/lib/magnific.min.js?ver=1.1.0" id="wts-magnific-js" defer></script>
<script type="rocketlazyloadscript" src="https://clinicahumanite.com.br/wp-content/plugins/addon-elements-for-elementor-page-builder/assets/lib/vegas/vegas.min.js?ver=2.4.0" id="vegas-js" defer></script>
<script type="rocketlazyloadscript" src="https://clinicahumanite.com.br/wp-includes/js/dist/dom-ready.min.js?ver=f77871ff7694fffea381" id="wp-dom-ready-js" defer></script>
<script id="starter-templates-zip-preview-js-extra">
var starter_templates_zip_preview = {"AstColorPaletteVarPrefix":"--ast-global-color-","AstEleColorPaletteVarPrefix":["ast-global-color-0","ast-global-color-1","ast-global-color-2","ast-global-color-3","ast-global-color-4","ast-global-color-5","ast-global-color-6","ast-global-color-7","ast-global-color-8"]};
</script>
<script type="rocketlazyloadscript" src="https://clinicahumanite.com.br/wp-content/plugins/astra-sites/inc/lib/onboarding/assets/dist/template-preview/main.js?ver=06758d4d807d9d22c6ea" id="starter-templates-zip-preview-js" defer></script>
<script type="rocketlazyloadscript" src="https://clinicahumanite.com.br/wp-content/plugins/header-footer-elementor/inc/js/frontend.js?ver=1.6.37" id="hfe-frontend-js-js" defer></script>
<script type="rocketlazyloadscript" src="https://clinicahumanite.com.br/wp-content/plugins/elementskit-lite/libs/framework/assets/js/frontend-script.js?ver=3.2.4" id="elementskit-framework-js-frontend-js" defer></script>
<script type="rocketlazyloadscript" id="elementskit-framework-js-frontend-js-after">
		var elementskit = {
			resturl: 'https://clinicahumanite.com.br/wp-json/elementskit/v1/',
		}

		
</script>
<script type="rocketlazyloadscript" src="https://clinicahumanite.com.br/wp-content/plugins/elementskit-lite/widgets/init/assets/js/widget-scripts.js?ver=3.2.4" id="ekit-widget-scripts-js" defer></script>
<script type="rocketlazyloadscript" src="https://clinicahumanite.com.br/wp-content/plugins/creame-whatsapp-me/public/js/joinchat.min.js?ver=5.1.8" id="joinchat-js" defer></script>
<script type="rocketlazyloadscript" src="https://clinicahumanite.com.br/wp-content/plugins/wp-rocket/assets/js/heartbeat.js?ver=3.12.4" id="heartbeat-js" defer></script>
<script type="rocketlazyloadscript" src="https://clinicahumanite.com.br/wp-content/plugins/elementor/assets/js/webpack.runtime.min.js?ver=3.24.7" id="elementor-webpack-runtime-js" defer></script>
<script type="rocketlazyloadscript" src="https://clinicahumanite.com.br/wp-content/plugins/elementor/assets/js/frontend-modules.min.js?ver=3.24.7" id="elementor-frontend-modules-js" defer></script>
<script type="rocketlazyloadscript" src="https://clinicahumanite.com.br/wp-includes/js/jquery/ui/core.min.js?ver=1.13.3" id="jquery-ui-core-js" defer></script>
<script type="rocketlazyloadscript" id="elementor-frontend-js-before">
var elementorFrontendConfig = {"environmentMode":{"edit":false,"wpPreview":false,"isScriptDebug":false},"i18n":{"shareOnFacebook":"Compartilhar no Facebook","shareOnTwitter":"Compartilhar no Twitter","pinIt":"Fixar","download":"Baixar","downloadImage":"Baixar imagem","fullscreen":"Tela cheia","zoom":"Zoom","share":"Compartilhar","playVideo":"Reproduzir v\u00eddeo","previous":"Anterior","next":"Pr\u00f3ximo","close":"Fechar","a11yCarouselWrapperAriaLabel":"Carrossel | Rolagem horizontal: Setas para esquerda e direita","a11yCarouselPrevSlideMessage":"Slide anterior","a11yCarouselNextSlideMessage":"Pr\u00f3ximo slide","a11yCarouselFirstSlideMessage":"Este \u00e9 o primeiro slide","a11yCarouselLastSlideMessage":"Este \u00e9 o \u00faltimo slide","a11yCarouselPaginationBulletMessage":"Ir para o slide"},"is_rtl":false,"breakpoints":{"xs":0,"sm":480,"md":768,"lg":1025,"xl":1440,"xxl":1600},"responsive":{"breakpoints":{"mobile":{"label":"Dispositivos m\u00f3veis no modo retrato","value":767,"default_value":767,"direction":"max","is_enabled":true},"mobile_extra":{"label":"Dispositivos m\u00f3veis no modo paisagem","value":880,"default_value":880,"direction":"max","is_enabled":false},"tablet":{"label":"Tablet no modo retrato","value":1024,"default_value":1024,"direction":"max","is_enabled":true},"tablet_extra":{"label":"Tablet no modo paisagem","value":1200,"default_value":1200,"direction":"max","is_enabled":false},"laptop":{"label":"Notebook","value":1366,"default_value":1366,"direction":"max","is_enabled":false},"widescreen":{"label":"Tela ampla (widescreen)","value":2400,"default_value":2400,"direction":"min","is_enabled":false}},"hasCustomBreakpoints":false},"version":"3.24.7","is_static":false,"experimentalFeatures":{"additional_custom_breakpoints":true,"container_grid":true,"e_swiper_latest":true,"e_nested_atomic_repeaters":true,"e_onboarding":true,"home_screen":true,"ai-layout":true,"landing-pages":true,"link-in-bio":true,"floating-buttons":true},"urls":{"assets":"https:\/\/clinicahumanite.com.br\/wp-content\/plugins\/elementor\/assets\/","ajaxurl":"https:\/\/clinicahumanite.com.br\/wp-admin\/admin-ajax.php","uploadUrl":"https:\/\/clinicahumanite.com.br\/wp-content\/uploads"},"nonces":{"floatingButtonsClickTracking":"ca71a618a0"},"swiperClass":"swiper","settings":{"page":[],"editorPreferences":[]},"kit":{"global_image_lightbox":"yes","active_breakpoints":["viewport_mobile","viewport_tablet"],"lightbox_enable_counter":"yes","lightbox_enable_fullscreen":"yes","lightbox_enable_zoom":"yes","lightbox_enable_share":"yes","lightbox_title_src":"title","lightbox_description_src":"description"},"post":{"id":26936,"title":"Clinica%20Humanite%20-%20Especialista%20em%20Servi%C3%A7os%20de%20Neuropsicol%C3%B3gica","excerpt":"","featuredImage":false}};
</script>
<script type="rocketlazyloadscript" src="https://clinicahumanite.com.br/wp-content/plugins/elementor/assets/js/frontend.min.js?ver=3.24.7" id="elementor-frontend-js" defer></script>
<script type="rocketlazyloadscript" src="https://clinicahumanite.com.br/wp-content/plugins/elementskit-lite/widgets/init/assets/js/animate-circle.min.js?ver=3.2.4" id="animate-circle-js" defer></script>
<script id="elementskit-elementor-js-extra">
var ekit_config = {"ajaxurl":"https:\/\/clinicahumanite.com.br\/wp-admin\/admin-ajax.php","nonce":"63109c27bd"};
</script>
<script type="rocketlazyloadscript" src="https://clinicahumanite.com.br/wp-content/plugins/elementskit-lite/widgets/init/assets/js/elementor.js?ver=3.2.4" id="elementskit-elementor-js" defer></script>
<script type="rocketlazyloadscript" src="https://clinicahumanite.com.br/wp-content/plugins/wpforms-lite/assets/lib/jquery.validate.min.js?ver=1.21.0" id="wpforms-validation-js" defer></script>
<script type="rocketlazyloadscript" src="https://clinicahumanite.com.br/wp-content/plugins/wpforms-lite/assets/lib/mailcheck.min.js?ver=1.1.2" id="wpforms-mailcheck-js" defer></script>
<script type="rocketlazyloadscript" src="https://clinicahumanite.com.br/wp-content/plugins/wpforms-lite/assets/lib/punycode.min.js?ver=1.0.0" id="wpforms-punycode-js" defer></script>
<script type="rocketlazyloadscript" src="https://clinicahumanite.com.br/wp-content/plugins/wpforms-lite/assets/js/share/utils.min.js?ver=1.9.2.3" id="wpforms-generic-utils-js" defer></script>
<script type="rocketlazyloadscript" src="https://clinicahumanite.com.br/wp-content/plugins/wpforms-lite/assets/js/frontend/wpforms.min.js?ver=1.9.2.3" id="wpforms-js" defer></script>
<script type="rocketlazyloadscript" src="https://www.google.com/recaptcha/api.js?onload=wpformsRecaptchaLoad&amp;render=explicit" id="wpforms-recaptcha-js"></script>
<script id="wpforms-recaptcha-js-after">
var wpformsDispatchEvent = function (el, ev, custom) {
				var e = document.createEvent(custom ? "CustomEvent" : "HTMLEvents");
				custom ? e.initCustomEvent(ev, true, true, false) : e.initEvent(ev, true, true);
				el.dispatchEvent(e);
			};
		var wpformsRecaptchaCallback = function (el) {
				var hdn = el.parentNode.querySelector(".wpforms-recaptcha-hidden");
				var err = el.parentNode.querySelector("#g-recaptcha-hidden-error");
				hdn.value = "1";
				wpformsDispatchEvent(hdn, "change", false);
				hdn.classList.remove("wpforms-error");
				err && hdn.parentNode.removeChild(err);
			};
		var wpformsRecaptchaLoad = function () {
					Array.prototype.forEach.call(document.querySelectorAll(".g-recaptcha"), function (el) {
						try {
							var recaptchaID = grecaptcha.render(el, {
								callback: function () {
									wpformsRecaptchaCallback(el);
								}
							});
							el.setAttribute("data-recaptcha-id", recaptchaID);
						} catch (error) {}
					});
					wpformsDispatchEvent(document, "wpformsRecaptchaLoaded", true);
				};
			
</script>
			<script type="rocketlazyloadscript">
			/(trident|msie)/i.test(navigator.userAgent)&&document.getElementById&&window.addEventListener&&window.addEventListener("hashchange",function(){var t,e=location.hash.substring(1);/^[A-z0-9_-]+$/.test(e)&&(t=document.getElementById(e))&&(/^(?:a|select|input|button|textarea)$/i.test(t.tagName)||(t.tabIndex=-1),t.focus())},!1);
			</script>
			<script type='text/javascript'>
/* <![CDATA[ */
var wpforms_settings = {"val_required":"Este campo \u00e9 obrigat\u00f3rio.","val_email":"Digite um endere\u00e7o de e-mail v\u00e1lido.","val_email_suggestion":"Voc\u00ea quis dizer {suggestion}?","val_email_suggestion_title":"Clique para aceitar esta sugest\u00e3o.","val_email_restricted":"Este endere\u00e7o de e-mail n\u00e3o \u00e9 permitido.","val_number":"Digite um n\u00famero v\u00e1lido.","val_number_positive":"Digite um n\u00famero de telefone v\u00e1lido.","val_minimum_price":"O valor inserido \u00e9 inferior ao m\u00ednimo obrigat\u00f3rio.","val_confirm":"Valores de campo n\u00e3o correspondem.","val_checklimit":"Voc\u00ea excedeu o n\u00famero de sele\u00e7\u00f5es permitidas: {#}.","val_limit_characters":"{count} de {limit} caracteres no m\u00e1ximo.","val_limit_words":"{count} do m\u00e1ximo de {limit} palavras.","val_recaptcha_fail_msg":"A verifica\u00e7\u00e3o do Google reCAPTCHA falhou. Tente novamente mais tarde.","val_turnstile_fail_msg":"Ocorreu uma falha na verifica\u00e7\u00e3o do Cloudflare\u00a0Turnstile. Tente de novo mais tarde.","val_inputmask_incomplete":"Preencha o campo no formato obrigat\u00f3rio.","uuid_cookie":"","locale":"pt","country":"","country_list_label":"Lista de pa\u00edses","wpforms_plugin_url":"https:\/\/clinicahumanite.com.br\/wp-content\/plugins\/wpforms-lite\/","gdpr":"","ajaxurl":"https:\/\/clinicahumanite.com.br\/wp-admin\/admin-ajax.php","mailcheck_enabled":"1","mailcheck_domains":[],"mailcheck_toplevel_domains":["dev"],"is_ssl":"1","currency_code":"USD","currency_thousands":",","currency_decimals":"2","currency_decimal":".","currency_symbol":"$","currency_symbol_pos":"left","val_requiredpayment":"O pagamento \u00e9 necess\u00e1rio.","val_creditcard":"Digite um n\u00famero de cart\u00e3o de cr\u00e9dito v\u00e1lido.","error_updating_token":"Erro ao atualizar o token. Tente novamente ou entre em contato com o suporte se o problema persistir.","network_error":"Erro de rede ou servidor inacess\u00edvel. Verifique sua conex\u00e3o ou tente novamente mais tarde.","token_cache_lifetime":"86400","hn_data":[]}
/* ]]> */
</script>

		<!-- Cookie Notice plugin v2.4.18 by Hu-manity.co https://hu-manity.co/ -->
		<div id="cookie-notice" role="dialog" class="cookie-notice-hidden cookie-revoke-hidden cn-position-bottom" aria-label="Cookie Notice" style="background-color: rgba(50,50,58,1);"><div class="cookie-notice-container" style="color: #fff"><span id="cn-notice-text" class="cn-text-container">Usamos cookies para garantir que oferecemos a melhor experiência em nosso site. Se você continuar a usar este site, assumiremos que você está satisfeito com ele.</span><span id="cn-notice-buttons" class="cn-buttons-container"><a href="#" id="cn-accept-cookie" data-cookie-set="accept" class="cn-set-cookie cn-button" aria-label="Aceitar" style="background-color: #1e73be">Aceitar</a></span><span id="cn-close-notice" data-cookie-set="accept" class="cn-close-icon" title="No"></span></div>
			
		</div>
		<!-- / Cookie Notice plugin --><script>window.lazyLoadOptions=[{elements_selector:"img[data-lazy-src],.rocket-lazyload,iframe[data-lazy-src]",data_src:"lazy-src",data_srcset:"lazy-srcset",data_sizes:"lazy-sizes",class_loading:"lazyloading",class_loaded:"lazyloaded",threshold:300,callback_loaded:function(element){if(element.tagName==="IFRAME"&&element.dataset.rocketLazyload=="fitvidscompatible"){if(element.classList.contains("lazyloaded")){if(typeof window.jQuery!="undefined"){if(jQuery.fn.fitVids){jQuery(element).parent().fitVids()}}}}}},{elements_selector:".rocket-lazyload",data_src:"lazy-src",data_srcset:"lazy-srcset",data_sizes:"lazy-sizes",class_loading:"lazyloading",class_loaded:"lazyloaded",threshold:300,}];window.addEventListener('LazyLoad::Initialized',function(e){var lazyLoadInstance=e.detail.instance;if(window.MutationObserver){var observer=new MutationObserver(function(mutations){var image_count=0;var iframe_count=0;var rocketlazy_count=0;mutations.forEach(function(mutation){for(var i=0;i<mutation.addedNodes.length;i++){if(typeof mutation.addedNodes[i].getElementsByTagName!=='function'){continue}
if(typeof mutation.addedNodes[i].getElementsByClassName!=='function'){continue}
images=mutation.addedNodes[i].getElementsByTagName('img');is_image=mutation.addedNodes[i].tagName=="IMG";iframes=mutation.addedNodes[i].getElementsByTagName('iframe');is_iframe=mutation.addedNodes[i].tagName=="IFRAME";rocket_lazy=mutation.addedNodes[i].getElementsByClassName('rocket-lazyload');image_count+=images.length;iframe_count+=iframes.length;rocketlazy_count+=rocket_lazy.length;if(is_image){image_count+=1}
if(is_iframe){iframe_count+=1}}});if(image_count>0||iframe_count>0||rocketlazy_count>0){lazyLoadInstance.update()}});var b=document.getElementsByTagName("body")[0];var config={childList:!0,subtree:!0};observer.observe(b,config)}},!1)</script><script data-no-minify="1" async src="https://clinicahumanite.com.br/wp-content/plugins/wp-rocket/assets/js/lazyload/17.5/lazyload.min.js"></script><script>function lazyLoadThumb(e){var t='<img data-lazy-src="https://i.ytimg.com/vi/ID/hqdefault.jpg" alt="" width="480" height="360"><noscript><img src="https://i.ytimg.com/vi/ID/hqdefault.jpg" alt="" width="480" height="360"></noscript>',a='<button class="play" aria-label="play Youtube video"></button>';return t.replace("ID",e)+a}function lazyLoadYoutubeIframe(){var e=document.createElement("iframe"),t="ID?autoplay=1";t+=0===this.parentNode.dataset.query.length?'':'&'+this.parentNode.dataset.query;e.setAttribute("src",t.replace("ID",this.parentNode.dataset.src)),e.setAttribute("frameborder","0"),e.setAttribute("allowfullscreen","1"),e.setAttribute("allow", "accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture"),this.parentNode.parentNode.replaceChild(e,this.parentNode)}document.addEventListener("DOMContentLoaded",function(){var e,t,p,a=document.getElementsByClassName("rll-youtube-player");for(t=0;t<a.length;t++)e=document.createElement("div"),e.setAttribute("data-id",a[t].dataset.id),e.setAttribute("data-query", a[t].dataset.query),e.setAttribute("data-src", a[t].dataset.src),e.innerHTML=lazyLoadThumb(a[t].dataset.id),a[t].appendChild(e),p=e.querySelector('.play'),p.onclick=lazyLoadYoutubeIframe});</script>	<script>class RocketElementorAnimation{constructor(){this.deviceMode=document.createElement("span"),this.deviceMode.id="elementor-device-mode",this.deviceMode.setAttribute("class","elementor-screen-only"),document.body.appendChild(this.deviceMode)}_detectAnimations(){let t=getComputedStyle(this.deviceMode,":after").content.replace(/"/g,"");this.animationSettingKeys=this._listAnimationSettingsKeys(t),document.querySelectorAll(".elementor-invisible[data-settings]").forEach(t=>{const e=t.getBoundingClientRect();if(e.bottom>=0&&e.top<=window.innerHeight)try{this._animateElement(t)}catch(t){}})}_animateElement(t){const e=JSON.parse(t.dataset.settings),i=e._animation_delay||e.animation_delay||0,n=e[this.animationSettingKeys.find(t=>e[t])];if("none"===n)return void t.classList.remove("elementor-invisible");t.classList.remove(n),this.currentAnimation&&t.classList.remove(this.currentAnimation),this.currentAnimation=n;let s=setTimeout(()=>{t.classList.remove("elementor-invisible"),t.classList.add("animated",n),this._removeAnimationSettings(t,e)},i);window.addEventListener("rocket-startLoading",function(){clearTimeout(s)})}_listAnimationSettingsKeys(t="mobile"){const e=[""];switch(t){case"mobile":e.unshift("_mobile");case"tablet":e.unshift("_tablet");case"desktop":e.unshift("_desktop")}const i=[];return["animation","_animation"].forEach(t=>{e.forEach(e=>{i.push(t+e)})}),i}_removeAnimationSettings(t,e){this._listAnimationSettingsKeys().forEach(t=>delete e[t]),t.dataset.settings=JSON.stringify(e)}static run(){const t=new RocketElementorAnimation;requestAnimationFrame(t._detectAnimations.bind(t))}}document.addEventListener("DOMContentLoaded",RocketElementorAnimation.run);</script><script type="text/javascript" id="perfmatters-delayed-styles-js">!function(){const e=["keydown","mousemove","wheel","touchmove","touchstart","touchend"];function t(){document.querySelectorAll("link[data-pmdelayedstyle]").forEach(function(e){e.setAttribute("href",e.getAttribute("data-pmdelayedstyle"))}),e.forEach(function(e){window.removeEventListener(e,t,{passive:!0})})}e.forEach(function(e){window.addEventListener(e,t,{passive:!0})})}();</script></body>
</html>

<!-- This website is like a Rocket, isn't it? Performance optimized by WP Rocket. Learn more: https://wp-rocket.me - Debug: cached@1735663007 -->