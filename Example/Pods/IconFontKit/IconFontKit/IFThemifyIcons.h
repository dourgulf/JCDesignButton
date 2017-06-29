#import "IFIcon.h"

/**
 * ThemifyIcons icon types.
 */
typedef NS_ENUM(IFIconType, IFThemifyIconsType) {

    /// Identifier: "ti-wand"
    IFThemifyWand                                = 0xe600,

    /// Identifier: "ti-volume"
    IFThemifyVolume                              = 0xe601,

    /// Identifier: "ti-user"
    IFThemifyUser                                = 0xe602,

    /// Identifier: "ti-unlock"
    IFThemifyUnlock                              = 0xe603,

    /// Identifier: "ti-unlink"
    IFThemifyUnlink                              = 0xe604,

    /// Identifier: "ti-trash"
    IFThemifyTrash                               = 0xe605,

    /// Identifier: "ti-thought"
    IFThemifyThought                             = 0xe606,

    /// Identifier: "ti-target"
    IFThemifyTarget                              = 0xe607,

    /// Identifier: "ti-tag"
    IFThemifyTag                                 = 0xe608,

    /// Identifier: "ti-tablet"
    IFThemifyTablet                              = 0xe609,

    /// Identifier: "ti-star"
    IFThemifyStar                                = 0xe60a,

    /// Identifier: "ti-spray"
    IFThemifySpray                               = 0xe60b,

    /// Identifier: "ti-signal"
    IFThemifySignal                              = 0xe60c,

    /// Identifier: "ti-shopping-cart"
    IFThemifyShoppingCart                        = 0xe60d,

    /// Identifier: "ti-shopping-cart-full"
    IFThemifyShoppingCartFull                    = 0xe60e,

    /// Identifier: "ti-settings"
    IFThemifySettings                            = 0xe60f,

    /// Identifier: "ti-search"
    IFThemifySearch                              = 0xe610,

    /// Identifier: "ti-zoom-in"
    IFThemifyZoomIn                              = 0xe611,

    /// Identifier: "ti-zoom-out"
    IFThemifyZoomOut                             = 0xe612,

    /// Identifier: "ti-cut"
    IFThemifyCut                                 = 0xe613,

    /// Identifier: "ti-ruler"
    IFThemifyRuler                               = 0xe614,

    /// Identifier: "ti-ruler-pencil"
    IFThemifyRulerPencil                         = 0xe615,

    /// Identifier: "ti-ruler-alt"
    IFThemifyRulerAlt                            = 0xe616,

    /// Identifier: "ti-bookmark"
    IFThemifyBookmark                            = 0xe617,

    /// Identifier: "ti-bookmark-alt"
    IFThemifyBookmarkAlt                         = 0xe618,

    /// Identifier: "ti-reload"
    IFThemifyReload                              = 0xe619,

    /// Identifier: "ti-plus"
    IFThemifyPlus                                = 0xe61a,

    /// Identifier: "ti-pin"
    IFThemifyPin                                 = 0xe61b,

    /// Identifier: "ti-pencil"
    IFThemifyPencil                              = 0xe61c,

    /// Identifier: "ti-pencil-alt"
    IFThemifyPencilAlt                           = 0xe61d,

    /// Identifier: "ti-paint-roller"
    IFThemifyPaintRoller                         = 0xe61e,

    /// Identifier: "ti-paint-bucket"
    IFThemifyPaintBucket                         = 0xe61f,

    /// Identifier: "ti-na"
    IFThemifyNa                                  = 0xe620,

    /// Identifier: "ti-mobile"
    IFThemifyMobile                              = 0xe621,

    /// Identifier: "ti-minus"
    IFThemifyMinus                               = 0xe622,

    /// Identifier: "ti-medall"
    IFThemifyMedall                              = 0xe623,

    /// Identifier: "ti-medall-alt"
    IFThemifyMedallAlt                           = 0xe624,

    /// Identifier: "ti-marker"
    IFThemifyMarker                              = 0xe625,

    /// Identifier: "ti-marker-alt"
    IFThemifyMarkerAlt                           = 0xe626,

    /// Identifier: "ti-arrow-up"
    IFThemifyArrowUp                             = 0xe627,

    /// Identifier: "ti-arrow-right"
    IFThemifyArrowRight                          = 0xe628,

    /// Identifier: "ti-arrow-left"
    IFThemifyArrowLeft                           = 0xe629,

    /// Identifier: "ti-arrow-down"
    IFThemifyArrowDown                           = 0xe62a,

    /// Identifier: "ti-lock"
    IFThemifyLock                                = 0xe62b,

    /// Identifier: "ti-location-arrow"
    IFThemifyLocationArrow                       = 0xe62c,

    /// Identifier: "ti-link"
    IFThemifyLink                                = 0xe62d,

    /// Identifier: "ti-layout"
    IFThemifyLayout                              = 0xe62e,

    /// Identifier: "ti-layers"
    IFThemifyLayers                              = 0xe62f,

    /// Identifier: "ti-layers-alt"
    IFThemifyLayersAlt                           = 0xe630,

    /// Identifier: "ti-key"
    IFThemifyKey                                 = 0xe631,

    /// Identifier: "ti-import"
    IFThemifyImport                              = 0xe632,

    /// Identifier: "ti-image"
    IFThemifyImage                               = 0xe633,

    /// Identifier: "ti-heart"
    IFThemifyHeart                               = 0xe634,

    /// Identifier: "ti-heart-broken"
    IFThemifyHeartBroken                         = 0xe635,

    /// Identifier: "ti-hand-stop"
    IFThemifyHandStop                            = 0xe636,

    /// Identifier: "ti-hand-open"
    IFThemifyHandOpen                            = 0xe637,

    /// Identifier: "ti-hand-drag"
    IFThemifyHandDrag                            = 0xe638,

    /// Identifier: "ti-folder"
    IFThemifyFolder                              = 0xe639,

    /// Identifier: "ti-flag"
    IFThemifyFlag                                = 0xe63a,

    /// Identifier: "ti-flag-alt"
    IFThemifyFlagAlt                             = 0xe63b,

    /// Identifier: "ti-flag-alt-2"
    IFThemifyFlagAlt2                            = 0xe63c,

    /// Identifier: "ti-eye"
    IFThemifyEye                                 = 0xe63d,

    /// Identifier: "ti-export"
    IFThemifyExport                              = 0xe63e,

    /// Identifier: "ti-exchange-vertical"
    IFThemifyExchangeVertical                    = 0xe63f,

    /// Identifier: "ti-desktop"
    IFThemifyDesktop                             = 0xe640,

    /// Identifier: "ti-cup"
    IFThemifyCup                                 = 0xe641,

    /// Identifier: "ti-crown"
    IFThemifyCrown                               = 0xe642,

    /// Identifier: "ti-comments"
    IFThemifyComments                            = 0xe643,

    /// Identifier: "ti-comment"
    IFThemifyComment                             = 0xe644,

    /// Identifier: "ti-comment-alt"
    IFThemifyCommentAlt                          = 0xe645,

    /// Identifier: "ti-close"
    IFThemifyClose                               = 0xe646,

    /// Identifier: "ti-clip"
    IFThemifyClip                                = 0xe647,

    /// Identifier: "ti-angle-up"
    IFThemifyAngleUp                             = 0xe648,

    /// Identifier: "ti-angle-right"
    IFThemifyAngleRight                          = 0xe649,

    /// Identifier: "ti-angle-left"
    IFThemifyAngleLeft                           = 0xe64a,

    /// Identifier: "ti-angle-down"
    IFThemifyAngleDown                           = 0xe64b,

    /// Identifier: "ti-check"
    IFThemifyCheck                               = 0xe64c,

    /// Identifier: "ti-check-box"
    IFThemifyCheckBox                            = 0xe64d,

    /// Identifier: "ti-camera"
    IFThemifyCamera                              = 0xe64e,

    /// Identifier: "ti-announcement"
    IFThemifyAnnouncement                        = 0xe64f,

    /// Identifier: "ti-brush"
    IFThemifyBrush                               = 0xe650,

    /// Identifier: "ti-briefcase"
    IFThemifyBriefcase                           = 0xe651,

    /// Identifier: "ti-bolt"
    IFThemifyBolt                                = 0xe652,

    /// Identifier: "ti-bolt-alt"
    IFThemifyBoltAlt                             = 0xe653,

    /// Identifier: "ti-blackboard"
    IFThemifyBlackboard                          = 0xe654,

    /// Identifier: "ti-bag"
    IFThemifyBag                                 = 0xe655,

    /// Identifier: "ti-move"
    IFThemifyMove                                = 0xe656,

    /// Identifier: "ti-arrows-vertical"
    IFThemifyArrowsVertical                      = 0xe657,

    /// Identifier: "ti-arrows-horizontal"
    IFThemifyArrowsHorizontal                    = 0xe658,

    /// Identifier: "ti-fullscreen"
    IFThemifyFullscreen                          = 0xe659,

    /// Identifier: "ti-arrow-top-right"
    IFThemifyArrowTopRight                       = 0xe65a,

    /// Identifier: "ti-arrow-top-left"
    IFThemifyArrowTopLeft                        = 0xe65b,

    /// Identifier: "ti-arrow-circle-up"
    IFThemifyArrowCircleUp                       = 0xe65c,

    /// Identifier: "ti-arrow-circle-right"
    IFThemifyArrowCircleRight                    = 0xe65d,

    /// Identifier: "ti-arrow-circle-left"
    IFThemifyArrowCircleLeft                     = 0xe65e,

    /// Identifier: "ti-arrow-circle-down"
    IFThemifyArrowCircleDown                     = 0xe65f,

    /// Identifier: "ti-angle-double-up"
    IFThemifyAngleDoubleUp                       = 0xe660,

    /// Identifier: "ti-angle-double-right"
    IFThemifyAngleDoubleRight                    = 0xe661,

    /// Identifier: "ti-angle-double-left"
    IFThemifyAngleDoubleLeft                     = 0xe662,

    /// Identifier: "ti-angle-double-down"
    IFThemifyAngleDoubleDown                     = 0xe663,

    /// Identifier: "ti-zip"
    IFThemifyZip                                 = 0xe664,

    /// Identifier: "ti-world"
    IFThemifyWorld                               = 0xe665,

    /// Identifier: "ti-wheelchair"
    IFThemifyWheelchair                          = 0xe666,

    /// Identifier: "ti-view-list"
    IFThemifyViewList                            = 0xe667,

    /// Identifier: "ti-view-list-alt"
    IFThemifyViewListAlt                         = 0xe668,

    /// Identifier: "ti-view-grid"
    IFThemifyViewGrid                            = 0xe669,

    /// Identifier: "ti-uppercase"
    IFThemifyUppercase                           = 0xe66a,

    /// Identifier: "ti-upload"
    IFThemifyUpload                              = 0xe66b,

    /// Identifier: "ti-underline"
    IFThemifyUnderline                           = 0xe66c,

    /// Identifier: "ti-truck"
    IFThemifyTruck                               = 0xe66d,

    /// Identifier: "ti-timer"
    IFThemifyTimer                               = 0xe66e,

    /// Identifier: "ti-ticket"
    IFThemifyTicket                              = 0xe66f,

    /// Identifier: "ti-thumb-up"
    IFThemifyThumbUp                             = 0xe670,

    /// Identifier: "ti-thumb-down"
    IFThemifyThumbDown                           = 0xe671,

    /// Identifier: "ti-text"
    IFThemifyText                                = 0xe672,

    /// Identifier: "ti-stats-up"
    IFThemifyStatsUp                             = 0xe673,

    /// Identifier: "ti-stats-down"
    IFThemifyStatsDown                           = 0xe674,

    /// Identifier: "ti-split-v"
    IFThemifySplitV                              = 0xe675,

    /// Identifier: "ti-split-h"
    IFThemifySplitH                              = 0xe676,

    /// Identifier: "ti-smallcap"
    IFThemifySmallcap                            = 0xe677,

    /// Identifier: "ti-shine"
    IFThemifyShine                               = 0xe678,

    /// Identifier: "ti-shift-right"
    IFThemifyShiftRight                          = 0xe679,

    /// Identifier: "ti-shift-left"
    IFThemifyShiftLeft                           = 0xe67a,

    /// Identifier: "ti-shield"
    IFThemifyShield                              = 0xe67b,

    /// Identifier: "ti-notepad"
    IFThemifyNotepad                             = 0xe67c,

    /// Identifier: "ti-server"
    IFThemifyServer                              = 0xe67d,

    /// Identifier: "ti-quote-right"
    IFThemifyQuoteRight                          = 0xe67e,

    /// Identifier: "ti-quote-left"
    IFThemifyQuoteLeft                           = 0xe67f,

    /// Identifier: "ti-pulse"
    IFThemifyPulse                               = 0xe680,

    /// Identifier: "ti-printer"
    IFThemifyPrinter                             = 0xe681,

    /// Identifier: "ti-power-off"
    IFThemifyPowerOff                            = 0xe682,

    /// Identifier: "ti-plug"
    IFThemifyPlug                                = 0xe683,

    /// Identifier: "ti-pie-chart"
    IFThemifyPieChart                            = 0xe684,

    /// Identifier: "ti-paragraph"
    IFThemifyParagraph                           = 0xe685,

    /// Identifier: "ti-panel"
    IFThemifyPanel                               = 0xe686,

    /// Identifier: "ti-package"
    IFThemifyPackage                             = 0xe687,

    /// Identifier: "ti-music"
    IFThemifyMusic                               = 0xe688,

    /// Identifier: "ti-music-alt"
    IFThemifyMusicAlt                            = 0xe689,

    /// Identifier: "ti-mouse"
    IFThemifyMouse                               = 0xe68a,

    /// Identifier: "ti-mouse-alt"
    IFThemifyMouseAlt                            = 0xe68b,

    /// Identifier: "ti-money"
    IFThemifyMoney                               = 0xe68c,

    /// Identifier: "ti-microphone"
    IFThemifyMicrophone                          = 0xe68d,

    /// Identifier: "ti-menu"
    IFThemifyMenu                                = 0xe68e,

    /// Identifier: "ti-menu-alt"
    IFThemifyMenuAlt                             = 0xe68f,

    /// Identifier: "ti-map"
    IFThemifyMap                                 = 0xe690,

    /// Identifier: "ti-map-alt"
    IFThemifyMapAlt                              = 0xe691,

    /// Identifier: "ti-loop"
    IFThemifyLoop                                = 0xe692,

    /// Identifier: "ti-location-pin"
    IFThemifyLocationPin                         = 0xe693,

    /// Identifier: "ti-list"
    IFThemifyList                                = 0xe694,

    /// Identifier: "ti-light-bulb"
    IFThemifyLightBulb                           = 0xe695,

    /// Identifier: "ti-Italic"
    IFThemifyItalic                              = 0xe696,

    /// Identifier: "ti-info"
    IFThemifyInfo                                = 0xe697,

    /// Identifier: "ti-infinite"
    IFThemifyInfinite                            = 0xe698,

    /// Identifier: "ti-id-badge"
    IFThemifyIdBadge                             = 0xe699,

    /// Identifier: "ti-hummer"
    IFThemifyHummer                              = 0xe69a,

    /// Identifier: "ti-home"
    IFThemifyHome                                = 0xe69b,

    /// Identifier: "ti-help"
    IFThemifyHelp                                = 0xe69c,

    /// Identifier: "ti-headphone"
    IFThemifyHeadphone                           = 0xe69d,

    /// Identifier: "ti-harddrives"
    IFThemifyHarddrives                          = 0xe69e,

    /// Identifier: "ti-harddrive"
    IFThemifyHarddrive                           = 0xe69f,

    /// Identifier: "ti-gift"
    IFThemifyGift                                = 0xe6a0,

    /// Identifier: "ti-game"
    IFThemifyGame                                = 0xe6a1,

    /// Identifier: "ti-filter"
    IFThemifyFilter                              = 0xe6a2,

    /// Identifier: "ti-files"
    IFThemifyFiles                               = 0xe6a3,

    /// Identifier: "ti-file"
    IFThemifyFile                                = 0xe6a4,

    /// Identifier: "ti-eraser"
    IFThemifyEraser                              = 0xe6a5,

    /// Identifier: "ti-envelope"
    IFThemifyEnvelope                            = 0xe6a6,

    /// Identifier: "ti-download"
    IFThemifyDownload                            = 0xe6a7,

    /// Identifier: "ti-direction"
    IFThemifyDirection                           = 0xe6a8,

    /// Identifier: "ti-direction-alt"
    IFThemifyDirectionAlt                        = 0xe6a9,

    /// Identifier: "ti-dashboard"
    IFThemifyDashboard                           = 0xe6aa,

    /// Identifier: "ti-control-stop"
    IFThemifyControlStop                         = 0xe6ab,

    /// Identifier: "ti-control-shuffle"
    IFThemifyControlShuffle                      = 0xe6ac,

    /// Identifier: "ti-control-play"
    IFThemifyControlPlay                         = 0xe6ad,

    /// Identifier: "ti-control-pause"
    IFThemifyControlPause                        = 0xe6ae,

    /// Identifier: "ti-control-forward"
    IFThemifyControlForward                      = 0xe6af,

    /// Identifier: "ti-control-backward"
    IFThemifyControlBackward                     = 0xe6b0,

    /// Identifier: "ti-cloud"
    IFThemifyCloud                               = 0xe6b1,

    /// Identifier: "ti-cloud-up"
    IFThemifyCloudUp                             = 0xe6b2,

    /// Identifier: "ti-cloud-down"
    IFThemifyCloudDown                           = 0xe6b3,

    /// Identifier: "ti-clipboard"
    IFThemifyClipboard                           = 0xe6b4,

    /// Identifier: "ti-car"
    IFThemifyCar                                 = 0xe6b5,

    /// Identifier: "ti-calendar"
    IFThemifyCalendar                            = 0xe6b6,

    /// Identifier: "ti-book"
    IFThemifyBook                                = 0xe6b7,

    /// Identifier: "ti-bell"
    IFThemifyBell                                = 0xe6b8,

    /// Identifier: "ti-basketball"
    IFThemifyBasketball                          = 0xe6b9,

    /// Identifier: "ti-bar-chart"
    IFThemifyBarChart                            = 0xe6ba,

    /// Identifier: "ti-bar-chart-alt"
    IFThemifyBarChartAlt                         = 0xe6bb,

    /// Identifier: "ti-back-right"
    IFThemifyBackRight                           = 0xe6bc,

    /// Identifier: "ti-back-left"
    IFThemifyBackLeft                            = 0xe6bd,

    /// Identifier: "ti-arrows-corner"
    IFThemifyArrowsCorner                        = 0xe6be,

    /// Identifier: "ti-archive"
    IFThemifyArchive                             = 0xe6bf,

    /// Identifier: "ti-anchor"
    IFThemifyAnchor                              = 0xe6c0,

    /// Identifier: "ti-align-right"
    IFThemifyAlignRight                          = 0xe6c1,

    /// Identifier: "ti-align-left"
    IFThemifyAlignLeft                           = 0xe6c2,

    /// Identifier: "ti-align-justify"
    IFThemifyAlignJustify                        = 0xe6c3,

    /// Identifier: "ti-align-center"
    IFThemifyAlignCenter                         = 0xe6c4,

    /// Identifier: "ti-alert"
    IFThemifyAlert                               = 0xe6c5,

    /// Identifier: "ti-alarm-clock"
    IFThemifyAlarmClock                          = 0xe6c6,

    /// Identifier: "ti-agenda"
    IFThemifyAgenda                              = 0xe6c7,

    /// Identifier: "ti-write"
    IFThemifyWrite                               = 0xe6c8,

    /// Identifier: "ti-window"
    IFThemifyWindow                              = 0xe6c9,

    /// Identifier: "ti-widgetized"
    IFThemifyWidgetized                          = 0xe6ca,

    /// Identifier: "ti-widget"
    IFThemifyWidget                              = 0xe6cb,

    /// Identifier: "ti-widget-alt"
    IFThemifyWidgetAlt                           = 0xe6cc,

    /// Identifier: "ti-wallet"
    IFThemifyWallet                              = 0xe6cd,

    /// Identifier: "ti-video-clapper"
    IFThemifyVideoClapper                        = 0xe6ce,

    /// Identifier: "ti-video-camera"
    IFThemifyVideoCamera                         = 0xe6cf,

    /// Identifier: "ti-vector"
    IFThemifyVector                              = 0xe6d0,

    /// Identifier: "ti-themify-logo"
    IFThemifyThemifyLogo                         = 0xe6d1,

    /// Identifier: "ti-themify-favicon"
    IFThemifyThemifyFavicon                      = 0xe6d2,

    /// Identifier: "ti-themify-favicon-alt"
    IFThemifyThemifyFaviconAlt                   = 0xe6d3,

    /// Identifier: "ti-support"
    IFThemifySupport                             = 0xe6d4,

    /// Identifier: "ti-stamp"
    IFThemifyStamp                               = 0xe6d5,

    /// Identifier: "ti-split-v-alt"
    IFThemifySplitVAlt                           = 0xe6d6,

    /// Identifier: "ti-slice"
    IFThemifySlice                               = 0xe6d7,

    /// Identifier: "ti-shortcode"
    IFThemifyShortcode                           = 0xe6d8,

    /// Identifier: "ti-shift-right-alt"
    IFThemifyShiftRightAlt                       = 0xe6d9,

    /// Identifier: "ti-shift-left-alt"
    IFThemifyShiftLeftAlt                        = 0xe6da,

    /// Identifier: "ti-ruler-alt-2"
    IFThemifyRulerAlt2                           = 0xe6db,

    /// Identifier: "ti-receipt"
    IFThemifyReceipt                             = 0xe6dc,

    /// Identifier: "ti-pin2"
    IFThemifyPin2                                = 0xe6dd,

    /// Identifier: "ti-pin-alt"
    IFThemifyPinAlt                              = 0xe6de,

    /// Identifier: "ti-pencil-alt2"
    IFThemifyPencilAlt2                          = 0xe6df,

    /// Identifier: "ti-palette"
    IFThemifyPalette                             = 0xe6e0,

    /// Identifier: "ti-more"
    IFThemifyMore                                = 0xe6e1,

    /// Identifier: "ti-more-alt"
    IFThemifyMoreAlt                             = 0xe6e2,

    /// Identifier: "ti-microphone-alt"
    IFThemifyMicrophoneAlt                       = 0xe6e3,

    /// Identifier: "ti-magnet"
    IFThemifyMagnet                              = 0xe6e4,

    /// Identifier: "ti-line-double"
    IFThemifyLineDouble                          = 0xe6e5,

    /// Identifier: "ti-line-dotted"
    IFThemifyLineDotted                          = 0xe6e6,

    /// Identifier: "ti-line-dashed"
    IFThemifyLineDashed                          = 0xe6e7,

    /// Identifier: "ti-layout-width-full"
    IFThemifyLayoutWidthFull                     = 0xe6e8,

    /// Identifier: "ti-layout-width-default"
    IFThemifyLayoutWidthDefault                  = 0xe6e9,

    /// Identifier: "ti-layout-width-default-alt"
    IFThemifyLayoutWidthDefaultAlt               = 0xe6ea,

    /// Identifier: "ti-layout-tab"
    IFThemifyLayoutTab                           = 0xe6eb,

    /// Identifier: "ti-layout-tab-window"
    IFThemifyLayoutTabWindow                     = 0xe6ec,

    /// Identifier: "ti-layout-tab-v"
    IFThemifyLayoutTabV                          = 0xe6ed,

    /// Identifier: "ti-layout-tab-min"
    IFThemifyLayoutTabMin                        = 0xe6ee,

    /// Identifier: "ti-layout-slider"
    IFThemifyLayoutSlider                        = 0xe6ef,

    /// Identifier: "ti-layout-slider-alt"
    IFThemifyLayoutSliderAlt                     = 0xe6f0,

    /// Identifier: "ti-layout-sidebar-right"
    IFThemifyLayoutSidebarRight                  = 0xe6f1,

    /// Identifier: "ti-layout-sidebar-none"
    IFThemifyLayoutSidebarNone                   = 0xe6f2,

    /// Identifier: "ti-layout-sidebar-left"
    IFThemifyLayoutSidebarLeft                   = 0xe6f3,

    /// Identifier: "ti-layout-placeholder"
    IFThemifyLayoutPlaceholder                   = 0xe6f4,

    /// Identifier: "ti-layout-menu"
    IFThemifyLayoutMenu                          = 0xe6f5,

    /// Identifier: "ti-layout-menu-v"
    IFThemifyLayoutMenuV                         = 0xe6f6,

    /// Identifier: "ti-layout-menu-separated"
    IFThemifyLayoutMenuSeparated                 = 0xe6f7,

    /// Identifier: "ti-layout-menu-full"
    IFThemifyLayoutMenuFull                      = 0xe6f8,

    /// Identifier: "ti-layout-media-right-alt"
    IFThemifyLayoutMediaRightAlt                 = 0xe6f9,

    /// Identifier: "ti-layout-media-right"
    IFThemifyLayoutMediaRight                    = 0xe6fa,

    /// Identifier: "ti-layout-media-overlay"
    IFThemifyLayoutMediaOverlay                  = 0xe6fb,

    /// Identifier: "ti-layout-media-overlay-alt"
    IFThemifyLayoutMediaOverlayAlt               = 0xe6fc,

    /// Identifier: "ti-layout-media-overlay-alt-2"
    IFThemifyLayoutMediaOverlayAlt2              = 0xe6fd,

    /// Identifier: "ti-layout-media-left-alt"
    IFThemifyLayoutMediaLeftAlt                  = 0xe6fe,

    /// Identifier: "ti-layout-media-left"
    IFThemifyLayoutMediaLeft                     = 0xe6ff,

    /// Identifier: "ti-layout-media-center-alt"
    IFThemifyLayoutMediaCenterAlt                = 0xe700,

    /// Identifier: "ti-layout-media-center"
    IFThemifyLayoutMediaCenter                   = 0xe701,

    /// Identifier: "ti-layout-list-thumb"
    IFThemifyLayoutListThumb                     = 0xe702,

    /// Identifier: "ti-layout-list-thumb-alt"
    IFThemifyLayoutListThumbAlt                  = 0xe703,

    /// Identifier: "ti-layout-list-post"
    IFThemifyLayoutListPost                      = 0xe704,

    /// Identifier: "ti-layout-list-large-image"
    IFThemifyLayoutListLargeImage                = 0xe705,

    /// Identifier: "ti-layout-line-solid"
    IFThemifyLayoutLineSolid                     = 0xe706,

    /// Identifier: "ti-layout-grid4"
    IFThemifyLayoutGrid4                         = 0xe707,

    /// Identifier: "ti-layout-grid3"
    IFThemifyLayoutGrid3                         = 0xe708,

    /// Identifier: "ti-layout-grid2"
    IFThemifyLayoutGrid2                         = 0xe709,

    /// Identifier: "ti-layout-grid2-thumb"
    IFThemifyLayoutGrid2Thumb                    = 0xe70a,

    /// Identifier: "ti-layout-cta-right"
    IFThemifyLayoutCtaRight                      = 0xe70b,

    /// Identifier: "ti-layout-cta-left"
    IFThemifyLayoutCtaLeft                       = 0xe70c,

    /// Identifier: "ti-layout-cta-center"
    IFThemifyLayoutCtaCenter                     = 0xe70d,

    /// Identifier: "ti-layout-cta-btn-right"
    IFThemifyLayoutCtaBtnRight                   = 0xe70e,

    /// Identifier: "ti-layout-cta-btn-left"
    IFThemifyLayoutCtaBtnLeft                    = 0xe70f,

    /// Identifier: "ti-layout-column4"
    IFThemifyLayoutColumn4                       = 0xe710,

    /// Identifier: "ti-layout-column3"
    IFThemifyLayoutColumn3                       = 0xe711,

    /// Identifier: "ti-layout-column2"
    IFThemifyLayoutColumn2                       = 0xe712,

    /// Identifier: "ti-layout-accordion-separated"
    IFThemifyLayoutAccordionSeparated            = 0xe713,

    /// Identifier: "ti-layout-accordion-merged"
    IFThemifyLayoutAccordionMerged               = 0xe714,

    /// Identifier: "ti-layout-accordion-list"
    IFThemifyLayoutAccordionList                 = 0xe715,

    /// Identifier: "ti-ink-pen"
    IFThemifyInkPen                              = 0xe716,

    /// Identifier: "ti-info-alt"
    IFThemifyInfoAlt                             = 0xe717,

    /// Identifier: "ti-help-alt"
    IFThemifyHelpAlt                             = 0xe718,

    /// Identifier: "ti-headphone-alt"
    IFThemifyHeadphoneAlt                        = 0xe719,

    /// Identifier: "ti-hand-point-up"
    IFThemifyHandPointUp                         = 0xe71a,

    /// Identifier: "ti-hand-point-right"
    IFThemifyHandPointRight                      = 0xe71b,

    /// Identifier: "ti-hand-point-left"
    IFThemifyHandPointLeft                       = 0xe71c,

    /// Identifier: "ti-hand-point-down"
    IFThemifyHandPointDown                       = 0xe71d,

    /// Identifier: "ti-gallery"
    IFThemifyGallery                             = 0xe71e,

    /// Identifier: "ti-face-smile"
    IFThemifyFaceSmile                           = 0xe71f,

    /// Identifier: "ti-face-sad"
    IFThemifyFaceSad                             = 0xe720,

    /// Identifier: "ti-credit-card"
    IFThemifyCreditCard                          = 0xe721,

    /// Identifier: "ti-control-skip-forward"
    IFThemifyControlSkipForward                  = 0xe722,

    /// Identifier: "ti-control-skip-backward"
    IFThemifyControlSkipBackward                 = 0xe723,

    /// Identifier: "ti-control-record"
    IFThemifyControlRecord                       = 0xe724,

    /// Identifier: "ti-control-eject"
    IFThemifyControlEject                        = 0xe725,

    /// Identifier: "ti-comments-smiley"
    IFThemifyCommentsSmiley                      = 0xe726,

    /// Identifier: "ti-brush-alt"
    IFThemifyBrushAlt                            = 0xe727,

    /// Identifier: "ti-youtube"
    IFThemifyYoutube                             = 0xe728,

    /// Identifier: "ti-vimeo"
    IFThemifyVimeo                               = 0xe729,

    /// Identifier: "ti-twitter"
    IFThemifyTwitter                             = 0xe72a,

    /// Identifier: "ti-time"
    IFThemifyTime                                = 0xe72b,

    /// Identifier: "ti-tumblr"
    IFThemifyTumblr                              = 0xe72c,

    /// Identifier: "ti-skype"
    IFThemifySkype                               = 0xe72d,

    /// Identifier: "ti-share"
    IFThemifyShare                               = 0xe72e,

    /// Identifier: "ti-share-alt"
    IFThemifyShareAlt                            = 0xe72f,

    /// Identifier: "ti-rocket"
    IFThemifyRocket                              = 0xe730,

    /// Identifier: "ti-pinterest"
    IFThemifyPinterest                           = 0xe731,

    /// Identifier: "ti-new-window"
    IFThemifyNewWindow                           = 0xe732,

    /// Identifier: "ti-microsoft"
    IFThemifyMicrosoft                           = 0xe733,

    /// Identifier: "ti-list-ol"
    IFThemifyListOl                              = 0xe734,

    /// Identifier: "ti-linkedin"
    IFThemifyLinkedin                            = 0xe735,

    /// Identifier: "ti-layout-sidebar-2"
    IFThemifyLayoutSidebar2                      = 0xe736,

    /// Identifier: "ti-layout-grid4-alt"
    IFThemifyLayoutGrid4Alt                      = 0xe737,

    /// Identifier: "ti-layout-grid3-alt"
    IFThemifyLayoutGrid3Alt                      = 0xe738,

    /// Identifier: "ti-layout-grid2-alt"
    IFThemifyLayoutGrid2Alt                      = 0xe739,

    /// Identifier: "ti-layout-column4-alt"
    IFThemifyLayoutColumn4Alt                    = 0xe73a,

    /// Identifier: "ti-layout-column3-alt"
    IFThemifyLayoutColumn3Alt                    = 0xe73b,

    /// Identifier: "ti-layout-column2-alt"
    IFThemifyLayoutColumn2Alt                    = 0xe73c,

    /// Identifier: "ti-instagram"
    IFThemifyInstagram                           = 0xe73d,

    /// Identifier: "ti-google"
    IFThemifyGoogle                              = 0xe73e,

    /// Identifier: "ti-github"
    IFThemifyGithub                              = 0xe73f,

    /// Identifier: "ti-flickr"
    IFThemifyFlickr                              = 0xe740,

    /// Identifier: "ti-facebook"
    IFThemifyFacebook                            = 0xe741,

    /// Identifier: "ti-dropbox"
    IFThemifyDropbox                             = 0xe742,

    /// Identifier: "ti-dribbble"
    IFThemifyDribbble                            = 0xe743,

    /// Identifier: "ti-apple"
    IFThemifyApple                               = 0xe744,

    /// Identifier: "ti-android"
    IFThemifyAndroid                             = 0xe745,

    /// Identifier: "ti-save"
    IFThemifySave                                = 0xe746,

    /// Identifier: "ti-save-alt"
    IFThemifySaveAlt                             = 0xe747,

    /// Identifier: "ti-yahoo"
    IFThemifyYahoo                               = 0xe748,

    /// Identifier: "ti-wordpress"
    IFThemifyWordpress                           = 0xe749,

    /// Identifier: "ti-vimeo-alt"
    IFThemifyVimeoAlt                            = 0xe74a,

    /// Identifier: "ti-twitter-alt"
    IFThemifyTwitterAlt                          = 0xe74b,

    /// Identifier: "ti-tumblr-alt"
    IFThemifyTumblrAlt                           = 0xe74c,

    /// Identifier: "ti-trello"
    IFThemifyTrello                              = 0xe74d,

    /// Identifier: "ti-stack-overflow"
    IFThemifyStackOverflow                       = 0xe74e,

    /// Identifier: "ti-soundcloud"
    IFThemifySoundcloud                          = 0xe74f,

    /// Identifier: "ti-sharethis"
    IFThemifySharethis                           = 0xe750,

    /// Identifier: "ti-sharethis-alt"
    IFThemifySharethisAlt                        = 0xe751,

    /// Identifier: "ti-reddit"
    IFThemifyReddit                              = 0xe752,

    /// Identifier: "ti-pinterest-alt"
    IFThemifyPinterestAlt                        = 0xe753,

    /// Identifier: "ti-microsoft-alt"
    IFThemifyMicrosoftAlt                        = 0xe754,

    /// Identifier: "ti-linux"
    IFThemifyLinux                               = 0xe755,

    /// Identifier: "ti-jsfiddle"
    IFThemifyJsfiddle                            = 0xe756,

    /// Identifier: "ti-joomla"
    IFThemifyJoomla                              = 0xe757,

    /// Identifier: "ti-html5"
    IFThemifyHtml5                               = 0xe758,

    /// Identifier: "ti-flickr-alt"
    IFThemifyFlickrAlt                           = 0xe759,

    /// Identifier: "ti-email"
    IFThemifyEmail                               = 0xe75a,

    /// Identifier: "ti-drupal"
    IFThemifyDrupal                              = 0xe75b,

    /// Identifier: "ti-dropbox-alt"
    IFThemifyDropboxAlt                          = 0xe75c,

    /// Identifier: "ti-css3"
    IFThemifyCss3                                = 0xe75d,

    /// Identifier: "ti-rss"
    IFThemifyRss                                 = 0xe75e,

    /// Identifier: "ti-rss-alt"
    IFThemifyRssAlt                              = 0xe75f,

};

/**
 * ThemifyIcons, handcrafted icons that draw inspiration from Apple iOS 7, http://themify.me/themify-icons
 */
@interface IFThemifyIcons : IFIcon
@end
