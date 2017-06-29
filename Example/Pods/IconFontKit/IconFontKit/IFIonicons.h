#import "IFIcon.h"

/**
 * Ionicons icon types.
 */
typedef NS_ENUM(IFIconType, IFIoniconsType) {

    /// Identifier: "ion-alert"
    IFIIAlert                               = 0xf101,

    /// Identifier: "ion-alert-circled"
    IFIIAlertCircled                        = 0xf100,

    /// Identifier: "ion-android-add"
    IFIIAndroidAdd                          = 0xf2c7,

    /// Identifier: "ion-android-add-circle"
    IFIIAndroidAddCircle                    = 0xf359,

    /// Identifier: "ion-android-alarm-clock"
    IFIIAndroidAlarmClock                   = 0xf35a,

    /// Identifier: "ion-android-alert"
    IFIIAndroidAlert                        = 0xf35b,

    /// Identifier: "ion-android-apps"
    IFIIAndroidApps                         = 0xf35c,

    /// Identifier: "ion-android-archive"
    IFIIAndroidArchive                      = 0xf2c9,

    /// Identifier: "ion-android-arrow-back"
    IFIIAndroidArrowBack                    = 0xf2ca,

    /// Identifier: "ion-android-arrow-down"
    IFIIAndroidArrowDown                    = 0xf35d,

    /// Identifier: "ion-android-arrow-dropdown"
    IFIIAndroidArrowDropdown                = 0xf35f,

    /// Identifier: "ion-android-arrow-dropdown-circle"
    IFIIAndroidArrowDropdownCircle          = 0xf35e,

    /// Identifier: "ion-android-arrow-dropleft"
    IFIIAndroidArrowDropleft                = 0xf361,

    /// Identifier: "ion-android-arrow-dropleft-circle"
    IFIIAndroidArrowDropleftCircle          = 0xf360,

    /// Identifier: "ion-android-arrow-dropright"
    IFIIAndroidArrowDropright               = 0xf363,

    /// Identifier: "ion-android-arrow-dropright-circle"
    IFIIAndroidArrowDroprightCircle         = 0xf362,

    /// Identifier: "ion-android-arrow-dropup"
    IFIIAndroidArrowDropup                  = 0xf365,

    /// Identifier: "ion-android-arrow-dropup-circle"
    IFIIAndroidArrowDropupCircle            = 0xf364,

    /// Identifier: "ion-android-arrow-forward"
    IFIIAndroidArrowForward                 = 0xf30f,

    /// Identifier: "ion-android-arrow-up"
    IFIIAndroidArrowUp                      = 0xf366,

    /// Identifier: "ion-android-attach"
    IFIIAndroidAttach                       = 0xf367,

    /// Identifier: "ion-android-bar"
    IFIIAndroidBar                          = 0xf368,

    /// Identifier: "ion-android-bicycle"
    IFIIAndroidBicycle                      = 0xf369,

    /// Identifier: "ion-android-boat"
    IFIIAndroidBoat                         = 0xf36a,

    /// Identifier: "ion-android-bookmark"
    IFIIAndroidBookmark                     = 0xf36b,

    /// Identifier: "ion-android-bulb"
    IFIIAndroidBulb                         = 0xf36c,

    /// Identifier: "ion-android-bus"
    IFIIAndroidBus                          = 0xf36d,

    /// Identifier: "ion-android-calendar"
    IFIIAndroidCalendar                     = 0xf2d1,

    /// Identifier: "ion-android-call"
    IFIIAndroidCall                         = 0xf2d2,

    /// Identifier: "ion-android-camera"
    IFIIAndroidCamera                       = 0xf2d3,

    /// Identifier: "ion-android-cancel"
    IFIIAndroidCancel                       = 0xf36e,

    /// Identifier: "ion-android-car"
    IFIIAndroidCar                          = 0xf36f,

    /// Identifier: "ion-android-cart"
    IFIIAndroidCart                         = 0xf370,

    /// Identifier: "ion-android-chat"
    IFIIAndroidChat                         = 0xf2d4,

    /// Identifier: "ion-android-checkbox"
    IFIIAndroidCheckbox                     = 0xf374,

    /// Identifier: "ion-android-checkbox-blank"
    IFIIAndroidCheckboxBlank                = 0xf371,

    /// Identifier: "ion-android-checkbox-outline"
    IFIIAndroidCheckboxOutline              = 0xf373,

    /// Identifier: "ion-android-checkbox-outline-blank"
    IFIIAndroidCheckboxOutlineBlank         = 0xf372,

    /// Identifier: "ion-android-checkmark-circle"
    IFIIAndroidCheckmarkCircle              = 0xf375,

    /// Identifier: "ion-android-clipboard"
    IFIIAndroidClipboard                    = 0xf376,

    /// Identifier: "ion-android-close"
    IFIIAndroidClose                        = 0xf2d7,

    /// Identifier: "ion-android-cloud"
    IFIIAndroidCloud                        = 0xf37a,

    /// Identifier: "ion-android-cloud-circle"
    IFIIAndroidCloudCircle                  = 0xf377,

    /// Identifier: "ion-android-cloud-done"
    IFIIAndroidCloudDone                    = 0xf378,

    /// Identifier: "ion-android-cloud-outline"
    IFIIAndroidCloudOutline                 = 0xf379,

    /// Identifier: "ion-android-color-palette"
    IFIIAndroidColorPalette                 = 0xf37b,

    /// Identifier: "ion-android-compass"
    IFIIAndroidCompass                      = 0xf37c,

    /// Identifier: "ion-android-contact"
    IFIIAndroidContact                      = 0xf2d8,

    /// Identifier: "ion-android-contacts"
    IFIIAndroidContacts                     = 0xf2d9,

    /// Identifier: "ion-android-contract"
    IFIIAndroidContract                     = 0xf37d,

    /// Identifier: "ion-android-create"
    IFIIAndroidCreate                       = 0xf37e,

    /// Identifier: "ion-android-delete"
    IFIIAndroidDelete                       = 0xf37f,

    /// Identifier: "ion-android-desktop"
    IFIIAndroidDesktop                      = 0xf380,

    /// Identifier: "ion-android-document"
    IFIIAndroidDocument                     = 0xf381,

    /// Identifier: "ion-android-done"
    IFIIAndroidDone                         = 0xf383,

    /// Identifier: "ion-android-done-all"
    IFIIAndroidDoneAll                      = 0xf382,

    /// Identifier: "ion-android-download"
    IFIIAndroidDownload                     = 0xf2dd,

    /// Identifier: "ion-android-drafts"
    IFIIAndroidDrafts                       = 0xf384,

    /// Identifier: "ion-android-exit"
    IFIIAndroidExit                         = 0xf385,

    /// Identifier: "ion-android-expand"
    IFIIAndroidExpand                       = 0xf386,

    /// Identifier: "ion-android-favorite"
    IFIIAndroidFavorite                     = 0xf388,

    /// Identifier: "ion-android-favorite-outline"
    IFIIAndroidFavoriteOutline              = 0xf387,

    /// Identifier: "ion-android-film"
    IFIIAndroidFilm                         = 0xf389,

    /// Identifier: "ion-android-folder"
    IFIIAndroidFolder                       = 0xf2e0,

    /// Identifier: "ion-android-folder-open"
    IFIIAndroidFolderOpen                   = 0xf38a,

    /// Identifier: "ion-android-funnel"
    IFIIAndroidFunnel                       = 0xf38b,

    /// Identifier: "ion-android-globe"
    IFIIAndroidGlobe                        = 0xf38c,

    /// Identifier: "ion-android-hand"
    IFIIAndroidHand                         = 0xf2e3,

    /// Identifier: "ion-android-hangout"
    IFIIAndroidHangout                      = 0xf38d,

    /// Identifier: "ion-android-happy"
    IFIIAndroidHappy                        = 0xf38e,

    /// Identifier: "ion-android-home"
    IFIIAndroidHome                         = 0xf38f,

    /// Identifier: "ion-android-image"
    IFIIAndroidImage                        = 0xf2e4,

    /// Identifier: "ion-android-laptop"
    IFIIAndroidLaptop                       = 0xf390,

    /// Identifier: "ion-android-list"
    IFIIAndroidList                         = 0xf391,

    /// Identifier: "ion-android-locate"
    IFIIAndroidLocate                       = 0xf2e9,

    /// Identifier: "ion-android-lock"
    IFIIAndroidLock                         = 0xf392,

    /// Identifier: "ion-android-mail"
    IFIIAndroidMail                         = 0xf2eb,

    /// Identifier: "ion-android-map"
    IFIIAndroidMap                          = 0xf393,

    /// Identifier: "ion-android-menu"
    IFIIAndroidMenu                         = 0xf394,

    /// Identifier: "ion-android-microphone"
    IFIIAndroidMicrophone                   = 0xf2ec,

    /// Identifier: "ion-android-microphone-off"
    IFIIAndroidMicrophoneOff                = 0xf395,

    /// Identifier: "ion-android-more-horizontal"
    IFIIAndroidMoreHorizontal               = 0xf396,

    /// Identifier: "ion-android-more-vertical"
    IFIIAndroidMoreVertical                 = 0xf397,

    /// Identifier: "ion-android-navigate"
    IFIIAndroidNavigate                     = 0xf398,

    /// Identifier: "ion-android-notifications"
    IFIIAndroidNotifications                = 0xf39b,

    /// Identifier: "ion-android-notifications-none"
    IFIIAndroidNotificationsNone            = 0xf399,

    /// Identifier: "ion-android-notifications-off"
    IFIIAndroidNotificationsOff             = 0xf39a,

    /// Identifier: "ion-android-open"
    IFIIAndroidOpen                         = 0xf39c,

    /// Identifier: "ion-android-options"
    IFIIAndroidOptions                      = 0xf39d,

    /// Identifier: "ion-android-people"
    IFIIAndroidPeople                       = 0xf39e,

    /// Identifier: "ion-android-person"
    IFIIAndroidPerson                       = 0xf3a0,

    /// Identifier: "ion-android-person-add"
    IFIIAndroidPersonAdd                    = 0xf39f,

    /// Identifier: "ion-android-phone-landscape"
    IFIIAndroidPhoneLandscape               = 0xf3a1,

    /// Identifier: "ion-android-phone-portrait"
    IFIIAndroidPhonePortrait                = 0xf3a2,

    /// Identifier: "ion-android-pin"
    IFIIAndroidPin                          = 0xf3a3,

    /// Identifier: "ion-android-plane"
    IFIIAndroidPlane                        = 0xf3a4,

    /// Identifier: "ion-android-playstore"
    IFIIAndroidPlaystore                    = 0xf2f0,

    /// Identifier: "ion-android-print"
    IFIIAndroidPrint                        = 0xf3a5,

    /// Identifier: "ion-android-radio-button-off"
    IFIIAndroidRadioButtonOff               = 0xf3a6,

    /// Identifier: "ion-android-radio-button-on"
    IFIIAndroidRadioButtonOn                = 0xf3a7,

    /// Identifier: "ion-android-refresh"
    IFIIAndroidRefresh                      = 0xf3a8,

    /// Identifier: "ion-android-remove"
    IFIIAndroidRemove                       = 0xf2f4,

    /// Identifier: "ion-android-remove-circle"
    IFIIAndroidRemoveCircle                 = 0xf3a9,

    /// Identifier: "ion-android-restaurant"
    IFIIAndroidRestaurant                   = 0xf3aa,

    /// Identifier: "ion-android-sad"
    IFIIAndroidSad                          = 0xf3ab,

    /// Identifier: "ion-android-search"
    IFIIAndroidSearch                       = 0xf2f5,

    /// Identifier: "ion-android-send"
    IFIIAndroidSend                         = 0xf2f6,

    /// Identifier: "ion-android-settings"
    IFIIAndroidSettings                     = 0xf2f7,

    /// Identifier: "ion-android-share"
    IFIIAndroidShare                        = 0xf2f8,

    /// Identifier: "ion-android-share-alt"
    IFIIAndroidShareAlt                     = 0xf3ac,

    /// Identifier: "ion-android-star"
    IFIIAndroidStar                         = 0xf2fc,

    /// Identifier: "ion-android-star-half"
    IFIIAndroidStarHalf                     = 0xf3ad,

    /// Identifier: "ion-android-star-outline"
    IFIIAndroidStarOutline                  = 0xf3ae,

    /// Identifier: "ion-android-stopwatch"
    IFIIAndroidStopwatch                    = 0xf2fd,

    /// Identifier: "ion-android-subway"
    IFIIAndroidSubway                       = 0xf3af,

    /// Identifier: "ion-android-sunny"
    IFIIAndroidSunny                        = 0xf3b0,

    /// Identifier: "ion-android-sync"
    IFIIAndroidSync                         = 0xf3b1,

    /// Identifier: "ion-android-textsms"
    IFIIAndroidTextsms                      = 0xf3b2,

    /// Identifier: "ion-android-time"
    IFIIAndroidTime                         = 0xf3b3,

    /// Identifier: "ion-android-train"
    IFIIAndroidTrain                        = 0xf3b4,

    /// Identifier: "ion-android-unlock"
    IFIIAndroidUnlock                       = 0xf3b5,

    /// Identifier: "ion-android-upload"
    IFIIAndroidUpload                       = 0xf3b6,

    /// Identifier: "ion-android-volume-down"
    IFIIAndroidVolumeDown                   = 0xf3b7,

    /// Identifier: "ion-android-volume-mute"
    IFIIAndroidVolumeMute                   = 0xf3b8,

    /// Identifier: "ion-android-volume-off"
    IFIIAndroidVolumeOff                    = 0xf3b9,

    /// Identifier: "ion-android-volume-up"
    IFIIAndroidVolumeUp                     = 0xf3ba,

    /// Identifier: "ion-android-walk"
    IFIIAndroidWalk                         = 0xf3bb,

    /// Identifier: "ion-android-warning"
    IFIIAndroidWarning                      = 0xf3bc,

    /// Identifier: "ion-android-watch"
    IFIIAndroidWatch                        = 0xf3bd,

    /// Identifier: "ion-android-wifi"
    IFIIAndroidWifi                         = 0xf305,

    /// Identifier: "ion-aperture"
    IFIIAperture                            = 0xf313,

    /// Identifier: "ion-archive"
    IFIIArchive                             = 0xf102,

    /// Identifier: "ion-arrow-down-a"
    IFIIArrowDownA                          = 0xf103,

    /// Identifier: "ion-arrow-down-b"
    IFIIArrowDownB                          = 0xf104,

    /// Identifier: "ion-arrow-down-c"
    IFIIArrowDownC                          = 0xf105,

    /// Identifier: "ion-arrow-expand"
    IFIIArrowExpand                         = 0xf25e,

    /// Identifier: "ion-arrow-graph-down-left"
    IFIIArrowGraphDownLeft                  = 0xf25f,

    /// Identifier: "ion-arrow-graph-down-right"
    IFIIArrowGraphDownRight                 = 0xf260,

    /// Identifier: "ion-arrow-graph-up-left"
    IFIIArrowGraphUpLeft                    = 0xf261,

    /// Identifier: "ion-arrow-graph-up-right"
    IFIIArrowGraphUpRight                   = 0xf262,

    /// Identifier: "ion-arrow-left-a"
    IFIIArrowLeftA                          = 0xf106,

    /// Identifier: "ion-arrow-left-b"
    IFIIArrowLeftB                          = 0xf107,

    /// Identifier: "ion-arrow-left-c"
    IFIIArrowLeftC                          = 0xf108,

    /// Identifier: "ion-arrow-move"
    IFIIArrowMove                           = 0xf263,

    /// Identifier: "ion-arrow-resize"
    IFIIArrowResize                         = 0xf264,

    /// Identifier: "ion-arrow-return-left"
    IFIIArrowReturnLeft                     = 0xf265,

    /// Identifier: "ion-arrow-return-right"
    IFIIArrowReturnRight                    = 0xf266,

    /// Identifier: "ion-arrow-right-a"
    IFIIArrowRightA                         = 0xf109,

    /// Identifier: "ion-arrow-right-b"
    IFIIArrowRightB                         = 0xf10a,

    /// Identifier: "ion-arrow-right-c"
    IFIIArrowRightC                         = 0xf10b,

    /// Identifier: "ion-arrow-shrink"
    IFIIArrowShrink                         = 0xf267,

    /// Identifier: "ion-arrow-swap"
    IFIIArrowSwap                           = 0xf268,

    /// Identifier: "ion-arrow-up-a"
    IFIIArrowUpA                            = 0xf10c,

    /// Identifier: "ion-arrow-up-b"
    IFIIArrowUpB                            = 0xf10d,

    /// Identifier: "ion-arrow-up-c"
    IFIIArrowUpC                            = 0xf10e,

    /// Identifier: "ion-asterisk"
    IFIIAsterisk                            = 0xf314,

    /// Identifier: "ion-at"
    IFIIAt                                  = 0xf10f,

    /// Identifier: "ion-backspace"
    IFIIBackspace                           = 0xf3bf,

    /// Identifier: "ion-backspace-outline"
    IFIIBackspaceOutline                    = 0xf3be,

    /// Identifier: "ion-bag"
    IFIIBag                                 = 0xf110,

    /// Identifier: "ion-battery-charging"
    IFIIBatteryCharging                     = 0xf111,

    /// Identifier: "ion-battery-empty"
    IFIIBatteryEmpty                        = 0xf112,

    /// Identifier: "ion-battery-full"
    IFIIBatteryFull                         = 0xf113,

    /// Identifier: "ion-battery-half"
    IFIIBatteryHalf                         = 0xf114,

    /// Identifier: "ion-battery-low"
    IFIIBatteryLow                          = 0xf115,

    /// Identifier: "ion-beaker"
    IFIIBeaker                              = 0xf269,

    /// Identifier: "ion-beer"
    IFIIBeer                                = 0xf26a,

    /// Identifier: "ion-bluetooth"
    IFIIBluetooth                           = 0xf116,

    /// Identifier: "ion-bonfire"
    IFIIBonfire                             = 0xf315,

    /// Identifier: "ion-bookmark"
    IFIIBookmark                            = 0xf26b,

    /// Identifier: "ion-bowtie"
    IFIIBowtie                              = 0xf3c0,

    /// Identifier: "ion-briefcase"
    IFIIBriefcase                           = 0xf26c,

    /// Identifier: "ion-bug"
    IFIIBug                                 = 0xf2be,

    /// Identifier: "ion-calculator"
    IFIICalculator                          = 0xf26d,

    /// Identifier: "ion-calendar"
    IFIICalendar                            = 0xf117,

    /// Identifier: "ion-camera"
    IFIICamera                              = 0xf118,

    /// Identifier: "ion-card"
    IFIICard                                = 0xf119,

    /// Identifier: "ion-cash"
    IFIICash                                = 0xf316,

    /// Identifier: "ion-chatbox"
    IFIIChatbox                             = 0xf11b,

    /// Identifier: "ion-chatbox-working"
    IFIIChatboxWorking                      = 0xf11a,

    /// Identifier: "ion-chatboxes"
    IFIIChatboxes                           = 0xf11c,

    /// Identifier: "ion-chatbubble"
    IFIIChatbubble                          = 0xf11e,

    /// Identifier: "ion-chatbubble-working"
    IFIIChatbubbleWorking                   = 0xf11d,

    /// Identifier: "ion-chatbubbles"
    IFIIChatbubbles                         = 0xf11f,

    /// Identifier: "ion-checkmark"
    IFIICheckmark                           = 0xf122,

    /// Identifier: "ion-checkmark-circled"
    IFIICheckmarkCircled                    = 0xf120,

    /// Identifier: "ion-checkmark-round"
    IFIICheckmarkRound                      = 0xf121,

    /// Identifier: "ion-chevron-down"
    IFIIChevronDown                         = 0xf123,

    /// Identifier: "ion-chevron-left"
    IFIIChevronLeft                         = 0xf124,

    /// Identifier: "ion-chevron-right"
    IFIIChevronRight                        = 0xf125,

    /// Identifier: "ion-chevron-up"
    IFIIChevronUp                           = 0xf126,

    /// Identifier: "ion-clipboard"
    IFIIClipboard                           = 0xf127,

    /// Identifier: "ion-clock"
    IFIIClock                               = 0xf26e,

    /// Identifier: "ion-close"
    IFIIClose                               = 0xf12a,

    /// Identifier: "ion-close-circled"
    IFIICloseCircled                        = 0xf128,

    /// Identifier: "ion-close-round"
    IFIICloseRound                          = 0xf129,

    /// Identifier: "ion-closed-captioning"
    IFIIClosedCaptioning                    = 0xf317,

    /// Identifier: "ion-cloud"
    IFIICloud                               = 0xf12b,

    /// Identifier: "ion-code"
    IFIICode                                = 0xf271,

    /// Identifier: "ion-code-download"
    IFIICodeDownload                        = 0xf26f,

    /// Identifier: "ion-code-working"
    IFIICodeWorking                         = 0xf270,

    /// Identifier: "ion-coffee"
    IFIICoffee                              = 0xf272,

    /// Identifier: "ion-compass"
    IFIICompass                             = 0xf273,

    /// Identifier: "ion-compose"
    IFIICompose                             = 0xf12c,

    /// Identifier: "ion-connection-bars"
    IFIIConnectionBars                      = 0xf274,

    /// Identifier: "ion-contrast"
    IFIIContrast                            = 0xf275,

    /// Identifier: "ion-crop"
    IFIICrop                                = 0xf3c1,

    /// Identifier: "ion-cube"
    IFIICube                                = 0xf318,

    /// Identifier: "ion-disc"
    IFIIDisc                                = 0xf12d,

    /// Identifier: "ion-document"
    IFIIDocument                            = 0xf12f,

    /// Identifier: "ion-document-text"
    IFIIDocumentText                        = 0xf12e,

    /// Identifier: "ion-drag"
    IFIIDrag                                = 0xf130,

    /// Identifier: "ion-earth"
    IFIIEarth                               = 0xf276,

    /// Identifier: "ion-easel"
    IFIIEasel                               = 0xf3c2,

    /// Identifier: "ion-edit"
    IFIIEdit                                = 0xf2bf,

    /// Identifier: "ion-egg"
    IFIIEgg                                 = 0xf277,

    /// Identifier: "ion-eject"
    IFIIEject                               = 0xf131,

    /// Identifier: "ion-email"
    IFIIEmail                               = 0xf132,

    /// Identifier: "ion-email-unread"
    IFIIEmailUnread                         = 0xf3c3,

    /// Identifier: "ion-erlenmeyer-flask"
    IFIIErlenmeyerFlask                     = 0xf3c5,

    /// Identifier: "ion-erlenmeyer-flask-bubbles"
    IFIIErlenmeyerFlaskBubbles              = 0xf3c4,

    /// Identifier: "ion-eye"
    IFIIEye                                 = 0xf133,

    /// Identifier: "ion-eye-disabled"
    IFIIEyeDisabled                         = 0xf306,

    /// Identifier: "ion-female"
    IFIIFemale                              = 0xf278,

    /// Identifier: "ion-filing"
    IFIIFiling                              = 0xf134,

    /// Identifier: "ion-film-marker"
    IFIIFilmMarker                          = 0xf135,

    /// Identifier: "ion-fireball"
    IFIIFireball                            = 0xf319,

    /// Identifier: "ion-flag"
    IFIIFlag                                = 0xf279,

    /// Identifier: "ion-flame"
    IFIIFlame                               = 0xf31a,

    /// Identifier: "ion-flash"
    IFIIFlash                               = 0xf137,

    /// Identifier: "ion-flash-off"
    IFIIFlashOff                            = 0xf136,

    /// Identifier: "ion-folder"
    IFIIFolder                              = 0xf139,

    /// Identifier: "ion-fork"
    IFIIFork                                = 0xf27a,

    /// Identifier: "ion-fork-repo"
    IFIIForkRepo                            = 0xf2c0,

    /// Identifier: "ion-forward"
    IFIIForward                             = 0xf13a,

    /// Identifier: "ion-funnel"
    IFIIFunnel                              = 0xf31b,

    /// Identifier: "ion-gear-a"
    IFIIGearA                               = 0xf13d,

    /// Identifier: "ion-gear-b"
    IFIIGearB                               = 0xf13e,

    /// Identifier: "ion-grid"
    IFIIGrid                                = 0xf13f,

    /// Identifier: "ion-hammer"
    IFIIHammer                              = 0xf27b,

    /// Identifier: "ion-happy"
    IFIIHappy                               = 0xf31c,

    /// Identifier: "ion-happy-outline"
    IFIIHappyOutline                        = 0xf3c6,

    /// Identifier: "ion-headphone"
    IFIIHeadphone                           = 0xf140,

    /// Identifier: "ion-heart"
    IFIIHeart                               = 0xf141,

    /// Identifier: "ion-heart-broken"
    IFIIHeartBroken                         = 0xf31d,

    /// Identifier: "ion-help"
    IFIIHelp                                = 0xf143,

    /// Identifier: "ion-help-buoy"
    IFIIHelpBuoy                            = 0xf27c,

    /// Identifier: "ion-help-circled"
    IFIIHelpCircled                         = 0xf142,

    /// Identifier: "ion-home"
    IFIIHome                                = 0xf144,

    /// Identifier: "ion-icecream"
    IFIIIcecream                            = 0xf27d,

    /// Identifier: "ion-image"
    IFIIImage                               = 0xf147,

    /// Identifier: "ion-images"
    IFIIImages                              = 0xf148,

    /// Identifier: "ion-information"
    IFIIInformation                         = 0xf14a,

    /// Identifier: "ion-information-circled"
    IFIIInformationCircled                  = 0xf149,

    /// Identifier: "ion-ionic"
    IFIIIonic                               = 0xf14b,

    /// Identifier: "ion-ios-alarm"
    IFIIIosAlarm                            = 0xf3c8,

    /// Identifier: "ion-ios-alarm-outline"
    IFIIIosAlarmOutline                     = 0xf3c7,

    /// Identifier: "ion-ios-albums"
    IFIIIosAlbums                           = 0xf3ca,

    /// Identifier: "ion-ios-albums-outline"
    IFIIIosAlbumsOutline                    = 0xf3c9,

    /// Identifier: "ion-ios-americanfootball"
    IFIIIosAmericanfootball                 = 0xf3cc,

    /// Identifier: "ion-ios-americanfootball-outline"
    IFIIIosAmericanfootballOutline          = 0xf3cb,

    /// Identifier: "ion-ios-analytics"
    IFIIIosAnalytics                        = 0xf3ce,

    /// Identifier: "ion-ios-analytics-outline"
    IFIIIosAnalyticsOutline                 = 0xf3cd,

    /// Identifier: "ion-ios-arrow-back"
    IFIIIosArrowBack                        = 0xf3cf,

    /// Identifier: "ion-ios-arrow-down"
    IFIIIosArrowDown                        = 0xf3d0,

    /// Identifier: "ion-ios-arrow-forward"
    IFIIIosArrowForward                     = 0xf3d1,

    /// Identifier: "ion-ios-arrow-left"
    IFIIIosArrowLeft                        = 0xf3d2,

    /// Identifier: "ion-ios-arrow-right"
    IFIIIosArrowRight                       = 0xf3d3,

    /// Identifier: "ion-ios-arrow-thin-down"
    IFIIIosArrowThinDown                    = 0xf3d4,

    /// Identifier: "ion-ios-arrow-thin-left"
    IFIIIosArrowThinLeft                    = 0xf3d5,

    /// Identifier: "ion-ios-arrow-thin-right"
    IFIIIosArrowThinRight                   = 0xf3d6,

    /// Identifier: "ion-ios-arrow-thin-up"
    IFIIIosArrowThinUp                      = 0xf3d7,

    /// Identifier: "ion-ios-arrow-up"
    IFIIIosArrowUp                          = 0xf3d8,

    /// Identifier: "ion-ios-at"
    IFIIIosAt                               = 0xf3da,

    /// Identifier: "ion-ios-at-outline"
    IFIIIosAtOutline                        = 0xf3d9,

    /// Identifier: "ion-ios-barcode"
    IFIIIosBarcode                          = 0xf3dc,

    /// Identifier: "ion-ios-barcode-outline"
    IFIIIosBarcodeOutline                   = 0xf3db,

    /// Identifier: "ion-ios-baseball"
    IFIIIosBaseball                         = 0xf3de,

    /// Identifier: "ion-ios-baseball-outline"
    IFIIIosBaseballOutline                  = 0xf3dd,

    /// Identifier: "ion-ios-basketball"
    IFIIIosBasketball                       = 0xf3e0,

    /// Identifier: "ion-ios-basketball-outline"
    IFIIIosBasketballOutline                = 0xf3df,

    /// Identifier: "ion-ios-bell"
    IFIIIosBell                             = 0xf3e2,

    /// Identifier: "ion-ios-bell-outline"
    IFIIIosBellOutline                      = 0xf3e1,

    /// Identifier: "ion-ios-body"
    IFIIIosBody                             = 0xf3e4,

    /// Identifier: "ion-ios-body-outline"
    IFIIIosBodyOutline                      = 0xf3e3,

    /// Identifier: "ion-ios-bolt"
    IFIIIosBolt                             = 0xf3e6,

    /// Identifier: "ion-ios-bolt-outline"
    IFIIIosBoltOutline                      = 0xf3e5,

    /// Identifier: "ion-ios-book"
    IFIIIosBook                             = 0xf3e8,

    /// Identifier: "ion-ios-book-outline"
    IFIIIosBookOutline                      = 0xf3e7,

    /// Identifier: "ion-ios-bookmarks"
    IFIIIosBookmarks                        = 0xf3ea,

    /// Identifier: "ion-ios-bookmarks-outline"
    IFIIIosBookmarksOutline                 = 0xf3e9,

    /// Identifier: "ion-ios-box"
    IFIIIosBox                              = 0xf3ec,

    /// Identifier: "ion-ios-box-outline"
    IFIIIosBoxOutline                       = 0xf3eb,

    /// Identifier: "ion-ios-briefcase"
    IFIIIosBriefcase                        = 0xf3ee,

    /// Identifier: "ion-ios-briefcase-outline"
    IFIIIosBriefcaseOutline                 = 0xf3ed,

    /// Identifier: "ion-ios-browsers"
    IFIIIosBrowsers                         = 0xf3f0,

    /// Identifier: "ion-ios-browsers-outline"
    IFIIIosBrowsersOutline                  = 0xf3ef,

    /// Identifier: "ion-ios-calculator"
    IFIIIosCalculator                       = 0xf3f2,

    /// Identifier: "ion-ios-calculator-outline"
    IFIIIosCalculatorOutline                = 0xf3f1,

    /// Identifier: "ion-ios-calendar"
    IFIIIosCalendar                         = 0xf3f4,

    /// Identifier: "ion-ios-calendar-outline"
    IFIIIosCalendarOutline                  = 0xf3f3,

    /// Identifier: "ion-ios-camera"
    IFIIIosCamera                           = 0xf3f6,

    /// Identifier: "ion-ios-camera-outline"
    IFIIIosCameraOutline                    = 0xf3f5,

    /// Identifier: "ion-ios-cart"
    IFIIIosCart                             = 0xf3f8,

    /// Identifier: "ion-ios-cart-outline"
    IFIIIosCartOutline                      = 0xf3f7,

    /// Identifier: "ion-ios-chatboxes"
    IFIIIosChatboxes                        = 0xf3fa,

    /// Identifier: "ion-ios-chatboxes-outline"
    IFIIIosChatboxesOutline                 = 0xf3f9,

    /// Identifier: "ion-ios-chatbubble"
    IFIIIosChatbubble                       = 0xf3fc,

    /// Identifier: "ion-ios-chatbubble-outline"
    IFIIIosChatbubbleOutline                = 0xf3fb,

    /// Identifier: "ion-ios-checkmark"
    IFIIIosCheckmark                        = 0xf3ff,

    /// Identifier: "ion-ios-checkmark-empty"
    IFIIIosCheckmarkEmpty                   = 0xf3fd,

    /// Identifier: "ion-ios-checkmark-outline"
    IFIIIosCheckmarkOutline                 = 0xf3fe,

    /// Identifier: "ion-ios-circle-filled"
    IFIIIosCircleFilled                     = 0xf400,

    /// Identifier: "ion-ios-circle-outline"
    IFIIIosCircleOutline                    = 0xf401,

    /// Identifier: "ion-ios-clock"
    IFIIIosClock                            = 0xf403,

    /// Identifier: "ion-ios-clock-outline"
    IFIIIosClockOutline                     = 0xf402,

    /// Identifier: "ion-ios-close"
    IFIIIosClose                            = 0xf406,

    /// Identifier: "ion-ios-close-empty"
    IFIIIosCloseEmpty                       = 0xf404,

    /// Identifier: "ion-ios-close-outline"
    IFIIIosCloseOutline                     = 0xf405,

    /// Identifier: "ion-ios-cloud"
    IFIIIosCloud                            = 0xf40c,

    /// Identifier: "ion-ios-cloud-download"
    IFIIIosCloudDownload                    = 0xf408,

    /// Identifier: "ion-ios-cloud-download-outline"
    IFIIIosCloudDownloadOutline             = 0xf407,

    /// Identifier: "ion-ios-cloud-outline"
    IFIIIosCloudOutline                     = 0xf409,

    /// Identifier: "ion-ios-cloud-upload"
    IFIIIosCloudUpload                      = 0xf40b,

    /// Identifier: "ion-ios-cloud-upload-outline"
    IFIIIosCloudUploadOutline               = 0xf40a,

    /// Identifier: "ion-ios-cloudy"
    IFIIIosCloudy                           = 0xf410,

    /// Identifier: "ion-ios-cloudy-night"
    IFIIIosCloudyNight                      = 0xf40e,

    /// Identifier: "ion-ios-cloudy-night-outline"
    IFIIIosCloudyNightOutline               = 0xf40d,

    /// Identifier: "ion-ios-cloudy-outline"
    IFIIIosCloudyOutline                    = 0xf40f,

    /// Identifier: "ion-ios-cog"
    IFIIIosCog                              = 0xf412,

    /// Identifier: "ion-ios-cog-outline"
    IFIIIosCogOutline                       = 0xf411,

    /// Identifier: "ion-ios-color-filter"
    IFIIIosColorFilter                      = 0xf414,

    /// Identifier: "ion-ios-color-filter-outline"
    IFIIIosColorFilterOutline               = 0xf413,

    /// Identifier: "ion-ios-color-wand"
    IFIIIosColorWand                        = 0xf416,

    /// Identifier: "ion-ios-color-wand-outline"
    IFIIIosColorWandOutline                 = 0xf415,

    /// Identifier: "ion-ios-compose"
    IFIIIosCompose                          = 0xf418,

    /// Identifier: "ion-ios-compose-outline"
    IFIIIosComposeOutline                   = 0xf417,

    /// Identifier: "ion-ios-contact"
    IFIIIosContact                          = 0xf41a,

    /// Identifier: "ion-ios-contact-outline"
    IFIIIosContactOutline                   = 0xf419,

    /// Identifier: "ion-ios-copy"
    IFIIIosCopy                             = 0xf41c,

    /// Identifier: "ion-ios-copy-outline"
    IFIIIosCopyOutline                      = 0xf41b,

    /// Identifier: "ion-ios-crop"
    IFIIIosCrop                             = 0xf41e,

    /// Identifier: "ion-ios-crop-strong"
    IFIIIosCropStrong                       = 0xf41d,

    /// Identifier: "ion-ios-download"
    IFIIIosDownload                         = 0xf420,

    /// Identifier: "ion-ios-download-outline"
    IFIIIosDownloadOutline                  = 0xf41f,

    /// Identifier: "ion-ios-drag"
    IFIIIosDrag                             = 0xf421,

    /// Identifier: "ion-ios-email"
    IFIIIosEmail                            = 0xf423,

    /// Identifier: "ion-ios-email-outline"
    IFIIIosEmailOutline                     = 0xf422,

    /// Identifier: "ion-ios-eye"
    IFIIIosEye                              = 0xf425,

    /// Identifier: "ion-ios-eye-outline"
    IFIIIosEyeOutline                       = 0xf424,

    /// Identifier: "ion-ios-fastforward"
    IFIIIosFastforward                      = 0xf427,

    /// Identifier: "ion-ios-fastforward-outline"
    IFIIIosFastforwardOutline               = 0xf426,

    /// Identifier: "ion-ios-filing"
    IFIIIosFiling                           = 0xf429,

    /// Identifier: "ion-ios-filing-outline"
    IFIIIosFilingOutline                    = 0xf428,

    /// Identifier: "ion-ios-film"
    IFIIIosFilm                             = 0xf42b,

    /// Identifier: "ion-ios-film-outline"
    IFIIIosFilmOutline                      = 0xf42a,

    /// Identifier: "ion-ios-flag"
    IFIIIosFlag                             = 0xf42d,

    /// Identifier: "ion-ios-flag-outline"
    IFIIIosFlagOutline                      = 0xf42c,

    /// Identifier: "ion-ios-flame"
    IFIIIosFlame                            = 0xf42f,

    /// Identifier: "ion-ios-flame-outline"
    IFIIIosFlameOutline                     = 0xf42e,

    /// Identifier: "ion-ios-flask"
    IFIIIosFlask                            = 0xf431,

    /// Identifier: "ion-ios-flask-outline"
    IFIIIosFlaskOutline                     = 0xf430,

    /// Identifier: "ion-ios-flower"
    IFIIIosFlower                           = 0xf433,

    /// Identifier: "ion-ios-flower-outline"
    IFIIIosFlowerOutline                    = 0xf432,

    /// Identifier: "ion-ios-folder"
    IFIIIosFolder                           = 0xf435,

    /// Identifier: "ion-ios-folder-outline"
    IFIIIosFolderOutline                    = 0xf434,

    /// Identifier: "ion-ios-football"
    IFIIIosFootball                         = 0xf437,

    /// Identifier: "ion-ios-football-outline"
    IFIIIosFootballOutline                  = 0xf436,

    /// Identifier: "ion-ios-game-controller-a"
    IFIIIosGameControllerA                  = 0xf439,

    /// Identifier: "ion-ios-game-controller-a-outline"
    IFIIIosGameControllerAOutline           = 0xf438,

    /// Identifier: "ion-ios-game-controller-b"
    IFIIIosGameControllerB                  = 0xf43b,

    /// Identifier: "ion-ios-game-controller-b-outline"
    IFIIIosGameControllerBOutline           = 0xf43a,

    /// Identifier: "ion-ios-gear"
    IFIIIosGear                             = 0xf43d,

    /// Identifier: "ion-ios-gear-outline"
    IFIIIosGearOutline                      = 0xf43c,

    /// Identifier: "ion-ios-glasses"
    IFIIIosGlasses                          = 0xf43f,

    /// Identifier: "ion-ios-glasses-outline"
    IFIIIosGlassesOutline                   = 0xf43e,

    /// Identifier: "ion-ios-grid-view"
    IFIIIosGridView                         = 0xf441,

    /// Identifier: "ion-ios-grid-view-outline"
    IFIIIosGridViewOutline                  = 0xf440,

    /// Identifier: "ion-ios-heart"
    IFIIIosHeart                            = 0xf443,

    /// Identifier: "ion-ios-heart-outline"
    IFIIIosHeartOutline                     = 0xf442,

    /// Identifier: "ion-ios-help"
    IFIIIosHelp                             = 0xf446,

    /// Identifier: "ion-ios-help-empty"
    IFIIIosHelpEmpty                        = 0xf444,

    /// Identifier: "ion-ios-help-outline"
    IFIIIosHelpOutline                      = 0xf445,

    /// Identifier: "ion-ios-home"
    IFIIIosHome                             = 0xf448,

    /// Identifier: "ion-ios-home-outline"
    IFIIIosHomeOutline                      = 0xf447,

    /// Identifier: "ion-ios-infinite"
    IFIIIosInfinite                         = 0xf44a,

    /// Identifier: "ion-ios-infinite-outline"
    IFIIIosInfiniteOutline                  = 0xf449,

    /// Identifier: "ion-ios-information"
    IFIIIosInformation                      = 0xf44d,

    /// Identifier: "ion-ios-information-empty"
    IFIIIosInformationEmpty                 = 0xf44b,

    /// Identifier: "ion-ios-information-outline"
    IFIIIosInformationOutline               = 0xf44c,

    /// Identifier: "ion-ios-ionic-outline"
    IFIIIosIonicOutline                     = 0xf44e,

    /// Identifier: "ion-ios-keypad"
    IFIIIosKeypad                           = 0xf450,

    /// Identifier: "ion-ios-keypad-outline"
    IFIIIosKeypadOutline                    = 0xf44f,

    /// Identifier: "ion-ios-lightbulb"
    IFIIIosLightbulb                        = 0xf452,

    /// Identifier: "ion-ios-lightbulb-outline"
    IFIIIosLightbulbOutline                 = 0xf451,

    /// Identifier: "ion-ios-list"
    IFIIIosList                             = 0xf454,

    /// Identifier: "ion-ios-list-outline"
    IFIIIosListOutline                      = 0xf453,

    /// Identifier: "ion-ios-location"
    IFIIIosLocation                         = 0xf456,

    /// Identifier: "ion-ios-location-outline"
    IFIIIosLocationOutline                  = 0xf455,

    /// Identifier: "ion-ios-locked"
    IFIIIosLocked                           = 0xf458,

    /// Identifier: "ion-ios-locked-outline"
    IFIIIosLockedOutline                    = 0xf457,

    /// Identifier: "ion-ios-loop"
    IFIIIosLoop                             = 0xf45a,

    /// Identifier: "ion-ios-loop-strong"
    IFIIIosLoopStrong                       = 0xf459,

    /// Identifier: "ion-ios-medical"
    IFIIIosMedical                          = 0xf45c,

    /// Identifier: "ion-ios-medical-outline"
    IFIIIosMedicalOutline                   = 0xf45b,

    /// Identifier: "ion-ios-medkit"
    IFIIIosMedkit                           = 0xf45e,

    /// Identifier: "ion-ios-medkit-outline"
    IFIIIosMedkitOutline                    = 0xf45d,

    /// Identifier: "ion-ios-mic"
    IFIIIosMic                              = 0xf461,

    /// Identifier: "ion-ios-mic-off"
    IFIIIosMicOff                           = 0xf45f,

    /// Identifier: "ion-ios-mic-outline"
    IFIIIosMicOutline                       = 0xf460,

    /// Identifier: "ion-ios-minus"
    IFIIIosMinus                            = 0xf464,

    /// Identifier: "ion-ios-minus-empty"
    IFIIIosMinusEmpty                       = 0xf462,

    /// Identifier: "ion-ios-minus-outline"
    IFIIIosMinusOutline                     = 0xf463,

    /// Identifier: "ion-ios-monitor"
    IFIIIosMonitor                          = 0xf466,

    /// Identifier: "ion-ios-monitor-outline"
    IFIIIosMonitorOutline                   = 0xf465,

    /// Identifier: "ion-ios-moon"
    IFIIIosMoon                             = 0xf468,

    /// Identifier: "ion-ios-moon-outline"
    IFIIIosMoonOutline                      = 0xf467,

    /// Identifier: "ion-ios-more"
    IFIIIosMore                             = 0xf46a,

    /// Identifier: "ion-ios-more-outline"
    IFIIIosMoreOutline                      = 0xf469,

    /// Identifier: "ion-ios-musical-note"
    IFIIIosMusicalNote                      = 0xf46b,

    /// Identifier: "ion-ios-musical-notes"
    IFIIIosMusicalNotes                     = 0xf46c,

    /// Identifier: "ion-ios-navigate"
    IFIIIosNavigate                         = 0xf46e,

    /// Identifier: "ion-ios-navigate-outline"
    IFIIIosNavigateOutline                  = 0xf46d,

    /// Identifier: "ion-ios-nutrition"
    IFIIIosNutrition                        = 0xf470,

    /// Identifier: "ion-ios-nutrition-outline"
    IFIIIosNutritionOutline                 = 0xf46f,

    /// Identifier: "ion-ios-paper"
    IFIIIosPaper                            = 0xf472,

    /// Identifier: "ion-ios-paper-outline"
    IFIIIosPaperOutline                     = 0xf471,

    /// Identifier: "ion-ios-paperplane"
    IFIIIosPaperplane                       = 0xf474,

    /// Identifier: "ion-ios-paperplane-outline"
    IFIIIosPaperplaneOutline                = 0xf473,

    /// Identifier: "ion-ios-partlysunny"
    IFIIIosPartlysunny                      = 0xf476,

    /// Identifier: "ion-ios-partlysunny-outline"
    IFIIIosPartlysunnyOutline               = 0xf475,

    /// Identifier: "ion-ios-pause"
    IFIIIosPause                            = 0xf478,

    /// Identifier: "ion-ios-pause-outline"
    IFIIIosPauseOutline                     = 0xf477,

    /// Identifier: "ion-ios-paw"
    IFIIIosPaw                              = 0xf47a,

    /// Identifier: "ion-ios-paw-outline"
    IFIIIosPawOutline                       = 0xf479,

    /// Identifier: "ion-ios-people"
    IFIIIosPeople                           = 0xf47c,

    /// Identifier: "ion-ios-people-outline"
    IFIIIosPeopleOutline                    = 0xf47b,

    /// Identifier: "ion-ios-person"
    IFIIIosPerson                           = 0xf47e,

    /// Identifier: "ion-ios-person-outline"
    IFIIIosPersonOutline                    = 0xf47d,

    /// Identifier: "ion-ios-personadd"
    IFIIIosPersonadd                        = 0xf480,

    /// Identifier: "ion-ios-personadd-outline"
    IFIIIosPersonaddOutline                 = 0xf47f,

    /// Identifier: "ion-ios-photos"
    IFIIIosPhotos                           = 0xf482,

    /// Identifier: "ion-ios-photos-outline"
    IFIIIosPhotosOutline                    = 0xf481,

    /// Identifier: "ion-ios-pie"
    IFIIIosPie                              = 0xf484,

    /// Identifier: "ion-ios-pie-outline"
    IFIIIosPieOutline                       = 0xf483,

    /// Identifier: "ion-ios-pint"
    IFIIIosPint                             = 0xf486,

    /// Identifier: "ion-ios-pint-outline"
    IFIIIosPintOutline                      = 0xf485,

    /// Identifier: "ion-ios-play"
    IFIIIosPlay                             = 0xf488,

    /// Identifier: "ion-ios-play-outline"
    IFIIIosPlayOutline                      = 0xf487,

    /// Identifier: "ion-ios-plus"
    IFIIIosPlus                             = 0xf48b,

    /// Identifier: "ion-ios-plus-empty"
    IFIIIosPlusEmpty                        = 0xf489,

    /// Identifier: "ion-ios-plus-outline"
    IFIIIosPlusOutline                      = 0xf48a,

    /// Identifier: "ion-ios-pricetag"
    IFIIIosPricetag                         = 0xf48d,

    /// Identifier: "ion-ios-pricetag-outline"
    IFIIIosPricetagOutline                  = 0xf48c,

    /// Identifier: "ion-ios-pricetags"
    IFIIIosPricetags                        = 0xf48f,

    /// Identifier: "ion-ios-pricetags-outline"
    IFIIIosPricetagsOutline                 = 0xf48e,

    /// Identifier: "ion-ios-printer"
    IFIIIosPrinter                          = 0xf491,

    /// Identifier: "ion-ios-printer-outline"
    IFIIIosPrinterOutline                   = 0xf490,

    /// Identifier: "ion-ios-pulse"
    IFIIIosPulse                            = 0xf493,

    /// Identifier: "ion-ios-pulse-strong"
    IFIIIosPulseStrong                      = 0xf492,

    /// Identifier: "ion-ios-rainy"
    IFIIIosRainy                            = 0xf495,

    /// Identifier: "ion-ios-rainy-outline"
    IFIIIosRainyOutline                     = 0xf494,

    /// Identifier: "ion-ios-recording"
    IFIIIosRecording                        = 0xf497,

    /// Identifier: "ion-ios-recording-outline"
    IFIIIosRecordingOutline                 = 0xf496,

    /// Identifier: "ion-ios-redo"
    IFIIIosRedo                             = 0xf499,

    /// Identifier: "ion-ios-redo-outline"
    IFIIIosRedoOutline                      = 0xf498,

    /// Identifier: "ion-ios-refresh"
    IFIIIosRefresh                          = 0xf49c,

    /// Identifier: "ion-ios-refresh-empty"
    IFIIIosRefreshEmpty                     = 0xf49a,

    /// Identifier: "ion-ios-refresh-outline"
    IFIIIosRefreshOutline                   = 0xf49b,

    /// Identifier: "ion-ios-reload"
    IFIIIosReload                           = 0xf49d,

    /// Identifier: "ion-ios-reverse-camera"
    IFIIIosReverseCamera                    = 0xf49f,

    /// Identifier: "ion-ios-reverse-camera-outline"
    IFIIIosReverseCameraOutline             = 0xf49e,

    /// Identifier: "ion-ios-rewind"
    IFIIIosRewind                           = 0xf4a1,

    /// Identifier: "ion-ios-rewind-outline"
    IFIIIosRewindOutline                    = 0xf4a0,

    /// Identifier: "ion-ios-rose"
    IFIIIosRose                             = 0xf4a3,

    /// Identifier: "ion-ios-rose-outline"
    IFIIIosRoseOutline                      = 0xf4a2,

    /// Identifier: "ion-ios-search"
    IFIIIosSearch                           = 0xf4a5,

    /// Identifier: "ion-ios-search-strong"
    IFIIIosSearchStrong                     = 0xf4a4,

    /// Identifier: "ion-ios-settings"
    IFIIIosSettings                         = 0xf4a7,

    /// Identifier: "ion-ios-settings-strong"
    IFIIIosSettingsStrong                   = 0xf4a6,

    /// Identifier: "ion-ios-shuffle"
    IFIIIosShuffle                          = 0xf4a9,

    /// Identifier: "ion-ios-shuffle-strong"
    IFIIIosShuffleStrong                    = 0xf4a8,

    /// Identifier: "ion-ios-skipbackward"
    IFIIIosSkipbackward                     = 0xf4ab,

    /// Identifier: "ion-ios-skipbackward-outline"
    IFIIIosSkipbackwardOutline              = 0xf4aa,

    /// Identifier: "ion-ios-skipforward"
    IFIIIosSkipforward                      = 0xf4ad,

    /// Identifier: "ion-ios-skipforward-outline"
    IFIIIosSkipforwardOutline               = 0xf4ac,

    /// Identifier: "ion-ios-snowy"
    IFIIIosSnowy                            = 0xf4ae,

    /// Identifier: "ion-ios-speedometer"
    IFIIIosSpeedometer                      = 0xf4b0,

    /// Identifier: "ion-ios-speedometer-outline"
    IFIIIosSpeedometerOutline               = 0xf4af,

    /// Identifier: "ion-ios-star"
    IFIIIosStar                             = 0xf4b3,

    /// Identifier: "ion-ios-star-half"
    IFIIIosStarHalf                         = 0xf4b1,

    /// Identifier: "ion-ios-star-outline"
    IFIIIosStarOutline                      = 0xf4b2,

    /// Identifier: "ion-ios-stopwatch"
    IFIIIosStopwatch                        = 0xf4b5,

    /// Identifier: "ion-ios-stopwatch-outline"
    IFIIIosStopwatchOutline                 = 0xf4b4,

    /// Identifier: "ion-ios-sunny"
    IFIIIosSunny                            = 0xf4b7,

    /// Identifier: "ion-ios-sunny-outline"
    IFIIIosSunnyOutline                     = 0xf4b6,

    /// Identifier: "ion-ios-telephone"
    IFIIIosTelephone                        = 0xf4b9,

    /// Identifier: "ion-ios-telephone-outline"
    IFIIIosTelephoneOutline                 = 0xf4b8,

    /// Identifier: "ion-ios-tennisball"
    IFIIIosTennisball                       = 0xf4bb,

    /// Identifier: "ion-ios-tennisball-outline"
    IFIIIosTennisballOutline                = 0xf4ba,

    /// Identifier: "ion-ios-thunderstorm"
    IFIIIosThunderstorm                     = 0xf4bd,

    /// Identifier: "ion-ios-thunderstorm-outline"
    IFIIIosThunderstormOutline              = 0xf4bc,

    /// Identifier: "ion-ios-time"
    IFIIIosTime                             = 0xf4bf,

    /// Identifier: "ion-ios-time-outline"
    IFIIIosTimeOutline                      = 0xf4be,

    /// Identifier: "ion-ios-timer"
    IFIIIosTimer                            = 0xf4c1,

    /// Identifier: "ion-ios-timer-outline"
    IFIIIosTimerOutline                     = 0xf4c0,

    /// Identifier: "ion-ios-toggle"
    IFIIIosToggle                           = 0xf4c3,

    /// Identifier: "ion-ios-toggle-outline"
    IFIIIosToggleOutline                    = 0xf4c2,

    /// Identifier: "ion-ios-trash"
    IFIIIosTrash                            = 0xf4c5,

    /// Identifier: "ion-ios-trash-outline"
    IFIIIosTrashOutline                     = 0xf4c4,

    /// Identifier: "ion-ios-undo"
    IFIIIosUndo                             = 0xf4c7,

    /// Identifier: "ion-ios-undo-outline"
    IFIIIosUndoOutline                      = 0xf4c6,

    /// Identifier: "ion-ios-unlocked"
    IFIIIosUnlocked                         = 0xf4c9,

    /// Identifier: "ion-ios-unlocked-outline"
    IFIIIosUnlockedOutline                  = 0xf4c8,

    /// Identifier: "ion-ios-upload"
    IFIIIosUpload                           = 0xf4cb,

    /// Identifier: "ion-ios-upload-outline"
    IFIIIosUploadOutline                    = 0xf4ca,

    /// Identifier: "ion-ios-videocam"
    IFIIIosVideocam                         = 0xf4cd,

    /// Identifier: "ion-ios-videocam-outline"
    IFIIIosVideocamOutline                  = 0xf4cc,

    /// Identifier: "ion-ios-volume-high"
    IFIIIosVolumeHigh                       = 0xf4ce,

    /// Identifier: "ion-ios-volume-low"
    IFIIIosVolumeLow                        = 0xf4cf,

    /// Identifier: "ion-ios-wineglass"
    IFIIIosWineglass                        = 0xf4d1,

    /// Identifier: "ion-ios-wineglass-outline"
    IFIIIosWineglassOutline                 = 0xf4d0,

    /// Identifier: "ion-ios-world"
    IFIIIosWorld                            = 0xf4d3,

    /// Identifier: "ion-ios-world-outline"
    IFIIIosWorldOutline                     = 0xf4d2,

    /// Identifier: "ion-ipad"
    IFIIIpad                                = 0xf1f9,

    /// Identifier: "ion-iphone"
    IFIIIphone                              = 0xf1fa,

    /// Identifier: "ion-ipod"
    IFIIIpod                                = 0xf1fb,

    /// Identifier: "ion-jet"
    IFIIJet                                 = 0xf295,

    /// Identifier: "ion-key"
    IFIIKey                                 = 0xf296,

    /// Identifier: "ion-knife"
    IFIIKnife                               = 0xf297,

    /// Identifier: "ion-laptop"
    IFIILaptop                              = 0xf1fc,

    /// Identifier: "ion-leaf"
    IFIILeaf                                = 0xf1fd,

    /// Identifier: "ion-levels"
    IFIILevels                              = 0xf298,

    /// Identifier: "ion-lightbulb"
    IFIILightbulb                           = 0xf299,

    /// Identifier: "ion-link"
    IFIILink                                = 0xf1fe,

    /// Identifier: "ion-load-a"
    IFIILoadA                               = 0xf29a,

    /// Identifier: "ion-load-b"
    IFIILoadB                               = 0xf29b,

    /// Identifier: "ion-load-c"
    IFIILoadC                               = 0xf29c,

    /// Identifier: "ion-load-d"
    IFIILoadD                               = 0xf29d,

    /// Identifier: "ion-location"
    IFIILocation                            = 0xf1ff,

    /// Identifier: "ion-lock-combination"
    IFIILockCombination                     = 0xf4d4,

    /// Identifier: "ion-locked"
    IFIILocked                              = 0xf200,

    /// Identifier: "ion-log-in"
    IFIILogIn                               = 0xf29e,

    /// Identifier: "ion-log-out"
    IFIILogOut                              = 0xf29f,

    /// Identifier: "ion-loop"
    IFIILoop                                = 0xf201,

    /// Identifier: "ion-magnet"
    IFIIMagnet                              = 0xf2a0,

    /// Identifier: "ion-male"
    IFIIMale                                = 0xf2a1,

    /// Identifier: "ion-man"
    IFIIMan                                 = 0xf202,

    /// Identifier: "ion-map"
    IFIIMap                                 = 0xf203,

    /// Identifier: "ion-medkit"
    IFIIMedkit                              = 0xf2a2,

    /// Identifier: "ion-merge"
    IFIIMerge                               = 0xf33f,

    /// Identifier: "ion-mic-a"
    IFIIMicA                                = 0xf204,

    /// Identifier: "ion-mic-b"
    IFIIMicB                                = 0xf205,

    /// Identifier: "ion-mic-c"
    IFIIMicC                                = 0xf206,

    /// Identifier: "ion-minus"
    IFIIMinus                               = 0xf209,

    /// Identifier: "ion-minus-circled"
    IFIIMinusCircled                        = 0xf207,

    /// Identifier: "ion-minus-round"
    IFIIMinusRound                          = 0xf208,

    /// Identifier: "ion-model-s"
    IFIIModelS                              = 0xf2c1,

    /// Identifier: "ion-monitor"
    IFIIMonitor                             = 0xf20a,

    /// Identifier: "ion-more"
    IFIIMore                                = 0xf20b,

    /// Identifier: "ion-mouse"
    IFIIMouse                               = 0xf340,

    /// Identifier: "ion-music-note"
    IFIIMusicNote                           = 0xf20c,

    /// Identifier: "ion-navicon"
    IFIINavicon                             = 0xf20e,

    /// Identifier: "ion-navicon-round"
    IFIINaviconRound                        = 0xf20d,

    /// Identifier: "ion-navigate"
    IFIINavigate                            = 0xf2a3,

    /// Identifier: "ion-network"
    IFIINetwork                             = 0xf341,

    /// Identifier: "ion-no-smoking"
    IFIINoSmoking                           = 0xf2c2,

    /// Identifier: "ion-nuclear"
    IFIINuclear                             = 0xf2a4,

    /// Identifier: "ion-outlet"
    IFIIOutlet                              = 0xf342,

    /// Identifier: "ion-paintbrush"
    IFIIPaintbrush                          = 0xf4d5,

    /// Identifier: "ion-paintbucket"
    IFIIPaintbucket                         = 0xf4d6,

    /// Identifier: "ion-paper-airplane"
    IFIIPaperAirplane                       = 0xf2c3,

    /// Identifier: "ion-paperclip"
    IFIIPaperclip                           = 0xf20f,

    /// Identifier: "ion-pause"
    IFIIPause                               = 0xf210,

    /// Identifier: "ion-person"
    IFIIPerson                              = 0xf213,

    /// Identifier: "ion-person-add"
    IFIIPersonAdd                           = 0xf211,

    /// Identifier: "ion-person-stalker"
    IFIIPersonStalker                       = 0xf212,

    /// Identifier: "ion-pie-graph"
    IFIIPieGraph                            = 0xf2a5,

    /// Identifier: "ion-pin"
    IFIIPin                                 = 0xf2a6,

    /// Identifier: "ion-pinpoint"
    IFIIPinpoint                            = 0xf2a7,

    /// Identifier: "ion-pizza"
    IFIIPizza                               = 0xf2a8,

    /// Identifier: "ion-plane"
    IFIIPlane                               = 0xf214,

    /// Identifier: "ion-planet"
    IFIIPlanet                              = 0xf343,

    /// Identifier: "ion-play"
    IFIIPlay                                = 0xf215,

    /// Identifier: "ion-playstation"
    IFIIPlaystation                         = 0xf30a,

    /// Identifier: "ion-plus"
    IFIIPlus                                = 0xf218,

    /// Identifier: "ion-plus-circled"
    IFIIPlusCircled                         = 0xf216,

    /// Identifier: "ion-plus-round"
    IFIIPlusRound                           = 0xf217,

    /// Identifier: "ion-podium"
    IFIIPodium                              = 0xf344,

    /// Identifier: "ion-pound"
    IFIIPound                               = 0xf219,

    /// Identifier: "ion-power"
    IFIIPower                               = 0xf2a9,

    /// Identifier: "ion-pricetag"
    IFIIPricetag                            = 0xf2aa,

    /// Identifier: "ion-pricetags"
    IFIIPricetags                           = 0xf2ab,

    /// Identifier: "ion-printer"
    IFIIPrinter                             = 0xf21a,

    /// Identifier: "ion-pull-request"
    IFIIPullRequest                         = 0xf345,

    /// Identifier: "ion-qr-scanner"
    IFIIQrScanner                           = 0xf346,

    /// Identifier: "ion-quote"
    IFIIQuote                               = 0xf347,

    /// Identifier: "ion-radio-waves"
    IFIIRadioWaves                          = 0xf2ac,

    /// Identifier: "ion-record"
    IFIIRecord                              = 0xf21b,

    /// Identifier: "ion-refresh"
    IFIIRefresh                             = 0xf21c,

    /// Identifier: "ion-reply"
    IFIIReply                               = 0xf21e,

    /// Identifier: "ion-reply-all"
    IFIIReplyAll                            = 0xf21d,

    /// Identifier: "ion-ribbon-a"
    IFIIRibbonA                             = 0xf348,

    /// Identifier: "ion-ribbon-b"
    IFIIRibbonB                             = 0xf349,

    /// Identifier: "ion-sad"
    IFIISad                                 = 0xf34a,

    /// Identifier: "ion-sad-outline"
    IFIISadOutline                          = 0xf4d7,

    /// Identifier: "ion-scissors"
    IFIIScissors                            = 0xf34b,

    /// Identifier: "ion-search"
    IFIISearch                              = 0xf21f,

    /// Identifier: "ion-settings"
    IFIISettings                            = 0xf2ad,

    /// Identifier: "ion-share"
    IFIIShare                               = 0xf220,

    /// Identifier: "ion-shuffle"
    IFIIShuffle                             = 0xf221,

    /// Identifier: "ion-skip-backward"
    IFIISkipBackward                        = 0xf222,

    /// Identifier: "ion-skip-forward"
    IFIISkipForward                         = 0xf223,

    /// Identifier: "ion-social-android"
    IFIISocialAndroid                       = 0xf225,

    /// Identifier: "ion-social-android-outline"
    IFIISocialAndroidOutline                = 0xf224,

    /// Identifier: "ion-social-angular"
    IFIISocialAngular                       = 0xf4d9,

    /// Identifier: "ion-social-angular-outline"
    IFIISocialAngularOutline                = 0xf4d8,

    /// Identifier: "ion-social-apple"
    IFIISocialApple                         = 0xf227,

    /// Identifier: "ion-social-apple-outline"
    IFIISocialAppleOutline                  = 0xf226,

    /// Identifier: "ion-social-bitcoin"
    IFIISocialBitcoin                       = 0xf2af,

    /// Identifier: "ion-social-bitcoin-outline"
    IFIISocialBitcoinOutline                = 0xf2ae,

    /// Identifier: "ion-social-buffer"
    IFIISocialBuffer                        = 0xf229,

    /// Identifier: "ion-social-buffer-outline"
    IFIISocialBufferOutline                 = 0xf228,

    /// Identifier: "ion-social-chrome"
    IFIISocialChrome                        = 0xf4db,

    /// Identifier: "ion-social-chrome-outline"
    IFIISocialChromeOutline                 = 0xf4da,

    /// Identifier: "ion-social-codepen"
    IFIISocialCodepen                       = 0xf4dd,

    /// Identifier: "ion-social-codepen-outline"
    IFIISocialCodepenOutline                = 0xf4dc,

    /// Identifier: "ion-social-css3"
    IFIISocialCss3                          = 0xf4df,

    /// Identifier: "ion-social-css3-outline"
    IFIISocialCss3Outline                   = 0xf4de,

    /// Identifier: "ion-social-designernews"
    IFIISocialDesignernews                  = 0xf22b,

    /// Identifier: "ion-social-designernews-outline"
    IFIISocialDesignernewsOutline           = 0xf22a,

    /// Identifier: "ion-social-dribbble"
    IFIISocialDribbble                      = 0xf22d,

    /// Identifier: "ion-social-dribbble-outline"
    IFIISocialDribbbleOutline               = 0xf22c,

    /// Identifier: "ion-social-dropbox"
    IFIISocialDropbox                       = 0xf22f,

    /// Identifier: "ion-social-dropbox-outline"
    IFIISocialDropboxOutline                = 0xf22e,

    /// Identifier: "ion-social-euro"
    IFIISocialEuro                          = 0xf4e1,

    /// Identifier: "ion-social-euro-outline"
    IFIISocialEuroOutline                   = 0xf4e0,

    /// Identifier: "ion-social-facebook"
    IFIISocialFacebook                      = 0xf231,

    /// Identifier: "ion-social-facebook-outline"
    IFIISocialFacebookOutline               = 0xf230,

    /// Identifier: "ion-social-foursquare"
    IFIISocialFoursquare                    = 0xf34d,

    /// Identifier: "ion-social-foursquare-outline"
    IFIISocialFoursquareOutline             = 0xf34c,

    /// Identifier: "ion-social-freebsd-devil"
    IFIISocialFreebsdDevil                  = 0xf2c4,

    /// Identifier: "ion-social-github"
    IFIISocialGithub                        = 0xf233,

    /// Identifier: "ion-social-github-outline"
    IFIISocialGithubOutline                 = 0xf232,

    /// Identifier: "ion-social-google"
    IFIISocialGoogle                        = 0xf34f,

    /// Identifier: "ion-social-google-outline"
    IFIISocialGoogleOutline                 = 0xf34e,

    /// Identifier: "ion-social-googleplus"
    IFIISocialGoogleplus                    = 0xf235,

    /// Identifier: "ion-social-googleplus-outline"
    IFIISocialGoogleplusOutline             = 0xf234,

    /// Identifier: "ion-social-hackernews"
    IFIISocialHackernews                    = 0xf237,

    /// Identifier: "ion-social-hackernews-outline"
    IFIISocialHackernewsOutline             = 0xf236,

    /// Identifier: "ion-social-html5"
    IFIISocialHtml5                         = 0xf4e3,

    /// Identifier: "ion-social-html5-outline"
    IFIISocialHtml5Outline                  = 0xf4e2,

    /// Identifier: "ion-social-instagram"
    IFIISocialInstagram                     = 0xf351,

    /// Identifier: "ion-social-instagram-outline"
    IFIISocialInstagramOutline              = 0xf350,

    /// Identifier: "ion-social-javascript"
    IFIISocialJavascript                    = 0xf4e5,

    /// Identifier: "ion-social-javascript-outline"
    IFIISocialJavascriptOutline             = 0xf4e4,

    /// Identifier: "ion-social-linkedin"
    IFIISocialLinkedin                      = 0xf239,

    /// Identifier: "ion-social-linkedin-outline"
    IFIISocialLinkedinOutline               = 0xf238,

    /// Identifier: "ion-social-markdown"
    IFIISocialMarkdown                      = 0xf4e6,

    /// Identifier: "ion-social-nodejs"
    IFIISocialNodejs                        = 0xf4e7,

    /// Identifier: "ion-social-octocat"
    IFIISocialOctocat                       = 0xf4e8,

    /// Identifier: "ion-social-pinterest"
    IFIISocialPinterest                     = 0xf2b1,

    /// Identifier: "ion-social-pinterest-outline"
    IFIISocialPinterestOutline              = 0xf2b0,

    /// Identifier: "ion-social-python"
    IFIISocialPython                        = 0xf4e9,

    /// Identifier: "ion-social-reddit"
    IFIISocialReddit                        = 0xf23b,

    /// Identifier: "ion-social-reddit-outline"
    IFIISocialRedditOutline                 = 0xf23a,

    /// Identifier: "ion-social-rss"
    IFIISocialRss                           = 0xf23d,

    /// Identifier: "ion-social-rss-outline"
    IFIISocialRssOutline                    = 0xf23c,

    /// Identifier: "ion-social-sass"
    IFIISocialSass                          = 0xf4ea,

    /// Identifier: "ion-social-skype"
    IFIISocialSkype                         = 0xf23f,

    /// Identifier: "ion-social-skype-outline"
    IFIISocialSkypeOutline                  = 0xf23e,

    /// Identifier: "ion-social-snapchat"
    IFIISocialSnapchat                      = 0xf4ec,

    /// Identifier: "ion-social-snapchat-outline"
    IFIISocialSnapchatOutline               = 0xf4eb,

    /// Identifier: "ion-social-tumblr"
    IFIISocialTumblr                        = 0xf241,

    /// Identifier: "ion-social-tumblr-outline"
    IFIISocialTumblrOutline                 = 0xf240,

    /// Identifier: "ion-social-tux"
    IFIISocialTux                           = 0xf2c5,

    /// Identifier: "ion-social-twitch"
    IFIISocialTwitch                        = 0xf4ee,

    /// Identifier: "ion-social-twitch-outline"
    IFIISocialTwitchOutline                 = 0xf4ed,

    /// Identifier: "ion-social-twitter"
    IFIISocialTwitter                       = 0xf243,

    /// Identifier: "ion-social-twitter-outline"
    IFIISocialTwitterOutline                = 0xf242,

    /// Identifier: "ion-social-usd"
    IFIISocialUsd                           = 0xf353,

    /// Identifier: "ion-social-usd-outline"
    IFIISocialUsdOutline                    = 0xf352,

    /// Identifier: "ion-social-vimeo"
    IFIISocialVimeo                         = 0xf245,

    /// Identifier: "ion-social-vimeo-outline"
    IFIISocialVimeoOutline                  = 0xf244,

    /// Identifier: "ion-social-whatsapp"
    IFIISocialWhatsapp                      = 0xf4f0,

    /// Identifier: "ion-social-whatsapp-outline"
    IFIISocialWhatsappOutline               = 0xf4ef,

    /// Identifier: "ion-social-windows"
    IFIISocialWindows                       = 0xf247,

    /// Identifier: "ion-social-windows-outline"
    IFIISocialWindowsOutline                = 0xf246,

    /// Identifier: "ion-social-wordpress"
    IFIISocialWordpress                     = 0xf249,

    /// Identifier: "ion-social-wordpress-outline"
    IFIISocialWordpressOutline              = 0xf248,

    /// Identifier: "ion-social-yahoo"
    IFIISocialYahoo                         = 0xf24b,

    /// Identifier: "ion-social-yahoo-outline"
    IFIISocialYahooOutline                  = 0xf24a,

    /// Identifier: "ion-social-yen"
    IFIISocialYen                           = 0xf4f2,

    /// Identifier: "ion-social-yen-outline"
    IFIISocialYenOutline                    = 0xf4f1,

    /// Identifier: "ion-social-youtube"
    IFIISocialYoutube                       = 0xf24d,

    /// Identifier: "ion-social-youtube-outline"
    IFIISocialYoutubeOutline                = 0xf24c,

    /// Identifier: "ion-soup-can"
    IFIISoupCan                             = 0xf4f4,

    /// Identifier: "ion-soup-can-outline"
    IFIISoupCanOutline                      = 0xf4f3,

    /// Identifier: "ion-speakerphone"
    IFIISpeakerphone                        = 0xf2b2,

    /// Identifier: "ion-speedometer"
    IFIISpeedometer                         = 0xf2b3,

    /// Identifier: "ion-spoon"
    IFIISpoon                               = 0xf2b4,

    /// Identifier: "ion-star"
    IFIIStar                                = 0xf24e,

    /// Identifier: "ion-stats-bars"
    IFIIStatsBars                           = 0xf2b5,

    /// Identifier: "ion-steam"
    IFIISteam                               = 0xf30b,

    /// Identifier: "ion-stop"
    IFIIStop                                = 0xf24f,

    /// Identifier: "ion-thermometer"
    IFIIThermometer                         = 0xf2b6,

    /// Identifier: "ion-thumbsdown"
    IFIIThumbsdown                          = 0xf250,

    /// Identifier: "ion-thumbsup"
    IFIIThumbsup                            = 0xf251,

    /// Identifier: "ion-toggle"
    IFIIToggle                              = 0xf355,

    /// Identifier: "ion-toggle-filled"
    IFIIToggleFilled                        = 0xf354,

    /// Identifier: "ion-transgender"
    IFIITransgender                         = 0xf4f5,

    /// Identifier: "ion-trash-a"
    IFIITrashA                              = 0xf252,

    /// Identifier: "ion-trash-b"
    IFIITrashB                              = 0xf253,

    /// Identifier: "ion-trophy"
    IFIITrophy                              = 0xf356,

    /// Identifier: "ion-tshirt"
    IFIITshirt                              = 0xf4f7,

    /// Identifier: "ion-tshirt-outline"
    IFIITshirtOutline                       = 0xf4f6,

    /// Identifier: "ion-umbrella"
    IFIIUmbrella                            = 0xf2b7,

    /// Identifier: "ion-university"
    IFIIUniversity                          = 0xf357,

    /// Identifier: "ion-unlocked"
    IFIIUnlocked                            = 0xf254,

    /// Identifier: "ion-upload"
    IFIIUpload                              = 0xf255,

    /// Identifier: "ion-usb"
    IFIIUsb                                 = 0xf2b8,

    /// Identifier: "ion-videocamera"
    IFIIVideocamera                         = 0xf256,

    /// Identifier: "ion-volume-high"
    IFIIVolumeHigh                          = 0xf257,

    /// Identifier: "ion-volume-low"
    IFIIVolumeLow                           = 0xf258,

    /// Identifier: "ion-volume-medium"
    IFIIVolumeMedium                        = 0xf259,

    /// Identifier: "ion-volume-mute"
    IFIIVolumeMute                          = 0xf25a,

    /// Identifier: "ion-wand"
    IFIIWand                                = 0xf358,

    /// Identifier: "ion-waterdrop"
    IFIIWaterdrop                           = 0xf25b,

    /// Identifier: "ion-wifi"
    IFIIWifi                                = 0xf25c,

    /// Identifier: "ion-wineglass"
    IFIIWineglass                           = 0xf2b9,

    /// Identifier: "ion-woman"
    IFIIWoman                               = 0xf25d,

    /// Identifier: "ion-wrench"
    IFIIWrench                              = 0xf2ba,

    /// Identifier: "ion-xbox"
    IFIIXbox                                = 0xf30c,

};

/**
 * Ionicons v2.0.1 http://ionicons.com
 */
@interface IFIonicons : IFIcon
@end
