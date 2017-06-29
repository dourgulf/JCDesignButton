#import "IFIcon.h"

/**
 * Typicons icon types.
 */
typedef NS_ENUM(IFIconType, IFTypiconsType) {

    /// Identifier: "typcn-adjust-brightness"
    IFTypiconAdjustBrightness                    = 0xe000,

    /// Identifier: "typcn-adjust-contrast"
    IFTypiconAdjustContrast                      = 0xe001,

    /// Identifier: "typcn-anchor-outline"
    IFTypiconAnchorOutline                       = 0xe002,

    /// Identifier: "typcn-anchor"
    IFTypiconAnchor                              = 0xe003,

    /// Identifier: "typcn-archive"
    IFTypiconArchive                             = 0xe004,

    /// Identifier: "typcn-arrow-back-outline"
    IFTypiconArrowBackOutline                    = 0xe005,

    /// Identifier: "typcn-arrow-back"
    IFTypiconArrowBack                           = 0xe006,

    /// Identifier: "typcn-arrow-down-outline"
    IFTypiconArrowDownOutline                    = 0xe007,

    /// Identifier: "typcn-arrow-down-thick"
    IFTypiconArrowDownThick                      = 0xe008,

    /// Identifier: "typcn-arrow-down"
    IFTypiconArrowDown                           = 0xe009,

    /// Identifier: "typcn-arrow-forward-outline"
    IFTypiconArrowForwardOutline                 = 0xe00a,

    /// Identifier: "typcn-arrow-forward"
    IFTypiconArrowForward                        = 0xe00b,

    /// Identifier: "typcn-arrow-left-outline"
    IFTypiconArrowLeftOutline                    = 0xe00c,

    /// Identifier: "typcn-arrow-left-thick"
    IFTypiconArrowLeftThick                      = 0xe00d,

    /// Identifier: "typcn-arrow-left"
    IFTypiconArrowLeft                           = 0xe00e,

    /// Identifier: "typcn-arrow-loop-outline"
    IFTypiconArrowLoopOutline                    = 0xe00f,

    /// Identifier: "typcn-arrow-loop"
    IFTypiconArrowLoop                           = 0xe010,

    /// Identifier: "typcn-arrow-maximise-outline"
    IFTypiconArrowMaximiseOutline                = 0xe011,

    /// Identifier: "typcn-arrow-maximise"
    IFTypiconArrowMaximise                       = 0xe012,

    /// Identifier: "typcn-arrow-minimise-outline"
    IFTypiconArrowMinimiseOutline                = 0xe013,

    /// Identifier: "typcn-arrow-minimise"
    IFTypiconArrowMinimise                       = 0xe014,

    /// Identifier: "typcn-arrow-move-outline"
    IFTypiconArrowMoveOutline                    = 0xe015,

    /// Identifier: "typcn-arrow-move"
    IFTypiconArrowMove                           = 0xe016,

    /// Identifier: "typcn-arrow-repeat-outline"
    IFTypiconArrowRepeatOutline                  = 0xe017,

    /// Identifier: "typcn-arrow-repeat"
    IFTypiconArrowRepeat                         = 0xe018,

    /// Identifier: "typcn-arrow-right-outline"
    IFTypiconArrowRightOutline                   = 0xe019,

    /// Identifier: "typcn-arrow-right-thick"
    IFTypiconArrowRightThick                     = 0xe01a,

    /// Identifier: "typcn-arrow-right"
    IFTypiconArrowRight                          = 0xe01b,

    /// Identifier: "typcn-arrow-shuffle"
    IFTypiconArrowShuffle                        = 0xe01c,

    /// Identifier: "typcn-arrow-sorted-down"
    IFTypiconArrowSortedDown                     = 0xe01d,

    /// Identifier: "typcn-arrow-sorted-up"
    IFTypiconArrowSortedUp                       = 0xe01e,

    /// Identifier: "typcn-arrow-sync-outline"
    IFTypiconArrowSyncOutline                    = 0xe01f,

    /// Identifier: "typcn-arrow-sync"
    IFTypiconArrowSync                           = 0xe020,

    /// Identifier: "typcn-arrow-unsorted"
    IFTypiconArrowUnsorted                       = 0xe021,

    /// Identifier: "typcn-arrow-up-outline"
    IFTypiconArrowUpOutline                      = 0xe022,

    /// Identifier: "typcn-arrow-up-thick"
    IFTypiconArrowUpThick                        = 0xe023,

    /// Identifier: "typcn-arrow-up"
    IFTypiconArrowUp                             = 0xe024,

    /// Identifier: "typcn-at"
    IFTypiconAt                                  = 0xe025,

    /// Identifier: "typcn-attachment-outline"
    IFTypiconAttachmentOutline                   = 0xe026,

    /// Identifier: "typcn-attachment"
    IFTypiconAttachment                          = 0xe027,

    /// Identifier: "typcn-backspace-outline"
    IFTypiconBackspaceOutline                    = 0xe028,

    /// Identifier: "typcn-backspace"
    IFTypiconBackspace                           = 0xe029,

    /// Identifier: "typcn-battery-charge"
    IFTypiconBatteryCharge                       = 0xe02a,

    /// Identifier: "typcn-battery-full"
    IFTypiconBatteryFull                         = 0xe02b,

    /// Identifier: "typcn-battery-high"
    IFTypiconBatteryHigh                         = 0xe02c,

    /// Identifier: "typcn-battery-low"
    IFTypiconBatteryLow                          = 0xe02d,

    /// Identifier: "typcn-battery-mid"
    IFTypiconBatteryMid                          = 0xe02e,

    /// Identifier: "typcn-beaker"
    IFTypiconBeaker                              = 0xe02f,

    /// Identifier: "typcn-beer"
    IFTypiconBeer                                = 0xe030,

    /// Identifier: "typcn-bell"
    IFTypiconBell                                = 0xe031,

    /// Identifier: "typcn-book"
    IFTypiconBook                                = 0xe032,

    /// Identifier: "typcn-bookmark"
    IFTypiconBookmark                            = 0xe033,

    /// Identifier: "typcn-briefcase"
    IFTypiconBriefcase                           = 0xe034,

    /// Identifier: "typcn-brush"
    IFTypiconBrush                               = 0xe035,

    /// Identifier: "typcn-business-card"
    IFTypiconBusinessCard                        = 0xe036,

    /// Identifier: "typcn-calculator"
    IFTypiconCalculator                          = 0xe037,

    /// Identifier: "typcn-calendar-outline"
    IFTypiconCalendarOutline                     = 0xe038,

    /// Identifier: "typcn-calendar"
    IFTypiconCalendar                            = 0xe039,

    /// Identifier: "typcn-camera-outline"
    IFTypiconCameraOutline                       = 0xe03a,

    /// Identifier: "typcn-camera"
    IFTypiconCamera                              = 0xe03b,

    /// Identifier: "typcn-cancel-outline"
    IFTypiconCancelOutline                       = 0xe03c,

    /// Identifier: "typcn-cancel"
    IFTypiconCancel                              = 0xe03d,

    /// Identifier: "typcn-chart-area-outline"
    IFTypiconChartAreaOutline                    = 0xe03e,

    /// Identifier: "typcn-chart-area"
    IFTypiconChartArea                           = 0xe03f,

    /// Identifier: "typcn-chart-bar-outline"
    IFTypiconChartBarOutline                     = 0xe040,

    /// Identifier: "typcn-chart-bar"
    IFTypiconChartBar                            = 0xe041,

    /// Identifier: "typcn-chart-line-outline"
    IFTypiconChartLineOutline                    = 0xe042,

    /// Identifier: "typcn-chart-line"
    IFTypiconChartLine                           = 0xe043,

    /// Identifier: "typcn-chart-pie-outline"
    IFTypiconChartPieOutline                     = 0xe044,

    /// Identifier: "typcn-chart-pie"
    IFTypiconChartPie                            = 0xe045,

    /// Identifier: "typcn-chevron-left-outline"
    IFTypiconChevronLeftOutline                  = 0xe046,

    /// Identifier: "typcn-chevron-left"
    IFTypiconChevronLeft                         = 0xe047,

    /// Identifier: "typcn-chevron-right-outline"
    IFTypiconChevronRightOutline                 = 0xe048,

    /// Identifier: "typcn-chevron-right"
    IFTypiconChevronRight                        = 0xe049,

    /// Identifier: "typcn-clipboard"
    IFTypiconClipboard                           = 0xe04a,

    /// Identifier: "typcn-cloud-storage"
    IFTypiconCloudStorage                        = 0xe04b,

    /// Identifier: "typcn-cloud-storage-outline"
    IFTypiconCloudStorageOutline                 = 0xe054,

    /// Identifier: "typcn-code-outline"
    IFTypiconCodeOutline                         = 0xe04c,

    /// Identifier: "typcn-code"
    IFTypiconCode                                = 0xe04d,

    /// Identifier: "typcn-coffee"
    IFTypiconCoffee                              = 0xe04e,

    /// Identifier: "typcn-cog-outline"
    IFTypiconCogOutline                          = 0xe04f,

    /// Identifier: "typcn-cog"
    IFTypiconCog                                 = 0xe050,

    /// Identifier: "typcn-compass"
    IFTypiconCompass                             = 0xe051,

    /// Identifier: "typcn-contacts"
    IFTypiconContacts                            = 0xe052,

    /// Identifier: "typcn-credit-card"
    IFTypiconCreditCard                          = 0xe053,

    /// Identifier: "typcn-css3"
    IFTypiconCss3                                = 0xe055,

    /// Identifier: "typcn-database"
    IFTypiconDatabase                            = 0xe056,

    /// Identifier: "typcn-delete-outline"
    IFTypiconDeleteOutline                       = 0xe057,

    /// Identifier: "typcn-delete"
    IFTypiconDelete                              = 0xe058,

    /// Identifier: "typcn-device-desktop"
    IFTypiconDeviceDesktop                       = 0xe059,

    /// Identifier: "typcn-device-laptop"
    IFTypiconDeviceLaptop                        = 0xe05a,

    /// Identifier: "typcn-device-phone"
    IFTypiconDevicePhone                         = 0xe05b,

    /// Identifier: "typcn-device-tablet"
    IFTypiconDeviceTablet                        = 0xe05c,

    /// Identifier: "typcn-directions"
    IFTypiconDirections                          = 0xe05d,

    /// Identifier: "typcn-divide-outline"
    IFTypiconDivideOutline                       = 0xe05e,

    /// Identifier: "typcn-divide"
    IFTypiconDivide                              = 0xe05f,

    /// Identifier: "typcn-document-add"
    IFTypiconDocumentAdd                         = 0xe060,

    /// Identifier: "typcn-document-delete"
    IFTypiconDocumentDelete                      = 0xe061,

    /// Identifier: "typcn-document-text"
    IFTypiconDocumentText                        = 0xe062,

    /// Identifier: "typcn-document"
    IFTypiconDocument                            = 0xe063,

    /// Identifier: "typcn-download-outline"
    IFTypiconDownloadOutline                     = 0xe064,

    /// Identifier: "typcn-download"
    IFTypiconDownload                            = 0xe065,

    /// Identifier: "typcn-dropbox"
    IFTypiconDropbox                             = 0xe066,

    /// Identifier: "typcn-edit"
    IFTypiconEdit                                = 0xe067,

    /// Identifier: "typcn-eject-outline"
    IFTypiconEjectOutline                        = 0xe068,

    /// Identifier: "typcn-eject"
    IFTypiconEject                               = 0xe069,

    /// Identifier: "typcn-equals-outline"
    IFTypiconEqualsOutline                       = 0xe06a,

    /// Identifier: "typcn-equals"
    IFTypiconEquals                              = 0xe06b,

    /// Identifier: "typcn-export-outline"
    IFTypiconExportOutline                       = 0xe06c,

    /// Identifier: "typcn-export"
    IFTypiconExport                              = 0xe06d,

    /// Identifier: "typcn-eye-outline"
    IFTypiconEyeOutline                          = 0xe06e,

    /// Identifier: "typcn-eye"
    IFTypiconEye                                 = 0xe06f,

    /// Identifier: "typcn-feather"
    IFTypiconFeather                             = 0xe070,

    /// Identifier: "typcn-film"
    IFTypiconFilm                                = 0xe071,

    /// Identifier: "typcn-filter"
    IFTypiconFilter                              = 0xe072,

    /// Identifier: "typcn-flag-outline"
    IFTypiconFlagOutline                         = 0xe073,

    /// Identifier: "typcn-flag"
    IFTypiconFlag                                = 0xe074,

    /// Identifier: "typcn-flash-outline"
    IFTypiconFlashOutline                        = 0xe075,

    /// Identifier: "typcn-flash"
    IFTypiconFlash                               = 0xe076,

    /// Identifier: "typcn-flow-children"
    IFTypiconFlowChildren                        = 0xe077,

    /// Identifier: "typcn-flow-merge"
    IFTypiconFlowMerge                           = 0xe078,

    /// Identifier: "typcn-flow-parallel"
    IFTypiconFlowParallel                        = 0xe079,

    /// Identifier: "typcn-flow-switch"
    IFTypiconFlowSwitch                          = 0xe07a,

    /// Identifier: "typcn-folder-add"
    IFTypiconFolderAdd                           = 0xe07b,

    /// Identifier: "typcn-folder-delete"
    IFTypiconFolderDelete                        = 0xe07c,

    /// Identifier: "typcn-folder-open"
    IFTypiconFolderOpen                          = 0xe07d,

    /// Identifier: "typcn-folder"
    IFTypiconFolder                              = 0xe07e,

    /// Identifier: "typcn-gift"
    IFTypiconGift                                = 0xe07f,

    /// Identifier: "typcn-globe-outline"
    IFTypiconGlobeOutline                        = 0xe080,

    /// Identifier: "typcn-globe"
    IFTypiconGlobe                               = 0xe081,

    /// Identifier: "typcn-group-outline"
    IFTypiconGroupOutline                        = 0xe082,

    /// Identifier: "typcn-group"
    IFTypiconGroup                               = 0xe083,

    /// Identifier: "typcn-headphones"
    IFTypiconHeadphones                          = 0xe084,

    /// Identifier: "typcn-heart-full-outline"
    IFTypiconHeartFullOutline                    = 0xe085,

    /// Identifier: "typcn-heart-half-outline"
    IFTypiconHeartHalfOutline                    = 0xe086,

    /// Identifier: "typcn-heart-outline"
    IFTypiconHeartOutline                        = 0xe087,

    /// Identifier: "typcn-heart"
    IFTypiconHeart                               = 0xe088,

    /// Identifier: "typcn-home-outline"
    IFTypiconHomeOutline                         = 0xe089,

    /// Identifier: "typcn-home"
    IFTypiconHome                                = 0xe08a,

    /// Identifier: "typcn-html5"
    IFTypiconHtml5                               = 0xe08b,

    /// Identifier: "typcn-image-outline"
    IFTypiconImageOutline                        = 0xe08c,

    /// Identifier: "typcn-image"
    IFTypiconImage                               = 0xe08d,

    /// Identifier: "typcn-infinity-outline"
    IFTypiconInfinityOutline                     = 0xe08e,

    /// Identifier: "typcn-infinity"
    IFTypiconInfinity                            = 0xe08f,

    /// Identifier: "typcn-info-large-outline"
    IFTypiconInfoLargeOutline                    = 0xe090,

    /// Identifier: "typcn-info-large"
    IFTypiconInfoLarge                           = 0xe091,

    /// Identifier: "typcn-info-outline"
    IFTypiconInfoOutline                         = 0xe092,

    /// Identifier: "typcn-info"
    IFTypiconInfo                                = 0xe093,

    /// Identifier: "typcn-input-checked-outline"
    IFTypiconInputCheckedOutline                 = 0xe094,

    /// Identifier: "typcn-input-checked"
    IFTypiconInputChecked                        = 0xe095,

    /// Identifier: "typcn-key-outline"
    IFTypiconKeyOutline                          = 0xe096,

    /// Identifier: "typcn-key"
    IFTypiconKey                                 = 0xe097,

    /// Identifier: "typcn-keyboard"
    IFTypiconKeyboard                            = 0xe098,

    /// Identifier: "typcn-leaf"
    IFTypiconLeaf                                = 0xe099,

    /// Identifier: "typcn-lightbulb"
    IFTypiconLightbulb                           = 0xe09a,

    /// Identifier: "typcn-link-outline"
    IFTypiconLinkOutline                         = 0xe09b,

    /// Identifier: "typcn-link"
    IFTypiconLink                                = 0xe09c,

    /// Identifier: "typcn-location-arrow-outline"
    IFTypiconLocationArrowOutline                = 0xe09d,

    /// Identifier: "typcn-location-arrow"
    IFTypiconLocationArrow                       = 0xe09e,

    /// Identifier: "typcn-location-outline"
    IFTypiconLocationOutline                     = 0xe09f,

    /// Identifier: "typcn-location"
    IFTypiconLocation                            = 0xe0a0,

    /// Identifier: "typcn-lock-closed-outline"
    IFTypiconLockClosedOutline                   = 0xe0a1,

    /// Identifier: "typcn-lock-closed"
    IFTypiconLockClosed                          = 0xe0a2,

    /// Identifier: "typcn-lock-open-outline"
    IFTypiconLockOpenOutline                     = 0xe0a3,

    /// Identifier: "typcn-lock-open"
    IFTypiconLockOpen                            = 0xe0a4,

    /// Identifier: "typcn-mail"
    IFTypiconMail                                = 0xe0a5,

    /// Identifier: "typcn-map"
    IFTypiconMap                                 = 0xe0a6,

    /// Identifier: "typcn-media-eject-outline"
    IFTypiconMediaEjectOutline                   = 0xe0a7,

    /// Identifier: "typcn-media-eject"
    IFTypiconMediaEject                          = 0xe0a8,

    /// Identifier: "typcn-media-fast-forward-outline"
    IFTypiconMediaFastForwardOutline             = 0xe0a9,

    /// Identifier: "typcn-media-fast-forward"
    IFTypiconMediaFastForward                    = 0xe0aa,

    /// Identifier: "typcn-media-pause-outline"
    IFTypiconMediaPauseOutline                   = 0xe0ab,

    /// Identifier: "typcn-media-pause"
    IFTypiconMediaPause                          = 0xe0ac,

    /// Identifier: "typcn-media-play-outline"
    IFTypiconMediaPlayOutline                    = 0xe0ad,

    /// Identifier: "typcn-media-play-reverse-outline"
    IFTypiconMediaPlayReverseOutline             = 0xe0ae,

    /// Identifier: "typcn-media-play-reverse"
    IFTypiconMediaPlayReverse                    = 0xe0af,

    /// Identifier: "typcn-media-play"
    IFTypiconMediaPlay                           = 0xe0b0,

    /// Identifier: "typcn-media-record-outline"
    IFTypiconMediaRecordOutline                  = 0xe0b1,

    /// Identifier: "typcn-media-record"
    IFTypiconMediaRecord                         = 0xe0b2,

    /// Identifier: "typcn-media-rewind-outline"
    IFTypiconMediaRewindOutline                  = 0xe0b3,

    /// Identifier: "typcn-media-rewind"
    IFTypiconMediaRewind                         = 0xe0b4,

    /// Identifier: "typcn-media-stop-outline"
    IFTypiconMediaStopOutline                    = 0xe0b5,

    /// Identifier: "typcn-media-stop"
    IFTypiconMediaStop                           = 0xe0b6,

    /// Identifier: "typcn-message-typing"
    IFTypiconMessageTyping                       = 0xe0b7,

    /// Identifier: "typcn-message"
    IFTypiconMessage                             = 0xe0b8,

    /// Identifier: "typcn-messages"
    IFTypiconMessages                            = 0xe0b9,

    /// Identifier: "typcn-microphone-outline"
    IFTypiconMicrophoneOutline                   = 0xe0ba,

    /// Identifier: "typcn-microphone"
    IFTypiconMicrophone                          = 0xe0bb,

    /// Identifier: "typcn-minus-outline"
    IFTypiconMinusOutline                        = 0xe0bc,

    /// Identifier: "typcn-minus"
    IFTypiconMinus                               = 0xe0bd,

    /// Identifier: "typcn-mortar-board"
    IFTypiconMortarBoard                         = 0xe0be,

    /// Identifier: "typcn-news"
    IFTypiconNews                                = 0xe0bf,

    /// Identifier: "typcn-notes-outline"
    IFTypiconNotesOutline                        = 0xe0c0,

    /// Identifier: "typcn-notes"
    IFTypiconNotes                               = 0xe0c1,

    /// Identifier: "typcn-pen"
    IFTypiconPen                                 = 0xe0c2,

    /// Identifier: "typcn-pencil"
    IFTypiconPencil                              = 0xe0c3,

    /// Identifier: "typcn-phone-outline"
    IFTypiconPhoneOutline                        = 0xe0c4,

    /// Identifier: "typcn-phone"
    IFTypiconPhone                               = 0xe0c5,

    /// Identifier: "typcn-pi-outline"
    IFTypiconPiOutline                           = 0xe0c6,

    /// Identifier: "typcn-pi"
    IFTypiconPi                                  = 0xe0c7,

    /// Identifier: "typcn-pin-outline"
    IFTypiconPinOutline                          = 0xe0c8,

    /// Identifier: "typcn-pin"
    IFTypiconPin                                 = 0xe0c9,

    /// Identifier: "typcn-pipette"
    IFTypiconPipette                             = 0xe0ca,

    /// Identifier: "typcn-plane-outline"
    IFTypiconPlaneOutline                        = 0xe0cb,

    /// Identifier: "typcn-plane"
    IFTypiconPlane                               = 0xe0cc,

    /// Identifier: "typcn-plug"
    IFTypiconPlug                                = 0xe0cd,

    /// Identifier: "typcn-plus-outline"
    IFTypiconPlusOutline                         = 0xe0ce,

    /// Identifier: "typcn-plus"
    IFTypiconPlus                                = 0xe0cf,

    /// Identifier: "typcn-point-of-interest-outline"
    IFTypiconPointOfInterestOutline              = 0xe0d0,

    /// Identifier: "typcn-point-of-interest"
    IFTypiconPointOfInterest                     = 0xe0d1,

    /// Identifier: "typcn-power-outline"
    IFTypiconPowerOutline                        = 0xe0d2,

    /// Identifier: "typcn-power"
    IFTypiconPower                               = 0xe0d3,

    /// Identifier: "typcn-printer"
    IFTypiconPrinter                             = 0xe0d4,

    /// Identifier: "typcn-puzzle-outline"
    IFTypiconPuzzleOutline                       = 0xe0d5,

    /// Identifier: "typcn-puzzle"
    IFTypiconPuzzle                              = 0xe0d6,

    /// Identifier: "typcn-radar-outline"
    IFTypiconRadarOutline                        = 0xe0d7,

    /// Identifier: "typcn-radar"
    IFTypiconRadar                               = 0xe0d8,

    /// Identifier: "typcn-refresh-outline"
    IFTypiconRefreshOutline                      = 0xe0d9,

    /// Identifier: "typcn-refresh"
    IFTypiconRefresh                             = 0xe0da,

    /// Identifier: "typcn-rss-outline"
    IFTypiconRssOutline                          = 0xe0db,

    /// Identifier: "typcn-rss"
    IFTypiconRss                                 = 0xe0dc,

    /// Identifier: "typcn-scissors-outline"
    IFTypiconScissorsOutline                     = 0xe0dd,

    /// Identifier: "typcn-scissors"
    IFTypiconScissors                            = 0xe0de,

    /// Identifier: "typcn-shopping-bag"
    IFTypiconShoppingBag                         = 0xe0df,

    /// Identifier: "typcn-shopping-cart"
    IFTypiconShoppingCart                        = 0xe0e0,

    /// Identifier: "typcn-social-at-circular"
    IFTypiconSocialAtCircular                    = 0xe0e1,

    /// Identifier: "typcn-social-dribbble-circular"
    IFTypiconSocialDribbbleCircular              = 0xe0e2,

    /// Identifier: "typcn-social-dribbble"
    IFTypiconSocialDribbble                      = 0xe0e3,

    /// Identifier: "typcn-social-facebook-circular"
    IFTypiconSocialFacebookCircular              = 0xe0e4,

    /// Identifier: "typcn-social-facebook"
    IFTypiconSocialFacebook                      = 0xe0e5,

    /// Identifier: "typcn-social-flickr-circular"
    IFTypiconSocialFlickrCircular                = 0xe0e6,

    /// Identifier: "typcn-social-flickr"
    IFTypiconSocialFlickr                        = 0xe0e7,

    /// Identifier: "typcn-social-github-circular"
    IFTypiconSocialGithubCircular                = 0xe0e8,

    /// Identifier: "typcn-social-github"
    IFTypiconSocialGithub                        = 0xe0e9,

    /// Identifier: "typcn-social-google-plus-circular"
    IFTypiconSocialGooglePlusCircular            = 0xe0ea,

    /// Identifier: "typcn-social-google-plus"
    IFTypiconSocialGooglePlus                    = 0xe0eb,

    /// Identifier: "typcn-social-instagram-circular"
    IFTypiconSocialInstagramCircular             = 0xe0ec,

    /// Identifier: "typcn-social-instagram"
    IFTypiconSocialInstagram                     = 0xe0ed,

    /// Identifier: "typcn-social-last-fm-circular"
    IFTypiconSocialLastFmCircular                = 0xe0ee,

    /// Identifier: "typcn-social-last-fm"
    IFTypiconSocialLastFm                        = 0xe0ef,

    /// Identifier: "typcn-social-linkedin-circular"
    IFTypiconSocialLinkedinCircular              = 0xe0f0,

    /// Identifier: "typcn-social-linkedin"
    IFTypiconSocialLinkedin                      = 0xe0f1,

    /// Identifier: "typcn-social-pinterest-circular"
    IFTypiconSocialPinterestCircular             = 0xe0f2,

    /// Identifier: "typcn-social-pinterest"
    IFTypiconSocialPinterest                     = 0xe0f3,

    /// Identifier: "typcn-social-skype-outline"
    IFTypiconSocialSkypeOutline                  = 0xe0f4,

    /// Identifier: "typcn-social-skype"
    IFTypiconSocialSkype                         = 0xe0f5,

    /// Identifier: "typcn-social-tumbler-circular"
    IFTypiconSocialTumblerCircular               = 0xe0f6,

    /// Identifier: "typcn-social-tumbler"
    IFTypiconSocialTumbler                       = 0xe0f7,

    /// Identifier: "typcn-social-twitter-circular"
    IFTypiconSocialTwitterCircular               = 0xe0f8,

    /// Identifier: "typcn-social-twitter"
    IFTypiconSocialTwitter                       = 0xe0f9,

    /// Identifier: "typcn-social-vimeo-circular"
    IFTypiconSocialVimeoCircular                 = 0xe0fa,

    /// Identifier: "typcn-social-vimeo"
    IFTypiconSocialVimeo                         = 0xe0fb,

    /// Identifier: "typcn-social-youtube-circular"
    IFTypiconSocialYoutubeCircular               = 0xe0fc,

    /// Identifier: "typcn-social-youtube"
    IFTypiconSocialYoutube                       = 0xe0fd,

    /// Identifier: "typcn-sort-alphabetically-outline"
    IFTypiconSortAlphabeticallyOutline           = 0xe0fe,

    /// Identifier: "typcn-sort-alphabetically"
    IFTypiconSortAlphabetically                  = 0xe0ff,

    /// Identifier: "typcn-sort-numerically-outline"
    IFTypiconSortNumericallyOutline              = 0xe100,

    /// Identifier: "typcn-sort-numerically"
    IFTypiconSortNumerically                     = 0xe101,

    /// Identifier: "typcn-spanner-outline"
    IFTypiconSpannerOutline                      = 0xe102,

    /// Identifier: "typcn-spanner"
    IFTypiconSpanner                             = 0xe103,

    /// Identifier: "typcn-spiral"
    IFTypiconSpiral                              = 0xe104,

    /// Identifier: "typcn-star-full-outline"
    IFTypiconStarFullOutline                     = 0xe105,

    /// Identifier: "typcn-star-half-outline"
    IFTypiconStarHalfOutline                     = 0xe106,

    /// Identifier: "typcn-star-half"
    IFTypiconStarHalf                            = 0xe107,

    /// Identifier: "typcn-star-outline"
    IFTypiconStarOutline                         = 0xe108,

    /// Identifier: "typcn-star"
    IFTypiconStar                                = 0xe109,

    /// Identifier: "typcn-starburst-outline"
    IFTypiconStarburstOutline                    = 0xe10a,

    /// Identifier: "typcn-starburst"
    IFTypiconStarburst                           = 0xe10b,

    /// Identifier: "typcn-stopwatch"
    IFTypiconStopwatch                           = 0xe10c,

    /// Identifier: "typcn-support"
    IFTypiconSupport                             = 0xe10d,

    /// Identifier: "typcn-tabs-outline"
    IFTypiconTabsOutline                         = 0xe10e,

    /// Identifier: "typcn-tag"
    IFTypiconTag                                 = 0xe10f,

    /// Identifier: "typcn-tags"
    IFTypiconTags                                = 0xe110,

    /// Identifier: "typcn-th-large-outline"
    IFTypiconThLargeOutline                      = 0xe111,

    /// Identifier: "typcn-th-large"
    IFTypiconThLarge                             = 0xe112,

    /// Identifier: "typcn-th-list-outline"
    IFTypiconThListOutline                       = 0xe113,

    /// Identifier: "typcn-th-list"
    IFTypiconThList                              = 0xe114,

    /// Identifier: "typcn-th-menu-outline"
    IFTypiconThMenuOutline                       = 0xe115,

    /// Identifier: "typcn-th-menu"
    IFTypiconThMenu                              = 0xe116,

    /// Identifier: "typcn-th-small-outline"
    IFTypiconThSmallOutline                      = 0xe117,

    /// Identifier: "typcn-th-small"
    IFTypiconThSmall                             = 0xe118,

    /// Identifier: "typcn-thermometer"
    IFTypiconThermometer                         = 0xe119,

    /// Identifier: "typcn-thumbs-down"
    IFTypiconThumbsDown                          = 0xe11a,

    /// Identifier: "typcn-thumbs-ok"
    IFTypiconThumbsOk                            = 0xe11b,

    /// Identifier: "typcn-thumbs-up"
    IFTypiconThumbsUp                            = 0xe11c,

    /// Identifier: "typcn-tick-outline"
    IFTypiconTickOutline                         = 0xe11d,

    /// Identifier: "typcn-tick"
    IFTypiconTick                                = 0xe11e,

    /// Identifier: "typcn-ticket"
    IFTypiconTicket                              = 0xe11f,

    /// Identifier: "typcn-time"
    IFTypiconTime                                = 0xe120,

    /// Identifier: "typcn-times-outline"
    IFTypiconTimesOutline                        = 0xe121,

    /// Identifier: "typcn-times"
    IFTypiconTimes                               = 0xe122,

    /// Identifier: "typcn-trash"
    IFTypiconTrash                               = 0xe123,

    /// Identifier: "typcn-tree"
    IFTypiconTree                                = 0xe124,

    /// Identifier: "typcn-upload-outline"
    IFTypiconUploadOutline                       = 0xe125,

    /// Identifier: "typcn-upload"
    IFTypiconUpload                              = 0xe126,

    /// Identifier: "typcn-user-add-outline"
    IFTypiconUserAddOutline                      = 0xe127,

    /// Identifier: "typcn-user-add"
    IFTypiconUserAdd                             = 0xe128,

    /// Identifier: "typcn-user-delete-outline"
    IFTypiconUserDeleteOutline                   = 0xe129,

    /// Identifier: "typcn-user-delete"
    IFTypiconUserDelete                          = 0xe12a,

    /// Identifier: "typcn-user-outline"
    IFTypiconUserOutline                         = 0xe12b,

    /// Identifier: "typcn-user"
    IFTypiconUser                                = 0xe12c,

    /// Identifier: "typcn-vendor-android"
    IFTypiconVendorAndroid                       = 0xe12d,

    /// Identifier: "typcn-vendor-apple"
    IFTypiconVendorApple                         = 0xe12e,

    /// Identifier: "typcn-vendor-microsoft"
    IFTypiconVendorMicrosoft                     = 0xe12f,

    /// Identifier: "typcn-video-outline"
    IFTypiconVideoOutline                        = 0xe130,

    /// Identifier: "typcn-video"
    IFTypiconVideo                               = 0xe131,

    /// Identifier: "typcn-volume-down"
    IFTypiconVolumeDown                          = 0xe132,

    /// Identifier: "typcn-volume-mute"
    IFTypiconVolumeMute                          = 0xe133,

    /// Identifier: "typcn-volume-up"
    IFTypiconVolumeUp                            = 0xe134,

    /// Identifier: "typcn-volume"
    IFTypiconVolume                              = 0xe135,

    /// Identifier: "typcn-warning-outline"
    IFTypiconWarningOutline                      = 0xe136,

    /// Identifier: "typcn-warning"
    IFTypiconWarning                             = 0xe137,

    /// Identifier: "typcn-watch"
    IFTypiconWatch                               = 0xe138,

    /// Identifier: "typcn-waves-outline"
    IFTypiconWavesOutline                        = 0xe139,

    /// Identifier: "typcn-waves"
    IFTypiconWaves                               = 0xe13a,

    /// Identifier: "typcn-weather-cloudy"
    IFTypiconWeatherCloudy                       = 0xe13b,

    /// Identifier: "typcn-weather-downpour"
    IFTypiconWeatherDownpour                     = 0xe13c,

    /// Identifier: "typcn-weather-night"
    IFTypiconWeatherNight                        = 0xe13d,

    /// Identifier: "typcn-weather-partly-sunny"
    IFTypiconWeatherPartlySunny                  = 0xe13e,

    /// Identifier: "typcn-weather-shower"
    IFTypiconWeatherShower                       = 0xe13f,

    /// Identifier: "typcn-weather-snow"
    IFTypiconWeatherSnow                         = 0xe140,

    /// Identifier: "typcn-weather-stormy"
    IFTypiconWeatherStormy                       = 0xe141,

    /// Identifier: "typcn-weather-sunny"
    IFTypiconWeatherSunny                        = 0xe142,

    /// Identifier: "typcn-weather-windy-cloudy"
    IFTypiconWeatherWindyCloudy                  = 0xe143,

    /// Identifier: "typcn-weather-windy"
    IFTypiconWeatherWindy                        = 0xe144,

    /// Identifier: "typcn-wi-fi-outline"
    IFTypiconWiFiOutline                         = 0xe145,

    /// Identifier: "typcn-wi-fi"
    IFTypiconWiFi                                = 0xe146,

    /// Identifier: "typcn-wine"
    IFTypiconWine                                = 0xe147,

    /// Identifier: "typcn-world-outline"
    IFTypiconWorldOutline                        = 0xe148,

    /// Identifier: "typcn-world"
    IFTypiconWorld                               = 0xe149,

    /// Identifier: "typcn-zoom-in-outline"
    IFTypiconZoomInOutline                       = 0xe14a,

    /// Identifier: "typcn-zoom-in"
    IFTypiconZoomIn                              = 0xe14b,

    /// Identifier: "typcn-zoom-out-outline"
    IFTypiconZoomOutOutline                      = 0xe14c,

    /// Identifier: "typcn-zoom-out"
    IFTypiconZoomOut                             = 0xe14d,

    /// Identifier: "typcn-zoom-outline"
    IFTypiconZoomOutline                         = 0xe14e,

    /// Identifier: "typcn-zoom"
    IFTypiconZoom                                = 0xe14f,

};

/**
 * Typicons v2.0.7 http://www.typicons.com
 */
@interface IFTypicons : IFIcon
@end
