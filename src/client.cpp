<!DOCTYPE html>
<html lang="en">
<head>
  
  
  <meta http-equiv="X-UA-Compatible" content="IE=edge" />
  <meta charset="utf-8">
  <title>
  souravb65 / GoBackN 
  / source  / src / client.cpp
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
      
        <a href="/souravb65/gobackn/src/becf44494a1b/src/client.cpp?at=master"
           class="aui-button pjax-trigger" aria-pressed="true">
          Source
        </a>
        <a href="/souravb65/gobackn/diff/src/client.cpp?diff2=becf44494a1b&at=master"
           class="aui-button pjax-trigger"
           title="Diff to previous change">
          Diff
        </a>
        <a href="/souravb65/gobackn/history-node/becf44494a1b/src/client.cpp?at=master"
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
          
        
      
        
          
            <span class="file-name">client.cpp</span>
          
        
      
    
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
       data-path="src/client.cpp"
       data-source-url="/api/internal/repositories/souravb65/gobackn/src/becf44494a1bd0a35f9b3d005acbf9042a160206/src/client.cpp">
    <div id="source-view" class="file-source-container" data-module="repo/source/view-file" data-is-lfs="false">
      <div class="toolbar">
        <div class="primary">
          <div class="aui-buttons">
            
              <button id="file-history-trigger" class="aui-button aui-button-light changeset-info"
                      data-changeset="becf44494a1bd0a35f9b3d005acbf9042a160206"
                      data-path="src/client.cpp"
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
          
          <a href="/souravb65/gobackn/full-commit/becf44494a1b/src/client.cpp" id="full-commit-link"
             title="View full commit becf444">Full commit</a>
        </div>
        <div class="secondary">
          
          <div class="aui-buttons">
            
              <a href="/souravb65/gobackn/annotate/becf44494a1bd0a35f9b3d005acbf9042a160206/src/client.cpp?at=master"
                 class="aui-button aui-button-light pjax-trigger">Blame</a>
              
            
            <a href="/souravb65/gobackn/raw/becf44494a1bd0a35f9b3d005acbf9042a160206/src/client.cpp" class="aui-button aui-button-light">Raw</a>
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
      <table class="codehilite highlighttable"><tr><td class="linenos"><div class="linenodiv"><pre><a href="#client.cpp-1">  1</a>
