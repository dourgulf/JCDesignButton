#import "IFIcon.h"

/**
 * LigatureSymbols icon types.
 */
typedef NS_ENUM(IFIconType, IFLigatureSymbolsType) {

    /// Identifier: "ls-table"
    IFLSTable                               = 0xe127,

    /// Identifier: "ls-copy"
    IFLSCopy                                = 0xe038,

    /// Identifier: "ls-cut"
    IFLSCut                                 = 0xe03b,

    /// Identifier: "ls-backspace"
    IFLSBackspace                           = 0xe010,

    /// Identifier: "ls-alignleft"
    IFLSAlignleft                           = 0xe005,

    /// Identifier: "ls-aligncenter"
    IFLSAligncenter                         = 0xe004,

    /// Identifier: "ls-alignright"
    IFLSAlignright                          = 0xe006,

    /// Identifier: "ls-alignadjust"
    IFLSAlignadjust                         = 0xe003,

    /// Identifier: "ls-italic"
    IFLSItalic                              = 0xe079,

    /// Identifier: "ls-bold"
    IFLSBold                                = 0xe01f,

    /// Identifier: "ls-underline"
    IFLSUnderline                           = 0xe132,

    /// Identifier: "ls-strike"
    IFLSStrike                              = 0xe159,

    /// Identifier: "ls-emphasis"
    IFLSEmphasis                            = 0xe152,

    /// Identifier: "ls-code"
    IFLSCode                                = 0xe032,

    /// Identifier: "ls-link"
    IFLSLink                                = 0xe082,

    /// Identifier: "ls-quote"
    IFLSQuote                               = 0xe10b,

    /// Identifier: "ls-graph"
    IFLSGraph                               = 0xe05b,

    /// Identifier: "ls-magic"
    IFLSMagic                               = 0xe089,

    /// Identifier: "ls-brush"
    IFLSBrush                               = 0xe022,

    /// Identifier: "ls-color"
    IFLSColor                               = 0xe033,

    /// Identifier: "ls-contrast"
    IFLSContrast                            = 0xe001,

    /// Identifier: "ls-ink"
    IFLSInk                                 = 0xe14a,

    /// Identifier: "ls-gradation"
    IFLSGradation                           = 0xe149,

    /// Identifier: "ls-sepia"
    IFLSSepia                               = 0xe14e,

    /// Identifier: "ls-invert"
    IFLSInvert                              = 0xe14b,

    /// Identifier: "ls-paint"
    IFLSPaint                               = 0xe09b,

    /// Identifier: "ls-paramater"
    IFLSParamater                           = 0xe09c,

    /// Identifier: "ls-crop"
    IFLSCrop                                = 0xe039,

    /// Identifier: "ls-check"
    IFLSCheck                               = 0xe029,

    /// Identifier: "ls-checkbox"
    IFLSCheckbox                            = 0xe02a,

    /// Identifier: "ls-checkboxempty"
    IFLSCheckboxempty                       = 0xe02b,

    /// Identifier: "ls-pc"
    IFLSPc                                  = 0xe09e,

    /// Identifier: "ls-keyboard"
    IFLSKeyboard                            = 0xe07d,

    /// Identifier: "ls-mobile"
    IFLSMobile                              = 0xe078,

    /// Identifier: "ls-horizontal"
    IFLSHorizontal                          = 0xe071,

    /// Identifier: "ls-vertical"
    IFLSVertical                            = 0xe138,

    /// Identifier: "ls-web"
    IFLSWeb                                 = 0xe13f,

    /// Identifier: "ls-mail"
    IFLSMail                                = 0xe08a,

    /// Identifier: "ls-shopping"
    IFLSShopping                            = 0xe119,

    /// Identifier: "ls-dashboard"
    IFLSDashboard                           = 0xe03c,

    /// Identifier: "ls-key"
    IFLSKey                                 = 0xe07c,

    /// Identifier: "ls-sns"
    IFLSSns                                 = 0xe11f,

    /// Identifier: "ls-calendar"
    IFLSCalendar                            = 0xe15e,

    /// Identifier: "ls-dailycalendar"
    IFLSDailycalendar                       = 0xe025,

    /// Identifier: "ls-ban"
    IFLSBan                                 = 0xe012,

    /// Identifier: "ls-remove"
    IFLSRemove                              = 0xe10f,

    /// Identifier: "ls-pen"
    IFLSPen                                 = 0xe09f,

    /// Identifier: "ls-eraser"
    IFLSEraser                              = 0xe148,

    /// Identifier: "ls-edit"
    IFLSEdit                                = 0xe041,

    /// Identifier: "ls-tabs"
    IFLSTabs                                = 0xe095,

    /// Identifier: "ls-tag"
    IFLSTag                                 = 0xe128,

    /// Identifier: "ls-setup"
    IFLSSetup                               = 0xe117,

    /// Identifier: "ls-setting"
    IFLSSetting                             = 0xe055,

    /// Identifier: "ls-etc"
    IFLSEtc                                 = 0xe043,

    /// Identifier: "ls-clip"
    IFLSClip                                = 0xe030,

    /// Identifier: "ls-bookmark"
    IFLSBookmark                            = 0xe021,

    /// Identifier: "ls-book"
    IFLSBook                                = 0xe020,

    /// Identifier: "ls-album"
    IFLSAlbum                               = 0xe002,

    /// Identifier: "ls-user"
    IFLSUser                                = 0xe137,

    /// Identifier: "ls-friend"
    IFLSFriend                              = 0xe051,

    /// Identifier: "ls-group"
    IFLSGroup                               = 0xe05c,

    /// Identifier: "ls-frustrate"
    IFLSFrustrate                           = 0xe052,

    /// Identifier: "ls-laugh"
    IFLSLaugh                               = 0xe07f,

    /// Identifier: "ls-wink"
    IFLSWink                                = 0xe081,

    /// Identifier: "ls-smile"
    IFLSSmile                               = 0xe11e,

    /// Identifier: "ls-surprise"
    IFLSSurprise                            = 0xe124,

    /// Identifier: "ls-trouble"
    IFLSTrouble                             = 0xe12d,

    /// Identifier: "ls-male"
    IFLSMale                                = 0xe176,

    /// Identifier: "ls-female"
    IFLSFemale                              = 0xe175,

    /// Identifier: "ls-game"
    IFLSGame                                = 0xe054,

    /// Identifier: "ls-globe"
    IFLSGlobe                               = 0xe058,

    /// Identifier: "ls-home"
    IFLSHome                                = 0xe072,

    /// Identifier: "ls-building"
    IFLSBuilding                            = 0xe023,

    /// Identifier: "ls-rss"
    IFLSRss                                 = 0xe113,

    /// Identifier: "ls-server"
    IFLSServer                              = 0xe16c,

    /// Identifier: "ls-sitemap"
    IFLSSitemap                             = 0xe16d,

    /// Identifier: "ls-app"
    IFLSApp                                 = 0xe009,

    /// Identifier: "ls-memo"
    IFLSMemo                                = 0xe08d,

    /// Identifier: "ls-meal"
    IFLSMeal                                = 0xe08c,

    /// Identifier: "ls-coffee"
    IFLSCoffee                              = 0xe146,

    /// Identifier: "ls-spa"
    IFLSSpa                                 = 0xe177,

    /// Identifier: "ls-college"
    IFLSCollege                             = 0xe174,

    /// Identifier: "ls-bag"
    IFLSBag                                 = 0xe173,

    /// Identifier: "ls-present"
    IFLSPresent                             = 0xe109,

    /// Identifier: "ls-umbrella"
    IFLSUmbrella                            = 0xe178,

    /// Identifier: "ls-twinkle"
    IFLSTwinkle                             = 0xe073,

    /// Identifier: "ls-crown"
    IFLSCrown                               = 0xe03a,

    /// Identifier: "ls-category"
    IFLSCategory                            = 0xe028,

    /// Identifier: "ls-circle"
    IFLSCircle                              = 0xe02e,

    /// Identifier: "ls-info"
    IFLSInfo                                = 0xe075,

    /// Identifier: "ls-help"
    IFLSHelp                                = 0xe070,

    /// Identifier: "ls-refreshbutton"
    IFLSRefreshbutton                       = 0xe14d,

    /// Identifier: "ls-terminal"
    IFLSTerminal                            = 0xe16e,

    /// Identifier: "ls-file"
    IFLSFile                                = 0xe048,

    /// Identifier: "ls-print"
    IFLSPrint                               = 0xe10a,

    /// Identifier: "ls-delete"
    IFLSDelete                              = 0xe12c,

    /// Identifier: "ls-clear"
    IFLSClear                               = 0xe02f,

    /// Identifier: "ls-save"
    IFLSSave                                = 0xe115,

    /// Identifier: "ls-upload"
    IFLSUpload                              = 0xe136,

    /// Identifier: "ls-cloud"
    IFLSCloud                               = 0xe031,

    /// Identifier: "ls-folder"
    IFLSFolder                              = 0xe04c,

    /// Identifier: "ls-camera"
    IFLSCamera                              = 0xe026,

    /// Identifier: "ls-photo"
    IFLSPhoto                               = 0xe101,

    /// Identifier: "ls-image"
    IFLSImage                               = 0xe074,

    /// Identifier: "ls-barcode"
    IFLSBarcode                             = 0xe013,

    /// Identifier: "ls-phone"
    IFLSPhone                               = 0xe100,

    /// Identifier: "ls-music"
    IFLSMusic                               = 0xe094,

    /// Identifier: "ls-video"
    IFLSVideo                               = 0xe139,

    /// Identifier: "ls-playmedia"
    IFLSPlaymedia                           = 0xe107,

    /// Identifier: "ls-record"
    IFLSRecord                              = 0xe10d,

    /// Identifier: "ls-play"
    IFLSPlay                                = 0xe106,

    /// Identifier: "ls-pause"
    IFLSPause                               = 0xe09d,

    /// Identifier: "ls-stop"
    IFLSStop                                = 0xe123,

    /// Identifier: "ls-eject"
    IFLSEject                               = 0xe042,

    /// Identifier: "ls-bell"
    IFLSBell                                = 0xe014,

    /// Identifier: "ls-volumeup"
    IFLSVolumeup                            = 0xe13d,

    /// Identifier: "ls-volumedown"
    IFLSVolumedown                          = 0xe13c,

    /// Identifier: "ls-volume"
    IFLSVolume                              = 0xe13b,

    /// Identifier: "ls-off"
    IFLSOff                                 = 0xe098,

    /// Identifier: "ls-light"
    IFLSLight                               = 0xe14c,

    /// Identifier: "ls-dark"
    IFLSDark                                = 0xe147,

    /// Identifier: "ls-lock"
    IFLSLock                                = 0xe086,

    /// Identifier: "ls-unlock"
    IFLSUnlock                              = 0xe134,

    /// Identifier: "ls-flag"
    IFLSFlag                                = 0xe04a,

    /// Identifier: "ls-wifi"
    IFLSWifi                                = 0xe140,

    /// Identifier: "ls-time"
    IFLSTime                                = 0xe12b,

    /// Identifier: "ls-map"
    IFLSMap                                 = 0xe08b,

    /// Identifier: "ls-geo"
    IFLSGeo                                 = 0xe056,

    /// Identifier: "ls-location"
    IFLSLocation                            = 0xe085,

    /// Identifier: "ls-pin"
    IFLSPin                                 = 0xe103,

    /// Identifier: "ls-walking"
    IFLSWalking                             = 0xe13e,

    /// Identifier: "ls-bicycle"
    IFLSBicycle                             = 0xe015,

    /// Identifier: "ls-car"
    IFLSCar                                 = 0xe027,

    /// Identifier: "ls-bus"
    IFLSBus                                 = 0xe024,

    /// Identifier: "ls-plane"
    IFLSPlane                               = 0xe105,

    /// Identifier: "ls-compass"
    IFLSCompass                             = 0xe036,

    /// Identifier: "ls-cursor"
    IFLSCursor                              = 0xe166,

    /// Identifier: "ls-pointer"
    IFLSPointer                             = 0xe16b,

    /// Identifier: "ls-grab"
    IFLSGrab                                = 0xe169,

    /// Identifier: "ls-arrowup"
    IFLSArrowup                             = 0xe00e,

    /// Identifier: "ls-arrowright"
    IFLSArrowright                          = 0xe00d,

    /// Identifier: "ls-arrowdown"
    IFLSArrowdown                           = 0xe00b,

    /// Identifier: "ls-arrowleft"
    IFLSArrowleft                           = 0xe00c,

    /// Identifier: "ls-up"
    IFLSUp                                  = 0xe135,

    /// Identifier: "ls-right"
    IFLSRight                               = 0xe112,

    /// Identifier: "ls-down"
    IFLSDown                                = 0xe03e,

    /// Identifier: "ls-left"
    IFLSLeft                                = 0xe080,

    /// Identifier: "ls-back"
    IFLSBack                                = 0xe00f,

    /// Identifier: "ls-next"
    IFLSNext                                = 0xe096,

    /// Identifier: "ls-dropdown"
    IFLSDropdown                            = 0xe040,

    /// Identifier: "ls-sort"
    IFLSSort                                = 0xe120,

    /// Identifier: "ls-good"
    IFLSGood                                = 0xe059,

    /// Identifier: "ls-bad"
    IFLSBad                                 = 0xe011,

    /// Identifier: "ls-full"
    IFLSFull                                = 0xe053,

    /// Identifier: "ls-small"
    IFLSSmall                               = 0xe11d,

    /// Identifier: "ls-move"
    IFLSMove                                = 0xe093,

    /// Identifier: "ls-undo"
    IFLSUndo                                = 0xe133,

    /// Identifier: "ls-forward"
    IFLSForward                             = 0xe04e,

    /// Identifier: "ls-reply"
    IFLSReply                               = 0xe111,

    /// Identifier: "ls-share"
    IFLSShare                               = 0xe118,

    /// Identifier: "ls-login"
    IFLSLogin                               = 0xe087,

    /// Identifier: "ls-logout"
    IFLSLogout                              = 0xe088,

    /// Identifier: "ls-exchange"
    IFLSExchange                            = 0xe045,

    /// Identifier: "ls-shuffle"
    IFLSShuffle                             = 0xe11a,

    /// Identifier: "ls-repeat"
    IFLSRepeat                              = 0xe110,

    /// Identifier: "ls-refresh"
    IFLSRefresh                             = 0xe10e,

    /// Identifier: "ls-sync"
    IFLSSync                                = 0xe125,

    /// Identifier: "ls-external"
    IFLSExternal                            = 0xe046,

    /// Identifier: "ls-addstar"
    IFLSAddstar                             = 0xe000,

    /// Identifier: "ls-star"
    IFLSStar                                = 0xe121,

    /// Identifier: "ls-starempty"
    IFLSStarempty                           = 0xe122,

    /// Identifier: "ls-heart"
    IFLSHeart                               = 0xe06e,

    /// Identifier: "ls-heartempty"
    IFLSHeartempty                          = 0xe06f,

    /// Identifier: "ls-view"
    IFLSView                                = 0xe13a,

    /// Identifier: "ls-comment"
    IFLSComment                             = 0xe034,

    /// Identifier: "ls-comments"
    IFLSComments                            = 0xe035,

    /// Identifier: "ls-plus"
    IFLSPlus                                = 0xe108,

    /// Identifier: "ls-minus"
    IFLSMinus                               = 0xe08f,

    /// Identifier: "ls-zoomin"
    IFLSZoomin                              = 0xe142,

    /// Identifier: "ls-zoomout"
    IFLSZoomout                             = 0xe143,

    /// Identifier: "ls-search"
    IFLSSearch                              = 0xe116,

    /// Identifier: "ls-menu"
    IFLSMenu                                = 0xe08e,

    /// Identifier: "ls-tilemenu"
    IFLSTilemenu                            = 0xe12a,

    /// Identifier: "ls-list"
    IFLSList                                = 0xe084,

    /// Identifier: "ls-tile"
    IFLSTile                                = 0xe129,

    /// Identifier: "ls-notify"
    IFLSNotify                              = 0xe097,

    /// Identifier: "ls-apple"
    IFLSApple                               = 0xe00a,

    /// Identifier: "ls-android"
    IFLSAndroid                             = 0xe008,

    /// Identifier: "ls-windows"
    IFLSWindows                             = 0xe151,

    /// Identifier: "ls-ubuntu"
    IFLSUbuntu                              = 0xe17b,

    /// Identifier: "ls-amazon"
    IFLSAmazon                              = 0xe007,

    /// Identifier: "ls-facebook"
    IFLSFacebook                            = 0xe047,

    /// Identifier: "ls-twitter"
    IFLSTwitter                             = 0xe12f,

    /// Identifier: "ls-vk"
    IFLSVk                                  = 0xe17c,

    /// Identifier: "ls-google"
    IFLSGoogle                              = 0xe05a,

    /// Identifier: "ls-yahoo"
    IFLSYahoo                               = 0xe172,

    /// Identifier: "ls-bing"
    IFLSBing                                = 0xe164,

    /// Identifier: "ls-hatena"
    IFLSHatena                              = 0xe05d,

    /// Identifier: "ls-hatenabookmark"
    IFLSHatenabookmark                      = 0xe161,

    /// Identifier: "ls-digg"
    IFLSDigg                                = 0xe167,

    /// Identifier: "ls-linkedin"
    IFLSLinkedin                            = 0xe083,

    /// Identifier: "ls-myspace"
    IFLSMyspace                             = 0xe16a,

    /// Identifier: "ls-paperboy"
    IFLSPaperboy                            = 0xe162,

    /// Identifier: "ls-mixi"
    IFLSMixi                                = 0xe090,

    /// Identifier: "ls-line"
    IFLSLine                                = 0xe157,

    /// Identifier: "ls-mobage"
    IFLSMobage                              = 0xe158,

    /// Identifier: "ls-gree"
    IFLSGree                                = 0xe153,

    /// Identifier: "ls-skype"
    IFLSSkype                               = 0xe11b,

    /// Identifier: "ls-aim"
    IFLSAim                                 = 0xe163,

    /// Identifier: "ls-yelp"
    IFLSYelp                                = 0xe17d,

    /// Identifier: "ls-foursquare"
    IFLSFoursquare                          = 0xe04d,

    /// Identifier: "ls-pinterest"
    IFLSPinterest                           = 0xe104,

    /// Identifier: "ls-flickr"
    IFLSFlickr                              = 0xe04b,

    /// Identifier: "ls-tumblr"
    IFLSTumblr                              = 0xe12e,

    /// Identifier: "ls-wordpress"
    IFLSWordpress                           = 0xe171,

    /// Identifier: "ls-blogger"
    IFLSBlogger                             = 0xe165,

    /// Identifier: "ls-evernote"
    IFLSEvernote                            = 0xe044,

    /// Identifier: "ls-dropbox"
    IFLSDropbox                             = 0xe168,

    /// Identifier: "ls-slideshare"
    IFLSSlideshare                          = 0xe179,

    /// Identifier: "ls-github"
    IFLSGithub                              = 0xe057,

    /// Identifier: "ls-yapcasialogomark"
    IFLSYapcasialogomark                    = 0xe15c,

    /// Identifier: "ls-dribbble"
    IFLSDribbble                            = 0xe03f,

    /// Identifier: "ls-cookpad"
    IFLSCookpad                             = 0xe037,

    /// Identifier: "ls-instapaper"
    IFLSInstapaper                          = 0xe076,

    /// Identifier: "ls-readability"
    IFLSReadability                         = 0xe10c,

    /// Identifier: "ls-gumroad"
    IFLSGumroad                             = 0xe154,

    /// Identifier: "ls-picasa"
    IFLSPicasa                              = 0xe102,

    /// Identifier: "ls-instagram"
    IFLSInstagram                           = 0xe155,

    /// Identifier: "ls-delicious"
    IFLSDelicious                           = 0xe03d,

    /// Identifier: "ls-youtube"
    IFLSYoutube                             = 0xe141,

    /// Identifier: "ls-vimeo"
    IFLSVimeo                               = 0xe170,

    /// Identifier: "ls-ustream"
    IFLSUstream                             = 0xe16f,

    /// Identifier: "ls-soundcloud"
    IFLSSoundcloud                          = 0xe17a,

    /// Identifier: "ls-chrome"
    IFLSChrome                              = 0xe02c,

    /// Identifier: "ls-safari"
    IFLSSafari                              = 0xe114,

    /// Identifier: "ls-sleipnir"
    IFLSSleipnir                            = 0xe11c,

    /// Identifier: "ls-firefox"
    IFLSFirefox                             = 0xe049,

    /// Identifier: "ls-opera"
    IFLSOpera                               = 0xe099,

    /// Identifier: "ls-internetexplorer"
    IFLSInternetexplorer                    = 0xe077,

};

/**
 * LigatureSymbols v2.11 http://kudakurage.com/ligature_symbols
 */
@interface IFLigatureSymbols : IFIcon
@end
