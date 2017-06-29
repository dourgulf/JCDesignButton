#import "IFIcon.h"

/**
 * IcoMoonFree icon types.
 */
typedef NS_ENUM(IFIconType, IFIcoMoonFreeType) {

    /// Identifier: "imf-home"
    IFIMFHome                                = 0xe900,

    /// Identifier: "imf-home2"
    IFIMFHome2                               = 0xe901,

    /// Identifier: "imf-home3"
    IFIMFHome3                               = 0xe902,

    /// Identifier: "imf-office"
    IFIMFOffice                              = 0xe903,

    /// Identifier: "imf-newspaper"
    IFIMFNewspaper                           = 0xe904,

    /// Identifier: "imf-pencil"
    IFIMFPencil                              = 0xe905,

    /// Identifier: "imf-pencil2"
    IFIMFPencil2                             = 0xe906,

    /// Identifier: "imf-quill"
    IFIMFQuill                               = 0xe907,

    /// Identifier: "imf-pen"
    IFIMFPen                                 = 0xe908,

    /// Identifier: "imf-blog"
    IFIMFBlog                                = 0xe909,

    /// Identifier: "imf-eyedropper"
    IFIMFEyedropper                          = 0xe90a,

    /// Identifier: "imf-droplet"
    IFIMFDroplet                             = 0xe90b,

    /// Identifier: "imf-paint-format"
    IFIMFPaintFormat                         = 0xe90c,

    /// Identifier: "imf-image"
    IFIMFImage                               = 0xe90d,

    /// Identifier: "imf-images"
    IFIMFImages                              = 0xe90e,

    /// Identifier: "imf-camera"
    IFIMFCamera                              = 0xe90f,

    /// Identifier: "imf-headphones"
    IFIMFHeadphones                          = 0xe910,

    /// Identifier: "imf-music"
    IFIMFMusic                               = 0xe911,

    /// Identifier: "imf-play"
    IFIMFPlay                                = 0xe912,

    /// Identifier: "imf-film"
    IFIMFFilm                                = 0xe913,

    /// Identifier: "imf-video-camera"
    IFIMFVideoCamera                         = 0xe914,

    /// Identifier: "imf-dice"
    IFIMFDice                                = 0xe915,

    /// Identifier: "imf-pacman"
    IFIMFPacman                              = 0xe916,

    /// Identifier: "imf-spades"
    IFIMFSpades                              = 0xe917,

    /// Identifier: "imf-clubs"
    IFIMFClubs                               = 0xe918,

    /// Identifier: "imf-diamonds"
    IFIMFDiamonds                            = 0xe919,

    /// Identifier: "imf-bullhorn"
    IFIMFBullhorn                            = 0xe91a,

    /// Identifier: "imf-connection"
    IFIMFConnection                          = 0xe91b,

    /// Identifier: "imf-podcast"
    IFIMFPodcast                             = 0xe91c,

    /// Identifier: "imf-feed"
    IFIMFFeed                                = 0xe91d,

    /// Identifier: "imf-mic"
    IFIMFMic                                 = 0xe91e,

    /// Identifier: "imf-book"
    IFIMFBook                                = 0xe91f,

    /// Identifier: "imf-books"
    IFIMFBooks                               = 0xe920,

    /// Identifier: "imf-library"
    IFIMFLibrary                             = 0xe921,

    /// Identifier: "imf-file-text"
    IFIMFFileText                            = 0xe922,

    /// Identifier: "imf-profile"
    IFIMFProfile                             = 0xe923,

    /// Identifier: "imf-file-empty"
    IFIMFFileEmpty                           = 0xe924,

    /// Identifier: "imf-files-empty"
    IFIMFFilesEmpty                          = 0xe925,

    /// Identifier: "imf-file-text2"
    IFIMFFileText2                           = 0xe926,

    /// Identifier: "imf-file-picture"
    IFIMFFilePicture                         = 0xe927,

    /// Identifier: "imf-file-music"
    IFIMFFileMusic                           = 0xe928,

    /// Identifier: "imf-file-play"
    IFIMFFilePlay                            = 0xe929,

    /// Identifier: "imf-file-video"
    IFIMFFileVideo                           = 0xe92a,

    /// Identifier: "imf-file-zip"
    IFIMFFileZip                             = 0xe92b,

    /// Identifier: "imf-copy"
    IFIMFCopy                                = 0xe92c,

    /// Identifier: "imf-paste"
    IFIMFPaste                               = 0xe92d,

    /// Identifier: "imf-stack"
    IFIMFStack                               = 0xe92e,

    /// Identifier: "imf-folder"
    IFIMFFolder                              = 0xe92f,

    /// Identifier: "imf-folder-open"
    IFIMFFolderOpen                          = 0xe930,

    /// Identifier: "imf-folder-plus"
    IFIMFFolderPlus                          = 0xe931,

    /// Identifier: "imf-folder-minus"
    IFIMFFolderMinus                         = 0xe932,

    /// Identifier: "imf-folder-download"
    IFIMFFolderDownload                      = 0xe933,

    /// Identifier: "imf-folder-upload"
    IFIMFFolderUpload                        = 0xe934,

    /// Identifier: "imf-price-tag"
    IFIMFPriceTag                            = 0xe935,

    /// Identifier: "imf-price-tags"
    IFIMFPriceTags                           = 0xe936,

    /// Identifier: "imf-barcode"
    IFIMFBarcode                             = 0xe937,

    /// Identifier: "imf-qrcode"
    IFIMFQrcode                              = 0xe938,

    /// Identifier: "imf-ticket"
    IFIMFTicket                              = 0xe939,

    /// Identifier: "imf-cart"
    IFIMFCart                                = 0xe93a,

    /// Identifier: "imf-coin-dollar"
    IFIMFCoinDollar                          = 0xe93b,

    /// Identifier: "imf-coin-euro"
    IFIMFCoinEuro                            = 0xe93c,

    /// Identifier: "imf-coin-pound"
    IFIMFCoinPound                           = 0xe93d,

    /// Identifier: "imf-coin-yen"
    IFIMFCoinYen                             = 0xe93e,

    /// Identifier: "imf-credit-card"
    IFIMFCreditCard                          = 0xe93f,

    /// Identifier: "imf-calculator"
    IFIMFCalculator                          = 0xe940,

    /// Identifier: "imf-lifebuoy"
    IFIMFLifebuoy                            = 0xe941,

    /// Identifier: "imf-phone"
    IFIMFPhone                               = 0xe942,

    /// Identifier: "imf-phone-hang-up"
    IFIMFPhoneHangUp                         = 0xe943,

    /// Identifier: "imf-address-book"
    IFIMFAddressBook                         = 0xe944,

    /// Identifier: "imf-envelop"
    IFIMFEnvelop                             = 0xe945,

    /// Identifier: "imf-pushpin"
    IFIMFPushpin                             = 0xe946,

    /// Identifier: "imf-location"
    IFIMFLocation                            = 0xe947,

    /// Identifier: "imf-location2"
    IFIMFLocation2                           = 0xe948,

    /// Identifier: "imf-compass"
    IFIMFCompass                             = 0xe949,

    /// Identifier: "imf-compass2"
    IFIMFCompass2                            = 0xe94a,

    /// Identifier: "imf-map"
    IFIMFMap                                 = 0xe94b,

    /// Identifier: "imf-map2"
    IFIMFMap2                                = 0xe94c,

    /// Identifier: "imf-history"
    IFIMFHistory                             = 0xe94d,

    /// Identifier: "imf-clock"
    IFIMFClock                               = 0xe94e,

    /// Identifier: "imf-clock2"
    IFIMFClock2                              = 0xe94f,

    /// Identifier: "imf-alarm"
    IFIMFAlarm                               = 0xe950,

    /// Identifier: "imf-bell"
    IFIMFBell                                = 0xe951,

    /// Identifier: "imf-stopwatch"
    IFIMFStopwatch                           = 0xe952,

    /// Identifier: "imf-calendar"
    IFIMFCalendar                            = 0xe953,

    /// Identifier: "imf-printer"
    IFIMFPrinter                             = 0xe954,

    /// Identifier: "imf-keyboard"
    IFIMFKeyboard                            = 0xe955,

    /// Identifier: "imf-display"
    IFIMFDisplay                             = 0xe956,

    /// Identifier: "imf-laptop"
    IFIMFLaptop                              = 0xe957,

    /// Identifier: "imf-mobile"
    IFIMFMobile                              = 0xe958,

    /// Identifier: "imf-mobile2"
    IFIMFMobile2                             = 0xe959,

    /// Identifier: "imf-tablet"
    IFIMFTablet                              = 0xe95a,

    /// Identifier: "imf-tv"
    IFIMFTv                                  = 0xe95b,

    /// Identifier: "imf-drawer"
    IFIMFDrawer                              = 0xe95c,

    /// Identifier: "imf-drawer2"
    IFIMFDrawer2                             = 0xe95d,

    /// Identifier: "imf-box-add"
    IFIMFBoxAdd                              = 0xe95e,

    /// Identifier: "imf-box-remove"
    IFIMFBoxRemove                           = 0xe95f,

    /// Identifier: "imf-download"
    IFIMFDownload                            = 0xe960,

    /// Identifier: "imf-upload"
    IFIMFUpload                              = 0xe961,

    /// Identifier: "imf-floppy-disk"
    IFIMFFloppyDisk                          = 0xe962,

    /// Identifier: "imf-drive"
    IFIMFDrive                               = 0xe963,

    /// Identifier: "imf-database"
    IFIMFDatabase                            = 0xe964,

    /// Identifier: "imf-undo"
    IFIMFUndo                                = 0xe965,

    /// Identifier: "imf-redo"
    IFIMFRedo                                = 0xe966,

    /// Identifier: "imf-undo2"
    IFIMFUndo2                               = 0xe967,

    /// Identifier: "imf-redo2"
    IFIMFRedo2                               = 0xe968,

    /// Identifier: "imf-forward"
    IFIMFForward                             = 0xe969,

    /// Identifier: "imf-reply"
    IFIMFReply                               = 0xe96a,

    /// Identifier: "imf-bubble"
    IFIMFBubble                              = 0xe96b,

    /// Identifier: "imf-bubbles"
    IFIMFBubbles                             = 0xe96c,

    /// Identifier: "imf-bubbles2"
    IFIMFBubbles2                            = 0xe96d,

    /// Identifier: "imf-bubble2"
    IFIMFBubble2                             = 0xe96e,

    /// Identifier: "imf-bubbles3"
    IFIMFBubbles3                            = 0xe96f,

    /// Identifier: "imf-bubbles4"
    IFIMFBubbles4                            = 0xe970,

    /// Identifier: "imf-user"
    IFIMFUser                                = 0xe971,

    /// Identifier: "imf-users"
    IFIMFUsers                               = 0xe972,

    /// Identifier: "imf-user-plus"
    IFIMFUserPlus                            = 0xe973,

    /// Identifier: "imf-user-minus"
    IFIMFUserMinus                           = 0xe974,

    /// Identifier: "imf-user-check"
    IFIMFUserCheck                           = 0xe975,

    /// Identifier: "imf-user-tie"
    IFIMFUserTie                             = 0xe976,

    /// Identifier: "imf-quotes-left"
    IFIMFQuotesLeft                          = 0xe977,

    /// Identifier: "imf-quotes-right"
    IFIMFQuotesRight                         = 0xe978,

    /// Identifier: "imf-hour-glass"
    IFIMFHourGlass                           = 0xe979,

    /// Identifier: "imf-spinner"
    IFIMFSpinner                             = 0xe97a,

    /// Identifier: "imf-spinner2"
    IFIMFSpinner2                            = 0xe97b,

    /// Identifier: "imf-spinner3"
    IFIMFSpinner3                            = 0xe97c,

    /// Identifier: "imf-spinner4"
    IFIMFSpinner4                            = 0xe97d,

    /// Identifier: "imf-spinner5"
    IFIMFSpinner5                            = 0xe97e,

    /// Identifier: "imf-spinner6"
    IFIMFSpinner6                            = 0xe97f,

    /// Identifier: "imf-spinner7"
    IFIMFSpinner7                            = 0xe980,

    /// Identifier: "imf-spinner8"
    IFIMFSpinner8                            = 0xe981,

    /// Identifier: "imf-spinner9"
    IFIMFSpinner9                            = 0xe982,

    /// Identifier: "imf-spinner10"
    IFIMFSpinner10                           = 0xe983,

    /// Identifier: "imf-spinner11"
    IFIMFSpinner11                           = 0xe984,

    /// Identifier: "imf-binoculars"
    IFIMFBinoculars                          = 0xe985,

    /// Identifier: "imf-search"
    IFIMFSearch                              = 0xe986,

    /// Identifier: "imf-zoom-in"
    IFIMFZoomIn                              = 0xe987,

    /// Identifier: "imf-zoom-out"
    IFIMFZoomOut                             = 0xe988,

    /// Identifier: "imf-enlarge"
    IFIMFEnlarge                             = 0xe989,

    /// Identifier: "imf-shrink"
    IFIMFShrink                              = 0xe98a,

    /// Identifier: "imf-enlarge2"
    IFIMFEnlarge2                            = 0xe98b,

    /// Identifier: "imf-shrink2"
    IFIMFShrink2                             = 0xe98c,

    /// Identifier: "imf-key"
    IFIMFKey                                 = 0xe98d,

    /// Identifier: "imf-key2"
    IFIMFKey2                                = 0xe98e,

    /// Identifier: "imf-lock"
    IFIMFLock                                = 0xe98f,

    /// Identifier: "imf-unlocked"
    IFIMFUnlocked                            = 0xe990,

    /// Identifier: "imf-wrench"
    IFIMFWrench                              = 0xe991,

    /// Identifier: "imf-equalizer"
    IFIMFEqualizer                           = 0xe992,

    /// Identifier: "imf-equalizer2"
    IFIMFEqualizer2                          = 0xe993,

    /// Identifier: "imf-cog"
    IFIMFCog                                 = 0xe994,

    /// Identifier: "imf-cogs"
    IFIMFCogs                                = 0xe995,

    /// Identifier: "imf-hammer"
    IFIMFHammer                              = 0xe996,

    /// Identifier: "imf-magic-wand"
    IFIMFMagicWand                           = 0xe997,

    /// Identifier: "imf-aid-kit"
    IFIMFAidKit                              = 0xe998,

    /// Identifier: "imf-bug"
    IFIMFBug                                 = 0xe999,

    /// Identifier: "imf-pie-chart"
    IFIMFPieChart                            = 0xe99a,

    /// Identifier: "imf-stats-dots"
    IFIMFStatsDots                           = 0xe99b,

    /// Identifier: "imf-stats-bars"
    IFIMFStatsBars                           = 0xe99c,

    /// Identifier: "imf-stats-bars2"
    IFIMFStatsBars2                          = 0xe99d,

    /// Identifier: "imf-trophy"
    IFIMFTrophy                              = 0xe99e,

    /// Identifier: "imf-gift"
    IFIMFGift                                = 0xe99f,

    /// Identifier: "imf-glass"
    IFIMFGlass                               = 0xe9a0,

    /// Identifier: "imf-glass2"
    IFIMFGlass2                              = 0xe9a1,

    /// Identifier: "imf-mug"
    IFIMFMug                                 = 0xe9a2,

    /// Identifier: "imf-spoon-knife"
    IFIMFSpoonKnife                          = 0xe9a3,

    /// Identifier: "imf-leaf"
    IFIMFLeaf                                = 0xe9a4,

    /// Identifier: "imf-rocket"
    IFIMFRocket                              = 0xe9a5,

    /// Identifier: "imf-meter"
    IFIMFMeter                               = 0xe9a6,

    /// Identifier: "imf-meter2"
    IFIMFMeter2                              = 0xe9a7,

    /// Identifier: "imf-hammer2"
    IFIMFHammer2                             = 0xe9a8,

    /// Identifier: "imf-fire"
    IFIMFFire                                = 0xe9a9,

    /// Identifier: "imf-lab"
    IFIMFLab                                 = 0xe9aa,

    /// Identifier: "imf-magnet"
    IFIMFMagnet                              = 0xe9ab,

    /// Identifier: "imf-bin"
    IFIMFBin                                 = 0xe9ac,

    /// Identifier: "imf-bin2"
    IFIMFBin2                                = 0xe9ad,

    /// Identifier: "imf-briefcase"
    IFIMFBriefcase                           = 0xe9ae,

    /// Identifier: "imf-airplane"
    IFIMFAirplane                            = 0xe9af,

    /// Identifier: "imf-truck"
    IFIMFTruck                               = 0xe9b0,

    /// Identifier: "imf-road"
    IFIMFRoad                                = 0xe9b1,

    /// Identifier: "imf-accessibility"
    IFIMFAccessibility                       = 0xe9b2,

    /// Identifier: "imf-target"
    IFIMFTarget                              = 0xe9b3,

    /// Identifier: "imf-shield"
    IFIMFShield                              = 0xe9b4,

    /// Identifier: "imf-power"
    IFIMFPower                               = 0xe9b5,

    /// Identifier: "imf-switch"
    IFIMFSwitch                              = 0xe9b6,

    /// Identifier: "imf-power-cord"
    IFIMFPowerCord                           = 0xe9b7,

    /// Identifier: "imf-clipboard"
    IFIMFClipboard                           = 0xe9b8,

    /// Identifier: "imf-list-numbered"
    IFIMFListNumbered                        = 0xe9b9,

    /// Identifier: "imf-list"
    IFIMFList                                = 0xe9ba,

    /// Identifier: "imf-list2"
    IFIMFList2                               = 0xe9bb,

    /// Identifier: "imf-tree"
    IFIMFTree                                = 0xe9bc,

    /// Identifier: "imf-menu"
    IFIMFMenu                                = 0xe9bd,

    /// Identifier: "imf-menu2"
    IFIMFMenu2                               = 0xe9be,

    /// Identifier: "imf-menu3"
    IFIMFMenu3                               = 0xe9bf,

    /// Identifier: "imf-menu4"
    IFIMFMenu4                               = 0xe9c0,

    /// Identifier: "imf-cloud"
    IFIMFCloud                               = 0xe9c1,

    /// Identifier: "imf-cloud-download"
    IFIMFCloudDownload                       = 0xe9c2,

    /// Identifier: "imf-cloud-upload"
    IFIMFCloudUpload                         = 0xe9c3,

    /// Identifier: "imf-cloud-check"
    IFIMFCloudCheck                          = 0xe9c4,

    /// Identifier: "imf-download2"
    IFIMFDownload2                           = 0xe9c5,

    /// Identifier: "imf-upload2"
    IFIMFUpload2                             = 0xe9c6,

    /// Identifier: "imf-download3"
    IFIMFDownload3                           = 0xe9c7,

    /// Identifier: "imf-upload3"
    IFIMFUpload3                             = 0xe9c8,

    /// Identifier: "imf-sphere"
    IFIMFSphere                              = 0xe9c9,

    /// Identifier: "imf-earth"
    IFIMFEarth                               = 0xe9ca,

    /// Identifier: "imf-link"
    IFIMFLink                                = 0xe9cb,

    /// Identifier: "imf-flag"
    IFIMFFlag                                = 0xe9cc,

    /// Identifier: "imf-attachment"
    IFIMFAttachment                          = 0xe9cd,

    /// Identifier: "imf-eye"
    IFIMFEye                                 = 0xe9ce,

    /// Identifier: "imf-eye-plus"
    IFIMFEyePlus                             = 0xe9cf,

    /// Identifier: "imf-eye-minus"
    IFIMFEyeMinus                            = 0xe9d0,

    /// Identifier: "imf-eye-blocked"
    IFIMFEyeBlocked                          = 0xe9d1,

    /// Identifier: "imf-bookmark"
    IFIMFBookmark                            = 0xe9d2,

    /// Identifier: "imf-bookmarks"
    IFIMFBookmarks                           = 0xe9d3,

    /// Identifier: "imf-sun"
    IFIMFSun                                 = 0xe9d4,

    /// Identifier: "imf-contrast"
    IFIMFContrast                            = 0xe9d5,

    /// Identifier: "imf-brightness-contrast"
    IFIMFBrightnessContrast                  = 0xe9d6,

    /// Identifier: "imf-star-empty"
    IFIMFStarEmpty                           = 0xe9d7,

    /// Identifier: "imf-star-half"
    IFIMFStarHalf                            = 0xe9d8,

    /// Identifier: "imf-star-full"
    IFIMFStarFull                            = 0xe9d9,

    /// Identifier: "imf-heart"
    IFIMFHeart                               = 0xe9da,

    /// Identifier: "imf-heart-broken"
    IFIMFHeartBroken                         = 0xe9db,

    /// Identifier: "imf-man"
    IFIMFMan                                 = 0xe9dc,

    /// Identifier: "imf-woman"
    IFIMFWoman                               = 0xe9dd,

    /// Identifier: "imf-man-woman"
    IFIMFManWoman                            = 0xe9de,

    /// Identifier: "imf-happy"
    IFIMFHappy                               = 0xe9df,

    /// Identifier: "imf-happy2"
    IFIMFHappy2                              = 0xe9e0,

    /// Identifier: "imf-smile"
    IFIMFSmile                               = 0xe9e1,

    /// Identifier: "imf-smile2"
    IFIMFSmile2                              = 0xe9e2,

    /// Identifier: "imf-tongue"
    IFIMFTongue                              = 0xe9e3,

    /// Identifier: "imf-tongue2"
    IFIMFTongue2                             = 0xe9e4,

    /// Identifier: "imf-sad"
    IFIMFSad                                 = 0xe9e5,

    /// Identifier: "imf-sad2"
    IFIMFSad2                                = 0xe9e6,

    /// Identifier: "imf-wink"
    IFIMFWink                                = 0xe9e7,

    /// Identifier: "imf-wink2"
    IFIMFWink2                               = 0xe9e8,

    /// Identifier: "imf-grin"
    IFIMFGrin                                = 0xe9e9,

    /// Identifier: "imf-grin2"
    IFIMFGrin2                               = 0xe9ea,

    /// Identifier: "imf-cool"
    IFIMFCool                                = 0xe9eb,

    /// Identifier: "imf-cool2"
    IFIMFCool2                               = 0xe9ec,

    /// Identifier: "imf-angry"
    IFIMFAngry                               = 0xe9ed,

    /// Identifier: "imf-angry2"
    IFIMFAngry2                              = 0xe9ee,

    /// Identifier: "imf-evil"
    IFIMFEvil                                = 0xe9ef,

    /// Identifier: "imf-evil2"
    IFIMFEvil2                               = 0xe9f0,

    /// Identifier: "imf-shocked"
    IFIMFShocked                             = 0xe9f1,

    /// Identifier: "imf-shocked2"
    IFIMFShocked2                            = 0xe9f2,

    /// Identifier: "imf-baffled"
    IFIMFBaffled                             = 0xe9f3,

    /// Identifier: "imf-baffled2"
    IFIMFBaffled2                            = 0xe9f4,

    /// Identifier: "imf-confused"
    IFIMFConfused                            = 0xe9f5,

    /// Identifier: "imf-confused2"
    IFIMFConfused2                           = 0xe9f6,

    /// Identifier: "imf-neutral"
    IFIMFNeutral                             = 0xe9f7,

    /// Identifier: "imf-neutral2"
    IFIMFNeutral2                            = 0xe9f8,

    /// Identifier: "imf-hipster"
    IFIMFHipster                             = 0xe9f9,

    /// Identifier: "imf-hipster2"
    IFIMFHipster2                            = 0xe9fa,

    /// Identifier: "imf-wondering"
    IFIMFWondering                           = 0xe9fb,

    /// Identifier: "imf-wondering2"
    IFIMFWondering2                          = 0xe9fc,

    /// Identifier: "imf-sleepy"
    IFIMFSleepy                              = 0xe9fd,

    /// Identifier: "imf-sleepy2"
    IFIMFSleepy2                             = 0xe9fe,

    /// Identifier: "imf-frustrated"
    IFIMFFrustrated                          = 0xe9ff,

    /// Identifier: "imf-frustrated2"
    IFIMFFrustrated2                         = 0xea00,

    /// Identifier: "imf-crying"
    IFIMFCrying                              = 0xea01,

    /// Identifier: "imf-crying2"
    IFIMFCrying2                             = 0xea02,

    /// Identifier: "imf-point-up"
    IFIMFPointUp                             = 0xea03,

    /// Identifier: "imf-point-right"
    IFIMFPointRight                          = 0xea04,

    /// Identifier: "imf-point-down"
    IFIMFPointDown                           = 0xea05,

    /// Identifier: "imf-point-left"
    IFIMFPointLeft                           = 0xea06,

    /// Identifier: "imf-warning"
    IFIMFWarning                             = 0xea07,

    /// Identifier: "imf-notification"
    IFIMFNotification                        = 0xea08,

    /// Identifier: "imf-question"
    IFIMFQuestion                            = 0xea09,

    /// Identifier: "imf-plus"
    IFIMFPlus                                = 0xea0a,

    /// Identifier: "imf-minus"
    IFIMFMinus                               = 0xea0b,

    /// Identifier: "imf-info"
    IFIMFInfo                                = 0xea0c,

    /// Identifier: "imf-cancel-circle"
    IFIMFCancelCircle                        = 0xea0d,

    /// Identifier: "imf-blocked"
    IFIMFBlocked                             = 0xea0e,

    /// Identifier: "imf-cross"
    IFIMFCross                               = 0xea0f,

    /// Identifier: "imf-checkmark"
    IFIMFCheckmark                           = 0xea10,

    /// Identifier: "imf-checkmark2"
    IFIMFCheckmark2                          = 0xea11,

    /// Identifier: "imf-spell-check"
    IFIMFSpellCheck                          = 0xea12,

    /// Identifier: "imf-enter"
    IFIMFEnter                               = 0xea13,

    /// Identifier: "imf-exit"
    IFIMFExit                                = 0xea14,

    /// Identifier: "imf-play2"
    IFIMFPlay2                               = 0xea15,

    /// Identifier: "imf-pause"
    IFIMFPause                               = 0xea16,

    /// Identifier: "imf-stop"
    IFIMFStop                                = 0xea17,

    /// Identifier: "imf-previous"
    IFIMFPrevious                            = 0xea18,

    /// Identifier: "imf-next"
    IFIMFNext                                = 0xea19,

    /// Identifier: "imf-backward"
    IFIMFBackward                            = 0xea1a,

    /// Identifier: "imf-forward2"
    IFIMFForward2                            = 0xea1b,

    /// Identifier: "imf-play3"
    IFIMFPlay3                               = 0xea1c,

    /// Identifier: "imf-pause2"
    IFIMFPause2                              = 0xea1d,

    /// Identifier: "imf-stop2"
    IFIMFStop2                               = 0xea1e,

    /// Identifier: "imf-backward2"
    IFIMFBackward2                           = 0xea1f,

    /// Identifier: "imf-forward3"
    IFIMFForward3                            = 0xea20,

    /// Identifier: "imf-first"
    IFIMFFirst                               = 0xea21,

    /// Identifier: "imf-last"
    IFIMFLast                                = 0xea22,

    /// Identifier: "imf-previous2"
    IFIMFPrevious2                           = 0xea23,

    /// Identifier: "imf-next2"
    IFIMFNext2                               = 0xea24,

    /// Identifier: "imf-eject"
    IFIMFEject                               = 0xea25,

    /// Identifier: "imf-volume-high"
    IFIMFVolumeHigh                          = 0xea26,

    /// Identifier: "imf-volume-medium"
    IFIMFVolumeMedium                        = 0xea27,

    /// Identifier: "imf-volume-low"
    IFIMFVolumeLow                           = 0xea28,

    /// Identifier: "imf-volume-mute"
    IFIMFVolumeMute                          = 0xea29,

    /// Identifier: "imf-volume-mute2"
    IFIMFVolumeMute2                         = 0xea2a,

    /// Identifier: "imf-volume-increase"
    IFIMFVolumeIncrease                      = 0xea2b,

    /// Identifier: "imf-volume-decrease"
    IFIMFVolumeDecrease                      = 0xea2c,

    /// Identifier: "imf-loop"
    IFIMFLoop                                = 0xea2d,

    /// Identifier: "imf-loop2"
    IFIMFLoop2                               = 0xea2e,

    /// Identifier: "imf-infinite"
    IFIMFInfinite                            = 0xea2f,

    /// Identifier: "imf-shuffle"
    IFIMFShuffle                             = 0xea30,

    /// Identifier: "imf-arrow-up-left"
    IFIMFArrowUpLeft                         = 0xea31,

    /// Identifier: "imf-arrow-up"
    IFIMFArrowUp                             = 0xea32,

    /// Identifier: "imf-arrow-up-right"
    IFIMFArrowUpRight                        = 0xea33,

    /// Identifier: "imf-arrow-right"
    IFIMFArrowRight                          = 0xea34,

    /// Identifier: "imf-arrow-down-right"
    IFIMFArrowDownRight                      = 0xea35,

    /// Identifier: "imf-arrow-down"
    IFIMFArrowDown                           = 0xea36,

    /// Identifier: "imf-arrow-down-left"
    IFIMFArrowDownLeft                       = 0xea37,

    /// Identifier: "imf-arrow-left"
    IFIMFArrowLeft                           = 0xea38,

    /// Identifier: "imf-arrow-up-left2"
    IFIMFArrowUpLeft2                        = 0xea39,

    /// Identifier: "imf-arrow-up2"
    IFIMFArrowUp2                            = 0xea3a,

    /// Identifier: "imf-arrow-up-right2"
    IFIMFArrowUpRight2                       = 0xea3b,

    /// Identifier: "imf-arrow-right2"
    IFIMFArrowRight2                         = 0xea3c,

    /// Identifier: "imf-arrow-down-right2"
    IFIMFArrowDownRight2                     = 0xea3d,

    /// Identifier: "imf-arrow-down2"
    IFIMFArrowDown2                          = 0xea3e,

    /// Identifier: "imf-arrow-down-left2"
    IFIMFArrowDownLeft2                      = 0xea3f,

    /// Identifier: "imf-arrow-left2"
    IFIMFArrowLeft2                          = 0xea40,

    /// Identifier: "imf-circle-up"
    IFIMFCircleUp                            = 0xea41,

    /// Identifier: "imf-circle-right"
    IFIMFCircleRight                         = 0xea42,

    /// Identifier: "imf-circle-down"
    IFIMFCircleDown                          = 0xea43,

    /// Identifier: "imf-circle-left"
    IFIMFCircleLeft                          = 0xea44,

    /// Identifier: "imf-tab"
    IFIMFTab                                 = 0xea45,

    /// Identifier: "imf-move-up"
    IFIMFMoveUp                              = 0xea46,

    /// Identifier: "imf-move-down"
    IFIMFMoveDown                            = 0xea47,

    /// Identifier: "imf-sort-alpha-asc"
    IFIMFSortAlphaAsc                        = 0xea48,

    /// Identifier: "imf-sort-alpha-desc"
    IFIMFSortAlphaDesc                       = 0xea49,

    /// Identifier: "imf-sort-numeric-asc"
    IFIMFSortNumericAsc                      = 0xea4a,

    /// Identifier: "imf-sort-numberic-desc"
    IFIMFSortNumbericDesc                    = 0xea4b,

    /// Identifier: "imf-sort-amount-asc"
    IFIMFSortAmountAsc                       = 0xea4c,

    /// Identifier: "imf-sort-amount-desc"
    IFIMFSortAmountDesc                      = 0xea4d,

    /// Identifier: "imf-command"
    IFIMFCommand                             = 0xea4e,

    /// Identifier: "imf-shift"
    IFIMFShift                               = 0xea4f,

    /// Identifier: "imf-ctrl"
    IFIMFCtrl                                = 0xea50,

    /// Identifier: "imf-opt"
    IFIMFOpt                                 = 0xea51,

    /// Identifier: "imf-checkbox-checked"
    IFIMFCheckboxChecked                     = 0xea52,

    /// Identifier: "imf-checkbox-unchecked"
    IFIMFCheckboxUnchecked                   = 0xea53,

    /// Identifier: "imf-radio-checked"
    IFIMFRadioChecked                        = 0xea54,

    /// Identifier: "imf-radio-checked2"
    IFIMFRadioChecked2                       = 0xea55,

    /// Identifier: "imf-radio-unchecked"
    IFIMFRadioUnchecked                      = 0xea56,

    /// Identifier: "imf-crop"
    IFIMFCrop                                = 0xea57,

    /// Identifier: "imf-make-group"
    IFIMFMakeGroup                           = 0xea58,

    /// Identifier: "imf-ungroup"
    IFIMFUngroup                             = 0xea59,

    /// Identifier: "imf-scissors"
    IFIMFScissors                            = 0xea5a,

    /// Identifier: "imf-filter"
    IFIMFFilter                              = 0xea5b,

    /// Identifier: "imf-font"
    IFIMFFont                                = 0xea5c,

    /// Identifier: "imf-ligature"
    IFIMFLigature                            = 0xea5d,

    /// Identifier: "imf-ligature2"
    IFIMFLigature2                           = 0xea5e,

    /// Identifier: "imf-text-height"
    IFIMFTextHeight                          = 0xea5f,

    /// Identifier: "imf-text-width"
    IFIMFTextWidth                           = 0xea60,

    /// Identifier: "imf-font-size"
    IFIMFFontSize                            = 0xea61,

    /// Identifier: "imf-bold"
    IFIMFBold                                = 0xea62,

    /// Identifier: "imf-underline"
    IFIMFUnderline                           = 0xea63,

    /// Identifier: "imf-italic"
    IFIMFItalic                              = 0xea64,

    /// Identifier: "imf-strikethrough"
    IFIMFStrikethrough                       = 0xea65,

    /// Identifier: "imf-omega"
    IFIMFOmega                               = 0xea66,

    /// Identifier: "imf-sigma"
    IFIMFSigma                               = 0xea67,

    /// Identifier: "imf-page-break"
    IFIMFPageBreak                           = 0xea68,

    /// Identifier: "imf-superscript"
    IFIMFSuperscript                         = 0xea69,

    /// Identifier: "imf-subscript"
    IFIMFSubscript                           = 0xea6a,

    /// Identifier: "imf-superscript2"
    IFIMFSuperscript2                        = 0xea6b,

    /// Identifier: "imf-subscript2"
    IFIMFSubscript2                          = 0xea6c,

    /// Identifier: "imf-text-color"
    IFIMFTextColor                           = 0xea6d,

    /// Identifier: "imf-pagebreak"
    IFIMFPagebreak                           = 0xea6e,

    /// Identifier: "imf-clear-formatting"
    IFIMFClearFormatting                     = 0xea6f,

    /// Identifier: "imf-table"
    IFIMFTable                               = 0xea70,

    /// Identifier: "imf-table2"
    IFIMFTable2                              = 0xea71,

    /// Identifier: "imf-insert-template"
    IFIMFInsertTemplate                      = 0xea72,

    /// Identifier: "imf-pilcrow"
    IFIMFPilcrow                             = 0xea73,

    /// Identifier: "imf-ltr"
    IFIMFLtr                                 = 0xea74,

    /// Identifier: "imf-rtl"
    IFIMFRtl                                 = 0xea75,

    /// Identifier: "imf-section"
    IFIMFSection                             = 0xea76,

    /// Identifier: "imf-paragraph-left"
    IFIMFParagraphLeft                       = 0xea77,

    /// Identifier: "imf-paragraph-center"
    IFIMFParagraphCenter                     = 0xea78,

    /// Identifier: "imf-paragraph-right"
    IFIMFParagraphRight                      = 0xea79,

    /// Identifier: "imf-paragraph-justify"
    IFIMFParagraphJustify                    = 0xea7a,

    /// Identifier: "imf-indent-increase"
    IFIMFIndentIncrease                      = 0xea7b,

    /// Identifier: "imf-indent-decrease"
    IFIMFIndentDecrease                      = 0xea7c,

    /// Identifier: "imf-share"
    IFIMFShare                               = 0xea7d,

    /// Identifier: "imf-new-tab"
    IFIMFNewTab                              = 0xea7e,

    /// Identifier: "imf-embed"
    IFIMFEmbed                               = 0xea7f,

    /// Identifier: "imf-embed2"
    IFIMFEmbed2                              = 0xea80,

    /// Identifier: "imf-terminal"
    IFIMFTerminal                            = 0xea81,

    /// Identifier: "imf-share2"
    IFIMFShare2                              = 0xea82,

    /// Identifier: "imf-mail"
    IFIMFMail                                = 0xea83,

    /// Identifier: "imf-mail2"
    IFIMFMail2                               = 0xea84,

    /// Identifier: "imf-mail3"
    IFIMFMail3                               = 0xea85,

    /// Identifier: "imf-mail4"
    IFIMFMail4                               = 0xea86,

    /// Identifier: "imf-amazon"
    IFIMFAmazon                              = 0xea87,

    /// Identifier: "imf-google"
    IFIMFGoogle                              = 0xea88,

    /// Identifier: "imf-google2"
    IFIMFGoogle2                             = 0xea89,

    /// Identifier: "imf-google3"
    IFIMFGoogle3                             = 0xea8a,

    /// Identifier: "imf-google-plus"
    IFIMFGooglePlus                          = 0xea8b,

    /// Identifier: "imf-google-plus2"
    IFIMFGooglePlus2                         = 0xea8c,

    /// Identifier: "imf-google-plus3"
    IFIMFGooglePlus3                         = 0xea8d,

    /// Identifier: "imf-hangouts"
    IFIMFHangouts                            = 0xea8e,

    /// Identifier: "imf-google-drive"
    IFIMFGoogleDrive                         = 0xea8f,

    /// Identifier: "imf-facebook"
    IFIMFFacebook                            = 0xea90,

    /// Identifier: "imf-facebook2"
    IFIMFFacebook2                           = 0xea91,

    /// Identifier: "imf-instagram"
    IFIMFInstagram                           = 0xea92,

    /// Identifier: "imf-whatsapp"
    IFIMFWhatsapp                            = 0xea93,

    /// Identifier: "imf-spotify"
    IFIMFSpotify                             = 0xea94,

    /// Identifier: "imf-telegram"
    IFIMFTelegram                            = 0xea95,

    /// Identifier: "imf-twitter"
    IFIMFTwitter                             = 0xea96,

    /// Identifier: "imf-vine"
    IFIMFVine                                = 0xea97,

    /// Identifier: "imf-vk"
    IFIMFVk                                  = 0xea98,

    /// Identifier: "imf-renren"
    IFIMFRenren                              = 0xea99,

    /// Identifier: "imf-sina-weibo"
    IFIMFSinaWeibo                           = 0xea9a,

    /// Identifier: "imf-rss"
    IFIMFRss                                 = 0xea9b,

    /// Identifier: "imf-rss2"
    IFIMFRss2                                = 0xea9c,

    /// Identifier: "imf-youtube"
    IFIMFYoutube                             = 0xea9d,

    /// Identifier: "imf-youtube2"
    IFIMFYoutube2                            = 0xea9e,

    /// Identifier: "imf-twitch"
    IFIMFTwitch                              = 0xea9f,

    /// Identifier: "imf-vimeo"
    IFIMFVimeo                               = 0xeaa0,

    /// Identifier: "imf-vimeo2"
    IFIMFVimeo2                              = 0xeaa1,

    /// Identifier: "imf-lanyrd"
    IFIMFLanyrd                              = 0xeaa2,

    /// Identifier: "imf-flickr"
    IFIMFFlickr                              = 0xeaa3,

    /// Identifier: "imf-flickr2"
    IFIMFFlickr2                             = 0xeaa4,

    /// Identifier: "imf-flickr3"
    IFIMFFlickr3                             = 0xeaa5,

    /// Identifier: "imf-flickr4"
    IFIMFFlickr4                             = 0xeaa6,

    /// Identifier: "imf-dribbble"
    IFIMFDribbble                            = 0xeaa7,

    /// Identifier: "imf-behance"
    IFIMFBehance                             = 0xeaa8,

    /// Identifier: "imf-behance2"
    IFIMFBehance2                            = 0xeaa9,

    /// Identifier: "imf-deviantart"
    IFIMFDeviantart                          = 0xeaaa,

    /// Identifier: "imf-500px"
    IFIMF500px                               = 0xeaab,

    /// Identifier: "imf-steam"
    IFIMFSteam                               = 0xeaac,

    /// Identifier: "imf-steam2"
    IFIMFSteam2                              = 0xeaad,

    /// Identifier: "imf-dropbox"
    IFIMFDropbox                             = 0xeaae,

    /// Identifier: "imf-onedrive"
    IFIMFOnedrive                            = 0xeaaf,

    /// Identifier: "imf-github"
    IFIMFGithub                              = 0xeab0,

    /// Identifier: "imf-npm"
    IFIMFNpm                                 = 0xeab1,

    /// Identifier: "imf-basecamp"
    IFIMFBasecamp                            = 0xeab2,

    /// Identifier: "imf-trello"
    IFIMFTrello                              = 0xeab3,

    /// Identifier: "imf-wordpress"
    IFIMFWordpress                           = 0xeab4,

    /// Identifier: "imf-joomla"
    IFIMFJoomla                              = 0xeab5,

    /// Identifier: "imf-ello"
    IFIMFEllo                                = 0xeab6,

    /// Identifier: "imf-blogger"
    IFIMFBlogger                             = 0xeab7,

    /// Identifier: "imf-blogger2"
    IFIMFBlogger2                            = 0xeab8,

    /// Identifier: "imf-tumblr"
    IFIMFTumblr                              = 0xeab9,

    /// Identifier: "imf-tumblr2"
    IFIMFTumblr2                             = 0xeaba,

    /// Identifier: "imf-yahoo"
    IFIMFYahoo                               = 0xeabb,

    /// Identifier: "imf-yahoo2"
    IFIMFYahoo2                              = 0xeabc,

    /// Identifier: "imf-tux"
    IFIMFTux                                 = 0xeabd,

    /// Identifier: "imf-appleinc"
    IFIMFAppleinc                            = 0xeabe,

    /// Identifier: "imf-finder"
    IFIMFFinder                              = 0xeabf,

    /// Identifier: "imf-android"
    IFIMFAndroid                             = 0xeac0,

    /// Identifier: "imf-windows"
    IFIMFWindows                             = 0xeac1,

    /// Identifier: "imf-windows8"
    IFIMFWindows8                            = 0xeac2,

    /// Identifier: "imf-soundcloud"
    IFIMFSoundcloud                          = 0xeac3,

    /// Identifier: "imf-soundcloud2"
    IFIMFSoundcloud2                         = 0xeac4,

    /// Identifier: "imf-skype"
    IFIMFSkype                               = 0xeac5,

    /// Identifier: "imf-reddit"
    IFIMFReddit                              = 0xeac6,

    /// Identifier: "imf-hackernews"
    IFIMFHackernews                          = 0xeac7,

    /// Identifier: "imf-wikipedia"
    IFIMFWikipedia                           = 0xeac8,

    /// Identifier: "imf-linkedin"
    IFIMFLinkedin                            = 0xeac9,

    /// Identifier: "imf-linkedin2"
    IFIMFLinkedin2                           = 0xeaca,

    /// Identifier: "imf-lastfm"
    IFIMFLastfm                              = 0xeacb,

    /// Identifier: "imf-lastfm2"
    IFIMFLastfm2                             = 0xeacc,

    /// Identifier: "imf-delicious"
    IFIMFDelicious                           = 0xeacd,

    /// Identifier: "imf-stumbleupon"
    IFIMFStumbleupon                         = 0xeace,

    /// Identifier: "imf-stumbleupon2"
    IFIMFStumbleupon2                        = 0xeacf,

    /// Identifier: "imf-stackoverflow"
    IFIMFStackoverflow                       = 0xead0,

    /// Identifier: "imf-pinterest"
    IFIMFPinterest                           = 0xead1,

    /// Identifier: "imf-pinterest2"
    IFIMFPinterest2                          = 0xead2,

    /// Identifier: "imf-xing"
    IFIMFXing                                = 0xead3,

    /// Identifier: "imf-xing2"
    IFIMFXing2                               = 0xead4,

    /// Identifier: "imf-flattr"
    IFIMFFlattr                              = 0xead5,

    /// Identifier: "imf-foursquare"
    IFIMFFoursquare                          = 0xead6,

    /// Identifier: "imf-yelp"
    IFIMFYelp                                = 0xead7,

    /// Identifier: "imf-paypal"
    IFIMFPaypal                              = 0xead8,

    /// Identifier: "imf-chrome"
    IFIMFChrome                              = 0xead9,

    /// Identifier: "imf-firefox"
    IFIMFFirefox                             = 0xeada,

    /// Identifier: "imf-IE"
    IFIMFIE                                  = 0xeadb,

    /// Identifier: "imf-edge"
    IFIMFEdge                                = 0xeadc,

    /// Identifier: "imf-safari"
    IFIMFSafari                              = 0xeadd,

    /// Identifier: "imf-opera"
    IFIMFOpera                               = 0xeade,

    /// Identifier: "imf-file-pdf"
    IFIMFFilePdf                             = 0xeadf,

    /// Identifier: "imf-file-openoffice"
    IFIMFFileOpenoffice                      = 0xeae0,

    /// Identifier: "imf-file-word"
    IFIMFFileWord                            = 0xeae1,

    /// Identifier: "imf-file-excel"
    IFIMFFileExcel                           = 0xeae2,

    /// Identifier: "imf-libreoffice"
    IFIMFLibreoffice                         = 0xeae3,

    /// Identifier: "imf-html-five"
    IFIMFHtmlFive                            = 0xeae4,

    /// Identifier: "imf-html-five2"
    IFIMFHtmlFive2                           = 0xeae5,

    /// Identifier: "imf-css3"
    IFIMFCss3                                = 0xeae6,

    /// Identifier: "imf-git"
    IFIMFGit                                 = 0xeae7,

    /// Identifier: "imf-codepen"
    IFIMFCodepen                             = 0xeae8,

    /// Identifier: "imf-svg"
    IFIMFSvg                                 = 0xeae9,

    /// Identifier: "imf-IcoMoon"
    IFIMFIcoMoon                             = 0xeaea,

};

/**
 * IcoMoon Free Pack, v1.0.0 https://icomoon.io/#preview-free
 */
@interface IFIcoMoonFree : IFIcon
@end
