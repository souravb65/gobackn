<!DOCTYPE html>
<html lang="en">
<head>
  
  
  <meta http-equiv="X-UA-Compatible" content="IE=edge" />
  <meta charset="utf-8">
  <title>
  souravb65 / GoBackN 
  / source  / src / server.cpp
 &mdash; Bitbucket
</title>
  <script type="text/javascript">window.NREUM||(NREUM={}),__nr_require=function(t,e,n){function r(n){if(!e[n]){var o=e[n]={exports:{}};t[n][0].call(o.exports,function(e){var o=t[n][1][e];return r(o||e)},o,o.exports)}return e[n].exports}if("function"==typeof __nr_require)return __nr_require;for(var o=0;o<n.length;o++)r(n[o]);return r}({1:[function(t,e,n){function r(){}function o(t,e,n){return function(){return i(t,[(new Date).getTime()].concat(u(arguments)),e?null:this,n),e?void 0:this}}var i=t("handle"),a=t(2),u=t(3),c=t("ee").get("tracer"),f=NREUM;"undefined"==typeof window.newrelic&&(newrelic=f);var s=["setPageViewName","setCustomAttribute","setErrorHandler","finished","addToTrace","inlineHit"],p="api-",l=p+"ixn-";a(s,function(t,e){f[e]=o(p+e,!0,"api")}),f.addPageAction=o(p+"addPageAction",!0),e.exports=newrelic,f.interaction=function(){return(new r).get()};var d=r.prototype={createTracer:function(t,e){var n={},r=this,o="function"==typeof e;return i(l+"tracer",[Date.now(),t,n],r),function(){if(c.emit((o?"":"no-")+"fn-start",[Date.now(),r,o],n),o)try{return e.apply(this,arguments)}finally{c.emit("fn-end",[Date.now()],n)}}}};a("setName,setAttribute,save,ignore,onEnd,getContext,end,get".split(","),function(t,e){d[e]=o(l+e)}),newrelic.noticeError=function(t){"string"==typeof t&&(t=new Error(t)),i("err",[t,(new Date).getTime()])}},{}],2:[function(t,e,n){function r(t,e){var n=[],r="",i=0;for(r in t)o.call(t,r)&&(n[i]=e(r,t[r]),i+=1);return n}var o=Object.prototype.hasOwnProperty;e.exports=r},{}],3:[function(t,e,n){function r(t,e,n){e||(e=0),"undefined"==typeof n&&(n=t?t.length:0);for(var r=-1,o=n-e||0,i=Array(o<0?0:o);++r<o;)i[r]=t[e+r];return i}e.exports=r},{}],ee:[function(t,e,n){function r(){}function o(t){function e(t){return t&&t instanceof r?t:t?u(t,a,i):i()}function n(n,r,o){t&&t(n,r,o);for(var i=e(o),a=l(n),u=a.length,c=0;c<u;c++)a[c].apply(i,r);var s=f[m[n]];return s&&s.push([w,n,r,i]),i}function p(t,e){g[t]=l(t).concat(e)}function l(t){return g[t]||[]}function d(t){return s[t]=s[t]||o(n)}function v(t,e){c(t,function(t,n){e=e||"feature",m[n]=e,e in f||(f[e]=[])})}var g={},m={},w={on:p,emit:n,get:d,listeners:l,context:e,buffer:v};return w}function i(){return new r}var a="nr@context",u=t("gos"),c=t(2),f={},s={},p=e.exports=o();p.backlog=f},{}],gos:[function(t,e,n){function r(t,e,n){if(o.call(t,e))return t[e];var r=n();if(Object.defineProperty&&Object.keys)try{return Object.defineProperty(t,e,{value:r,writable:!0,enumerable:!1}),r}catch(i){}return t[e]=r,r}var o=Object.prototype.hasOwnProperty;e.exports=r},{}],handle:[function(t,e,n){function r(t,e,n,r){o.buffer([t],r),o.emit(t,e,n)}var o=t("ee").get("handle");e.exports=r,r.ee=o},{}],id:[function(t,e,n){function r(t){var e=typeof t;return!t||"object"!==e&&"function"!==e?-1:t===window?0:a(t,i,function(){return o++})}var o=1,i="nr@id",a=t("gos");e.exports=r},{}],loader:[function(t,e,n){function r(){if(!h++){var t=y.info=NREUM.info,e=s.getElementsByTagName("script")[0];if(t&&t.licenseKey&&t.applicationID&&e){c(m,function(e,n){t[e]||(t[e]=n)});var n="https"===g.split(":")[0]||t.sslForHttp;y.proto=n?"https://":"http://",u("mark",["onload",a()],null,"api");var r=s.createElement("script");r.src=y.proto+t.agent,e.parentNode.insertBefore(r,e)}}}function o(){"complete"===s.readyState&&i()}function i(){u("mark",["domContent",a()],null,"api")}function a(){return(new Date).getTime()}var u=t("handle"),c=t(2),f=window,s=f.document,p="addEventListener",l="attachEvent",d=f.XMLHttpRequest,v=d&&d.prototype;NREUM.o={ST:setTimeout,CT:clearTimeout,XHR:d,REQ:f.Request,EV:f.Event,PR:f.Promise,MO:f.MutationObserver},t(1);var g=""+location,m={beacon:"bam.nr-data.net",errorBeacon:"bam.nr-data.net",agent:"js-agent.newrelic.com/nr-974.min.js"},w=d&&v&&v[p]&&!/CriOS/.test(navigator.userAgent),y=e.exports={offset:a(),origin:g,features:{},xhrWrappable:w};s[p]?(s[p]("DOMContentLoaded",i,!1),f[p]("load",r,!1)):(s[l]("onreadystatechange",o),f[l]("onload",r)),u("mark",["firstbyte",a()],null,"api");var h=0},{}]},{},["loader"]);</script>
  


<meta id="bb-canon-url" name="bb-canon-url" content="https://bitbucket.org">

<meta name="bb-view-name" content="bitbucket.apps.repo2.views.filebrowse">
<meta name="ignore-whitespace" content="False">
<meta name="tab-size" content="None">

<meta name="application-name" content="Bitbucket">
<meta name="apple-mobile-web-app-title" content="Bitbucket">
<meta name="theme-color" content="#205081">
<meta name="msapplication-TileColor" content="#205081">
<meta name="msapplication-TileImage" content="https://d301sr5gafysq2.cloudfront.net/d2de90cfe5a1/img/logos/bitbucket/white-256.png">
<link rel="apple-touch-icon" sizes="192x192" type="image/png" href="https://d301sr5gafysq2.cloudfront.net/d2de90cfe5a1/img/bitbucket_avatar/192/bitbucket.png">
<link rel="icon" sizes="192x192" type="image/png" href="https://d301sr5gafysq2.cloudfront.net/d2de90cfe5a1/img/bitbucket_avatar/192/bitbucket.png">
<link rel="icon" sizes="16x16 32x32" type="image/x-icon" href="/favicon.ico">
<link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="Bitbucket">
  <meta name="description" content="">
  
  
    
  



  <link rel="stylesheet" href="https://d301sr5gafysq2.cloudfront.net/d2de90cfe5a1/css/entry/vendor.css" />
<link rel="stylesheet" href="https://d301sr5gafysq2.cloudfront.net/d2de90cfe5a1/css/entry/app.css" />




  
  <script src="https://d301sr5gafysq2.cloudfront.net/d2de90cfe5a1/dist/webpack/early.js"></script>
  
  
    <link href="/souravb65/gobackn/rss?token=8e86907f31a63d1c6780a573f7ea53e1" rel="alternate nofollow" type="application/rss+xml" title="RSS feed for GoBackN" />

</head>
<body class="production aui-page-sidebar aui-sidebar-expanded"
  data-static-url="https://d301sr5gafysq2.cloudfront.net/d2de90cfe5a1/"
data-base-url="https://bitbucket.org"
data-base-api-url="https://api.bitbucket.org"
data-no-avatar-image="https://d301sr5gafysq2.cloudfront.net/d2de90cfe5a1/img/default_avatar/user_blue.svg"
data-current-user="{&quot;username&quot;: &quot;souravb65&quot;, &quot;displayName&quot;: &quot;Sourav Bhattacharjee&quot;, &quot;uuid&quot;: &quot;{ab37c472-6c77-4e51-af3b-871b14c5a00e}&quot;, &quot;firstName&quot;: &quot;Sourav Bhattacharjee&quot;, &quot;avatarUrl&quot;: &quot;https://bitbucket.org/account/souravb65/avatar/32/?ts=1471953645&quot;, &quot;lastName&quot;: &quot;&quot;, &quot;isTeam&quot;: false, &quot;isSshEnabled&quot;: false, &quot;isKbdShortcutsEnabled&quot;: true, &quot;id&quot;: 7538433, &quot;isAuthenticated&quot;: true}"
data-atlassian-id="{&quot;loginStatusUrl&quot;: &quot;https://id.atlassian.com/profile/rest/profile&quot;}"
data-settings="{&quot;MENTIONS_MIN_QUERY_LENGTH&quot;: 3}"

data-current-repo="{&quot;scm&quot;: &quot;git&quot;, &quot;readOnly&quot;: false, &quot;mainbranch&quot;: {&quot;name&quot;: &quot;master&quot;}, &quot;language&quot;: &quot;&quot;, &quot;owner&quot;: {&quot;username&quot;: &quot;souravb65&quot;, &quot;isTeam&quot;: false}, &quot;fullslug&quot;: &quot;souravb65/gobackn&quot;, &quot;slug&quot;: &quot;gobackn&quot;, &quot;id&quot;: 20364820, &quot;pygmentsLanguage&quot;: null}"
data-current-cset="becf44494a1bd0a35f9b3d005acbf9042a160206"





>
<div id="page">
  <div id="wrapper">
    
  


    
      <header id="header" role="banner" data-module="header/tracking">
        
  


        <nav class="aui-header aui-dropdown2-trigger-group" role="navigation">
          <div class="aui-header-inner">
          <div class="aui-header-primary">
            
  
  <div class="aui-header-before">
    <button class="app-switcher-trigger aui-dropdown2-trigger aui-dropdown2-trigger-arrowless" aria-controls="app-switcher" aria-haspopup="true" tabindex="0"
    
        data-nav-links-count="0"
    
    >
      <span class="aui-icon aui-icon-small aui-iconfont-appswitcher">Linked applications</span>
    </button>
    
      <nav id="app-switcher" class="aui-dropdown2 aui-style-default">
        <div class="aui-dropdown2-section blank-slate">
          <h2>Connect Bitbucket with other great Atlassian products:</h2>
          <dl>
            <dt class="jira">JIRA</dt>
            <dd>Project and issue tracking</dd>
            <dt class="confluence">Confluence</dt>
            <dd>Collaboration and content sharing</dd>
            <dt class="bamboo">Bamboo</dt>
            <dd>Continuous integration</dd>
          </dl>
          <ul>
            <li>
              <a href="https://www.atlassian.com/ondemand/signup/?product=jira.ondemand,com.atlassian.bitbucket&utm_source=bitbucket&utm_medium=button&utm_campaign=app_switcher&utm_content=trial_button"
                 class="aui-button aui-button-primary" target="_blank" id="ondemand-trial" data-ct="header.app.switcher.dropdown.trial">Free trial</a>
            </li>
            <li>
              <a href="https://www.atlassian.com/software?utm_source=bitbucket&utm_medium=button&utm_campaign=app_switcher&utm_content=learn_more_button#cloud-products"
                 class="aui-button" target="_blank" id="ondemand-learn-more" data-ct="header.app.switcher.dropdown.learnmore">Learn more</a>
            </li>
          </ul>
        </div>
      </nav>
    
  </div>


            
              <h1 class="aui-header-logo aui-header-logo-bitbucket "
                  id="logo" data-ct="header.logo">
                <a href="/">
                  <span class="aui-header-logo-device">Bitbucket</span>
                </a>
              </h1>
            
            
  

    
    
  

    
    
  
<ul class="aui-nav">
  
    <li>
      
    
    
  
      <a class="aui-dropdown2-trigger" href="#teams-dropdown" id="teams-dropdown-trigger"
          data-module="header/teams-dropdown"
          aria-owns="teams-dropdown" aria-haspopup="true">
        Teams
        <span class="aui-icon-dropdown"></span>
      </a>
      <div id="teams-dropdown" class="aui-dropdown2 aui-style-default">
        <div class="aui-dropdown2-section nav-dropdown--blank-state">
          <p>
            Effective collaboration starts with teams and projects.
          </p>
          <ul>
            <li>
              <a class="aui-button aui-button-link nav-dropdown--blank-state--cta nav-dropdown--blank-state--link" id="create-team-blank-slate"
                  data-ct="header.team.dropdown.create" data-ct-data='{"empty": true}'
                  href="/account/create-team/?team_source=menu_blank"
                  >Create a team</a>
            </li>
          </ul>
        </div>
      </div>
    </li>
    <li>
      
    
    
  
      <a class="aui-dropdown2-trigger" href="#teams-dropdown" id="projects-dropdown-trigger"
          data-module="header/projects-dropdown"
          aria-owns="projects-dropdown" aria-haspopup="true">
        Projects
        <span class="aui-icon-dropdown"></span>
      </a>
      <div id="projects-dropdown" class="aui-dropdown2 aui-style-default">
        <div class="aui-dropdown2-section nav-dropdown--blank-state">
          <p>
            
              Get a team, get projects, get organized.
            
          </p>
          <ul>
            <li>
              <a class="aui-button aui-button-link nav-dropdown--blank-state--cta nav-dropdown--blank-state--link" id="projects-create-team-blank-slate"
                  href="/account/create-team/?team_source=menu_blank"
                  >Create a team</a>
            </li>
          </ul>
        </div>
      </div>
    </li>
    <li>
      <a class="aui-dropdown2-trigger" id="repositories-dropdown-trigger"
          aria-owns="repo-dropdown" aria-haspopup="true" href="/repo/mine">
        Repositories
        <span class="aui-icon-dropdown"></span>
      </a>
      <nav id="repo-dropdown" class="aui-dropdown2 aui-style-default">
        <div id="repo-dropdown-recent" data-module="header/recent-repos"></div>
        <div class="aui-dropdown2-section">
          <ul>
            <li>
              <a href="/repo/create" class="new-repository" id="create-repo-link" data-ct="header.repository.dropdown.create">
                Create repository
              </a>
            </li>
            <li>
              <a href="/repo/import" class="import-repository" id="import-repo-link" data-ct="header.repository.dropdown.import">
                Import repository
              </a>
            </li>
          </ul>
        </div>
      </nav>
    </li>
    <li>
      <a class="aui-dropdown2-trigger" id="snippets-dropdown-trigger"
        aria-owns="nav-recent-snippets" aria-haspopup="true" href="/snippets/">
        Snippets
        <span class="aui-icon-dropdown"></span>
      </a>
      <nav id="nav-recent-snippets" class="aui-dropdown2 aui-style-default">
        <div id="snippet-dropdown-recent" class="aui-dropdown2-section"
            data-module="snippets/recent-list"></div>
        <div class="aui-dropdown2-section">
          <ul>
            <li>
              <a href="/snippets/new" data-ct="header.snippets.dropdown.create">
                Create snippet
              </a>
            </li>
          </ul>
        </div>
      </nav>
    </li>
  
