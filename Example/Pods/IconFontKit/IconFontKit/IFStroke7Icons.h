#import "IFIcon.h"

/**
 * Stroke7Icons icon types.
 */
typedef NS_ENUM(IFIconType, IFStroke7IconsType) {

    /// Identifier: "pe-7s-album"
    IFPE7SAlbum                               = 0xe6aa,

    /// Identifier: "pe-7s-arc"
    IFPE7SArc                                 = 0xe6ab,

    /// Identifier: "pe-7s-back-2"
    IFPE7SBack2                               = 0xe6ac,

    /// Identifier: "pe-7s-bandaid"
    IFPE7SBandaid                             = 0xe6ad,

    /// Identifier: "pe-7s-car"
    IFPE7SCar                                 = 0xe6ae,

    /// Identifier: "pe-7s-diamond"
    IFPE7SDiamond                             = 0xe6af,

    /// Identifier: "pe-7s-door-lock"
    IFPE7SDoorLock                            = 0xe6b0,

    /// Identifier: "pe-7s-eyedropper"
    IFPE7SEyedropper                          = 0xe6b1,

    /// Identifier: "pe-7s-female"
    IFPE7SFemale                              = 0xe6b2,

    /// Identifier: "pe-7s-gym"
    IFPE7SGym                                 = 0xe6b3,

    /// Identifier: "pe-7s-hammer"
    IFPE7SHammer                              = 0xe6b4,

    /// Identifier: "pe-7s-headphones"
    IFPE7SHeadphones                          = 0xe6b5,

    /// Identifier: "pe-7s-helm"
    IFPE7SHelm                                = 0xe6b6,

    /// Identifier: "pe-7s-hourglass"
    IFPE7SHourglass                           = 0xe6b7,

    /// Identifier: "pe-7s-leaf"
    IFPE7SLeaf                                = 0xe6b8,

    /// Identifier: "pe-7s-magic-wand"
    IFPE7SMagicWand                           = 0xe6b9,

    /// Identifier: "pe-7s-male"
    IFPE7SMale                                = 0xe6ba,

    /// Identifier: "pe-7s-map-2"
    IFPE7SMap2                                = 0xe6bb,

    /// Identifier: "pe-7s-next-2"
    IFPE7SNext2                               = 0xe6bc,

    /// Identifier: "pe-7s-paint-bucket"
    IFPE7SPaintBucket                         = 0xe6bd,

    /// Identifier: "pe-7s-pendrive"
    IFPE7SPendrive                            = 0xe6be,

    /// Identifier: "pe-7s-photo"
    IFPE7SPhoto                               = 0xe6bf,

    /// Identifier: "pe-7s-piggy"
    IFPE7SPiggy                               = 0xe6c0,

    /// Identifier: "pe-7s-plugin"
    IFPE7SPlugin                              = 0xe6c1,

    /// Identifier: "pe-7s-refresh-2"
    IFPE7SRefresh2                            = 0xe6c2,

    /// Identifier: "pe-7s-rocket"
    IFPE7SRocket                              = 0xe6c3,

    /// Identifier: "pe-7s-settings"
    IFPE7SSettings                            = 0xe6c4,

    /// Identifier: "pe-7s-shield"
    IFPE7SShield                              = 0xe6c5,

    /// Identifier: "pe-7s-smile"
    IFPE7SSmile                               = 0xe6c6,

    /// Identifier: "pe-7s-usb"
    IFPE7SUsb                                 = 0xe6c7,

    /// Identifier: "pe-7s-vector"
    IFPE7SVector                              = 0xe6c8,

    /// Identifier: "pe-7s-wine"
    IFPE7SWine                                = 0xe6c9,

    /// Identifier: "pe-7s-cloud-upload"
    IFPE7SCloudUpload                         = 0xe68a,

    /// Identifier: "pe-7s-cash"
    IFPE7SCash                                = 0xe68c,

    /// Identifier: "pe-7s-close"
    IFPE7SClose                               = 0xe680,

    /// Identifier: "pe-7s-bluetooth"
    IFPE7SBluetooth                           = 0xe68d,

    /// Identifier: "pe-7s-cloud-download"
    IFPE7SCloudDownload                       = 0xe68b,

    /// Identifier: "pe-7s-way"
    IFPE7SWay                                 = 0xe68e,

    /// Identifier: "pe-7s-close-circle"
    IFPE7SCloseCircle                         = 0xe681,

    /// Identifier: "pe-7s-id"
    IFPE7SId                                  = 0xe68f,

    /// Identifier: "pe-7s-angle-up"
    IFPE7SAngleUp                             = 0xe682,

    /// Identifier: "pe-7s-wristwatch"
    IFPE7SWristwatch                          = 0xe690,

    /// Identifier: "pe-7s-angle-up-circle"
    IFPE7SAngleUpCircle                       = 0xe683,

    /// Identifier: "pe-7s-world"
    IFPE7SWorld                               = 0xe691,

    /// Identifier: "pe-7s-angle-right"
    IFPE7SAngleRight                          = 0xe684,

    /// Identifier: "pe-7s-volume"
    IFPE7SVolume                              = 0xe692,

    /// Identifier: "pe-7s-angle-right-circle"
    IFPE7SAngleRightCircle                    = 0xe685,

    /// Identifier: "pe-7s-users"
    IFPE7SUsers                               = 0xe693,

    /// Identifier: "pe-7s-angle-left"
    IFPE7SAngleLeft                           = 0xe686,

    /// Identifier: "pe-7s-user-female"
    IFPE7SUserFemale                          = 0xe694,

    /// Identifier: "pe-7s-angle-left-circle"
    IFPE7SAngleLeftCircle                     = 0xe687,

    /// Identifier: "pe-7s-up-arrow"
    IFPE7SUpArrow                             = 0xe695,

    /// Identifier: "pe-7s-angle-down"
    IFPE7SAngleDown                           = 0xe688,

    /// Identifier: "pe-7s-switch"
    IFPE7SSwitch                              = 0xe696,

    /// Identifier: "pe-7s-angle-down-circle"
    IFPE7SAngleDownCircle                     = 0xe689,

    /// Identifier: "pe-7s-scissors"
    IFPE7SScissors                            = 0xe697,

    /// Identifier: "pe-7s-wallet"
    IFPE7SWallet                              = 0xe600,

    /// Identifier: "pe-7s-safe"
    IFPE7SSafe                                = 0xe698,

    /// Identifier: "pe-7s-volume2"
    IFPE7SVolume2                             = 0xe601,

    /// Identifier: "pe-7s-volume1"
    IFPE7SVolume1                             = 0xe602,

    /// Identifier: "pe-7s-voicemail"
    IFPE7SVoicemail                           = 0xe603,

    /// Identifier: "pe-7s-video"
    IFPE7SVideo                               = 0xe604,

    /// Identifier: "pe-7s-user"
    IFPE7SUser                                = 0xe605,

    /// Identifier: "pe-7s-upload"
    IFPE7SUpload                              = 0xe606,

    /// Identifier: "pe-7s-unlock"
    IFPE7SUnlock                              = 0xe607,

    /// Identifier: "pe-7s-umbrella"
    IFPE7SUmbrella                            = 0xe608,

    /// Identifier: "pe-7s-trash"
    IFPE7STrash                               = 0xe609,

    /// Identifier: "pe-7s-tools"
    IFPE7STools                               = 0xe60a,

    /// Identifier: "pe-7s-timer"
    IFPE7STimer                               = 0xe60b,

    /// Identifier: "pe-7s-ticket"
    IFPE7STicket                              = 0xe60c,

    /// Identifier: "pe-7s-target"
    IFPE7STarget                              = 0xe60d,

    /// Identifier: "pe-7s-sun"
    IFPE7SSun                                 = 0xe60e,

    /// Identifier: "pe-7s-study"
    IFPE7SStudy                               = 0xe60f,

    /// Identifier: "pe-7s-stopwatch"
    IFPE7SStopwatch                           = 0xe610,

    /// Identifier: "pe-7s-star"
    IFPE7SStar                                = 0xe611,

    /// Identifier: "pe-7s-speaker"
    IFPE7SSpeaker                             = 0xe612,

    /// Identifier: "pe-7s-signal"
    IFPE7SSignal                              = 0xe613,

    /// Identifier: "pe-7s-shuffle"
    IFPE7SShuffle                             = 0xe614,

    /// Identifier: "pe-7s-shopbag"
    IFPE7SShopbag                             = 0xe615,

    /// Identifier: "pe-7s-share"
    IFPE7SShare                               = 0xe616,

    /// Identifier: "pe-7s-server"
    IFPE7SServer                              = 0xe617,

    /// Identifier: "pe-7s-search"
    IFPE7SSearch                              = 0xe618,

    /// Identifier: "pe-7s-film"
    IFPE7SFilm                                = 0xe6a5,

    /// Identifier: "pe-7s-science"
    IFPE7SScience                             = 0xe619,

    /// Identifier: "pe-7s-disk"
    IFPE7SDisk                                = 0xe6a6,

    /// Identifier: "pe-7s-ribbon"
    IFPE7SRibbon                              = 0xe61a,

    /// Identifier: "pe-7s-repeat"
    IFPE7SRepeat                              = 0xe61b,

    /// Identifier: "pe-7s-refresh"
    IFPE7SRefresh                             = 0xe61c,

    /// Identifier: "pe-7s-add-user"
    IFPE7SAddUser                             = 0xe6a9,

    /// Identifier: "pe-7s-refresh-cloud"
    IFPE7SRefreshCloud                        = 0xe61d,

    /// Identifier: "pe-7s-paperclip"
    IFPE7SPaperclip                           = 0xe69c,

    /// Identifier: "pe-7s-radio"
    IFPE7SRadio                               = 0xe61e,

    /// Identifier: "pe-7s-note2"
    IFPE7SNote2                               = 0xe69d,

    /// Identifier: "pe-7s-print"
    IFPE7SPrint                               = 0xe61f,

    /// Identifier: "pe-7s-network"
    IFPE7SNetwork                             = 0xe69e,

    /// Identifier: "pe-7s-prev"
    IFPE7SPrev                                = 0xe620,

    /// Identifier: "pe-7s-mute"
    IFPE7SMute                                = 0xe69f,

    /// Identifier: "pe-7s-power"
    IFPE7SPower                               = 0xe621,

    /// Identifier: "pe-7s-medal"
    IFPE7SMedal                               = 0xe6a0,

    /// Identifier: "pe-7s-portfolio"
    IFPE7SPortfolio                           = 0xe622,

    /// Identifier: "pe-7s-like2"
    IFPE7SLike2                               = 0xe6a1,

    /// Identifier: "pe-7s-plus"
    IFPE7SPlus                                = 0xe623,

    /// Identifier: "pe-7s-left-arrow"
    IFPE7SLeftArrow                           = 0xe6a2,

    /// Identifier: "pe-7s-play"
    IFPE7SPlay                                = 0xe624,

    /// Identifier: "pe-7s-key"
    IFPE7SKey                                 = 0xe6a3,

    /// Identifier: "pe-7s-plane"
    IFPE7SPlane                               = 0xe625,

    /// Identifier: "pe-7s-joy"
    IFPE7SJoy                                 = 0xe6a4,

    /// Identifier: "pe-7s-photo-gallery"
    IFPE7SPhotoGallery                        = 0xe626,

    /// Identifier: "pe-7s-pin"
    IFPE7SPin                                 = 0xe69b,

    /// Identifier: "pe-7s-phone"
    IFPE7SPhone                               = 0xe627,

    /// Identifier: "pe-7s-plug"
    IFPE7SPlug                                = 0xe69a,

    /// Identifier: "pe-7s-pen"
    IFPE7SPen                                 = 0xe628,

    /// Identifier: "pe-7s-right-arrow"
    IFPE7SRightArrow                          = 0xe699,

    /// Identifier: "pe-7s-paper-plane"
    IFPE7SPaperPlane                          = 0xe629,

    /// Identifier: "pe-7s-delete-user"
    IFPE7SDeleteUser                          = 0xe6a7,

    /// Identifier: "pe-7s-paint"
    IFPE7SPaint                               = 0xe62a,

    /// Identifier: "pe-7s-bottom-arrow"
    IFPE7SBottomArrow                         = 0xe6a8,

    /// Identifier: "pe-7s-notebook"
    IFPE7SNotebook                            = 0xe62b,

    /// Identifier: "pe-7s-note"
    IFPE7SNote                                = 0xe62c,

    /// Identifier: "pe-7s-next"
    IFPE7SNext                                = 0xe62d,

    /// Identifier: "pe-7s-news-paper"
    IFPE7SNewsPaper                           = 0xe62e,

    /// Identifier: "pe-7s-musiclist"
    IFPE7SMusiclist                           = 0xe62f,

    /// Identifier: "pe-7s-music"
    IFPE7SMusic                               = 0xe630,

    /// Identifier: "pe-7s-mouse"
    IFPE7SMouse                               = 0xe631,

    /// Identifier: "pe-7s-more"
    IFPE7SMore                                = 0xe632,

    /// Identifier: "pe-7s-moon"
    IFPE7SMoon                                = 0xe633,

    /// Identifier: "pe-7s-monitor"
    IFPE7SMonitor                             = 0xe634,

    /// Identifier: "pe-7s-micro"
    IFPE7SMicro                               = 0xe635,

    /// Identifier: "pe-7s-menu"
    IFPE7SMenu                                = 0xe636,

    /// Identifier: "pe-7s-map"
    IFPE7SMap                                 = 0xe637,

    /// Identifier: "pe-7s-map-marker"
    IFPE7SMapMarker                           = 0xe638,

    /// Identifier: "pe-7s-mail"
    IFPE7SMail                                = 0xe639,

    /// Identifier: "pe-7s-mail-open"
    IFPE7SMailOpen                            = 0xe63a,

    /// Identifier: "pe-7s-mail-open-file"
    IFPE7SMailOpenFile                        = 0xe63b,

    /// Identifier: "pe-7s-magnet"
    IFPE7SMagnet                              = 0xe63c,

    /// Identifier: "pe-7s-loop"
    IFPE7SLoop                                = 0xe63d,

    /// Identifier: "pe-7s-look"
    IFPE7SLook                                = 0xe63e,

    /// Identifier: "pe-7s-lock"
    IFPE7SLock                                = 0xe63f,

    /// Identifier: "pe-7s-lintern"
    IFPE7SLintern                             = 0xe640,

    /// Identifier: "pe-7s-link"
    IFPE7SLink                                = 0xe641,

    /// Identifier: "pe-7s-like"
    IFPE7SLike                                = 0xe642,

    /// Identifier: "pe-7s-light"
    IFPE7SLight                               = 0xe643,

    /// Identifier: "pe-7s-less"
    IFPE7SLess                                = 0xe644,

    /// Identifier: "pe-7s-keypad"
    IFPE7SKeypad                              = 0xe645,

    /// Identifier: "pe-7s-junk"
    IFPE7SJunk                                = 0xe646,

    /// Identifier: "pe-7s-info"
    IFPE7SInfo                                = 0xe647,

    /// Identifier: "pe-7s-home"
    IFPE7SHome                                = 0xe648,

    /// Identifier: "pe-7s-help2"
    IFPE7SHelp2                               = 0xe649,

    /// Identifier: "pe-7s-help1"
    IFPE7SHelp1                               = 0xe64a,

    /// Identifier: "pe-7s-graph3"
    IFPE7SGraph3                              = 0xe64b,

    /// Identifier: "pe-7s-graph2"
    IFPE7SGraph2                              = 0xe64c,

    /// Identifier: "pe-7s-graph1"
    IFPE7SGraph1                              = 0xe64d,

    /// Identifier: "pe-7s-graph"
    IFPE7SGraph                               = 0xe64e,

    /// Identifier: "pe-7s-global"
    IFPE7SGlobal                              = 0xe64f,

    /// Identifier: "pe-7s-gleam"
    IFPE7SGleam                               = 0xe650,

    /// Identifier: "pe-7s-glasses"
    IFPE7SGlasses                             = 0xe651,

    /// Identifier: "pe-7s-gift"
    IFPE7SGift                                = 0xe652,

    /// Identifier: "pe-7s-folder"
    IFPE7SFolder                              = 0xe653,

    /// Identifier: "pe-7s-flag"
    IFPE7SFlag                                = 0xe654,

    /// Identifier: "pe-7s-filter"
    IFPE7SFilter                              = 0xe655,

    /// Identifier: "pe-7s-file"
    IFPE7SFile                                = 0xe656,

    /// Identifier: "pe-7s-expand1"
    IFPE7SExpand1                             = 0xe657,

    /// Identifier: "pe-7s-exapnd2"
    IFPE7SExapnd2                             = 0xe658,

    /// Identifier: "pe-7s-edit"
    IFPE7SEdit                                = 0xe659,

    /// Identifier: "pe-7s-drop"
    IFPE7SDrop                                = 0xe65a,

    /// Identifier: "pe-7s-drawer"
    IFPE7SDrawer                              = 0xe65b,

    /// Identifier: "pe-7s-download"
    IFPE7SDownload                            = 0xe65c,

    /// Identifier: "pe-7s-display2"
    IFPE7SDisplay2                            = 0xe65d,

    /// Identifier: "pe-7s-display1"
    IFPE7SDisplay1                            = 0xe65e,

    /// Identifier: "pe-7s-diskette"
    IFPE7SDiskette                            = 0xe65f,

    /// Identifier: "pe-7s-date"
    IFPE7SDate                                = 0xe660,

    /// Identifier: "pe-7s-cup"
    IFPE7SCup                                 = 0xe661,

    /// Identifier: "pe-7s-culture"
    IFPE7SCulture                             = 0xe662,

    /// Identifier: "pe-7s-crop"
    IFPE7SCrop                                = 0xe663,

    /// Identifier: "pe-7s-credit"
    IFPE7SCredit                              = 0xe664,

    /// Identifier: "pe-7s-copy-file"
    IFPE7SCopyFile                            = 0xe665,

    /// Identifier: "pe-7s-config"
    IFPE7SConfig                              = 0xe666,

    /// Identifier: "pe-7s-compass"
    IFPE7SCompass                             = 0xe667,

    /// Identifier: "pe-7s-comment"
    IFPE7SComment                             = 0xe668,

    /// Identifier: "pe-7s-coffee"
    IFPE7SCoffee                              = 0xe669,

    /// Identifier: "pe-7s-cloud"
    IFPE7SCloud                               = 0xe66a,

    /// Identifier: "pe-7s-clock"
    IFPE7SClock                               = 0xe66b,

    /// Identifier: "pe-7s-check"
    IFPE7SCheck                               = 0xe66c,

    /// Identifier: "pe-7s-chat"
    IFPE7SChat                                = 0xe66d,

    /// Identifier: "pe-7s-cart"
    IFPE7SCart                                = 0xe66e,

    /// Identifier: "pe-7s-camera"
    IFPE7SCamera                              = 0xe66f,

    /// Identifier: "pe-7s-call"
    IFPE7SCall                                = 0xe670,

    /// Identifier: "pe-7s-calculator"
    IFPE7SCalculator                          = 0xe671,

    /// Identifier: "pe-7s-browser"
    IFPE7SBrowser                             = 0xe672,

    /// Identifier: "pe-7s-box2"
    IFPE7SBox2                                = 0xe673,

    /// Identifier: "pe-7s-box1"
    IFPE7SBox1                                = 0xe674,

    /// Identifier: "pe-7s-bookmarks"
    IFPE7SBookmarks                           = 0xe675,

    /// Identifier: "pe-7s-bicycle"
    IFPE7SBicycle                             = 0xe676,

    /// Identifier: "pe-7s-bell"
    IFPE7SBell                                = 0xe677,

    /// Identifier: "pe-7s-battery"
    IFPE7SBattery                             = 0xe678,

    /// Identifier: "pe-7s-ball"
    IFPE7SBall                                = 0xe679,

    /// Identifier: "pe-7s-back"
    IFPE7SBack                                = 0xe67a,

    /// Identifier: "pe-7s-attention"
    IFPE7SAttention                           = 0xe67b,

    /// Identifier: "pe-7s-anchor"
    IFPE7SAnchor                              = 0xe67c,

    /// Identifier: "pe-7s-albums"
    IFPE7SAlbums                              = 0xe67d,

    /// Identifier: "pe-7s-alarm"
    IFPE7SAlarm                               = 0xe67e,

    /// Identifier: "pe-7s-airplay"
    IFPE7SAirplay                             = 0xe67f,

};

/**
 * Stroke7Icons, v1.2, http://themes-pixeden.com/font-demos/7-stroke/index.html
 */
@interface IFStroke7Icons : IFIcon
@end
