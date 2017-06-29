#import "IFIcon.h"

/**
 * MaterialDesignIcons icon types.
 */
typedef NS_ENUM(IFIconType, IFMaterialDesignIconsType) {

    /// Identifier: "mdi-access-point"
    IFMDIAccessPoint                         = 0xF002,

    /// Identifier: "mdi-access-point-network"
    IFMDIAccessPointNetwork                  = 0xF003,

    /// Identifier: "mdi-account"
    IFMDIAccount                             = 0xF004,

    /// Identifier: "mdi-account-alert"
    IFMDIAccountAlert                        = 0xF005,

    /// Identifier: "mdi-account-box"
    IFMDIAccountBox                          = 0xF006,

    /// Identifier: "mdi-account-box-outline"
    IFMDIAccountBoxOutline                   = 0xF007,

    /// Identifier: "mdi-account-card-details"
    IFMDIAccountCardDetails                  = 0xF5D2,

    /// Identifier: "mdi-account-check"
    IFMDIAccountCheck                        = 0xF008,

    /// Identifier: "mdi-account-circle"
    IFMDIAccountCircle                       = 0xF009,

    /// Identifier: "mdi-account-convert"
    IFMDIAccountConvert                      = 0xF00A,

    /// Identifier: "mdi-account-key"
    IFMDIAccountKey                          = 0xF00B,

    /// Identifier: "mdi-account-location"
    IFMDIAccountLocation                     = 0xF00C,

    /// Identifier: "mdi-account-minus"
    IFMDIAccountMinus                        = 0xF00D,

    /// Identifier: "mdi-account-multiple"
    IFMDIAccountMultiple                     = 0xF00E,

    /// Identifier: "mdi-account-multiple-minus"
    IFMDIAccountMultipleMinus                = 0xF5D3,

    /// Identifier: "mdi-account-multiple-outline"
    IFMDIAccountMultipleOutline              = 0xF00F,

    /// Identifier: "mdi-account-multiple-plus"
    IFMDIAccountMultiplePlus                 = 0xF010,

    /// Identifier: "mdi-account-network"
    IFMDIAccountNetwork                      = 0xF011,

    /// Identifier: "mdi-account-off"
    IFMDIAccountOff                          = 0xF012,

    /// Identifier: "mdi-account-outline"
    IFMDIAccountOutline                      = 0xF013,

    /// Identifier: "mdi-account-plus"
    IFMDIAccountPlus                         = 0xF014,

    /// Identifier: "mdi-account-remove"
    IFMDIAccountRemove                       = 0xF015,

    /// Identifier: "mdi-account-search"
    IFMDIAccountSearch                       = 0xF016,

    /// Identifier: "mdi-account-settings"
    IFMDIAccountSettings                     = 0xF630,

    /// Identifier: "mdi-account-settings-variant"
    IFMDIAccountSettingsVariant              = 0xF631,

    /// Identifier: "mdi-account-star"
    IFMDIAccountStar                         = 0xF017,

    /// Identifier: "mdi-account-star-variant"
    IFMDIAccountStarVariant                  = 0xF018,

    /// Identifier: "mdi-account-switch"
    IFMDIAccountSwitch                       = 0xF019,

    /// Identifier: "mdi-adjust"
    IFMDIAdjust                              = 0xF01A,

    /// Identifier: "mdi-air-conditioner"
    IFMDIAirConditioner                      = 0xF01B,

    /// Identifier: "mdi-airballoon"
    IFMDIAirballoon                          = 0xF01C,

    /// Identifier: "mdi-airplane"
    IFMDIAirplane                            = 0xF01D,

    /// Identifier: "mdi-airplane-landing"
    IFMDIAirplaneLanding                     = 0xF5D4,

    /// Identifier: "mdi-airplane-off"
    IFMDIAirplaneOff                         = 0xF01E,

    /// Identifier: "mdi-airplane-takeoff"
    IFMDIAirplaneTakeoff                     = 0xF5D5,

    /// Identifier: "mdi-airplay"
    IFMDIAirplay                             = 0xF01F,

    /// Identifier: "mdi-alarm"
    IFMDIAlarm                               = 0xF020,

    /// Identifier: "mdi-alarm-check"
    IFMDIAlarmCheck                          = 0xF021,

    /// Identifier: "mdi-alarm-multiple"
    IFMDIAlarmMultiple                       = 0xF022,

    /// Identifier: "mdi-alarm-off"
    IFMDIAlarmOff                            = 0xF023,

    /// Identifier: "mdi-alarm-plus"
    IFMDIAlarmPlus                           = 0xF024,

    /// Identifier: "mdi-album"
    IFMDIAlbum                               = 0xF025,

    /// Identifier: "mdi-alert"
    IFMDIAlert                               = 0xF026,

    /// Identifier: "mdi-alert-box"
    IFMDIAlertBox                            = 0xF027,

    /// Identifier: "mdi-alert-circle"
    IFMDIAlertCircle                         = 0xF028,

    /// Identifier: "mdi-alert-circle-outline"
    IFMDIAlertCircleOutline                  = 0xF5D6,

    /// Identifier: "mdi-alert-octagon"
    IFMDIAlertOctagon                        = 0xF029,

    /// Identifier: "mdi-alert-outline"
    IFMDIAlertOutline                        = 0xF02A,

    /// Identifier: "mdi-alpha"
    IFMDIAlpha                               = 0xF02B,

    /// Identifier: "mdi-alphabetical"
    IFMDIAlphabetical                        = 0xF02C,

    /// Identifier: "mdi-altimeter"
    IFMDIAltimeter                           = 0xF5D7,

    /// Identifier: "mdi-amazon"
    IFMDIAmazon                              = 0xF02D,

    /// Identifier: "mdi-amazon-clouddrive"
    IFMDIAmazonClouddrive                    = 0xF02E,

    /// Identifier: "mdi-ambulance"
    IFMDIAmbulance                           = 0xF02F,

    /// Identifier: "mdi-amplifier"
    IFMDIAmplifier                           = 0xF030,

    /// Identifier: "mdi-anchor"
    IFMDIAnchor                              = 0xF031,

    /// Identifier: "mdi-android"
    IFMDIAndroid                             = 0xF032,

    /// Identifier: "mdi-android-debug-bridge"
    IFMDIAndroidDebugBridge                  = 0xF033,

    /// Identifier: "mdi-android-studio"
    IFMDIAndroidStudio                       = 0xF034,

    /// Identifier: "mdi-animation"
    IFMDIAnimation                           = 0xF5D8,

    /// Identifier: "mdi-apple"
    IFMDIApple                               = 0xF035,

    /// Identifier: "mdi-apple-finder"
    IFMDIAppleFinder                         = 0xF036,

    /// Identifier: "mdi-apple-ios"
    IFMDIAppleIos                            = 0xF037,

    /// Identifier: "mdi-apple-keyboard-caps"
    IFMDIAppleKeyboardCaps                   = 0xF632,

    /// Identifier: "mdi-apple-keyboard-command"
    IFMDIAppleKeyboardCommand                = 0xF633,

    /// Identifier: "mdi-apple-keyboard-control"
    IFMDIAppleKeyboardControl                = 0xF634,

    /// Identifier: "mdi-apple-keyboard-option"
    IFMDIAppleKeyboardOption                 = 0xF635,

    /// Identifier: "mdi-apple-keyboard-shift"
    IFMDIAppleKeyboardShift                  = 0xF636,

    /// Identifier: "mdi-apple-mobileme"
    IFMDIAppleMobileme                       = 0xF038,

    /// Identifier: "mdi-apple-safari"
    IFMDIAppleSafari                         = 0xF039,

    /// Identifier: "mdi-application"
    IFMDIApplication                         = 0xF614,

    /// Identifier: "mdi-appnet"
    IFMDIAppnet                              = 0xF03A,

    /// Identifier: "mdi-apps"
    IFMDIApps                                = 0xF03B,

    /// Identifier: "mdi-archive"
    IFMDIArchive                             = 0xF03C,

    /// Identifier: "mdi-arrange-bring-forward"
    IFMDIArrangeBringForward                 = 0xF03D,

    /// Identifier: "mdi-arrange-bring-to-front"
    IFMDIArrangeBringToFront                 = 0xF03E,

    /// Identifier: "mdi-arrange-send-backward"
    IFMDIArrangeSendBackward                 = 0xF03F,

    /// Identifier: "mdi-arrange-send-to-back"
    IFMDIArrangeSendToBack                   = 0xF040,

    /// Identifier: "mdi-arrow-all"
    IFMDIArrowAll                            = 0xF041,

    /// Identifier: "mdi-arrow-bottom-left"
    IFMDIArrowBottomLeft                     = 0xF042,

    /// Identifier: "mdi-arrow-bottom-right"
    IFMDIArrowBottomRight                    = 0xF043,

    /// Identifier: "mdi-arrow-compress"
    IFMDIArrowCompress                       = 0xF615,

    /// Identifier: "mdi-arrow-compress-all"
    IFMDIArrowCompressAll                    = 0xF044,

    /// Identifier: "mdi-arrow-down"
    IFMDIArrowDown                           = 0xF045,

    /// Identifier: "mdi-arrow-down-bold"
    IFMDIArrowDownBold                       = 0xF046,

    /// Identifier: "mdi-arrow-down-bold-circle"
    IFMDIArrowDownBoldCircle                 = 0xF047,

    /// Identifier: "mdi-arrow-down-bold-circle-outline"
    IFMDIArrowDownBoldCircleOutline          = 0xF048,

    /// Identifier: "mdi-arrow-down-bold-hexagon-outline"
    IFMDIArrowDownBoldHexagonOutline         = 0xF049,

    /// Identifier: "mdi-arrow-down-drop-circle"
    IFMDIArrowDownDropCircle                 = 0xF04A,

    /// Identifier: "mdi-arrow-down-drop-circle-outline"
    IFMDIArrowDownDropCircleOutline          = 0xF04B,

    /// Identifier: "mdi-arrow-expand"
    IFMDIArrowExpand                         = 0xF616,

    /// Identifier: "mdi-arrow-expand-all"
    IFMDIArrowExpandAll                      = 0xF04C,

    /// Identifier: "mdi-arrow-left"
    IFMDIArrowLeft                           = 0xF04D,

    /// Identifier: "mdi-arrow-left-bold"
    IFMDIArrowLeftBold                       = 0xF04E,

    /// Identifier: "mdi-arrow-left-bold-circle"
    IFMDIArrowLeftBoldCircle                 = 0xF04F,

    /// Identifier: "mdi-arrow-left-bold-circle-outline"
    IFMDIArrowLeftBoldCircleOutline          = 0xF050,

    /// Identifier: "mdi-arrow-left-bold-hexagon-outline"
    IFMDIArrowLeftBoldHexagonOutline         = 0xF051,

    /// Identifier: "mdi-arrow-left-drop-circle"
    IFMDIArrowLeftDropCircle                 = 0xF052,

    /// Identifier: "mdi-arrow-left-drop-circle-outline"
    IFMDIArrowLeftDropCircleOutline          = 0xF053,

    /// Identifier: "mdi-arrow-right"
    IFMDIArrowRight                          = 0xF054,

    /// Identifier: "mdi-arrow-right-bold"
    IFMDIArrowRightBold                      = 0xF055,

    /// Identifier: "mdi-arrow-right-bold-circle"
    IFMDIArrowRightBoldCircle                = 0xF056,

    /// Identifier: "mdi-arrow-right-bold-circle-outline"
    IFMDIArrowRightBoldCircleOutline         = 0xF057,

    /// Identifier: "mdi-arrow-right-bold-hexagon-outline"
    IFMDIArrowRightBoldHexagonOutline        = 0xF058,

    /// Identifier: "mdi-arrow-right-drop-circle"
    IFMDIArrowRightDropCircle                = 0xF059,

    /// Identifier: "mdi-arrow-right-drop-circle-outline"
    IFMDIArrowRightDropCircleOutline         = 0xF05A,

    /// Identifier: "mdi-arrow-top-left"
    IFMDIArrowTopLeft                        = 0xF05B,

    /// Identifier: "mdi-arrow-top-right"
    IFMDIArrowTopRight                       = 0xF05C,

    /// Identifier: "mdi-arrow-up"
    IFMDIArrowUp                             = 0xF05D,

    /// Identifier: "mdi-arrow-up-bold"
    IFMDIArrowUpBold                         = 0xF05E,

    /// Identifier: "mdi-arrow-up-bold-circle"
    IFMDIArrowUpBoldCircle                   = 0xF05F,

    /// Identifier: "mdi-arrow-up-bold-circle-outline"
    IFMDIArrowUpBoldCircleOutline            = 0xF060,

    /// Identifier: "mdi-arrow-up-bold-hexagon-outline"
    IFMDIArrowUpBoldHexagonOutline           = 0xF061,

    /// Identifier: "mdi-arrow-up-drop-circle"
    IFMDIArrowUpDropCircle                   = 0xF062,

    /// Identifier: "mdi-arrow-up-drop-circle-outline"
    IFMDIArrowUpDropCircleOutline            = 0xF063,

    /// Identifier: "mdi-assistant"
    IFMDIAssistant                           = 0xF064,

    /// Identifier: "mdi-at"
    IFMDIAt                                  = 0xF065,

    /// Identifier: "mdi-attachment"
    IFMDIAttachment                          = 0xF066,

    /// Identifier: "mdi-audiobook"
    IFMDIAudiobook                           = 0xF067,

    /// Identifier: "mdi-auto-fix"
    IFMDIAutoFix                             = 0xF068,

    /// Identifier: "mdi-auto-upload"
    IFMDIAutoUpload                          = 0xF069,

    /// Identifier: "mdi-autorenew"
    IFMDIAutorenew                           = 0xF06A,

    /// Identifier: "mdi-av-timer"
    IFMDIAvTimer                             = 0xF06B,

    /// Identifier: "mdi-baby"
    IFMDIBaby                                = 0xF06C,

    /// Identifier: "mdi-backburger"
    IFMDIBackburger                          = 0xF06D,

    /// Identifier: "mdi-backspace"
    IFMDIBackspace                           = 0xF06E,

    /// Identifier: "mdi-backup-restore"
    IFMDIBackupRestore                       = 0xF06F,

    /// Identifier: "mdi-bank"
    IFMDIBank                                = 0xF070,

    /// Identifier: "mdi-barcode"
    IFMDIBarcode                             = 0xF071,

    /// Identifier: "mdi-barcode-scan"
    IFMDIBarcodeScan                         = 0xF072,

    /// Identifier: "mdi-barley"
    IFMDIBarley                              = 0xF073,

    /// Identifier: "mdi-barrel"
    IFMDIBarrel                              = 0xF074,

    /// Identifier: "mdi-basecamp"
    IFMDIBasecamp                            = 0xF075,

    /// Identifier: "mdi-basket"
    IFMDIBasket                              = 0xF076,

    /// Identifier: "mdi-basket-fill"
    IFMDIBasketFill                          = 0xF077,

    /// Identifier: "mdi-basket-unfill"
    IFMDIBasketUnfill                        = 0xF078,

    /// Identifier: "mdi-battery"
    IFMDIBattery                             = 0xF079,

    /// Identifier: "mdi-battery-10"
    IFMDIBattery10                           = 0xF07A,

    /// Identifier: "mdi-battery-20"
    IFMDIBattery20                           = 0xF07B,

    /// Identifier: "mdi-battery-30"
    IFMDIBattery30                           = 0xF07C,

    /// Identifier: "mdi-battery-40"
    IFMDIBattery40                           = 0xF07D,

    /// Identifier: "mdi-battery-50"
    IFMDIBattery50                           = 0xF07E,

    /// Identifier: "mdi-battery-60"
    IFMDIBattery60                           = 0xF07F,

    /// Identifier: "mdi-battery-70"
    IFMDIBattery70                           = 0xF080,

    /// Identifier: "mdi-battery-80"
    IFMDIBattery80                           = 0xF081,

    /// Identifier: "mdi-battery-90"
    IFMDIBattery90                           = 0xF082,

    /// Identifier: "mdi-battery-alert"
    IFMDIBatteryAlert                        = 0xF083,

    /// Identifier: "mdi-battery-charging"
    IFMDIBatteryCharging                     = 0xF084,

    /// Identifier: "mdi-battery-charging-100"
    IFMDIBatteryCharging100                  = 0xF085,

    /// Identifier: "mdi-battery-charging-20"
    IFMDIBatteryCharging20                   = 0xF086,

    /// Identifier: "mdi-battery-charging-30"
    IFMDIBatteryCharging30                   = 0xF087,

    /// Identifier: "mdi-battery-charging-40"
    IFMDIBatteryCharging40                   = 0xF088,

    /// Identifier: "mdi-battery-charging-60"
    IFMDIBatteryCharging60                   = 0xF089,

    /// Identifier: "mdi-battery-charging-80"
    IFMDIBatteryCharging80                   = 0xF08A,

    /// Identifier: "mdi-battery-charging-90"
    IFMDIBatteryCharging90                   = 0xF08B,

    /// Identifier: "mdi-battery-minus"
    IFMDIBatteryMinus                        = 0xF08C,

    /// Identifier: "mdi-battery-negative"
    IFMDIBatteryNegative                     = 0xF08D,

    /// Identifier: "mdi-battery-outline"
    IFMDIBatteryOutline                      = 0xF08E,

    /// Identifier: "mdi-battery-plus"
    IFMDIBatteryPlus                         = 0xF08F,

    /// Identifier: "mdi-battery-positive"
    IFMDIBatteryPositive                     = 0xF090,

    /// Identifier: "mdi-battery-unknown"
    IFMDIBatteryUnknown                      = 0xF091,

    /// Identifier: "mdi-beach"
    IFMDIBeach                               = 0xF092,

    /// Identifier: "mdi-beats"
    IFMDIBeats                               = 0xF097,

    /// Identifier: "mdi-beer"
    IFMDIBeer                                = 0xF098,

    /// Identifier: "mdi-behance"
    IFMDIBehance                             = 0xF099,

    /// Identifier: "mdi-bell"
    IFMDIBell                                = 0xF09A,

    /// Identifier: "mdi-bell-off"
    IFMDIBellOff                             = 0xF09B,

    /// Identifier: "mdi-bell-outline"
    IFMDIBellOutline                         = 0xF09C,

    /// Identifier: "mdi-bell-plus"
    IFMDIBellPlus                            = 0xF09D,

    /// Identifier: "mdi-bell-ring"
    IFMDIBellRing                            = 0xF09E,

    /// Identifier: "mdi-bell-ring-outline"
    IFMDIBellRingOutline                     = 0xF09F,

    /// Identifier: "mdi-bell-sleep"
    IFMDIBellSleep                           = 0xF0A0,

    /// Identifier: "mdi-beta"
    IFMDIBeta                                = 0xF0A1,

    /// Identifier: "mdi-bible"
    IFMDIBible                               = 0xF0A2,

    /// Identifier: "mdi-bike"
    IFMDIBike                                = 0xF0A3,

    /// Identifier: "mdi-bing"
    IFMDIBing                                = 0xF0A4,

    /// Identifier: "mdi-binoculars"
    IFMDIBinoculars                          = 0xF0A5,

    /// Identifier: "mdi-bio"
    IFMDIBio                                 = 0xF0A6,

    /// Identifier: "mdi-biohazard"
    IFMDIBiohazard                           = 0xF0A7,

    /// Identifier: "mdi-bitbucket"
    IFMDIBitbucket                           = 0xF0A8,

    /// Identifier: "mdi-black-mesa"
    IFMDIBlackMesa                           = 0xF0A9,

    /// Identifier: "mdi-blackberry"
    IFMDIBlackberry                          = 0xF0AA,

    /// Identifier: "mdi-blender"
    IFMDIBlender                             = 0xF0AB,

    /// Identifier: "mdi-blinds"
    IFMDIBlinds                              = 0xF0AC,

    /// Identifier: "mdi-block-helper"
    IFMDIBlockHelper                         = 0xF0AD,

    /// Identifier: "mdi-blogger"
    IFMDIBlogger                             = 0xF0AE,

    /// Identifier: "mdi-bluetooth"
    IFMDIBluetooth                           = 0xF0AF,

    /// Identifier: "mdi-bluetooth-audio"
    IFMDIBluetoothAudio                      = 0xF0B0,

    /// Identifier: "mdi-bluetooth-connect"
    IFMDIBluetoothConnect                    = 0xF0B1,

    /// Identifier: "mdi-bluetooth-off"
    IFMDIBluetoothOff                        = 0xF0B2,

    /// Identifier: "mdi-bluetooth-settings"
    IFMDIBluetoothSettings                   = 0xF0B3,

    /// Identifier: "mdi-bluetooth-transfer"
    IFMDIBluetoothTransfer                   = 0xF0B4,

    /// Identifier: "mdi-blur"
    IFMDIBlur                                = 0xF0B5,

    /// Identifier: "mdi-blur-linear"
    IFMDIBlurLinear                          = 0xF0B6,

    /// Identifier: "mdi-blur-off"
    IFMDIBlurOff                             = 0xF0B7,

    /// Identifier: "mdi-blur-radial"
    IFMDIBlurRadial                          = 0xF0B8,

    /// Identifier: "mdi-bone"
    IFMDIBone                                = 0xF0B9,

    /// Identifier: "mdi-book"
    IFMDIBook                                = 0xF0BA,

    /// Identifier: "mdi-book-minus"
    IFMDIBookMinus                           = 0xF5D9,

    /// Identifier: "mdi-book-multiple"
    IFMDIBookMultiple                        = 0xF0BB,

    /// Identifier: "mdi-book-multiple-variant"
    IFMDIBookMultipleVariant                 = 0xF0BC,

    /// Identifier: "mdi-book-open"
    IFMDIBookOpen                            = 0xF0BD,

    /// Identifier: "mdi-book-open-page-variant"
    IFMDIBookOpenPageVariant                 = 0xF5DA,

    /// Identifier: "mdi-book-open-variant"
    IFMDIBookOpenVariant                     = 0xF0BE,

    /// Identifier: "mdi-book-plus"
    IFMDIBookPlus                            = 0xF5DB,

    /// Identifier: "mdi-book-variant"
    IFMDIBookVariant                         = 0xF0BF,

    /// Identifier: "mdi-bookmark"
    IFMDIBookmark                            = 0xF0C0,

    /// Identifier: "mdi-bookmark-check"
    IFMDIBookmarkCheck                       = 0xF0C1,

    /// Identifier: "mdi-bookmark-music"
    IFMDIBookmarkMusic                       = 0xF0C2,

    /// Identifier: "mdi-bookmark-outline"
    IFMDIBookmarkOutline                     = 0xF0C3,

    /// Identifier: "mdi-bookmark-plus"
    IFMDIBookmarkPlus                        = 0xF0C5,

    /// Identifier: "mdi-bookmark-plus-outline"
    IFMDIBookmarkPlusOutline                 = 0xF0C4,

    /// Identifier: "mdi-bookmark-remove"
    IFMDIBookmarkRemove                      = 0xF0C6,

    /// Identifier: "mdi-boombox"
    IFMDIBoombox                             = 0xF5DC,

    /// Identifier: "mdi-border-all"
    IFMDIBorderAll                           = 0xF0C7,

    /// Identifier: "mdi-border-bottom"
    IFMDIBorderBottom                        = 0xF0C8,

    /// Identifier: "mdi-border-color"
    IFMDIBorderColor                         = 0xF0C9,

    /// Identifier: "mdi-border-horizontal"
    IFMDIBorderHorizontal                    = 0xF0CA,

    /// Identifier: "mdi-border-inside"
    IFMDIBorderInside                        = 0xF0CB,

    /// Identifier: "mdi-border-left"
    IFMDIBorderLeft                          = 0xF0CC,

    /// Identifier: "mdi-border-none"
    IFMDIBorderNone                          = 0xF0CD,

    /// Identifier: "mdi-border-outside"
    IFMDIBorderOutside                       = 0xF0CE,

    /// Identifier: "mdi-border-right"
    IFMDIBorderRight                         = 0xF0CF,

    /// Identifier: "mdi-border-style"
    IFMDIBorderStyle                         = 0xF0D0,

    /// Identifier: "mdi-border-top"
    IFMDIBorderTop                           = 0xF0D1,

    /// Identifier: "mdi-border-vertical"
    IFMDIBorderVertical                      = 0xF0D2,

    /// Identifier: "mdi-bowl"
    IFMDIBowl                                = 0xF617,

    /// Identifier: "mdi-bowling"
    IFMDIBowling                             = 0xF0D3,

    /// Identifier: "mdi-box"
    IFMDIBox                                 = 0xF0D4,

    /// Identifier: "mdi-box-cutter"
    IFMDIBoxCutter                           = 0xF0D5,

    /// Identifier: "mdi-box-shadow"
    IFMDIBoxShadow                           = 0xF637,

    /// Identifier: "mdi-bridge"
    IFMDIBridge                              = 0xF618,

    /// Identifier: "mdi-briefcase"
    IFMDIBriefcase                           = 0xF0D6,

    /// Identifier: "mdi-briefcase-check"
    IFMDIBriefcaseCheck                      = 0xF0D7,

    /// Identifier: "mdi-briefcase-download"
    IFMDIBriefcaseDownload                   = 0xF0D8,

    /// Identifier: "mdi-briefcase-upload"
    IFMDIBriefcaseUpload                     = 0xF0D9,

    /// Identifier: "mdi-brightness-1"
    IFMDIBrightness1                         = 0xF0DA,

    /// Identifier: "mdi-brightness-2"
    IFMDIBrightness2                         = 0xF0DB,

    /// Identifier: "mdi-brightness-3"
    IFMDIBrightness3                         = 0xF0DC,

    /// Identifier: "mdi-brightness-4"
    IFMDIBrightness4                         = 0xF0DD,

    /// Identifier: "mdi-brightness-5"
    IFMDIBrightness5                         = 0xF0DE,

    /// Identifier: "mdi-brightness-6"
    IFMDIBrightness6                         = 0xF0DF,

    /// Identifier: "mdi-brightness-7"
    IFMDIBrightness7                         = 0xF0E0,

    /// Identifier: "mdi-brightness-auto"
    IFMDIBrightnessAuto                      = 0xF0E1,

    /// Identifier: "mdi-broom"
    IFMDIBroom                               = 0xF0E2,

    /// Identifier: "mdi-brush"
    IFMDIBrush                               = 0xF0E3,

    /// Identifier: "mdi-buffer"
    IFMDIBuffer                              = 0xF619,

    /// Identifier: "mdi-bug"
    IFMDIBug                                 = 0xF0E4,

    /// Identifier: "mdi-bulletin-board"
    IFMDIBulletinBoard                       = 0xF0E5,

    /// Identifier: "mdi-bullhorn"
    IFMDIBullhorn                            = 0xF0E6,

    /// Identifier: "mdi-bullseye"
    IFMDIBullseye                            = 0xF5DD,

    /// Identifier: "mdi-burst-mode"
    IFMDIBurstMode                           = 0xF5DE,

    /// Identifier: "mdi-bus"
    IFMDIBus                                 = 0xF0E7,

    /// Identifier: "mdi-cached"
    IFMDICached                              = 0xF0E8,

    /// Identifier: "mdi-cake"
    IFMDICake                                = 0xF0E9,

    /// Identifier: "mdi-cake-layered"
    IFMDICakeLayered                         = 0xF0EA,

    /// Identifier: "mdi-cake-variant"
    IFMDICakeVariant                         = 0xF0EB,

    /// Identifier: "mdi-calculator"
    IFMDICalculator                          = 0xF0EC,

    /// Identifier: "mdi-calendar"
    IFMDICalendar                            = 0xF0ED,

    /// Identifier: "mdi-calendar-blank"
    IFMDICalendarBlank                       = 0xF0EE,

    /// Identifier: "mdi-calendar-check"
    IFMDICalendarCheck                       = 0xF0EF,

    /// Identifier: "mdi-calendar-clock"
    IFMDICalendarClock                       = 0xF0F0,

    /// Identifier: "mdi-calendar-multiple"
    IFMDICalendarMultiple                    = 0xF0F1,

    /// Identifier: "mdi-calendar-multiple-check"
    IFMDICalendarMultipleCheck               = 0xF0F2,

    /// Identifier: "mdi-calendar-plus"
    IFMDICalendarPlus                        = 0xF0F3,

    /// Identifier: "mdi-calendar-remove"
    IFMDICalendarRemove                      = 0xF0F4,

    /// Identifier: "mdi-calendar-text"
    IFMDICalendarText                        = 0xF0F5,

    /// Identifier: "mdi-calendar-today"
    IFMDICalendarToday                       = 0xF0F6,

    /// Identifier: "mdi-call-made"
    IFMDICallMade                            = 0xF0F7,

    /// Identifier: "mdi-call-merge"
    IFMDICallMerge                           = 0xF0F8,

    /// Identifier: "mdi-call-missed"
    IFMDICallMissed                          = 0xF0F9,

    /// Identifier: "mdi-call-received"
    IFMDICallReceived                        = 0xF0FA,

    /// Identifier: "mdi-call-split"
    IFMDICallSplit                           = 0xF0FB,

    /// Identifier: "mdi-camcorder"
    IFMDICamcorder                           = 0xF0FC,

    /// Identifier: "mdi-camcorder-box"
    IFMDICamcorderBox                        = 0xF0FD,

    /// Identifier: "mdi-camcorder-box-off"
    IFMDICamcorderBoxOff                     = 0xF0FE,

    /// Identifier: "mdi-camcorder-off"
    IFMDICamcorderOff                        = 0xF0FF,

    /// Identifier: "mdi-camera"
    IFMDICamera                              = 0xF100,

    /// Identifier: "mdi-camera-enhance"
    IFMDICameraEnhance                       = 0xF101,

    /// Identifier: "mdi-camera-front"
    IFMDICameraFront                         = 0xF102,

    /// Identifier: "mdi-camera-front-variant"
    IFMDICameraFrontVariant                  = 0xF103,

    /// Identifier: "mdi-camera-iris"
    IFMDICameraIris                          = 0xF104,

    /// Identifier: "mdi-camera-off"
    IFMDICameraOff                           = 0xF5DF,

    /// Identifier: "mdi-camera-party-mode"
    IFMDICameraPartyMode                     = 0xF105,

    /// Identifier: "mdi-camera-rear"
    IFMDICameraRear                          = 0xF106,

    /// Identifier: "mdi-camera-rear-variant"
    IFMDICameraRearVariant                   = 0xF107,

    /// Identifier: "mdi-camera-switch"
    IFMDICameraSwitch                        = 0xF108,

    /// Identifier: "mdi-camera-timer"
    IFMDICameraTimer                         = 0xF109,

    /// Identifier: "mdi-candle"
    IFMDICandle                              = 0xF5E2,

    /// Identifier: "mdi-candycane"
    IFMDICandycane                           = 0xF10A,

    /// Identifier: "mdi-car"
    IFMDICar                                 = 0xF10B,

    /// Identifier: "mdi-car-battery"
    IFMDICarBattery                          = 0xF10C,

    /// Identifier: "mdi-car-connected"
    IFMDICarConnected                        = 0xF10D,

    /// Identifier: "mdi-car-wash"
    IFMDICarWash                             = 0xF10E,

    /// Identifier: "mdi-cards"
    IFMDICards                               = 0xF638,

    /// Identifier: "mdi-cards-outline"
    IFMDICardsOutline                        = 0xF639,

    /// Identifier: "mdi-cards-playing-outline"
    IFMDICardsPlayingOutline                 = 0xF63A,

    /// Identifier: "mdi-carrot"
    IFMDICarrot                              = 0xF10F,

    /// Identifier: "mdi-cart"
    IFMDICart                                = 0xF110,

    /// Identifier: "mdi-cart-off"
    IFMDICartOff                             = 0xF66B,

    /// Identifier: "mdi-cart-outline"
    IFMDICartOutline                         = 0xF111,

    /// Identifier: "mdi-cart-plus"
    IFMDICartPlus                            = 0xF112,

    /// Identifier: "mdi-case-sensitive-alt"
    IFMDICaseSensitiveAlt                    = 0xF113,

    /// Identifier: "mdi-cash"
    IFMDICash                                = 0xF114,

    /// Identifier: "mdi-cash-100"
    IFMDICash100                             = 0xF115,

    /// Identifier: "mdi-cash-multiple"
    IFMDICashMultiple                        = 0xF116,

    /// Identifier: "mdi-cash-usd"
    IFMDICashUsd                             = 0xF117,

    /// Identifier: "mdi-cast"
    IFMDICast                                = 0xF118,

    /// Identifier: "mdi-cast-connected"
    IFMDICastConnected                       = 0xF119,

    /// Identifier: "mdi-castle"
    IFMDICastle                              = 0xF11A,

    /// Identifier: "mdi-cat"
    IFMDICat                                 = 0xF11B,

    /// Identifier: "mdi-cellphone"
    IFMDICellphone                           = 0xF11C,

    /// Identifier: "mdi-cellphone-android"
    IFMDICellphoneAndroid                    = 0xF11D,

    /// Identifier: "mdi-cellphone-basic"
    IFMDICellphoneBasic                      = 0xF11E,

    /// Identifier: "mdi-cellphone-dock"
    IFMDICellphoneDock                       = 0xF11F,

    /// Identifier: "mdi-cellphone-iphone"
    IFMDICellphoneIphone                     = 0xF120,

    /// Identifier: "mdi-cellphone-link"
    IFMDICellphoneLink                       = 0xF121,

    /// Identifier: "mdi-cellphone-link-off"
    IFMDICellphoneLinkOff                    = 0xF122,

    /// Identifier: "mdi-cellphone-settings"
    IFMDICellphoneSettings                   = 0xF123,

    /// Identifier: "mdi-certificate"
    IFMDICertificate                         = 0xF124,

    /// Identifier: "mdi-chair-school"
    IFMDIChairSchool                         = 0xF125,

    /// Identifier: "mdi-chart-arc"
    IFMDIChartArc                            = 0xF126,

    /// Identifier: "mdi-chart-areaspline"
    IFMDIChartAreaspline                     = 0xF127,

    /// Identifier: "mdi-chart-bar"
    IFMDIChartBar                            = 0xF128,

    /// Identifier: "mdi-chart-bubble"
    IFMDIChartBubble                         = 0xF5E3,

    /// Identifier: "mdi-chart-gantt"
    IFMDIChartGantt                          = 0xF66C,

    /// Identifier: "mdi-chart-histogram"
    IFMDIChartHistogram                      = 0xF129,

    /// Identifier: "mdi-chart-line"
    IFMDIChartLine                           = 0xF12A,

    /// Identifier: "mdi-chart-pie"
    IFMDIChartPie                            = 0xF12B,

    /// Identifier: "mdi-chart-scatterplot-hexbin"
    IFMDIChartScatterplotHexbin              = 0xF66D,

    /// Identifier: "mdi-chart-timeline"
    IFMDIChartTimeline                       = 0xF66E,

    /// Identifier: "mdi-check"
    IFMDICheck                               = 0xF12C,

    /// Identifier: "mdi-check-all"
    IFMDICheckAll                            = 0xF12D,

    /// Identifier: "mdi-check-circle"
    IFMDICheckCircle                         = 0xF5E0,

    /// Identifier: "mdi-check-circle-outline"
    IFMDICheckCircleOutline                  = 0xF5E1,

    /// Identifier: "mdi-checkbox-blank"
    IFMDICheckboxBlank                       = 0xF12E,

    /// Identifier: "mdi-checkbox-blank-circle"
    IFMDICheckboxBlankCircle                 = 0xF12F,

    /// Identifier: "mdi-checkbox-blank-circle-outline"
    IFMDICheckboxBlankCircleOutline          = 0xF130,

    /// Identifier: "mdi-checkbox-blank-outline"
    IFMDICheckboxBlankOutline                = 0xF131,

    /// Identifier: "mdi-checkbox-marked"
    IFMDICheckboxMarked                      = 0xF132,

    /// Identifier: "mdi-checkbox-marked-circle"
    IFMDICheckboxMarkedCircle                = 0xF133,

    /// Identifier: "mdi-checkbox-marked-circle-outline"
    IFMDICheckboxMarkedCircleOutline         = 0xF134,

    /// Identifier: "mdi-checkbox-marked-outline"
    IFMDICheckboxMarkedOutline               = 0xF135,

    /// Identifier: "mdi-checkbox-multiple-blank"
    IFMDICheckboxMultipleBlank               = 0xF136,

    /// Identifier: "mdi-checkbox-multiple-blank-circle"
    IFMDICheckboxMultipleBlankCircle         = 0xF63B,

    /// Identifier: "mdi-checkbox-multiple-blank-circle-outline"
    IFMDICheckboxMultipleBlankCircleOutline  = 0xF63C,

    /// Identifier: "mdi-checkbox-multiple-blank-outline"
    IFMDICheckboxMultipleBlankOutline        = 0xF137,

    /// Identifier: "mdi-checkbox-multiple-marked"
    IFMDICheckboxMultipleMarked              = 0xF138,

    /// Identifier: "mdi-checkbox-multiple-marked-circle"
    IFMDICheckboxMultipleMarkedCircle        = 0xF63D,

    /// Identifier: "mdi-checkbox-multiple-marked-circle-outline"
    IFMDICheckboxMultipleMarkedCircleOutline = 0xF63E,

    /// Identifier: "mdi-checkbox-multiple-marked-outline"
    IFMDICheckboxMultipleMarkedOutline       = 0xF139,

    /// Identifier: "mdi-checkerboard"
    IFMDICheckerboard                        = 0xF13A,

    /// Identifier: "mdi-chemical-weapon"
    IFMDIChemicalWeapon                      = 0xF13B,

    /// Identifier: "mdi-chevron-double-down"
    IFMDIChevronDoubleDown                   = 0xF13C,

    /// Identifier: "mdi-chevron-double-left"
    IFMDIChevronDoubleLeft                   = 0xF13D,

    /// Identifier: "mdi-chevron-double-right"
    IFMDIChevronDoubleRight                  = 0xF13E,

    /// Identifier: "mdi-chevron-double-up"
    IFMDIChevronDoubleUp                     = 0xF13F,

    /// Identifier: "mdi-chevron-down"
    IFMDIChevronDown                         = 0xF140,

    /// Identifier: "mdi-chevron-left"
    IFMDIChevronLeft                         = 0xF141,

    /// Identifier: "mdi-chevron-right"
    IFMDIChevronRight                        = 0xF142,

    /// Identifier: "mdi-chevron-up"
    IFMDIChevronUp                           = 0xF143,

    /// Identifier: "mdi-chip"
    IFMDIChip                                = 0xF61A,

    /// Identifier: "mdi-church"
    IFMDIChurch                              = 0xF144,

    /// Identifier: "mdi-cisco-webex"
    IFMDICiscoWebex                          = 0xF145,

    /// Identifier: "mdi-city"
    IFMDICity                                = 0xF146,

    /// Identifier: "mdi-clipboard"
    IFMDIClipboard                           = 0xF147,

    /// Identifier: "mdi-clipboard-account"
    IFMDIClipboardAccount                    = 0xF148,

    /// Identifier: "mdi-clipboard-alert"
    IFMDIClipboardAlert                      = 0xF149,

    /// Identifier: "mdi-clipboard-arrow-down"
    IFMDIClipboardArrowDown                  = 0xF14A,

    /// Identifier: "mdi-clipboard-arrow-left"
    IFMDIClipboardArrowLeft                  = 0xF14B,

    /// Identifier: "mdi-clipboard-check"
    IFMDIClipboardCheck                      = 0xF14C,

    /// Identifier: "mdi-clipboard-outline"
    IFMDIClipboardOutline                    = 0xF14D,

    /// Identifier: "mdi-clipboard-text"
    IFMDIClipboardText                       = 0xF14E,

    /// Identifier: "mdi-clippy"
    IFMDIClippy                              = 0xF14F,

    /// Identifier: "mdi-clock"
    IFMDIClock                               = 0xF150,

    /// Identifier: "mdi-clock-alert"
    IFMDIClockAlert                          = 0xF5CE,

    /// Identifier: "mdi-clock-end"
    IFMDIClockEnd                            = 0xF151,

    /// Identifier: "mdi-clock-fast"
    IFMDIClockFast                           = 0xF152,

    /// Identifier: "mdi-clock-in"
    IFMDIClockIn                             = 0xF153,

    /// Identifier: "mdi-clock-out"
    IFMDIClockOut                            = 0xF154,

    /// Identifier: "mdi-clock-start"
    IFMDIClockStart                          = 0xF155,

    /// Identifier: "mdi-close"
    IFMDIClose                               = 0xF156,

    /// Identifier: "mdi-close-box"
    IFMDICloseBox                            = 0xF157,

    /// Identifier: "mdi-close-box-outline"
    IFMDICloseBoxOutline                     = 0xF158,

    /// Identifier: "mdi-close-circle"
    IFMDICloseCircle                         = 0xF159,

    /// Identifier: "mdi-close-circle-outline"
    IFMDICloseCircleOutline                  = 0xF15A,

    /// Identifier: "mdi-close-network"
    IFMDICloseNetwork                        = 0xF15B,

    /// Identifier: "mdi-close-octagon"
    IFMDICloseOctagon                        = 0xF15C,

    /// Identifier: "mdi-close-octagon-outline"
    IFMDICloseOctagonOutline                 = 0xF15D,

    /// Identifier: "mdi-closed-caption"
    IFMDIClosedCaption                       = 0xF15E,

    /// Identifier: "mdi-cloud"
    IFMDICloud                               = 0xF15F,

    /// Identifier: "mdi-cloud-check"
    IFMDICloudCheck                          = 0xF160,

    /// Identifier: "mdi-cloud-circle"
    IFMDICloudCircle                         = 0xF161,

    /// Identifier: "mdi-cloud-download"
    IFMDICloudDownload                       = 0xF162,

    /// Identifier: "mdi-cloud-outline"
    IFMDICloudOutline                        = 0xF163,

    /// Identifier: "mdi-cloud-outline-off"
    IFMDICloudOutlineOff                     = 0xF164,

    /// Identifier: "mdi-cloud-print"
    IFMDICloudPrint                          = 0xF165,

    /// Identifier: "mdi-cloud-print-outline"
    IFMDICloudPrintOutline                   = 0xF166,

    /// Identifier: "mdi-cloud-sync"
    IFMDICloudSync                           = 0xF63F,

    /// Identifier: "mdi-cloud-upload"
    IFMDICloudUpload                         = 0xF167,

    /// Identifier: "mdi-code-array"
    IFMDICodeArray                           = 0xF168,

    /// Identifier: "mdi-code-braces"
    IFMDICodeBraces                          = 0xF169,

    /// Identifier: "mdi-code-brackets"
    IFMDICodeBrackets                        = 0xF16A,

    /// Identifier: "mdi-code-equal"
    IFMDICodeEqual                           = 0xF16B,

    /// Identifier: "mdi-code-greater-than"
    IFMDICodeGreaterThan                     = 0xF16C,

    /// Identifier: "mdi-code-greater-than-or-equal"
    IFMDICodeGreaterThanOrEqual              = 0xF16D,

    /// Identifier: "mdi-code-less-than"
    IFMDICodeLessThan                        = 0xF16E,

    /// Identifier: "mdi-code-less-than-or-equal"
    IFMDICodeLessThanOrEqual                 = 0xF16F,

    /// Identifier: "mdi-code-not-equal"
    IFMDICodeNotEqual                        = 0xF170,

    /// Identifier: "mdi-code-not-equal-variant"
    IFMDICodeNotEqualVariant                 = 0xF171,

    /// Identifier: "mdi-code-parentheses"
    IFMDICodeParentheses                     = 0xF172,

    /// Identifier: "mdi-code-string"
    IFMDICodeString                          = 0xF173,

    /// Identifier: "mdi-code-tags"
    IFMDICodeTags                            = 0xF174,

    /// Identifier: "mdi-codepen"
    IFMDICodepen                             = 0xF175,

    /// Identifier: "mdi-coffee"
    IFMDICoffee                              = 0xF176,

    /// Identifier: "mdi-coffee-to-go"
    IFMDICoffeeToGo                          = 0xF177,

    /// Identifier: "mdi-coin"
    IFMDICoin                                = 0xF178,

    /// Identifier: "mdi-collage"
    IFMDICollage                             = 0xF640,

    /// Identifier: "mdi-color-helper"
    IFMDIColorHelper                         = 0xF179,

    /// Identifier: "mdi-comment"
    IFMDIComment                             = 0xF17A,

    /// Identifier: "mdi-comment-account"
    IFMDICommentAccount                      = 0xF17B,

    /// Identifier: "mdi-comment-account-outline"
    IFMDICommentAccountOutline               = 0xF17C,

    /// Identifier: "mdi-comment-alert"
    IFMDICommentAlert                        = 0xF17D,

    /// Identifier: "mdi-comment-alert-outline"
    IFMDICommentAlertOutline                 = 0xF17E,

    /// Identifier: "mdi-comment-check"
    IFMDICommentCheck                        = 0xF17F,

    /// Identifier: "mdi-comment-check-outline"
    IFMDICommentCheckOutline                 = 0xF180,

    /// Identifier: "mdi-comment-multiple-outline"
    IFMDICommentMultipleOutline              = 0xF181,

    /// Identifier: "mdi-comment-outline"
    IFMDICommentOutline                      = 0xF182,

    /// Identifier: "mdi-comment-plus-outline"
    IFMDICommentPlusOutline                  = 0xF183,

    /// Identifier: "mdi-comment-processing"
    IFMDICommentProcessing                   = 0xF184,

    /// Identifier: "mdi-comment-processing-outline"
    IFMDICommentProcessingOutline            = 0xF185,

    /// Identifier: "mdi-comment-question-outline"
    IFMDICommentQuestionOutline              = 0xF186,

    /// Identifier: "mdi-comment-remove-outline"
    IFMDICommentRemoveOutline                = 0xF187,

    /// Identifier: "mdi-comment-text"
    IFMDICommentText                         = 0xF188,

    /// Identifier: "mdi-comment-text-outline"
    IFMDICommentTextOutline                  = 0xF189,

    /// Identifier: "mdi-compare"
    IFMDICompare                             = 0xF18A,

    /// Identifier: "mdi-compass"
    IFMDICompass                             = 0xF18B,

    /// Identifier: "mdi-compass-outline"
    IFMDICompassOutline                      = 0xF18C,

    /// Identifier: "mdi-console"
    IFMDIConsole                             = 0xF18D,

    /// Identifier: "mdi-contact-mail"
    IFMDIContactMail                         = 0xF18E,

    /// Identifier: "mdi-content-copy"
    IFMDIContentCopy                         = 0xF18F,

    /// Identifier: "mdi-content-cut"
    IFMDIContentCut                          = 0xF190,

    /// Identifier: "mdi-content-duplicate"
    IFMDIContentDuplicate                    = 0xF191,

    /// Identifier: "mdi-content-paste"
    IFMDIContentPaste                        = 0xF192,

    /// Identifier: "mdi-content-save"
    IFMDIContentSave                         = 0xF193,

    /// Identifier: "mdi-content-save-all"
    IFMDIContentSaveAll                      = 0xF194,

    /// Identifier: "mdi-content-save-settings"
    IFMDIContentSaveSettings                 = 0xF61B,

    /// Identifier: "mdi-contrast"
    IFMDIContrast                            = 0xF195,

    /// Identifier: "mdi-contrast-box"
    IFMDIContrastBox                         = 0xF196,

    /// Identifier: "mdi-contrast-circle"
    IFMDIContrastCircle                      = 0xF197,

    /// Identifier: "mdi-cookie"
    IFMDICookie                              = 0xF198,

    /// Identifier: "mdi-copyright"
    IFMDICopyright                           = 0xF5E6,

    /// Identifier: "mdi-counter"
    IFMDICounter                             = 0xF199,

    /// Identifier: "mdi-cow"
    IFMDICow                                 = 0xF19A,

    /// Identifier: "mdi-credit-card"
    IFMDICreditCard                          = 0xF19B,

    /// Identifier: "mdi-credit-card-multiple"
    IFMDICreditCardMultiple                  = 0xF19C,

    /// Identifier: "mdi-credit-card-off"
    IFMDICreditCardOff                       = 0xF5E4,

    /// Identifier: "mdi-credit-card-scan"
    IFMDICreditCardScan                      = 0xF19D,

    /// Identifier: "mdi-crop"
    IFMDICrop                                = 0xF19E,

    /// Identifier: "mdi-crop-free"
    IFMDICropFree                            = 0xF19F,

    /// Identifier: "mdi-crop-landscape"
    IFMDICropLandscape                       = 0xF1A0,

    /// Identifier: "mdi-crop-portrait"
    IFMDICropPortrait                        = 0xF1A1,

    /// Identifier: "mdi-crop-square"
    IFMDICropSquare                          = 0xF1A2,

    /// Identifier: "mdi-crosshairs"
    IFMDICrosshairs                          = 0xF1A3,

    /// Identifier: "mdi-crosshairs-gps"
    IFMDICrosshairsGps                       = 0xF1A4,

    /// Identifier: "mdi-crown"
    IFMDICrown                               = 0xF1A5,

    /// Identifier: "mdi-cube"
    IFMDICube                                = 0xF1A6,

    /// Identifier: "mdi-cube-outline"
    IFMDICubeOutline                         = 0xF1A7,

    /// Identifier: "mdi-cube-send"
    IFMDICubeSend                            = 0xF1A8,

    /// Identifier: "mdi-cube-unfolded"
    IFMDICubeUnfolded                        = 0xF1A9,

    /// Identifier: "mdi-cup"
    IFMDICup                                 = 0xF1AA,

    /// Identifier: "mdi-cup-off"
    IFMDICupOff                              = 0xF5E5,

    /// Identifier: "mdi-cup-water"
    IFMDICupWater                            = 0xF1AB,

    /// Identifier: "mdi-currency-btc"
    IFMDICurrencyBtc                         = 0xF1AC,

    /// Identifier: "mdi-currency-eur"
    IFMDICurrencyEur                         = 0xF1AD,

    /// Identifier: "mdi-currency-gbp"
    IFMDICurrencyGbp                         = 0xF1AE,

    /// Identifier: "mdi-currency-inr"
    IFMDICurrencyInr                         = 0xF1AF,

    /// Identifier: "mdi-currency-ngn"
    IFMDICurrencyNgn                         = 0xF1B0,

    /// Identifier: "mdi-currency-rub"
    IFMDICurrencyRub                         = 0xF1B1,

    /// Identifier: "mdi-currency-try"
    IFMDICurrencyTry                         = 0xF1B2,

    /// Identifier: "mdi-currency-usd"
    IFMDICurrencyUsd                         = 0xF1B3,

    /// Identifier: "mdi-cursor-default"
    IFMDICursorDefault                       = 0xF1B4,

    /// Identifier: "mdi-cursor-default-outline"
    IFMDICursorDefaultOutline                = 0xF1B5,

    /// Identifier: "mdi-cursor-move"
    IFMDICursorMove                          = 0xF1B6,

    /// Identifier: "mdi-cursor-pointer"
    IFMDICursorPointer                       = 0xF1B7,

    /// Identifier: "mdi-cursor-text"
    IFMDICursorText                          = 0xF5E7,

    /// Identifier: "mdi-database"
    IFMDIDatabase                            = 0xF1B8,

    /// Identifier: "mdi-database-minus"
    IFMDIDatabaseMinus                       = 0xF1B9,

    /// Identifier: "mdi-database-plus"
    IFMDIDatabasePlus                        = 0xF1BA,

    /// Identifier: "mdi-debug-step-into"
    IFMDIDebugStepInto                       = 0xF1BB,

    /// Identifier: "mdi-debug-step-out"
    IFMDIDebugStepOut                        = 0xF1BC,

    /// Identifier: "mdi-debug-step-over"
    IFMDIDebugStepOver                       = 0xF1BD,

    /// Identifier: "mdi-decimal-decrease"
    IFMDIDecimalDecrease                     = 0xF1BE,

    /// Identifier: "mdi-decimal-increase"
    IFMDIDecimalIncrease                     = 0xF1BF,

    /// Identifier: "mdi-delete"
    IFMDIDelete                              = 0xF1C0,

    /// Identifier: "mdi-delete-forever"
    IFMDIDeleteForever                       = 0xF5E8,

    /// Identifier: "mdi-delete-sweep"
    IFMDIDeleteSweep                         = 0xF5E9,

    /// Identifier: "mdi-delete-variant"
    IFMDIDeleteVariant                       = 0xF1C1,

    /// Identifier: "mdi-delta"
    IFMDIDelta                               = 0xF1C2,

    /// Identifier: "mdi-deskphone"
    IFMDIDeskphone                           = 0xF1C3,

    /// Identifier: "mdi-desktop-mac"
    IFMDIDesktopMac                          = 0xF1C4,

    /// Identifier: "mdi-desktop-tower"
    IFMDIDesktopTower                        = 0xF1C5,

    /// Identifier: "mdi-details"
    IFMDIDetails                             = 0xF1C6,

    /// Identifier: "mdi-deviantart"
    IFMDIDeviantart                          = 0xF1C7,

    /// Identifier: "mdi-dialpad"
    IFMDIDialpad                             = 0xF61C,

    /// Identifier: "mdi-diamond"
    IFMDIDiamond                             = 0xF1C8,

    /// Identifier: "mdi-dice-1"
    IFMDIDice1                               = 0xF1CA,

    /// Identifier: "mdi-dice-2"
    IFMDIDice2                               = 0xF1CB,

    /// Identifier: "mdi-dice-3"
    IFMDIDice3                               = 0xF1CC,

    /// Identifier: "mdi-dice-4"
    IFMDIDice4                               = 0xF1CD,

    /// Identifier: "mdi-dice-5"
    IFMDIDice5                               = 0xF1CE,

    /// Identifier: "mdi-dice-6"
    IFMDIDice6                               = 0xF1CF,

    /// Identifier: "mdi-dice-d20"
    IFMDIDiceD20                             = 0xF5EA,

    /// Identifier: "mdi-dice-d4"
    IFMDIDiceD4                              = 0xF5EB,

    /// Identifier: "mdi-dice-d6"
    IFMDIDiceD6                              = 0xF5EC,

    /// Identifier: "mdi-dice-d8"
    IFMDIDiceD8                              = 0xF5ED,

    /// Identifier: "mdi-dictionary"
    IFMDIDictionary                          = 0xF61D,

    /// Identifier: "mdi-directions"
    IFMDIDirections                          = 0xF1D0,

    /// Identifier: "mdi-directions-fork"
    IFMDIDirectionsFork                      = 0xF641,

    /// Identifier: "mdi-discord"
    IFMDIDiscord                             = 0xF66F,

    /// Identifier: "mdi-disk"
    IFMDIDisk                                = 0xF5EE,

    /// Identifier: "mdi-disk-alert"
    IFMDIDiskAlert                           = 0xF1D1,

    /// Identifier: "mdi-disqus"
    IFMDIDisqus                              = 0xF1D2,

    /// Identifier: "mdi-disqus-outline"
    IFMDIDisqusOutline                       = 0xF1D3,

    /// Identifier: "mdi-division"
    IFMDIDivision                            = 0xF1D4,

    /// Identifier: "mdi-division-box"
    IFMDIDivisionBox                         = 0xF1D5,

    /// Identifier: "mdi-dns"
    IFMDIDns                                 = 0xF1D6,

    /// Identifier: "mdi-domain"
    IFMDIDomain                              = 0xF1D7,

    /// Identifier: "mdi-dots-horizontal"
    IFMDIDotsHorizontal                      = 0xF1D8,

    /// Identifier: "mdi-dots-vertical"
    IFMDIDotsVertical                        = 0xF1D9,

    /// Identifier: "mdi-download"
    IFMDIDownload                            = 0xF1DA,

    /// Identifier: "mdi-drag"
    IFMDIDrag                                = 0xF1DB,

    /// Identifier: "mdi-drag-horizontal"
    IFMDIDragHorizontal                      = 0xF1DC,

    /// Identifier: "mdi-drag-vertical"
    IFMDIDragVertical                        = 0xF1DD,

    /// Identifier: "mdi-drawing"
    IFMDIDrawing                             = 0xF1DE,

    /// Identifier: "mdi-drawing-box"
    IFMDIDrawingBox                          = 0xF1DF,

    /// Identifier: "mdi-dribbble"
    IFMDIDribbble                            = 0xF1E0,

    /// Identifier: "mdi-dribbble-box"
    IFMDIDribbbleBox                         = 0xF1E1,

    /// Identifier: "mdi-drone"
    IFMDIDrone                               = 0xF1E2,

    /// Identifier: "mdi-dropbox"
    IFMDIDropbox                             = 0xF1E3,

    /// Identifier: "mdi-drupal"
    IFMDIDrupal                              = 0xF1E4,

    /// Identifier: "mdi-duck"
    IFMDIDuck                                = 0xF1E5,

    /// Identifier: "mdi-dumbbell"
    IFMDIDumbbell                            = 0xF1E6,

    /// Identifier: "mdi-earth"
    IFMDIEarth                               = 0xF1E7,

    /// Identifier: "mdi-earth-off"
    IFMDIEarthOff                            = 0xF1E8,

    /// Identifier: "mdi-edge"
    IFMDIEdge                                = 0xF1E9,

    /// Identifier: "mdi-eject"
    IFMDIEject                               = 0xF1EA,

    /// Identifier: "mdi-elevation-decline"
    IFMDIElevationDecline                    = 0xF1EB,

    /// Identifier: "mdi-elevation-rise"
    IFMDIElevationRise                       = 0xF1EC,

    /// Identifier: "mdi-elevator"
    IFMDIElevator                            = 0xF1ED,

    /// Identifier: "mdi-email"
    IFMDIEmail                               = 0xF1EE,

    /// Identifier: "mdi-email-open"
    IFMDIEmailOpen                           = 0xF1EF,

    /// Identifier: "mdi-email-open-outline"
    IFMDIEmailOpenOutline                    = 0xF5EF,

    /// Identifier: "mdi-email-outline"
    IFMDIEmailOutline                        = 0xF1F0,

    /// Identifier: "mdi-email-secure"
    IFMDIEmailSecure                         = 0xF1F1,

    /// Identifier: "mdi-email-variant"
    IFMDIEmailVariant                        = 0xF5F0,

    /// Identifier: "mdi-emoticon"
    IFMDIEmoticon                            = 0xF1F2,

    /// Identifier: "mdi-emoticon-cool"
    IFMDIEmoticonCool                        = 0xF1F3,

    /// Identifier: "mdi-emoticon-devil"
    IFMDIEmoticonDevil                       = 0xF1F4,

    /// Identifier: "mdi-emoticon-happy"
    IFMDIEmoticonHappy                       = 0xF1F5,

    /// Identifier: "mdi-emoticon-neutral"
    IFMDIEmoticonNeutral                     = 0xF1F6,

    /// Identifier: "mdi-emoticon-poop"
    IFMDIEmoticonPoop                        = 0xF1F7,

    /// Identifier: "mdi-emoticon-sad"
    IFMDIEmoticonSad                         = 0xF1F8,

    /// Identifier: "mdi-emoticon-tongue"
    IFMDIEmoticonTongue                      = 0xF1F9,

    /// Identifier: "mdi-engine"
    IFMDIEngine                              = 0xF1FA,

    /// Identifier: "mdi-engine-outline"
    IFMDIEngineOutline                       = 0xF1FB,

    /// Identifier: "mdi-equal"
    IFMDIEqual                               = 0xF1FC,

    /// Identifier: "mdi-equal-box"
    IFMDIEqualBox                            = 0xF1FD,

    /// Identifier: "mdi-eraser"
    IFMDIEraser                              = 0xF1FE,

    /// Identifier: "mdi-eraser-variant"
    IFMDIEraserVariant                       = 0xF642,

    /// Identifier: "mdi-escalator"
    IFMDIEscalator                           = 0xF1FF,

    /// Identifier: "mdi-ethernet"
    IFMDIEthernet                            = 0xF200,

    /// Identifier: "mdi-ethernet-cable"
    IFMDIEthernetCable                       = 0xF201,

    /// Identifier: "mdi-ethernet-cable-off"
    IFMDIEthernetCableOff                    = 0xF202,

    /// Identifier: "mdi-etsy"
    IFMDIEtsy                                = 0xF203,

    /// Identifier: "mdi-ev-station"
    IFMDIEvStation                           = 0xF5F1,

    /// Identifier: "mdi-evernote"
    IFMDIEvernote                            = 0xF204,

    /// Identifier: "mdi-exclamation"
    IFMDIExclamation                         = 0xF205,

    /// Identifier: "mdi-exit-to-app"
    IFMDIExitToApp                           = 0xF206,

    /// Identifier: "mdi-export"
    IFMDIExport                              = 0xF207,

    /// Identifier: "mdi-eye"
    IFMDIEye                                 = 0xF208,

    /// Identifier: "mdi-eye-off"
    IFMDIEyeOff                              = 0xF209,

    /// Identifier: "mdi-eyedropper"
    IFMDIEyedropper                          = 0xF20A,

    /// Identifier: "mdi-eyedropper-variant"
    IFMDIEyedropperVariant                   = 0xF20B,

    /// Identifier: "mdi-face"
    IFMDIFace                                = 0xF643,

    /// Identifier: "mdi-face-profile"
    IFMDIFaceProfile                         = 0xF644,

    /// Identifier: "mdi-facebook"
    IFMDIFacebook                            = 0xF20C,

    /// Identifier: "mdi-facebook-box"
    IFMDIFacebookBox                         = 0xF20D,

    /// Identifier: "mdi-facebook-messenger"
    IFMDIFacebookMessenger                   = 0xF20E,

    /// Identifier: "mdi-factory"
    IFMDIFactory                             = 0xF20F,

    /// Identifier: "mdi-fan"
    IFMDIFan                                 = 0xF210,

    /// Identifier: "mdi-fast-forward"
    IFMDIFastForward                         = 0xF211,

    /// Identifier: "mdi-fax"
    IFMDIFax                                 = 0xF212,

    /// Identifier: "mdi-ferry"
    IFMDIFerry                               = 0xF213,

    /// Identifier: "mdi-file"
    IFMDIFile                                = 0xF214,

    /// Identifier: "mdi-file-chart"
    IFMDIFileChart                           = 0xF215,

    /// Identifier: "mdi-file-check"
    IFMDIFileCheck                           = 0xF216,

    /// Identifier: "mdi-file-cloud"
    IFMDIFileCloud                           = 0xF217,

    /// Identifier: "mdi-file-delimited"
    IFMDIFileDelimited                       = 0xF218,

    /// Identifier: "mdi-file-document"
    IFMDIFileDocument                        = 0xF219,

    /// Identifier: "mdi-file-document-box"
    IFMDIFileDocumentBox                     = 0xF21A,

    /// Identifier: "mdi-file-excel"
    IFMDIFileExcel                           = 0xF21B,

    /// Identifier: "mdi-file-excel-box"
    IFMDIFileExcelBox                        = 0xF21C,

    /// Identifier: "mdi-file-export"
    IFMDIFileExport                          = 0xF21D,

    /// Identifier: "mdi-file-find"
    IFMDIFileFind                            = 0xF21E,

    /// Identifier: "mdi-file-hidden"
    IFMDIFileHidden                          = 0xF613,

    /// Identifier: "mdi-file-image"
    IFMDIFileImage                           = 0xF21F,

    /// Identifier: "mdi-file-import"
    IFMDIFileImport                          = 0xF220,

    /// Identifier: "mdi-file-lock"
    IFMDIFileLock                            = 0xF221,

    /// Identifier: "mdi-file-multiple"
    IFMDIFileMultiple                        = 0xF222,

    /// Identifier: "mdi-file-music"
    IFMDIFileMusic                           = 0xF223,

    /// Identifier: "mdi-file-outline"
    IFMDIFileOutline                         = 0xF224,

    /// Identifier: "mdi-file-pdf"
    IFMDIFilePdf                             = 0xF225,

    /// Identifier: "mdi-file-pdf-box"
    IFMDIFilePdfBox                          = 0xF226,

    /// Identifier: "mdi-file-powerpoint"
    IFMDIFilePowerpoint                      = 0xF227,

    /// Identifier: "mdi-file-powerpoint-box"
    IFMDIFilePowerpointBox                   = 0xF228,

    /// Identifier: "mdi-file-presentation-box"
    IFMDIFilePresentationBox                 = 0xF229,

    /// Identifier: "mdi-file-restore"
    IFMDIFileRestore                         = 0xF670,

    /// Identifier: "mdi-file-send"
    IFMDIFileSend                            = 0xF22A,

    /// Identifier: "mdi-file-tree"
    IFMDIFileTree                            = 0xF645,

    /// Identifier: "mdi-file-video"
    IFMDIFileVideo                           = 0xF22B,

    /// Identifier: "mdi-file-word"
    IFMDIFileWord                            = 0xF22C,

    /// Identifier: "mdi-file-word-box"
    IFMDIFileWordBox                         = 0xF22D,

    /// Identifier: "mdi-file-xml"
    IFMDIFileXml                             = 0xF22E,

    /// Identifier: "mdi-film"
    IFMDIFilm                                = 0xF22F,

    /// Identifier: "mdi-filmstrip"
    IFMDIFilmstrip                           = 0xF230,

    /// Identifier: "mdi-filmstrip-off"
    IFMDIFilmstripOff                        = 0xF231,

    /// Identifier: "mdi-filter"
    IFMDIFilter                              = 0xF232,

    /// Identifier: "mdi-filter-outline"
    IFMDIFilterOutline                       = 0xF233,

    /// Identifier: "mdi-filter-remove"
    IFMDIFilterRemove                        = 0xF234,

    /// Identifier: "mdi-filter-remove-outline"
    IFMDIFilterRemoveOutline                 = 0xF235,

    /// Identifier: "mdi-filter-variant"
    IFMDIFilterVariant                       = 0xF236,

    /// Identifier: "mdi-fingerprint"
    IFMDIFingerprint                         = 0xF237,

    /// Identifier: "mdi-fire"
    IFMDIFire                                = 0xF238,

    /// Identifier: "mdi-firefox"
    IFMDIFirefox                             = 0xF239,

    /// Identifier: "mdi-fish"
    IFMDIFish                                = 0xF23A,

    /// Identifier: "mdi-flag"
    IFMDIFlag                                = 0xF23B,

    /// Identifier: "mdi-flag-checkered"
    IFMDIFlagCheckered                       = 0xF23C,

    /// Identifier: "mdi-flag-outline"
    IFMDIFlagOutline                         = 0xF23D,

    /// Identifier: "mdi-flag-outline-variant"
    IFMDIFlagOutlineVariant                  = 0xF23E,

    /// Identifier: "mdi-flag-triangle"
    IFMDIFlagTriangle                        = 0xF23F,

    /// Identifier: "mdi-flag-variant"
    IFMDIFlagVariant                         = 0xF240,

    /// Identifier: "mdi-flash"
    IFMDIFlash                               = 0xF241,

    /// Identifier: "mdi-flash-auto"
    IFMDIFlashAuto                           = 0xF242,

    /// Identifier: "mdi-flash-off"
    IFMDIFlashOff                            = 0xF243,

    /// Identifier: "mdi-flashlight"
    IFMDIFlashlight                          = 0xF244,

    /// Identifier: "mdi-flashlight-off"
    IFMDIFlashlightOff                       = 0xF245,

    /// Identifier: "mdi-flask"
    IFMDIFlask                               = 0xF093,

    /// Identifier: "mdi-flask-empty"
    IFMDIFlaskEmpty                          = 0xF094,

    /// Identifier: "mdi-flask-empty-outline"
    IFMDIFlaskEmptyOutline                   = 0xF095,

    /// Identifier: "mdi-flask-outline"
    IFMDIFlaskOutline                        = 0xF096,

    /// Identifier: "mdi-flattr"
    IFMDIFlattr                              = 0xF246,

    /// Identifier: "mdi-flip-to-back"
    IFMDIFlipToBack                          = 0xF247,

    /// Identifier: "mdi-flip-to-front"
    IFMDIFlipToFront                         = 0xF248,

    /// Identifier: "mdi-floppy"
    IFMDIFloppy                              = 0xF249,

    /// Identifier: "mdi-flower"
    IFMDIFlower                              = 0xF24A,

    /// Identifier: "mdi-folder"
    IFMDIFolder                              = 0xF24B,

    /// Identifier: "mdi-folder-account"
    IFMDIFolderAccount                       = 0xF24C,

    /// Identifier: "mdi-folder-download"
    IFMDIFolderDownload                      = 0xF24D,

    /// Identifier: "mdi-folder-google-drive"
    IFMDIFolderGoogleDrive                   = 0xF24E,

    /// Identifier: "mdi-folder-image"
    IFMDIFolderImage                         = 0xF24F,

    /// Identifier: "mdi-folder-lock"
    IFMDIFolderLock                          = 0xF250,

    /// Identifier: "mdi-folder-lock-open"
    IFMDIFolderLockOpen                      = 0xF251,

    /// Identifier: "mdi-folder-move"
    IFMDIFolderMove                          = 0xF252,

    /// Identifier: "mdi-folder-multiple"
    IFMDIFolderMultiple                      = 0xF253,

    /// Identifier: "mdi-folder-multiple-image"
    IFMDIFolderMultipleImage                 = 0xF254,

    /// Identifier: "mdi-folder-multiple-outline"
    IFMDIFolderMultipleOutline               = 0xF255,

    /// Identifier: "mdi-folder-outline"
    IFMDIFolderOutline                       = 0xF256,

    /// Identifier: "mdi-folder-plus"
    IFMDIFolderPlus                          = 0xF257,

    /// Identifier: "mdi-folder-remove"
    IFMDIFolderRemove                        = 0xF258,

    /// Identifier: "mdi-folder-upload"
    IFMDIFolderUpload                        = 0xF259,

    /// Identifier: "mdi-food"
    IFMDIFood                                = 0xF25A,

    /// Identifier: "mdi-food-apple"
    IFMDIFoodApple                           = 0xF25B,

    /// Identifier: "mdi-food-fork-drink"
    IFMDIFoodForkDrink                       = 0xF5F2,

    /// Identifier: "mdi-food-off"
    IFMDIFoodOff                             = 0xF5F3,

    /// Identifier: "mdi-food-variant"
    IFMDIFoodVariant                         = 0xF25C,

    /// Identifier: "mdi-football"
    IFMDIFootball                            = 0xF25D,

    /// Identifier: "mdi-football-australian"
    IFMDIFootballAustralian                  = 0xF25E,

    /// Identifier: "mdi-football-helmet"
    IFMDIFootballHelmet                      = 0xF25F,

    /// Identifier: "mdi-format-align-center"
    IFMDIFormatAlignCenter                   = 0xF260,

    /// Identifier: "mdi-format-align-justify"
    IFMDIFormatAlignJustify                  = 0xF261,

    /// Identifier: "mdi-format-align-left"
    IFMDIFormatAlignLeft                     = 0xF262,

    /// Identifier: "mdi-format-align-right"
    IFMDIFormatAlignRight                    = 0xF263,

    /// Identifier: "mdi-format-annotation-plus"
    IFMDIFormatAnnotationPlus                = 0xF646,

    /// Identifier: "mdi-format-bold"
    IFMDIFormatBold                          = 0xF264,

    /// Identifier: "mdi-format-clear"
    IFMDIFormatClear                         = 0xF265,

    /// Identifier: "mdi-format-color-fill"
    IFMDIFormatColorFill                     = 0xF266,

    /// Identifier: "mdi-format-float-center"
    IFMDIFormatFloatCenter                   = 0xF267,

    /// Identifier: "mdi-format-float-left"
    IFMDIFormatFloatLeft                     = 0xF268,

    /// Identifier: "mdi-format-float-none"
    IFMDIFormatFloatNone                     = 0xF269,

    /// Identifier: "mdi-format-float-right"
    IFMDIFormatFloatRight                    = 0xF26A,

    /// Identifier: "mdi-format-header-1"
    IFMDIFormatHeader1                       = 0xF26B,

    /// Identifier: "mdi-format-header-2"
    IFMDIFormatHeader2                       = 0xF26C,

    /// Identifier: "mdi-format-header-3"
    IFMDIFormatHeader3                       = 0xF26D,

    /// Identifier: "mdi-format-header-4"
    IFMDIFormatHeader4                       = 0xF26E,

    /// Identifier: "mdi-format-header-5"
    IFMDIFormatHeader5                       = 0xF26F,

    /// Identifier: "mdi-format-header-6"
    IFMDIFormatHeader6                       = 0xF270,

    /// Identifier: "mdi-format-header-decrease"
    IFMDIFormatHeaderDecrease                = 0xF271,

    /// Identifier: "mdi-format-header-equal"
    IFMDIFormatHeaderEqual                   = 0xF272,

    /// Identifier: "mdi-format-header-increase"
    IFMDIFormatHeaderIncrease                = 0xF273,

    /// Identifier: "mdi-format-header-pound"
    IFMDIFormatHeaderPound                   = 0xF274,

    /// Identifier: "mdi-format-horizontal-align-center"
    IFMDIFormatHorizontalAlignCenter         = 0xF61E,

    /// Identifier: "mdi-format-horizontal-align-left"
    IFMDIFormatHorizontalAlignLeft           = 0xF61F,

    /// Identifier: "mdi-format-horizontal-align-right"
    IFMDIFormatHorizontalAlignRight          = 0xF620,

    /// Identifier: "mdi-format-indent-decrease"
    IFMDIFormatIndentDecrease                = 0xF275,

    /// Identifier: "mdi-format-indent-increase"
    IFMDIFormatIndentIncrease                = 0xF276,

    /// Identifier: "mdi-format-italic"
    IFMDIFormatItalic                        = 0xF277,

    /// Identifier: "mdi-format-line-spacing"
    IFMDIFormatLineSpacing                   = 0xF278,

    /// Identifier: "mdi-format-line-style"
    IFMDIFormatLineStyle                     = 0xF5C8,

    /// Identifier: "mdi-format-line-weight"
    IFMDIFormatLineWeight                    = 0xF5C9,

    /// Identifier: "mdi-format-list-bulleted"
    IFMDIFormatListBulleted                  = 0xF279,

    /// Identifier: "mdi-format-list-bulleted-type"
    IFMDIFormatListBulletedType              = 0xF27A,

    /// Identifier: "mdi-format-list-numbers"
    IFMDIFormatListNumbers                   = 0xF27B,

    /// Identifier: "mdi-format-paint"
    IFMDIFormatPaint                         = 0xF27C,

    /// Identifier: "mdi-format-paragraph"
    IFMDIFormatParagraph                     = 0xF27D,

    /// Identifier: "mdi-format-quote"
    IFMDIFormatQuote                         = 0xF27E,

    /// Identifier: "mdi-format-size"
    IFMDIFormatSize                          = 0xF27F,

    /// Identifier: "mdi-format-strikethrough"
    IFMDIFormatStrikethrough                 = 0xF280,

    /// Identifier: "mdi-format-strikethrough-variant"
    IFMDIFormatStrikethroughVariant          = 0xF281,

    /// Identifier: "mdi-format-subscript"
    IFMDIFormatSubscript                     = 0xF282,

    /// Identifier: "mdi-format-superscript"
    IFMDIFormatSuperscript                   = 0xF283,

    /// Identifier: "mdi-format-text"
    IFMDIFormatText                          = 0xF284,

    /// Identifier: "mdi-format-textdirection-l-to-r"
    IFMDIFormatTextdirectionLToR             = 0xF285,

    /// Identifier: "mdi-format-textdirection-r-to-l"
    IFMDIFormatTextdirectionRToL             = 0xF286,

    /// Identifier: "mdi-format-title"
    IFMDIFormatTitle                         = 0xF5F4,

    /// Identifier: "mdi-format-underline"
    IFMDIFormatUnderline                     = 0xF287,

    /// Identifier: "mdi-format-vertical-align-bottom"
    IFMDIFormatVerticalAlignBottom           = 0xF621,

    /// Identifier: "mdi-format-vertical-align-center"
    IFMDIFormatVerticalAlignCenter           = 0xF622,

    /// Identifier: "mdi-format-vertical-align-top"
    IFMDIFormatVerticalAlignTop              = 0xF623,

    /// Identifier: "mdi-format-wrap-inline"
    IFMDIFormatWrapInline                    = 0xF288,

    /// Identifier: "mdi-format-wrap-square"
    IFMDIFormatWrapSquare                    = 0xF289,

    /// Identifier: "mdi-format-wrap-tight"
    IFMDIFormatWrapTight                     = 0xF28A,

    /// Identifier: "mdi-format-wrap-top-bottom"
    IFMDIFormatWrapTopBottom                 = 0xF28B,

    /// Identifier: "mdi-forum"
    IFMDIForum                               = 0xF28C,

    /// Identifier: "mdi-forward"
    IFMDIForward                             = 0xF28D,

    /// Identifier: "mdi-foursquare"
    IFMDIFoursquare                          = 0xF28E,

    /// Identifier: "mdi-fridge"
    IFMDIFridge                              = 0xF28F,

    /// Identifier: "mdi-fridge-filled"
    IFMDIFridgeFilled                        = 0xF290,

    /// Identifier: "mdi-fridge-filled-bottom"
    IFMDIFridgeFilledBottom                  = 0xF291,

    /// Identifier: "mdi-fridge-filled-top"
    IFMDIFridgeFilledTop                     = 0xF292,

    /// Identifier: "mdi-fullscreen"
    IFMDIFullscreen                          = 0xF293,

    /// Identifier: "mdi-fullscreen-exit"
    IFMDIFullscreenExit                      = 0xF294,

    /// Identifier: "mdi-function"
    IFMDIFunction                            = 0xF295,

    /// Identifier: "mdi-gamepad"
    IFMDIGamepad                             = 0xF296,

    /// Identifier: "mdi-gamepad-variant"
    IFMDIGamepadVariant                      = 0xF297,

    /// Identifier: "mdi-gas-cylinder"
    IFMDIGasCylinder                         = 0xF647,

    /// Identifier: "mdi-gas-station"
    IFMDIGasStation                          = 0xF298,

    /// Identifier: "mdi-gate"
    IFMDIGate                                = 0xF299,

    /// Identifier: "mdi-gauge"
    IFMDIGauge                               = 0xF29A,

    /// Identifier: "mdi-gavel"
    IFMDIGavel                               = 0xF29B,

    /// Identifier: "mdi-gender-female"
    IFMDIGenderFemale                        = 0xF29C,

    /// Identifier: "mdi-gender-male"
    IFMDIGenderMale                          = 0xF29D,

    /// Identifier: "mdi-gender-male-female"
    IFMDIGenderMaleFemale                    = 0xF29E,

    /// Identifier: "mdi-gender-transgender"
    IFMDIGenderTransgender                   = 0xF29F,

    /// Identifier: "mdi-ghost"
    IFMDIGhost                               = 0xF2A0,

    /// Identifier: "mdi-gift"
    IFMDIGift                                = 0xF2A1,

    /// Identifier: "mdi-git"
    IFMDIGit                                 = 0xF2A2,

    /// Identifier: "mdi-github-box"
    IFMDIGithubBox                           = 0xF2A3,

    /// Identifier: "mdi-github-circle"
    IFMDIGithubCircle                        = 0xF2A4,

    /// Identifier: "mdi-glass-flute"
    IFMDIGlassFlute                          = 0xF2A5,

    /// Identifier: "mdi-glass-mug"
    IFMDIGlassMug                            = 0xF2A6,

    /// Identifier: "mdi-glass-stange"
    IFMDIGlassStange                         = 0xF2A7,

    /// Identifier: "mdi-glass-tulip"
    IFMDIGlassTulip                          = 0xF2A8,

    /// Identifier: "mdi-glassdoor"
    IFMDIGlassdoor                           = 0xF2A9,

    /// Identifier: "mdi-glasses"
    IFMDIGlasses                             = 0xF2AA,

    /// Identifier: "mdi-gmail"
    IFMDIGmail                               = 0xF2AB,

    /// Identifier: "mdi-gnome"
    IFMDIGnome                               = 0xF2AC,

    /// Identifier: "mdi-google"
    IFMDIGoogle                              = 0xF2AD,

    /// Identifier: "mdi-google-cardboard"
    IFMDIGoogleCardboard                     = 0xF2AE,

    /// Identifier: "mdi-google-chrome"
    IFMDIGoogleChrome                        = 0xF2AF,

    /// Identifier: "mdi-google-circles"
    IFMDIGoogleCircles                       = 0xF2B0,

    /// Identifier: "mdi-google-circles-communities"
    IFMDIGoogleCirclesCommunities            = 0xF2B1,

    /// Identifier: "mdi-google-circles-extended"
    IFMDIGoogleCirclesExtended               = 0xF2B2,

    /// Identifier: "mdi-google-circles-group"
    IFMDIGoogleCirclesGroup                  = 0xF2B3,

    /// Identifier: "mdi-google-controller"
    IFMDIGoogleController                    = 0xF2B4,

    /// Identifier: "mdi-google-controller-off"
    IFMDIGoogleControllerOff                 = 0xF2B5,

    /// Identifier: "mdi-google-drive"
    IFMDIGoogleDrive                         = 0xF2B6,

    /// Identifier: "mdi-google-earth"
    IFMDIGoogleEarth                         = 0xF2B7,

    /// Identifier: "mdi-google-glass"
    IFMDIGoogleGlass                         = 0xF2B8,

    /// Identifier: "mdi-google-maps"
    IFMDIGoogleMaps                          = 0xF5F5,

    /// Identifier: "mdi-google-nearby"
    IFMDIGoogleNearby                        = 0xF2B9,

    /// Identifier: "mdi-google-pages"
    IFMDIGooglePages                         = 0xF2BA,

    /// Identifier: "mdi-google-physical-web"
    IFMDIGooglePhysicalWeb                   = 0xF2BB,

    /// Identifier: "mdi-google-play"
    IFMDIGooglePlay                          = 0xF2BC,

    /// Identifier: "mdi-google-plus"
    IFMDIGooglePlus                          = 0xF2BD,

    /// Identifier: "mdi-google-plus-box"
    IFMDIGooglePlusBox                       = 0xF2BE,

    /// Identifier: "mdi-google-translate"
    IFMDIGoogleTranslate                     = 0xF2BF,

    /// Identifier: "mdi-google-wallet"
    IFMDIGoogleWallet                        = 0xF2C0,

    /// Identifier: "mdi-grease-pencil"
    IFMDIGreasePencil                        = 0xF648,

    /// Identifier: "mdi-grid"
    IFMDIGrid                                = 0xF2C1,

    /// Identifier: "mdi-grid-off"
    IFMDIGridOff                             = 0xF2C2,

    /// Identifier: "mdi-group"
    IFMDIGroup                               = 0xF2C3,

    /// Identifier: "mdi-guitar-electric"
    IFMDIGuitarElectric                      = 0xF2C4,

    /// Identifier: "mdi-guitar-pick"
    IFMDIGuitarPick                          = 0xF2C5,

    /// Identifier: "mdi-guitar-pick-outline"
    IFMDIGuitarPickOutline                   = 0xF2C6,

    /// Identifier: "mdi-hackernews"
    IFMDIHackernews                          = 0xF624,

    /// Identifier: "mdi-hand-pointing-right"
    IFMDIHandPointingRight                   = 0xF2C7,

    /// Identifier: "mdi-hanger"
    IFMDIHanger                              = 0xF2C8,

    /// Identifier: "mdi-hangouts"
    IFMDIHangouts                            = 0xF2C9,

    /// Identifier: "mdi-harddisk"
    IFMDIHarddisk                            = 0xF2CA,

    /// Identifier: "mdi-headphones"
    IFMDIHeadphones                          = 0xF2CB,

    /// Identifier: "mdi-headphones-box"
    IFMDIHeadphonesBox                       = 0xF2CC,

    /// Identifier: "mdi-headphones-settings"
    IFMDIHeadphonesSettings                  = 0xF2CD,

    /// Identifier: "mdi-headset"
    IFMDIHeadset                             = 0xF2CE,

    /// Identifier: "mdi-headset-dock"
    IFMDIHeadsetDock                         = 0xF2CF,

    /// Identifier: "mdi-headset-off"
    IFMDIHeadsetOff                          = 0xF2D0,

    /// Identifier: "mdi-heart"
    IFMDIHeart                               = 0xF2D1,

    /// Identifier: "mdi-heart-box"
    IFMDIHeartBox                            = 0xF2D2,

    /// Identifier: "mdi-heart-box-outline"
    IFMDIHeartBoxOutline                     = 0xF2D3,

    /// Identifier: "mdi-heart-broken"
    IFMDIHeartBroken                         = 0xF2D4,

    /// Identifier: "mdi-heart-outline"
    IFMDIHeartOutline                        = 0xF2D5,

    /// Identifier: "mdi-heart-pulse"
    IFMDIHeartPulse                          = 0xF5F6,

    /// Identifier: "mdi-help"
    IFMDIHelp                                = 0xF2D6,

    /// Identifier: "mdi-help-circle"
    IFMDIHelpCircle                          = 0xF2D7,

    /// Identifier: "mdi-help-circle-outline"
    IFMDIHelpCircleOutline                   = 0xF625,

    /// Identifier: "mdi-hexagon"
    IFMDIHexagon                             = 0xF2D8,

    /// Identifier: "mdi-hexagon-outline"
    IFMDIHexagonOutline                      = 0xF2D9,

    /// Identifier: "mdi-highway"
    IFMDIHighway                             = 0xF5F7,

    /// Identifier: "mdi-history"
    IFMDIHistory                             = 0xF2DA,

    /// Identifier: "mdi-hololens"
    IFMDIHololens                            = 0xF2DB,

    /// Identifier: "mdi-home"
    IFMDIHome                                = 0xF2DC,

    /// Identifier: "mdi-home-map-marker"
    IFMDIHomeMapMarker                       = 0xF5F8,

    /// Identifier: "mdi-home-modern"
    IFMDIHomeModern                          = 0xF2DD,

    /// Identifier: "mdi-home-variant"
    IFMDIHomeVariant                         = 0xF2DE,

    /// Identifier: "mdi-hops"
    IFMDIHops                                = 0xF2DF,

    /// Identifier: "mdi-hospital"
    IFMDIHospital                            = 0xF2E0,

    /// Identifier: "mdi-hospital-building"
    IFMDIHospitalBuilding                    = 0xF2E1,

    /// Identifier: "mdi-hospital-marker"
    IFMDIHospitalMarker                      = 0xF2E2,

    /// Identifier: "mdi-hotel"
    IFMDIHotel                               = 0xF2E3,

    /// Identifier: "mdi-houzz"
    IFMDIHouzz                               = 0xF2E4,

    /// Identifier: "mdi-houzz-box"
    IFMDIHouzzBox                            = 0xF2E5,

    /// Identifier: "mdi-human"
    IFMDIHuman                               = 0xF2E6,

    /// Identifier: "mdi-human-child"
    IFMDIHumanChild                          = 0xF2E7,

    /// Identifier: "mdi-human-female"
    IFMDIHumanFemale                         = 0xF649,

    /// Identifier: "mdi-human-greeting"
    IFMDIHumanGreeting                       = 0xF64A,

    /// Identifier: "mdi-human-handsdown"
    IFMDIHumanHandsdown                      = 0xF64B,

    /// Identifier: "mdi-human-handsup"
    IFMDIHumanHandsup                        = 0xF64C,

    /// Identifier: "mdi-human-male"
    IFMDIHumanMale                           = 0xF64D,

    /// Identifier: "mdi-human-male-female"
    IFMDIHumanMaleFemale                     = 0xF2E8,

    /// Identifier: "mdi-human-pregnant"
    IFMDIHumanPregnant                       = 0xF5CF,

    /// Identifier: "mdi-image"
    IFMDIImage                               = 0xF2E9,

    /// Identifier: "mdi-image-album"
    IFMDIImageAlbum                          = 0xF2EA,

    /// Identifier: "mdi-image-area"
    IFMDIImageArea                           = 0xF2EB,

    /// Identifier: "mdi-image-area-close"
    IFMDIImageAreaClose                      = 0xF2EC,

    /// Identifier: "mdi-image-broken"
    IFMDIImageBroken                         = 0xF2ED,

    /// Identifier: "mdi-image-broken-variant"
    IFMDIImageBrokenVariant                  = 0xF2EE,

    /// Identifier: "mdi-image-filter"
    IFMDIImageFilter                         = 0xF2EF,

    /// Identifier: "mdi-image-filter-black-white"
    IFMDIImageFilterBlackWhite               = 0xF2F0,

    /// Identifier: "mdi-image-filter-center-focus"
    IFMDIImageFilterCenterFocus              = 0xF2F1,

    /// Identifier: "mdi-image-filter-center-focus-weak"
    IFMDIImageFilterCenterFocusWeak          = 0xF2F2,

    /// Identifier: "mdi-image-filter-drama"
    IFMDIImageFilterDrama                    = 0xF2F3,

    /// Identifier: "mdi-image-filter-frames"
    IFMDIImageFilterFrames                   = 0xF2F4,

    /// Identifier: "mdi-image-filter-hdr"
    IFMDIImageFilterHdr                      = 0xF2F5,

    /// Identifier: "mdi-image-filter-none"
    IFMDIImageFilterNone                     = 0xF2F6,

    /// Identifier: "mdi-image-filter-tilt-shift"
    IFMDIImageFilterTiltShift                = 0xF2F7,

    /// Identifier: "mdi-image-filter-vintage"
    IFMDIImageFilterVintage                  = 0xF2F8,

    /// Identifier: "mdi-image-multiple"
    IFMDIImageMultiple                       = 0xF2F9,

    /// Identifier: "mdi-import"
    IFMDIImport                              = 0xF2FA,

    /// Identifier: "mdi-inbox"
    IFMDIInbox                               = 0xF2FB,

    /// Identifier: "mdi-incognito"
    IFMDIIncognito                           = 0xF5F9,

    /// Identifier: "mdi-information"
    IFMDIInformation                         = 0xF2FC,

    /// Identifier: "mdi-information-outline"
    IFMDIInformationOutline                  = 0xF2FD,

    /// Identifier: "mdi-information-variant"
    IFMDIInformationVariant                  = 0xF64E,

    /// Identifier: "mdi-instagram"
    IFMDIInstagram                           = 0xF2FE,

    /// Identifier: "mdi-instapaper"
    IFMDIInstapaper                          = 0xF2FF,

    /// Identifier: "mdi-internet-explorer"
    IFMDIInternetExplorer                    = 0xF300,

    /// Identifier: "mdi-invert-colors"
    IFMDIInvertColors                        = 0xF301,

    /// Identifier: "mdi-jeepney"
    IFMDIJeepney                             = 0xF302,

    /// Identifier: "mdi-jira"
    IFMDIJira                                = 0xF303,

    /// Identifier: "mdi-jsfiddle"
    IFMDIJsfiddle                            = 0xF304,

    /// Identifier: "mdi-json"
    IFMDIJson                                = 0xF626,

    /// Identifier: "mdi-keg"
    IFMDIKeg                                 = 0xF305,

    /// Identifier: "mdi-kettle"
    IFMDIKettle                              = 0xF5FA,

    /// Identifier: "mdi-key"
    IFMDIKey                                 = 0xF306,

    /// Identifier: "mdi-key-change"
    IFMDIKeyChange                           = 0xF307,

    /// Identifier: "mdi-key-minus"
    IFMDIKeyMinus                            = 0xF308,

    /// Identifier: "mdi-key-plus"
    IFMDIKeyPlus                             = 0xF309,

    /// Identifier: "mdi-key-remove"
    IFMDIKeyRemove                           = 0xF30A,

    /// Identifier: "mdi-key-variant"
    IFMDIKeyVariant                          = 0xF30B,

    /// Identifier: "mdi-keyboard"
    IFMDIKeyboard                            = 0xF30C,

    /// Identifier: "mdi-keyboard-backspace"
    IFMDIKeyboardBackspace                   = 0xF30D,

    /// Identifier: "mdi-keyboard-caps"
    IFMDIKeyboardCaps                        = 0xF30E,

    /// Identifier: "mdi-keyboard-close"
    IFMDIKeyboardClose                       = 0xF30F,

    /// Identifier: "mdi-keyboard-off"
    IFMDIKeyboardOff                         = 0xF310,

    /// Identifier: "mdi-keyboard-return"
    IFMDIKeyboardReturn                      = 0xF311,

    /// Identifier: "mdi-keyboard-tab"
    IFMDIKeyboardTab                         = 0xF312,

    /// Identifier: "mdi-keyboard-variant"
    IFMDIKeyboardVariant                     = 0xF313,

    /// Identifier: "mdi-kodi"
    IFMDIKodi                                = 0xF314,

    /// Identifier: "mdi-label"
    IFMDILabel                               = 0xF315,

    /// Identifier: "mdi-label-outline"
    IFMDILabelOutline                        = 0xF316,

    /// Identifier: "mdi-lambda"
    IFMDILambda                              = 0xF627,

    /// Identifier: "mdi-lan"
    IFMDILan                                 = 0xF317,

    /// Identifier: "mdi-lan-connect"
    IFMDILanConnect                          = 0xF318,

    /// Identifier: "mdi-lan-disconnect"
    IFMDILanDisconnect                       = 0xF319,

    /// Identifier: "mdi-lan-pending"
    IFMDILanPending                          = 0xF31A,

    /// Identifier: "mdi-language-c"
    IFMDILanguageC                           = 0xF671,

    /// Identifier: "mdi-language-cpp"
    IFMDILanguageCpp                         = 0xF672,

    /// Identifier: "mdi-language-csharp"
    IFMDILanguageCsharp                      = 0xF31B,

    /// Identifier: "mdi-language-css3"
    IFMDILanguageCss3                        = 0xF31C,

    /// Identifier: "mdi-language-html5"
    IFMDILanguageHtml5                       = 0xF31D,

    /// Identifier: "mdi-language-javascript"
    IFMDILanguageJavascript                  = 0xF31E,

    /// Identifier: "mdi-language-php"
    IFMDILanguagePhp                         = 0xF31F,

    /// Identifier: "mdi-language-python"
    IFMDILanguagePython                      = 0xF320,

    /// Identifier: "mdi-language-python-text"
    IFMDILanguagePythonText                  = 0xF321,

    /// Identifier: "mdi-laptop"
    IFMDILaptop                              = 0xF322,

    /// Identifier: "mdi-laptop-chromebook"
    IFMDILaptopChromebook                    = 0xF323,

    /// Identifier: "mdi-laptop-mac"
    IFMDILaptopMac                           = 0xF324,

    /// Identifier: "mdi-laptop-windows"
    IFMDILaptopWindows                       = 0xF325,

    /// Identifier: "mdi-lastfm"
    IFMDILastfm                              = 0xF326,

    /// Identifier: "mdi-launch"
    IFMDILaunch                              = 0xF327,

    /// Identifier: "mdi-layers"
    IFMDILayers                              = 0xF328,

    /// Identifier: "mdi-layers-off"
    IFMDILayersOff                           = 0xF329,

    /// Identifier: "mdi-lead-pencil"
    IFMDILeadPencil                          = 0xF64F,

    /// Identifier: "mdi-leaf"
    IFMDILeaf                                = 0xF32A,

    /// Identifier: "mdi-led-off"
    IFMDILedOff                              = 0xF32B,

    /// Identifier: "mdi-led-on"
    IFMDILedOn                               = 0xF32C,

    /// Identifier: "mdi-led-outline"
    IFMDILedOutline                          = 0xF32D,

    /// Identifier: "mdi-led-variant-off"
    IFMDILedVariantOff                       = 0xF32E,

    /// Identifier: "mdi-led-variant-on"
    IFMDILedVariantOn                        = 0xF32F,

    /// Identifier: "mdi-led-variant-outline"
    IFMDILedVariantOutline                   = 0xF330,

    /// Identifier: "mdi-library"
    IFMDILibrary                             = 0xF331,

    /// Identifier: "mdi-library-books"
    IFMDILibraryBooks                        = 0xF332,

    /// Identifier: "mdi-library-music"
    IFMDILibraryMusic                        = 0xF333,

    /// Identifier: "mdi-library-plus"
    IFMDILibraryPlus                         = 0xF334,

    /// Identifier: "mdi-lightbulb"
    IFMDILightbulb                           = 0xF335,

    /// Identifier: "mdi-lightbulb-outline"
    IFMDILightbulbOutline                    = 0xF336,

    /// Identifier: "mdi-link"
    IFMDILink                                = 0xF337,

    /// Identifier: "mdi-link-off"
    IFMDILinkOff                             = 0xF338,

    /// Identifier: "mdi-link-variant"
    IFMDILinkVariant                         = 0xF339,

    /// Identifier: "mdi-link-variant-off"
    IFMDILinkVariantOff                      = 0xF33A,

    /// Identifier: "mdi-linkedin"
    IFMDILinkedin                            = 0xF33B,

    /// Identifier: "mdi-linkedin-box"
    IFMDILinkedinBox                         = 0xF33C,

    /// Identifier: "mdi-linux"
    IFMDILinux                               = 0xF33D,

    /// Identifier: "mdi-lock"
    IFMDILock                                = 0xF33E,

    /// Identifier: "mdi-lock-open"
    IFMDILockOpen                            = 0xF33F,

    /// Identifier: "mdi-lock-open-outline"
    IFMDILockOpenOutline                     = 0xF340,

    /// Identifier: "mdi-lock-outline"
    IFMDILockOutline                         = 0xF341,

    /// Identifier: "mdi-lock-plus"
    IFMDILockPlus                            = 0xF5FB,

    /// Identifier: "mdi-login"
    IFMDILogin                               = 0xF342,

    /// Identifier: "mdi-login-variant"
    IFMDILoginVariant                        = 0xF5FC,

    /// Identifier: "mdi-logout"
    IFMDILogout                              = 0xF343,

    /// Identifier: "mdi-logout-variant"
    IFMDILogoutVariant                       = 0xF5FD,

    /// Identifier: "mdi-looks"
    IFMDILooks                               = 0xF344,

    /// Identifier: "mdi-loupe"
    IFMDILoupe                               = 0xF345,

    /// Identifier: "mdi-lumx"
    IFMDILumx                                = 0xF346,

    /// Identifier: "mdi-magnet"
    IFMDIMagnet                              = 0xF347,

    /// Identifier: "mdi-magnet-on"
    IFMDIMagnetOn                            = 0xF348,

    /// Identifier: "mdi-magnify"
    IFMDIMagnify                             = 0xF349,

    /// Identifier: "mdi-magnify-minus"
    IFMDIMagnifyMinus                        = 0xF34A,

    /// Identifier: "mdi-magnify-plus"
    IFMDIMagnifyPlus                         = 0xF34B,

    /// Identifier: "mdi-mail-ru"
    IFMDIMailRu                              = 0xF34C,

    /// Identifier: "mdi-map"
    IFMDIMap                                 = 0xF34D,

    /// Identifier: "mdi-map-marker"
    IFMDIMapMarker                           = 0xF34E,

    /// Identifier: "mdi-map-marker-circle"
    IFMDIMapMarkerCircle                     = 0xF34F,

    /// Identifier: "mdi-map-marker-minus"
    IFMDIMapMarkerMinus                      = 0xF650,

    /// Identifier: "mdi-map-marker-multiple"
    IFMDIMapMarkerMultiple                   = 0xF350,

    /// Identifier: "mdi-map-marker-off"
    IFMDIMapMarkerOff                        = 0xF351,

    /// Identifier: "mdi-map-marker-plus"
    IFMDIMapMarkerPlus                       = 0xF651,

    /// Identifier: "mdi-map-marker-radius"
    IFMDIMapMarkerRadius                     = 0xF352,

    /// Identifier: "mdi-margin"
    IFMDIMargin                              = 0xF353,

    /// Identifier: "mdi-markdown"
    IFMDIMarkdown                            = 0xF354,

    /// Identifier: "mdi-marker"
    IFMDIMarker                              = 0xF652,

    /// Identifier: "mdi-marker-check"
    IFMDIMarkerCheck                         = 0xF355,

    /// Identifier: "mdi-martini"
    IFMDIMartini                             = 0xF356,

    /// Identifier: "mdi-material-ui"
    IFMDIMaterialUi                          = 0xF357,

    /// Identifier: "mdi-math-compass"
    IFMDIMathCompass                         = 0xF358,

    /// Identifier: "mdi-matrix"
    IFMDIMatrix                              = 0xF628,

    /// Identifier: "mdi-maxcdn"
    IFMDIMaxcdn                              = 0xF359,

    /// Identifier: "mdi-medium"
    IFMDIMedium                              = 0xF35A,

    /// Identifier: "mdi-memory"
    IFMDIMemory                              = 0xF35B,

    /// Identifier: "mdi-menu"
    IFMDIMenu                                = 0xF35C,

    /// Identifier: "mdi-menu-down"
    IFMDIMenuDown                            = 0xF35D,

    /// Identifier: "mdi-menu-left"
    IFMDIMenuLeft                            = 0xF35E,

    /// Identifier: "mdi-menu-right"
    IFMDIMenuRight                           = 0xF35F,

    /// Identifier: "mdi-menu-up"
    IFMDIMenuUp                              = 0xF360,

    /// Identifier: "mdi-message"
    IFMDIMessage                             = 0xF361,

    /// Identifier: "mdi-message-alert"
    IFMDIMessageAlert                        = 0xF362,

    /// Identifier: "mdi-message-draw"
    IFMDIMessageDraw                         = 0xF363,

    /// Identifier: "mdi-message-image"
    IFMDIMessageImage                        = 0xF364,

    /// Identifier: "mdi-message-outline"
    IFMDIMessageOutline                      = 0xF365,

    /// Identifier: "mdi-message-plus"
    IFMDIMessagePlus                         = 0xF653,

    /// Identifier: "mdi-message-processing"
    IFMDIMessageProcessing                   = 0xF366,

    /// Identifier: "mdi-message-reply"
    IFMDIMessageReply                        = 0xF367,

    /// Identifier: "mdi-message-reply-text"
    IFMDIMessageReplyText                    = 0xF368,

    /// Identifier: "mdi-message-text"
    IFMDIMessageText                         = 0xF369,

    /// Identifier: "mdi-message-text-outline"
    IFMDIMessageTextOutline                  = 0xF36A,

    /// Identifier: "mdi-message-video"
    IFMDIMessageVideo                        = 0xF36B,

    /// Identifier: "mdi-meteor"
    IFMDIMeteor                              = 0xF629,

    /// Identifier: "mdi-microphone"
    IFMDIMicrophone                          = 0xF36C,

    /// Identifier: "mdi-microphone-off"
    IFMDIMicrophoneOff                       = 0xF36D,

    /// Identifier: "mdi-microphone-outline"
    IFMDIMicrophoneOutline                   = 0xF36E,

    /// Identifier: "mdi-microphone-settings"
    IFMDIMicrophoneSettings                  = 0xF36F,

    /// Identifier: "mdi-microphone-variant"
    IFMDIMicrophoneVariant                   = 0xF370,

    /// Identifier: "mdi-microphone-variant-off"
    IFMDIMicrophoneVariantOff                = 0xF371,

    /// Identifier: "mdi-microscope"
    IFMDIMicroscope                          = 0xF654,

    /// Identifier: "mdi-microsoft"
    IFMDIMicrosoft                           = 0xF372,

    /// Identifier: "mdi-minecraft"
    IFMDIMinecraft                           = 0xF373,

    /// Identifier: "mdi-minus"
    IFMDIMinus                               = 0xF374,

    /// Identifier: "mdi-minus-box"
    IFMDIMinusBox                            = 0xF375,

    /// Identifier: "mdi-minus-circle"
    IFMDIMinusCircle                         = 0xF376,

    /// Identifier: "mdi-minus-circle-outline"
    IFMDIMinusCircleOutline                  = 0xF377,

    /// Identifier: "mdi-minus-network"
    IFMDIMinusNetwork                        = 0xF378,

    /// Identifier: "mdi-mixcloud"
    IFMDIMixcloud                            = 0xF62A,

    /// Identifier: "mdi-monitor"
    IFMDIMonitor                             = 0xF379,

    /// Identifier: "mdi-monitor-multiple"
    IFMDIMonitorMultiple                     = 0xF37A,

    /// Identifier: "mdi-more"
    IFMDIMore                                = 0xF37B,

    /// Identifier: "mdi-motorbike"
    IFMDIMotorbike                           = 0xF37C,

    /// Identifier: "mdi-mouse"
    IFMDIMouse                               = 0xF37D,

    /// Identifier: "mdi-mouse-off"
    IFMDIMouseOff                            = 0xF37E,

    /// Identifier: "mdi-mouse-variant"
    IFMDIMouseVariant                        = 0xF37F,

    /// Identifier: "mdi-mouse-variant-off"
    IFMDIMouseVariantOff                     = 0xF380,

    /// Identifier: "mdi-move-resize"
    IFMDIMoveResize                          = 0xF655,

    /// Identifier: "mdi-move-resize-variant"
    IFMDIMoveResizeVariant                   = 0xF656,

    /// Identifier: "mdi-movie"
    IFMDIMovie                               = 0xF381,

    /// Identifier: "mdi-multiplication"
    IFMDIMultiplication                      = 0xF382,

    /// Identifier: "mdi-multiplication-box"
    IFMDIMultiplicationBox                   = 0xF383,

    /// Identifier: "mdi-music-box"
    IFMDIMusicBox                            = 0xF384,

    /// Identifier: "mdi-music-box-outline"
    IFMDIMusicBoxOutline                     = 0xF385,

    /// Identifier: "mdi-music-circle"
    IFMDIMusicCircle                         = 0xF386,

    /// Identifier: "mdi-music-note"
    IFMDIMusicNote                           = 0xF387,

    /// Identifier: "mdi-music-note-bluetooth"
    IFMDIMusicNoteBluetooth                  = 0xF5FE,

    /// Identifier: "mdi-music-note-bluetooth-off"
    IFMDIMusicNoteBluetoothOff               = 0xF5FF,

    /// Identifier: "mdi-music-note-eighth"
    IFMDIMusicNoteEighth                     = 0xF388,

    /// Identifier: "mdi-music-note-half"
    IFMDIMusicNoteHalf                       = 0xF389,

    /// Identifier: "mdi-music-note-off"
    IFMDIMusicNoteOff                        = 0xF38A,

    /// Identifier: "mdi-music-note-quarter"
    IFMDIMusicNoteQuarter                    = 0xF38B,

    /// Identifier: "mdi-music-note-sixteenth"
    IFMDIMusicNoteSixteenth                  = 0xF38C,

    /// Identifier: "mdi-music-note-whole"
    IFMDIMusicNoteWhole                      = 0xF38D,

    /// Identifier: "mdi-nature"
    IFMDINature                              = 0xF38E,

    /// Identifier: "mdi-nature-people"
    IFMDINaturePeople                        = 0xF38F,

    /// Identifier: "mdi-navigation"
    IFMDINavigation                          = 0xF390,

    /// Identifier: "mdi-near-me"
    IFMDINearMe                              = 0xF5CD,

    /// Identifier: "mdi-needle"
    IFMDINeedle                              = 0xF391,

    /// Identifier: "mdi-nest-protect"
    IFMDINestProtect                         = 0xF392,

    /// Identifier: "mdi-nest-thermostat"
    IFMDINestThermostat                      = 0xF393,

    /// Identifier: "mdi-new-box"
    IFMDINewBox                              = 0xF394,

    /// Identifier: "mdi-newspaper"
    IFMDINewspaper                           = 0xF395,

    /// Identifier: "mdi-nfc"
    IFMDINfc                                 = 0xF396,

    /// Identifier: "mdi-nfc-tap"
    IFMDINfcTap                              = 0xF397,

    /// Identifier: "mdi-nfc-variant"
    IFMDINfcVariant                          = 0xF398,

    /// Identifier: "mdi-nodejs"
    IFMDINodejs                              = 0xF399,

    /// Identifier: "mdi-note"
    IFMDINote                                = 0xF39A,

    /// Identifier: "mdi-note-outline"
    IFMDINoteOutline                         = 0xF39B,

    /// Identifier: "mdi-note-plus"
    IFMDINotePlus                            = 0xF39C,

    /// Identifier: "mdi-note-plus-outline"
    IFMDINotePlusOutline                     = 0xF39D,

    /// Identifier: "mdi-note-text"
    IFMDINoteText                            = 0xF39E,

    /// Identifier: "mdi-notification-clear-all"
    IFMDINotificationClearAll                = 0xF39F,

    /// Identifier: "mdi-numeric"
    IFMDINumeric                             = 0xF3A0,

    /// Identifier: "mdi-numeric-0-box"
    IFMDINumeric0Box                         = 0xF3A1,

    /// Identifier: "mdi-numeric-0-box-multiple-outline"
    IFMDINumeric0BoxMultipleOutline          = 0xF3A2,

    /// Identifier: "mdi-numeric-0-box-outline"
    IFMDINumeric0BoxOutline                  = 0xF3A3,

    /// Identifier: "mdi-numeric-1-box"
    IFMDINumeric1Box                         = 0xF3A4,

    /// Identifier: "mdi-numeric-1-box-multiple-outline"
    IFMDINumeric1BoxMultipleOutline          = 0xF3A5,

    /// Identifier: "mdi-numeric-1-box-outline"
    IFMDINumeric1BoxOutline                  = 0xF3A6,

    /// Identifier: "mdi-numeric-2-box"
    IFMDINumeric2Box                         = 0xF3A7,

    /// Identifier: "mdi-numeric-2-box-multiple-outline"
    IFMDINumeric2BoxMultipleOutline          = 0xF3A8,

    /// Identifier: "mdi-numeric-2-box-outline"
    IFMDINumeric2BoxOutline                  = 0xF3A9,

    /// Identifier: "mdi-numeric-3-box"
    IFMDINumeric3Box                         = 0xF3AA,

    /// Identifier: "mdi-numeric-3-box-multiple-outline"
    IFMDINumeric3BoxMultipleOutline          = 0xF3AB,

    /// Identifier: "mdi-numeric-3-box-outline"
    IFMDINumeric3BoxOutline                  = 0xF3AC,

    /// Identifier: "mdi-numeric-4-box"
    IFMDINumeric4Box                         = 0xF3AD,

    /// Identifier: "mdi-numeric-4-box-multiple-outline"
    IFMDINumeric4BoxMultipleOutline          = 0xF3AE,

    /// Identifier: "mdi-numeric-4-box-outline"
    IFMDINumeric4BoxOutline                  = 0xF3AF,

    /// Identifier: "mdi-numeric-5-box"
    IFMDINumeric5Box                         = 0xF3B0,

    /// Identifier: "mdi-numeric-5-box-multiple-outline"
    IFMDINumeric5BoxMultipleOutline          = 0xF3B1,

    /// Identifier: "mdi-numeric-5-box-outline"
    IFMDINumeric5BoxOutline                  = 0xF3B2,

    /// Identifier: "mdi-numeric-6-box"
    IFMDINumeric6Box                         = 0xF3B3,

    /// Identifier: "mdi-numeric-6-box-multiple-outline"
    IFMDINumeric6BoxMultipleOutline          = 0xF3B4,

    /// Identifier: "mdi-numeric-6-box-outline"
    IFMDINumeric6BoxOutline                  = 0xF3B5,

    /// Identifier: "mdi-numeric-7-box"
    IFMDINumeric7Box                         = 0xF3B6,

    /// Identifier: "mdi-numeric-7-box-multiple-outline"
    IFMDINumeric7BoxMultipleOutline          = 0xF3B7,

    /// Identifier: "mdi-numeric-7-box-outline"
    IFMDINumeric7BoxOutline                  = 0xF3B8,

    /// Identifier: "mdi-numeric-8-box"
    IFMDINumeric8Box                         = 0xF3B9,

    /// Identifier: "mdi-numeric-8-box-multiple-outline"
    IFMDINumeric8BoxMultipleOutline          = 0xF3BA,

    /// Identifier: "mdi-numeric-8-box-outline"
    IFMDINumeric8BoxOutline                  = 0xF3BB,

    /// Identifier: "mdi-numeric-9-box"
    IFMDINumeric9Box                         = 0xF3BC,

    /// Identifier: "mdi-numeric-9-box-multiple-outline"
    IFMDINumeric9BoxMultipleOutline          = 0xF3BD,

    /// Identifier: "mdi-numeric-9-box-outline"
    IFMDINumeric9BoxOutline                  = 0xF3BE,

    /// Identifier: "mdi-numeric-9-plus-box"
    IFMDINumeric9PlusBox                     = 0xF3BF,

    /// Identifier: "mdi-numeric-9-plus-box-multiple-outline"
    IFMDINumeric9PlusBoxMultipleOutline      = 0xF3C0,

    /// Identifier: "mdi-numeric-9-plus-box-outline"
    IFMDINumeric9PlusBoxOutline              = 0xF3C1,

    /// Identifier: "mdi-nutrition"
    IFMDINutrition                           = 0xF3C2,

    /// Identifier: "mdi-octagon"
    IFMDIOctagon                             = 0xF3C3,

    /// Identifier: "mdi-octagon-outline"
    IFMDIOctagonOutline                      = 0xF3C4,

    /// Identifier: "mdi-odnoklassniki"
    IFMDIOdnoklassniki                       = 0xF3C5,

    /// Identifier: "mdi-office"
    IFMDIOffice                              = 0xF3C6,

    /// Identifier: "mdi-oil"
    IFMDIOil                                 = 0xF3C7,

    /// Identifier: "mdi-oil-temperature"
    IFMDIOilTemperature                      = 0xF3C8,

    /// Identifier: "mdi-omega"
    IFMDIOmega                               = 0xF3C9,

    /// Identifier: "mdi-onedrive"
    IFMDIOnedrive                            = 0xF3CA,

    /// Identifier: "mdi-opacity"
    IFMDIOpacity                             = 0xF5CC,

    /// Identifier: "mdi-open-in-app"
    IFMDIOpenInApp                           = 0xF3CB,

    /// Identifier: "mdi-open-in-new"
    IFMDIOpenInNew                           = 0xF3CC,

    /// Identifier: "mdi-openid"
    IFMDIOpenid                              = 0xF3CD,

    /// Identifier: "mdi-opera"
    IFMDIOpera                               = 0xF3CE,

    /// Identifier: "mdi-ornament"
    IFMDIOrnament                            = 0xF3CF,

    /// Identifier: "mdi-ornament-variant"
    IFMDIOrnamentVariant                     = 0xF3D0,

    /// Identifier: "mdi-outbox"
    IFMDIOutbox                              = 0xF3D1,

    /// Identifier: "mdi-owl"
    IFMDIOwl                                 = 0xF3D2,

    /// Identifier: "mdi-package"
    IFMDIPackage                             = 0xF3D3,

    /// Identifier: "mdi-package-down"
    IFMDIPackageDown                         = 0xF3D4,

    /// Identifier: "mdi-package-up"
    IFMDIPackageUp                           = 0xF3D5,

    /// Identifier: "mdi-package-variant"
    IFMDIPackageVariant                      = 0xF3D6,

    /// Identifier: "mdi-package-variant-closed"
    IFMDIPackageVariantClosed                = 0xF3D7,

    /// Identifier: "mdi-page-first"
    IFMDIPageFirst                           = 0xF600,

    /// Identifier: "mdi-page-last"
    IFMDIPageLast                            = 0xF601,

    /// Identifier: "mdi-palette"
    IFMDIPalette                             = 0xF3D8,

    /// Identifier: "mdi-palette-advanced"
    IFMDIPaletteAdvanced                     = 0xF3D9,

    /// Identifier: "mdi-panda"
    IFMDIPanda                               = 0xF3DA,

    /// Identifier: "mdi-pandora"
    IFMDIPandora                             = 0xF3DB,

    /// Identifier: "mdi-panorama"
    IFMDIPanorama                            = 0xF3DC,

    /// Identifier: "mdi-panorama-fisheye"
    IFMDIPanoramaFisheye                     = 0xF3DD,

    /// Identifier: "mdi-panorama-horizontal"
    IFMDIPanoramaHorizontal                  = 0xF3DE,

    /// Identifier: "mdi-panorama-vertical"
    IFMDIPanoramaVertical                    = 0xF3DF,

    /// Identifier: "mdi-panorama-wide-angle"
    IFMDIPanoramaWideAngle                   = 0xF3E0,

    /// Identifier: "mdi-paper-cut-vertical"
    IFMDIPaperCutVertical                    = 0xF3E1,

    /// Identifier: "mdi-paperclip"
    IFMDIPaperclip                           = 0xF3E2,

    /// Identifier: "mdi-parking"
    IFMDIParking                             = 0xF3E3,

    /// Identifier: "mdi-pause"
    IFMDIPause                               = 0xF3E4,

    /// Identifier: "mdi-pause-circle"
    IFMDIPauseCircle                         = 0xF3E5,

    /// Identifier: "mdi-pause-circle-outline"
    IFMDIPauseCircleOutline                  = 0xF3E6,

    /// Identifier: "mdi-pause-octagon"
    IFMDIPauseOctagon                        = 0xF3E7,

    /// Identifier: "mdi-pause-octagon-outline"
    IFMDIPauseOctagonOutline                 = 0xF3E8,

    /// Identifier: "mdi-paw"
    IFMDIPaw                                 = 0xF3E9,

    /// Identifier: "mdi-paw-off"
    IFMDIPawOff                              = 0xF657,

    /// Identifier: "mdi-pen"
    IFMDIPen                                 = 0xF3EA,

    /// Identifier: "mdi-pencil"
    IFMDIPencil                              = 0xF3EB,

    /// Identifier: "mdi-pencil-box"
    IFMDIPencilBox                           = 0xF3EC,

    /// Identifier: "mdi-pencil-box-outline"
    IFMDIPencilBoxOutline                    = 0xF3ED,

    /// Identifier: "mdi-pencil-lock"
    IFMDIPencilLock                          = 0xF3EE,

    /// Identifier: "mdi-pencil-off"
    IFMDIPencilOff                           = 0xF3EF,

    /// Identifier: "mdi-percent"
    IFMDIPercent                             = 0xF3F0,

    /// Identifier: "mdi-pharmacy"
    IFMDIPharmacy                            = 0xF3F1,

    /// Identifier: "mdi-phone"
    IFMDIPhone                               = 0xF3F2,

    /// Identifier: "mdi-phone-bluetooth"
    IFMDIPhoneBluetooth                      = 0xF3F3,

    /// Identifier: "mdi-phone-classic"
    IFMDIPhoneClassic                        = 0xF602,

    /// Identifier: "mdi-phone-forward"
    IFMDIPhoneForward                        = 0xF3F4,

    /// Identifier: "mdi-phone-hangup"
    IFMDIPhoneHangup                         = 0xF3F5,

    /// Identifier: "mdi-phone-in-talk"
    IFMDIPhoneInTalk                         = 0xF3F6,

    /// Identifier: "mdi-phone-incoming"
    IFMDIPhoneIncoming                       = 0xF3F7,

    /// Identifier: "mdi-phone-locked"
    IFMDIPhoneLocked                         = 0xF3F8,

    /// Identifier: "mdi-phone-log"
    IFMDIPhoneLog                            = 0xF3F9,

    /// Identifier: "mdi-phone-minus"
    IFMDIPhoneMinus                          = 0xF658,

    /// Identifier: "mdi-phone-missed"
    IFMDIPhoneMissed                         = 0xF3FA,

    /// Identifier: "mdi-phone-outgoing"
    IFMDIPhoneOutgoing                       = 0xF3FB,

    /// Identifier: "mdi-phone-paused"
    IFMDIPhonePaused                         = 0xF3FC,

    /// Identifier: "mdi-phone-plus"
    IFMDIPhonePlus                           = 0xF659,

    /// Identifier: "mdi-phone-settings"
    IFMDIPhoneSettings                       = 0xF3FD,

    /// Identifier: "mdi-phone-voip"
    IFMDIPhoneVoip                           = 0xF3FE,

    /// Identifier: "mdi-pi"
    IFMDIPi                                  = 0xF3FF,

    /// Identifier: "mdi-pi-box"
    IFMDIPiBox                               = 0xF400,

    /// Identifier: "mdi-pig"
    IFMDIPig                                 = 0xF401,

    /// Identifier: "mdi-pill"
    IFMDIPill                                = 0xF402,

    /// Identifier: "mdi-pin"
    IFMDIPin                                 = 0xF403,

    /// Identifier: "mdi-pin-off"
    IFMDIPinOff                              = 0xF404,

    /// Identifier: "mdi-pine-tree"
    IFMDIPineTree                            = 0xF405,

    /// Identifier: "mdi-pine-tree-box"
    IFMDIPineTreeBox                         = 0xF406,

    /// Identifier: "mdi-pinterest"
    IFMDIPinterest                           = 0xF407,

    /// Identifier: "mdi-pinterest-box"
    IFMDIPinterestBox                        = 0xF408,

    /// Identifier: "mdi-pizza"
    IFMDIPizza                               = 0xF409,

    /// Identifier: "mdi-play"
    IFMDIPlay                                = 0xF40A,

    /// Identifier: "mdi-play-box-outline"
    IFMDIPlayBoxOutline                      = 0xF40B,

    /// Identifier: "mdi-play-circle"
    IFMDIPlayCircle                          = 0xF40C,

    /// Identifier: "mdi-play-circle-outline"
    IFMDIPlayCircleOutline                   = 0xF40D,

    /// Identifier: "mdi-play-pause"
    IFMDIPlayPause                           = 0xF40E,

    /// Identifier: "mdi-play-protected-content"
    IFMDIPlayProtectedContent                = 0xF40F,

    /// Identifier: "mdi-playlist-check"
    IFMDIPlaylistCheck                       = 0xF5C7,

    /// Identifier: "mdi-playlist-minus"
    IFMDIPlaylistMinus                       = 0xF410,

    /// Identifier: "mdi-playlist-play"
    IFMDIPlaylistPlay                        = 0xF411,

    /// Identifier: "mdi-playlist-plus"
    IFMDIPlaylistPlus                        = 0xF412,

    /// Identifier: "mdi-playlist-remove"
    IFMDIPlaylistRemove                      = 0xF413,

    /// Identifier: "mdi-playstation"
    IFMDIPlaystation                         = 0xF414,

    /// Identifier: "mdi-plus"
    IFMDIPlus                                = 0xF415,

    /// Identifier: "mdi-plus-box"
    IFMDIPlusBox                             = 0xF416,

    /// Identifier: "mdi-plus-circle"
    IFMDIPlusCircle                          = 0xF417,

    /// Identifier: "mdi-plus-circle-multiple-outline"
    IFMDIPlusCircleMultipleOutline           = 0xF418,

    /// Identifier: "mdi-plus-circle-outline"
    IFMDIPlusCircleOutline                   = 0xF419,

    /// Identifier: "mdi-plus-network"
    IFMDIPlusNetwork                         = 0xF41A,

    /// Identifier: "mdi-plus-one"
    IFMDIPlusOne                             = 0xF41B,

    /// Identifier: "mdi-pocket"
    IFMDIPocket                              = 0xF41C,

    /// Identifier: "mdi-pokeball"
    IFMDIPokeball                            = 0xF41D,

    /// Identifier: "mdi-polaroid"
    IFMDIPolaroid                            = 0xF41E,

    /// Identifier: "mdi-poll"
    IFMDIPoll                                = 0xF41F,

    /// Identifier: "mdi-poll-box"
    IFMDIPollBox                             = 0xF420,

    /// Identifier: "mdi-polymer"
    IFMDIPolymer                             = 0xF421,

    /// Identifier: "mdi-pool"
    IFMDIPool                                = 0xF606,

    /// Identifier: "mdi-popcorn"
    IFMDIPopcorn                             = 0xF422,

    /// Identifier: "mdi-pot"
    IFMDIPot                                 = 0xF65A,

    /// Identifier: "mdi-pot-mix"
    IFMDIPotMix                              = 0xF65B,

    /// Identifier: "mdi-pound"
    IFMDIPound                               = 0xF423,

    /// Identifier: "mdi-pound-box"
    IFMDIPoundBox                            = 0xF424,

    /// Identifier: "mdi-power"
    IFMDIPower                               = 0xF425,

    /// Identifier: "mdi-power-settings"
    IFMDIPowerSettings                       = 0xF426,

    /// Identifier: "mdi-power-socket"
    IFMDIPowerSocket                         = 0xF427,

    /// Identifier: "mdi-presentation"
    IFMDIPresentation                        = 0xF428,

    /// Identifier: "mdi-presentation-play"
    IFMDIPresentationPlay                    = 0xF429,

    /// Identifier: "mdi-printer"
    IFMDIPrinter                             = 0xF42A,

    /// Identifier: "mdi-printer-3d"
    IFMDIPrinter3d                           = 0xF42B,

    /// Identifier: "mdi-printer-alert"
    IFMDIPrinterAlert                        = 0xF42C,

    /// Identifier: "mdi-priority-high"
    IFMDIPriorityHigh                        = 0xF603,

    /// Identifier: "mdi-priority-low"
    IFMDIPriorityLow                         = 0xF604,

    /// Identifier: "mdi-professional-hexagon"
    IFMDIProfessionalHexagon                 = 0xF42D,

    /// Identifier: "mdi-projector"
    IFMDIProjector                           = 0xF42E,

    /// Identifier: "mdi-projector-screen"
    IFMDIProjectorScreen                     = 0xF42F,

    /// Identifier: "mdi-pulse"
    IFMDIPulse                               = 0xF430,

    /// Identifier: "mdi-puzzle"
    IFMDIPuzzle                              = 0xF431,

    /// Identifier: "mdi-qqchat"
    IFMDIQqchat                              = 0xF605,

    /// Identifier: "mdi-qrcode"
    IFMDIQrcode                              = 0xF432,

    /// Identifier: "mdi-qrcode-scan"
    IFMDIQrcodeScan                          = 0xF433,

    /// Identifier: "mdi-quadcopter"
    IFMDIQuadcopter                          = 0xF434,

    /// Identifier: "mdi-quality-high"
    IFMDIQualityHigh                         = 0xF435,

    /// Identifier: "mdi-quicktime"
    IFMDIQuicktime                           = 0xF436,

    /// Identifier: "mdi-radar"
    IFMDIRadar                               = 0xF437,

    /// Identifier: "mdi-radiator"
    IFMDIRadiator                            = 0xF438,

    /// Identifier: "mdi-radio"
    IFMDIRadio                               = 0xF439,

    /// Identifier: "mdi-radio-handheld"
    IFMDIRadioHandheld                       = 0xF43A,

    /// Identifier: "mdi-radio-tower"
    IFMDIRadioTower                          = 0xF43B,

    /// Identifier: "mdi-radioactive"
    IFMDIRadioactive                         = 0xF43C,

    /// Identifier: "mdi-radiobox-blank"
    IFMDIRadioboxBlank                       = 0xF43D,

    /// Identifier: "mdi-radiobox-marked"
    IFMDIRadioboxMarked                      = 0xF43E,

    /// Identifier: "mdi-raspberrypi"
    IFMDIRaspberrypi                         = 0xF43F,

    /// Identifier: "mdi-ray-end"
    IFMDIRayEnd                              = 0xF440,

    /// Identifier: "mdi-ray-end-arrow"
    IFMDIRayEndArrow                         = 0xF441,

    /// Identifier: "mdi-ray-start"
    IFMDIRayStart                            = 0xF442,

    /// Identifier: "mdi-ray-start-arrow"
    IFMDIRayStartArrow                       = 0xF443,

    /// Identifier: "mdi-ray-start-end"
    IFMDIRayStartEnd                         = 0xF444,

    /// Identifier: "mdi-ray-vertex"
    IFMDIRayVertex                           = 0xF445,

    /// Identifier: "mdi-rdio"
    IFMDIRdio                                = 0xF446,

    /// Identifier: "mdi-read"
    IFMDIRead                                = 0xF447,

    /// Identifier: "mdi-readability"
    IFMDIReadability                         = 0xF448,

    /// Identifier: "mdi-receipt"
    IFMDIReceipt                             = 0xF449,

    /// Identifier: "mdi-record"
    IFMDIRecord                              = 0xF44A,

    /// Identifier: "mdi-record-rec"
    IFMDIRecordRec                           = 0xF44B,

    /// Identifier: "mdi-recycle"
    IFMDIRecycle                             = 0xF44C,

    /// Identifier: "mdi-reddit"
    IFMDIReddit                              = 0xF44D,

    /// Identifier: "mdi-redo"
    IFMDIRedo                                = 0xF44E,

    /// Identifier: "mdi-redo-variant"
    IFMDIRedoVariant                         = 0xF44F,

    /// Identifier: "mdi-refresh"
    IFMDIRefresh                             = 0xF450,

    /// Identifier: "mdi-regex"
    IFMDIRegex                               = 0xF451,

    /// Identifier: "mdi-relative-scale"
    IFMDIRelativeScale                       = 0xF452,

    /// Identifier: "mdi-reload"
    IFMDIReload                              = 0xF453,

    /// Identifier: "mdi-remote"
    IFMDIRemote                              = 0xF454,

    /// Identifier: "mdi-rename-box"
    IFMDIRenameBox                           = 0xF455,

    /// Identifier: "mdi-repeat"
    IFMDIRepeat                              = 0xF456,

    /// Identifier: "mdi-repeat-off"
    IFMDIRepeatOff                           = 0xF457,

    /// Identifier: "mdi-repeat-once"
    IFMDIRepeatOnce                          = 0xF458,

    /// Identifier: "mdi-replay"
    IFMDIReplay                              = 0xF459,

    /// Identifier: "mdi-reply"
    IFMDIReply                               = 0xF45A,

    /// Identifier: "mdi-reply-all"
    IFMDIReplyAll                            = 0xF45B,

    /// Identifier: "mdi-reproduction"
    IFMDIReproduction                        = 0xF45C,

    /// Identifier: "mdi-resize-bottom-right"
    IFMDIResizeBottomRight                   = 0xF45D,

    /// Identifier: "mdi-responsive"
    IFMDIResponsive                          = 0xF45E,

    /// Identifier: "mdi-rewind"
    IFMDIRewind                              = 0xF45F,

    /// Identifier: "mdi-ribbon"
    IFMDIRibbon                              = 0xF460,

    /// Identifier: "mdi-road"
    IFMDIRoad                                = 0xF461,

    /// Identifier: "mdi-road-variant"
    IFMDIRoadVariant                         = 0xF462,

    /// Identifier: "mdi-rocket"
    IFMDIRocket                              = 0xF463,

    /// Identifier: "mdi-rotate-3d"
    IFMDIRotate3d                            = 0xF464,

    /// Identifier: "mdi-rotate-left"
    IFMDIRotateLeft                          = 0xF465,

    /// Identifier: "mdi-rotate-left-variant"
    IFMDIRotateLeftVariant                   = 0xF466,

    /// Identifier: "mdi-rotate-right"
    IFMDIRotateRight                         = 0xF467,

    /// Identifier: "mdi-rotate-right-variant"
    IFMDIRotateRightVariant                  = 0xF468,

    /// Identifier: "mdi-rounded-corner"
    IFMDIRoundedCorner                       = 0xF607,

    /// Identifier: "mdi-router-wireless"
    IFMDIRouterWireless                      = 0xF469,

    /// Identifier: "mdi-routes"
    IFMDIRoutes                              = 0xF46A,

    /// Identifier: "mdi-rowing"
    IFMDIRowing                              = 0xF608,

    /// Identifier: "mdi-rss"
    IFMDIRss                                 = 0xF46B,

    /// Identifier: "mdi-rss-box"
    IFMDIRssBox                              = 0xF46C,

    /// Identifier: "mdi-ruler"
    IFMDIRuler                               = 0xF46D,

    /// Identifier: "mdi-run"
    IFMDIRun                                 = 0xF46E,

    /// Identifier: "mdi-sale"
    IFMDISale                                = 0xF46F,

    /// Identifier: "mdi-satellite"
    IFMDISatellite                           = 0xF470,

    /// Identifier: "mdi-satellite-variant"
    IFMDISatelliteVariant                    = 0xF471,

    /// Identifier: "mdi-saxophone"
    IFMDISaxophone                           = 0xF609,

    /// Identifier: "mdi-scale"
    IFMDIScale                               = 0xF472,

    /// Identifier: "mdi-scale-balance"
    IFMDIScaleBalance                        = 0xF5D1,

    /// Identifier: "mdi-scale-bathroom"
    IFMDIScaleBathroom                       = 0xF473,

    /// Identifier: "mdi-school"
    IFMDISchool                              = 0xF474,

    /// Identifier: "mdi-screen-rotation"
    IFMDIScreenRotation                      = 0xF475,

    /// Identifier: "mdi-screen-rotation-lock"
    IFMDIScreenRotationLock                  = 0xF476,

    /// Identifier: "mdi-screwdriver"
    IFMDIScrewdriver                         = 0xF477,

    /// Identifier: "mdi-script"
    IFMDIScript                              = 0xF478,

    /// Identifier: "mdi-sd"
    IFMDISd                                  = 0xF479,

    /// Identifier: "mdi-seal"
    IFMDISeal                                = 0xF47A,

    /// Identifier: "mdi-seat-flat"
    IFMDISeatFlat                            = 0xF47B,

    /// Identifier: "mdi-seat-flat-angled"
    IFMDISeatFlatAngled                      = 0xF47C,

    /// Identifier: "mdi-seat-individual-suite"
    IFMDISeatIndividualSuite                 = 0xF47D,

    /// Identifier: "mdi-seat-legroom-extra"
    IFMDISeatLegroomExtra                    = 0xF47E,

    /// Identifier: "mdi-seat-legroom-normal"
    IFMDISeatLegroomNormal                   = 0xF47F,

    /// Identifier: "mdi-seat-legroom-reduced"
    IFMDISeatLegroomReduced                  = 0xF480,

    /// Identifier: "mdi-seat-recline-extra"
    IFMDISeatReclineExtra                    = 0xF481,

    /// Identifier: "mdi-seat-recline-normal"
    IFMDISeatReclineNormal                   = 0xF482,

    /// Identifier: "mdi-security"
    IFMDISecurity                            = 0xF483,

    /// Identifier: "mdi-security-network"
    IFMDISecurityNetwork                     = 0xF484,

    /// Identifier: "mdi-select"
    IFMDISelect                              = 0xF485,

    /// Identifier: "mdi-select-all"
    IFMDISelectAll                           = 0xF486,

    /// Identifier: "mdi-select-inverse"
    IFMDISelectInverse                       = 0xF487,

    /// Identifier: "mdi-select-off"
    IFMDISelectOff                           = 0xF488,

    /// Identifier: "mdi-selection"
    IFMDISelection                           = 0xF489,

    /// Identifier: "mdi-send"
    IFMDISend                                = 0xF48A,

    /// Identifier: "mdi-serial-port"
    IFMDISerialPort                          = 0xF65C,

    /// Identifier: "mdi-server"
    IFMDIServer                              = 0xF48B,

    /// Identifier: "mdi-server-minus"
    IFMDIServerMinus                         = 0xF48C,

    /// Identifier: "mdi-server-network"
    IFMDIServerNetwork                       = 0xF48D,

    /// Identifier: "mdi-server-network-off"
    IFMDIServerNetworkOff                    = 0xF48E,

    /// Identifier: "mdi-server-off"
    IFMDIServerOff                           = 0xF48F,

    /// Identifier: "mdi-server-plus"
    IFMDIServerPlus                          = 0xF490,

    /// Identifier: "mdi-server-remove"
    IFMDIServerRemove                        = 0xF491,

    /// Identifier: "mdi-server-security"
    IFMDIServerSecurity                      = 0xF492,

    /// Identifier: "mdi-settings"
    IFMDISettings                            = 0xF493,

    /// Identifier: "mdi-settings-box"
    IFMDISettingsBox                         = 0xF494,

    /// Identifier: "mdi-shape-circle-plus"
    IFMDIShapeCirclePlus                     = 0xF65D,

    /// Identifier: "mdi-shape-plus"
    IFMDIShapePlus                           = 0xF495,

    /// Identifier: "mdi-shape-polygon-plus"
    IFMDIShapePolygonPlus                    = 0xF65E,

    /// Identifier: "mdi-shape-rectangle-plus"
    IFMDIShapeRectanglePlus                  = 0xF65F,

    /// Identifier: "mdi-shape-square-plus"
    IFMDIShapeSquarePlus                     = 0xF660,

    /// Identifier: "mdi-share"
    IFMDIShare                               = 0xF496,

    /// Identifier: "mdi-share-variant"
    IFMDIShareVariant                        = 0xF497,

    /// Identifier: "mdi-shield"
    IFMDIShield                              = 0xF498,

    /// Identifier: "mdi-shield-outline"
    IFMDIShieldOutline                       = 0xF499,

    /// Identifier: "mdi-shopping"
    IFMDIShopping                            = 0xF49A,

    /// Identifier: "mdi-shopping-music"
    IFMDIShoppingMusic                       = 0xF49B,

    /// Identifier: "mdi-shredder"
    IFMDIShredder                            = 0xF49C,

    /// Identifier: "mdi-shuffle"
    IFMDIShuffle                             = 0xF49D,

    /// Identifier: "mdi-shuffle-disabled"
    IFMDIShuffleDisabled                     = 0xF49E,

    /// Identifier: "mdi-shuffle-variant"
    IFMDIShuffleVariant                      = 0xF49F,

    /// Identifier: "mdi-sigma"
    IFMDISigma                               = 0xF4A0,

    /// Identifier: "mdi-sigma-lower"
    IFMDISigmaLower                          = 0xF62B,

    /// Identifier: "mdi-sign-caution"
    IFMDISignCaution                         = 0xF4A1,

    /// Identifier: "mdi-signal"
    IFMDISignal                              = 0xF4A2,

    /// Identifier: "mdi-signal-variant"
    IFMDISignalVariant                       = 0xF60A,

    /// Identifier: "mdi-silverware"
    IFMDISilverware                          = 0xF4A3,

    /// Identifier: "mdi-silverware-fork"
    IFMDISilverwareFork                      = 0xF4A4,

    /// Identifier: "mdi-silverware-spoon"
    IFMDISilverwareSpoon                     = 0xF4A5,

    /// Identifier: "mdi-silverware-variant"
    IFMDISilverwareVariant                   = 0xF4A6,

    /// Identifier: "mdi-sim"
    IFMDISim                                 = 0xF4A7,

    /// Identifier: "mdi-sim-alert"
    IFMDISimAlert                            = 0xF4A8,

    /// Identifier: "mdi-sim-off"
    IFMDISimOff                              = 0xF4A9,

    /// Identifier: "mdi-sitemap"
    IFMDISitemap                             = 0xF4AA,

    /// Identifier: "mdi-skip-backward"
    IFMDISkipBackward                        = 0xF4AB,

    /// Identifier: "mdi-skip-forward"
    IFMDISkipForward                         = 0xF4AC,

    /// Identifier: "mdi-skip-next"
    IFMDISkipNext                            = 0xF4AD,

    /// Identifier: "mdi-skip-next-circle"
    IFMDISkipNextCircle                      = 0xF661,

    /// Identifier: "mdi-skip-next-circle-outline"
    IFMDISkipNextCircleOutline               = 0xF662,

    /// Identifier: "mdi-skip-previous"
    IFMDISkipPrevious                        = 0xF4AE,

    /// Identifier: "mdi-skip-previous-circle"
    IFMDISkipPreviousCircle                  = 0xF663,

    /// Identifier: "mdi-skip-previous-circle-outline"
    IFMDISkipPreviousCircleOutline           = 0xF664,

    /// Identifier: "mdi-skype"
    IFMDISkype                               = 0xF4AF,

    /// Identifier: "mdi-skype-business"
    IFMDISkypeBusiness                       = 0xF4B0,

    /// Identifier: "mdi-slack"
    IFMDISlack                               = 0xF4B1,

    /// Identifier: "mdi-sleep"
    IFMDISleep                               = 0xF4B2,

    /// Identifier: "mdi-sleep-off"
    IFMDISleepOff                            = 0xF4B3,

    /// Identifier: "mdi-smoking"
    IFMDISmoking                             = 0xF4B4,

    /// Identifier: "mdi-smoking-off"
    IFMDISmokingOff                          = 0xF4B5,

    /// Identifier: "mdi-snapchat"
    IFMDISnapchat                            = 0xF4B6,

    /// Identifier: "mdi-snowman"
    IFMDISnowman                             = 0xF4B7,

    /// Identifier: "mdi-soccer"
    IFMDISoccer                              = 0xF4B8,

    /// Identifier: "mdi-sofa"
    IFMDISofa                                = 0xF4B9,

    /// Identifier: "mdi-sort"
    IFMDISort                                = 0xF4BA,

    /// Identifier: "mdi-sort-alphabetical"
    IFMDISortAlphabetical                    = 0xF4BB,

    /// Identifier: "mdi-sort-ascending"
    IFMDISortAscending                       = 0xF4BC,

    /// Identifier: "mdi-sort-descending"
    IFMDISortDescending                      = 0xF4BD,

    /// Identifier: "mdi-sort-numeric"
    IFMDISortNumeric                         = 0xF4BE,

    /// Identifier: "mdi-sort-variant"
    IFMDISortVariant                         = 0xF4BF,

    /// Identifier: "mdi-soundcloud"
    IFMDISoundcloud                          = 0xF4C0,

    /// Identifier: "mdi-source-branch"
    IFMDISourceBranch                        = 0xF62C,

    /// Identifier: "mdi-source-fork"
    IFMDISourceFork                          = 0xF4C1,

    /// Identifier: "mdi-source-merge"
    IFMDISourceMerge                         = 0xF62D,

    /// Identifier: "mdi-source-pull"
    IFMDISourcePull                          = 0xF4C2,

    /// Identifier: "mdi-speaker"
    IFMDISpeaker                             = 0xF4C3,

    /// Identifier: "mdi-speaker-off"
    IFMDISpeakerOff                          = 0xF4C4,

    /// Identifier: "mdi-speedometer"
    IFMDISpeedometer                         = 0xF4C5,

    /// Identifier: "mdi-spellcheck"
    IFMDISpellcheck                          = 0xF4C6,

    /// Identifier: "mdi-spotify"
    IFMDISpotify                             = 0xF4C7,

    /// Identifier: "mdi-spotlight"
    IFMDISpotlight                           = 0xF4C8,

    /// Identifier: "mdi-spotlight-beam"
    IFMDISpotlightBeam                       = 0xF4C9,

    /// Identifier: "mdi-spray"
    IFMDISpray                               = 0xF665,

    /// Identifier: "mdi-square-inc"
    IFMDISquareInc                           = 0xF4CA,

    /// Identifier: "mdi-square-inc-cash"
    IFMDISquareIncCash                       = 0xF4CB,

    /// Identifier: "mdi-stackexchange"
    IFMDIStackexchange                       = 0xF60B,

    /// Identifier: "mdi-stackoverflow"
    IFMDIStackoverflow                       = 0xF4CC,

    /// Identifier: "mdi-stairs"
    IFMDIStairs                              = 0xF4CD,

    /// Identifier: "mdi-star"
    IFMDIStar                                = 0xF4CE,

    /// Identifier: "mdi-star-circle"
    IFMDIStarCircle                          = 0xF4CF,

    /// Identifier: "mdi-star-half"
    IFMDIStarHalf                            = 0xF4D0,

    /// Identifier: "mdi-star-off"
    IFMDIStarOff                             = 0xF4D1,

    /// Identifier: "mdi-star-outline"
    IFMDIStarOutline                         = 0xF4D2,

    /// Identifier: "mdi-steam"
    IFMDISteam                               = 0xF4D3,

    /// Identifier: "mdi-steering"
    IFMDISteering                            = 0xF4D4,

    /// Identifier: "mdi-step-backward"
    IFMDIStepBackward                        = 0xF4D5,

    /// Identifier: "mdi-step-backward-2"
    IFMDIStepBackward2                       = 0xF4D6,

    /// Identifier: "mdi-step-forward"
    IFMDIStepForward                         = 0xF4D7,

    /// Identifier: "mdi-step-forward-2"
    IFMDIStepForward2                        = 0xF4D8,

    /// Identifier: "mdi-stethoscope"
    IFMDIStethoscope                         = 0xF4D9,

    /// Identifier: "mdi-sticker"
    IFMDISticker                             = 0xF5D0,

    /// Identifier: "mdi-stocking"
    IFMDIStocking                            = 0xF4DA,

    /// Identifier: "mdi-stop"
    IFMDIStop                                = 0xF4DB,

    /// Identifier: "mdi-stop-circle"
    IFMDIStopCircle                          = 0xF666,

    /// Identifier: "mdi-stop-circle-outline"
    IFMDIStopCircleOutline                   = 0xF667,

    /// Identifier: "mdi-store"
    IFMDIStore                               = 0xF4DC,

    /// Identifier: "mdi-store-24-hour"
    IFMDIStore24Hour                         = 0xF4DD,

    /// Identifier: "mdi-stove"
    IFMDIStove                               = 0xF4DE,

    /// Identifier: "mdi-subdirectory-arrow-left"
    IFMDISubdirectoryArrowLeft               = 0xF60C,

    /// Identifier: "mdi-subdirectory-arrow-right"
    IFMDISubdirectoryArrowRight              = 0xF60D,

    /// Identifier: "mdi-subway"
    IFMDISubway                              = 0xF4DF,

    /// Identifier: "mdi-sunglasses"
    IFMDISunglasses                          = 0xF4E0,

    /// Identifier: "mdi-surround-sound"
    IFMDISurroundSound                       = 0xF5C5,

    /// Identifier: "mdi-swap-horizontal"
    IFMDISwapHorizontal                      = 0xF4E1,

    /// Identifier: "mdi-swap-vertical"
    IFMDISwapVertical                        = 0xF4E2,

    /// Identifier: "mdi-swim"
    IFMDISwim                                = 0xF4E3,

    /// Identifier: "mdi-switch"
    IFMDISwitch                              = 0xF4E4,

    /// Identifier: "mdi-sword"
    IFMDISword                               = 0xF4E5,

    /// Identifier: "mdi-sync"
    IFMDISync                                = 0xF4E6,

    /// Identifier: "mdi-sync-alert"
    IFMDISyncAlert                           = 0xF4E7,

    /// Identifier: "mdi-sync-off"
    IFMDISyncOff                             = 0xF4E8,

    /// Identifier: "mdi-tab"
    IFMDITab                                 = 0xF4E9,

    /// Identifier: "mdi-tab-unselected"
    IFMDITabUnselected                       = 0xF4EA,

    /// Identifier: "mdi-table"
    IFMDITable                               = 0xF4EB,

    /// Identifier: "mdi-table-column-plus-after"
    IFMDITableColumnPlusAfter                = 0xF4EC,

    /// Identifier: "mdi-table-column-plus-before"
    IFMDITableColumnPlusBefore               = 0xF4ED,

    /// Identifier: "mdi-table-column-remove"
    IFMDITableColumnRemove                   = 0xF4EE,

    /// Identifier: "mdi-table-column-width"
    IFMDITableColumnWidth                    = 0xF4EF,

    /// Identifier: "mdi-table-edit"
    IFMDITableEdit                           = 0xF4F0,

    /// Identifier: "mdi-table-large"
    IFMDITableLarge                          = 0xF4F1,

    /// Identifier: "mdi-table-row-height"
    IFMDITableRowHeight                      = 0xF4F2,

    /// Identifier: "mdi-table-row-plus-after"
    IFMDITableRowPlusAfter                   = 0xF4F3,

    /// Identifier: "mdi-table-row-plus-before"
    IFMDITableRowPlusBefore                  = 0xF4F4,

    /// Identifier: "mdi-table-row-remove"
    IFMDITableRowRemove                      = 0xF4F5,

    /// Identifier: "mdi-tablet"
    IFMDITablet                              = 0xF4F6,

    /// Identifier: "mdi-tablet-android"
    IFMDITabletAndroid                       = 0xF4F7,

    /// Identifier: "mdi-tablet-ipad"
    IFMDITabletIpad                          = 0xF4F8,

    /// Identifier: "mdi-tag"
    IFMDITag                                 = 0xF4F9,

    /// Identifier: "mdi-tag-faces"
    IFMDITagFaces                            = 0xF4FA,

    /// Identifier: "mdi-tag-multiple"
    IFMDITagMultiple                         = 0xF4FB,

    /// Identifier: "mdi-tag-outline"
    IFMDITagOutline                          = 0xF4FC,

    /// Identifier: "mdi-tag-text-outline"
    IFMDITagTextOutline                      = 0xF4FD,

    /// Identifier: "mdi-target"
    IFMDITarget                              = 0xF4FE,

    /// Identifier: "mdi-taxi"
    IFMDITaxi                                = 0xF4FF,

    /// Identifier: "mdi-teamviewer"
    IFMDITeamviewer                          = 0xF500,

    /// Identifier: "mdi-telegram"
    IFMDITelegram                            = 0xF501,

    /// Identifier: "mdi-television"
    IFMDITelevision                          = 0xF502,

    /// Identifier: "mdi-television-guide"
    IFMDITelevisionGuide                     = 0xF503,

    /// Identifier: "mdi-temperature-celsius"
    IFMDITemperatureCelsius                  = 0xF504,

    /// Identifier: "mdi-temperature-fahrenheit"
    IFMDITemperatureFahrenheit               = 0xF505,

    /// Identifier: "mdi-temperature-kelvin"
    IFMDITemperatureKelvin                   = 0xF506,

    /// Identifier: "mdi-tennis"
    IFMDITennis                              = 0xF507,

    /// Identifier: "mdi-tent"
    IFMDITent                                = 0xF508,

    /// Identifier: "mdi-terrain"
    IFMDITerrain                             = 0xF509,

    /// Identifier: "mdi-test-tube"
    IFMDITestTube                            = 0xF668,

    /// Identifier: "mdi-text-shadow"
    IFMDITextShadow                          = 0xF669,

    /// Identifier: "mdi-text-to-speech"
    IFMDITextToSpeech                        = 0xF50A,

    /// Identifier: "mdi-text-to-speech-off"
    IFMDITextToSpeechOff                     = 0xF50B,

    /// Identifier: "mdi-textbox"
    IFMDITextbox                             = 0xF60E,

    /// Identifier: "mdi-texture"
    IFMDITexture                             = 0xF50C,

    /// Identifier: "mdi-theater"
    IFMDITheater                             = 0xF50D,

    /// Identifier: "mdi-theme-light-dark"
    IFMDIThemeLightDark                      = 0xF50E,

    /// Identifier: "mdi-thermometer"
    IFMDIThermometer                         = 0xF50F,

    /// Identifier: "mdi-thermometer-lines"
    IFMDIThermometerLines                    = 0xF510,

    /// Identifier: "mdi-thumb-down"
    IFMDIThumbDown                           = 0xF511,

    /// Identifier: "mdi-thumb-down-outline"
    IFMDIThumbDownOutline                    = 0xF512,

    /// Identifier: "mdi-thumb-up"
    IFMDIThumbUp                             = 0xF513,

    /// Identifier: "mdi-thumb-up-outline"
    IFMDIThumbUpOutline                      = 0xF514,

    /// Identifier: "mdi-thumbs-up-down"
    IFMDIThumbsUpDown                        = 0xF515,

    /// Identifier: "mdi-ticket"
    IFMDITicket                              = 0xF516,

    /// Identifier: "mdi-ticket-account"
    IFMDITicketAccount                       = 0xF517,

    /// Identifier: "mdi-ticket-confirmation"
    IFMDITicketConfirmation                  = 0xF518,

    /// Identifier: "mdi-tie"
    IFMDITie                                 = 0xF519,

    /// Identifier: "mdi-timelapse"
    IFMDITimelapse                           = 0xF51A,

    /// Identifier: "mdi-timer"
    IFMDITimer                               = 0xF51B,

    /// Identifier: "mdi-timer-10"
    IFMDITimer10                             = 0xF51C,

    /// Identifier: "mdi-timer-3"
    IFMDITimer3                              = 0xF51D,

    /// Identifier: "mdi-timer-off"
    IFMDITimerOff                            = 0xF51E,

    /// Identifier: "mdi-timer-sand"
    IFMDITimerSand                           = 0xF51F,

    /// Identifier: "mdi-timetable"
    IFMDITimetable                           = 0xF520,

    /// Identifier: "mdi-toggle-switch"
    IFMDIToggleSwitch                        = 0xF521,

    /// Identifier: "mdi-toggle-switch-off"
    IFMDIToggleSwitchOff                     = 0xF522,

    /// Identifier: "mdi-tooltip"
    IFMDITooltip                             = 0xF523,

    /// Identifier: "mdi-tooltip-edit"
    IFMDITooltipEdit                         = 0xF524,

    /// Identifier: "mdi-tooltip-image"
    IFMDITooltipImage                        = 0xF525,

    /// Identifier: "mdi-tooltip-outline"
    IFMDITooltipOutline                      = 0xF526,

    /// Identifier: "mdi-tooltip-outline-plus"
    IFMDITooltipOutlinePlus                  = 0xF527,

    /// Identifier: "mdi-tooltip-text"
    IFMDITooltipText                         = 0xF528,

    /// Identifier: "mdi-tooth"
    IFMDITooth                               = 0xF529,

    /// Identifier: "mdi-tor"
    IFMDITor                                 = 0xF52A,

    /// Identifier: "mdi-traffic-light"
    IFMDITrafficLight                        = 0xF52B,

    /// Identifier: "mdi-train"
    IFMDITrain                               = 0xF52C,

    /// Identifier: "mdi-tram"
    IFMDITram                                = 0xF52D,

    /// Identifier: "mdi-transcribe"
    IFMDITranscribe                          = 0xF52E,

    /// Identifier: "mdi-transcribe-close"
    IFMDITranscribeClose                     = 0xF52F,

    /// Identifier: "mdi-transfer"
    IFMDITransfer                            = 0xF530,

    /// Identifier: "mdi-translate"
    IFMDITranslate                           = 0xF5CA,

    /// Identifier: "mdi-tree"
    IFMDITree                                = 0xF531,

    /// Identifier: "mdi-trello"
    IFMDITrello                              = 0xF532,

    /// Identifier: "mdi-trending-down"
    IFMDITrendingDown                        = 0xF533,

    /// Identifier: "mdi-trending-neutral"
    IFMDITrendingNeutral                     = 0xF534,

    /// Identifier: "mdi-trending-up"
    IFMDITrendingUp                          = 0xF535,

    /// Identifier: "mdi-triangle"
    IFMDITriangle                            = 0xF536,

    /// Identifier: "mdi-triangle-outline"
    IFMDITriangleOutline                     = 0xF537,

    /// Identifier: "mdi-trophy"
    IFMDITrophy                              = 0xF538,

    /// Identifier: "mdi-trophy-award"
    IFMDITrophyAward                         = 0xF539,

    /// Identifier: "mdi-trophy-outline"
    IFMDITrophyOutline                       = 0xF53A,

    /// Identifier: "mdi-trophy-variant"
    IFMDITrophyVariant                       = 0xF53B,

    /// Identifier: "mdi-trophy-variant-outline"
    IFMDITrophyVariantOutline                = 0xF53C,

    /// Identifier: "mdi-truck"
    IFMDITruck                               = 0xF53D,

    /// Identifier: "mdi-truck-delivery"
    IFMDITruckDelivery                       = 0xF53E,

    /// Identifier: "mdi-tshirt-crew"
    IFMDITshirtCrew                          = 0xF53F,

    /// Identifier: "mdi-tshirt-v"
    IFMDITshirtV                             = 0xF540,

    /// Identifier: "mdi-tumblr"
    IFMDITumblr                              = 0xF541,

    /// Identifier: "mdi-tumblr-reblog"
    IFMDITumblrReblog                        = 0xF542,

    /// Identifier: "mdi-tune"
    IFMDITune                                = 0xF62E,

    /// Identifier: "mdi-tune-vertical"
    IFMDITuneVertical                        = 0xF66A,

    /// Identifier: "mdi-twitch"
    IFMDITwitch                              = 0xF543,

    /// Identifier: "mdi-twitter"
    IFMDITwitter                             = 0xF544,

    /// Identifier: "mdi-twitter-box"
    IFMDITwitterBox                          = 0xF545,

    /// Identifier: "mdi-twitter-circle"
    IFMDITwitterCircle                       = 0xF546,

    /// Identifier: "mdi-twitter-retweet"
    IFMDITwitterRetweet                      = 0xF547,

    /// Identifier: "mdi-ubuntu"
    IFMDIUbuntu                              = 0xF548,

    /// Identifier: "mdi-umbraco"
    IFMDIUmbraco                             = 0xF549,

    /// Identifier: "mdi-umbrella"
    IFMDIUmbrella                            = 0xF54A,

    /// Identifier: "mdi-umbrella-outline"
    IFMDIUmbrellaOutline                     = 0xF54B,

    /// Identifier: "mdi-undo"
    IFMDIUndo                                = 0xF54C,

    /// Identifier: "mdi-undo-variant"
    IFMDIUndoVariant                         = 0xF54D,

    /// Identifier: "mdi-unfold-less"
    IFMDIUnfoldLess                          = 0xF54E,

    /// Identifier: "mdi-unfold-more"
    IFMDIUnfoldMore                          = 0xF54F,

    /// Identifier: "mdi-ungroup"
    IFMDIUngroup                             = 0xF550,

    /// Identifier: "mdi-untappd"
    IFMDIUntappd                             = 0xF551,

    /// Identifier: "mdi-upload"
    IFMDIUpload                              = 0xF552,

    /// Identifier: "mdi-usb"
    IFMDIUsb                                 = 0xF553,

    /// Identifier: "mdi-vector-arrange-above"
    IFMDIVectorArrangeAbove                  = 0xF554,

    /// Identifier: "mdi-vector-arrange-below"
    IFMDIVectorArrangeBelow                  = 0xF555,

    /// Identifier: "mdi-vector-circle"
    IFMDIVectorCircle                        = 0xF556,

    /// Identifier: "mdi-vector-circle-variant"
    IFMDIVectorCircleVariant                 = 0xF557,

    /// Identifier: "mdi-vector-combine"
    IFMDIVectorCombine                       = 0xF558,

    /// Identifier: "mdi-vector-curve"
    IFMDIVectorCurve                         = 0xF559,

    /// Identifier: "mdi-vector-difference"
    IFMDIVectorDifference                    = 0xF55A,

    /// Identifier: "mdi-vector-difference-ab"
    IFMDIVectorDifferenceAb                  = 0xF55B,

    /// Identifier: "mdi-vector-difference-ba"
    IFMDIVectorDifferenceBa                  = 0xF55C,

    /// Identifier: "mdi-vector-intersection"
    IFMDIVectorIntersection                  = 0xF55D,

    /// Identifier: "mdi-vector-line"
    IFMDIVectorLine                          = 0xF55E,

    /// Identifier: "mdi-vector-point"
    IFMDIVectorPoint                         = 0xF55F,

    /// Identifier: "mdi-vector-polygon"
    IFMDIVectorPolygon                       = 0xF560,

    /// Identifier: "mdi-vector-polyline"
    IFMDIVectorPolyline                      = 0xF561,

    /// Identifier: "mdi-vector-rectangle"
    IFMDIVectorRectangle                     = 0xF5C6,

    /// Identifier: "mdi-vector-selection"
    IFMDIVectorSelection                     = 0xF562,

    /// Identifier: "mdi-vector-square"
    IFMDIVectorSquare                        = 0xF001,

    /// Identifier: "mdi-vector-triangle"
    IFMDIVectorTriangle                      = 0xF563,

    /// Identifier: "mdi-vector-union"
    IFMDIVectorUnion                         = 0xF564,

    /// Identifier: "mdi-verified"
    IFMDIVerified                            = 0xF565,

    /// Identifier: "mdi-vibrate"
    IFMDIVibrate                             = 0xF566,

    /// Identifier: "mdi-video"
    IFMDIVideo                               = 0xF567,

    /// Identifier: "mdi-video-off"
    IFMDIVideoOff                            = 0xF568,

    /// Identifier: "mdi-video-switch"
    IFMDIVideoSwitch                         = 0xF569,

    /// Identifier: "mdi-view-agenda"
    IFMDIViewAgenda                          = 0xF56A,

    /// Identifier: "mdi-view-array"
    IFMDIViewArray                           = 0xF56B,

    /// Identifier: "mdi-view-carousel"
    IFMDIViewCarousel                        = 0xF56C,

    /// Identifier: "mdi-view-column"
    IFMDIViewColumn                          = 0xF56D,

    /// Identifier: "mdi-view-dashboard"
    IFMDIViewDashboard                       = 0xF56E,

    /// Identifier: "mdi-view-day"
    IFMDIViewDay                             = 0xF56F,

    /// Identifier: "mdi-view-grid"
    IFMDIViewGrid                            = 0xF570,

    /// Identifier: "mdi-view-headline"
    IFMDIViewHeadline                        = 0xF571,

    /// Identifier: "mdi-view-list"
    IFMDIViewList                            = 0xF572,

    /// Identifier: "mdi-view-module"
    IFMDIViewModule                          = 0xF573,

    /// Identifier: "mdi-view-quilt"
    IFMDIViewQuilt                           = 0xF574,

    /// Identifier: "mdi-view-stream"
    IFMDIViewStream                          = 0xF575,

    /// Identifier: "mdi-view-week"
    IFMDIViewWeek                            = 0xF576,

    /// Identifier: "mdi-vimeo"
    IFMDIVimeo                               = 0xF577,

    /// Identifier: "mdi-vine"
    IFMDIVine                                = 0xF578,

    /// Identifier: "mdi-violin"
    IFMDIViolin                              = 0xF60F,

    /// Identifier: "mdi-visualstudio"
    IFMDIVisualstudio                        = 0xF610,

    /// Identifier: "mdi-vk"
    IFMDIVk                                  = 0xF579,

    /// Identifier: "mdi-vk-box"
    IFMDIVkBox                               = 0xF57A,

    /// Identifier: "mdi-vk-circle"
    IFMDIVkCircle                            = 0xF57B,

    /// Identifier: "mdi-vlc"
    IFMDIVlc                                 = 0xF57C,

    /// Identifier: "mdi-voice"
    IFMDIVoice                               = 0xF5CB,

    /// Identifier: "mdi-voicemail"
    IFMDIVoicemail                           = 0xF57D,

    /// Identifier: "mdi-volume-high"
    IFMDIVolumeHigh                          = 0xF57E,

    /// Identifier: "mdi-volume-low"
    IFMDIVolumeLow                           = 0xF57F,

    /// Identifier: "mdi-volume-medium"
    IFMDIVolumeMedium                        = 0xF580,

    /// Identifier: "mdi-volume-off"
    IFMDIVolumeOff                           = 0xF581,

    /// Identifier: "mdi-vpn"
    IFMDIVpn                                 = 0xF582,

    /// Identifier: "mdi-walk"
    IFMDIWalk                                = 0xF583,

    /// Identifier: "mdi-wallet"
    IFMDIWallet                              = 0xF584,

    /// Identifier: "mdi-wallet-giftcard"
    IFMDIWalletGiftcard                      = 0xF585,

    /// Identifier: "mdi-wallet-membership"
    IFMDIWalletMembership                    = 0xF586,

    /// Identifier: "mdi-wallet-travel"
    IFMDIWalletTravel                        = 0xF587,

    /// Identifier: "mdi-wan"
    IFMDIWan                                 = 0xF588,

    /// Identifier: "mdi-watch"
    IFMDIWatch                               = 0xF589,

    /// Identifier: "mdi-watch-export"
    IFMDIWatchExport                         = 0xF58A,

    /// Identifier: "mdi-watch-import"
    IFMDIWatchImport                         = 0xF58B,

    /// Identifier: "mdi-water"
    IFMDIWater                               = 0xF58C,

    /// Identifier: "mdi-water-off"
    IFMDIWaterOff                            = 0xF58D,

    /// Identifier: "mdi-water-percent"
    IFMDIWaterPercent                        = 0xF58E,

    /// Identifier: "mdi-water-pump"
    IFMDIWaterPump                           = 0xF58F,

    /// Identifier: "mdi-watermark"
    IFMDIWatermark                           = 0xF612,

    /// Identifier: "mdi-weather-cloudy"
    IFMDIWeatherCloudy                       = 0xF590,

    /// Identifier: "mdi-weather-fog"
    IFMDIWeatherFog                          = 0xF591,

    /// Identifier: "mdi-weather-hail"
    IFMDIWeatherHail                         = 0xF592,

    /// Identifier: "mdi-weather-lightning"
    IFMDIWeatherLightning                    = 0xF593,

    /// Identifier: "mdi-weather-night"
    IFMDIWeatherNight                        = 0xF594,

    /// Identifier: "mdi-weather-partlycloudy"
    IFMDIWeatherPartlycloudy                 = 0xF595,

    /// Identifier: "mdi-weather-pouring"
    IFMDIWeatherPouring                      = 0xF596,

    /// Identifier: "mdi-weather-rainy"
    IFMDIWeatherRainy                        = 0xF597,

    /// Identifier: "mdi-weather-snowy"
    IFMDIWeatherSnowy                        = 0xF598,

    /// Identifier: "mdi-weather-sunny"
    IFMDIWeatherSunny                        = 0xF599,

    /// Identifier: "mdi-weather-sunset"
    IFMDIWeatherSunset                       = 0xF59A,

    /// Identifier: "mdi-weather-sunset-down"
    IFMDIWeatherSunsetDown                   = 0xF59B,

    /// Identifier: "mdi-weather-sunset-up"
    IFMDIWeatherSunsetUp                     = 0xF59C,

    /// Identifier: "mdi-weather-windy"
    IFMDIWeatherWindy                        = 0xF59D,

    /// Identifier: "mdi-weather-windy-variant"
    IFMDIWeatherWindyVariant                 = 0xF59E,

    /// Identifier: "mdi-web"
    IFMDIWeb                                 = 0xF59F,

    /// Identifier: "mdi-webcam"
    IFMDIWebcam                              = 0xF5A0,

    /// Identifier: "mdi-webhook"
    IFMDIWebhook                             = 0xF62F,

    /// Identifier: "mdi-wechat"
    IFMDIWechat                              = 0xF611,

    /// Identifier: "mdi-weight"
    IFMDIWeight                              = 0xF5A1,

    /// Identifier: "mdi-weight-kilogram"
    IFMDIWeightKilogram                      = 0xF5A2,

    /// Identifier: "mdi-whatsapp"
    IFMDIWhatsapp                            = 0xF5A3,

    /// Identifier: "mdi-wheelchair-accessibility"
    IFMDIWheelchairAccessibility             = 0xF5A4,

    /// Identifier: "mdi-white-balance-auto"
    IFMDIWhiteBalanceAuto                    = 0xF5A5,

    /// Identifier: "mdi-white-balance-incandescent"
    IFMDIWhiteBalanceIncandescent            = 0xF5A6,

    /// Identifier: "mdi-white-balance-iridescent"
    IFMDIWhiteBalanceIridescent              = 0xF5A7,

    /// Identifier: "mdi-white-balance-sunny"
    IFMDIWhiteBalanceSunny                   = 0xF5A8,

    /// Identifier: "mdi-wifi"
    IFMDIWifi                                = 0xF5A9,

    /// Identifier: "mdi-wifi-off"
    IFMDIWifiOff                             = 0xF5AA,

    /// Identifier: "mdi-wii"
    IFMDIWii                                 = 0xF5AB,

    /// Identifier: "mdi-wikipedia"
    IFMDIWikipedia                           = 0xF5AC,

    /// Identifier: "mdi-window-close"
    IFMDIWindowClose                         = 0xF5AD,

    /// Identifier: "mdi-window-closed"
    IFMDIWindowClosed                        = 0xF5AE,

    /// Identifier: "mdi-window-maximize"
    IFMDIWindowMaximize                      = 0xF5AF,

    /// Identifier: "mdi-window-minimize"
    IFMDIWindowMinimize                      = 0xF5B0,

    /// Identifier: "mdi-window-open"
    IFMDIWindowOpen                          = 0xF5B1,

    /// Identifier: "mdi-window-restore"
    IFMDIWindowRestore                       = 0xF5B2,

    /// Identifier: "mdi-windows"
    IFMDIWindows                             = 0xF5B3,

    /// Identifier: "mdi-wordpress"
    IFMDIWordpress                           = 0xF5B4,

    /// Identifier: "mdi-worker"
    IFMDIWorker                              = 0xF5B5,

    /// Identifier: "mdi-wrap"
    IFMDIWrap                                = 0xF5B6,

    /// Identifier: "mdi-wrench"
    IFMDIWrench                              = 0xF5B7,

    /// Identifier: "mdi-wunderlist"
    IFMDIWunderlist                          = 0xF5B8,

    /// Identifier: "mdi-xaml"
    IFMDIXaml                                = 0xF673,

    /// Identifier: "mdi-xbox"
    IFMDIXbox                                = 0xF5B9,

    /// Identifier: "mdi-xbox-controller"
    IFMDIXboxController                      = 0xF5BA,

    /// Identifier: "mdi-xbox-controller-off"
    IFMDIXboxControllerOff                   = 0xF5BB,

    /// Identifier: "mdi-xda"
    IFMDIXda                                 = 0xF5BC,

    /// Identifier: "mdi-xing"
    IFMDIXing                                = 0xF5BD,

    /// Identifier: "mdi-xing-box"
    IFMDIXingBox                             = 0xF5BE,

    /// Identifier: "mdi-xing-circle"
    IFMDIXingCircle                          = 0xF5BF,

    /// Identifier: "mdi-xml"
    IFMDIXml                                 = 0xF5C0,

    /// Identifier: "mdi-yeast"
    IFMDIYeast                               = 0xF5C1,

    /// Identifier: "mdi-yelp"
    IFMDIYelp                                = 0xF5C2,

    /// Identifier: "mdi-youtube-play"
    IFMDIYoutubePlay                         = 0xF5C3,

    /// Identifier: "mdi-zip-box"
    IFMDIZipBox                              = 0xF5C4,

};

/**
 * Material Design Icons v1.6.50 https://materialdesignicons.com
 */
@interface IFMaterialDesignIcons : IFIcon
@end
