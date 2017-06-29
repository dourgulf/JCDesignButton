#import "IFIcon.h"

/**
 * Devicons icon types.
 */
typedef NS_ENUM(IFIconType, IFDeviconsType) {

    /// Identifier: "devicons-git"
    IFDEVGit                                 = 0xe602,

    /// Identifier: "devicons-git_compare"
    IFDEVGitCompare                          = 0xe628,

    /// Identifier: "devicons-git_branch"
    IFDEVGitBranch                           = 0xe625,

    /// Identifier: "devicons-git_commit"
    IFDEVGitCommit                           = 0xe629,

    /// Identifier: "devicons-git_pull_request"
    IFDEVGitPullRequest                      = 0xe626,

    /// Identifier: "devicons-git_merge"
    IFDEVGitMerge                            = 0xe627,

    /// Identifier: "devicons-bitbucket"
    IFDEVBitbucket                           = 0xe603,

    /// Identifier: "devicons-github_alt"
    IFDEVGithubAlt                           = 0xe608,

    /// Identifier: "devicons-github_badge"
    IFDEVGithubBadge                         = 0xe609,

    /// Identifier: "devicons-github"
    IFDEVGithub                              = 0xe60a,

    /// Identifier: "devicons-github_full"
    IFDEVGithubFull                          = 0xe617,

    /// Identifier: "devicons-java"
    IFDEVJava                                = 0xe638,

    /// Identifier: "devicons-ruby"
    IFDEVRuby                                = 0xe639,

    /// Identifier: "devicons-scala"
    IFDEVScala                               = 0xe637,

    /// Identifier: "devicons-python"
    IFDEVPython                              = 0xe63c,

    /// Identifier: "devicons-go"
    IFDEVGo                                  = 0xe624,

    /// Identifier: "devicons-ruby_on_rails"
    IFDEVRubyOnRails                         = 0xe63b,

    /// Identifier: "devicons-django"
    IFDEVDjango                              = 0xe61d,

    /// Identifier: "devicons-markdown"
    IFDEVMarkdown                            = 0xe63e,

    /// Identifier: "devicons-php"
    IFDEVPhp                                 = 0xe63d,

    /// Identifier: "devicons-mysql"
    IFDEVMysql                               = 0xe604,

    /// Identifier: "devicons-streamline"
    IFDEVStreamline                          = 0xe605,

    /// Identifier: "devicons-database"
    IFDEVDatabase                            = 0xe606,

    /// Identifier: "devicons-laravel"
    IFDEVLaravel                             = 0xe63f,

    /// Identifier: "devicons-javascript"
    IFDEVJavascript                          = 0xe64e,

    /// Identifier: "devicons-angular"
    IFDEVAngular                             = 0xe653,

    /// Identifier: "devicons-backbone"
    IFDEVBackbone                            = 0xe652,

    /// Identifier: "devicons-coffeescript"
    IFDEVCoffeescript                        = 0xe651,

    /// Identifier: "devicons-jquery"
    IFDEVJquery                              = 0xe650,

    /// Identifier: "devicons-modernizr"
    IFDEVModernizr                           = 0xe620,

    /// Identifier: "devicons-jquery_ui"
    IFDEVJqueryUi                            = 0xe654,

    /// Identifier: "devicons-ember"
    IFDEVEmber                               = 0xe61b,

    /// Identifier: "devicons-dojo"
    IFDEVDojo                                = 0xe61c,

    /// Identifier: "devicons-nodejs"
    IFDEVNodejs                              = 0xe619,

    /// Identifier: "devicons-nodejs_small"
    IFDEVNodejsSmall                         = 0xe618,

    /// Identifier: "devicons-javascript_shield"
    IFDEVJavascriptShield                    = 0xe64f,

    /// Identifier: "devicons-bootstrap"
    IFDEVBootstrap                           = 0xe647,

    /// Identifier: "devicons-sass"
    IFDEVSass                                = 0xe64b,

    /// Identifier: "devicons-css3_full"
    IFDEVCss3Full                            = 0xe64a,

    /// Identifier: "devicons-css3"
    IFDEVCss3                                = 0xe649,

    /// Identifier: "devicons-html5"
    IFDEVHtml5                               = 0xe636,

    /// Identifier: "devicons-html5_multimedia"
    IFDEVHtml5Multimedia                     = 0xe632,

    /// Identifier: "devicons-html5_device_access"
    IFDEVHtml5DeviceAccess                   = 0xe633,

    /// Identifier: "devicons-html5_3d_effects"
    IFDEVHtml53dEffects                      = 0xe635,

    /// Identifier: "devicons-html5_connectivity"
    IFDEVHtml5Connectivity                   = 0xe634,

    /// Identifier: "devicons-ghost_small"
    IFDEVGhostSmall                          = 0xe614,

    /// Identifier: "devicons-ghost"
    IFDEVGhost                               = 0xe61f,

    /// Identifier: "devicons-magento"
    IFDEVMagento                             = 0xe640,

    /// Identifier: "devicons-joomla"
    IFDEVJoomla                              = 0xe641,

    /// Identifier: "devicons-jekyll_small"
    IFDEVJekyllSmall                         = 0xe60d,

    /// Identifier: "devicons-drupal"
    IFDEVDrupal                              = 0xe642,

    /// Identifier: "devicons-wordpress"
    IFDEVWordpress                           = 0xe60b,

    /// Identifier: "devicons-grunt"
    IFDEVGrunt                               = 0xe64c,

    /// Identifier: "devicons-bower"
    IFDEVBower                               = 0xe64d,

    /// Identifier: "devicons-npm"
    IFDEVNpm                                 = 0xe61e,

    /// Identifier: "devicons-yahoo_small"
    IFDEVYahooSmall                          = 0xe62b,

    /// Identifier: "devicons-yahoo"
    IFDEVYahoo                               = 0xe615,

    /// Identifier: "devicons-bing_small"
    IFDEVBingSmall                           = 0xe600,

    /// Identifier: "devicons-windows"
    IFDEVWindows                             = 0xe60f,

    /// Identifier: "devicons-linux"
    IFDEVLinux                               = 0xe612,

    /// Identifier: "devicons-ubuntu"
    IFDEVUbuntu                              = 0xe63a,

    /// Identifier: "devicons-android"
    IFDEVAndroid                             = 0xe60e,

    /// Identifier: "devicons-apple"
    IFDEVApple                               = 0xe611,

    /// Identifier: "devicons-appstore"
    IFDEVAppstore                            = 0xe613,

    /// Identifier: "devicons-phonegap"
    IFDEVPhonegap                            = 0xe630,

    /// Identifier: "devicons-blackberry"
    IFDEVBlackberry                          = 0xe623,

    /// Identifier: "devicons-stackoverflow"
    IFDEVStackoverflow                       = 0xe610,

    /// Identifier: "devicons-techcrunch"
    IFDEVTechcrunch                          = 0xe62c,

    /// Identifier: "devicons-codrops"
    IFDEVCodrops                             = 0xe62f,

    /// Identifier: "devicons-css_tricks"
    IFDEVCssTricks                           = 0xe601,

    /// Identifier: "devicons-smashing_magazine"
    IFDEVSmashingMagazine                    = 0xe62d,

    /// Identifier: "devicons-netmagazine"
    IFDEVNetmagazine                         = 0xe62e,

    /// Identifier: "devicons-codepen"
    IFDEVCodepen                             = 0xe616,

    /// Identifier: "devicons-cssdeck"
    IFDEVCssdeck                             = 0xe62a,

    /// Identifier: "devicons-hackernews"
    IFDEVHackernews                          = 0xe61a,

    /// Identifier: "devicons-dropbox"
    IFDEVDropbox                             = 0xe607,

    /// Identifier: "devicons-google_drive"
    IFDEVGoogleDrive                         = 0xe631,

    /// Identifier: "devicons-visualstudio"
    IFDEVVisualstudio                        = 0xe60c,

    /// Identifier: "devicons-unity_small"
    IFDEVUnitySmall                          = 0xe621,

    /// Identifier: "devicons-raspberry_pi"
    IFDEVRaspberryPi                         = 0xe622,

    /// Identifier: "devicons-chrome"
    IFDEVChrome                              = 0xe643,

    /// Identifier: "devicons-ie"
    IFDEVIe                                  = 0xe644,

    /// Identifier: "devicons-firefox"
    IFDEVFirefox                             = 0xe645,

    /// Identifier: "devicons-opera"
    IFDEVOpera                               = 0xe646,

    /// Identifier: "devicons-safari"
    IFDEVSafari                              = 0xe648,

    /// Identifier: "devicons-swift"
    IFDEVSwift                               = 0xe655,

    /// Identifier: "devicons-symfony"
    IFDEVSymfony                             = 0xe656,

    /// Identifier: "devicons-symfony_badge"
    IFDEVSymfonyBadge                        = 0xe657,

    /// Identifier: "devicons-less"
    IFDEVLess                                = 0xe658,

    /// Identifier: "devicons-stylus"
    IFDEVStylus                              = 0xe659,

    /// Identifier: "devicons-trello"
    IFDEVTrello                              = 0xe65a,

    /// Identifier: "devicons-atlassian"
    IFDEVAtlassian                           = 0xe65b,

    /// Identifier: "devicons-jira"
    IFDEVJira                                = 0xe65c,

    /// Identifier: "devicons-envato"
    IFDEVEnvato                              = 0xe65d,

    /// Identifier: "devicons-snap_svg"
    IFDEVSnapSvg                             = 0xe65e,

    /// Identifier: "devicons-raphael"
    IFDEVRaphael                             = 0xe65f,

    /// Identifier: "devicons-google_analytics"
    IFDEVGoogleAnalytics                     = 0xe660,

    /// Identifier: "devicons-compass"
    IFDEVCompass                             = 0xe661,

    /// Identifier: "devicons-onedrive"
    IFDEVOnedrive                            = 0xe662,

    /// Identifier: "devicons-gulp"
    IFDEVGulp                                = 0xe663,

    /// Identifier: "devicons-atom"
    IFDEVAtom                                = 0xe664,

    /// Identifier: "devicons-cisco"
    IFDEVCisco                               = 0xe665,

    /// Identifier: "devicons-nancy"
    IFDEVNancy                               = 0xe666,

    /// Identifier: "devicons-clojure"
    IFDEVClojure                             = 0xe668,

    /// Identifier: "devicons-clojure_alt"
    IFDEVClojureAlt                          = 0xe66a,

    /// Identifier: "devicons-perl"
    IFDEVPerl                                = 0xe669,

    /// Identifier: "devicons-celluloid"
    IFDEVCelluloid                           = 0xe66b,

    /// Identifier: "devicons-w3c"
    IFDEVW3c                                 = 0xe66c,

    /// Identifier: "devicons-redis"
    IFDEVRedis                               = 0xe66d,

    /// Identifier: "devicons-postgresql"
    IFDEVPostgresql                          = 0xe66e,

    /// Identifier: "devicons-webplatform"
    IFDEVWebplatform                         = 0xe66f,

    /// Identifier: "devicons-jenkins"
    IFDEVJenkins                             = 0xe667,

    /// Identifier: "devicons-requirejs"
    IFDEVRequirejs                           = 0xe670,

    /// Identifier: "devicons-opensource"
    IFDEVOpensource                          = 0xe671,

    /// Identifier: "devicons-typo3"
    IFDEVTypo3                               = 0xe672,

    /// Identifier: "devicons-uikit"
    IFDEVUikit                               = 0xe673,

    /// Identifier: "devicons-doctrine"
    IFDEVDoctrine                            = 0xe674,

    /// Identifier: "devicons-groovy"
    IFDEVGroovy                              = 0xe675,

    /// Identifier: "devicons-nginx"
    IFDEVNginx                               = 0xe676,

    /// Identifier: "devicons-haskell"
    IFDEVHaskell                             = 0xe677,

    /// Identifier: "devicons-zend"
    IFDEVZend                                = 0xe678,

    /// Identifier: "devicons-gnu"
    IFDEVGnu                                 = 0xe679,

    /// Identifier: "devicons-yeoman"
    IFDEVYeoman                              = 0xe67a,

    /// Identifier: "devicons-heroku"
    IFDEVHeroku                              = 0xe67b,

    /// Identifier: "devicons-debian"
    IFDEVDebian                              = 0xe67d,

    /// Identifier: "devicons-travis"
    IFDEVTravis                              = 0xe67e,

    /// Identifier: "devicons-dotnet"
    IFDEVDotnet                              = 0xe67f,

    /// Identifier: "devicons-codeigniter"
    IFDEVCodeigniter                         = 0xe680,

    /// Identifier: "devicons-javascript_badge"
    IFDEVJavascriptBadge                     = 0xe681,

    /// Identifier: "devicons-yii"
    IFDEVYii                                 = 0xe682,

    /// Identifier: "devicons-msql_server"
    IFDEVMsqlServer                          = 0xe67c,

    /// Identifier: "devicons-composer"
    IFDEVComposer                            = 0xe683,

    /// Identifier: "devicons-krakenjs_badge"
    IFDEVKrakenjsBadge                       = 0xe684,

    /// Identifier: "devicons-krakenjs"
    IFDEVKrakenjs                            = 0xe685,

    /// Identifier: "devicons-mozilla"
    IFDEVMozilla                             = 0xe686,

    /// Identifier: "devicons-firebase"
    IFDEVFirebase                            = 0xe687,

    /// Identifier: "devicons-sizzlejs"
    IFDEVSizzlejs                            = 0xe688,

    /// Identifier: "devicons-creativecommons"
    IFDEVCreativecommons                     = 0xe689,

    /// Identifier: "devicons-creativecommons_badge"
    IFDEVCreativecommonsBadge                = 0xe68a,

    /// Identifier: "devicons-mitlicence"
    IFDEVMitlicence                          = 0xe68b,

    /// Identifier: "devicons-senchatouch"
    IFDEVSenchatouch                         = 0xe68c,

    /// Identifier: "devicons-bugsense"
    IFDEVBugsense                            = 0xe68d,

    /// Identifier: "devicons-extjs"
    IFDEVExtjs                               = 0xe68e,

    /// Identifier: "devicons-mootools_badge"
    IFDEVMootoolsBadge                       = 0xe68f,

    /// Identifier: "devicons-mootools"
    IFDEVMootools                            = 0xe690,

    /// Identifier: "devicons-ruby_rough"
    IFDEVRubyRough                           = 0xe691,

    /// Identifier: "devicons-komodo"
    IFDEVKomodo                              = 0xe692,

    /// Identifier: "devicons-coda"
    IFDEVCoda                                = 0xe693,

    /// Identifier: "devicons-bintray"
    IFDEVBintray                             = 0xe694,

    /// Identifier: "devicons-terminal"
    IFDEVTerminal                            = 0xe695,

    /// Identifier: "devicons-code"
    IFDEVCode                                = 0xe696,

    /// Identifier: "devicons-responsive"
    IFDEVResponsive                          = 0xe697,

    /// Identifier: "devicons-dart"
    IFDEVDart                                = 0xe698,

    /// Identifier: "devicons-aptana"
    IFDEVAptana                              = 0xe699,

    /// Identifier: "devicons-mailchimp"
    IFDEVMailchimp                           = 0xe69a,

    /// Identifier: "devicons-netbeans"
    IFDEVNetbeans                            = 0xe69b,

    /// Identifier: "devicons-dreamweaver"
    IFDEVDreamweaver                         = 0xe69c,

    /// Identifier: "devicons-brackets"
    IFDEVBrackets                            = 0xe69d,

    /// Identifier: "devicons-eclipse"
    IFDEVEclipse                             = 0xe69e,

    /// Identifier: "devicons-cloud9"
    IFDEVCloud9                              = 0xe69f,

    /// Identifier: "devicons-scrum"
    IFDEVScrum                               = 0xe6a0,

    /// Identifier: "devicons-prolog"
    IFDEVProlog                              = 0xe6a1,

    /// Identifier: "devicons-terminal_badge"
    IFDEVTerminalBadge                       = 0xe6a2,

    /// Identifier: "devicons-code_badge"
    IFDEVCodeBadge                           = 0xe6a3,

    /// Identifier: "devicons-mongodb"
    IFDEVMongodb                             = 0xe6a4,

    /// Identifier: "devicons-meteor"
    IFDEVMeteor                              = 0xe6a5,

    /// Identifier: "devicons-meteorfull"
    IFDEVMeteorfull                          = 0xe6a6,

    /// Identifier: "devicons-fsharp"
    IFDEVFsharp                              = 0xe6a7,

    /// Identifier: "devicons-rust"
    IFDEVRust                                = 0xe6a8,

    /// Identifier: "devicons-ionic"
    IFDEVIonic                               = 0xe6a9,

    /// Identifier: "devicons-sublime"
    IFDEVSublime                             = 0xe6aa,

};

/**
 * Devicons, v1.8.0, https://github.com/vorillaz/devicons
 */
@interface IFDevicons : IFIcon
@end