</ul>

          </div>
          <div class="aui-header-secondary">
            
  

<ul role="menu" class="aui-nav">
  
  <li>
    <form action="/repo/all" method="get" class="aui-quicksearch">
      <label for="search-query" class="assistive">owner/repository</label>
      <input id="search-query" class="bb-repo-typeahead" type="text"
             placeholder="Find a repository&hellip;" name="name" autocomplete="off"
             data-bb-typeahead-focus="false">
    </form>
  </li>
  <li>
    <a id="help-menu-link" class="aui-nav-link" href="#"
        aria-controls="help-menu-dialog"
        data-aui-trigger>
      <span id="help-menu-icon" class="aui-icon aui-icon-small aui-iconfont-help"></span>
    </a>
  </li>
  
  
    <li>
      <a class="aui-dropdown2-trigger aui-dropdown2-trigger-arrowless"
         aria-owns="user-dropdown" aria-haspopup="true" data-container="#header .aui-header-inner"
         href="/souravb65/" title="souravb65" id="user-dropdown-trigger">
        <div class="aui-avatar aui-avatar-small">
            <div class="aui-avatar-inner">
                <img src="https://d301sr5gafysq2.cloudfront.net/d2de90cfe5a1/img/default_avatar/user_blue.svg" class="deferred-image" data-src-url="https://bitbucket.org/account/souravb65/avatar/32/?ts=1471953645" data-src-url-2x="https://bitbucket.org/account/souravb65/avatar/64/?ts=1471953645" alt="Logged in as souravb65" height="24" width="24">
            </div>
        </div>
      </a>
      <nav id="user-dropdown" class="aui-dropdown2 aui-style-default" aria-hidden="true">
        <div class="aui-dropdown2-section">
          <div class="aid-profile">
            <div class="aui-avatar aui-avatar-large">
              <div class="aui-avatar-inner">

                
                  
                

                <a class="aid-profile--change-avatar hoverable" target="_blank" href="https://id.atlassian.com/profile/profile.action#edit-avatar">
                  <span class="hoverable--overlay">
                    <span class="aui-icon aui-icon-large aid-profile--avatar-icon"></span>
                  </span>
                  <img src="https://d301sr5gafysq2.cloudfront.net/d2de90cfe5a1/img/default_avatar/user_blue.svg" class="deferred-image" data-src-url="https://bitbucket.org/account/souravb65/avatar/48/?ts=1471953645" data-src-url-2x="https://bitbucket.org/account/souravb65/avatar/96/?ts=1471953645" height="48" width="48">
                </a>
            </div>
          </div>
          <div class="aid-profile--info">
            <div class="aid-profile--name">
              Sourav Bhattacharjee
            </div>
            <div class="aid-profile--email">
              souravb65@gmail.com
            </div>
          </div>
        </div>
          
            <ul>
              <li>
                <a href="https://id.atlassian.com/profile" id="account-link" target="_blank" data-ct="navbar.dropdown.manage_aid_account">Manage Atlassian account</a>
              </li>
            </ul>
          
        </div>
        <div class="aui-dropdown2-section">
          <ul>
            <li>
              <a href="/souravb65/" id="profile-link">View profile</a>
            </li>
            <li>
              <a href="/account/user/souravb65/" id="account-link" data-ct="navbar.dropdown.manage_account">Bitbucket settings</a>
            </li>
            <li>
              <a href="/account/user/souravb65/addon-directory" id="account-addons" data-ct="navbar.dropdown.addons">Integrations</a>
            </li>
            <li>
              <a href="/account/notifications/" id="inbox-link">Inbox</a>
            </li>
            <li>
              <a href="#general-invite" class="general-invite-link" id="general-invite-dropdown" data-module="components/general-invite">Invite a friend</a>
              
    
    
  
            </li>
          </ul>
        </div>
        <div class="aui-dropdown2-section">
          <ul>
            <li>
              
                <a href="https://id.atlassian.com/logout?continue=https%3A%2F%2Fbitbucket.org%2Faccount%2Fsignout%2F" id="log-out-link">Log out</a>
              
            </li>
          </ul>
        </div>
      </nav>
    </li>
  
</ul>

          </div>
        </div>
        </nav>
      </header>
    

    
  

<header id="account-warning" role="banner" data-module="header/account-warning"
        class="aui-message-banner warning
        ">
  <div class="aui-message-banner-inner">
    <span class="aui-icon aui-icon-warning"></span>
    <span class="message">
    
    </span>
  </div>
</header>



    
  
<header id="aui-message-bar">
  
</header>


    <div id="content" role="main">
      
      
  
    <div class="aui-sidebar repo-sidebar"
    data-module="repo/sidebar"
  >
  <div class="aui-sidebar-wrapper">
    <div class="aui-sidebar-body">
      <header class="aui-page-header">
        <div class="aui-page-header-inner">
          <div class="aui-page-header-image">
            <a href="/souravb65/gobackn" id="repo-avatar-link" class="repo-link">
              <span class="aui-avatar aui-avatar-large aui-avatar-project">
                <span class="aui-avatar-inner">
                  <img src="https://d301sr5gafysq2.cloudfront.net/d2de90cfe5a1/img/repo-avatars/default.svg" alt="">
                </span>
              </span>
            </a>
          </div>
          <div class="aui-page-header-main">
            <h1>
              
                <span class="aui-icon aui-icon-small aui-iconfont-locked"></span>
              
              <a href="/souravb65/gobackn" title="GoBackN" class="entity-name">GoBackN</a>
            </h1>
          </div>
        </div>
      </header>
      <nav class="aui-navgroup aui-navgroup-vertical">
        <div class="aui-navgroup-inner">
          
            
              <div class="aui-sidebar-group aui-sidebar-group-actions repository-actions forks-enabled can-create">
                <div class="aui-nav-heading">
                  <strong>Actions</strong>
                </div>
                <ul id="repo-actions" class="aui-nav">
                  
                  
                    <li>
                      <a id="repo-clone-button" class="aui-nav-item "
                        href="#clone"
                        data-ct="sidebar.actions.repository.clone"
                        data-ct-data=""
                        data-module="components/clone/clone-dialog"
                        target="_self">
                        
                          <span class="aui-icon aui-icon-large icon-clone"></span>
                        
                        <span class="aui-nav-item-label">Clone</span>
                      </a>
                    </li>
                  
                    <li>
                      <a id="repo-create-branch-link" class="aui-nav-item create-branch-button"
                        href="/souravb65/gobackn/branch"
                        data-ct="sidebar.actions.repository.create_branch"
                        data-ct-data=""
                        data-module="repo/create-branch"
                        target="_self">
                        
                          <span class="aui-icon aui-icon-large icon-create-branch"></span>
                        
                        <span class="aui-nav-item-label">Create branch</span>
                      </a>
                    </li>
                  
                    <li>
                      <a id="repo-create-pull-request-link" class="aui-nav-item "
                        href="/souravb65/gobackn/pull-requests/new"
                        data-ct="sidebar.actions.create_pullrequest"
                        data-ct-data=""
                        
                        target="_self">
                        
                          <span class="aui-icon aui-icon-large icon-create-pull-request"></span>
                        
                        <span class="aui-nav-item-label">Create pull request</span>
                      </a>
                    </li>
                  
                    <li>
                      <a id="repo-compare-link" class="aui-nav-item "
                        href="/souravb65/gobackn/branches/compare"
                        data-ct="sidebar.actions.repository.compare"
                        data-ct-data=""
                        
                        target="_self">
                        
                          <span class="aui-icon aui-icon-large aui-icon-small aui-iconfont-devtools-compare"></span>
                        
                        <span class="aui-nav-item-label">Compare</span>
                      </a>
                    </li>
                  
                    <li>
                      <a id="repo-fork-link" class="aui-nav-item "
                        href="/souravb65/gobackn/fork"
                        data-ct="sidebar.actions.repository.fork"
                        data-ct-data=""
                        
                        target="_self">
                        
                          <span class="aui-icon aui-icon-large icon-fork"></span>
                        
                        <span class="aui-nav-item-label">Fork</span>
                      </a>
                    </li>
                  
                </ul>
              </div>
          
          <div class="aui-sidebar-group aui-sidebar-group-tier-one repository-sections">
            <div class="aui-nav-heading">
              <strong>Navigation</strong>
            </div>
            <ul class="aui-nav">
              
              
                <li>
                  <a id="repo-overview-link" class="aui-nav-item "
                    href="/souravb65/gobackn/overview"
                    data-ct="sidebar.navigation.repository.overview"
                    data-ct-data=""
                    
                    target="_self"
                    >
                    
                    <span class="aui-icon aui-icon-large icon-overview"></span>
                    <span class="aui-nav-item-label">Overview</span>
                  </a>
                </li>
              
                <li class="aui-nav-selected">
                  <a id="repo-source-link" class="aui-nav-item "
                    href="/souravb65/gobackn/src"
                    data-ct="sidebar.navigation.repository.source"
                    data-ct-data=""
                    
                    target="_self"
                    >
                    
                    <span class="aui-icon aui-icon-large icon-source"></span>
                    <span class="aui-nav-item-label">Source</span>
                  </a>
                </li>
              
                <li>
                  <a id="repo-commits-link" class="aui-nav-item "
                    href="/souravb65/gobackn/commits/"
                    data-ct="sidebar.navigation.repository.commits"
                    data-ct-data=""
                    
                    target="_self"
                    >
                    
                    <span class="aui-icon aui-icon-large icon-commits"></span>
                    <span class="aui-nav-item-label">Commits</span>
                  </a>
                </li>
              
                <li>
                  <a id="repo-branches-link" class="aui-nav-item "
                    href="/souravb65/gobackn/branches/"
                    data-ct="sidebar.navigation.repository.branches"
                    data-ct-data=""
                    
                    target="_self"
                    >
                    
                    <span class="aui-icon aui-icon-large icon-branches"></span>
                    <span class="aui-nav-item-label">Branches</span>
                  </a>
                </li>
              
                <li>
                  <a id="repo-pullrequests-link" class="aui-nav-item "
                    href="/souravb65/gobackn/pull-requests/"
                    data-ct="sidebar.navigation.repository.pullrequests"
                    data-ct-data=""
                    
                    target="_self"
                    >
                    
                    <span class="aui-icon aui-icon-large icon-pull-requests"></span>
                    <span class="aui-nav-item-label">Pull requests</span>
                  </a>
                </li>
              
                <li>
                  <a id="repo-downloads-link" class="aui-nav-item "
                    href="/souravb65/gobackn/downloads"
                    data-ct="sidebar.navigation.repository.downloads"
                    data-ct-data=""
                    
                    target="_self"
                    >
                    
                    <span class="aui-icon aui-icon-large icon-downloads"></span>
                    <span class="aui-nav-item-label">Downloads</span>
                  </a>
                </li>
              
            </ul>
          </div>
          <div class="aui-sidebar-group aui-sidebar-group-tier-one repository-settings">
            <div class="aui-nav-heading">
              <strong class="assistive">Settings</strong>
            </div>
            <ul class="aui-nav">
              
              
                <li>
                  <a id="repo-settings-link" class="aui-nav-item "
                    href="/souravb65/gobackn/admin"
                    
                    target="_self"
                    >
                    
                    <span class="aui-icon aui-icon-large icon-settings"></span>
                    <span class="aui-nav-item-label">Settings</span>
                  </a>
                </li>
              
            </ul>
          </div>
          
        </div>
      </nav>
    </div>
    <div class="aui-sidebar-footer">
      <a class="aui-sidebar-toggle aui-sidebar-footer-tipsy aui-button aui-button-subtle"><span class="aui-icon"></span></a>
    </div>
  </div>
  <div id="repo-clone-dialog" class="clone-dialog hidden">
  
  
  <div class="clone-url" data-module="components/clone/url-dropdown">
  <div class="aui-buttons">
    <a href="https://souravb65@bitbucket.org/souravb65/gobackn.git"
      class="aui-button aui-dropdown2-trigger" aria-haspopup="true"
      aria-owns="clone-url-dropdown-header">
      <span class="dropdown-text">HTTPS</span>
    </a>
    <div id="clone-url-dropdown-header"
        class="clone-url-dropdown aui-dropdown2 aui-style-default"
        data-aui-alignment="bottom left">
      <ul class="aui-list-truncate">
        <li>
          <a href="https://souravb65@bitbucket.org/souravb65/gobackn.git"
            
              data-command="git clone https://souravb65@bitbucket.org/souravb65/gobackn.git"
            
            class="item-link https">HTTPS
          </a>
        </li>
        <li>
          <a href="ssh://git@bitbucket.org/souravb65/gobackn.git"
            
              data-command="git clone git@bitbucket.org:souravb65/gobackn.git"
            
            class="item-link ssh">SSH
          </a>
        </li>
      </ul>
    </div>
    <input type="text" readonly="readonly" class="clone-url-input"
      value="git clone https://souravb65@bitbucket.org/souravb65/gobackn.git">
  </div>
  
  <p>Need help cloning? Learn how to
       <a href="https://confluence.atlassian.com/x/4whODQ" target="_blank">clone a repository</a>.</p>
  
