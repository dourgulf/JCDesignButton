#import "IFIcon.h"

/**
 * OpenIconic icon types.
 */
typedef NS_ENUM(IFIconType, IFOpenIconicType) {

    /// Identifier: "oi-account-login"
    IFOpenIconicAccountLogin                        = 0xe000,

    /// Identifier: "oi-account-logout"
    IFOpenIconicAccountLogout                       = 0xe001,

    /// Identifier: "oi-action-redo"
    IFOpenIconicActionRedo                          = 0xe002,

    /// Identifier: "oi-action-undo"
    IFOpenIconicActionUndo                          = 0xe003,

    /// Identifier: "oi-align-center"
    IFOpenIconicAlignCenter                         = 0xe004,

    /// Identifier: "oi-align-left"
    IFOpenIconicAlignLeft                           = 0xe005,

    /// Identifier: "oi-align-right"
    IFOpenIconicAlignRight                          = 0xe006,

    /// Identifier: "oi-aperture"
    IFOpenIconicAperture                            = 0xe007,

    /// Identifier: "oi-arrow-bottom"
    IFOpenIconicArrowBottom                         = 0xe008,

    /// Identifier: "oi-arrow-circle-bottom"
    IFOpenIconicArrowCircleBottom                   = 0xe009,

    /// Identifier: "oi-arrow-circle-left"
    IFOpenIconicArrowCircleLeft                     = 0xe00a,

    /// Identifier: "oi-arrow-circle-right"
    IFOpenIconicArrowCircleRight                    = 0xe00b,

    /// Identifier: "oi-arrow-circle-top"
    IFOpenIconicArrowCircleTop                      = 0xe00c,

    /// Identifier: "oi-arrow-left"
    IFOpenIconicArrowLeft                           = 0xe00d,

    /// Identifier: "oi-arrow-right"
    IFOpenIconicArrowRight                          = 0xe00e,

    /// Identifier: "oi-arrow-thick-bottom"
    IFOpenIconicArrowThickBottom                    = 0xe00f,

    /// Identifier: "oi-arrow-thick-left"
    IFOpenIconicArrowThickLeft                      = 0xe010,

    /// Identifier: "oi-arrow-thick-right"
    IFOpenIconicArrowThickRight                     = 0xe011,

    /// Identifier: "oi-arrow-thick-top"
    IFOpenIconicArrowThickTop                       = 0xe012,

    /// Identifier: "oi-arrow-top"
    IFOpenIconicArrowTop                            = 0xe013,

    /// Identifier: "oi-audio-spectrum"
    IFOpenIconicAudioSpectrum                       = 0xe014,

    /// Identifier: "oi-audio"
    IFOpenIconicAudio                               = 0xe015,

    /// Identifier: "oi-badge"
    IFOpenIconicBadge                               = 0xe016,

    /// Identifier: "oi-ban"
    IFOpenIconicBan                                 = 0xe017,

    /// Identifier: "oi-bar-chart"
    IFOpenIconicBarChart                            = 0xe018,

    /// Identifier: "oi-basket"
    IFOpenIconicBasket                              = 0xe019,

    /// Identifier: "oi-battery-empty"
    IFOpenIconicBatteryEmpty                        = 0xe01a,

    /// Identifier: "oi-battery-full"
    IFOpenIconicBatteryFull                         = 0xe01b,

    /// Identifier: "oi-beaker"
    IFOpenIconicBeaker                              = 0xe01c,

    /// Identifier: "oi-bell"
    IFOpenIconicBell                                = 0xe01d,

    /// Identifier: "oi-bluetooth"
    IFOpenIconicBluetooth                           = 0xe01e,

    /// Identifier: "oi-bold"
    IFOpenIconicBold                                = 0xe01f,

    /// Identifier: "oi-bolt"
    IFOpenIconicBolt                                = 0xe020,

    /// Identifier: "oi-book"
    IFOpenIconicBook                                = 0xe021,

    /// Identifier: "oi-bookmark"
    IFOpenIconicBookmark                            = 0xe022,

    /// Identifier: "oi-box"
    IFOpenIconicBox                                 = 0xe023,

    /// Identifier: "oi-briefcase"
    IFOpenIconicBriefcase                           = 0xe024,

    /// Identifier: "oi-british-pound"
    IFOpenIconicBritishPound                        = 0xe025,

    /// Identifier: "oi-browser"
    IFOpenIconicBrowser                             = 0xe026,

    /// Identifier: "oi-brush"
    IFOpenIconicBrush                               = 0xe027,

    /// Identifier: "oi-bug"
    IFOpenIconicBug                                 = 0xe028,

    /// Identifier: "oi-bullhorn"
    IFOpenIconicBullhorn                            = 0xe029,

    /// Identifier: "oi-calculator"
    IFOpenIconicCalculator                          = 0xe02a,

    /// Identifier: "oi-calendar"
    IFOpenIconicCalendar                            = 0xe02b,

    /// Identifier: "oi-camera-slr"
    IFOpenIconicCameraSlr                           = 0xe02c,

    /// Identifier: "oi-caret-bottom"
    IFOpenIconicCaretBottom                         = 0xe02d,

    /// Identifier: "oi-caret-left"
    IFOpenIconicCaretLeft                           = 0xe02e,

    /// Identifier: "oi-caret-right"
    IFOpenIconicCaretRight                          = 0xe02f,

    /// Identifier: "oi-caret-top"
    IFOpenIconicCaretTop                            = 0xe030,

    /// Identifier: "oi-cart"
    IFOpenIconicCart                                = 0xe031,

    /// Identifier: "oi-chat"
    IFOpenIconicChat                                = 0xe032,

    /// Identifier: "oi-check"
    IFOpenIconicCheck                               = 0xe033,

    /// Identifier: "oi-chevron-bottom"
    IFOpenIconicChevronBottom                       = 0xe034,

    /// Identifier: "oi-chevron-left"
    IFOpenIconicChevronLeft                         = 0xe035,

    /// Identifier: "oi-chevron-right"
    IFOpenIconicChevronRight                        = 0xe036,

    /// Identifier: "oi-chevron-top"
    IFOpenIconicChevronTop                          = 0xe037,

    /// Identifier: "oi-circle-check"
    IFOpenIconicCircleCheck                         = 0xe038,

    /// Identifier: "oi-circle-x"
    IFOpenIconicCircleX                             = 0xe039,

    /// Identifier: "oi-clipboard"
    IFOpenIconicClipboard                           = 0xe03a,

    /// Identifier: "oi-clock"
    IFOpenIconicClock                               = 0xe03b,

    /// Identifier: "oi-cloud-download"
    IFOpenIconicCloudDownload                       = 0xe03c,

    /// Identifier: "oi-cloud-upload"
    IFOpenIconicCloudUpload                         = 0xe03d,

    /// Identifier: "oi-cloud"
    IFOpenIconicCloud                               = 0xe03e,

    /// Identifier: "oi-cloudy"
    IFOpenIconicCloudy                              = 0xe03f,

    /// Identifier: "oi-code"
    IFOpenIconicCode                                = 0xe040,

    /// Identifier: "oi-cog"
    IFOpenIconicCog                                 = 0xe041,

    /// Identifier: "oi-collapse-down"
    IFOpenIconicCollapseDown                        = 0xe042,

    /// Identifier: "oi-collapse-left"
    IFOpenIconicCollapseLeft                        = 0xe043,

    /// Identifier: "oi-collapse-right"
    IFOpenIconicCollapseRight                       = 0xe044,

    /// Identifier: "oi-collapse-up"
    IFOpenIconicCollapseUp                          = 0xe045,

    /// Identifier: "oi-command"
    IFOpenIconicCommand                             = 0xe046,

    /// Identifier: "oi-comment-square"
    IFOpenIconicCommentSquare                       = 0xe047,

    /// Identifier: "oi-compass"
    IFOpenIconicCompass                             = 0xe048,

    /// Identifier: "oi-contrast"
    IFOpenIconicContrast                            = 0xe049,

    /// Identifier: "oi-copywriting"
    IFOpenIconicCopywriting                         = 0xe04a,

    /// Identifier: "oi-credit-card"
    IFOpenIconicCreditCard                          = 0xe04b,

    /// Identifier: "oi-crop"
    IFOpenIconicCrop                                = 0xe04c,

    /// Identifier: "oi-dashboard"
    IFOpenIconicDashboard                           = 0xe04d,

    /// Identifier: "oi-data-transfer-download"
    IFOpenIconicDataTransferDownload                = 0xe04e,

    /// Identifier: "oi-data-transfer-upload"
    IFOpenIconicDataTransferUpload                  = 0xe04f,

    /// Identifier: "oi-delete"
    IFOpenIconicDelete                              = 0xe050,

    /// Identifier: "oi-dial"
    IFOpenIconicDial                                = 0xe051,

    /// Identifier: "oi-document"
    IFOpenIconicDocument                            = 0xe052,

    /// Identifier: "oi-dollar"
    IFOpenIconicDollar                              = 0xe053,

    /// Identifier: "oi-double-quote-sans-left"
    IFOpenIconicDoubleQuoteSansLeft                 = 0xe054,

    /// Identifier: "oi-double-quote-sans-right"
    IFOpenIconicDoubleQuoteSansRight                = 0xe055,

    /// Identifier: "oi-double-quote-serif-left"
    IFOpenIconicDoubleQuoteSerifLeft                = 0xe056,

    /// Identifier: "oi-double-quote-serif-right"
    IFOpenIconicDoubleQuoteSerifRight               = 0xe057,

    /// Identifier: "oi-droplet"
    IFOpenIconicDroplet                             = 0xe058,

    /// Identifier: "oi-eject"
    IFOpenIconicEject                               = 0xe059,

    /// Identifier: "oi-elevator"
    IFOpenIconicElevator                            = 0xe05a,

    /// Identifier: "oi-ellipses"
    IFOpenIconicEllipses                            = 0xe05b,

    /// Identifier: "oi-envelope-closed"
    IFOpenIconicEnvelopeClosed                      = 0xe05c,

    /// Identifier: "oi-envelope-open"
    IFOpenIconicEnvelopeOpen                        = 0xe05d,

    /// Identifier: "oi-euro"
    IFOpenIconicEuro                                = 0xe05e,

    /// Identifier: "oi-excerpt"
    IFOpenIconicExcerpt                             = 0xe05f,

    /// Identifier: "oi-expand-down"
    IFOpenIconicExpandDown                          = 0xe060,

    /// Identifier: "oi-expand-left"
    IFOpenIconicExpandLeft                          = 0xe061,

    /// Identifier: "oi-expand-right"
    IFOpenIconicExpandRight                         = 0xe062,

    /// Identifier: "oi-expand-up"
    IFOpenIconicExpandUp                            = 0xe063,

    /// Identifier: "oi-external-link"
    IFOpenIconicExternalLink                        = 0xe064,

    /// Identifier: "oi-eye"
    IFOpenIconicEye                                 = 0xe065,

    /// Identifier: "oi-eyedropper"
    IFOpenIconicEyedropper                          = 0xe066,

    /// Identifier: "oi-file"
    IFOpenIconicFile                                = 0xe067,

    /// Identifier: "oi-fire"
    IFOpenIconicFire                                = 0xe068,

    /// Identifier: "oi-flag"
    IFOpenIconicFlag                                = 0xe069,

    /// Identifier: "oi-flash"
    IFOpenIconicFlash                               = 0xe06a,

    /// Identifier: "oi-folder"
    IFOpenIconicFolder                              = 0xe06b,

    /// Identifier: "oi-fork"
    IFOpenIconicFork                                = 0xe06c,

    /// Identifier: "oi-fullscreen-enter"
    IFOpenIconicFullscreenEnter                     = 0xe06d,

    /// Identifier: "oi-fullscreen-exit"
    IFOpenIconicFullscreenExit                      = 0xe06e,

    /// Identifier: "oi-globe"
    IFOpenIconicGlobe                               = 0xe06f,

    /// Identifier: "oi-graph"
    IFOpenIconicGraph                               = 0xe070,

    /// Identifier: "oi-grid-four-up"
    IFOpenIconicGridFourUp                          = 0xe071,

    /// Identifier: "oi-grid-three-up"
    IFOpenIconicGridThreeUp                         = 0xe072,

    /// Identifier: "oi-grid-two-up"
    IFOpenIconicGridTwoUp                           = 0xe073,

    /// Identifier: "oi-hard-drive"
    IFOpenIconicHardDrive                           = 0xe074,

    /// Identifier: "oi-header"
    IFOpenIconicHeader                              = 0xe075,

    /// Identifier: "oi-headphones"
    IFOpenIconicHeadphones                          = 0xe076,

    /// Identifier: "oi-heart"
    IFOpenIconicHeart                               = 0xe077,

    /// Identifier: "oi-home"
    IFOpenIconicHome                                = 0xe078,

    /// Identifier: "oi-image"
    IFOpenIconicImage                               = 0xe079,

    /// Identifier: "oi-inbox"
    IFOpenIconicInbox                               = 0xe07a,

    /// Identifier: "oi-infinity"
    IFOpenIconicInfinity                            = 0xe07b,

    /// Identifier: "oi-info"
    IFOpenIconicInfo                                = 0xe07c,

    /// Identifier: "oi-italic"
    IFOpenIconicItalic                              = 0xe07d,

    /// Identifier: "oi-justify-center"
    IFOpenIconicJustifyCenter                       = 0xe07e,

    /// Identifier: "oi-justify-left"
    IFOpenIconicJustifyLeft                         = 0xe07f,

    /// Identifier: "oi-justify-right"
    IFOpenIconicJustifyRight                        = 0xe080,

    /// Identifier: "oi-key"
    IFOpenIconicKey                                 = 0xe081,

    /// Identifier: "oi-laptop"
    IFOpenIconicLaptop                              = 0xe082,

    /// Identifier: "oi-layers"
    IFOpenIconicLayers                              = 0xe083,

    /// Identifier: "oi-lightbulb"
    IFOpenIconicLightbulb                           = 0xe084,

    /// Identifier: "oi-link-broken"
    IFOpenIconicLinkBroken                          = 0xe085,

    /// Identifier: "oi-link-intact"
    IFOpenIconicLinkIntact                          = 0xe086,

    /// Identifier: "oi-list-rich"
    IFOpenIconicListRich                            = 0xe087,

    /// Identifier: "oi-list"
    IFOpenIconicList                                = 0xe088,

    /// Identifier: "oi-location"
    IFOpenIconicLocation                            = 0xe089,

    /// Identifier: "oi-lock-locked"
    IFOpenIconicLockLocked                          = 0xe08a,

    /// Identifier: "oi-lock-unlocked"
    IFOpenIconicLockUnlocked                        = 0xe08b,

    /// Identifier: "oi-loop-circular"
    IFOpenIconicLoopCircular                        = 0xe08c,

    /// Identifier: "oi-loop-square"
    IFOpenIconicLoopSquare                          = 0xe08d,

    /// Identifier: "oi-loop"
    IFOpenIconicLoop                                = 0xe08e,

    /// Identifier: "oi-magnifying-glass"
    IFOpenIconicMagnifyingGlass                     = 0xe08f,

    /// Identifier: "oi-map-marker"
    IFOpenIconicMapMarker                           = 0xe090,

    /// Identifier: "oi-map"
    IFOpenIconicMap                                 = 0xe091,

    /// Identifier: "oi-media-pause"
    IFOpenIconicMediaPause                          = 0xe092,

    /// Identifier: "oi-media-play"
    IFOpenIconicMediaPlay                           = 0xe093,

    /// Identifier: "oi-media-record"
    IFOpenIconicMediaRecord                         = 0xe094,

    /// Identifier: "oi-media-skip-backward"
    IFOpenIconicMediaSkipBackward                   = 0xe095,

    /// Identifier: "oi-media-skip-forward"
    IFOpenIconicMediaSkipForward                    = 0xe096,

    /// Identifier: "oi-media-step-backward"
    IFOpenIconicMediaStepBackward                   = 0xe097,

    /// Identifier: "oi-media-step-forward"
    IFOpenIconicMediaStepForward                    = 0xe098,

    /// Identifier: "oi-media-stop"
    IFOpenIconicMediaStop                           = 0xe099,

    /// Identifier: "oi-medical-cross"
    IFOpenIconicMedicalCross                        = 0xe09a,

    /// Identifier: "oi-menu"
    IFOpenIconicMenu                                = 0xe09b,

    /// Identifier: "oi-microphone"
    IFOpenIconicMicrophone                          = 0xe09c,

    /// Identifier: "oi-minus"
    IFOpenIconicMinus                               = 0xe09d,

    /// Identifier: "oi-monitor"
    IFOpenIconicMonitor                             = 0xe09e,

    /// Identifier: "oi-moon"
    IFOpenIconicMoon                                = 0xe09f,

    /// Identifier: "oi-move"
    IFOpenIconicMove                                = 0xe0a0,

    /// Identifier: "oi-musical-note"
    IFOpenIconicMusicalNote                         = 0xe0a1,

    /// Identifier: "oi-paperclip"
    IFOpenIconicPaperclip                           = 0xe0a2,

    /// Identifier: "oi-pencil"
    IFOpenIconicPencil                              = 0xe0a3,

    /// Identifier: "oi-people"
    IFOpenIconicPeople                              = 0xe0a4,

    /// Identifier: "oi-person"
    IFOpenIconicPerson                              = 0xe0a5,

    /// Identifier: "oi-phone"
    IFOpenIconicPhone                               = 0xe0a6,

    /// Identifier: "oi-pie-chart"
    IFOpenIconicPieChart                            = 0xe0a7,

    /// Identifier: "oi-pin"
    IFOpenIconicPin                                 = 0xe0a8,

    /// Identifier: "oi-play-circle"
    IFOpenIconicPlayCircle                          = 0xe0a9,

    /// Identifier: "oi-plus"
    IFOpenIconicPlus                                = 0xe0aa,

    /// Identifier: "oi-power-standby"
    IFOpenIconicPowerStandby                        = 0xe0ab,

    /// Identifier: "oi-print"
    IFOpenIconicPrint                               = 0xe0ac,

    /// Identifier: "oi-project"
    IFOpenIconicProject                             = 0xe0ad,

    /// Identifier: "oi-pulse"
    IFOpenIconicPulse                               = 0xe0ae,

    /// Identifier: "oi-puzzle-piece"
    IFOpenIconicPuzzlePiece                         = 0xe0af,

    /// Identifier: "oi-question-mark"
    IFOpenIconicQuestionMark                        = 0xe0b0,

    /// Identifier: "oi-rain"
    IFOpenIconicRain                                = 0xe0b1,

    /// Identifier: "oi-random"
    IFOpenIconicRandom                              = 0xe0b2,

    /// Identifier: "oi-reload"
    IFOpenIconicReload                              = 0xe0b3,

    /// Identifier: "oi-resize-both"
    IFOpenIconicResizeBoth                          = 0xe0b4,

    /// Identifier: "oi-resize-height"
    IFOpenIconicResizeHeight                        = 0xe0b5,

    /// Identifier: "oi-resize-width"
    IFOpenIconicResizeWidth                         = 0xe0b6,

    /// Identifier: "oi-rss-alt"
    IFOpenIconicRssAlt                              = 0xe0b7,

    /// Identifier: "oi-rss"
    IFOpenIconicRss                                 = 0xe0b8,

    /// Identifier: "oi-script"
    IFOpenIconicScript                              = 0xe0b9,

    /// Identifier: "oi-share-boxed"
    IFOpenIconicShareBoxed                          = 0xe0ba,

    /// Identifier: "oi-share"
    IFOpenIconicShare                               = 0xe0bb,

    /// Identifier: "oi-shield"
    IFOpenIconicShield                              = 0xe0bc,

    /// Identifier: "oi-signal"
    IFOpenIconicSignal                              = 0xe0bd,

    /// Identifier: "oi-signpost"
    IFOpenIconicSignpost                            = 0xe0be,

    /// Identifier: "oi-sort-ascending"
    IFOpenIconicSortAscending                       = 0xe0bf,

    /// Identifier: "oi-sort-descending"
    IFOpenIconicSortDescending                      = 0xe0c0,

    /// Identifier: "oi-spreadsheet"
    IFOpenIconicSpreadsheet                         = 0xe0c1,

    /// Identifier: "oi-star"
    IFOpenIconicStar                                = 0xe0c2,

    /// Identifier: "oi-sun"
    IFOpenIconicSun                                 = 0xe0c3,

    /// Identifier: "oi-tablet"
    IFOpenIconicTablet                              = 0xe0c4,

    /// Identifier: "oi-tag"
    IFOpenIconicTag                                 = 0xe0c5,

    /// Identifier: "oi-tags"
    IFOpenIconicTags                                = 0xe0c6,

    /// Identifier: "oi-target"
    IFOpenIconicTarget                              = 0xe0c7,

    /// Identifier: "oi-task"
    IFOpenIconicTask                                = 0xe0c8,

    /// Identifier: "oi-terminal"
    IFOpenIconicTerminal                            = 0xe0c9,

    /// Identifier: "oi-text"
    IFOpenIconicText                                = 0xe0ca,

    /// Identifier: "oi-thumb-down"
    IFOpenIconicThumbDown                           = 0xe0cb,

    /// Identifier: "oi-thumb-up"
    IFOpenIconicThumbUp                             = 0xe0cc,

    /// Identifier: "oi-timer"
    IFOpenIconicTimer                               = 0xe0cd,

    /// Identifier: "oi-transfer"
    IFOpenIconicTransfer                            = 0xe0ce,

    /// Identifier: "oi-trash"
    IFOpenIconicTrash                               = 0xe0cf,

    /// Identifier: "oi-underline"
    IFOpenIconicUnderline                           = 0xe0d0,

    /// Identifier: "oi-vertical-align-bottom"
    IFOpenIconicVerticalAlignBottom                 = 0xe0d1,

    /// Identifier: "oi-vertical-align-center"
    IFOpenIconicVerticalAlignCenter                 = 0xe0d2,

    /// Identifier: "oi-vertical-align-top"
    IFOpenIconicVerticalAlignTop                    = 0xe0d3,

    /// Identifier: "oi-video"
    IFOpenIconicVideo                               = 0xe0d4,

    /// Identifier: "oi-volume-high"
    IFOpenIconicVolumeHigh                          = 0xe0d5,

    /// Identifier: "oi-volume-low"
    IFOpenIconicVolumeLow                           = 0xe0d6,

    /// Identifier: "oi-volume-off"
    IFOpenIconicVolumeOff                           = 0xe0d7,

    /// Identifier: "oi-warning"
    IFOpenIconicWarning                             = 0xe0d8,

    /// Identifier: "oi-wifi"
    IFOpenIconicWifi                                = 0xe0d9,

    /// Identifier: "oi-wrench"
    IFOpenIconicWrench                              = 0xe0da,

    /// Identifier: "oi-x"
    IFOpenIconicX                                   = 0xe0db,

    /// Identifier: "oi-yen"
    IFOpenIconicYen                                 = 0xe0dc,

    /// Identifier: "oi-zoom-in"
    IFOpenIconicZoomIn                              = 0xe0dd,

    /// Identifier: "oi-zoom-out"
    IFOpenIconicZoomOut                             = 0xe0de,

};

/**
 * Open Iconic: the open source sibling of Iconic, v1.1.1 https://useiconic.com/open
 */
@interface IFOpenIconic : IFIcon
@end
