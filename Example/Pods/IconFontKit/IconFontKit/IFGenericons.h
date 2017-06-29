#import "IFIcon.h"

/**
 * Genericons icon types.
 */
typedef NS_ENUM(IFIconType, IFGenericonsType) {

    /// Identifier: "genericon-404"
    IFGenericon404                                 = 0xf423,

    /// Identifier: "genericon-activity"
    IFGenericonActivity                            = 0xf508,

    /// Identifier: "genericon-anchor"
    IFGenericonAnchor                              = 0xf509,

    /// Identifier: "genericon-aside"
    IFGenericonAside                               = 0xf101,

    /// Identifier: "genericon-attachment"
    IFGenericonAttachment                          = 0xf416,

    /// Identifier: "genericon-audio"
    IFGenericonAudio                               = 0xf109,

    /// Identifier: "genericon-bold"
    IFGenericonBold                                = 0xf471,

    /// Identifier: "genericon-book"
    IFGenericonBook                                = 0xf444,

    /// Identifier: "genericon-bug"
    IFGenericonBug                                 = 0xf50a,

    /// Identifier: "genericon-cart"
    IFGenericonCart                                = 0xf447,

    /// Identifier: "genericon-category"
    IFGenericonCategory                            = 0xf301,

    /// Identifier: "genericon-chat"
    IFGenericonChat                                = 0xf108,

    /// Identifier: "genericon-checkmark"
    IFGenericonCheckmark                           = 0xf418,

    /// Identifier: "genericon-close"
    IFGenericonClose                               = 0xf405,

    /// Identifier: "genericon-close-alt"
    IFGenericonCloseAlt                            = 0xf406,

    /// Identifier: "genericon-cloud"
    IFGenericonCloud                               = 0xf426,

    /// Identifier: "genericon-cloud-download"
    IFGenericonCloudDownload                       = 0xf440,

    /// Identifier: "genericon-cloud-upload"
    IFGenericonCloudUpload                         = 0xf441,

    /// Identifier: "genericon-code"
    IFGenericonCode                                = 0xf462,

    /// Identifier: "genericon-codepen"
    IFGenericonCodepen                             = 0xf216,

    /// Identifier: "genericon-cog"
    IFGenericonCog                                 = 0xf445,

    /// Identifier: "genericon-collapse"
    IFGenericonCollapse                            = 0xf432,

    /// Identifier: "genericon-comment"
    IFGenericonComment                             = 0xf300,

    /// Identifier: "genericon-day"
    IFGenericonDay                                 = 0xf305,

    /// Identifier: "genericon-digg"
    IFGenericonDigg                                = 0xf221,

    /// Identifier: "genericon-document"
    IFGenericonDocument                            = 0xf443,

    /// Identifier: "genericon-dot"
    IFGenericonDot                                 = 0xf428,

    /// Identifier: "genericon-downarrow"
    IFGenericonDownarrow                           = 0xf502,

    /// Identifier: "genericon-download"
    IFGenericonDownload                            = 0xf50b,

    /// Identifier: "genericon-draggable"
    IFGenericonDraggable                           = 0xf436,

    /// Identifier: "genericon-dribbble"
    IFGenericonDribbble                            = 0xf201,

    /// Identifier: "genericon-dropbox"
    IFGenericonDropbox                             = 0xf225,

    /// Identifier: "genericon-dropdown"
    IFGenericonDropdown                            = 0xf433,

    /// Identifier: "genericon-dropdown-left"
    IFGenericonDropdownLeft                        = 0xf434,

    /// Identifier: "genericon-edit"
    IFGenericonEdit                                = 0xf411,

    /// Identifier: "genericon-ellipsis"
    IFGenericonEllipsis                            = 0xf476,

    /// Identifier: "genericon-expand"
    IFGenericonExpand                              = 0xf431,

    /// Identifier: "genericon-external"
    IFGenericonExternal                            = 0xf442,

    /// Identifier: "genericon-facebook"
    IFGenericonFacebook                            = 0xf203,

    /// Identifier: "genericon-facebook-alt"
    IFGenericonFacebookAlt                         = 0xf204,

    /// Identifier: "genericon-fastforward"
    IFGenericonFastforward                         = 0xf458,

    /// Identifier: "genericon-feed"
    IFGenericonFeed                                = 0xf413,

    /// Identifier: "genericon-flag"
    IFGenericonFlag                                = 0xf468,

    /// Identifier: "genericon-flickr"
    IFGenericonFlickr                              = 0xf211,

    /// Identifier: "genericon-foursquare"
    IFGenericonFoursquare                          = 0xf226,

    /// Identifier: "genericon-fullscreen"
    IFGenericonFullscreen                          = 0xf474,

    /// Identifier: "genericon-gallery"
    IFGenericonGallery                             = 0xf103,

    /// Identifier: "genericon-github"
    IFGenericonGithub                              = 0xf200,

    /// Identifier: "genericon-googleplus"
    IFGenericonGoogleplus                          = 0xf206,

    /// Identifier: "genericon-googleplus-alt"
    IFGenericonGoogleplusAlt                       = 0xf218,

    /// Identifier: "genericon-handset"
    IFGenericonHandset                             = 0xf50c,

    /// Identifier: "genericon-heart"
    IFGenericonHeart                               = 0xf461,

    /// Identifier: "genericon-help"
    IFGenericonHelp                                = 0xf457,

    /// Identifier: "genericon-hide"
    IFGenericonHide                                = 0xf404,

    /// Identifier: "genericon-hierarchy"
    IFGenericonHierarchy                           = 0xf505,

    /// Identifier: "genericon-home"
    IFGenericonHome                                = 0xf409,

    /// Identifier: "genericon-image"
    IFGenericonImage                               = 0xf102,

    /// Identifier: "genericon-info"
    IFGenericonInfo                                = 0xf455,

    /// Identifier: "genericon-instagram"
    IFGenericonInstagram                           = 0xf215,

    /// Identifier: "genericon-italic"
    IFGenericonItalic                              = 0xf472,

    /// Identifier: "genericon-key"
    IFGenericonKey                                 = 0xf427,

    /// Identifier: "genericon-leftarrow"
    IFGenericonLeftarrow                           = 0xf503,

    /// Identifier: "genericon-link"
    IFGenericonLink                                = 0xf107,

    /// Identifier: "genericon-linkedin"
    IFGenericonLinkedin                            = 0xf207,

    /// Identifier: "genericon-linkedin-alt"
    IFGenericonLinkedinAlt                         = 0xf208,

    /// Identifier: "genericon-location"
    IFGenericonLocation                            = 0xf417,

    /// Identifier: "genericon-lock"
    IFGenericonLock                                = 0xf470,

    /// Identifier: "genericon-mail"
    IFGenericonMail                                = 0xf410,

    /// Identifier: "genericon-maximize"
    IFGenericonMaximize                            = 0xf422,

    /// Identifier: "genericon-menu"
    IFGenericonMenu                                = 0xf419,

    /// Identifier: "genericon-microphone"
    IFGenericonMicrophone                          = 0xf50d,

    /// Identifier: "genericon-minimize"
    IFGenericonMinimize                            = 0xf421,

    /// Identifier: "genericon-minus"
    IFGenericonMinus                               = 0xf50e,

    /// Identifier: "genericon-month"
    IFGenericonMonth                               = 0xf307,

    /// Identifier: "genericon-move"
    IFGenericonMove                                = 0xf50f,

    /// Identifier: "genericon-next"
    IFGenericonNext                                = 0xf429,

    /// Identifier: "genericon-notice"
    IFGenericonNotice                              = 0xf456,

    /// Identifier: "genericon-paintbrush"
    IFGenericonPaintbrush                          = 0xf506,

    /// Identifier: "genericon-path"
    IFGenericonPath                                = 0xf219,

    /// Identifier: "genericon-pause"
    IFGenericonPause                               = 0xf448,

    /// Identifier: "genericon-phone"
    IFGenericonPhone                               = 0xf437,

    /// Identifier: "genericon-picture"
    IFGenericonPicture                             = 0xf473,

    /// Identifier: "genericon-pinned"
    IFGenericonPinned                              = 0xf308,

    /// Identifier: "genericon-pinterest"
    IFGenericonPinterest                           = 0xf209,

    /// Identifier: "genericon-pinterest-alt"
    IFGenericonPinterestAlt                        = 0xf210,

    /// Identifier: "genericon-play"
    IFGenericonPlay                                = 0xf452,

    /// Identifier: "genericon-plugin"
    IFGenericonPlugin                              = 0xf439,

    /// Identifier: "genericon-plus"
    IFGenericonPlus                                = 0xf510,

    /// Identifier: "genericon-pocket"
    IFGenericonPocket                              = 0xf224,

    /// Identifier: "genericon-polldaddy"
    IFGenericonPolldaddy                           = 0xf217,

    /// Identifier: "genericon-portfolio"
    IFGenericonPortfolio                           = 0xf460,

    /// Identifier: "genericon-previous"
    IFGenericonPrevious                            = 0xf430,

    /// Identifier: "genericon-print"
    IFGenericonPrint                               = 0xf469,

    /// Identifier: "genericon-quote"
    IFGenericonQuote                               = 0xf106,

    /// Identifier: "genericon-rating-empty"
    IFGenericonRatingEmpty                         = 0xf511,

    /// Identifier: "genericon-rating-full"
    IFGenericonRatingFull                          = 0xf512,

    /// Identifier: "genericon-rating-half"
    IFGenericonRatingHalf                          = 0xf513,

    /// Identifier: "genericon-reddit"
    IFGenericonReddit                              = 0xf222,

    /// Identifier: "genericon-refresh"
    IFGenericonRefresh                             = 0xf420,

    /// Identifier: "genericon-reply"
    IFGenericonReply                               = 0xf412,

    /// Identifier: "genericon-reply-alt"
    IFGenericonReplyAlt                            = 0xf466,

    /// Identifier: "genericon-reply-single"
    IFGenericonReplySingle                         = 0xf467,

    /// Identifier: "genericon-rewind"
    IFGenericonRewind                              = 0xf459,

    /// Identifier: "genericon-rightarrow"
    IFGenericonRightarrow                          = 0xf501,

    /// Identifier: "genericon-search"
    IFGenericonSearch                              = 0xf400,

    /// Identifier: "genericon-send-to-phone"
    IFGenericonSendToPhone                         = 0xf438,

    /// Identifier: "genericon-send-to-tablet"
    IFGenericonSendToTablet                        = 0xf454,

    /// Identifier: "genericon-share"
    IFGenericonShare                               = 0xf415,

    /// Identifier: "genericon-show"
    IFGenericonShow                                = 0xf403,

    /// Identifier: "genericon-shuffle"
    IFGenericonShuffle                             = 0xf514,

    /// Identifier: "genericon-sitemap"
    IFGenericonSitemap                             = 0xf507,

    /// Identifier: "genericon-skip-ahead"
    IFGenericonSkipAhead                           = 0xf451,

    /// Identifier: "genericon-skip-back"
    IFGenericonSkipBack                            = 0xf450,

    /// Identifier: "genericon-skype"
    IFGenericonSkype                               = 0xf220,

    /// Identifier: "genericon-spam"
    IFGenericonSpam                                = 0xf424,

    /// Identifier: "genericon-spotify"
    IFGenericonSpotify                             = 0xf515,

    /// Identifier: "genericon-standard"
    IFGenericonStandard                            = 0xf100,

    /// Identifier: "genericon-star"
    IFGenericonStar                                = 0xf408,

    /// Identifier: "genericon-status"
    IFGenericonStatus                              = 0xf105,

    /// Identifier: "genericon-stop"
    IFGenericonStop                                = 0xf449,

    /// Identifier: "genericon-stumbleupon"
    IFGenericonStumbleupon                         = 0xf223,

    /// Identifier: "genericon-subscribe"
    IFGenericonSubscribe                           = 0xf463,

    /// Identifier: "genericon-subscribed"
    IFGenericonSubscribed                          = 0xf465,

    /// Identifier: "genericon-summary"
    IFGenericonSummary                             = 0xf425,

    /// Identifier: "genericon-tablet"
    IFGenericonTablet                              = 0xf453,

    /// Identifier: "genericon-tag"
    IFGenericonTag                                 = 0xf302,

    /// Identifier: "genericon-time"
    IFGenericonTime                                = 0xf303,

    /// Identifier: "genericon-top"
    IFGenericonTop                                 = 0xf435,

    /// Identifier: "genericon-trash"
    IFGenericonTrash                               = 0xf407,

    /// Identifier: "genericon-tumblr"
    IFGenericonTumblr                              = 0xf214,

    /// Identifier: "genericon-twitch"
    IFGenericonTwitch                              = 0xf516,

    /// Identifier: "genericon-twitter"
    IFGenericonTwitter                             = 0xf202,

    /// Identifier: "genericon-unapprove"
    IFGenericonUnapprove                           = 0xf446,

    /// Identifier: "genericon-unsubscribe"
    IFGenericonUnsubscribe                         = 0xf464,

    /// Identifier: "genericon-unzoom"
    IFGenericonUnzoom                              = 0xf401,

    /// Identifier: "genericon-uparrow"
    IFGenericonUparrow                             = 0xf500,

    /// Identifier: "genericon-user"
    IFGenericonUser                                = 0xf304,

    /// Identifier: "genericon-video"
    IFGenericonVideo                               = 0xf104,

    /// Identifier: "genericon-videocamera"
    IFGenericonVideocamera                         = 0xf517,

    /// Identifier: "genericon-vimeo"
    IFGenericonVimeo                               = 0xf212,

    /// Identifier: "genericon-warning"
    IFGenericonWarning                             = 0xf414,

    /// Identifier: "genericon-website"
    IFGenericonWebsite                             = 0xf475,

    /// Identifier: "genericon-week"
    IFGenericonWeek                                = 0xf306,

    /// Identifier: "genericon-wordpress"
    IFGenericonWordpress                           = 0xf205,

    /// Identifier: "genericon-xpost"
    IFGenericonXpost                               = 0xf504,

    /// Identifier: "genericon-youtube"
    IFGenericonYoutube                             = 0xf213,

    /// Identifier: "genericon-zoom"
    IFGenericonZoom                                = 0xf402,

};

/**
 * Genericons v3.4.1 http://genericons.com
 */
@interface IFGenericons : IFIcon
@end
