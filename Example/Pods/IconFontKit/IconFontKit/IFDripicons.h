#import "IFIcon.h"

/**
 * Dripicons icon types.
 */
typedef NS_ENUM(IFIconType, IFDripiconsType) {

    /// Identifier: "icon-align-center"
    IFDripiconAlignCenter                         = 0xe000,

    /// Identifier: "icon-align-justify"
    IFDripiconAlignJustify                        = 0xe001,

    /// Identifier: "icon-align-left"
    IFDripiconAlignLeft                           = 0xe002,

    /// Identifier: "icon-align-right"
    IFDripiconAlignRight                          = 0xe003,

    /// Identifier: "icon-arrow-down"
    IFDripiconArrowDown                           = 0xe004,

    /// Identifier: "icon-arrow-left"
    IFDripiconArrowLeft                           = 0xe005,

    /// Identifier: "icon-arrow-thin-down"
    IFDripiconArrowThinDown                       = 0xe006,

    /// Identifier: "icon-arrow-right"
    IFDripiconArrowRight                          = 0xe007,

    /// Identifier: "icon-arrow-thin-left"
    IFDripiconArrowThinLeft                       = 0xe008,

    /// Identifier: "icon-arrow-thin-up"
    IFDripiconArrowThinUp                         = 0xe009,

    /// Identifier: "icon-arrow-up"
    IFDripiconArrowUp                             = 0xe010,

    /// Identifier: "icon-attachment"
    IFDripiconAttachment                          = 0xe011,

    /// Identifier: "icon-arrow-thin-right"
    IFDripiconArrowThinRight                      = 0xe012,

    /// Identifier: "icon-code"
    IFDripiconCode                                = 0xe013,

    /// Identifier: "icon-cloud"
    IFDripiconCloud                               = 0xe014,

    /// Identifier: "icon-chevron-right"
    IFDripiconChevronRight                        = 0xe015,

    /// Identifier: "icon-chevron-up"
    IFDripiconChevronUp                           = 0xe016,

    /// Identifier: "icon-chevron-down"
    IFDripiconChevronDown                         = 0xe017,

    /// Identifier: "icon-chevron-left"
    IFDripiconChevronLeft                         = 0xe018,

    /// Identifier: "icon-camera"
    IFDripiconCamera                              = 0xe019,

    /// Identifier: "icon-checkmark"
    IFDripiconCheckmark                           = 0xe020,

    /// Identifier: "icon-calendar"
    IFDripiconCalendar                            = 0xe021,

    /// Identifier: "icon-clockwise"
    IFDripiconClockwise                           = 0xe022,

    /// Identifier: "icon-conversation"
    IFDripiconConversation                        = 0xe023,

    /// Identifier: "icon-direction"
    IFDripiconDirection                           = 0xe024,

    /// Identifier: "icon-cross"
    IFDripiconCross                               = 0xe025,

    /// Identifier: "icon-graph-line"
    IFDripiconGraphLine                           = 0xe026,

    /// Identifier: "icon-gear"
    IFDripiconGear                                = 0xe027,

    /// Identifier: "icon-graph-bar"
    IFDripiconGraphBar                            = 0xe028,

    /// Identifier: "icon-export"
    IFDripiconExport                              = 0xe029,

    /// Identifier: "icon-feed"
    IFDripiconFeed                                = 0xe030,

    /// Identifier: "icon-folder"
    IFDripiconFolder                              = 0xe031,

    /// Identifier: "icon-forward"
    IFDripiconForward                             = 0xe032,

    /// Identifier: "icon-folder-open"
    IFDripiconFolderOpen                          = 0xe033,

    /// Identifier: "icon-download"
    IFDripiconDownload                            = 0xe034,

    /// Identifier: "icon-document-new"
    IFDripiconDocumentNew                         = 0xe035,

    /// Identifier: "icon-document-edit"
    IFDripiconDocumentEdit                        = 0xe036,

    /// Identifier: "icon-document"
    IFDripiconDocument                            = 0xe037,

    /// Identifier: "icon-gaming"
    IFDripiconGaming                              = 0xe038,

    /// Identifier: "icon-graph-pie"
    IFDripiconGraphPie                            = 0xe039,

    /// Identifier: "icon-heart"
    IFDripiconHeart                               = 0xe040,

    /// Identifier: "icon-headset"
    IFDripiconHeadset                             = 0xe041,

    /// Identifier: "icon-help"
    IFDripiconHelp                                = 0xe042,

    /// Identifier: "icon-information"
    IFDripiconInformation                         = 0xe043,

    /// Identifier: "icon-loading"
    IFDripiconLoading                             = 0xe044,

    /// Identifier: "icon-lock"
    IFDripiconLock                                = 0xe045,

    /// Identifier: "icon-location"
    IFDripiconLocation                            = 0xe046,

    /// Identifier: "icon-lock-open"
    IFDripiconLockOpen                            = 0xe047,

    /// Identifier: "icon-mail"
    IFDripiconMail                                = 0xe048,

    /// Identifier: "icon-map"
    IFDripiconMap                                 = 0xe049,

    /// Identifier: "icon-media-loop"
    IFDripiconMediaLoop                           = 0xe050,

    /// Identifier: "icon-mobile-portrait"
    IFDripiconMobilePortrait                      = 0xe051,

    /// Identifier: "icon-mobile-landscape"
    IFDripiconMobileLandscape                     = 0xe052,

    /// Identifier: "icon-microphone"
    IFDripiconMicrophone                          = 0xe053,

    /// Identifier: "icon-minus"
    IFDripiconMinus                               = 0xe054,

    /// Identifier: "icon-message"
    IFDripiconMessage                             = 0xe055,

    /// Identifier: "icon-menu"
    IFDripiconMenu                                = 0xe056,

    /// Identifier: "icon-media-stop"
    IFDripiconMediaStop                           = 0xe057,

    /// Identifier: "icon-media-shuffle"
    IFDripiconMediaShuffle                        = 0xe058,

    /// Identifier: "icon-media-previous"
    IFDripiconMediaPrevious                       = 0xe059,

    /// Identifier: "icon-media-play"
    IFDripiconMediaPlay                           = 0xe060,

    /// Identifier: "icon-media-next"
    IFDripiconMediaNext                           = 0xe061,

    /// Identifier: "icon-media-pause"
    IFDripiconMediaPause                          = 0xe062,

    /// Identifier: "icon-monitor"
    IFDripiconMonitor                             = 0xe063,

    /// Identifier: "icon-move"
    IFDripiconMove                                = 0xe064,

    /// Identifier: "icon-plus"
    IFDripiconPlus                                = 0xe065,

    /// Identifier: "icon-phone"
    IFDripiconPhone                               = 0xe066,

    /// Identifier: "icon-preview"
    IFDripiconPreview                             = 0xe067,

    /// Identifier: "icon-print"
    IFDripiconPrint                               = 0xe068,

    /// Identifier: "icon-media-record"
    IFDripiconMediaRecord                         = 0xe069,

    /// Identifier: "icon-music"
    IFDripiconMusic                               = 0xe070,

    /// Identifier: "icon-home"
    IFDripiconHome                                = 0xe071,

    /// Identifier: "icon-question"
    IFDripiconQuestion                            = 0xe072,

    /// Identifier: "icon-reply"
    IFDripiconReply                               = 0xe073,

    /// Identifier: "icon-reply-all"
    IFDripiconReplyAll                            = 0xe074,

    /// Identifier: "icon-return"
    IFDripiconReturn                              = 0xe075,

    /// Identifier: "icon-retweet"
    IFDripiconRetweet                             = 0xe076,

    /// Identifier: "icon-search"
    IFDripiconSearch                              = 0xe077,

    /// Identifier: "icon-view-thumb"
    IFDripiconViewThumb                           = 0xe078,

    /// Identifier: "icon-view-list-large"
    IFDripiconViewListLarge                       = 0xe079,

    /// Identifier: "icon-view-list"
    IFDripiconViewList                            = 0xe080,

    /// Identifier: "icon-upload"
    IFDripiconUpload                              = 0xe081,

    /// Identifier: "icon-user-group"
    IFDripiconUserGroup                           = 0xe082,

    /// Identifier: "icon-trash"
    IFDripiconTrash                               = 0xe083,

    /// Identifier: "icon-user"
    IFDripiconUser                                = 0xe084,

    /// Identifier: "icon-thumbs-up"
    IFDripiconThumbsUp                            = 0xe085,

    /// Identifier: "icon-thumbs-down"
    IFDripiconThumbsDown                          = 0xe086,

    /// Identifier: "icon-tablet-portrait"
    IFDripiconTabletPortrait                      = 0xe087,

    /// Identifier: "icon-tablet-landscape"
    IFDripiconTabletLandscape                     = 0xe088,

    /// Identifier: "icon-tag"
    IFDripiconTag                                 = 0xe089,

    /// Identifier: "icon-star"
    IFDripiconStar                                = 0xe090,

    /// Identifier: "icon-volume-full"
    IFDripiconVolumeFull                          = 0xe091,

    /// Identifier: "icon-volume-off"
    IFDripiconVolumeOff                           = 0xe092,

    /// Identifier: "icon-warning"
    IFDripiconWarning                             = 0xe093,

    /// Identifier: "icon-window"
    IFDripiconWindow                              = 0xe094,

};

/**
 * Dripicons v1.0 http://demo.amitjakhu.com/dripicons
 */
@interface IFDripicons : IFIcon
@end