</div>
  
  <div class="sourcetree-callout clone-in-sourcetree"
  data-module="components/clone/clone-in-sourcetree"
  data-https-url="https://souravb65@bitbucket.org/souravb65/gobackn.git"
  data-ssh-url="ssh://git@bitbucket.org/souravb65/gobackn.git">

  <div>
    <button class="aui-button aui-button-primary">
      
        Clone in SourceTree
      
    </button>
  </div>

  <p class="windows-text">
    
      <a href="http://www.sourcetreeapp.com/?utm_source=internal&amp;utm_medium=link&amp;utm_campaign=clone_repo_win" target="_blank">Atlassian SourceTree</a>
      is a free Git and Mercurial client for Windows.
    
  </p>
  <p class="mac-text">
    
      <a href="http://www.sourcetreeapp.com/?utm_source=internal&amp;utm_medium=link&amp;utm_campaign=clone_repo_mac" target="_blank">Atlassian SourceTree</a>
      is a free Git and Mercurial client for Mac.
    
  </p>
</div>
</div>
</div>
  

      
  <div class="aui-page-panel ">
    
  
  
    <div class="aui-page-panel-inner">
      <div id="repo-content" class="aui-page-panel-content"
          data-module="repo/index"
          
          >
        
          
            <ol class="aui-nav aui-nav-breadcrumbs">
  <li>
    <a href="/souravb65/">Sourav Bhattacharjee</a>
  </li>
  
  <li>
    <a href="/souravb65/gobackn">GoBackN</a>
  </li>
</ol>
          
        
        
          <div class="aui-group repo-page-header">
            <div class="aui-item section-title">
              <h1>Source</h1>
            </div>
            <div class="aui-item page-actions">
              
            </div>
          </div>
        
        
  <div id="source-container" class="maskable" data-module="repo/source/index">
    



<header id="source-path">
  <div class="labels labels-csv">
    
      <div class="aui-buttons">
        <button data-branches-tags-url="/api/1.0/repositories/souravb65/gobackn/branches-tags"
                data-module="components/branch-dialog"
                class="aui-button branch-dialog-trigger" title="master">
          
            
              <span class="aui-icon aui-icon-small aui-iconfont-devtools-branch">Branch</span>
            
            <span class="name">master</span>
          
          <span class="aui-icon-dropdown"></span>
        </button>
        <button class="aui-button" id="checkout-branch-button"
                title="Check out this branch">
          <span class="aui-icon aui-icon-small aui-iconfont-devtools-clone">Check out branch</span>
          <span class="aui-icon-dropdown"></span>
        </button>
      </div>
      
    
    
  
    
  </div>
  <div class="secondary-actions">
    <div class="aui-buttons">
      
        <a href="/souravb65/gobackn/src/becf44494a1b/src/server.cpp?at=master"
           class="aui-button pjax-trigger" aria-pressed="true">
          Source
        </a>
        <a href="/souravb65/gobackn/diff/src/server.cpp?diff2=becf44494a1b&at=master"
           class="aui-button pjax-trigger"
           title="Diff to previous change">
          Diff
        </a>
        <a href="/souravb65/gobackn/history-node/becf44494a1b/src/server.cpp?at=master"
           class="aui-button pjax-trigger">
          History
        </a>
      
    </div>
  </div>
  <h1>
    
      
        <a href="/souravb65/gobackn/src/becf44494a1b?at=master"
          class="pjax-trigger root" title="souravb65/gobackn at becf44494a1b">GoBackN</a> /
      
      
        
          
            <a href="/souravb65/gobackn/src/becf44494a1b/src/?at=master"
              class="pjax-trigger directory-name">src</a> /
          
        
      
        
          
            <span class="file-name">server.cpp</span>
          
        
      
    
  </h1>
  
    
    
  
  <div class="clearfix"></div>
</header>


  
    
  

  <div id="editor-container" class="maskable"
       data-module="repo/source/editor"
       data-owner="souravb65"
       data-slug="gobackn"
       data-is-writer="true"
       data-has-push-access="true"
       data-hash="becf44494a1bd0a35f9b3d005acbf9042a160206"
       data-branch="master"
       data-path="src/server.cpp"
       data-source-url="/api/internal/repositories/souravb65/gobackn/src/becf44494a1bd0a35f9b3d005acbf9042a160206/src/server.cpp">
    <div id="source-view" class="file-source-container" data-module="repo/source/view-file" data-is-lfs="false">
      <div class="toolbar">
        <div class="primary">
          <div class="aui-buttons">
            
              <button id="file-history-trigger" class="aui-button aui-button-light changeset-info"
                      data-changeset="becf44494a1bd0a35f9b3d005acbf9042a160206"
                      data-path="src/server.cpp"
                      data-current="becf44494a1bd0a35f9b3d005acbf9042a160206">
                 

  <div class="aui-avatar aui-avatar-xsmall">
    <div class="aui-avatar-inner">
      <img src="https://bitbucket.org/account/souravb65/avatar/16/?ts=1471953645">
    </div>
  </div>
  <span class="changeset-hash">becf444</span>
  <time datetime="2016-08-23T20:14:21+00:00" class="timestamp"></time>
  <span class="aui-icon-dropdown"></span>

              </button>
            
          </div>
          
          <a href="/souravb65/gobackn/full-commit/becf44494a1b/src/server.cpp" id="full-commit-link"
             title="View full commit becf444">Full commit</a>
        </div>
        <div class="secondary">
          
          <div class="aui-buttons">
            
              <a href="/souravb65/gobackn/annotate/becf44494a1bd0a35f9b3d005acbf9042a160206/src/server.cpp?at=master"
                 class="aui-button aui-button-light pjax-trigger">Blame</a>
              
            
            <a href="/souravb65/gobackn/raw/becf44494a1bd0a35f9b3d005acbf9042a160206/src/server.cpp" class="aui-button aui-button-light">Raw</a>
          </div>
          
            <div class="aui-buttons">
              
              <button id="file-edit-button" class="edit-button aui-button aui-button-light aui-button-split-main"
                  >
                Edit
                
              </button>
              <button id="file-more-actions-button" class="aui-button aui-button-light aui-dropdown2-trigger aui-button-split-more" aria-owns="split-container-dropdown" aria-haspopup="true"
                  >
                More file actions
              </button>
            </div>
            <div id="split-container-dropdown" class="aui-dropdown2 aui-style-default" data-container="#editor-container">
              <ul class="aui-list-truncate">
                <li><a href="#" data-module="repo/source/rename-file" class="rename-link">Rename</a></li>
                <li><a href="#" data-module="repo/source/delete-file" class="delete-link">Delete</a></li>
              </ul>
            </div>
          
        </div>

        <div id="fileview-dropdown"
            class="aui-dropdown2 aui-style-default"
            data-fileview-container="#fileview-container"
            
            
            data-fileview-button="#fileview-trigger"
            data-module="connect/fileview">
          <div class="aui-dropdown2-section">
            <ul>
              <li>
                <a class="aui-dropdown2-radio aui-dropdown2-checked"
                    data-fileview-id="-1"
                    data-fileview-loaded="true"
                    data-fileview-target="#fileview-original"
                    data-fileview-connection-key=""
                    data-fileview-module-key="file-view-default">
                  Default File Viewer
                </a>
              </li>
              
            </ul>
          </div>
        </div>

        <div class="clearfix"></div>
      </div>
      <div id="fileview-container">
        <div id="fileview-original"
            class="fileview"
            data-module="repo/source/highlight-lines"
            data-fileview-loaded="true">
          


  
    <div class="file-source">
      <table class="codehilite highlighttable"><tr><td class="linenos"><div class="linenodiv"><pre><a href="#server.cpp-1">  1</a>
