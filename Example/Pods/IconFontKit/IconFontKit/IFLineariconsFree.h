#import "IFIcon.h"

/**
 * LineariconsFree icon types.
 */
typedef NS_ENUM(IFIconType, IFLineariconsFreeType) {

    /// Identifier: "lnr-home"
    IFLinearFreeHome                                = 0xe800,

    /// Identifier: "lnr-apartment"
    IFLinearFreeApartment                           = 0xe801,

    /// Identifier: "lnr-pencil"
    IFLinearFreePencil                              = 0xe802,

    /// Identifier: "lnr-magic-wand"
    IFLinearFreeMagicWand                           = 0xe803,

    /// Identifier: "lnr-drop"
    IFLinearFreeDrop                                = 0xe804,

    /// Identifier: "lnr-lighter"
    IFLinearFreeLighter                             = 0xe805,

    /// Identifier: "lnr-poop"
    IFLinearFreePoop                                = 0xe806,

    /// Identifier: "lnr-sun"
    IFLinearFreeSun                                 = 0xe807,

    /// Identifier: "lnr-moon"
    IFLinearFreeMoon                                = 0xe808,

    /// Identifier: "lnr-cloud"
    IFLinearFreeCloud                               = 0xe809,

    /// Identifier: "lnr-cloud-upload"
    IFLinearFreeCloudUpload                         = 0xe80a,

    /// Identifier: "lnr-cloud-download"
    IFLinearFreeCloudDownload                       = 0xe80b,

    /// Identifier: "lnr-cloud-sync"
    IFLinearFreeCloudSync                           = 0xe80c,

    /// Identifier: "lnr-cloud-check"
    IFLinearFreeCloudCheck                          = 0xe80d,

    /// Identifier: "lnr-database"
    IFLinearFreeDatabase                            = 0xe80e,

    /// Identifier: "lnr-lock"
    IFLinearFreeLock                                = 0xe80f,

    /// Identifier: "lnr-cog"
    IFLinearFreeCog                                 = 0xe810,

    /// Identifier: "lnr-trash"
    IFLinearFreeTrash                               = 0xe811,

    /// Identifier: "lnr-dice"
    IFLinearFreeDice                                = 0xe812,

    /// Identifier: "lnr-heart"
    IFLinearFreeHeart                               = 0xe813,

    /// Identifier: "lnr-star"
    IFLinearFreeStar                                = 0xe814,

    /// Identifier: "lnr-star-half"
    IFLinearFreeStarHalf                            = 0xe815,

    /// Identifier: "lnr-star-empty"
    IFLinearFreeStarEmpty                           = 0xe816,

    /// Identifier: "lnr-flag"
    IFLinearFreeFlag                                = 0xe817,

    /// Identifier: "lnr-envelope"
    IFLinearFreeEnvelope                            = 0xe818,

    /// Identifier: "lnr-paperclip"
    IFLinearFreePaperclip                           = 0xe819,

    /// Identifier: "lnr-inbox"
    IFLinearFreeInbox                               = 0xe81a,

    /// Identifier: "lnr-eye"
    IFLinearFreeEye                                 = 0xe81b,

    /// Identifier: "lnr-printer"
    IFLinearFreePrinter                             = 0xe81c,

    /// Identifier: "lnr-file-empty"
    IFLinearFreeFileEmpty                           = 0xe81d,

    /// Identifier: "lnr-file-add"
    IFLinearFreeFileAdd                             = 0xe81e,

    /// Identifier: "lnr-enter"
    IFLinearFreeEnter                               = 0xe81f,

    /// Identifier: "lnr-exit"
    IFLinearFreeExit                                = 0xe820,

    /// Identifier: "lnr-graduation-hat"
    IFLinearFreeGraduationHat                       = 0xe821,

    /// Identifier: "lnr-license"
    IFLinearFreeLicense                             = 0xe822,

    /// Identifier: "lnr-music-note"
    IFLinearFreeMusicNote                           = 0xe823,

    /// Identifier: "lnr-film-play"
    IFLinearFreeFilmPlay                            = 0xe824,

    /// Identifier: "lnr-camera-video"
    IFLinearFreeCameraVideo                         = 0xe825,

    /// Identifier: "lnr-camera"
    IFLinearFreeCamera                              = 0xe826,

    /// Identifier: "lnr-picture"
    IFLinearFreePicture                             = 0xe827,

    /// Identifier: "lnr-book"
    IFLinearFreeBook                                = 0xe828,

    /// Identifier: "lnr-bookmark"
    IFLinearFreeBookmark                            = 0xe829,

    /// Identifier: "lnr-user"
    IFLinearFreeUser                                = 0xe82a,

    /// Identifier: "lnr-users"
    IFLinearFreeUsers                               = 0xe82b,

    /// Identifier: "lnr-shirt"
    IFLinearFreeShirt                               = 0xe82c,

    /// Identifier: "lnr-store"
    IFLinearFreeStore                               = 0xe82d,

    /// Identifier: "lnr-cart"
    IFLinearFreeCart                                = 0xe82e,

    /// Identifier: "lnr-tag"
    IFLinearFreeTag                                 = 0xe82f,

    /// Identifier: "lnr-phone-handset"
    IFLinearFreePhoneHandset                        = 0xe830,

    /// Identifier: "lnr-phone"
    IFLinearFreePhone                               = 0xe831,

    /// Identifier: "lnr-pushpin"
    IFLinearFreePushpin                             = 0xe832,

    /// Identifier: "lnr-map-marker"
    IFLinearFreeMapMarker                           = 0xe833,

    /// Identifier: "lnr-map"
    IFLinearFreeMap                                 = 0xe834,

    /// Identifier: "lnr-location"
    IFLinearFreeLocation                            = 0xe835,

    /// Identifier: "lnr-calendar-full"
    IFLinearFreeCalendarFull                        = 0xe836,

    /// Identifier: "lnr-keyboard"
    IFLinearFreeKeyboard                            = 0xe837,

    /// Identifier: "lnr-spell-check"
    IFLinearFreeSpellCheck                          = 0xe838,

    /// Identifier: "lnr-screen"
    IFLinearFreeScreen                              = 0xe839,

    /// Identifier: "lnr-smartphone"
    IFLinearFreeSmartphone                          = 0xe83a,

    /// Identifier: "lnr-tablet"
    IFLinearFreeTablet                              = 0xe83b,

    /// Identifier: "lnr-laptop"
    IFLinearFreeLaptop                              = 0xe83c,

    /// Identifier: "lnr-laptop-phone"
    IFLinearFreeLaptopPhone                         = 0xe83d,

    /// Identifier: "lnr-power-switch"
    IFLinearFreePowerSwitch                         = 0xe83e,

    /// Identifier: "lnr-bubble"
    IFLinearFreeBubble                              = 0xe83f,

    /// Identifier: "lnr-heart-pulse"
    IFLinearFreeHeartPulse                          = 0xe840,

    /// Identifier: "lnr-construction"
    IFLinearFreeConstruction                        = 0xe841,

    /// Identifier: "lnr-pie-chart"
    IFLinearFreePieChart                            = 0xe842,

    /// Identifier: "lnr-chart-bars"
    IFLinearFreeChartBars                           = 0xe843,

    /// Identifier: "lnr-gift"
    IFLinearFreeGift                                = 0xe844,

    /// Identifier: "lnr-diamond"
    IFLinearFreeDiamond                             = 0xe845,

    /// Identifier: "lnr-linearicons"
    IFLinearFreeLinearicons                         = 0xe846,

    /// Identifier: "lnr-dinner"
    IFLinearFreeDinner                              = 0xe847,

    /// Identifier: "lnr-coffee-cup"
    IFLinearFreeCoffeeCup                           = 0xe848,

    /// Identifier: "lnr-leaf"
    IFLinearFreeLeaf                                = 0xe849,

    /// Identifier: "lnr-paw"
    IFLinearFreePaw                                 = 0xe84a,

    /// Identifier: "lnr-rocket"
    IFLinearFreeRocket                              = 0xe84b,

    /// Identifier: "lnr-briefcase"
    IFLinearFreeBriefcase                           = 0xe84c,

    /// Identifier: "lnr-bus"
    IFLinearFreeBus                                 = 0xe84d,

    /// Identifier: "lnr-car"
    IFLinearFreeCar                                 = 0xe84e,

    /// Identifier: "lnr-train"
    IFLinearFreeTrain                               = 0xe84f,

    /// Identifier: "lnr-bicycle"
    IFLinearFreeBicycle                             = 0xe850,

    /// Identifier: "lnr-wheelchair"
    IFLinearFreeWheelchair                          = 0xe851,

    /// Identifier: "lnr-select"
    IFLinearFreeSelect                              = 0xe852,

    /// Identifier: "lnr-earth"
    IFLinearFreeEarth                               = 0xe853,

    /// Identifier: "lnr-smile"
    IFLinearFreeSmile                               = 0xe854,

    /// Identifier: "lnr-sad"
    IFLinearFreeSad                                 = 0xe855,

    /// Identifier: "lnr-neutral"
    IFLinearFreeNeutral                             = 0xe856,

    /// Identifier: "lnr-mustache"
    IFLinearFreeMustache                            = 0xe857,

    /// Identifier: "lnr-alarm"
    IFLinearFreeAlarm                               = 0xe858,

    /// Identifier: "lnr-bullhorn"
    IFLinearFreeBullhorn                            = 0xe859,

    /// Identifier: "lnr-volume-high"
    IFLinearFreeVolumeHigh                          = 0xe85a,

    /// Identifier: "lnr-volume-medium"
    IFLinearFreeVolumeMedium                        = 0xe85b,

    /// Identifier: "lnr-volume-low"
    IFLinearFreeVolumeLow                           = 0xe85c,

    /// Identifier: "lnr-volume"
    IFLinearFreeVolume                              = 0xe85d,

    /// Identifier: "lnr-mic"
    IFLinearFreeMic                                 = 0xe85e,

    /// Identifier: "lnr-hourglass"
    IFLinearFreeHourglass                           = 0xe85f,

    /// Identifier: "lnr-undo"
    IFLinearFreeUndo                                = 0xe860,

    /// Identifier: "lnr-redo"
    IFLinearFreeRedo                                = 0xe861,

    /// Identifier: "lnr-sync"
    IFLinearFreeSync                                = 0xe862,

    /// Identifier: "lnr-history"
    IFLinearFreeHistory                             = 0xe863,

    /// Identifier: "lnr-clock"
    IFLinearFreeClock                               = 0xe864,

    /// Identifier: "lnr-download"
    IFLinearFreeDownload                            = 0xe865,

    /// Identifier: "lnr-upload"
    IFLinearFreeUpload                              = 0xe866,

    /// Identifier: "lnr-enter-down"
    IFLinearFreeEnterDown                           = 0xe867,

    /// Identifier: "lnr-exit-up"
    IFLinearFreeExitUp                              = 0xe868,

    /// Identifier: "lnr-bug"
    IFLinearFreeBug                                 = 0xe869,

    /// Identifier: "lnr-code"
    IFLinearFreeCode                                = 0xe86a,

    /// Identifier: "lnr-link"
    IFLinearFreeLink                                = 0xe86b,

    /// Identifier: "lnr-unlink"
    IFLinearFreeUnlink                              = 0xe86c,

    /// Identifier: "lnr-thumbs-up"
    IFLinearFreeThumbsUp                            = 0xe86d,

    /// Identifier: "lnr-thumbs-down"
    IFLinearFreeThumbsDown                          = 0xe86e,

    /// Identifier: "lnr-magnifier"
    IFLinearFreeMagnifier                           = 0xe86f,

    /// Identifier: "lnr-cross"
    IFLinearFreeCross                               = 0xe870,

    /// Identifier: "lnr-menu"
    IFLinearFreeMenu                                = 0xe871,

    /// Identifier: "lnr-list"
    IFLinearFreeList                                = 0xe872,

    /// Identifier: "lnr-chevron-up"
    IFLinearFreeChevronUp                           = 0xe873,

    /// Identifier: "lnr-chevron-down"
    IFLinearFreeChevronDown                         = 0xe874,

    /// Identifier: "lnr-chevron-left"
    IFLinearFreeChevronLeft                         = 0xe875,

    /// Identifier: "lnr-chevron-right"
    IFLinearFreeChevronRight                        = 0xe876,

    /// Identifier: "lnr-arrow-up"
    IFLinearFreeArrowUp                             = 0xe877,

    /// Identifier: "lnr-arrow-down"
    IFLinearFreeArrowDown                           = 0xe878,

    /// Identifier: "lnr-arrow-left"
    IFLinearFreeArrowLeft                           = 0xe879,

    /// Identifier: "lnr-arrow-right"
    IFLinearFreeArrowRight                          = 0xe87a,

    /// Identifier: "lnr-move"
    IFLinearFreeMove                                = 0xe87b,

    /// Identifier: "lnr-warning"
    IFLinearFreeWarning                             = 0xe87c,

    /// Identifier: "lnr-question-circle"
    IFLinearFreeQuestionCircle                      = 0xe87d,

    /// Identifier: "lnr-menu-circle"
    IFLinearFreeMenuCircle                          = 0xe87e,

    /// Identifier: "lnr-checkmark-circle"
    IFLinearFreeCheckmarkCircle                     = 0xe87f,

    /// Identifier: "lnr-cross-circle"
    IFLinearFreeCrossCircle                         = 0xe880,

    /// Identifier: "lnr-plus-circle"
    IFLinearFreePlusCircle                          = 0xe881,

    /// Identifier: "lnr-circle-minus"
    IFLinearFreeCircleMinus                         = 0xe882,

    /// Identifier: "lnr-arrow-up-circle"
    IFLinearFreeArrowUpCircle                       = 0xe883,

    /// Identifier: "lnr-arrow-down-circle"
    IFLinearFreeArrowDownCircle                     = 0xe884,

    /// Identifier: "lnr-arrow-left-circle"
    IFLinearFreeArrowLeftCircle                     = 0xe885,

    /// Identifier: "lnr-arrow-right-circle"
    IFLinearFreeArrowRightCircle                    = 0xe886,

    /// Identifier: "lnr-chevron-up-circle"
    IFLinearFreeChevronUpCircle                     = 0xe887,

    /// Identifier: "lnr-chevron-down-circle"
    IFLinearFreeChevronDownCircle                   = 0xe888,

    /// Identifier: "lnr-chevron-left-circle"
    IFLinearFreeChevronLeftCircle                   = 0xe889,

    /// Identifier: "lnr-chevron-right-circle"
    IFLinearFreeChevronRightCircle                  = 0xe88a,

    /// Identifier: "lnr-crop"
    IFLinearFreeCrop                                = 0xe88b,

    /// Identifier: "lnr-frame-expand"
    IFLinearFreeFrameExpand                         = 0xe88c,

    /// Identifier: "lnr-frame-contract"
    IFLinearFreeFrameContract                       = 0xe88d,

    /// Identifier: "lnr-layers"
    IFLinearFreeLayers                              = 0xe88e,

    /// Identifier: "lnr-funnel"
    IFLinearFreeFunnel                              = 0xe88f,

    /// Identifier: "lnr-text-format"
    IFLinearFreeTextFormat                          = 0xe890,

    /// Identifier: "lnr-text-format-remove"
    IFLinearFreeTextFormatRemove                    = 0xe891,

    /// Identifier: "lnr-text-size"
    IFLinearFreeTextSize                            = 0xe892,

    /// Identifier: "lnr-bold"
    IFLinearFreeBold                                = 0xe893,

    /// Identifier: "lnr-italic"
    IFLinearFreeItalic                              = 0xe894,

    /// Identifier: "lnr-underline"
    IFLinearFreeUnderline                           = 0xe895,

    /// Identifier: "lnr-strikethrough"
    IFLinearFreeStrikethrough                       = 0xe896,

    /// Identifier: "lnr-highlight"
    IFLinearFreeHighlight                           = 0xe897,

    /// Identifier: "lnr-text-align-left"
    IFLinearFreeTextAlignLeft                       = 0xe898,

    /// Identifier: "lnr-text-align-center"
    IFLinearFreeTextAlignCenter                     = 0xe899,

    /// Identifier: "lnr-text-align-right"
    IFLinearFreeTextAlignRight                      = 0xe89a,

    /// Identifier: "lnr-text-align-justify"
    IFLinearFreeTextAlignJustify                    = 0xe89b,

    /// Identifier: "lnr-line-spacing"
    IFLinearFreeLineSpacing                         = 0xe89c,

    /// Identifier: "lnr-indent-increase"
    IFLinearFreeIndentIncrease                      = 0xe89d,

    /// Identifier: "lnr-indent-decrease"
    IFLinearFreeIndentDecrease                      = 0xe89e,

    /// Identifier: "lnr-pilcrow"
    IFLinearFreePilcrow                             = 0xe89f,

    /// Identifier: "lnr-direction-ltr"
    IFLinearFreeDirectionLtr                        = 0xe8a0,

    /// Identifier: "lnr-direction-rtl"
    IFLinearFreeDirectionRtl                        = 0xe8a1,

    /// Identifier: "lnr-page-break"
    IFLinearFreePageBreak                           = 0xe8a2,

    /// Identifier: "lnr-sort-alpha-asc"
    IFLinearFreeSortAlphaAsc                        = 0xe8a3,

    /// Identifier: "lnr-sort-amount-asc"
    IFLinearFreeSortAmountAsc                       = 0xe8a4,

    /// Identifier: "lnr-hand"
    IFLinearFreeHand                                = 0xe8a5,

    /// Identifier: "lnr-pointer-up"
    IFLinearFreePointerUp                           = 0xe8a6,

    /// Identifier: "lnr-pointer-right"
    IFLinearFreePointerRight                        = 0xe8a7,

    /// Identifier: "lnr-pointer-down"
    IFLinearFreePointerDown                         = 0xe8a8,

    /// Identifier: "lnr-pointer-left"
    IFLinearFreePointerLeft                         = 0xe8a9,

};

/**
 * Linearicons Free Version, v1.0.0 https://linearicons.com/free
 */
@interface IFLineariconsFree : IFIcon
@end
