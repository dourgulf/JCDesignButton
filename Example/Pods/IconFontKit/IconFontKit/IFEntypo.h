#import "IFIcon.h"

/**
 * Entypo icon types.
 */
typedef NS_ENUM(IFIconType, IFEntypoType) {

    /// Identifier: "entypo-add-to-list"
    IFEntypoAddToList                           = 0xe900,

    /// Identifier: "entypo-add-user"
    IFEntypoAddUser                             = 0xe901,

    /// Identifier: "entypo-address"
    IFEntypoAddress                             = 0xe902,

    /// Identifier: "entypo-adjust"
    IFEntypoAdjust                              = 0xe903,

    /// Identifier: "entypo-air"
    IFEntypoAir                                 = 0xe904,

    /// Identifier: "entypo-aircraft-landing"
    IFEntypoAircraftLanding                     = 0xe905,

    /// Identifier: "entypo-aircraft-take-off"
    IFEntypoAircraftTakeOff                     = 0xe906,

    /// Identifier: "entypo-aircraft"
    IFEntypoAircraft                            = 0xe907,

    /// Identifier: "entypo-align-bottom"
    IFEntypoAlignBottom                         = 0xe908,

    /// Identifier: "entypo-align-horizontal-middle"
    IFEntypoAlignHorizontalMiddle               = 0xe909,

    /// Identifier: "entypo-align-left"
    IFEntypoAlignLeft                           = 0xe90a,

    /// Identifier: "entypo-align-right"
    IFEntypoAlignRight                          = 0xe90b,

    /// Identifier: "entypo-align-top"
    IFEntypoAlignTop                            = 0xe90c,

    /// Identifier: "entypo-align-vertical-middle"
    IFEntypoAlignVerticalMiddle                 = 0xe90d,

    /// Identifier: "entypo-archive"
    IFEntypoArchive                             = 0xe90e,

    /// Identifier: "entypo-area-graph"
    IFEntypoAreaGraph                           = 0xe90f,

    /// Identifier: "entypo-arrow-bold-down"
    IFEntypoArrowBoldDown                       = 0xe910,

    /// Identifier: "entypo-arrow-bold-left"
    IFEntypoArrowBoldLeft                       = 0xe911,

    /// Identifier: "entypo-arrow-bold-right"
    IFEntypoArrowBoldRight                      = 0xe912,

    /// Identifier: "entypo-arrow-bold-up"
    IFEntypoArrowBoldUp                         = 0xe913,

    /// Identifier: "entypo-arrow-down"
    IFEntypoArrowDown                           = 0xe914,

    /// Identifier: "entypo-arrow-left"
    IFEntypoArrowLeft                           = 0xe915,

    /// Identifier: "entypo-arrow-long-down"
    IFEntypoArrowLongDown                       = 0xe916,

    /// Identifier: "entypo-arrow-long-left"
    IFEntypoArrowLongLeft                       = 0xe917,

    /// Identifier: "entypo-arrow-long-right"
    IFEntypoArrowLongRight                      = 0xe918,

    /// Identifier: "entypo-arrow-long-up"
    IFEntypoArrowLongUp                         = 0xe919,

    /// Identifier: "entypo-arrow-right"
    IFEntypoArrowRight                          = 0xe91a,

    /// Identifier: "entypo-arrow-up"
    IFEntypoArrowUp                             = 0xe91b,

    /// Identifier: "entypo-arrow-with-circle-down"
    IFEntypoArrowWithCircleDown                 = 0xe91c,

    /// Identifier: "entypo-arrow-with-circle-left"
    IFEntypoArrowWithCircleLeft                 = 0xe91d,

    /// Identifier: "entypo-arrow-with-circle-right"
    IFEntypoArrowWithCircleRight                = 0xe91e,

    /// Identifier: "entypo-arrow-with-circle-up"
    IFEntypoArrowWithCircleUp                   = 0xe91f,

    /// Identifier: "entypo-attachment"
    IFEntypoAttachment                          = 0xe920,

    /// Identifier: "entypo-awareness-ribbon"
    IFEntypoAwarenessRibbon                     = 0xe921,

    /// Identifier: "entypo-back-in-time"
    IFEntypoBackInTime                          = 0xe922,

    /// Identifier: "entypo-back"
    IFEntypoBack                                = 0xe923,

    /// Identifier: "entypo-bar-graph"
    IFEntypoBarGraph                            = 0xe924,

    /// Identifier: "entypo-battery"
    IFEntypoBattery                             = 0xe925,

    /// Identifier: "entypo-beamed-note"
    IFEntypoBeamedNote                          = 0xe926,

    /// Identifier: "entypo-bell"
    IFEntypoBell                                = 0xe927,

    /// Identifier: "entypo-blackboard"
    IFEntypoBlackboard                          = 0xe928,

    /// Identifier: "entypo-block"
    IFEntypoBlock                               = 0xe929,

    /// Identifier: "entypo-book"
    IFEntypoBook                                = 0xe92a,

    /// Identifier: "entypo-bookmark"
    IFEntypoBookmark                            = 0xe92b,

    /// Identifier: "entypo-bookmarks"
    IFEntypoBookmarks                           = 0xe92c,

    /// Identifier: "entypo-bowl"
    IFEntypoBowl                                = 0xe92d,

    /// Identifier: "entypo-box"
    IFEntypoBox                                 = 0xe92e,

    /// Identifier: "entypo-briefcase"
    IFEntypoBriefcase                           = 0xe92f,

    /// Identifier: "entypo-browser"
    IFEntypoBrowser                             = 0xe930,

    /// Identifier: "entypo-brush"
    IFEntypoBrush                               = 0xe931,

    /// Identifier: "entypo-bucket"
    IFEntypoBucket                              = 0xe932,

    /// Identifier: "entypo-bug"
    IFEntypoBug                                 = 0xe933,

    /// Identifier: "entypo-cake"
    IFEntypoCake                                = 0xe934,

    /// Identifier: "entypo-calculator"
    IFEntypoCalculator                          = 0xe935,

    /// Identifier: "entypo-calendar"
    IFEntypoCalendar                            = 0xe936,

    /// Identifier: "entypo-camera"
    IFEntypoCamera                              = 0xe937,

    /// Identifier: "entypo-ccw"
    IFEntypoCcw                                 = 0xe938,

    /// Identifier: "entypo-chat"
    IFEntypoChat                                = 0xe939,

    /// Identifier: "entypo-check"
    IFEntypoCheck                               = 0xe93a,

    /// Identifier: "entypo-chevron-down"
    IFEntypoChevronDown                         = 0xe93b,

    /// Identifier: "entypo-chevron-left"
    IFEntypoChevronLeft                         = 0xe93c,

    /// Identifier: "entypo-chevron-right"
    IFEntypoChevronRight                        = 0xe93d,

    /// Identifier: "entypo-chevron-small-down"
    IFEntypoChevronSmallDown                    = 0xe93e,

    /// Identifier: "entypo-chevron-small-left"
    IFEntypoChevronSmallLeft                    = 0xe93f,

    /// Identifier: "entypo-chevron-small-right"
    IFEntypoChevronSmallRight                   = 0xe940,

    /// Identifier: "entypo-chevron-small-up"
    IFEntypoChevronSmallUp                      = 0xe941,

    /// Identifier: "entypo-chevron-thin-down"
    IFEntypoChevronThinDown                     = 0xe942,

    /// Identifier: "entypo-chevron-thin-left"
    IFEntypoChevronThinLeft                     = 0xe943,

    /// Identifier: "entypo-chevron-thin-right"
    IFEntypoChevronThinRight                    = 0xe944,

    /// Identifier: "entypo-chevron-thin-up"
    IFEntypoChevronThinUp                       = 0xe945,

    /// Identifier: "entypo-chevron-up"
    IFEntypoChevronUp                           = 0xe946,

    /// Identifier: "entypo-chevron-with-circle-down"
    IFEntypoChevronWithCircleDown               = 0xe947,

    /// Identifier: "entypo-chevron-with-circle-left"
    IFEntypoChevronWithCircleLeft               = 0xe948,

    /// Identifier: "entypo-chevron-with-circle-right"
    IFEntypoChevronWithCircleRight              = 0xe949,

    /// Identifier: "entypo-chevron-with-circle-up"
    IFEntypoChevronWithCircleUp                 = 0xe94a,

    /// Identifier: "entypo-circle-with-cross"
    IFEntypoCircleWithCross                     = 0xe94b,

    /// Identifier: "entypo-circle-with-minus"
    IFEntypoCircleWithMinus                     = 0xe94c,

    /// Identifier: "entypo-circle-with-plus"
    IFEntypoCircleWithPlus                      = 0xe94d,

    /// Identifier: "entypo-circle"
    IFEntypoCircle                              = 0xe94e,

    /// Identifier: "entypo-circular-graph"
    IFEntypoCircularGraph                       = 0xe94f,

    /// Identifier: "entypo-clapperboard"
    IFEntypoClapperboard                        = 0xe950,

    /// Identifier: "entypo-classic-computer"
    IFEntypoClassicComputer                     = 0xe951,

    /// Identifier: "entypo-clipboard"
    IFEntypoClipboard                           = 0xe952,

    /// Identifier: "entypo-clock"
    IFEntypoClock                               = 0xe953,

    /// Identifier: "entypo-cloud"
    IFEntypoCloud                               = 0xe954,

    /// Identifier: "entypo-code"
    IFEntypoCode                                = 0xe955,

    /// Identifier: "entypo-cog"
    IFEntypoCog                                 = 0xe956,

    /// Identifier: "entypo-colours"
    IFEntypoColours                             = 0xe957,

    /// Identifier: "entypo-compass"
    IFEntypoCompass                             = 0xe958,

    /// Identifier: "entypo-controller-fast-backward"
    IFEntypoControllerFastBackward              = 0xe959,

    /// Identifier: "entypo-controller-fast-forward"
    IFEntypoControllerFastForward               = 0xe95a,

    /// Identifier: "entypo-controller-jump-to-start"
    IFEntypoControllerJumpToStart               = 0xe95b,

    /// Identifier: "entypo-controller-next"
    IFEntypoControllerNext                      = 0xe95c,

    /// Identifier: "entypo-controller-paus"
    IFEntypoControllerPaus                      = 0xe95d,

    /// Identifier: "entypo-controller-play"
    IFEntypoControllerPlay                      = 0xe95e,

    /// Identifier: "entypo-controller-record"
    IFEntypoControllerRecord                    = 0xe95f,

    /// Identifier: "entypo-controller-stop"
    IFEntypoControllerStop                      = 0xe960,

    /// Identifier: "entypo-controller-volume"
    IFEntypoControllerVolume                    = 0xe961,

    /// Identifier: "entypo-copy"
    IFEntypoCopy                                = 0xe962,

    /// Identifier: "entypo-creative-commons-attribution"
    IFEntypoCreativeCommonsAttribution          = 0xe963,

    /// Identifier: "entypo-creative-commons-noderivs"
    IFEntypoCreativeCommonsNoderivs             = 0xe964,

    /// Identifier: "entypo-creative-commons-noncommercial-eu"
    IFEntypoCreativeCommonsNoncommercialEu      = 0xe965,

    /// Identifier: "entypo-creative-commons-noncommercial-us"
    IFEntypoCreativeCommonsNoncommercialUs      = 0xe966,

    /// Identifier: "entypo-creative-commons-public-domain"
    IFEntypoCreativeCommonsPublicDomain         = 0xe967,

    /// Identifier: "entypo-creative-commons-remix"
    IFEntypoCreativeCommonsRemix                = 0xe968,

    /// Identifier: "entypo-creative-commons-share"
    IFEntypoCreativeCommonsShare                = 0xe969,

    /// Identifier: "entypo-creative-commons-sharealike"
    IFEntypoCreativeCommonsSharealike           = 0xe96a,

    /// Identifier: "entypo-creative-commons"
    IFEntypoCreativeCommons                     = 0xe96b,

    /// Identifier: "entypo-credit-card"
    IFEntypoCreditCard                          = 0xe96c,

    /// Identifier: "entypo-credit"
    IFEntypoCredit                              = 0xe96d,

    /// Identifier: "entypo-crop"
    IFEntypoCrop                                = 0xe96e,

    /// Identifier: "entypo-cross"
    IFEntypoCross                               = 0xe96f,

    /// Identifier: "entypo-cup"
    IFEntypoCup                                 = 0xe970,

    /// Identifier: "entypo-cw"
    IFEntypoCw                                  = 0xe971,

    /// Identifier: "entypo-cycle"
    IFEntypoCycle                               = 0xe972,

    /// Identifier: "entypo-database"
    IFEntypoDatabase                            = 0xe973,

    /// Identifier: "entypo-dial-pad"
    IFEntypoDialPad                             = 0xe974,

    /// Identifier: "entypo-direction"
    IFEntypoDirection                           = 0xe975,

    /// Identifier: "entypo-document-landscape"
    IFEntypoDocumentLandscape                   = 0xe976,

    /// Identifier: "entypo-document"
    IFEntypoDocument                            = 0xe977,

    /// Identifier: "entypo-documents"
    IFEntypoDocuments                           = 0xe978,

    /// Identifier: "entypo-dot-single"
    IFEntypoDotSingle                           = 0xe979,

    /// Identifier: "entypo-dots-three-horizontal"
    IFEntypoDotsThreeHorizontal                 = 0xe97a,

    /// Identifier: "entypo-dots-three-vertical"
    IFEntypoDotsThreeVertical                   = 0xe97b,

    /// Identifier: "entypo-dots-two-horizontal"
    IFEntypoDotsTwoHorizontal                   = 0xe97c,

    /// Identifier: "entypo-dots-two-vertical"
    IFEntypoDotsTwoVertical                     = 0xe97d,

    /// Identifier: "entypo-download"
    IFEntypoDownload                            = 0xe97e,

    /// Identifier: "entypo-drink"
    IFEntypoDrink                               = 0xe97f,

    /// Identifier: "entypo-drive"
    IFEntypoDrive                               = 0xe980,

    /// Identifier: "entypo-drop"
    IFEntypoDrop                                = 0xe981,

    /// Identifier: "entypo-edit"
    IFEntypoEdit                                = 0xe982,

    /// Identifier: "entypo-email"
    IFEntypoEmail                               = 0xe983,

    /// Identifier: "entypo-emoji-flirt"
    IFEntypoEmojiFlirt                          = 0xe984,

    /// Identifier: "entypo-emoji-happy"
    IFEntypoEmojiHappy                          = 0xe985,

    /// Identifier: "entypo-emoji-neutral"
    IFEntypoEmojiNeutral                        = 0xe986,

    /// Identifier: "entypo-emoji-sad"
    IFEntypoEmojiSad                            = 0xe987,

    /// Identifier: "entypo-erase"
    IFEntypoErase                               = 0xe988,

    /// Identifier: "entypo-eraser"
    IFEntypoEraser                              = 0xe989,

    /// Identifier: "entypo-export"
    IFEntypoExport                              = 0xe98a,

    /// Identifier: "entypo-eye-with-line"
    IFEntypoEyeWithLine                         = 0xe98b,

    /// Identifier: "entypo-eye"
    IFEntypoEye                                 = 0xe98c,

    /// Identifier: "entypo-feather"
    IFEntypoFeather                             = 0xe98d,

    /// Identifier: "entypo-fingerprint"
    IFEntypoFingerprint                         = 0xe98e,

    /// Identifier: "entypo-flag"
    IFEntypoFlag                                = 0xe98f,

    /// Identifier: "entypo-flash"
    IFEntypoFlash                               = 0xe990,

    /// Identifier: "entypo-flashlight"
    IFEntypoFlashlight                          = 0xe991,

    /// Identifier: "entypo-flat-brush"
    IFEntypoFlatBrush                           = 0xe992,

    /// Identifier: "entypo-flow-branch"
    IFEntypoFlowBranch                          = 0xe993,

    /// Identifier: "entypo-flow-cascade"
    IFEntypoFlowCascade                         = 0xe994,

    /// Identifier: "entypo-flow-line"
    IFEntypoFlowLine                            = 0xe995,

    /// Identifier: "entypo-flow-parallel"
    IFEntypoFlowParallel                        = 0xe996,

    /// Identifier: "entypo-flow-tree"
    IFEntypoFlowTree                            = 0xe997,

    /// Identifier: "entypo-flower"
    IFEntypoFlower                              = 0xe998,

    /// Identifier: "entypo-folder-images"
    IFEntypoFolderImages                        = 0xe999,

    /// Identifier: "entypo-folder-music"
    IFEntypoFolderMusic                         = 0xe99a,

    /// Identifier: "entypo-folder-video"
    IFEntypoFolderVideo                         = 0xe99b,

    /// Identifier: "entypo-folder"
    IFEntypoFolder                              = 0xe99c,

    /// Identifier: "entypo-forward"
    IFEntypoForward                             = 0xe99d,

    /// Identifier: "entypo-funnel"
    IFEntypoFunnel                              = 0xe99e,

    /// Identifier: "entypo-game-controller"
    IFEntypoGameController                      = 0xe99f,

    /// Identifier: "entypo-gauge"
    IFEntypoGauge                               = 0xe9a0,

    /// Identifier: "entypo-globe"
    IFEntypoGlobe                               = 0xe9a1,

    /// Identifier: "entypo-graduation-cap"
    IFEntypoGraduationCap                       = 0xe9a2,

    /// Identifier: "entypo-grid"
    IFEntypoGrid                                = 0xe9a3,

    /// Identifier: "entypo-hair-cross"
    IFEntypoHairCross                           = 0xe9a4,

    /// Identifier: "entypo-hand"
    IFEntypoHand                                = 0xe9a5,

    /// Identifier: "entypo-heart-outlined"
    IFEntypoHeartOutlined                       = 0xe9a6,

    /// Identifier: "entypo-heart"
    IFEntypoHeart                               = 0xe9a7,

    /// Identifier: "entypo-help-with-circle"
    IFEntypoHelpWithCircle                      = 0xe9a8,

    /// Identifier: "entypo-help"
    IFEntypoHelp                                = 0xe9a9,

    /// Identifier: "entypo-home"
    IFEntypoHome                                = 0xe9aa,

    /// Identifier: "entypo-hour-glass"
    IFEntypoHourGlass                           = 0xe9ab,

    /// Identifier: "entypo-image-inverted"
    IFEntypoImageInverted                       = 0xe9ac,

    /// Identifier: "entypo-image"
    IFEntypoImage                               = 0xe9ad,

    /// Identifier: "entypo-images"
    IFEntypoImages                              = 0xe9ae,

    /// Identifier: "entypo-inbox"
    IFEntypoInbox                               = 0xe9af,

    /// Identifier: "entypo-infinity"
    IFEntypoInfinity                            = 0xe9b0,

    /// Identifier: "entypo-info-with-circle"
    IFEntypoInfoWithCircle                      = 0xe9b1,

    /// Identifier: "entypo-info"
    IFEntypoInfo                                = 0xe9b2,

    /// Identifier: "entypo-install"
    IFEntypoInstall                             = 0xe9b3,

    /// Identifier: "entypo-key"
    IFEntypoKey                                 = 0xe9b4,

    /// Identifier: "entypo-keyboard"
    IFEntypoKeyboard                            = 0xe9b5,

    /// Identifier: "entypo-lab-flask"
    IFEntypoLabFlask                            = 0xe9b6,

    /// Identifier: "entypo-landline"
    IFEntypoLandline                            = 0xe9b7,

    /// Identifier: "entypo-language"
    IFEntypoLanguage                            = 0xe9b8,

    /// Identifier: "entypo-laptop"
    IFEntypoLaptop                              = 0xe9b9,

    /// Identifier: "entypo-layers"
    IFEntypoLayers                              = 0xe9ba,

    /// Identifier: "entypo-leaf"
    IFEntypoLeaf                                = 0xe9bb,

    /// Identifier: "entypo-level-down"
    IFEntypoLevelDown                           = 0xe9bc,

    /// Identifier: "entypo-level-up"
    IFEntypoLevelUp                             = 0xe9bd,

    /// Identifier: "entypo-lifebuoy"
    IFEntypoLifebuoy                            = 0xe9be,

    /// Identifier: "entypo-light-bulb"
    IFEntypoLightBulb                           = 0xe9bf,

    /// Identifier: "entypo-light-down"
    IFEntypoLightDown                           = 0xe9c0,

    /// Identifier: "entypo-light-up"
    IFEntypoLightUp                             = 0xe9c1,

    /// Identifier: "entypo-line-graph"
    IFEntypoLineGraph                           = 0xe9c2,

    /// Identifier: "entypo-link"
    IFEntypoLink                                = 0xe9c3,

    /// Identifier: "entypo-list"
    IFEntypoList                                = 0xe9c4,

    /// Identifier: "entypo-location-pin"
    IFEntypoLocationPin                         = 0xe9c5,

    /// Identifier: "entypo-location"
    IFEntypoLocation                            = 0xe9c6,

    /// Identifier: "entypo-lock-open"
    IFEntypoLockOpen                            = 0xe9c7,

    /// Identifier: "entypo-lock"
    IFEntypoLock                                = 0xe9c8,

    /// Identifier: "entypo-log-out"
    IFEntypoLogOut                              = 0xe9c9,

    /// Identifier: "entypo-login"
    IFEntypoLogin                               = 0xe9ca,

    /// Identifier: "entypo-loop"
    IFEntypoLoop                                = 0xe9cb,

    /// Identifier: "entypo-magnet"
    IFEntypoMagnet                              = 0xe9cc,

    /// Identifier: "entypo-magnifying-glass"
    IFEntypoMagnifyingGlass                     = 0xe9cd,

    /// Identifier: "entypo-mail"
    IFEntypoMail                                = 0xe9ce,

    /// Identifier: "entypo-man"
    IFEntypoMan                                 = 0xe9cf,

    /// Identifier: "entypo-map"
    IFEntypoMap                                 = 0xe9d0,

    /// Identifier: "entypo-mask"
    IFEntypoMask                                = 0xe9d1,

    /// Identifier: "entypo-medal"
    IFEntypoMedal                               = 0xe9d2,

    /// Identifier: "entypo-megaphone"
    IFEntypoMegaphone                           = 0xe9d3,

    /// Identifier: "entypo-menu"
    IFEntypoMenu                                = 0xe9d4,

    /// Identifier: "entypo-merge"
    IFEntypoMerge                               = 0xe9d5,

    /// Identifier: "entypo-message"
    IFEntypoMessage                             = 0xe9d6,

    /// Identifier: "entypo-mic"
    IFEntypoMic                                 = 0xe9d7,

    /// Identifier: "entypo-minus"
    IFEntypoMinus                               = 0xe9d8,

    /// Identifier: "entypo-mobile"
    IFEntypoMobile                              = 0xe9d9,

    /// Identifier: "entypo-modern-mic"
    IFEntypoModernMic                           = 0xe9da,

    /// Identifier: "entypo-moon"
    IFEntypoMoon                                = 0xe9db,

    /// Identifier: "entypo-mouse-pointer"
    IFEntypoMousePointer                        = 0xe9dc,

    /// Identifier: "entypo-mouse"
    IFEntypoMouse                               = 0xe9dd,

    /// Identifier: "entypo-music"
    IFEntypoMusic                               = 0xe9de,

    /// Identifier: "entypo-network"
    IFEntypoNetwork                             = 0xe9df,

    /// Identifier: "entypo-new-message"
    IFEntypoNewMessage                          = 0xe9e0,

    /// Identifier: "entypo-new"
    IFEntypoNew                                 = 0xe9e1,

    /// Identifier: "entypo-news"
    IFEntypoNews                                = 0xe9e2,

    /// Identifier: "entypo-newsletter"
    IFEntypoNewsletter                          = 0xe9e3,

    /// Identifier: "entypo-note"
    IFEntypoNote                                = 0xe9e4,

    /// Identifier: "entypo-notification"
    IFEntypoNotification                        = 0xe9e5,

    /// Identifier: "entypo-notifications-off"
    IFEntypoNotificationsOff                    = 0xe9e6,

    /// Identifier: "entypo-old-mobile"
    IFEntypoOldMobile                           = 0xe9e7,

    /// Identifier: "entypo-old-phone"
    IFEntypoOldPhone                            = 0xe9e8,

    /// Identifier: "entypo-open-book"
    IFEntypoOpenBook                            = 0xe9e9,

    /// Identifier: "entypo-palette"
    IFEntypoPalette                             = 0xe9ea,

    /// Identifier: "entypo-paper-plane"
    IFEntypoPaperPlane                          = 0xe9eb,

    /// Identifier: "entypo-pencil"
    IFEntypoPencil                              = 0xe9ec,

    /// Identifier: "entypo-phone"
    IFEntypoPhone                               = 0xe9ed,

    /// Identifier: "entypo-pie-chart"
    IFEntypoPieChart                            = 0xe9ee,

    /// Identifier: "entypo-pin"
    IFEntypoPin                                 = 0xe9ef,

    /// Identifier: "entypo-plus"
    IFEntypoPlus                                = 0xe9f0,

    /// Identifier: "entypo-popup"
    IFEntypoPopup                               = 0xe9f1,

    /// Identifier: "entypo-power-plug"
    IFEntypoPowerPlug                           = 0xe9f2,

    /// Identifier: "entypo-price-ribbon"
    IFEntypoPriceRibbon                         = 0xe9f3,

    /// Identifier: "entypo-price-tag"
    IFEntypoPriceTag                            = 0xe9f4,

    /// Identifier: "entypo-print"
    IFEntypoPrint                               = 0xe9f5,

    /// Identifier: "entypo-progress-empty"
    IFEntypoProgressEmpty                       = 0xe9f6,

    /// Identifier: "entypo-progress-full"
    IFEntypoProgressFull                        = 0xe9f7,

    /// Identifier: "entypo-progress-one"
    IFEntypoProgressOne                         = 0xe9f8,

    /// Identifier: "entypo-progress-two"
    IFEntypoProgressTwo                         = 0xe9f9,

    /// Identifier: "entypo-publish"
    IFEntypoPublish                             = 0xe9fa,

    /// Identifier: "entypo-quote"
    IFEntypoQuote                               = 0xe9fb,

    /// Identifier: "entypo-radio"
    IFEntypoRadio                               = 0xe9fc,

    /// Identifier: "entypo-remove-user"
    IFEntypoRemoveUser                          = 0xe9fd,

    /// Identifier: "entypo-reply-all"
    IFEntypoReplyAll                            = 0xe9fe,

    /// Identifier: "entypo-reply"
    IFEntypoReply                               = 0xe9ff,

    /// Identifier: "entypo-resize-100"
    IFEntypoResize100                           = 0xea00,

    /// Identifier: "entypo-resize-full-screen"
    IFEntypoResizeFullScreen                    = 0xea01,

    /// Identifier: "entypo-retweet"
    IFEntypoRetweet                             = 0xea02,

    /// Identifier: "entypo-rocket"
    IFEntypoRocket                              = 0xea03,

    /// Identifier: "entypo-round-brush"
    IFEntypoRoundBrush                          = 0xea04,

    /// Identifier: "entypo-rss"
    IFEntypoRss                                 = 0xea05,

    /// Identifier: "entypo-ruler"
    IFEntypoRuler                               = 0xea06,

    /// Identifier: "entypo-save"
    IFEntypoSave                                = 0xea07,

    /// Identifier: "entypo-scissors"
    IFEntypoScissors                            = 0xea08,

    /// Identifier: "entypo-select-arrows"
    IFEntypoSelectArrows                        = 0xea09,

    /// Identifier: "entypo-share-alternative"
    IFEntypoShareAlternative                    = 0xea0a,

    /// Identifier: "entypo-share"
    IFEntypoShare                               = 0xea0b,

    /// Identifier: "entypo-shareable"
    IFEntypoShareable                           = 0xea0c,

    /// Identifier: "entypo-shield"
    IFEntypoShield                              = 0xea0d,

    /// Identifier: "entypo-shop"
    IFEntypoShop                                = 0xea0e,

    /// Identifier: "entypo-shopping-bag"
    IFEntypoShoppingBag                         = 0xea0f,

    /// Identifier: "entypo-shopping-basket"
    IFEntypoShoppingBasket                      = 0xea10,

    /// Identifier: "entypo-shopping-cart"
    IFEntypoShoppingCart                        = 0xea11,

    /// Identifier: "entypo-shuffle"
    IFEntypoShuffle                             = 0xea12,

    /// Identifier: "entypo-signal"
    IFEntypoSignal                              = 0xea13,

    /// Identifier: "entypo-sound-mix"
    IFEntypoSoundMix                            = 0xea14,

    /// Identifier: "entypo-sound-mute"
    IFEntypoSoundMute                           = 0xea15,

    /// Identifier: "entypo-sound"
    IFEntypoSound                               = 0xea16,

    /// Identifier: "entypo-sports-club"
    IFEntypoSportsClub                          = 0xea17,

    /// Identifier: "entypo-spreadsheet"
    IFEntypoSpreadsheet                         = 0xea18,

    /// Identifier: "entypo-squared-cross"
    IFEntypoSquaredCross                        = 0xea19,

    /// Identifier: "entypo-squared-minus"
    IFEntypoSquaredMinus                        = 0xea1a,

    /// Identifier: "entypo-squared-plus"
    IFEntypoSquaredPlus                         = 0xea1b,

    /// Identifier: "entypo-star-outlined"
    IFEntypoStarOutlined                        = 0xea1c,

    /// Identifier: "entypo-star"
    IFEntypoStar                                = 0xea1d,

    /// Identifier: "entypo-stopwatch"
    IFEntypoStopwatch                           = 0xea1e,

    /// Identifier: "entypo-suitcase"
    IFEntypoSuitcase                            = 0xea1f,

    /// Identifier: "entypo-swap"
    IFEntypoSwap                                = 0xea20,

    /// Identifier: "entypo-sweden"
    IFEntypoSweden                              = 0xea21,

    /// Identifier: "entypo-switch"
    IFEntypoSwitch                              = 0xea22,

    /// Identifier: "entypo-tablet-mobile-combo"
    IFEntypoTabletMobileCombo                   = 0xea23,

    /// Identifier: "entypo-tablet"
    IFEntypoTablet                              = 0xea24,

    /// Identifier: "entypo-tag"
    IFEntypoTag                                 = 0xea25,

    /// Identifier: "entypo-text-document-inverted"
    IFEntypoTextDocumentInverted                = 0xea26,

    /// Identifier: "entypo-text-document"
    IFEntypoTextDocument                        = 0xea27,

    /// Identifier: "entypo-text"
    IFEntypoText                                = 0xea28,

    /// Identifier: "entypo-thermometer"
    IFEntypoThermometer                         = 0xea29,

    /// Identifier: "entypo-thumbs-down"
    IFEntypoThumbsDown                          = 0xea2a,

    /// Identifier: "entypo-thumbs-up"
    IFEntypoThumbsUp                            = 0xea2b,

    /// Identifier: "entypo-thunder-cloud"
    IFEntypoThunderCloud                        = 0xea2c,

    /// Identifier: "entypo-ticket"
    IFEntypoTicket                              = 0xea2d,

    /// Identifier: "entypo-time-slot"
    IFEntypoTimeSlot                            = 0xea2e,

    /// Identifier: "entypo-tools"
    IFEntypoTools                               = 0xea2f,

    /// Identifier: "entypo-traffic-cone"
    IFEntypoTrafficCone                         = 0xea30,

    /// Identifier: "entypo-trash"
    IFEntypoTrash                               = 0xea31,

    /// Identifier: "entypo-tree"
    IFEntypoTree                                = 0xea32,

    /// Identifier: "entypo-triangle-down"
    IFEntypoTriangleDown                        = 0xea33,

    /// Identifier: "entypo-triangle-left"
    IFEntypoTriangleLeft                        = 0xea34,

    /// Identifier: "entypo-triangle-right"
    IFEntypoTriangleRight                       = 0xea35,

    /// Identifier: "entypo-triangle-up"
    IFEntypoTriangleUp                          = 0xea36,

    /// Identifier: "entypo-trophy"
    IFEntypoTrophy                              = 0xea37,

    /// Identifier: "entypo-tv"
    IFEntypoTv                                  = 0xea38,

    /// Identifier: "entypo-typing"
    IFEntypoTyping                              = 0xea39,

    /// Identifier: "entypo-uninstall"
    IFEntypoUninstall                           = 0xea3a,

    /// Identifier: "entypo-unread"
    IFEntypoUnread                              = 0xea3b,

    /// Identifier: "entypo-untag"
    IFEntypoUntag                               = 0xea3c,

    /// Identifier: "entypo-upload-to-cloud"
    IFEntypoUploadToCloud                       = 0xea3d,

    /// Identifier: "entypo-upload"
    IFEntypoUpload                              = 0xea3e,

    /// Identifier: "entypo-user"
    IFEntypoUser                                = 0xea3f,

    /// Identifier: "entypo-users"
    IFEntypoUsers                               = 0xea40,

    /// Identifier: "entypo-v-card"
    IFEntypoVCard                               = 0xea41,

    /// Identifier: "entypo-video-camera"
    IFEntypoVideoCamera                         = 0xea42,

    /// Identifier: "entypo-video"
    IFEntypoVideo                               = 0xea43,

    /// Identifier: "entypo-vinyl"
    IFEntypoVinyl                               = 0xea44,

    /// Identifier: "entypo-voicemail"
    IFEntypoVoicemail                           = 0xea45,

    /// Identifier: "entypo-wallet"
    IFEntypoWallet                              = 0xea46,

    /// Identifier: "entypo-warning"
    IFEntypoWarning                             = 0xea47,

    /// Identifier: "entypo-water"
    IFEntypoWater                               = 0xea48,

    /// Identifier: "entypo-px-with-circle"
    IFEntypoPxWithCircle                        = 0xea49,

    /// Identifier: "entypo-px"
    IFEntypoPx                                  = 0xea4a,

    /// Identifier: "entypo-app-store"
    IFEntypoAppStore                            = 0xea4b,

    /// Identifier: "entypo-baidu"
    IFEntypoBaidu                               = 0xea4c,

    /// Identifier: "entypo-basecamp"
    IFEntypoBasecamp                            = 0xea4d,

    /// Identifier: "entypo-behance"
    IFEntypoBehance                             = 0xea4e,

    /// Identifier: "entypo-creative-cloud"
    IFEntypoCreativeCloud                       = 0xea4f,

    /// Identifier: "entypo-dribbble-with-circle"
    IFEntypoDribbbleWithCircle                  = 0xea50,

    /// Identifier: "entypo-dribbble"
    IFEntypoDribbble                            = 0xea51,

    /// Identifier: "entypo-dropbox"
    IFEntypoDropbox                             = 0xea52,

    /// Identifier: "entypo-evernote"
    IFEntypoEvernote                            = 0xea53,

    /// Identifier: "entypo-facebook-with-circle"
    IFEntypoFacebookWithCircle                  = 0xea54,

    /// Identifier: "entypo-facebook"
    IFEntypoFacebook                            = 0xea55,

    /// Identifier: "entypo-flattr"
    IFEntypoFlattr                              = 0xea56,

    /// Identifier: "entypo-flickr-with-circle"
    IFEntypoFlickrWithCircle                    = 0xea57,

    /// Identifier: "entypo-flickr"
    IFEntypoFlickr                              = 0xea58,

    /// Identifier: "entypo-foursquare"
    IFEntypoFoursquare                          = 0xea59,

    /// Identifier: "entypo-github-with-circle"
    IFEntypoGithubWithCircle                    = 0xea5a,

    /// Identifier: "entypo-github"
    IFEntypoGithub                              = 0xea5b,

    /// Identifier: "entypo-google-drive"
    IFEntypoGoogleDrive                         = 0xea5c,

    /// Identifier: "entypo-google-hangouts"
    IFEntypoGoogleHangouts                      = 0xea5d,

    /// Identifier: "entypo-google-play"
    IFEntypoGooglePlay                          = 0xea5e,

    /// Identifier: "entypo-google-with-circle"
    IFEntypoGoogleWithCircle                    = 0xea5f,

    /// Identifier: "entypo-google"
    IFEntypoGoogle                              = 0xea60,

    /// Identifier: "entypo-grooveshark"
    IFEntypoGrooveshark                         = 0xea61,

    /// Identifier: "entypo-houzz"
    IFEntypoHouzz                               = 0xea62,

    /// Identifier: "entypo-icloud"
    IFEntypoIcloud                              = 0xea63,

    /// Identifier: "entypo-instagram-with-circle"
    IFEntypoInstagramWithCircle                 = 0xea64,

    /// Identifier: "entypo-instagram"
    IFEntypoInstagram                           = 0xea65,

    /// Identifier: "entypo-lastfm-with-circle"
    IFEntypoLastfmWithCircle                    = 0xea66,

    /// Identifier: "entypo-lastfm"
    IFEntypoLastfm                              = 0xea67,

    /// Identifier: "entypo-linkedin-with-circle"
    IFEntypoLinkedinWithCircle                  = 0xea68,

    /// Identifier: "entypo-linkedin"
    IFEntypoLinkedin                            = 0xea69,

    /// Identifier: "entypo-mail-with-circle"
    IFEntypoMailWithCircle                      = 0xea6a,

    /// Identifier: "entypo-medium-with-circle"
    IFEntypoMediumWithCircle                    = 0xea6b,

    /// Identifier: "entypo-medium"
    IFEntypoMedium                              = 0xea6c,

    /// Identifier: "entypo-mixi"
    IFEntypoMixi                                = 0xea6d,

    /// Identifier: "entypo-onedrive"
    IFEntypoOnedrive                            = 0xea6e,

    /// Identifier: "entypo-paypal"
    IFEntypoPaypal                              = 0xea6f,

    /// Identifier: "entypo-picasa"
    IFEntypoPicasa                              = 0xea70,

    /// Identifier: "entypo-pinterest-with-circle"
    IFEntypoPinterestWithCircle                 = 0xea71,

    /// Identifier: "entypo-pinterest"
    IFEntypoPinterest                           = 0xea72,

    /// Identifier: "entypo-qq-with-circle"
    IFEntypoQqWithCircle                        = 0xea73,

    /// Identifier: "entypo-qq"
    IFEntypoQq                                  = 0xea74,

    /// Identifier: "entypo-raft-with-circle"
    IFEntypoRaftWithCircle                      = 0xea75,

    /// Identifier: "entypo-raft"
    IFEntypoRaft                                = 0xea76,

    /// Identifier: "entypo-rainbow"
    IFEntypoRainbow                             = 0xea77,

    /// Identifier: "entypo-rdio-with-circle"
    IFEntypoRdioWithCircle                      = 0xea78,

    /// Identifier: "entypo-rdio"
    IFEntypoRdio                                = 0xea79,

    /// Identifier: "entypo-renren"
    IFEntypoRenren                              = 0xea7a,

    /// Identifier: "entypo-scribd"
    IFEntypoScribd                              = 0xea7b,

    /// Identifier: "entypo-sina-weibo"
    IFEntypoSinaWeibo                           = 0xea7c,

    /// Identifier: "entypo-skype-with-circle"
    IFEntypoSkypeWithCircle                     = 0xea7d,

    /// Identifier: "entypo-skype"
    IFEntypoSkype                               = 0xea7e,

    /// Identifier: "entypo-slideshare"
    IFEntypoSlideshare                          = 0xea7f,

    /// Identifier: "entypo-smashing"
    IFEntypoSmashing                            = 0xea80,

    /// Identifier: "entypo-soundcloud"
    IFEntypoSoundcloud                          = 0xea81,

    /// Identifier: "entypo-spotify-with-circle"
    IFEntypoSpotifyWithCircle                   = 0xea82,

    /// Identifier: "entypo-spotify"
    IFEntypoSpotify                             = 0xea83,

    /// Identifier: "entypo-stumbleupon-with-circle"
    IFEntypoStumbleuponWithCircle               = 0xea84,

    /// Identifier: "entypo-stumbleupon"
    IFEntypoStumbleupon                         = 0xea85,

    /// Identifier: "entypo-swarm"
    IFEntypoSwarm                               = 0xea86,

    /// Identifier: "entypo-tripadvisor"
    IFEntypoTripadvisor                         = 0xea87,

    /// Identifier: "entypo-tumblr-with-circle"
    IFEntypoTumblrWithCircle                    = 0xea88,

    /// Identifier: "entypo-tumblr"
    IFEntypoTumblr                              = 0xea89,

    /// Identifier: "entypo-twitter-with-circle"
    IFEntypoTwitterWithCircle                   = 0xea8a,

    /// Identifier: "entypo-twitter"
    IFEntypoTwitter                             = 0xea8b,

    /// Identifier: "entypo-vimeo-with-circle"
    IFEntypoVimeoWithCircle                     = 0xea8c,

    /// Identifier: "entypo-vimeo"
    IFEntypoVimeo                               = 0xea8d,

    /// Identifier: "entypo-vine-with-circle"
    IFEntypoVineWithCircle                      = 0xea8e,

    /// Identifier: "entypo-vine"
    IFEntypoVine                                = 0xea8f,

    /// Identifier: "entypo-vk-alternitive"
    IFEntypoVkAlternitive                       = 0xea90,

    /// Identifier: "entypo-vk-with-circle"
    IFEntypoVkWithCircle                        = 0xea91,

    /// Identifier: "entypo-vk"
    IFEntypoVk                                  = 0xea92,

    /// Identifier: "entypo-windows-store"
    IFEntypoWindowsStore                        = 0xea93,

    /// Identifier: "entypo-xing-with-circle"
    IFEntypoXingWithCircle                      = 0xea94,

    /// Identifier: "entypo-xing"
    IFEntypoXing                                = 0xea95,

    /// Identifier: "entypo-yelp"
    IFEntypoYelp                                = 0xea96,

    /// Identifier: "entypo-youko-with-circle"
    IFEntypoYoukoWithCircle                     = 0xea97,

    /// Identifier: "entypo-youko"
    IFEntypoYouko                               = 0xea98,

    /// Identifier: "entypo-youtube-with-circle"
    IFEntypoYoutubeWithCircle                   = 0xea99,

    /// Identifier: "entypo-youtube"
    IFEntypoYoutube                             = 0xea9a,

};

/**
 * Entypo+, carefully crafted premium pictograms by Daniel Bruce, http://www.entypo.com
 */
@interface IFEntypo : IFIcon
@end