<a href="#client.cpp-2">  2</a>
<a href="#client.cpp-3">  3</a>
<a href="#client.cpp-4">  4</a>
<a href="#client.cpp-5">  5</a>
<a href="#client.cpp-6">  6</a>
<a href="#client.cpp-7">  7</a>
<a href="#client.cpp-8">  8</a>
<a href="#client.cpp-9">  9</a>
<a href="#client.cpp-10"> 10</a>
<a href="#client.cpp-11"> 11</a>
<a href="#client.cpp-12"> 12</a>
<a href="#client.cpp-13"> 13</a>
<a href="#client.cpp-14"> 14</a>
<a href="#client.cpp-15"> 15</a>
<a href="#client.cpp-16"> 16</a>
<a href="#client.cpp-17"> 17</a>
<a href="#client.cpp-18"> 18</a>
<a href="#client.cpp-19"> 19</a>
<a href="#client.cpp-20"> 20</a>
<a href="#client.cpp-21"> 21</a>
<a href="#client.cpp-22"> 22</a>
<a href="#client.cpp-23"> 23</a>
<a href="#client.cpp-24"> 24</a>
<a href="#client.cpp-25"> 25</a>
<a href="#client.cpp-26"> 26</a>
<a href="#client.cpp-27"> 27</a>
<a href="#client.cpp-28"> 28</a>
<a href="#client.cpp-29"> 29</a>
<a href="#client.cpp-30"> 30</a>
<a href="#client.cpp-31"> 31</a>
<a href="#client.cpp-32"> 32</a>
<a href="#client.cpp-33"> 33</a>
<a href="#client.cpp-34"> 34</a>
<a href="#client.cpp-35"> 35</a>
<a href="#client.cpp-36"> 36</a>
<a href="#client.cpp-37"> 37</a>
<a href="#client.cpp-38"> 38</a>
<a href="#client.cpp-39"> 39</a>
<a href="#client.cpp-40"> 40</a>
<a href="#client.cpp-41"> 41</a>
<a href="#client.cpp-42"> 42</a>
<a href="#client.cpp-43"> 43</a>
<a href="#client.cpp-44"> 44</a>
<a href="#client.cpp-45"> 45</a>
<a href="#client.cpp-46"> 46</a>
<a href="#client.cpp-47"> 47</a>
<a href="#client.cpp-48"> 48</a>
<a href="#client.cpp-49"> 49</a>
<a href="#client.cpp-50"> 50</a>
<a href="#client.cpp-51"> 51</a>
<a href="#client.cpp-52"> 52</a>
<a href="#client.cpp-53"> 53</a>
<a href="#client.cpp-54"> 54</a>
<a href="#client.cpp-55"> 55</a>
<a href="#client.cpp-56"> 56</a>
<a href="#client.cpp-57"> 57</a>
<a href="#client.cpp-58"> 58</a>
<a href="#client.cpp-59"> 59</a>
<a href="#client.cpp-60"> 60</a>
<a href="#client.cpp-61"> 61</a>
<a href="#client.cpp-62"> 62</a>
<a href="#client.cpp-63"> 63</a>
<a href="#client.cpp-64"> 64</a>
<a href="#client.cpp-65"> 65</a>
<a href="#client.cpp-66"> 66</a>
<a href="#client.cpp-67"> 67</a>
<a href="#client.cpp-68"> 68</a>
<a href="#client.cpp-69"> 69</a>
<a href="#client.cpp-70"> 70</a>
<a href="#client.cpp-71"> 71</a>
<a href="#client.cpp-72"> 72</a>
<a href="#client.cpp-73"> 73</a>
<a href="#client.cpp-74"> 74</a>
<a href="#client.cpp-75"> 75</a>
<a href="#client.cpp-76"> 76</a>
<a href="#client.cpp-77"> 77</a>
<a href="#client.cpp-78"> 78</a>
<a href="#client.cpp-79"> 79</a>
<a href="#client.cpp-80"> 80</a>
<a href="#client.cpp-81"> 81</a>
<a href="#client.cpp-82"> 82</a>
<a href="#client.cpp-83"> 83</a>
<a href="#client.cpp-84"> 84</a>
<a href="#client.cpp-85"> 85</a>
<a href="#client.cpp-86"> 86</a>
<a href="#client.cpp-87"> 87</a>
<a href="#client.cpp-88"> 88</a>
<a href="#client.cpp-89"> 89</a>
<a href="#client.cpp-90"> 90</a>
<a href="#client.cpp-91"> 91</a>
<a href="#client.cpp-92"> 92</a>
<a href="#client.cpp-93"> 93</a>
<a href="#client.cpp-94"> 94</a>
<a href="#client.cpp-95"> 95</a>
<a href="#client.cpp-96"> 96</a>
<a href="#client.cpp-97"> 97</a>
<a href="#client.cpp-98"> 98</a>
<a href="#client.cpp-99"> 99</a>
<a href="#client.cpp-100">100</a>
<a href="#client.cpp-101">101</a>
<a href="#client.cpp-102">102</a>
<a href="#client.cpp-103">103</a>
<a href="#client.cpp-104">104</a>
<a href="#client.cpp-105">105</a>
<a href="#client.cpp-106">106</a>
<a href="#client.cpp-107">107</a>
<a href="#client.cpp-108">108</a>
<a href="#client.cpp-109">109</a>
<a href="#client.cpp-110">110</a>
<a href="#client.cpp-111">111</a>
<a href="#client.cpp-112">112</a>
<a href="#client.cpp-113">113</a>
<a href="#client.cpp-114">114</a>
<a href="#client.cpp-115">115</a>
<a href="#client.cpp-116">116</a>
<a href="#client.cpp-117">117</a>
<a href="#client.cpp-118">118</a>
<a href="#client.cpp-119">119</a>
<a href="#client.cpp-120">120</a>
<a href="#client.cpp-121">121</a>
<a href="#client.cpp-122">122</a>
<a href="#client.cpp-123">123</a>
<a href="#client.cpp-124">124</a>
<a href="#client.cpp-125">125</a>
<a href="#client.cpp-126">126</a>
<a href="#client.cpp-127">127</a>
<a href="#client.cpp-128">128</a>
<a href="#client.cpp-129">129</a>
<a href="#client.cpp-130">130</a>
<a href="#client.cpp-131">131</a>
<a href="#client.cpp-132">132</a>
<a href="#client.cpp-133">133</a>
<a href="#client.cpp-134">134</a>
<a href="#client.cpp-135">135</a>
<a href="#client.cpp-136">136</a>
<a href="#client.cpp-137">137</a>
<a href="#client.cpp-138">138</a>
<a href="#client.cpp-139">139</a>
<a href="#client.cpp-140">140</a>
<a href="#client.cpp-141">141</a>
<a href="#client.cpp-142">142</a>
<a href="#client.cpp-143">143</a>
<a href="#client.cpp-144">144</a>
<a href="#client.cpp-145">145</a>
<a href="#client.cpp-146">146</a>
<a href="#client.cpp-147">147</a>
<a href="#client.cpp-148">148</a>
<a href="#client.cpp-149">149</a>
<a href="#client.cpp-150">150</a>
<a href="#client.cpp-151">151</a>
<a href="#client.cpp-152">152</a>
<a href="#client.cpp-153">153</a>
<a href="#client.cpp-154">154</a>
<a href="#client.cpp-155">155</a>
<a href="#client.cpp-156">156</a>
<a href="#client.cpp-157">157</a>
<a href="#client.cpp-158">158</a>
<a href="#client.cpp-159">159</a>
<a href="#client.cpp-160">160</a>
<a href="#client.cpp-161">161</a>
<a href="#client.cpp-162">162</a>
<a href="#client.cpp-163">163</a>
<a href="#client.cpp-164">164</a>
<a href="#client.cpp-165">165</a>
<a href="#client.cpp-166">166</a>
<a href="#client.cpp-167">167</a>
<a href="#client.cpp-168">168</a>
<a href="#client.cpp-169">169</a>
<a href="#client.cpp-170">170</a>
<a href="#client.cpp-171">171</a>
<a href="#client.cpp-172">172</a>
<a href="#client.cpp-173">173</a>
<a href="#client.cpp-174">174</a>
<a href="#client.cpp-175">175</a>
<a href="#client.cpp-176">176</a>
<a href="#client.cpp-177">177</a>
<a href="#client.cpp-178">178</a>
<a href="#client.cpp-179">179</a>
<a href="#client.cpp-180">180</a>
<a href="#client.cpp-181">181</a>
<a href="#client.cpp-182">182</a>
<a href="#client.cpp-183">183</a>
<a href="#client.cpp-184">184</a>
<a href="#client.cpp-185">185</a>
<a href="#client.cpp-186">186</a>
<a href="#client.cpp-187">187</a>
<a href="#client.cpp-188">188</a>
<a href="#client.cpp-189">189</a>
<a href="#client.cpp-190">190</a>
<a href="#client.cpp-191">191</a>
<a href="#client.cpp-192">192</a>
<a href="#client.cpp-193">193</a>
<a href="#client.cpp-194">194</a>
<a href="#client.cpp-195">195</a>
<a href="#client.cpp-196">196</a>
<a href="#client.cpp-197">197</a>
<a href="#client.cpp-198">198</a>
<a href="#client.cpp-199">199</a>
<a href="#client.cpp-200">200</a>
<a href="#client.cpp-201">201</a>
<a href="#client.cpp-202">202</a>
<a href="#client.cpp-203">203</a>
<a href="#client.cpp-204">204</a>
<a href="#client.cpp-205">205</a>
<a href="#client.cpp-206">206</a>
<a href="#client.cpp-207">207</a>
<a href="#client.cpp-208">208</a>
<a href="#client.cpp-209">209</a>
<a href="#client.cpp-210">210</a>
<a href="#client.cpp-211">211</a>
<a href="#client.cpp-212">212</a>
<a href="#client.cpp-213">213</a>
<a href="#client.cpp-214">214</a>
<a href="#client.cpp-215">215</a>
<a href="#client.cpp-216">216</a>
<a href="#client.cpp-217">217</a>
<a href="#client.cpp-218">218</a>
<a href="#client.cpp-219">219</a>
<a href="#client.cpp-220">220</a>
<a href="#client.cpp-221">221</a>
<a href="#client.cpp-222">222</a>
<a href="#client.cpp-223">223</a>
<a href="#client.cpp-224">224</a>
<a href="#client.cpp-225">225</a>
<a href="#client.cpp-226">226</a>
<a href="#client.cpp-227">227</a>
<a href="#client.cpp-228">228</a>
<a href="#client.cpp-229">229</a>
<a href="#client.cpp-230">230</a>
<a href="#client.cpp-231">231</a>
<a href="#client.cpp-232">232</a>
<a href="#client.cpp-233">233</a>
<a href="#client.cpp-234">234</a>
<a href="#client.cpp-235">235</a>
<a href="#client.cpp-236">236</a>
<a href="#client.cpp-237">237</a>
<a href="#client.cpp-238">238</a>
<a href="#client.cpp-239">239</a>
<a href="#client.cpp-240">240</a>
<a href="#client.cpp-241">241</a>
<a href="#client.cpp-242">242</a>
<a href="#client.cpp-243">243</a>
<a href="#client.cpp-244">244</a>
<a href="#client.cpp-245">245</a>
<a href="#client.cpp-246">246</a>
<a href="#client.cpp-247">247</a>
<a href="#client.cpp-248">248</a>
<a href="#client.cpp-249">249</a>
<a href="#client.cpp-250">250</a>
<a href="#client.cpp-251">251</a>
<a href="#client.cpp-252">252</a>
<a href="#client.cpp-253">253</a>
<a href="#client.cpp-254">254</a>
<a href="#client.cpp-255">255</a>
<a href="#client.cpp-256">256</a>
<a href="#client.cpp-257">257</a>
<a href="#client.cpp-258">258</a>
<a href="#client.cpp-259">259</a>
<a href="#client.cpp-260">260</a>
<a href="#client.cpp-261">261</a>
<a href="#client.cpp-262">262</a>
<a href="#client.cpp-263">263</a>
<a href="#client.cpp-264">264</a>
<a href="#client.cpp-265">265</a>
<a href="#client.cpp-266">266</a>
<a href="#client.cpp-267">267</a>
<a href="#client.cpp-268">268</a>
<a href="#client.cpp-269">269</a>
<a href="#client.cpp-270">270</a>
<a href="#client.cpp-271">271</a>
<a href="#client.cpp-272">272</a>
<a href="#client.cpp-273">273</a>
<a href="#client.cpp-274">274</a>
<a href="#client.cpp-275">275</a>
<a href="#client.cpp-276">276</a>
<a href="#client.cpp-277">277</a>
<a href="#client.cpp-278">278</a>
<a href="#client.cpp-279">279</a>
<a href="#client.cpp-280">280</a>
<a href="#client.cpp-281">281</a>
<a href="#client.cpp-282">282</a>
<a href="#client.cpp-283">283</a>
<a href="#client.cpp-284">284</a>
<a href="#client.cpp-285">285</a>
<a href="#client.cpp-286">286</a>
<a href="#client.cpp-287">287</a>
<a href="#client.cpp-288">288</a>
<a href="#client.cpp-289">289</a>
<a href="#client.cpp-290">290</a>
<a href="#client.cpp-291">291</a>
<a href="#client.cpp-292">292</a>
<a href="#client.cpp-293">293</a>
<a href="#client.cpp-294">294</a>
<a href="#client.cpp-295">295</a>
<a href="#client.cpp-296">296</a>
<a href="#client.cpp-297">297</a>
<a href="#client.cpp-298">298</a>
<a href="#client.cpp-299">299</a>
<a href="#client.cpp-300">300</a>
<a href="#client.cpp-301">301</a>
<a href="#client.cpp-302">302</a>
<a href="#client.cpp-303">303</a>
<a href="#client.cpp-304">304</a>
<a href="#client.cpp-305">305</a>
<a href="#client.cpp-306">306</a>
<a href="#client.cpp-307">307</a>
<a href="#client.cpp-308">308</a>
<a href="#client.cpp-309">309</a>
<a href="#client.cpp-310">310</a>
<a href="#client.cpp-311">311</a>
<a href="#client.cpp-312">312</a>
<a href="#client.cpp-313">313</a>
<a href="#client.cpp-314">314</a>
<a href="#client.cpp-315">315</a>
<a href="#client.cpp-316">316</a>
<a href="#client.cpp-317">317</a>
<a href="#client.cpp-318">318</a>
<a href="#client.cpp-319">319</a>
<a href="#client.cpp-320">320</a>
<a href="#client.cpp-321">321</a>
<a href="#client.cpp-322">322</a>
<a href="#client.cpp-323">323</a>
<a href="#client.cpp-324">324</a>
<a href="#client.cpp-325">325</a>
<a href="#client.cpp-326">326</a>
<a href="#client.cpp-327">327</a>
<a href="#client.cpp-328">328</a>
<a href="#client.cpp-329">329</a>
<a href="#client.cpp-330">330</a>
<a href="#client.cpp-331">331</a>
<a href="#client.cpp-332">332</a>
<a href="#client.cpp-333">333</a>
<a href="#client.cpp-334">334</a>
<a href="#client.cpp-335">335</a>
<a href="#client.cpp-336">336</a>
<a href="#client.cpp-337">337</a>
<a href="#client.cpp-338">338</a>
<a href="#client.cpp-339">339</a>
<a href="#client.cpp-340">340</a>
<a href="#client.cpp-341">341</a>
<a href="#client.cpp-342">342</a>
<a href="#client.cpp-343">343</a>
<a href="#client.cpp-344">344</a>
<a href="#client.cpp-345">345</a>
<a href="#client.cpp-346">346</a>
<a href="#client.cpp-347">347</a>
<a href="#client.cpp-348">348</a>
<a href="#client.cpp-349">349</a>
<a href="#client.cpp-350">350</a>
<a href="#client.cpp-351">351</a>
<a href="#client.cpp-352">352</a>
<a href="#client.cpp-353">353</a>
<a href="#client.cpp-354">354</a>
<a href="#client.cpp-355">355</a>
<a href="#client.cpp-356">356</a>
<a href="#client.cpp-357">357</a>
<a href="#client.cpp-358">358</a>
<a href="#client.cpp-359">359</a>
<a href="#client.cpp-360">360</a>
<a href="#client.cpp-361">361</a>
<a href="#client.cpp-362">362</a>
<a href="#client.cpp-363">363</a>
<a href="#client.cpp-364">364</a>
<a href="#client.cpp-365">365</a>
<a href="#client.cpp-366">366</a>
<a href="#client.cpp-367">367</a>
<a href="#client.cpp-368">368</a>
<a href="#client.cpp-369">369</a>
<a href="#client.cpp-370">370</a>
<a href="#client.cpp-371">371</a>
<a href="#client.cpp-372">372</a>
<a href="#client.cpp-373">373</a>
<a href="#client.cpp-374">374</a>
<a href="#client.cpp-375">375</a>
<a href="#client.cpp-376">376</a>
<a href="#client.cpp-377">377</a>
<a href="#client.cpp-378">378</a>
<a href="#client.cpp-379">379</a>
<a href="#client.cpp-380">380</a>
<a href="#client.cpp-381">381</a>
<a href="#client.cpp-382">382</a>
<a href="#client.cpp-383">383</a>
<a href="#client.cpp-384">384</a>
<a href="#client.cpp-385">385</a>
<a href="#client.cpp-386">386</a>
<a href="#client.cpp-387">387</a>
<a href="#client.cpp-388">388</a>
<a href="#client.cpp-389">389</a>
<a href="#client.cpp-390">390</a>
<a href="#client.cpp-391">391</a>
<a href="#client.cpp-392">392</a>
<a href="#client.cpp-393">393</a>
<a href="#client.cpp-394">394</a>
<a href="#client.cpp-395">395</a>
<a href="#client.cpp-396">396</a>
<a href="#client.cpp-397">397</a>
<a href="#client.cpp-398">398</a>
<a href="#client.cpp-399">399</a>
<a href="#client.cpp-400">400</a>
<a href="#client.cpp-401">401</a>
<a href="#client.cpp-402">402</a>
<a href="#client.cpp-403">403</a>
<a href="#client.cpp-404">404</a>
<a href="#client.cpp-405">405</a>
<a href="#client.cpp-406">406</a>
<a href="#client.cpp-407">407</a>
<a href="#client.cpp-408">408</a>
<a href="#client.cpp-409">409</a>
<a href="#client.cpp-410">410</a>
<a href="#client.cpp-411">411</a>
<a href="#client.cpp-412">412</a>
<a href="#client.cpp-413">413</a>
<a href="#client.cpp-414">414</a>
<a href="#client.cpp-415">415</a>
<a href="#client.cpp-416">416</a>
<a href="#client.cpp-417">417</a>
<a href="#client.cpp-418">418</a>
<a href="#client.cpp-419">419</a>
<a href="#client.cpp-420">420</a>
<a href="#client.cpp-421">421</a>
<a href="#client.cpp-422">422</a>
<a href="#client.cpp-423">423</a>
<a href="#client.cpp-424">424</a>
<a href="#client.cpp-425">425</a>
<a href="#client.cpp-426">426</a>
<a href="#client.cpp-427">427</a>
<a href="#client.cpp-428">428</a>
<a href="#client.cpp-429">429</a>
<a href="#client.cpp-430">430</a>
<a href="#client.cpp-431">431</a>
<a href="#client.cpp-432">432</a>
<a href="#client.cpp-433">433</a>
<a href="#client.cpp-434">434</a>
<a href="#client.cpp-435">435</a>
<a href="#client.cpp-436">436</a>
<a href="#client.cpp-437">437</a>
<a href="#client.cpp-438">438</a>
<a href="#client.cpp-439">439</a>
<a href="#client.cpp-440">440</a>
<a href="#client.cpp-441">441</a>
<a href="#client.cpp-442">442</a>
<a href="#client.cpp-443">443</a>
<a href="#client.cpp-444">444</a>
<a href="#client.cpp-445">445</a>
<a href="#client.cpp-446">446</a>
<a href="#client.cpp-447">447</a>
<a href="#client.cpp-448">448</a>
<a href="#client.cpp-449">449</a>
<a href="#client.cpp-450">450</a>
<a href="#client.cpp-451">451</a>
<a href="#client.cpp-452">452</a>
<a href="#client.cpp-453">453</a>
<a href="#client.cpp-454">454</a>
<a href="#client.cpp-455">455</a>
<a href="#client.cpp-456">456</a>
<a href="#client.cpp-457">457</a>
<a href="#client.cpp-458">458</a>
<a href="#client.cpp-459">459</a>
<a href="#client.cpp-460">460</a>
<a href="#client.cpp-461">461</a>
<a href="#client.cpp-462">462</a>
<a href="#client.cpp-463">463</a></pre></div></td><td class="code"><div class="codehilite highlight"><pre><span></span><a name="client.cpp-1"></a><span class="cm">/*</span>
<a name="client.cpp-2"></a><span class="cm"> * How to compile?</span>
<a name="client.cpp-3"></a><span class="cm"> *</span>
<a name="client.cpp-4"></a><span class="cm"> * g++ -g -o client client.cpp -std=c++0x -pthread</span>
<a name="client.cpp-5"></a><span class="cm"> *</span>
<a name="client.cpp-6"></a><span class="cm"> */</span>
<a name="client.cpp-7"></a>
<a name="client.cpp-8"></a>
<a name="client.cpp-9"></a><span class="cp">#include</span> <span class="cpf">&lt;stdio.h&gt;</span><span class="cp"></span>
<a name="client.cpp-10"></a><span class="cp">#include</span> <span class="cpf">&lt;stdlib.h&gt;</span><span class="cp"></span>
<a name="client.cpp-11"></a><span class="cp">#include</span> <span class="cpf">&lt;unistd.h&gt;</span><span class="cp"></span>
<a name="client.cpp-12"></a><span class="cp">#include</span> <span class="cpf">&lt;string.h&gt;</span><span class="cp"></span>
<a name="client.cpp-13"></a><span class="cp">#include</span> <span class="cpf">&lt;sys/types.h&gt;</span><span class="cp"></span>
<a name="client.cpp-14"></a><span class="cp">#include</span> <span class="cpf">&lt;sys/socket.h&gt;</span><span class="cp"></span>
<a name="client.cpp-15"></a><span class="cp">#include</span> <span class="cpf">&lt;netinet/in.h&gt;</span><span class="cp"></span>
<a name="client.cpp-16"></a><span class="cp">#include</span> <span class="cpf">&lt;netdb.h&gt;</span><span class="cp"></span>
<a name="client.cpp-17"></a><span class="cp">#include</span> <span class="cpf">&lt;errno.h&gt;      /* for errno and EINTR */</span><span class="cp"></span>
<a name="client.cpp-18"></a><span class="cp">#include</span> <span class="cpf">&lt;iostream&gt;</span><span class="cp"></span>
<a name="client.cpp-19"></a><span class="cp">#include</span> <span class="cpf">&lt;pthread.h&gt;</span><span class="cp"></span>
<a name="client.cpp-20"></a><span class="cp">#include</span> <span class="cpf">&lt;cstdlib&gt;</span><span class="cp"></span>
<a name="client.cpp-21"></a><span class="cp">#include</span> <span class="cpf">&lt;ev.h&gt;</span><span class="cp"></span>
<a name="client.cpp-22"></a><span class="cp">#include</span> <span class="cpf">&lt;fstream&gt;</span><span class="cp"></span>
<a name="client.cpp-23"></a><span class="cp">#include</span> <span class="cpf">&lt;algorithm&gt;</span><span class="cp"></span>
<a name="client.cpp-24"></a><span class="cp">#include</span> <span class="cpf">&lt;vector&gt;</span><span class="cp"></span>
<a name="client.cpp-25"></a><span class="cp">#include</span> <span class="cpf">&lt;mutex&gt;</span><span class="cp"></span>
<a name="client.cpp-26"></a><span class="cp">#include</span> <span class="cpf">&lt;ctime&gt;</span><span class="cp"></span>
<a name="client.cpp-27"></a><span class="cp">#include</span> <span class="cpf">&lt;time.h&gt;</span><span class="cp"></span>
<a name="client.cpp-28"></a>
<a name="client.cpp-29"></a>
<a name="client.cpp-30"></a>
<a name="client.cpp-31"></a><span class="cp">#define TIMEOUT_SECS 3</span>
<a name="client.cpp-32"></a><span class="cp">#define MAX_RESEND 10</span>
<a name="client.cpp-33"></a><span class="cp">#define NUM_THREADS 2</span>
<a name="client.cpp-34"></a><span class="cp">#define DATA 1</span>
<a name="client.cpp-35"></a><span class="cp">#define ACK 2</span>
<a name="client.cpp-36"></a>
<a name="client.cpp-37"></a>
<a name="client.cpp-38"></a>
<a name="client.cpp-39"></a><span class="k">using</span> <span class="k">namespace</span> <span class="n">std</span><span class="p">;</span>
<a name="client.cpp-40"></a>
<a name="client.cpp-41"></a><span class="cm">/* Global variables */</span>
<a name="client.cpp-42"></a>
<a name="client.cpp-43"></a><span class="kt">int</span> <span class="n">tries</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>
<a name="client.cpp-44"></a><span class="kt">int</span> <span class="n">windowSize</span> <span class="o">=</span> <span class="mi">7</span><span class="p">;</span>
<a name="client.cpp-45"></a><span class="k">const</span> <span class="kt">int</span> <span class="n">fixed_windowSize</span><span class="o">=</span><span class="mi">7</span><span class="p">;</span>
<a name="client.cpp-46"></a><span class="kt">int</span> <span class="n">sendflag</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span>
<a name="client.cpp-47"></a><span class="kt">int</span> <span class="n">nPackets</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>   <span class="c1">//Number of packets to be send</span>
<a name="client.cpp-48"></a><span class="kt">int</span> <span class="n">chunkSize</span> <span class="o">=</span> <span class="mi">20</span><span class="p">;</span> <span class="c1">// Chunk size in bytes</span>
<a name="client.cpp-49"></a><span class="kt">int</span> <span class="n">packet_received</span> <span class="o">=</span> <span class="o">-</span><span class="mi">1</span><span class="p">;</span>	<span class="cm">/* highest ack received */</span>
<a name="client.cpp-50"></a><span class="kt">int</span> <span class="n">packet_sent</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>		<span class="cm">/* highest packet sent */</span>
<a name="client.cpp-51"></a><span class="k">struct</span> <span class="n">Packet</span><span class="o">*</span> <span class="n">send_list</span><span class="p">[</span><span class="n">fixed_windowSize</span><span class="p">];</span>
<a name="client.cpp-52"></a><span class="kt">bool</span> <span class="n">ACK_list</span><span class="p">[</span><span class="n">fixed_windowSize</span><span class="p">]</span> <span class="o">=</span> <span class="p">{</span> <span class="nb">false</span> <span class="p">};</span>
<a name="client.cpp-53"></a><span class="k">struct</span> <span class="n">tm</span><span class="o">*</span> <span class="n">timeout_list</span><span class="p">[</span><span class="n">fixed_windowSize</span><span class="p">]</span> <span class="o">=</span> <span class="p">{</span><span class="mi">0</span><span class="p">};</span>
<a name="client.cpp-54"></a>
<a name="client.cpp-55"></a>
<a name="client.cpp-56"></a><span class="n">mutex</span> <span class="n">mtx_send_list</span><span class="p">,</span> <span class="n">mtx_ACK_arr</span><span class="p">;</span>
<a name="client.cpp-57"></a>
<a name="client.cpp-58"></a>
<a name="client.cpp-59"></a><span class="kt">void</span> <span class="nf">error</span> <span class="p">(</span><span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">errorMessage</span><span class="p">);</span>	<span class="cm">/* Error handling function */</span>
<a name="client.cpp-60"></a><span class="kt">void</span> <span class="nf">CatchAlarm</span> <span class="p">(</span><span class="kt">int</span> <span class="n">ignored</span><span class="p">);</span>	<span class="cm">/* Handler for SIGALRM */</span>
<a name="client.cpp-61"></a>
<a name="client.cpp-62"></a>
<a name="client.cpp-63"></a><span class="kt">void</span> <span class="nf">CatchAlarm</span> <span class="p">(</span><span class="kt">int</span> <span class="n">ignored</span><span class="p">)</span>	<span class="cm">/* Handler for SIGALRM */</span>
<a name="client.cpp-64"></a><span class="p">{</span>
<a name="client.cpp-65"></a>  <span class="n">tries</span> <span class="o">+=</span> <span class="mi">1</span><span class="p">;</span>
<a name="client.cpp-66"></a>  <span class="n">sendflag</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span>
<a name="client.cpp-67"></a><span class="p">}</span>
<a name="client.cpp-68"></a>
<a name="client.cpp-69"></a><span class="kt">void</span> <span class="nf">error</span><span class="p">(</span><span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">errorMessage</span><span class="p">)</span>
<a name="client.cpp-70"></a><span class="p">{</span>
<a name="client.cpp-71"></a>    <span class="n">perror</span><span class="p">(</span><span class="n">errorMessage</span><span class="p">);</span>
<a name="client.cpp-72"></a>    <span class="n">exit</span><span class="p">(</span><span class="mi">1</span><span class="p">);</span>
<a name="client.cpp-73"></a><span class="p">}</span>
<a name="client.cpp-74"></a>
<a name="client.cpp-75"></a><span class="k">struct</span> <span class="n">Packet</span>
<a name="client.cpp-76"></a><span class="p">{</span>
<a name="client.cpp-77"></a> <span class="kt">int</span> <span class="n">type</span><span class="p">;</span>
<a name="client.cpp-78"></a> <span class="cm">/*</span>
<a name="client.cpp-79"></a><span class="cm">  * 1: Data Packet</span>
<a name="client.cpp-80"></a><span class="cm">  * 2: ACK Packet</span>
<a name="client.cpp-81"></a><span class="cm">  *</span>
<a name="client.cpp-82"></a><span class="cm">  *</span>
<a name="client.cpp-83"></a><span class="cm">  */</span>
<a name="client.cpp-84"></a> <span class="kt">int</span> <span class="n">sequence</span><span class="p">;</span>
<a name="client.cpp-85"></a> <span class="cm">/*</span>
<a name="client.cpp-86"></a><span class="cm">  * FOR ACK PACKET : sequence indicates next expected packet.</span>
<a name="client.cpp-87"></a><span class="cm">  *</span>
<a name="client.cpp-88"></a><span class="cm">  *</span>
<a name="client.cpp-89"></a><span class="cm">  * */</span>
<a name="client.cpp-90"></a> <span class="kt">int</span> <span class="n">length</span><span class="p">;</span>
<a name="client.cpp-91"></a> <span class="kt">int</span> <span class="n">more</span><span class="p">;</span>
<a name="client.cpp-92"></a> <span class="kt">char</span> <span class="n">data</span><span class="p">[</span><span class="mi">20</span><span class="p">];</span> <span class="c1">// 10 just for demo.</span>
<a name="client.cpp-93"></a><span class="p">};</span>
<a name="client.cpp-94"></a>
<a name="client.cpp-95"></a><span class="k">struct</span> <span class="n">Con</span>
<a name="client.cpp-96"></a><span class="p">{</span>
<a name="client.cpp-97"></a>    <span class="kt">int</span> <span class="n">sock</span><span class="p">;</span>
<a name="client.cpp-98"></a>    <span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">length</span><span class="p">;</span>
<a name="client.cpp-99"></a>    <span class="k">struct</span> <span class="n">sockaddr_in</span> <span class="n">server</span><span class="p">;</span>
<a name="client.cpp-100"></a>    <span class="k">struct</span> <span class="n">hostent</span> <span class="o">*</span><span class="n">hp</span><span class="p">;</span>
<a name="client.cpp-101"></a>    
<a name="client.cpp-102"></a><span class="p">};</span>
<a name="client.cpp-103"></a>
<a name="client.cpp-104"></a><span class="k">struct</span> <span class="n">thread_data</span><span class="p">{</span>
<a name="client.cpp-105"></a>   <span class="n">std</span><span class="o">::</span><span class="n">vector</span><span class="o">&lt;</span><span class="kt">char</span><span class="o">&gt;</span>  <span class="n">data</span><span class="p">;</span>
<a name="client.cpp-106"></a>   <span class="k">struct</span> <span class="n">Con</span> <span class="n">con</span><span class="p">;</span>
<a name="client.cpp-107"></a><span class="p">};</span>
<a name="client.cpp-108"></a>
<a name="client.cpp-109"></a><span class="n">Con</span> <span class="nf">OpenSock</span><span class="p">(</span><span class="kt">int</span> <span class="n">argc</span><span class="p">,</span> <span class="kt">char</span> <span class="o">*</span><span class="n">argv</span><span class="p">[]){</span>
<a name="client.cpp-110"></a>    <span class="c1">//printf(&quot;%u\n&quot;, argv);</span>
<a name="client.cpp-111"></a>    <span class="c1">//printf(&quot;%s\n&quot;, argv[0]);</span>
<a name="client.cpp-112"></a>    <span class="c1">//printf(&quot;%s\n&quot;, argv[1]);</span>
<a name="client.cpp-113"></a>    <span class="c1">//printf(&quot;%s\n&quot;, argv[2]);</span>
<a name="client.cpp-114"></a>    <span class="c1">//printf(&quot;%d\n&quot;, argc);</span>
<a name="client.cpp-115"></a>    
<a name="client.cpp-116"></a>    <span class="c1">//int sock;</span>
<a name="client.cpp-117"></a>    <span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">length</span><span class="p">;</span>
<a name="client.cpp-118"></a>    <span class="k">struct</span> <span class="n">sockaddr_in</span> <span class="n">server</span><span class="p">;</span>
<a name="client.cpp-119"></a>    <span class="k">struct</span> <span class="n">hostent</span> <span class="o">*</span><span class="n">hp</span><span class="p">;</span>
<a name="client.cpp-120"></a>    <span class="k">struct</span> <span class="n">Con</span> <span class="n">newCon</span><span class="p">;</span>
<a name="client.cpp-121"></a>    
<a name="client.cpp-122"></a>    <span class="k">if</span> <span class="p">(</span><span class="n">argc</span> <span class="o">!=</span> <span class="mi">3</span><span class="p">)</span>
<a name="client.cpp-123"></a>    <span class="p">{</span>
<a name="client.cpp-124"></a>        <span class="n">printf</span><span class="p">(</span><span class="s">&quot;Usage: server port</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span>
<a name="client.cpp-125"></a>        <span class="n">exit</span><span class="p">(</span><span class="mi">1</span><span class="p">);</span>
<a name="client.cpp-126"></a>    <span class="p">}</span>
<a name="client.cpp-127"></a>    
<a name="client.cpp-128"></a>    <span class="cm">/* For best-effort datagram socket using UDP */</span>
<a name="client.cpp-129"></a>    <span class="n">newCon</span><span class="p">.</span><span class="n">sock</span><span class="o">=</span> <span class="n">socket</span><span class="p">(</span><span class="n">AF_INET</span><span class="p">,</span> <span class="n">SOCK_DGRAM</span><span class="p">,</span> <span class="n">IPPROTO_UDP</span><span class="p">);</span>
<a name="client.cpp-130"></a>    
<a name="client.cpp-131"></a>    <span class="c1">//newCon-&gt;sock = sock;</span>
<a name="client.cpp-132"></a>    <span class="c1">//printf(&quot;%d\n&quot;, newCon-&gt;sock);</span>
<a name="client.cpp-133"></a>    <span class="k">if</span> <span class="p">(</span><span class="n">newCon</span><span class="p">.</span><span class="n">sock</span> <span class="o">&lt;</span> <span class="mi">0</span><span class="p">)</span> <span class="n">error</span><span class="p">(</span><span class="s">&quot;socket&quot;</span><span class="p">);</span>
<a name="client.cpp-134"></a>
<a name="client.cpp-135"></a>    <span class="n">newCon</span><span class="p">.</span><span class="n">server</span><span class="p">.</span><span class="n">sin_family</span> <span class="o">=</span> <span class="n">AF_INET</span><span class="p">;</span>
<a name="client.cpp-136"></a>    <span class="n">newCon</span><span class="p">.</span><span class="n">hp</span> <span class="o">=</span> <span class="n">gethostbyname</span><span class="p">(</span><span class="n">argv</span><span class="p">[</span><span class="mi">1</span><span class="p">]);</span>
<a name="client.cpp-137"></a>    
<a name="client.cpp-138"></a>    <span class="k">if</span> <span class="p">(</span><span class="n">newCon</span><span class="p">.</span><span class="n">hp</span><span class="o">==</span><span class="mi">0</span><span class="p">)</span> <span class="n">error</span><span class="p">(</span><span class="s">&quot;Unknown host</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span>
<a name="client.cpp-139"></a>    
<a name="client.cpp-140"></a>    <span class="n">bcopy</span><span class="p">((</span><span class="kt">char</span> <span class="o">*</span><span class="p">)</span><span class="n">newCon</span><span class="p">.</span><span class="n">hp</span><span class="o">-&gt;</span><span class="n">h_addr</span><span class="p">,</span> <span class="p">(</span><span class="kt">char</span> <span class="o">*</span><span class="p">)</span><span class="o">&amp;</span><span class="n">newCon</span><span class="p">.</span><span class="n">server</span><span class="p">.</span><span class="n">sin_addr</span><span class="p">,</span> <span class="n">newCon</span><span class="p">.</span><span class="n">hp</span><span class="o">-&gt;</span><span class="n">h_length</span><span class="p">);</span>
<a name="client.cpp-141"></a>    
<a name="client.cpp-142"></a>    <span class="n">newCon</span><span class="p">.</span><span class="n">server</span><span class="p">.</span><span class="n">sin_port</span> <span class="o">=</span> <span class="n">htons</span><span class="p">(</span><span class="n">atoi</span><span class="p">(</span><span class="n">argv</span><span class="p">[</span><span class="mi">2</span><span class="p">]));</span>
<a name="client.cpp-143"></a>    <span class="n">newCon</span><span class="p">.</span><span class="n">length</span><span class="o">=</span><span class="k">sizeof</span><span class="p">(</span><span class="k">struct</span> <span class="n">sockaddr_in</span><span class="p">);</span>
<a name="client.cpp-144"></a>    <span class="k">return</span><span class="p">(</span><span class="n">newCon</span><span class="p">);</span>
<a name="client.cpp-145"></a>    
<a name="client.cpp-146"></a>    <span class="p">}</span>
<a name="client.cpp-147"></a>
<a name="client.cpp-148"></a>
<a name="client.cpp-149"></a><span class="kt">void</span> <span class="nf">SendPacket</span> <span class="p">(</span> <span class="k">struct</span> <span class="n">Packet</span> <span class="n">packet</span><span class="p">,</span><span class="kt">int</span> <span class="n">length</span><span class="p">,</span> <span class="k">struct</span> <span class="n">Con</span> <span class="n">newCon</span> <span class="p">)</span>
<a name="client.cpp-150"></a><span class="p">{</span>
<a name="client.cpp-151"></a>    <span class="kt">int</span> <span class="n">n</span><span class="o">=</span><span class="n">sendto</span><span class="p">(</span><span class="n">newCon</span><span class="p">.</span><span class="n">sock</span><span class="p">,</span><span class="o">&amp;</span><span class="n">packet</span><span class="p">.</span><span class="n">data</span><span class="p">,</span>
<a name="client.cpp-152"></a>            <span class="n">length</span><span class="p">,</span><span class="mi">0</span><span class="p">,(</span><span class="k">const</span> <span class="k">struct</span> <span class="n">sockaddr</span> <span class="o">*</span><span class="p">)</span><span class="o">&amp;</span><span class="n">newCon</span><span class="p">.</span><span class="n">server</span><span class="p">,</span><span class="n">newCon</span><span class="p">.</span><span class="n">length</span><span class="p">);</span>
<a name="client.cpp-153"></a>    <span class="k">if</span> <span class="p">(</span><span class="n">n</span> <span class="o">&lt;</span> <span class="mi">0</span><span class="p">)</span> <span class="n">error</span><span class="p">(</span><span class="s">&quot;Error in : Sendto in SendPacket.</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span>
<a name="client.cpp-154"></a>
<a name="client.cpp-155"></a><span class="p">}</span>
<a name="client.cpp-156"></a>
<a name="client.cpp-157"></a><span class="kt">void</span> <span class="o">*</span><span class="nf">SendMessage</span> <span class="p">(</span><span class="kt">void</span> <span class="o">*</span> <span class="n">t_data</span> <span class="p">)</span>
<a name="client.cpp-158"></a><span class="p">{</span>
<a name="client.cpp-159"></a>
<a name="client.cpp-160"></a>
<a name="client.cpp-161"></a>	<span class="k">struct</span> <span class="n">thread_data</span><span class="o">*</span> <span class="n">th_data</span> <span class="o">=</span> <span class="p">(</span><span class="k">struct</span> <span class="n">thread_data</span> <span class="o">*</span><span class="p">)</span> <span class="n">t_data</span><span class="p">;</span>
<a name="client.cpp-162"></a>	<span class="n">std</span><span class="o">::</span> <span class="n">vector</span><span class="o">&lt;</span><span class="kt">char</span><span class="o">&gt;</span> <span class="n">message</span> <span class="o">=</span> <span class="n">th_data</span><span class="o">-&gt;</span><span class="n">data</span><span class="p">;</span>
<a name="client.cpp-163"></a>	<span class="k">struct</span> <span class="n">Con</span> <span class="n">newCon</span> <span class="o">=</span> <span class="n">th_data</span><span class="o">-&gt;</span><span class="n">con</span><span class="p">;</span>
<a name="client.cpp-164"></a>
<a name="client.cpp-165"></a>	<span class="k">for</span><span class="p">(</span><span class="kt">int</span> <span class="n">i</span><span class="o">=</span><span class="mi">0</span><span class="p">;</span><span class="n">i</span><span class="o">&lt;</span><span class="n">message</span><span class="p">.</span><span class="n">size</span><span class="p">();</span><span class="n">i</span><span class="o">++</span><span class="p">)</span>
<a name="client.cpp-166"></a>		<span class="n">cout</span><span class="o">&lt;&lt;</span><span class="n">message</span><span class="p">[</span><span class="n">i</span><span class="p">];</span>
<a name="client.cpp-167"></a>	<span class="n">cout</span><span class="o">&lt;&lt;</span> <span class="n">endl</span><span class="p">;</span>
<a name="client.cpp-168"></a>
<a name="client.cpp-169"></a>    <span class="kt">int</span> <span class="n">length</span> <span class="o">=</span> <span class="k">sizeof</span><span class="p">(</span><span class="kt">char</span><span class="p">)</span> <span class="o">*</span> <span class="n">message</span><span class="p">.</span><span class="n">size</span><span class="p">();</span>   <span class="c1">//Message size in bytes</span>
<a name="client.cpp-170"></a>    
<a name="client.cpp-171"></a>    <span class="n">nPackets</span> <span class="o">=</span> <span class="n">length</span> <span class="o">/</span> <span class="n">chunkSize</span><span class="p">;</span>
<a name="client.cpp-172"></a>    <span class="k">if</span><span class="p">(</span><span class="n">length</span> <span class="o">%</span> <span class="n">chunkSize</span><span class="p">)</span>
<a name="client.cpp-173"></a>        <span class="n">nPackets</span><span class="o">++</span><span class="p">;</span>
<a name="client.cpp-174"></a>
<a name="client.cpp-175"></a>    <span class="k">while</span><span class="p">(</span><span class="mi">1</span><span class="p">)</span>
<a name="client.cpp-176"></a>    <span class="p">{</span>
<a name="client.cpp-177"></a>        
<a name="client.cpp-178"></a>		<span class="k">while</span> <span class="p">((</span><span class="n">packet_received</span> <span class="o">&lt;</span> <span class="n">nPackets</span><span class="o">-</span><span class="mi">1</span><span class="p">)</span> <span class="o">&amp;&amp;</span> <span class="p">(</span><span class="n">tries</span> <span class="o">&lt;</span> <span class="n">MAX_RESEND</span><span class="p">))</span>
<a name="client.cpp-179"></a>		<span class="p">{</span>
<a name="client.cpp-180"></a>			<span class="k">if</span> <span class="p">(</span><span class="n">sendflag</span> <span class="o">&gt;</span> <span class="mi">0</span><span class="p">)</span>
<a name="client.cpp-181"></a>			<span class="p">{</span>
<a name="client.cpp-182"></a>				<span class="n">sendflag</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>
<a name="client.cpp-183"></a>
<a name="client.cpp-184"></a>				<span class="k">while</span><span class="p">((</span><span class="n">packet_sent</span><span class="p">)</span> <span class="o">&lt;</span> <span class="n">windowSize</span><span class="p">)</span>
<a name="client.cpp-185"></a>				<span class="p">{</span>
<a name="client.cpp-186"></a>					<span class="c1">//packet_sent = min(max(base+ctr, packet_sent), nPackets -1);</span>
<a name="client.cpp-187"></a>
<a name="client.cpp-188"></a>					<span class="k">struct</span> <span class="n">Packet</span> <span class="o">*</span><span class="n">cur_packet</span> <span class="o">=</span> <span class="k">new</span> <span class="k">struct</span> <span class="n">Packet</span><span class="p">;</span>
<a name="client.cpp-189"></a>					<span class="k">if</span><span class="p">(</span><span class="n">packet_sent</span> <span class="o">&lt;</span> <span class="n">nPackets</span><span class="p">)</span>
<a name="client.cpp-190"></a>					<span class="p">{</span>
<a name="client.cpp-191"></a>						<span class="n">memset</span><span class="p">(</span><span class="n">cur_packet</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="k">sizeof</span><span class="p">(</span><span class="k">struct</span> <span class="n">Packet</span><span class="p">));</span>
<a name="client.cpp-192"></a>						<span class="c1">//cout &lt;&lt; &quot;0&quot;;</span>
<a name="client.cpp-193"></a>						<span class="n">printf</span> <span class="p">(</span><span class="s">&quot;sending packet: %d , packet_sent: %d , packet_received: %d</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span>
<a name="client.cpp-194"></a>						  <span class="n">packet_sent</span><span class="p">,</span> <span class="n">packet_sent</span><span class="p">,</span> <span class="n">packet_received</span><span class="p">);</span>
<a name="client.cpp-195"></a>						<span class="c1">//printf(&quot;%d\n&quot;,cur_packet-&gt;type);</span>
<a name="client.cpp-196"></a>						<span class="n">cur_packet</span><span class="o">-&gt;</span><span class="n">type</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span>
<a name="client.cpp-197"></a>						<span class="n">cout</span><span class="o">&lt;&lt;</span> <span class="s">&quot;type: &quot;</span> <span class="o">&lt;&lt;</span> <span class="n">cur_packet</span><span class="o">-&gt;</span><span class="n">type</span> <span class="o">&lt;&lt;</span><span class="n">endl</span><span class="p">;</span>
<a name="client.cpp-198"></a>						<span class="n">cur_packet</span><span class="o">-&gt;</span><span class="n">sequence</span> <span class="o">=</span> <span class="n">packet_sent</span><span class="p">;</span>
<a name="client.cpp-199"></a>						<span class="n">cout</span><span class="o">&lt;&lt;</span> <span class="s">&quot;Sequence: &quot;</span> <span class="o">&lt;&lt;</span> <span class="n">cur_packet</span><span class="o">-&gt;</span><span class="n">sequence</span> <span class="o">&lt;&lt;</span> <span class="n">endl</span><span class="p">;</span>
<a name="client.cpp-200"></a>
<a name="client.cpp-201"></a>						<span class="cm">/* Only last packet can be of smaller chunk size*/</span>
<a name="client.cpp-202"></a>						<span class="kt">int</span> <span class="n">cur_length</span><span class="p">;</span>
<a name="client.cpp-203"></a>
<a name="client.cpp-204"></a>						<span class="k">if</span> <span class="p">((</span><span class="n">length</span> <span class="o">-</span> <span class="p">(</span><span class="n">packet_sent</span> <span class="o">*</span> <span class="n">chunkSize</span><span class="p">))</span> <span class="o">&gt;=</span> <span class="n">chunkSize</span><span class="p">)</span>
<a name="client.cpp-205"></a>						<span class="p">{</span>
<a name="client.cpp-206"></a>							<span class="n">cur_length</span> <span class="o">=</span> <span class="n">chunkSize</span><span class="p">;</span>
<a name="client.cpp-207"></a>							<span class="n">cur_packet</span><span class="o">-&gt;</span><span class="n">more</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span>
<a name="client.cpp-208"></a>						<span class="p">}</span>
<a name="client.cpp-209"></a>						<span class="k">else</span>
<a name="client.cpp-210"></a>						<span class="p">{</span>
<a name="client.cpp-211"></a>							<span class="n">cur_length</span> <span class="o">=</span> <span class="n">length</span> <span class="o">%</span> <span class="n">chunkSize</span><span class="p">;</span>
<a name="client.cpp-212"></a>							<span class="n">cur_packet</span><span class="o">-&gt;</span><span class="n">more</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>
<a name="client.cpp-213"></a>						<span class="p">}</span>
<a name="client.cpp-214"></a>
<a name="client.cpp-215"></a>						<span class="c1">//cout &lt;&lt; cur_length &lt;&lt; &quot; hi \n&quot;;</span>
<a name="client.cpp-216"></a>						<span class="c1">//cout &lt;&lt; cur_packet-&gt;more &lt;&lt; &quot; hi1\n&quot;;</span>
<a name="client.cpp-217"></a>
<a name="client.cpp-218"></a>
<a name="client.cpp-219"></a>						<span class="n">cur_packet</span><span class="o">-&gt;</span><span class="n">length</span> <span class="o">=</span> <span class="n">cur_length</span><span class="p">;</span>
<a name="client.cpp-220"></a>						<span class="n">string</span> <span class="n">str</span><span class="p">;</span>
<a name="client.cpp-221"></a>
<a name="client.cpp-222"></a>						<span class="k">for</span><span class="p">(</span><span class="kt">int</span> <span class="n">i</span><span class="o">=</span><span class="n">packet_sent</span> <span class="o">*</span> <span class="n">chunkSize</span><span class="p">,</span><span class="n">j</span><span class="o">=</span><span class="mi">0</span><span class="p">;</span><span class="n">i</span><span class="o">&lt;</span> <span class="n">packet_sent</span> <span class="o">*</span> <span class="n">chunkSize</span> <span class="o">+</span> <span class="n">cur_length</span><span class="p">;</span><span class="n">i</span><span class="o">++</span><span class="p">,</span><span class="n">j</span><span class="o">++</span><span class="p">)</span>
<a name="client.cpp-223"></a>							<span class="n">cur_packet</span><span class="o">-&gt;</span><span class="n">data</span><span class="p">[</span><span class="n">j</span><span class="p">]</span><span class="o">=</span><span class="n">message</span><span class="p">[</span><span class="n">i</span><span class="p">];</span>
<a name="client.cpp-224"></a>
<a name="client.cpp-225"></a>
<a name="client.cpp-226"></a>						<span class="k">for</span><span class="p">(</span><span class="kt">int</span> <span class="n">j</span><span class="o">=</span><span class="mi">0</span><span class="p">;</span><span class="n">j</span><span class="o">&lt;</span><span class="mi">20</span><span class="p">;</span><span class="n">j</span><span class="o">++</span><span class="p">)</span>
<a name="client.cpp-227"></a>							<span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="n">cur_packet</span><span class="o">-&gt;</span><span class="n">data</span><span class="p">[</span><span class="n">j</span><span class="p">];</span>
<a name="client.cpp-228"></a>						<span class="n">printf</span><span class="p">(</span><span class="s">&quot;</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span>
<a name="client.cpp-229"></a>						<span class="c1">//cout &lt;&lt; cur_packet-&gt;data.length() &lt;&lt; &quot;\n&quot;;</span>
<a name="client.cpp-230"></a>						<span class="c1">//SendPacket(cur_packet, cur_length, newCon);</span>
<a name="client.cpp-231"></a>						<span class="n">mtx_send_list</span><span class="p">.</span><span class="n">lock</span><span class="p">();</span>
<a name="client.cpp-232"></a>						<span class="n">send_list</span><span class="p">[(</span><span class="n">packet_sent</span><span class="p">)</span> <span class="o">%</span> <span class="n">fixed_windowSize</span><span class="p">]</span> <span class="o">=</span> <span class="n">cur_packet</span><span class="p">;</span>
<a name="client.cpp-233"></a>						<span class="n">mtx_send_list</span><span class="p">.</span><span class="n">unlock</span><span class="p">();</span>
<a name="client.cpp-234"></a>
<a name="client.cpp-235"></a>						<span class="n">mtx_ACK_arr</span><span class="p">.</span><span class="n">lock</span><span class="p">();</span>
<a name="client.cpp-236"></a>						<span class="n">ACK_list</span><span class="p">[(</span><span class="n">packet_sent</span><span class="p">)</span> <span class="o">%</span> <span class="n">fixed_windowSize</span><span class="p">]</span> <span class="o">=</span> <span class="nb">false</span><span class="p">;</span>
<a name="client.cpp-237"></a>						<span class="n">mtx_ACK_arr</span><span class="p">.</span><span class="n">unlock</span><span class="p">();</span>
<a name="client.cpp-238"></a>
<a name="client.cpp-239"></a>						<span class="kt">int</span> <span class="n">n</span><span class="o">=</span><span class="n">sendto</span><span class="p">(</span><span class="n">newCon</span><span class="p">.</span><span class="n">sock</span><span class="p">,</span><span class="n">cur_packet</span><span class="p">,</span>
<a name="client.cpp-240"></a>								<span class="k">sizeof</span><span class="p">(</span><span class="k">struct</span> <span class="n">Packet</span><span class="p">),</span><span class="mi">0</span><span class="p">,(</span><span class="k">const</span> <span class="k">struct</span> <span class="n">sockaddr</span> <span class="o">*</span><span class="p">)</span><span class="o">&amp;</span><span class="n">newCon</span><span class="p">.</span><span class="n">server</span><span class="p">,</span><span class="n">newCon</span><span class="p">.</span><span class="n">length</span><span class="p">);</span>
<a name="client.cpp-241"></a>						<span class="c1">//printf(&quot;%d \n&quot;, cur_packet-&gt;data.length());</span>
<a name="client.cpp-242"></a>						<span class="n">printf</span><span class="p">(</span><span class="s">&quot;%d </span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span><span class="n">n</span><span class="p">);</span>
<a name="client.cpp-243"></a>						<span class="k">for</span><span class="p">(</span><span class="kt">int</span> <span class="n">i</span><span class="o">=</span><span class="mi">0</span><span class="p">;</span><span class="n">i</span><span class="o">&lt;</span> <span class="mi">20</span><span class="p">;</span><span class="n">i</span><span class="o">++</span><span class="p">)</span>
<a name="client.cpp-244"></a>							<span class="n">cout</span><span class="o">&lt;&lt;</span> <span class="n">cur_packet</span><span class="o">-&gt;</span><span class="n">data</span><span class="p">[</span><span class="n">i</span><span class="p">];</span>
<a name="client.cpp-245"></a>
<a name="client.cpp-246"></a>						<span class="n">cout</span>  <span class="o">&lt;&lt;</span> <span class="s">&quot;</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">;</span>
<a name="client.cpp-247"></a>						<span class="k">if</span> <span class="p">(</span><span class="n">n</span> <span class="o">&lt;</span> <span class="mi">0</span><span class="p">)</span> <span class="n">error</span><span class="p">(</span><span class="s">&quot;Error in : Sendto in SendPacket.</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span>
<a name="client.cpp-248"></a>						<span class="c1">//free(cur_packet);</span>
<a name="client.cpp-249"></a>						<span class="kt">time_t</span> <span class="n">t</span> <span class="o">=</span> <span class="n">time</span><span class="p">(</span><span class="mi">0</span><span class="p">);</span>   <span class="c1">// get time now</span>
<a name="client.cpp-250"></a>						<span class="k">struct</span> <span class="n">tm</span> <span class="o">*</span> <span class="n">now</span> <span class="o">=</span> <span class="n">localtime</span><span class="p">(</span> <span class="o">&amp;</span> <span class="n">t</span> <span class="p">);</span>
<a name="client.cpp-251"></a>						<span class="n">now</span><span class="o">-&gt;</span><span class="n">tm_sec</span> <span class="o">=</span>  <span class="n">now</span><span class="o">-&gt;</span><span class="n">tm_sec</span> <span class="o">+</span> <span class="mi">5</span><span class="p">;</span>
<a name="client.cpp-252"></a>						<span class="n">timeout_list</span><span class="p">[(</span><span class="n">packet_sent</span><span class="p">)</span> <span class="o">%</span> <span class="n">fixed_windowSize</span><span class="p">]</span> <span class="o">=</span> <span class="n">now</span><span class="p">;</span>
<a name="client.cpp-253"></a>
<a name="client.cpp-254"></a>						<span class="cm">/*cout &lt;&lt; (now-&gt;tm_year + 1900) &lt;&lt; &#39;-&#39;</span>
<a name="client.cpp-255"></a><span class="cm">							 &lt;&lt; (now-&gt;tm_mon) &lt;&lt; &#39;-&#39;</span>
<a name="client.cpp-256"></a><span class="cm">							 &lt;&lt;  now-&gt;tm_mday &lt;&lt; &#39;-&#39;</span>
<a name="client.cpp-257"></a><span class="cm">							 &lt;&lt; now-&gt;tm_hour &lt;&lt; &#39;-&#39;</span>
<a name="client.cpp-258"></a><span class="cm">							 &lt;&lt; (now-&gt;tm_min +5) &lt;&lt; &#39;-&#39;</span>
<a name="client.cpp-259"></a><span class="cm">							 &lt;&lt; (now-&gt;tm_sec + 5)</span>
<a name="client.cpp-260"></a><span class="cm">						     &lt;&lt; endl;*/</span>
<a name="client.cpp-261"></a>						<span class="n">packet_sent</span><span class="o">++</span><span class="p">;</span>
<a name="client.cpp-262"></a>					<span class="p">}</span>
<a name="client.cpp-263"></a>
<a name="client.cpp-264"></a>				<span class="p">}</span>
<a name="client.cpp-265"></a>
<a name="client.cpp-266"></a>
<a name="client.cpp-267"></a>			<span class="p">}</span>
<a name="client.cpp-268"></a>
<a name="client.cpp-269"></a>
<a name="client.cpp-270"></a>
<a name="client.cpp-271"></a>		<span class="p">}</span>
<a name="client.cpp-272"></a>    <span class="p">}</span>
<a name="client.cpp-273"></a>
<a name="client.cpp-274"></a>    <span class="cm">/*for(int ctr=0;ctr&lt;10;ctr++)</span>
<a name="client.cpp-275"></a><span class="cm">    {</span>
<a name="client.cpp-276"></a><span class="cm">        Packet retrans;</span>
<a name="client.cpp-277"></a>
<a name="client.cpp-278"></a>
<a name="client.cpp-279"></a>
<a name="client.cpp-280"></a><span class="cm">    }*/</span>
<a name="client.cpp-281"></a>
<a name="client.cpp-282"></a><span class="p">}</span>
<a name="client.cpp-283"></a>
<a name="client.cpp-284"></a>
<a name="client.cpp-285"></a>
<a name="client.cpp-286"></a>
<a name="client.cpp-287"></a><span class="kt">void</span> <span class="o">*</span><span class="nf">RcvAck</span> <span class="p">(</span><span class="kt">void</span> <span class="o">*</span> <span class="n">t_data</span><span class="p">)</span>
<a name="client.cpp-288"></a><span class="p">{</span>
<a name="client.cpp-289"></a>	<span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="s">&quot;inside RCVACK&quot;</span> <span class="o">&lt;&lt;</span> <span class="s">&quot;</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">;</span>
<a name="client.cpp-290"></a>
<a name="client.cpp-291"></a>	<span class="n">thread_data</span> <span class="o">*</span> <span class="n">th_data</span> <span class="o">=</span> <span class="p">(</span><span class="n">thread_data</span> <span class="o">*</span><span class="p">)</span> <span class="n">t_data</span><span class="p">;</span>
<a name="client.cpp-292"></a>	<span class="c1">//std:: vector&lt;char&gt; message = th_data-&gt;data;</span>
<a name="client.cpp-293"></a>	<span class="k">struct</span> <span class="n">Con</span> <span class="n">newCon</span> <span class="o">=</span> <span class="n">th_data</span><span class="o">-&gt;</span><span class="n">con</span><span class="p">;</span>
<a name="client.cpp-294"></a>
<a name="client.cpp-295"></a>	<span class="k">struct</span> <span class="n">Packet</span><span class="o">*</span> <span class="n">cur_ACK</span><span class="p">;</span>
<a name="client.cpp-296"></a>
<a name="client.cpp-297"></a>	<span class="kt">int</span> <span class="n">chunkSize</span> <span class="o">=</span> <span class="mi">20</span><span class="p">;</span> <span class="c1">// Chunk size in bytes</span>
<a name="client.cpp-298"></a>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">fromSize</span><span class="p">;</span>	<span class="cm">/* In-out of address size for recvfrom() */</span>
<a name="client.cpp-299"></a>	<span class="k">struct</span> <span class="n">sockaddr_in</span> <span class="n">fromAddr</span><span class="p">;</span>	<span class="cm">/* Source address of echo */</span>
<a name="client.cpp-300"></a>	<span class="kt">int</span> <span class="n">respLen</span><span class="p">;</span>			<span class="cm">/* Size of received datagram */</span>
<a name="client.cpp-301"></a>
<a name="client.cpp-302"></a>
<a name="client.cpp-303"></a>	<span class="c1">// Response Part</span>
<a name="client.cpp-304"></a>	<span class="k">while</span><span class="p">(</span><span class="mi">1</span><span class="p">)</span>
<a name="client.cpp-305"></a>	<span class="p">{</span>
<a name="client.cpp-306"></a>		<span class="n">fromSize</span> <span class="o">=</span> <span class="k">sizeof</span><span class="p">(</span><span class="n">fromAddr</span><span class="p">);</span>
<a name="client.cpp-307"></a>		<span class="c1">//alarm(TIMEOUT_SECS); /* Set the timeout */</span>
<a name="client.cpp-308"></a>		<span class="n">cur_ACK</span> <span class="o">=</span> <span class="k">new</span> <span class="k">struct</span> <span class="n">Packet</span><span class="p">;</span>
<a name="client.cpp-309"></a>
<a name="client.cpp-310"></a>			<span class="cm">/*while (respLen = (recvfrom(newCon.sock, cur_ACK, sizeof(struct Packet), 0,</span>
<a name="client.cpp-311"></a><span class="cm">					(struct sockaddr *) &amp;fromAddr, &amp;newCon.length)) &lt; 0)</span>
<a name="client.cpp-312"></a><span class="cm">				if (errno == EINTR) //Alarm went off</span>
<a name="client.cpp-313"></a><span class="cm">				{</span>
<a name="client.cpp-314"></a><span class="cm">					if (tries &lt; MAX_RESEND) // incremented by signal handler</span>
<a name="client.cpp-315"></a><span class="cm">					{</span>
<a name="client.cpp-316"></a><span class="cm">						printf(&quot;Timed out, Remaining tries: %d\n&quot;,</span>
<a name="client.cpp-317"></a><span class="cm">								MAX_RESEND - tries);</span>
<a name="client.cpp-318"></a><span class="cm">						break;</span>
<a name="client.cpp-319"></a><span class="cm">						// Have to implement timeout</span>
<a name="client.cpp-320"></a><span class="cm">					} else</span>
<a name="client.cpp-321"></a><span class="cm">						error(&quot;No Response&quot;);</span>
<a name="client.cpp-322"></a><span class="cm">				} else</span>
<a name="client.cpp-323"></a><span class="cm">					error(&quot;recvfrom() failed&quot;);*/</span>
<a name="client.cpp-324"></a>			<span class="c1">//cout &lt;&lt; &quot;Before RCV function \n&quot;;</span>
<a name="client.cpp-325"></a>
<a name="client.cpp-326"></a>			<span class="kt">time_t</span> <span class="n">now</span><span class="p">;</span>
<a name="client.cpp-327"></a>			<span class="n">time</span><span class="p">(</span><span class="o">&amp;</span><span class="n">now</span><span class="p">);</span>
<a name="client.cpp-328"></a>			<span class="kt">long</span> <span class="n">seconds</span><span class="o">=</span><span class="mi">0</span><span class="p">;</span>
<a name="client.cpp-329"></a>			<span class="k">if</span><span class="p">(</span><span class="n">timeout_list</span><span class="p">[</span><span class="n">packet_received</span><span class="o">+</span><span class="mi">1</span><span class="p">]</span><span class="o">!=</span><span class="mi">0</span><span class="p">)</span>
<a name="client.cpp-330"></a>				<span class="n">seconds</span> <span class="o">=</span> <span class="n">difftime</span><span class="p">(</span><span class="n">mktime</span><span class="p">(</span><span class="n">timeout_list</span><span class="p">[</span><span class="n">packet_received</span><span class="o">+</span><span class="mi">1</span><span class="p">]),</span><span class="n">now</span><span class="p">);</span>
<a name="client.cpp-331"></a>
<a name="client.cpp-332"></a>			<span class="k">if</span><span class="p">(</span><span class="n">timeout_list</span><span class="p">[</span><span class="n">packet_received</span><span class="o">+</span><span class="mi">1</span><span class="p">]</span><span class="o">!=</span><span class="mi">0</span> <span class="o">&amp;&amp;</span>  <span class="n">seconds</span><span class="o">&lt;</span><span class="mi">0</span><span class="p">)</span>
<a name="client.cpp-333"></a>				<span class="n">packet_sent</span> <span class="o">=</span> <span class="n">packet_received</span> <span class="o">+</span> <span class="mi">1</span><span class="p">;</span>
<a name="client.cpp-334"></a>
<a name="client.cpp-335"></a>			<span class="kt">int</span> <span class="n">n</span> <span class="o">=</span> <span class="n">recvfrom</span><span class="p">(</span><span class="n">newCon</span><span class="p">.</span><span class="n">sock</span><span class="p">,</span> <span class="n">cur_ACK</span><span class="p">,</span> <span class="k">sizeof</span><span class="p">(</span><span class="k">struct</span> <span class="n">Packet</span><span class="p">),</span> <span class="mi">0</span><span class="p">,</span>
<a name="client.cpp-336"></a>					<span class="p">(</span><span class="k">struct</span> <span class="n">sockaddr</span> <span class="o">*</span><span class="p">)</span> <span class="o">&amp;</span><span class="n">fromAddr</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">newCon</span><span class="p">.</span><span class="n">length</span><span class="p">);</span>
<a name="client.cpp-337"></a>			<span class="c1">//printf(&quot;RECVFROM n= %d\n&quot;,n);</span>
<a name="client.cpp-338"></a>			<span class="k">if</span> <span class="p">(</span><span class="n">n</span> <span class="o">&gt;</span> <span class="mi">0</span><span class="p">){</span>
<a name="client.cpp-339"></a>
<a name="client.cpp-340"></a>				<span class="kt">int</span> <span class="n">acktype</span> <span class="o">=</span> <span class="n">cur_ACK</span><span class="o">-&gt;</span><span class="n">type</span><span class="p">;</span> <span class="cm">/* convert to host byte order */</span>
<a name="client.cpp-341"></a>				<span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="s">&quot;Received packet type: &quot;</span> <span class="o">&lt;&lt;</span> <span class="n">acktype</span> <span class="o">&lt;&lt;</span> <span class="s">&quot;</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">;</span>
<a name="client.cpp-342"></a>				<span class="kt">int</span> <span class="n">ackno</span> <span class="o">=</span> <span class="n">cur_ACK</span><span class="o">-&gt;</span><span class="n">sequence</span><span class="p">;</span>
<a name="client.cpp-343"></a>				<span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="s">&quot;Received packet sequence: &quot;</span> <span class="o">&lt;&lt;</span> <span class="n">ackno</span> <span class="o">&lt;&lt;</span> <span class="s">&quot;</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">;</span>
<a name="client.cpp-344"></a>				<span class="k">if</span> <span class="p">(</span><span class="n">ackno</span> <span class="o">&gt;</span> <span class="n">packet_received</span> <span class="o">&amp;&amp;</span> <span class="n">acktype</span> <span class="o">==</span> <span class="mi">2</span><span class="p">)</span> <span class="p">{</span>
<a name="client.cpp-345"></a>					<span class="n">printf</span><span class="p">(</span><span class="s">&quot;received ack of %d </span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">ackno</span><span class="p">);</span> <span class="cm">/* received ack */</span>
<a name="client.cpp-346"></a>					<span class="n">mtx_ACK_arr</span><span class="p">.</span><span class="n">lock</span><span class="p">();</span>
<a name="client.cpp-347"></a>					<span class="k">for</span><span class="p">(</span><span class="kt">int</span> <span class="n">i</span><span class="o">=</span><span class="p">(</span><span class="n">packet_received</span><span class="o">+</span><span class="mi">1</span><span class="p">);</span> <span class="n">i</span><span class="o">&lt;=</span> <span class="n">ackno</span><span class="p">;</span><span class="n">i</span><span class="o">++</span><span class="p">)</span>
<a name="client.cpp-348"></a>						<span class="n">ACK_list</span><span class="p">[</span><span class="n">i</span> <span class="o">%</span> <span class="n">fixed_windowSize</span><span class="p">]</span> <span class="o">=</span> <span class="nb">true</span><span class="p">;</span>
<a name="client.cpp-349"></a>					<span class="n">mtx_ACK_arr</span><span class="p">.</span><span class="n">unlock</span><span class="p">();</span>
<a name="client.cpp-350"></a>
<a name="client.cpp-351"></a>
<a name="client.cpp-352"></a>					<span class="n">mtx_send_list</span><span class="p">.</span><span class="n">lock</span><span class="p">();</span>
<a name="client.cpp-353"></a>					<span class="k">for</span><span class="p">(</span><span class="kt">int</span> <span class="n">i</span><span class="o">=</span><span class="p">(</span><span class="n">packet_received</span><span class="o">+</span><span class="mi">1</span><span class="p">);</span> <span class="n">i</span><span class="o">&lt;=</span> <span class="n">ackno</span><span class="p">;</span><span class="n">i</span><span class="o">++</span><span class="p">)</span>
<a name="client.cpp-354"></a>						<span class="n">send_list</span><span class="p">[</span><span class="n">i</span><span class="p">]</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span>
<a name="client.cpp-355"></a>					<span class="n">mtx_send_list</span><span class="p">.</span><span class="n">unlock</span><span class="p">();</span>
<a name="client.cpp-356"></a>					<span class="n">windowSize</span> <span class="o">=</span> <span class="n">windowSize</span> <span class="o">+</span> <span class="p">(</span><span class="n">ackno</span> <span class="o">-</span> <span class="n">packet_received</span><span class="p">);</span>
<a name="client.cpp-357"></a>					<span class="n">packet_received</span> <span class="o">=</span> <span class="n">ackno</span><span class="p">;</span>
<a name="client.cpp-358"></a>
<a name="client.cpp-359"></a>
<a name="client.cpp-360"></a>					<span class="n">sendflag</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span>
<a name="client.cpp-361"></a>
<a name="client.cpp-362"></a>					<span class="c1">//windowSize = windowSize + (ackno - packet_received - 1);</span>
<a name="client.cpp-363"></a>					<span class="c1">//packet_received = ackno - 1;</span>
<a name="client.cpp-364"></a>					<span class="n">printf</span><span class="p">(</span><span class="s">&quot;windowSize: %d </span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">windowSize</span><span class="p">);</span>
<a name="client.cpp-365"></a>
<a name="client.cpp-366"></a>					<span class="c1">//base = packet_received; /* handle new ack */</span>
<a name="client.cpp-367"></a>					<span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="s">&quot;packet RCVD : &quot;</span> <span class="o">&lt;&lt;</span> <span class="n">packet_received</span> <span class="o">&lt;&lt;</span> <span class="s">&quot;packet Sent: &quot;</span> <span class="o">&lt;&lt;</span> <span class="n">packet_sent</span> <span class="o">&lt;&lt;</span> <span class="s">&quot;</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">;</span>
<a name="client.cpp-368"></a>					<span class="cm">/*if (packet_received == packet_sent) // all sent packets acked</span>
<a name="client.cpp-369"></a><span class="cm">					{</span>
<a name="client.cpp-370"></a><span class="cm">						//alarm(0); // clear alarm</span>
<a name="client.cpp-371"></a><span class="cm">						tries = 0;</span>
<a name="client.cpp-372"></a><span class="cm">						sendflag = 1;</span>
<a name="client.cpp-373"></a><span class="cm">						printf(&quot;Hi\n&quot;);</span>
<a name="client.cpp-374"></a><span class="cm">					} else // not all sent packets acked</span>
<a name="client.cpp-375"></a><span class="cm">					{</span>
<a name="client.cpp-376"></a><span class="cm">						tries = 0; // reset retry counter</span>
<a name="client.cpp-377"></a><span class="cm">						sendflag = 0;</span>
<a name="client.cpp-378"></a><span class="cm">						printf(&quot;Hello\n&quot;);</span>
<a name="client.cpp-379"></a><span class="cm">						//alarm(TIMEOUT_SECS); // reset alarm</span>
<a name="client.cpp-380"></a><span class="cm">					}*/</span>
<a name="client.cpp-381"></a>				<span class="p">}</span>
<a name="client.cpp-382"></a>			<span class="p">}</span>
<a name="client.cpp-383"></a>			<span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="s">&quot;After RCV function </span><span class="se">\n</span><span class="s">&quot;</span><span class="p">;</span>
<a name="client.cpp-384"></a>
<a name="client.cpp-385"></a>
<a name="client.cpp-386"></a>	<span class="p">}</span>
<a name="client.cpp-387"></a>
<a name="client.cpp-388"></a>    
<a name="client.cpp-389"></a><span class="p">}</span>
<a name="client.cpp-390"></a>
<a name="client.cpp-391"></a><span class="k">static</span> <span class="n">std</span><span class="o">::</span><span class="n">vector</span><span class="o">&lt;</span><span class="kt">char</span><span class="o">&gt;</span> <span class="n">ReadAllBytes</span><span class="p">(</span><span class="kt">char</span> <span class="k">const</span><span class="o">*</span> <span class="n">filename</span><span class="p">)</span>
<a name="client.cpp-392"></a><span class="p">{</span>
<a name="client.cpp-393"></a>    <span class="n">ifstream</span> <span class="n">ifs</span><span class="p">(</span><span class="n">filename</span><span class="p">,</span> <span class="n">ios</span><span class="o">::</span><span class="n">binary</span><span class="o">|</span><span class="n">ios</span><span class="o">::</span><span class="n">ate</span><span class="p">);</span>
<a name="client.cpp-394"></a>    <span class="n">ifstream</span><span class="o">::</span><span class="n">pos_type</span> <span class="n">pos</span> <span class="o">=</span> <span class="n">ifs</span><span class="p">.</span><span class="n">tellg</span><span class="p">();</span>
<a name="client.cpp-395"></a>
<a name="client.cpp-396"></a>    <span class="n">std</span><span class="o">::</span><span class="n">vector</span><span class="o">&lt;</span><span class="kt">char</span><span class="o">&gt;</span>  <span class="n">result</span><span class="p">(</span><span class="n">pos</span><span class="p">);</span>
<a name="client.cpp-397"></a>
<a name="client.cpp-398"></a>    <span class="n">ifs</span><span class="p">.</span><span class="n">seekg</span><span class="p">(</span><span class="mi">0</span><span class="p">,</span> <span class="n">ios</span><span class="o">::</span><span class="n">beg</span><span class="p">);</span>
<a name="client.cpp-399"></a>    <span class="n">ifs</span><span class="p">.</span><span class="n">read</span><span class="p">(</span><span class="o">&amp;</span><span class="n">result</span><span class="p">[</span><span class="mi">0</span><span class="p">],</span> <span class="n">pos</span><span class="p">);</span>
<a name="client.cpp-400"></a>    <span class="k">for</span><span class="p">(</span><span class="kt">int</span> <span class="n">i</span><span class="o">=</span><span class="mi">0</span><span class="p">;</span><span class="n">i</span><span class="o">&lt;</span><span class="n">result</span><span class="p">.</span><span class="n">size</span><span class="p">();</span><span class="n">i</span><span class="o">++</span><span class="p">)</span>
<a name="client.cpp-401"></a>    	<span class="n">cout</span><span class="o">&lt;&lt;</span><span class="n">result</span><span class="p">[</span><span class="n">i</span><span class="p">];</span>
<a name="client.cpp-402"></a>    <span class="n">cout</span><span class="o">&lt;&lt;</span><span class="n">endl</span><span class="p">;</span>
<a name="client.cpp-403"></a>    <span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="n">result</span><span class="p">.</span><span class="n">size</span><span class="p">()</span> <span class="o">*</span> <span class="k">sizeof</span><span class="p">(</span><span class="kt">char</span><span class="p">);</span>
<a name="client.cpp-404"></a>
<a name="client.cpp-405"></a>    <span class="k">return</span> <span class="n">result</span><span class="p">;</span>
<a name="client.cpp-406"></a><span class="p">}</span>
<a name="client.cpp-407"></a>
<a name="client.cpp-408"></a>
<a name="client.cpp-409"></a><span class="kt">int</span> <span class="n">main</span><span class="p">(</span><span class="kt">int</span> <span class="n">argc</span><span class="p">,</span> <span class="kt">char</span> <span class="o">*</span><span class="n">argv</span><span class="p">[])</span>
<a name="client.cpp-410"></a><span class="p">{</span>
<a name="client.cpp-411"></a>   
<a name="client.cpp-412"></a>   <span class="k">struct</span> <span class="n">Con</span> <span class="n">newCon</span><span class="p">;</span>
<a name="client.cpp-413"></a>   <span class="kt">char</span> <span class="n">buffer</span><span class="p">[</span><span class="mi">1024</span><span class="p">];</span>
<a name="client.cpp-414"></a>   <span class="n">pthread_t</span> <span class="n">send_thread</span><span class="p">,</span> <span class="n">rcv_thread</span><span class="p">;</span>
<a name="client.cpp-415"></a>   <span class="c1">//printf(&quot;%u\n&quot;, argv);</span>
<a name="client.cpp-416"></a>   <span class="c1">//windowSize = htons(atoi(argv[3]));</span>
<a name="client.cpp-417"></a>   <span class="n">newCon</span> <span class="o">=</span> <span class="n">OpenSock</span><span class="p">(</span><span class="n">argc</span><span class="p">,</span> <span class="n">argv</span><span class="p">);</span>
<a name="client.cpp-418"></a>   
<a name="client.cpp-419"></a>   <span class="c1">//printf(&quot;%d\n&quot;, newCon.sock);</span>
<a name="client.cpp-420"></a>   <span class="c1">//printf(&quot;%u\n&quot;, newCon.length);</span>
<a name="client.cpp-421"></a>   <span class="c1">//printf(&quot;%d\n&quot;, &amp;newCon.server.sin_port);</span>
<a name="client.cpp-422"></a>   <span class="c1">//printf(&quot;%u\n&quot;, newCon.hp);</span>
<a name="client.cpp-423"></a>   <span class="n">std</span><span class="o">::</span> <span class="n">vector</span><span class="o">&lt;</span><span class="kt">char</span><span class="o">&gt;</span> <span class="n">vec_buffer</span> <span class="o">=</span> <span class="n">ReadAllBytes</span><span class="p">(</span><span class="s">&quot;file.txt&quot;</span><span class="p">);</span>
<a name="client.cpp-424"></a>   <span class="kt">int</span> <span class="n">a</span> <span class="o">=</span><span class="p">(</span><span class="kt">int</span><span class="p">)</span> <span class="n">vec_buffer</span><span class="p">.</span><span class="n">size</span><span class="p">();</span>
<a name="client.cpp-425"></a>
<a name="client.cpp-426"></a>   <span class="c1">//printf(&quot;Please enter the message: &quot;);</span>
<a name="client.cpp-427"></a>   <span class="c1">//bzero(buffer,buffer.size());</span>
<a name="client.cpp-428"></a>   <span class="c1">//cin &gt;&gt; buffer;</span>
<a name="client.cpp-429"></a>   <span class="k">struct</span> <span class="n">thread_data</span> <span class="n">td</span><span class="p">[</span><span class="n">NUM_THREADS</span><span class="p">];</span>
<a name="client.cpp-430"></a>   <span class="n">td</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">data</span> <span class="o">=</span> <span class="n">vec_buffer</span><span class="p">;</span>
<a name="client.cpp-431"></a>   <span class="n">td</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">con</span> <span class="o">=</span> <span class="n">newCon</span><span class="p">;</span>
<a name="client.cpp-432"></a>
<a name="client.cpp-433"></a>   <span class="n">td</span><span class="p">[</span><span class="mi">1</span><span class="p">].</span><span class="n">data</span> <span class="o">=</span><span class="n">vec_buffer</span> <span class="p">;</span>
<a name="client.cpp-434"></a>   <span class="n">td</span><span class="p">[</span><span class="mi">1</span><span class="p">].</span><span class="n">con</span> <span class="o">=</span> <span class="n">newCon</span><span class="p">;</span>
<a name="client.cpp-435"></a>
<a name="client.cpp-436"></a>   <span class="c1">//SendMessage((void *)&amp;td[0]);</span>
<a name="client.cpp-437"></a>
<a name="client.cpp-438"></a>
<a name="client.cpp-439"></a>   <span class="c1">//sleep(10);</span>
<a name="client.cpp-440"></a>   <span class="k">if</span><span class="p">(</span>  <span class="n">pthread_create</span><span class="p">(</span><span class="o">&amp;</span><span class="n">rcv_thread</span><span class="p">,</span> <span class="nb">NULL</span><span class="p">,</span><span class="n">RcvAck</span><span class="p">,</span> <span class="p">(</span><span class="kt">void</span> <span class="o">*</span><span class="p">)</span><span class="o">&amp;</span><span class="n">td</span><span class="p">[</span><span class="mi">1</span><span class="p">])</span> <span class="o">&lt;</span> <span class="mi">0</span><span class="p">)</span>
<a name="client.cpp-441"></a>    <span class="p">{</span>
<a name="client.cpp-442"></a> 	   <span class="n">perror</span><span class="p">(</span><span class="s">&quot;Unable to create RCVACK thread</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span>
<a name="client.cpp-443"></a>        <span class="k">return</span> <span class="mi">1</span><span class="p">;</span>
<a name="client.cpp-444"></a>    <span class="p">}</span>
<a name="client.cpp-445"></a>
<a name="client.cpp-446"></a>
<a name="client.cpp-447"></a>   <span class="k">if</span><span class="p">(</span> <span class="n">pthread_create</span><span class="p">(</span><span class="o">&amp;</span><span class="n">send_thread</span><span class="p">,</span> <span class="nb">NULL</span><span class="p">,</span><span class="n">SendMessage</span><span class="p">,</span> <span class="p">(</span><span class="kt">void</span> <span class="o">*</span><span class="p">)</span><span class="o">&amp;</span><span class="n">td</span><span class="p">[</span><span class="mi">0</span><span class="p">])</span> <span class="o">&lt;</span> <span class="mi">0</span><span class="p">)</span>
<a name="client.cpp-448"></a>   <span class="p">{</span>
<a name="client.cpp-449"></a>	   <span class="n">perror</span><span class="p">(</span><span class="s">&quot;Unable to create SENDMSG thread</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span>
<a name="client.cpp-450"></a>       <span class="k">return</span> <span class="mi">1</span><span class="p">;</span>
<a name="client.cpp-451"></a>   <span class="p">}</span>
<a name="client.cpp-452"></a>
<a name="client.cpp-453"></a>   <span class="c1">//RcvAck((void *)&amp;td[1]);</span>
<a name="client.cpp-454"></a>   <span class="c1">//SendMessage( vec_buffer, newCon );</span>
<a name="client.cpp-455"></a>   <span class="c1">//RcvMessage(buffer, newCon);</span>
<a name="client.cpp-456"></a>   <span class="c1">//if(send_thread &lt; 0 || rcv_thread &lt; 0)</span>
<a name="client.cpp-457"></a>	   <span class="c1">//error(&quot;Unable create thread.&quot;);</span>
<a name="client.cpp-458"></a>   
<a name="client.cpp-459"></a>   
<a name="client.cpp-460"></a>   <span class="c1">//close(newCon.sock);</span>
<a name="client.cpp-461"></a>   <span class="k">while</span><span class="p">(</span><span class="mi">1</span><span class="p">);</span>
<a name="client.cpp-462"></a>   <span class="k">return</span> <span class="mi">0</span><span class="p">;</span>
<a name="client.cpp-463"></a><span class="p">}</span>
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
         href="#">d2de90cfe5a1 / d2de90cfe5a1 @ app-106</a>
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
                  <a class="pjax-trigger filter-item-link" href="/souravb65/gobackn/src/[[changeset]]/src/client.cpp?at=[[safeName]]"
                     title="[[name]]">
                    [[name]] ([[shortChangeset]])
                  </a>
                </li>
              [[/heads]]
            [[/hasMultipleHeads]]
            [[^hasMultipleHeads]]
              <li class="comprev filter-item">
                <a class="pjax-trigger filter-item-link" href="/souravb65/gobackn/src/[[changeset]]/src/client.cpp?at=[[safeName]]" title="[[name]]">
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
            <a class="pjax-trigger filter-item-link" href="/souravb65/gobackn/src/[[changeset]]/src/client.cpp?at=[[safeName]]" title="[[name]]">
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

<script type="text/javascript">window.NREUM||(NREUM={});NREUM.info={"beacon":"bam.nr-data.net","queueTime":0,"licenseKey":"a2cef8c3d3","agent":"","transactionName":"Z11RZxdWW0cEVkYLDV4XdUYLVEFdClsdAAtEWkZQDlJBGgRFQhFMQl1DXFcZQ10AQkFYBFlUVlEXWEJHAA==","applicationID":"1841284","errorBeacon":"bam.nr-data.net","applicationTime":480}</script>
</body>
</html>