<a href="#server.cpp-2">  2</a>
<a href="#server.cpp-3">  3</a>
<a href="#server.cpp-4">  4</a>
<a href="#server.cpp-5">  5</a>
<a href="#server.cpp-6">  6</a>
<a href="#server.cpp-7">  7</a>
<a href="#server.cpp-8">  8</a>
<a href="#server.cpp-9">  9</a>
<a href="#server.cpp-10"> 10</a>
<a href="#server.cpp-11"> 11</a>
<a href="#server.cpp-12"> 12</a>
<a href="#server.cpp-13"> 13</a>
<a href="#server.cpp-14"> 14</a>
<a href="#server.cpp-15"> 15</a>
<a href="#server.cpp-16"> 16</a>
<a href="#server.cpp-17"> 17</a>
<a href="#server.cpp-18"> 18</a>
<a href="#server.cpp-19"> 19</a>
<a href="#server.cpp-20"> 20</a>
<a href="#server.cpp-21"> 21</a>
<a href="#server.cpp-22"> 22</a>
<a href="#server.cpp-23"> 23</a>
<a href="#server.cpp-24"> 24</a>
<a href="#server.cpp-25"> 25</a>
<a href="#server.cpp-26"> 26</a>
<a href="#server.cpp-27"> 27</a>
<a href="#server.cpp-28"> 28</a>
<a href="#server.cpp-29"> 29</a>
<a href="#server.cpp-30"> 30</a>
<a href="#server.cpp-31"> 31</a>
<a href="#server.cpp-32"> 32</a>
<a href="#server.cpp-33"> 33</a>
<a href="#server.cpp-34"> 34</a>
<a href="#server.cpp-35"> 35</a>
<a href="#server.cpp-36"> 36</a>
<a href="#server.cpp-37"> 37</a>
<a href="#server.cpp-38"> 38</a>
<a href="#server.cpp-39"> 39</a>
<a href="#server.cpp-40"> 40</a>
<a href="#server.cpp-41"> 41</a>
<a href="#server.cpp-42"> 42</a>
<a href="#server.cpp-43"> 43</a>
<a href="#server.cpp-44"> 44</a>
<a href="#server.cpp-45"> 45</a>
<a href="#server.cpp-46"> 46</a>
<a href="#server.cpp-47"> 47</a>
<a href="#server.cpp-48"> 48</a>
<a href="#server.cpp-49"> 49</a>
<a href="#server.cpp-50"> 50</a>
<a href="#server.cpp-51"> 51</a>
<a href="#server.cpp-52"> 52</a>
<a href="#server.cpp-53"> 53</a>
<a href="#server.cpp-54"> 54</a>
<a href="#server.cpp-55"> 55</a>
<a href="#server.cpp-56"> 56</a>
<a href="#server.cpp-57"> 57</a>
<a href="#server.cpp-58"> 58</a>
<a href="#server.cpp-59"> 59</a>
<a href="#server.cpp-60"> 60</a>
<a href="#server.cpp-61"> 61</a>
<a href="#server.cpp-62"> 62</a>
<a href="#server.cpp-63"> 63</a>
<a href="#server.cpp-64"> 64</a>
<a href="#server.cpp-65"> 65</a>
<a href="#server.cpp-66"> 66</a>
<a href="#server.cpp-67"> 67</a>
<a href="#server.cpp-68"> 68</a>
<a href="#server.cpp-69"> 69</a>
<a href="#server.cpp-70"> 70</a>
<a href="#server.cpp-71"> 71</a>
<a href="#server.cpp-72"> 72</a>
<a href="#server.cpp-73"> 73</a>
<a href="#server.cpp-74"> 74</a>
<a href="#server.cpp-75"> 75</a>
<a href="#server.cpp-76"> 76</a>
<a href="#server.cpp-77"> 77</a>
<a href="#server.cpp-78"> 78</a>
<a href="#server.cpp-79"> 79</a>
<a href="#server.cpp-80"> 80</a>
<a href="#server.cpp-81"> 81</a>
<a href="#server.cpp-82"> 82</a>
<a href="#server.cpp-83"> 83</a>
<a href="#server.cpp-84"> 84</a>
<a href="#server.cpp-85"> 85</a>
<a href="#server.cpp-86"> 86</a>
<a href="#server.cpp-87"> 87</a>
<a href="#server.cpp-88"> 88</a>
<a href="#server.cpp-89"> 89</a>
<a href="#server.cpp-90"> 90</a>
<a href="#server.cpp-91"> 91</a>
<a href="#server.cpp-92"> 92</a>
<a href="#server.cpp-93"> 93</a>
<a href="#server.cpp-94"> 94</a>
<a href="#server.cpp-95"> 95</a>
<a href="#server.cpp-96"> 96</a>
<a href="#server.cpp-97"> 97</a>
<a href="#server.cpp-98"> 98</a>
<a href="#server.cpp-99"> 99</a>
<a href="#server.cpp-100">100</a>
<a href="#server.cpp-101">101</a>
<a href="#server.cpp-102">102</a>
<a href="#server.cpp-103">103</a>
<a href="#server.cpp-104">104</a>
<a href="#server.cpp-105">105</a>
<a href="#server.cpp-106">106</a>
<a href="#server.cpp-107">107</a>
<a href="#server.cpp-108">108</a>
<a href="#server.cpp-109">109</a>
<a href="#server.cpp-110">110</a>
<a href="#server.cpp-111">111</a>
<a href="#server.cpp-112">112</a>
<a href="#server.cpp-113">113</a>
<a href="#server.cpp-114">114</a>
<a href="#server.cpp-115">115</a>
<a href="#server.cpp-116">116</a>
<a href="#server.cpp-117">117</a>
<a href="#server.cpp-118">118</a>
<a href="#server.cpp-119">119</a>
<a href="#server.cpp-120">120</a>
<a href="#server.cpp-121">121</a>
<a href="#server.cpp-122">122</a>
<a href="#server.cpp-123">123</a>
<a href="#server.cpp-124">124</a>
<a href="#server.cpp-125">125</a>
<a href="#server.cpp-126">126</a>
<a href="#server.cpp-127">127</a>
<a href="#server.cpp-128">128</a>
<a href="#server.cpp-129">129</a>
<a href="#server.cpp-130">130</a>
<a href="#server.cpp-131">131</a>
<a href="#server.cpp-132">132</a>
<a href="#server.cpp-133">133</a>
<a href="#server.cpp-134">134</a>
<a href="#server.cpp-135">135</a>
<a href="#server.cpp-136">136</a>
<a href="#server.cpp-137">137</a>
<a href="#server.cpp-138">138</a>
<a href="#server.cpp-139">139</a>
<a href="#server.cpp-140">140</a>
<a href="#server.cpp-141">141</a>
<a href="#server.cpp-142">142</a>
<a href="#server.cpp-143">143</a>
<a href="#server.cpp-144">144</a>
<a href="#server.cpp-145">145</a>
<a href="#server.cpp-146">146</a>
<a href="#server.cpp-147">147</a>
<a href="#server.cpp-148">148</a>
<a href="#server.cpp-149">149</a>
<a href="#server.cpp-150">150</a>
<a href="#server.cpp-151">151</a>
<a href="#server.cpp-152">152</a>
<a href="#server.cpp-153">153</a>
<a href="#server.cpp-154">154</a>
<a href="#server.cpp-155">155</a>
<a href="#server.cpp-156">156</a>
<a href="#server.cpp-157">157</a>
<a href="#server.cpp-158">158</a>
<a href="#server.cpp-159">159</a>
<a href="#server.cpp-160">160</a>
<a href="#server.cpp-161">161</a>
<a href="#server.cpp-162">162</a>
<a href="#server.cpp-163">163</a>
<a href="#server.cpp-164">164</a>
<a href="#server.cpp-165">165</a>
<a href="#server.cpp-166">166</a>
<a href="#server.cpp-167">167</a>
<a href="#server.cpp-168">168</a>
<a href="#server.cpp-169">169</a>
<a href="#server.cpp-170">170</a>
<a href="#server.cpp-171">171</a>
<a href="#server.cpp-172">172</a>
<a href="#server.cpp-173">173</a>
<a href="#server.cpp-174">174</a>
<a href="#server.cpp-175">175</a>
<a href="#server.cpp-176">176</a>
<a href="#server.cpp-177">177</a>
<a href="#server.cpp-178">178</a>
<a href="#server.cpp-179">179</a>
<a href="#server.cpp-180">180</a>
<a href="#server.cpp-181">181</a>
<a href="#server.cpp-182">182</a>
<a href="#server.cpp-183">183</a>
<a href="#server.cpp-184">184</a>
<a href="#server.cpp-185">185</a>
<a href="#server.cpp-186">186</a>
<a href="#server.cpp-187">187</a>
<a href="#server.cpp-188">188</a>
<a href="#server.cpp-189">189</a>
<a href="#server.cpp-190">190</a>
<a href="#server.cpp-191">191</a>
<a href="#server.cpp-192">192</a>
<a href="#server.cpp-193">193</a>
<a href="#server.cpp-194">194</a>
<a href="#server.cpp-195">195</a>
<a href="#server.cpp-196">196</a>
<a href="#server.cpp-197">197</a>
<a href="#server.cpp-198">198</a>
<a href="#server.cpp-199">199</a>
<a href="#server.cpp-200">200</a>
<a href="#server.cpp-201">201</a>
<a href="#server.cpp-202">202</a>
<a href="#server.cpp-203">203</a>
<a href="#server.cpp-204">204</a>
<a href="#server.cpp-205">205</a>
<a href="#server.cpp-206">206</a>
<a href="#server.cpp-207">207</a>
<a href="#server.cpp-208">208</a>
<a href="#server.cpp-209">209</a>
<a href="#server.cpp-210">210</a>
<a href="#server.cpp-211">211</a>
<a href="#server.cpp-212">212</a>
<a href="#server.cpp-213">213</a>
<a href="#server.cpp-214">214</a>
<a href="#server.cpp-215">215</a>
<a href="#server.cpp-216">216</a>
<a href="#server.cpp-217">217</a>
<a href="#server.cpp-218">218</a></pre></div></td><td class="code"><div class="codehilite highlight"><pre><span></span><a name="server.cpp-1"></a><span class="cm">/* Creates a datagram server.  The port </span>
<a name="server.cpp-2"></a><span class="cm">   number is passed as an argument.  This</span>
<a name="server.cpp-3"></a><span class="cm">   server runs forever */</span>
<a name="server.cpp-4"></a><span class="cp">#include</span> <span class="cpf">&lt;stdio.h&gt;</span><span class="cp"></span>
<a name="server.cpp-5"></a><span class="cp">#include</span> <span class="cpf">&lt;stdlib.h&gt;</span><span class="cp"></span>
<a name="server.cpp-6"></a><span class="cp">#include</span> <span class="cpf">&lt;unistd.h&gt;</span><span class="cp"></span>
<a name="server.cpp-7"></a><span class="cp">#include</span> <span class="cpf">&lt;string.h&gt;</span><span class="cp"></span>
<a name="server.cpp-8"></a><span class="cp">#include</span> <span class="cpf">&lt;sys/types.h&gt;</span><span class="cp"></span>
<a name="server.cpp-9"></a><span class="cp">#include</span> <span class="cpf">&lt;sys/socket.h&gt;</span><span class="cp"></span>
<a name="server.cpp-10"></a><span class="cp">#include</span> <span class="cpf">&lt;netinet/in.h&gt;</span><span class="cp"></span>
<a name="server.cpp-11"></a><span class="cp">#include</span> <span class="cpf">&lt;netdb.h&gt;</span><span class="cp"></span>
<a name="server.cpp-12"></a><span class="cp">#include</span> <span class="cpf">&lt;errno.h&gt;      /* for errno and EINTR */</span><span class="cp"></span>
<a name="server.cpp-13"></a><span class="cp">#include</span> <span class="cpf">&lt;iostream&gt;</span><span class="cp"></span>
<a name="server.cpp-14"></a><span class="cp">#include</span> <span class="cpf">&lt;pthread.h&gt;</span><span class="cp"></span>
<a name="server.cpp-15"></a><span class="cp">#include</span> <span class="cpf">&lt;cstdlib&gt;</span><span class="cp"></span>
<a name="server.cpp-16"></a><span class="cp">#include</span> <span class="cpf">&lt;ev.h&gt;</span><span class="cp"></span>
<a name="server.cpp-17"></a><span class="cp">#include</span> <span class="cpf">&lt;fstream&gt;</span><span class="cp"></span>
<a name="server.cpp-18"></a><span class="cp">#include</span> <span class="cpf">&lt;algorithm&gt;</span><span class="cp"></span>
<a name="server.cpp-19"></a><span class="cp">#include</span> <span class="cpf">&lt;vector&gt;</span><span class="cp"></span>
<a name="server.cpp-20"></a>
<a name="server.cpp-21"></a>
<a name="server.cpp-22"></a>
<a name="server.cpp-23"></a><span class="cp">#define TIMEOUT_SECS 3</span>
<a name="server.cpp-24"></a><span class="cp">#define MAX_RESEND 10</span>
<a name="server.cpp-25"></a><span class="cp">#define NUM_THREADS 2</span>
<a name="server.cpp-26"></a>
<a name="server.cpp-27"></a>
<a name="server.cpp-28"></a><span class="k">using</span> <span class="k">namespace</span> <span class="n">std</span><span class="p">;</span>
<a name="server.cpp-29"></a>
<a name="server.cpp-30"></a><span class="cm">/* Global variables */</span>
<a name="server.cpp-31"></a>
<a name="server.cpp-32"></a><span class="kt">int</span> <span class="n">tries</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>
<a name="server.cpp-33"></a><span class="kt">int</span> <span class="n">base</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>
<a name="server.cpp-34"></a><span class="kt">int</span> <span class="n">windowSize</span> <span class="o">=</span> <span class="mi">7</span><span class="p">;</span>
<a name="server.cpp-35"></a><span class="kt">int</span> <span class="n">sendflag</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span>
<a name="server.cpp-36"></a><span class="kt">int</span> <span class="n">nPackets</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>   <span class="c1">//Number of packets to be send</span>
<a name="server.cpp-37"></a>
<a name="server.cpp-38"></a>
<a name="server.cpp-39"></a>
<a name="server.cpp-40"></a><span class="kt">void</span> <span class="nf">error</span> <span class="p">(</span><span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">errorMessage</span><span class="p">);</span>	<span class="cm">/* Error handling function */</span>
<a name="server.cpp-41"></a><span class="kt">void</span> <span class="nf">CatchAlarm</span> <span class="p">(</span><span class="kt">int</span> <span class="n">ignored</span><span class="p">);</span>	<span class="cm">/* Handler for SIGALRM */</span>
<a name="server.cpp-42"></a>
<a name="server.cpp-43"></a>
<a name="server.cpp-44"></a>
<a name="server.cpp-45"></a>
<a name="server.cpp-46"></a><span class="kt">void</span> <span class="nf">CatchAlarm</span> <span class="p">(</span><span class="kt">int</span> <span class="n">ignored</span><span class="p">)</span>	<span class="cm">/* Handler for SIGALRM */</span>
<a name="server.cpp-47"></a><span class="p">{</span>
<a name="server.cpp-48"></a>  <span class="n">tries</span> <span class="o">+=</span> <span class="mi">1</span><span class="p">;</span>
<a name="server.cpp-49"></a>  <span class="n">sendflag</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span>
<a name="server.cpp-50"></a><span class="p">}</span>
<a name="server.cpp-51"></a>
<a name="server.cpp-52"></a><span class="kt">void</span> <span class="nf">error</span><span class="p">(</span><span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">errorMessage</span><span class="p">)</span>
<a name="server.cpp-53"></a><span class="p">{</span>
<a name="server.cpp-54"></a>    <span class="n">perror</span><span class="p">(</span><span class="n">errorMessage</span><span class="p">);</span>
<a name="server.cpp-55"></a>    <span class="n">exit</span><span class="p">(</span><span class="mi">1</span><span class="p">);</span>
<a name="server.cpp-56"></a><span class="p">}</span>
<a name="server.cpp-57"></a>
<a name="server.cpp-58"></a><span class="k">struct</span> <span class="n">Packet</span>
<a name="server.cpp-59"></a><span class="p">{</span>
<a name="server.cpp-60"></a> <span class="kt">int</span> <span class="n">type</span><span class="p">;</span>
<a name="server.cpp-61"></a> <span class="cm">/*</span>
<a name="server.cpp-62"></a><span class="cm">  * 1: Data Packet</span>
<a name="server.cpp-63"></a><span class="cm">  * 2: ACK Packet</span>
<a name="server.cpp-64"></a><span class="cm">  *</span>
<a name="server.cpp-65"></a><span class="cm">  *</span>
<a name="server.cpp-66"></a><span class="cm">  */</span>
<a name="server.cpp-67"></a> <span class="kt">int</span> <span class="n">sequence</span><span class="p">;</span>
<a name="server.cpp-68"></a> <span class="cm">/*</span>
<a name="server.cpp-69"></a><span class="cm">  * FOR ACK PACKET : sequence indicates next expected packet.</span>
<a name="server.cpp-70"></a><span class="cm">  *</span>
<a name="server.cpp-71"></a><span class="cm">  *</span>
<a name="server.cpp-72"></a><span class="cm">  * */</span>
<a name="server.cpp-73"></a> <span class="kt">int</span> <span class="n">length</span><span class="p">;</span>
<a name="server.cpp-74"></a> <span class="kt">int</span> <span class="n">more</span><span class="p">;</span>
<a name="server.cpp-75"></a> <span class="kt">char</span> <span class="n">data</span><span class="p">[</span><span class="mi">20</span><span class="p">];</span> <span class="c1">// 20 just for demo.</span>
<a name="server.cpp-76"></a><span class="p">};</span>
<a name="server.cpp-77"></a>
<a name="server.cpp-78"></a><span class="k">struct</span> <span class="n">Con</span>
<a name="server.cpp-79"></a><span class="p">{</span>
<a name="server.cpp-80"></a>    <span class="kt">int</span> <span class="n">sock</span><span class="p">;</span>
<a name="server.cpp-81"></a>    <span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">length</span><span class="p">;</span>
<a name="server.cpp-82"></a>    <span class="k">struct</span> <span class="n">sockaddr_in</span> <span class="n">server</span><span class="p">;</span>
<a name="server.cpp-83"></a>    <span class="k">struct</span> <span class="n">hostent</span> <span class="o">*</span><span class="n">hp</span><span class="p">;</span>
<a name="server.cpp-84"></a>
<a name="server.cpp-85"></a><span class="p">};</span>
<a name="server.cpp-86"></a>
<a name="server.cpp-87"></a><span class="k">struct</span> <span class="n">thread_data</span><span class="p">{</span>
<a name="server.cpp-88"></a>   <span class="n">std</span><span class="o">::</span><span class="n">vector</span><span class="o">&lt;</span><span class="kt">char</span><span class="o">&gt;</span>  <span class="n">data</span><span class="p">;</span>
<a name="server.cpp-89"></a>   <span class="k">struct</span> <span class="n">Con</span> <span class="n">con</span><span class="p">;</span>
<a name="server.cpp-90"></a><span class="p">};</span>
<a name="server.cpp-91"></a>
<a name="server.cpp-92"></a>
<a name="server.cpp-93"></a><span class="k">struct</span> <span class="n">Con</span> <span class="nf">OpenSock</span><span class="p">(</span><span class="kt">int</span> <span class="n">argc</span><span class="p">,</span> <span class="kt">char</span> <span class="o">*</span><span class="n">argv</span><span class="p">[]){</span>
<a name="server.cpp-94"></a>    <span class="c1">//printf(&quot;%u\n&quot;, argv);</span>
<a name="server.cpp-95"></a>    <span class="c1">//printf(&quot;%s\n&quot;, argv[0]);</span>
<a name="server.cpp-96"></a>    <span class="c1">//printf(&quot;%s\n&quot;, argv[1]);</span>
<a name="server.cpp-97"></a>    <span class="c1">//printf(&quot;%s\n&quot;, argv[2]);</span>
<a name="server.cpp-98"></a>    <span class="c1">//printf(&quot;%d\n&quot;, argc);</span>
<a name="server.cpp-99"></a>
<a name="server.cpp-100"></a>    <span class="c1">//int sock;</span>
<a name="server.cpp-101"></a>    <span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">length</span><span class="p">;</span>
<a name="server.cpp-102"></a>    <span class="k">struct</span> <span class="n">sockaddr_in</span> <span class="n">server</span><span class="p">;</span>
<a name="server.cpp-103"></a>    <span class="k">struct</span> <span class="n">hostent</span> <span class="o">*</span><span class="n">hp</span><span class="p">;</span>
<a name="server.cpp-104"></a>    <span class="kt">int</span> <span class="n">sock</span><span class="p">,</span> <span class="n">n</span><span class="p">;</span>
<a name="server.cpp-105"></a>    <span class="c1">//socklen_t fromlen;</span>
<a name="server.cpp-106"></a>    <span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">fromlen</span><span class="p">;</span>
<a name="server.cpp-107"></a>    <span class="k">struct</span> <span class="n">sockaddr_in</span> <span class="n">from</span><span class="p">;</span>
<a name="server.cpp-108"></a>    <span class="kt">char</span> <span class="n">buf</span><span class="p">[</span><span class="mi">1024</span><span class="p">];</span>
<a name="server.cpp-109"></a>    <span class="k">struct</span> <span class="n">Con</span> <span class="n">newCon</span><span class="p">;</span>
<a name="server.cpp-110"></a>
<a name="server.cpp-111"></a>
<a name="server.cpp-112"></a>    <span class="k">if</span> <span class="p">(</span><span class="n">argc</span> <span class="o">&lt;</span> <span class="mi">2</span><span class="p">)</span> <span class="p">{</span>
<a name="server.cpp-113"></a>          <span class="n">fprintf</span><span class="p">(</span><span class="n">stderr</span><span class="p">,</span> <span class="s">&quot;ERROR, no port provided</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span>
<a name="server.cpp-114"></a>          <span class="n">exit</span><span class="p">(</span><span class="mi">0</span><span class="p">);</span>
<a name="server.cpp-115"></a>       <span class="p">}</span>
<a name="server.cpp-116"></a>
<a name="server.cpp-117"></a>    <span class="n">newCon</span><span class="p">.</span><span class="n">sock</span><span class="o">=</span><span class="n">socket</span><span class="p">(</span><span class="n">AF_INET</span><span class="p">,</span> <span class="n">SOCK_DGRAM</span><span class="p">,</span> <span class="n">IPPROTO_UDP</span><span class="p">);</span>
<a name="server.cpp-118"></a>    <span class="k">if</span> <span class="p">(</span><span class="n">newCon</span><span class="p">.</span><span class="n">sock</span> <span class="o">&lt;</span> <span class="mi">0</span><span class="p">)</span> <span class="n">error</span><span class="p">(</span><span class="s">&quot;Error in : Opening socket&quot;</span><span class="p">);</span>
<a name="server.cpp-119"></a>    <span class="n">newCon</span><span class="p">.</span><span class="n">length</span> <span class="o">=</span> <span class="k">sizeof</span><span class="p">(</span><span class="n">server</span><span class="p">);</span>
<a name="server.cpp-120"></a>    <span class="n">bzero</span><span class="p">(</span><span class="o">&amp;</span><span class="n">server</span><span class="p">,</span><span class="n">length</span><span class="p">);</span>
<a name="server.cpp-121"></a>    <span class="n">newCon</span><span class="p">.</span><span class="n">server</span><span class="p">.</span><span class="n">sin_family</span><span class="o">=</span><span class="n">AF_INET</span><span class="p">;</span>
<a name="server.cpp-122"></a>    <span class="n">newCon</span><span class="p">.</span><span class="n">server</span><span class="p">.</span><span class="n">sin_addr</span><span class="p">.</span><span class="n">s_addr</span><span class="o">=</span><span class="n">INADDR_ANY</span><span class="p">;</span>
<a name="server.cpp-123"></a>    <span class="n">newCon</span><span class="p">.</span><span class="n">server</span><span class="p">.</span><span class="n">sin_port</span><span class="o">=</span><span class="n">htons</span><span class="p">(</span><span class="n">atoi</span><span class="p">(</span><span class="n">argv</span><span class="p">[</span><span class="mi">1</span><span class="p">]));</span>
<a name="server.cpp-124"></a>    <span class="k">if</span> <span class="p">(</span><span class="n">bind</span><span class="p">(</span><span class="n">newCon</span><span class="p">.</span><span class="n">sock</span><span class="p">,(</span><span class="k">struct</span> <span class="n">sockaddr</span> <span class="o">*</span><span class="p">)</span><span class="o">&amp;</span><span class="n">newCon</span><span class="p">.</span><span class="n">server</span><span class="p">,</span><span class="n">newCon</span><span class="p">.</span><span class="n">length</span><span class="p">)</span><span class="o">&lt;</span><span class="mi">0</span><span class="p">)</span>
<a name="server.cpp-125"></a>        <span class="n">error</span><span class="p">(</span><span class="s">&quot;Error in : binding&quot;</span><span class="p">);</span>
<a name="server.cpp-126"></a>    <span class="n">newCon</span><span class="p">.</span><span class="n">length</span> <span class="o">=</span> <span class="k">sizeof</span><span class="p">(</span><span class="k">struct</span> <span class="n">sockaddr_in</span><span class="p">);</span>
<a name="server.cpp-127"></a>
<a name="server.cpp-128"></a>
<a name="server.cpp-129"></a>    <span class="k">return</span><span class="p">(</span><span class="n">newCon</span><span class="p">);</span>
<a name="server.cpp-130"></a>
<a name="server.cpp-131"></a>    <span class="p">}</span>
<a name="server.cpp-132"></a>
<a name="server.cpp-133"></a>
<a name="server.cpp-134"></a>
<a name="server.cpp-135"></a>
<a name="server.cpp-136"></a>
<a name="server.cpp-137"></a><span class="kt">void</span> <span class="o">*</span><span class="nf">RcvMessage</span><span class="p">(</span><span class="k">struct</span> <span class="n">Con</span> <span class="n">newCon</span><span class="p">)</span>
<a name="server.cpp-138"></a><span class="p">{</span>
<a name="server.cpp-139"></a>
<a name="server.cpp-140"></a>
<a name="server.cpp-141"></a>	<span class="k">struct</span> <span class="n">Packet</span> <span class="o">*</span><span class="n">rcvd_packet</span><span class="p">,</span> <span class="o">*</span><span class="n">ack_packet</span><span class="p">;</span>
<a name="server.cpp-142"></a>	<span class="kt">int</span> <span class="n">ack</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>
<a name="server.cpp-143"></a>	<span class="k">struct</span> <span class="n">sockaddr_in</span> <span class="n">from</span><span class="p">;</span>	<span class="cm">/* Source address of echo */</span>
<a name="server.cpp-144"></a>
<a name="server.cpp-145"></a>
<a name="server.cpp-146"></a>	<span class="k">while</span><span class="p">(</span><span class="mi">1</span><span class="p">)</span>
<a name="server.cpp-147"></a>	<span class="p">{</span>
<a name="server.cpp-148"></a>		<span class="c1">//printf(&quot;1\n&quot;);</span>
<a name="server.cpp-149"></a>		<span class="n">rcvd_packet</span> <span class="o">=</span> <span class="k">new</span> <span class="k">struct</span> <span class="n">Packet</span><span class="p">;</span>
<a name="server.cpp-150"></a>		<span class="c1">//rcvd_packet-&gt;data=&quot;Hi&quot;;</span>
<a name="server.cpp-151"></a>		<span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="n">rcvd_packet</span><span class="o">-&gt;</span><span class="n">data</span><span class="o">&lt;&lt;</span> <span class="s">&quot;</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">;</span>
<a name="server.cpp-152"></a>		<span class="c1">//memset(rcvd_packet,0,sizeof(Packet));</span>
<a name="server.cpp-153"></a>		<span class="c1">//rcvd_packet = (Packet *)malloc(sizeof(Packet));</span>
<a name="server.cpp-154"></a>		<span class="kt">int</span> <span class="n">n</span> <span class="o">=</span> <span class="n">recvfrom</span><span class="p">(</span><span class="n">newCon</span><span class="p">.</span><span class="n">sock</span><span class="p">,</span><span class="n">rcvd_packet</span><span class="p">,</span><span class="k">sizeof</span><span class="p">(</span><span class="k">struct</span> <span class="n">Packet</span><span class="p">),</span><span class="mi">0</span><span class="p">,(</span><span class="k">struct</span> <span class="n">sockaddr</span> <span class="o">*</span><span class="p">)</span><span class="o">&amp;</span><span class="n">from</span><span class="p">,</span><span class="o">&amp;</span><span class="n">newCon</span><span class="p">.</span><span class="n">length</span><span class="p">);</span>
<a name="server.cpp-155"></a>
<a name="server.cpp-156"></a>		<span class="n">printf</span><span class="p">(</span><span class="s">&quot;%d </span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span><span class="n">n</span><span class="p">);</span>
<a name="server.cpp-157"></a>		<span class="c1">//printf(&quot;2\n&quot;);</span>
<a name="server.cpp-158"></a>		<span class="k">if</span> <span class="p">(</span><span class="n">n</span> <span class="o">&lt;</span> <span class="mi">0</span><span class="p">)</span> <span class="n">error</span><span class="p">(</span><span class="s">&quot;Error in : recvfrom&quot;</span><span class="p">);</span>
<a name="server.cpp-159"></a>		<span class="c1">//write(1,&quot;Received a datagram: &quot;,21);</span>
<a name="server.cpp-160"></a>		<span class="c1">//write(1,buf,n);</span>
<a name="server.cpp-161"></a>
<a name="server.cpp-162"></a>		<span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="s">&quot;Packet Type: &quot;</span><span class="o">&lt;&lt;</span> <span class="n">rcvd_packet</span><span class="o">-&gt;</span><span class="n">type</span> <span class="o">&lt;&lt;</span><span class="n">endl</span><span class="p">;</span>
<a name="server.cpp-163"></a>		<span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="s">&quot;Packet length: &quot;</span><span class="o">&lt;&lt;</span> <span class="n">rcvd_packet</span><span class="o">-&gt;</span><span class="n">length</span> <span class="o">&lt;&lt;</span><span class="n">endl</span><span class="p">;</span>
<a name="server.cpp-164"></a>		<span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="s">&quot;Packet more: &quot;</span><span class="o">&lt;&lt;</span> <span class="n">rcvd_packet</span><span class="o">-&gt;</span><span class="n">more</span> <span class="o">&lt;&lt;</span><span class="n">endl</span><span class="p">;</span>
<a name="server.cpp-165"></a>		<span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="s">&quot;Packet Sequence: &quot;</span><span class="o">&lt;&lt;</span> <span class="n">rcvd_packet</span><span class="o">-&gt;</span><span class="n">sequence</span> <span class="o">&lt;&lt;</span><span class="n">endl</span><span class="p">;</span>
<a name="server.cpp-166"></a>		<span class="c1">//printf(&quot;%d \n&quot;,rcvd_packet-&gt;data.length());</span>
<a name="server.cpp-167"></a>		<span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="s">&quot;data: &quot;</span><span class="o">&lt;&lt;</span> <span class="n">endl</span><span class="p">;</span>
<a name="server.cpp-168"></a>
<a name="server.cpp-169"></a>		<span class="k">for</span><span class="p">(</span><span class="kt">int</span> <span class="n">i</span><span class="o">=</span><span class="mi">0</span><span class="p">;</span><span class="n">i</span><span class="o">&lt;</span> <span class="mi">20</span><span class="p">;</span><span class="n">i</span><span class="o">++</span><span class="p">)</span>
<a name="server.cpp-170"></a>			<span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="n">rcvd_packet</span><span class="o">-&gt;</span><span class="n">data</span><span class="p">[</span><span class="n">i</span><span class="p">];</span>
<a name="server.cpp-171"></a>		<span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="s">&quot;</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">;</span>
<a name="server.cpp-172"></a>
<a name="server.cpp-173"></a>		<span class="c1">//printf(&quot;3\n&quot;);</span>
<a name="server.cpp-174"></a>		<span class="k">if</span><span class="p">(</span><span class="n">rcvd_packet</span><span class="o">-&gt;</span><span class="n">type</span> <span class="o">==</span> <span class="mi">1</span> <span class="o">&amp;&amp;</span> <span class="n">ack</span> <span class="o">==</span> <span class="n">rcvd_packet</span><span class="o">-&gt;</span><span class="n">sequence</span><span class="p">)</span>
<a name="server.cpp-175"></a>		<span class="p">{</span>
<a name="server.cpp-176"></a>			<span class="n">ack_packet</span> <span class="o">=</span> <span class="k">new</span> <span class="n">Packet</span><span class="p">;</span>
<a name="server.cpp-177"></a>			<span class="n">ack_packet</span><span class="o">-&gt;</span><span class="n">type</span> <span class="o">=</span> <span class="mi">2</span><span class="p">;</span>
<a name="server.cpp-178"></a>			<span class="n">ack_packet</span><span class="o">-&gt;</span><span class="n">sequence</span> <span class="o">=</span> <span class="n">ack</span><span class="o">++</span><span class="p">;</span>
<a name="server.cpp-179"></a>
<a name="server.cpp-180"></a>			<span class="n">n</span> <span class="o">=</span> <span class="n">sendto</span><span class="p">(</span><span class="n">newCon</span><span class="p">.</span><span class="n">sock</span><span class="p">,</span><span class="n">ack_packet</span><span class="p">,</span><span class="k">sizeof</span><span class="p">(</span><span class="k">struct</span> <span class="n">Packet</span><span class="p">),</span> <span class="mi">0</span><span class="p">,(</span><span class="k">struct</span> <span class="n">sockaddr</span> <span class="o">*</span><span class="p">)</span><span class="o">&amp;</span><span class="n">from</span><span class="p">,</span><span class="n">newCon</span><span class="p">.</span><span class="n">length</span><span class="p">);</span>
<a name="server.cpp-181"></a>			<span class="k">if</span> <span class="p">(</span><span class="n">n</span>  <span class="o">&lt;</span> <span class="mi">0</span><span class="p">)</span>
<a name="server.cpp-182"></a>					<span class="n">error</span><span class="p">(</span><span class="s">&quot;sendto&quot;</span><span class="p">);</span>
<a name="server.cpp-183"></a>			<span class="k">else</span>
<a name="server.cpp-184"></a>				<span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="s">&quot;ACK for Packet Sequence: &quot;</span> <span class="o">&lt;&lt;</span> <span class="n">rcvd_packet</span><span class="o">-&gt;</span><span class="n">sequence</span> <span class="o">&lt;&lt;</span> <span class="s">&quot; sent.&quot;</span> <span class="o">&lt;&lt;</span> <span class="n">endl</span><span class="p">;</span>
<a name="server.cpp-185"></a>		<span class="p">}</span>
<a name="server.cpp-186"></a>	<span class="p">}</span>
<a name="server.cpp-187"></a>
<a name="server.cpp-188"></a><span class="p">}</span>
<a name="server.cpp-189"></a>
<a name="server.cpp-190"></a>
<a name="server.cpp-191"></a>
<a name="server.cpp-192"></a>
<a name="server.cpp-193"></a>
<a name="server.cpp-194"></a><span class="kt">int</span> <span class="nf">main</span><span class="p">(</span><span class="kt">int</span> <span class="n">argc</span><span class="p">,</span> <span class="kt">char</span> <span class="o">*</span><span class="n">argv</span><span class="p">[])</span>
<a name="server.cpp-195"></a><span class="p">{</span>
<a name="server.cpp-196"></a>   <span class="kt">int</span> <span class="n">sock</span><span class="p">,</span> <span class="n">length</span><span class="p">,</span> <span class="n">n</span><span class="p">;</span>
<a name="server.cpp-197"></a>   <span class="kt">socklen_t</span> <span class="n">fromlen</span><span class="p">;</span>
<a name="server.cpp-198"></a>   <span class="k">struct</span> <span class="n">sockaddr_in</span> <span class="n">server</span><span class="p">;</span>
<a name="server.cpp-199"></a>   <span class="k">struct</span> <span class="n">sockaddr_in</span> <span class="n">from</span><span class="p">;</span>
<a name="server.cpp-200"></a>   <span class="kt">char</span> <span class="n">buf</span><span class="p">[</span><span class="mi">1024</span><span class="p">];</span>
<a name="server.cpp-201"></a>   <span class="k">struct</span> <span class="n">Con</span> <span class="n">newCon</span><span class="p">;</span>
<a name="server.cpp-202"></a>
<a name="server.cpp-203"></a>   <span class="n">newCon</span> <span class="o">=</span> <span class="n">OpenSock</span><span class="p">(</span><span class="n">argc</span><span class="p">,</span> <span class="n">argv</span><span class="p">);</span>
<a name="server.cpp-204"></a>
<a name="server.cpp-205"></a>   <span class="n">RcvMessage</span><span class="p">(</span><span class="n">newCon</span><span class="p">);</span>
<a name="server.cpp-206"></a>
<a name="server.cpp-207"></a>   
<a name="server.cpp-208"></a>   <span class="cm">/*while (1) {</span>
<a name="server.cpp-209"></a><span class="cm">       n = recvfrom(sock,buf,1024,0,(struct sockaddr *)&amp;from,&amp;fromlen);</span>
<a name="server.cpp-210"></a><span class="cm">       if (n &lt; 0) error(&quot;Error in : recvfrom&quot;);</span>
<a name="server.cpp-211"></a><span class="cm">       write(1,&quot;Received a datagram: &quot;,21);</span>
<a name="server.cpp-212"></a><span class="cm">       write(1,buf,n);</span>
<a name="server.cpp-213"></a><span class="cm">       n = sendto(sock,&quot;Got your message\n&quot;,17,</span>
<a name="server.cpp-214"></a><span class="cm">                  0,(struct sockaddr *)&amp;from,fromlen);</span>
<a name="server.cpp-215"></a><span class="cm">       if (n  &lt; 0) error(&quot;sendto&quot;);</span>
<a name="server.cpp-216"></a><span class="cm">   }*/</span>
<a name="server.cpp-217"></a>   <span class="k">return</span> <span class="mi">0</span><span class="p">;</span>
<a name="server.cpp-218"></a> <span class="p">}</span>
</pre></div>
</td></tr></table>
    </div>
  


        </div>
        
      </div>
    </div>
  </div>
  
  <div data-module="source/set-changeset" data-hash="becf44494a1bd0a35f9b3d005acbf9042a160206"></div>



  
    
    
    
  
  

  </div>

        
        
        
          
    
    
  
        
      </div>
    </div>
  </div>

    </div>
  </div>

  <footer id="footer" role="contentinfo" data-module="components/footer">
    <section class="footer-body">
      
  <ul>
  <li>
    <a class="support-ga" target="_blank"
       data-support-gaq-page="Blog"
       href="http://blog.bitbucket.org">Blog</a>
  </li>
  <li>
    <a class="support-ga" target="_blank"
       data-support-gaq-page="Home"
       href="/support">Support</a>
  </li>
  <li>
    <a class="support-ga"
       data-support-gaq-page="PlansPricing"
       href="/plans">Plans &amp; pricing</a>
  </li>
  <li>
    <a class="support-ga" target="_blank"
       data-support-gaq-page="DocumentationHome"
       href="//confluence.atlassian.com/display/BITBUCKET">Documentation</a>
  </li>
  <li>
    <a class="support-ga" target="_blank"
       data-support-gaq-page="DocumentationAPI"
       href="//confluence.atlassian.com/x/IYBGDQ">API</a>
  </li>
  <li>
    <a class="support-ga" target="_blank"
       data-support-gaq-page="SiteStatus"
       href="http://status.bitbucket.org/">Site status</a>
  </li>
  <li>
    <a class="support-ga" id="meta-info"
       data-support-gaq-page="MetaInfo"
       href="#">Version info</a>
  </li>
  <li>
    <a class="support-ga" target="_blank"
       data-support-gaq-page="EndUserAgreement"
       href="//www.atlassian.com/legal/customer-agreement?utm_source=bitbucket&amp;utm_medium=link&amp;utm_campaign=footer">Terms of service</a>
  </li>
  <li>
    <a class="support-ga" target="_blank"
       data-support-gaq-page="PrivacyPolicy"
       href="//www.atlassian.com/legal/privacy-policy">Privacy policy</a>
  </li>
</ul>
<div id="meta-info-content" style="display: none;">
  <ul>
    
      <li><a href="/account/user/souravb65/" class="view-language-link">English</a></li>
    
    <li>
      <a class="support-ga" target="_blank"
         data-support-gaq-page="GitDocumentation"
         href="http://git-scm.com/">Git 2.7.4.1.g5468f9e</a>
    </li>
    <li>
      <a class="support-ga" target="_blank"
         data-support-gaq-page="HgDocumentation"
         href="https://www.mercurial-scm.org">Mercurial 3.6.3</a>
    </li>
    <li>
      <a class="support-ga" target="_blank"
         data-support-gaq-page="DjangoDocumentation"
         href="https://www.djangoproject.com/">Django 1.7.11</a>
    </li>
    <li>
      <a class="support-ga" target="_blank"
         data-support-gaq-page="PythonDocumentation"
         href="http://www.python.org/">Python 2.7.3</a>
    </li>
    <li>
      <a class="support-ga" target="_blank"
         data-support-gaq-page="DeployedVersion"
         href="#">d2de90cfe5a1 / d2de90cfe5a1 @ app-107</a>
    </li>
  </ul>
</div>
<ul class="atlassian-links">
  <li>
    <a id="atlassian-jira-link" target="_blank"
       title="Track everything – bugs, tasks, deadlines, code – and pull reports to stay informed."
       href="https://www.atlassian.com/software/jira/bitbucket-integration?utm_source=bitbucket&amp;utm_medium=link&amp;utm_campaign=bitbucket_footer">JIRA Software</a>
  </li>
  <li>
    <a id="atlassian-confluence-link" target="_blank"
       title="Content Creation, Collaboration & Knowledge Sharing for Teams."
       href="http://www.atlassian.com/software/confluence/overview/team-collaboration-software?utm_source=bitbucket&amp;utm_medium=link&amp;utm_campaign=bitbucket_footer">Confluence</a>
  </li>
  <li>
    <a id="atlassian-bamboo-link" target="_blank"
       title="Continuous integration and deployment, release management."
       href="http://www.atlassian.com/software/bamboo?utm_source=bitbucket&amp;utm_medium=link&amp;utm_campaign=bitbucket_footer">Bamboo</a>
  </li>
  <li>
    <a id="atlassian-sourcetree-link" target="_blank"
       title="A free Git and Mercurial desktop client for Mac or Windows."
       href="http://www.sourcetreeapp.com/?utm_source=bitbucket&amp;utm_medium=link&amp;utm_campaign=bitbucket_footer">SourceTree</a>
  </li>
  <li>
    <a id="atlassian-hipchat-link" target="_blank"
       title="Group chat and IM built for teams."
       href="http://www.hipchat.com/?utm_source=bitbucket&amp;utm_medium=link&amp;utm_campaign=bitbucket_footer">HipChat</a>
  </li>
</ul>
<div id="footer-logo">
  <a target="_blank"
     title="Bitbucket is developed by Atlassian in Austin, San Francisco, and Sydney."
     href="http://www.atlassian.com?utm_source=bitbucket&amp;utm_medium=logo&amp;utm_campaign=bitbucket_footer">Atlassian</a>
</div>

    </section>
  </footer>
</div>


  

<div data-module="components/mentions/index">
  
    
    
  
  
    
    
  
  
    
    
  
</div>
<div data-module="components/typeahead/emoji/index">
  
    
    
  
</div>

<div data-module="components/repo-typeahead/index">
  
    
    
  
</div>

    
    
  

    
    
  

    
    
  

    
    
  


  


    
    
  

    
    
  


  
    
    
  
  
    
    
  
  
    
    
  
  
    
    
  
  
    
    
  
  
    
    
  
  
    
    
  


  
  
  <aui-inline-dialog
    id="help-menu-dialog"
    data-aui-alignment="bottom right"

    
    data-aui-alignment-static="true"
    data-module="header/help-menu"
    responds-to="toggle"
    aria-hidden="true">

  <div id="help-menu-section">
    <h1 class="help-menu-heading">Help</h1>

    <form id="help-menu-search-form" class="aui" target="_blank" method="get"
        action="https://support.atlassian.com/customer/search">
      <span id="help-menu-search-icon" class="aui-icon aui-icon-large aui-iconfont-search"></span>
      <input id="help-menu-search-form-input" name="q" class="text" type="text" placeholder="Ask a question">
    </form>

    <ul id="help-menu-links">
      <li>
        <a class="support-ga" data-support-gaq-page="DocumentationHome"
            href="https://confluence.atlassian.com/x/bgozDQ" target="_blank">
          Online help
        </a>
      </li>
      <li>
        <a class="support-ga" data-support-gaq-page="GitTutorials"
            href="https://www.atlassian.com/git?utm_source=bitbucket&amp;utm_medium=link&amp;utm_campaign=help_dropdown&amp;utm_content=learn_git"
            target="_blank">
          Learn Git
        </a>
      </li>
      <li>
        <a id="keyboard-shortcuts-link"
           href="#">Keyboard shortcuts</a>
      </li>
      <li>
        <a href="/whats-new/" id="features-link">
          Latest features
        </a>
      </li>
      <li>
        <a class="support-ga" data-support-gaq-page="DocumentationTutorials"
            href="https://confluence.atlassian.com/x/Q4sFLQ" target="_blank">
          Bitbucket tutorials
        </a>
      </li>
      <li>
        <a class="support-ga" data-support-gaq-page="SiteStatus"
            href="http://status.bitbucket.org/" target="_blank">
          Site status
        </a>
      </li>
      <li>
        <a class="support-ga" data-support-gaq-page="Home" href="/support">
          Support
        </a>
      </li>
    </ul>
  </div>
</aui-inline-dialog>
  


  <div class="omnibar" data-module="components/omnibar/index">
    <form class="omnibar-form aui"></form>
  </div>
  
    
    
  
  
    
    
  
  
    
    
  
  
    
    
  





  

  <div class="_mustache-templates">
    
      <script id="repo-dropdown-template" type="text/html">
        


  [[#hasViewed]]
    <div class="aui-dropdown2-section">
      <strong class="viewed">Recently viewed</strong>
      <ul>
        [[#viewed]]
          <li class="[[#is_private]]private[[/is_private]][[^is_private]]public[[/is_private]] repository">
            <a href="[[url]]" title="[[owner]][[#project]] / [[project]][[/project]] / [[name]]" class="aui-icon-container recently-viewed repo-link"
                data-ct="header.repository.dropdown.repository" data-ct-data='{"type": "recently-viewed"}'>
              <span class="aui-avatar aui-avatar-xsmall aui-avatar-project">
                <span class="aui-avatar-inner">
                  <img src="[[{avatar}]]">
                </span>
              </span>
              <span class="dropdown-path">
                <span class="dropdown-path-part">[[#project]][[project]][[/project]][[^project]][[owner]][[/project]]</span>
                <span class="dropdown-path-separator">/</span>
                <span class="dropdown-path-part dropdown-path-part--primary">[[name]]</span>
              </span>
            </a>
          </li>
        [[/viewed]]
      </ul>
    </div>
  [[/hasViewed]]
  [[#hasUpdated]]
    <div class="aui-dropdown2-section">
      <strong class="updated">Recently updated</strong>
      <ul>
        [[#updated]]
        <li class="[[#is_private]]private[[/is_private]][[^is_private]]public[[/is_private]] repository">
          <a href="[[url]]" title="[[owner]][[#project]] / [[project]][[/project]] / [[name]]" class="aui-icon-container recently-updated repo-link"
             data-ct="header.repository.dropdown.repository" data-ct-data='{"type": "recently-updated"}'>
            <span class="aui-avatar aui-avatar-xsmall aui-avatar-project">
              <span class="aui-avatar-inner">
                <img src="[[{avatar}]]">
              </span>
            </span>
            <span class="dropdown-path">
              <span class="dropdown-path-part">[[#project]][[project]][[/project]][[^project]][[owner]][[/project]]</span>
              <span class="dropdown-path-separator">/</span>
              <span class="dropdown-path-part dropdown-path-part--primary">[[name]]</span>
            </span>
          </a>
        </li>
        [[/updated]]
      </ul>
    </div>
  [[/hasUpdated]]


      </script>
    
      <script id="snippet-dropdown-template" type="text/html">
        <div class="aui-dropdown2-section">
  <strong>[[sectionTitle]]</strong>
  <ul class="aui-list-truncate">
    [[#snippets]]
      <li>
        <a href="[[links.html.href]]">[[owner.display_name]] / [[name]]</a>
      </li>
    [[/snippets]]
  </ul>
</div>

      </script>
    
      <script id="team-dropdown-template" type="text/html">
        

<div class="aui-dropdown2-section primary">
  <ul class="aui-list-truncate">
    [[#teams]]
      <li>
        <a href="/[[username]]/" class="aui-icon-container team-link" data-ct="header.team.dropdown.team">
          <span class="aui-avatar aui-avatar-xsmall">
            <span class="aui-avatar-inner">
              <img src="[[avatar]]">
            </span>
          </span>
          [[display_name]]
        </a>
      </li>
    [[/teams]]
  </ul>
</div>

<div class="aui-dropdown2-section">
  <ul>
    <li>
      <a href="/account/create-team/?team_source=header"
          id="create-team-link" data-ct="header.team.dropdown.create" data-ct-data='{"empty": false}'>Create team</a>
    </li>
  </ul>
</div>

      </script>
    
      <script id="projects-dropdown-template" type="text/html">
        

[[#hasProjects]]
  <div class="aui-dropdown2-section">
    <strong>Recently viewed</strong>
    <ul class="aui-list-truncate">
      [[#projects]]
        <li>
          <a href="/account/user/[[owner.username]]/projects/[[key]]" class="aui-icon-container project-link">
            <span class="aui-avatar aui-avatar-xsmall aui-avatar-project">
              <span class="aui-avatar-inner">
                <img src="[[links.avatar.href]]">
              </span>
            </span>
            [[name]]
          </a>
        </li>
      [[/projects]]
    </ul>
  </div>
[[/hasProjects]]

[[#isAdmin]]
  <div class="aui-dropdown2-section">
    <ul>
      <li>
        <a href="/account/projects/create"
            id="create-project-link">Create project</a>
      </li>
    </ul>
  </div>
[[/isAdmin]]

      </script>
    
      <script id="general-invite-template" type="text/html">
        
<div id="general-invite">
  <form class="aui invitation-form" id="general-invite-form" method="post" novalidate>
    <div class="error aui-message hidden">
      <span class="aui-icon icon-error"></span>
      <div class="message"></div>
    </div>
    <div class="field-group">
      <label for="id_general_email_address">Email address</label>
      <input type="email" id="id_general_email_address" name="email-address" class="text long-field">
    </div>
  </form>
</div>

      </script>
    
      <script id="branch-checkout-template" type="text/html">
        

<div id="checkout-branch-contents">
  <div class="command-line">
    <p>
      Check out this branch on your local machine to begin working on it.
    </p>
    <input type="text" class="checkout-command" readonly="readonly"
        
           value="git fetch && git checkout [[branchName]]"
        
        >
  </div>
  
    <div class="sourcetree-callout clone-in-sourcetree"
  data-module="components/clone/clone-in-sourcetree"
  data-https-url="https://souravb65@bitbucket.org/souravb65/gobackn.git"
  data-ssh-url="ssh://git@bitbucket.org/souravb65/gobackn.git">

  <div>
    <button class="aui-button aui-button-primary">
      
        Check out in SourceTree
      
    </button>
  </div>

  <p class="windows-text">
    
      <a href="http://www.sourcetreeapp.com/?utm_source=internal&amp;utm_medium=link&amp;utm_campaign=clone_repo_win" target="_blank">Atlassian SourceTree</a>
      is a free Git and Mercurial client for Windows.
    
  </p>
  <p class="mac-text">
    
      <a href="http://www.sourcetreeapp.com/?utm_source=internal&amp;utm_medium=link&amp;utm_campaign=clone_repo_mac" target="_blank">Atlassian SourceTree</a>
      is a free Git and Mercurial client for Mac.
    
  </p>
</div>
  
</div>

      </script>
    
      <script id="branch-dialog-template" type="text/html">
        

<div class="tabbed-filter-widget branch-dialog">
  <div class="tabbed-filter">
    <input placeholder="Filter branches" class="filter-box" autosave="branch-dropdown-20364820" type="text">
    [[^ignoreTags]]
      <div class="aui-tabs horizontal-tabs aui-tabs-disabled filter-tabs">
        <ul class="tabs-menu">
          <li class="menu-item active-tab"><a href="#branches">Branches</a></li>
          <li class="menu-item"><a href="#tags">Tags</a></li>
        </ul>
      </div>
    [[/ignoreTags]]
  </div>
  
    <div class="tab-pane active-pane" id="branches" data-filter-placeholder="Filter branches">
      <ol class="filter-list">
        <li class="empty-msg">No matching branches</li>
        [[#branches]]
          
            [[#hasMultipleHeads]]
              [[#heads]]
                <li class="comprev filter-item">
                  <a class="pjax-trigger filter-item-link" href="/souravb65/gobackn/src/[[changeset]]/src/server.cpp?at=[[safeName]]"
                     title="[[name]]">
                    [[name]] ([[shortChangeset]])
                  </a>
                </li>
              [[/heads]]
            [[/hasMultipleHeads]]
            [[^hasMultipleHeads]]
              <li class="comprev filter-item">
                <a class="pjax-trigger filter-item-link" href="/souravb65/gobackn/src/[[changeset]]/src/server.cpp?at=[[safeName]]" title="[[name]]">
                  [[name]]
                </a>
              </li>
            [[/hasMultipleHeads]]
          
        [[/branches]]
      </ol>
    </div>
    <div class="tab-pane" id="tags" data-filter-placeholder="Filter tags">
      <ol class="filter-list">
        <li class="empty-msg">No matching tags</li>
        [[#tags]]
          <li class="comprev filter-item">
            <a class="pjax-trigger filter-item-link" href="/souravb65/gobackn/src/[[changeset]]/src/server.cpp?at=[[safeName]]" title="[[name]]">
              [[name]]
            </a>
          </li>
        [[/tags]]
      </ol>
    </div>
  
</div>

      </script>
    
      <script id="image-upload-template" type="text/html">
        

<form id="upload-image" method="POST"
    
      action="/xhr/souravb65/gobackn/image-upload/"
    >
  <input type='hidden' name='csrfmiddlewaretoken' value='LEx8bdFy2O93loY7QLtEQZPmSOLERPgA' />

  <div class="drop-target">
    <p class="centered">Drag image here</p>
  </div>

  
  <div>
    <button class="aui-button click-target">Select an image</button>
    <input name="file" type="file" class="hidden file-target"
           accept="image/jpeg, image/gif, image/png" />
    <input type="submit" class="hidden">
  </div>
</form>


      </script>
    
      <script id="mention-result" type="text/html">
        
<span class="mention-result">
  <span class="aui-avatar aui-avatar-small mention-result--avatar">
    <span class="aui-avatar-inner">
      <img src="[[avatar_url]]">
    </span>
  </span>
  [[#display_name]]
    <span class="display-name mention-result--display-name">[[&display_name]]</span> <small class="username mention-result--username">[[&username]]</small>
  [[/display_name]]
  [[^display_name]]
    <span class="username mention-result--username">[[&username]]</span>
  [[/display_name]]
  [[#is_teammate]][[^is_team]]
    <span class="aui-lozenge aui-lozenge-complete aui-lozenge-subtle mention-result--lozenge">teammate</span>
  [[/is_team]][[/is_teammate]]
</span>
      </script>
    
      <script id="mention-call-to-action" type="text/html">
        
[[^query]]
<li class="bb-typeahead-item">Begin typing to search for a user</li>
[[/query]]
[[#query]]
<li class="bb-typeahead-item">Continue typing to search for a user</li>
[[/query]]

      </script>
    
      <script id="mention-no-results" type="text/html">
        
[[^searching]]
<li class="bb-typeahead-item">Found no matching users for <em>[[query]]</em>.</li>
[[/searching]]
[[#searching]]
<li class="bb-typeahead-item bb-typeahead-searching">Searching for <em>[[query]]</em>.</li>
[[/searching]]

      </script>
    
      <script id="emoji-result" type="text/html">
        
<div class="aui-avatar aui-avatar-small">
  <div class="aui-avatar-inner">
    <img src="[[src]]">
  </div>
</div>
<span class="name">[[&name]]</span>

      </script>
    
      <script id="repo-typeahead-result" type="text/html">
        <span class="aui-avatar aui-avatar-project aui-avatar-xsmall">
  <span class="aui-avatar-inner">
    <img src="[[avatar]]">
  </span>
</span>
<span class="owner">[[&owner]]</span>/<span class="slug">[[&slug]]</span>

      </script>
    
      <script id="share-form-template" type="text/html">
        

<div class="error aui-message hidden">
  <span class="aui-icon icon-error"></span>
  <div class="message"></div>
</div>
<form class="aui">
  <table class="widget bb-list aui">
    <thead>
    <tr class="assistive">
      <th class="user">User</th>
      <th class="role">Role</th>
      <th class="actions">Actions</th>
    </tr>
    </thead>
    <tbody>
      <tr class="form">
        <td colspan="2">
          <input type="text" class="text bb-user-typeahead user-or-email"
                 placeholder="Username or email address"
                 autocomplete="off"
                 data-bb-typeahead-focus="false"
                 [[#disabled]]disabled[[/disabled]]>
        </td>
        <td class="actions">
          <button type="submit" class="aui-button aui-button-light" disabled>Add</button>
        </td>
      </tr>
    </tbody>
  </table>
</form>

      </script>
    
      <script id="share-detail-template" type="text/html">
        

[[#username]]
<td class="user
    [[#hasCustomGroups]]custom-groups[[/hasCustomGroups]]"
    [[#error]]data-error="[[error]]"[[/error]]>
  <div title="[[displayName]]">
    <a href="/[[username]]/" class="user">
      <span class="aui-avatar aui-avatar-xsmall">
        <span class="aui-avatar-inner">
          <img src="[[avatar]]">
        </span>
      </span>
      <span>[[displayName]]</span>
    </a>
  </div>
</td>
[[/username]]
[[^username]]
<td class="email
    [[#hasCustomGroups]]custom-groups[[/hasCustomGroups]]"
    [[#error]]data-error="[[error]]"[[/error]]>
  <div title="[[email]]">
    <span class="aui-icon aui-icon-small aui-iconfont-email"></span>
    [[email]]
  </div>
</td>
[[/username]]
<td class="role
    [[#hasCustomGroups]]custom-groups[[/hasCustomGroups]]">
  <div>
    [[#group]]
      [[#hasCustomGroups]]
        <select class="group [[#noGroupChoices]]hidden[[/noGroupChoices]]">
          [[#groups]]
            <option value="[[slug]]"
                [[#isSelected]]selected[[/isSelected]]>
              [[name]]
            </option>
          [[/groups]]
        </select>
      [[/hasCustomGroups]]
      [[^hasCustomGroups]]
      <label>
        <input type="checkbox" class="admin"
            [[#isAdmin]]checked[[/isAdmin]]>
        Administrator
      </label>
      [[/hasCustomGroups]]
    [[/group]]
    [[^group]]
      <ul>
        <li class="permission aui-lozenge aui-lozenge-complete
            [[^read]]aui-lozenge-subtle[[/read]]"
            data-permission="read">
          read
        </li>
        <li class="permission aui-lozenge aui-lozenge-complete
            [[^write]]aui-lozenge-subtle[[/write]]"
            data-permission="write">
          write
        </li>
        <li class="permission aui-lozenge aui-lozenge-complete
            [[^admin]]aui-lozenge-subtle[[/admin]]"
            data-permission="admin">
          admin
        </li>
      </ul>
    [[/group]]
  </div>
</td>
<td class="actions
    [[#hasCustomGroups]]custom-groups[[/hasCustomGroups]]">
  <div>
    <a href="#" class="delete">
      <span class="aui-icon aui-icon-small aui-iconfont-remove">Delete</span>
    </a>
  </div>
</td>

      </script>
    
      <script id="share-team-template" type="text/html">
        

<div class="clearfix">
  <span class="team-avatar-container">
    <span class="aui-avatar aui-avatar-medium">
      <span class="aui-avatar-inner">
        <img src="[[avatar]]">
      </span>
    </span>
  </span>
  <span class="team-name-container">
    [[display_name]]
  </span>
</div>
<p class="helptext">
  
    Existing users are granted access to this team immediately.
    New users will be sent an invitation.
  
</p>
<div class="share-form"></div>

      </script>
    
      <script id="scope-list-template" type="text/html">
        <ul class="scope-list">
  [[#scopes]]
    <li class="scope-list--item">
      <span class="scope-list--icon aui-icon aui-icon-small [[icon]]"></span>
      <span class="scope-list--description">[[description]]</span>
    </li>
  [[/scopes]]
</ul>

      </script>
    
      <script id="source-changeset" type="text/html">
        

<a href="/souravb65/gobackn/src/[[raw_node]]/[[path]]?at=master"
    class="[[#selected]]highlight[[/selected]]"
    data-hash="[[node]]">
  [[#author.username]]
    <span class="aui-avatar aui-avatar-xsmall">
      <span class="aui-avatar-inner">
        <img src="[[author.avatar]]">
      </span>
    </span>
    <span class="author" title="[[raw_author]]">[[author.display_name]]</span>
  [[/author.username]]
  [[^author.username]]
    <span class="aui-avatar aui-avatar-xsmall">
      <span class="aui-avatar-inner">
        <img src="https://d301sr5gafysq2.cloudfront.net/d2de90cfe5a1/img/default_avatar/user_blue.svg">
      </span>
    </span>
    <span class="author unmapped" title="[[raw_author]]">[[author]]</span>
  [[/author.username]]
  <time datetime="[[utctimestamp]]" data-title="true">[[utctimestamp]]</time>
  <span class="message">[[message]]</span>
</a>

      </script>
    
      <script id="embed-template" type="text/html">
        

<form class="aui inline-dialog-embed-dialog">
  <label for="embed-code-[[dialogId]]">Embed this source in another page:</label>
  <input type="text" readonly="true" value="&lt;script src=&quot;[[url]]&quot;&gt;&lt;/script&gt;" id="embed-code-[[dialogId]]" class="embed-code">
</form>

      </script>
    
      <script id="edit-form-template" type="text/html">
        


<form class="bb-content-container online-edit-form aui"
      data-repository="[[owner]]/[[slug]]"
      data-destination-repository="[[destinationOwner]]/[[destinationSlug]]"
      data-local-id="[[localID]]"
      data-is-writer="[[#isWriter]]true[[/isWriter]][[^isWriter]]false[[/isWriter]]"
      data-has-push-access="[[#hasPushAccess]]true[[/hasPushAccess]][[^hasPushAccess]]false[[/hasPushAccess]]"
      data-is-pull-request="[[#isPullRequest]]true[[/isPullRequest]][[^isPullRequest]]false[[/isPullRequest]]"
      data-hash="[[hash]]"
      data-branch="[[branch]]"
      data-path="[[path]]"
      data-is-create="[[isCreate]]"
      data-preview-url="/xhr/[[owner]]/[[slug]]/preview/[[hash]]/[[encodedPath]]"
      data-preview-error="We had trouble generating your preview."
      data-unsaved-changes-error="Your changes will be lost. Are you sure you want to leave?">
  <div class="bb-content-container-header">
    <div class="bb-content-container-header-primary">
      <h2 class="bb-content-container-heading">
        [[#isCreate]]
          
            Creating <span class="edit-path">[[path]]</span> on branch: <strong>[[branch]]</strong>
          
        [[/isCreate]]
        [[^isCreate]]
          
            Editing <span class="edit-path">[[path]]</span> on branch: <strong>[[branch]]</strong>
          
        [[/isCreate]]
      </h2>
    </div>
    <div class="bb-content-container-header-secondary">
      <div class="hunk-nav aui-buttons">
        <button class="prev-hunk-button aui-button aui-button-light"
            disabled="disabled" aria-disabled="true"
            title="Previous change">
          <span class="aui-icon aui-icon-small aui-iconfont-up">Previous change</span>
        </button>
        <button class="next-hunk-button aui-button aui-button-light"
            disabled="disabled" aria-disabled="true"
            title="Next change">
          <span class="aui-icon aui-icon-small aui-iconfont-down">Next change</span>
        </button>
      </div>
    </div>
  </div>
  <div class="bb-content-container-body has-header has-footer file-editor">
    <textarea id="id_source"></textarea>
  </div>
  <div class="preview-pane"></div>
  <div class="bb-content-container-footer">
    <div class="bb-content-container-footer-primary">
      <div id="syntax-mode" class="bb-content-container-item field">
        <label for="id_syntax-mode">Syntax mode:</label>
        <select id="id_syntax-mode">
          [[#syntaxes]]
            <option value="[[#mime]][[mime]][[/mime]][[^mime]][[mode]][[/mime]]">[[name]]</option>
          [[/syntaxes]]
        </select>
      </div>
      <div id="indent-mode" class="bb-content-container-item field">
        <label for="id_indent-mode">Indent mode:</label>
        <select id="id_indent-mode">
          <option value="tabs">Tabs</option>
          <option value="spaces">Spaces</option>
        </select>
      </div>
      <div id="indent-size" class="bb-content-container-item field">
        <label for="id_indent-size">Indent size:</label>
        <select id="id_indent-size">
          <option value="2">2</option>
          <option value="4">4</option>
          <option value="8">8</option>
        </select>
      </div>
    </div>
    <div class="bb-content-container-footer-secondary">
      [[^isCreate]]
        <button class="preview-button aui-button aui-button-light"
                disabled="disabled" aria-disabled="true"
                data-preview-label="View diff"
                data-edit-label="Edit file">View diff</button>
      [[/isCreate]]
      <button class="save-button aui-button aui-button-primary"
              disabled="disabled" aria-disabled="true">Commit</button>
      [[^isCreate]]
        <a class="aui-button aui-button-link cancel-link" href="#">Cancel</a>
      [[/isCreate]]
    </div>
  </div>
</form>

      </script>
    
      <script id="commit-form-template" type="text/html">
        

<form class="aui commit-form"
      data-title="Commit changes"
      [[#isDelete]]
        data-default-message="[[filename]] deleted online with Bitbucket"
      [[/isDelete]]
      [[#isCreate]]
        data-default-message="[[filename]] created online with Bitbucket"
      [[/isCreate]]
      [[^isDelete]]
        [[^isCreate]]
          data-default-message="[[filename]] edited online with Bitbucket"
        [[/isCreate]]
      [[/isDelete]]
      data-fork-error="We had trouble creating your fork."
      data-commit-error="We had trouble committing your changes."
      data-pull-request-error="We had trouble creating your pull request."
      data-update-error="We had trouble updating your pull request."
      data-branch-conflict-error="A branch with that name already exists."
      data-forking-message="Forking repository"
      data-committing-message="Committing changes"
      data-merging-message="Branching and merging changes"
      data-creating-pr-message="Creating pull request"
      data-updating-pr-message="Updating pull request"
      data-cta-label="Commit"
      data-cancel-label="Cancel">
  [[#isDelete]]
    <div class="aui-message info">
      <span class="aui-icon icon-info"></span>
      <span class="message">
        
          Committing this change will delete [[filename]] from your repository.
        
      </span>
    </div>
  [[/isDelete]]
  <div class="aui-message error hidden">
    <span class="aui-icon icon-error"></span>
    <span class="message"></span>
  </div>
  [[^isWriter]]
    <div class="aui-message info">
      <span class="aui-icon icon-info"></span>
      <p class="title">
        
          You don't have write access to this repository.
        
      </p>
      <span class="message">
        
          We'll create a fork for your changes and submit a
          pull request back to this repository.
        
      </span>
    </div>
  [[/isWriter]]
  [[#isRename]]
    <div class="field-group">
      <label for="id_path">New path</label>
      <input type="text" id="id_path" class="text" value="[[path]]"/>
    </div>
  [[/isRename]]
  <div class="field-group">
    <label for="id_message">Commit message</label>
    <textarea id="id_message" class="long-field textarea"></textarea>
  </div>
  [[^isPullRequest]]
    [[#isWriter]]
      <fieldset class="group">
        <div class="checkbox">
          [[#hasPushAccess]]
            <input id="id_create-pullrequest" class="checkbox" type="checkbox">
            <label for="id_create-pullrequest">Create a pull request for this change</label>
          [[/hasPushAccess]]
          [[^hasPushAccess]]
            <input id="id_create-pullrequest" class="checkbox" type="checkbox" checked="checked" aria-disabled="true" disabled="true">
            <label for="id_create-pullrequest" title="Branch restrictions do not allow you to update this branch.">Create a pull request for this change</label>
          [[/hasPushAccess]]

        </div>
      </fieldset>
      <div id="pr-fields">
        <div id="branch-name-group" class="field-group">
          <label for="id_branch-name">Branch name</label>
          <input type="text" id="id_branch-name" class="text long-field">
        </div>

        

<div class="field-group" id="id_reviewers_group">
  <label for="reviewers">Reviewers</label>

  
  <input id="reviewers" name="reviewers" type="hidden"
          value=""
          data-mention-url="/xhr/mentions/repositories/:dest_username/:dest_slug"
          data-reviewers="[]"
          data-suggested="[]"
          data-locked="[]">

  <div class="error"></div>
  <div class="suggested-reviewers"></div>

</div>


      </div>
    [[/isWriter]]
  [[/isPullRequest]]
  <button type="submit" id="id_submit">Commit</button>
</form>

      </script>
    
      <script id="merge-message-template" type="text/html">
        Merged [[hash]] into [[branch]]

[[message]]

      </script>
    
      <script id="commit-merge-error-template" type="text/html">
        



  We had trouble merging your changes. We stored them on the <strong>[[branch]]</strong> branch, so feel free to
  <a href="/[[owner]]/[[slug]]/full-commit/[[hash]]/[[path]]?at=[[encodedBranch]]">view them</a> or
  <a href="#" class="create-pull-request-link">create a pull request</a>.


      </script>
    
      <script id="selected-reviewer-template" type="text/html">
        <div class="aui-avatar aui-avatar-xsmall">
  <div class="aui-avatar-inner">
    <img src="[[avatar_url]]">
  </div>
</div>
[[display_name]]

      </script>
    
      <script id="suggested-reviewer-template" type="text/html">
        <button class="aui-button aui-button-link" type="button" tabindex="-1">[[display_name]]</button>

      </script>
    
      <script id="suggested-reviewers-template" type="text/html">
        

<span class="suggested-reviewer-list-label">Recent:</span>
<ul class="suggested-reviewer-list unstyled-list"></ul>

      </script>
    
      <script id="omnibar-form-template" type="text/html">
        <div class="omnibar-input-container">
  <input class="omnibar-input" type="text">
</div>
<ul class="omnibar-result-group-list"></ul>

      </script>
    
      <script id="omnibar-blank-slate-template" type="text/html">
        

<div class="omnibar-blank-slate">No results found</div>

      </script>
    
      <script id="omnibar-result-group-list-item-template" type="text/html">
        <div class="omnibar-result-group-header clearfix">
  <h2 class="omnibar-result-group-label" title="[[label]]">[[label]]</h2>
  <span class="omnibar-result-group-context" title="[[context]]">[[context]]</span>
</div>
<ul class="omnibar-result-list unstyled-list"></ul>

      </script>
    
      <script id="omnibar-result-list-item-template" type="text/html">
        [[#url]]
  <a href="[[&url]]" class="omnibar-result-label">[[&label]]</a>
[[/url]]
[[^url]]
  <span class="omnibar-result-label">[[&label]]</span>
[[/url]]
[[#context]]
  <span class="omnibar-result-context">[[context]]</span>
[[/context]]

      </script>
    
  </div>




  
  


<script src="https://d301sr5gafysq2.cloudfront.net/d2de90cfe5a1/jsi18n/en/djangojs.js"></script>
<script src="https://d301sr5gafysq2.cloudfront.net/d2de90cfe5a1/dist/webpack/vendor.js"></script>
<script src="https://d301sr5gafysq2.cloudfront.net/d2de90cfe5a1/dist/webpack/app.js"></script>


<script>
  (function () {
    var ga = document.createElement('script');
    ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
    ga.setAttribute('async', 'true');
    var s = document.getElementsByTagName('script')[0];
    s.parentNode.insertBefore(ga, s);
  }());
</script>
<script async src="https://www.google-analytics.com/analytics.js"></script>

<script type="text/javascript">window.NREUM||(NREUM={});NREUM.info={"beacon":"bam.nr-data.net","queueTime":0,"licenseKey":"a2cef8c3d3","agent":"","transactionName":"Z11RZxdWW0cEVkYLDV4XdUYLVEFdClsdAAtEWkZQDlJBGgRFQhFMQl1DXFcZQ10AQkFYBFlUVlEXWEJHAA==","applicationID":"1841284","errorBeacon":"bam.nr-data.net","applicationTime":236}</script>
</body>
</html>