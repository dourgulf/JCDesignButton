#import "IFIcon.h"

/**
 * Dashicons icon types.
 */
typedef NS_ENUM(IFIconType, IFDashiconsType) {

    /// Identifier: "dashicons-menu"
    IFDashMenu                                = 0xf333,

    /// Identifier: "dashicons-admin-site"
    IFDashAdminSite                           = 0xf319,

    /// Identifier: "dashicons-dashboard"
    IFDashDashboard                           = 0xf226,

    /// Identifier: "dashicons-admin-media"
    IFDashAdminMedia                          = 0xf104,

    /// Identifier: "dashicons-admin-page"
    IFDashAdminPage                           = 0xf105,

    /// Identifier: "dashicons-admin-comments"
    IFDashAdminComments                       = 0xf101,

    /// Identifier: "dashicons-admin-appearance"
    IFDashAdminAppearance                     = 0xf100,

    /// Identifier: "dashicons-admin-plugins"
    IFDashAdminPlugins                        = 0xf106,

    /// Identifier: "dashicons-admin-users"
    IFDashAdminUsers                          = 0xf110,

    /// Identifier: "dashicons-admin-tools"
    IFDashAdminTools                          = 0xf107,

    /// Identifier: "dashicons-admin-settings"
    IFDashAdminSettings                       = 0xf108,

    /// Identifier: "dashicons-admin-network"
    IFDashAdminNetwork                        = 0xf112,

    /// Identifier: "dashicons-admin-generic"
    IFDashAdminGeneric                        = 0xf111,

    /// Identifier: "dashicons-admin-home"
    IFDashAdminHome                           = 0xf102,

    /// Identifier: "dashicons-admin-collapse"
    IFDashAdminCollapse                       = 0xf148,

    /// Identifier: "dashicons-filter"
    IFDashFilter                              = 0xf536,

    /// Identifier: "dashicons-admin-customizer"
    IFDashAdminCustomizer                     = 0xf540,

    /// Identifier: "dashicons-admin-multisite"
    IFDashAdminMultisite                      = 0xf541,

    /// Identifier: "dashicons-admin-links"
    IFDashAdminLinks                          = 0xf103,

    /// Identifier: "dashicons-format-links"
    IFDashFormatLinks                         = 0xf103,

    /// Identifier: "dashicons-admin-post"
    IFDashAdminPost                           = 0xf109,

    /// Identifier: "dashicons-format-standard"
    IFDashFormatStandard                      = 0xf109,

    /// Identifier: "dashicons-format-image"
    IFDashFormatImage                         = 0xf128,

    /// Identifier: "dashicons-format-gallery"
    IFDashFormatGallery                       = 0xf161,

    /// Identifier: "dashicons-format-audio"
    IFDashFormatAudio                         = 0xf127,

    /// Identifier: "dashicons-format-video"
    IFDashFormatVideo                         = 0xf126,

    /// Identifier: "dashicons-format-chat"
    IFDashFormatChat                          = 0xf125,

    /// Identifier: "dashicons-format-status"
    IFDashFormatStatus                        = 0xf130,

    /// Identifier: "dashicons-format-aside"
    IFDashFormatAside                         = 0xf123,

    /// Identifier: "dashicons-format-quote"
    IFDashFormatQuote                         = 0xf122,

    /// Identifier: "dashicons-welcome-write-blog"
    IFDashWelcomeWriteBlog                    = 0xf119,

    /// Identifier: "dashicons-welcome-edit-page"
    IFDashWelcomeEditPage                     = 0xf119,

    /// Identifier: "dashicons-welcome-add-page"
    IFDashWelcomeAddPage                      = 0xf133,

    /// Identifier: "dashicons-welcome-view-site"
    IFDashWelcomeViewSite                     = 0xf115,

    /// Identifier: "dashicons-welcome-widgets-menus"
    IFDashWelcomeWidgetsMenus                 = 0xf116,

    /// Identifier: "dashicons-welcome-comments"
    IFDashWelcomeComments                     = 0xf117,

    /// Identifier: "dashicons-welcome-learn-more"
    IFDashWelcomeLearnMore                    = 0xf118,

    /// Identifier: "dashicons-image-crop"
    IFDashImageCrop                           = 0xf165,

    /// Identifier: "dashicons-image-rotate"
    IFDashImageRotate                         = 0xf531,

    /// Identifier: "dashicons-image-rotate-left"
    IFDashImageRotateLeft                     = 0xf166,

    /// Identifier: "dashicons-image-rotate-right"
    IFDashImageRotateRight                    = 0xf167,

    /// Identifier: "dashicons-image-flip-vertical"
    IFDashImageFlipVertical                   = 0xf168,

    /// Identifier: "dashicons-image-flip-horizontal"
    IFDashImageFlipHorizontal                 = 0xf169,

    /// Identifier: "dashicons-image-filter"
    IFDashImageFilter                         = 0xf533,

    /// Identifier: "dashicons-undo"
    IFDashUndo                                = 0xf171,

    /// Identifier: "dashicons-redo"
    IFDashRedo                                = 0xf172,

    /// Identifier: "dashicons-editor-bold"
    IFDashEditorBold                          = 0xf200,

    /// Identifier: "dashicons-editor-italic"
    IFDashEditorItalic                        = 0xf201,

    /// Identifier: "dashicons-editor-ul"
    IFDashEditorUl                            = 0xf203,

    /// Identifier: "dashicons-editor-ol"
    IFDashEditorOl                            = 0xf204,

    /// Identifier: "dashicons-editor-quote"
    IFDashEditorQuote                         = 0xf205,

    /// Identifier: "dashicons-editor-alignleft"
    IFDashEditorAlignleft                     = 0xf206,

    /// Identifier: "dashicons-editor-aligncenter"
    IFDashEditorAligncenter                   = 0xf207,

    /// Identifier: "dashicons-editor-alignright"
    IFDashEditorAlignright                    = 0xf208,

    /// Identifier: "dashicons-editor-insertmore"
    IFDashEditorInsertmore                    = 0xf209,

    /// Identifier: "dashicons-editor-spellcheck"
    IFDashEditorSpellcheck                    = 0xf210,

    /// Identifier: "dashicons-editor-distractionfree"
    IFDashEditorDistractionfree               = 0xf211,

    /// Identifier: "dashicons-editor-expand"
    IFDashEditorExpand                        = 0xf211,

    /// Identifier: "dashicons-editor-contract"
    IFDashEditorContract                      = 0xf506,

    /// Identifier: "dashicons-editor-kitchensink"
    IFDashEditorKitchensink                   = 0xf212,

    /// Identifier: "dashicons-editor-underline"
    IFDashEditorUnderline                     = 0xf213,

    /// Identifier: "dashicons-editor-justify"
    IFDashEditorJustify                       = 0xf214,

    /// Identifier: "dashicons-editor-textcolor"
    IFDashEditorTextcolor                     = 0xf215,

    /// Identifier: "dashicons-editor-paste-word"
    IFDashEditorPasteWord                     = 0xf216,

    /// Identifier: "dashicons-editor-paste-text"
    IFDashEditorPasteText                     = 0xf217,

    /// Identifier: "dashicons-editor-removeformatting"
    IFDashEditorRemoveformatting              = 0xf218,

    /// Identifier: "dashicons-editor-video"
    IFDashEditorVideo                         = 0xf219,

    /// Identifier: "dashicons-editor-customchar"
    IFDashEditorCustomchar                    = 0xf220,

    /// Identifier: "dashicons-editor-outdent"
    IFDashEditorOutdent                       = 0xf221,

    /// Identifier: "dashicons-editor-indent"
    IFDashEditorIndent                        = 0xf222,

    /// Identifier: "dashicons-editor-help"
    IFDashEditorHelp                          = 0xf223,

    /// Identifier: "dashicons-editor-strikethrough"
    IFDashEditorStrikethrough                 = 0xf224,

    /// Identifier: "dashicons-editor-unlink"
    IFDashEditorUnlink                        = 0xf225,

    /// Identifier: "dashicons-editor-rtl"
    IFDashEditorRtl                           = 0xf320,

    /// Identifier: "dashicons-editor-break"
    IFDashEditorBreak                         = 0xf474,

    /// Identifier: "dashicons-editor-code"
    IFDashEditorCode                          = 0xf475,

    /// Identifier: "dashicons-editor-paragraph"
    IFDashEditorParagraph                     = 0xf476,

    /// Identifier: "dashicons-editor-table"
    IFDashEditorTable                         = 0xf535,

    /// Identifier: "dashicons-align-left"
    IFDashAlignLeft                           = 0xf135,

    /// Identifier: "dashicons-align-right"
    IFDashAlignRight                          = 0xf136,

    /// Identifier: "dashicons-align-center"
    IFDashAlignCenter                         = 0xf134,

    /// Identifier: "dashicons-align-none"
    IFDashAlignNone                           = 0xf138,

    /// Identifier: "dashicons-lock"
    IFDashLock                                = 0xf160,

    /// Identifier: "dashicons-unlock"
    IFDashUnlock                              = 0xf528,

    /// Identifier: "dashicons-calendar"
    IFDashCalendar                            = 0xf145,

    /// Identifier: "dashicons-calendar-alt"
    IFDashCalendarAlt                         = 0xf508,

    /// Identifier: "dashicons-visibility"
    IFDashVisibility                          = 0xf177,

    /// Identifier: "dashicons-hidden"
    IFDashHidden                              = 0xf530,

    /// Identifier: "dashicons-post-status"
    IFDashPostStatus                          = 0xf173,

    /// Identifier: "dashicons-edit"
    IFDashEdit                                = 0xf464,

    /// Identifier: "dashicons-post-trash"
    IFDashPostTrash                           = 0xf182,

    /// Identifier: "dashicons-trash"
    IFDashTrash                               = 0xf182,

    /// Identifier: "dashicons-sticky"
    IFDashSticky                              = 0xf537,

    /// Identifier: "dashicons-external"
    IFDashExternal                            = 0xf504,

    /// Identifier: "dashicons-arrow-up"
    IFDashArrowUp                             = 0xf142,

    /// Identifier: "dashicons-arrow-down"
    IFDashArrowDown                           = 0xf140,

    /// Identifier: "dashicons-arrow-left"
    IFDashArrowLeft                           = 0xf141,

    /// Identifier: "dashicons-arrow-right"
    IFDashArrowRight                          = 0xf139,

    /// Identifier: "dashicons-arrow-up-alt"
    IFDashArrowUpAlt                          = 0xf342,

    /// Identifier: "dashicons-arrow-down-alt"
    IFDashArrowDownAlt                        = 0xf346,

    /// Identifier: "dashicons-arrow-left-alt"
    IFDashArrowLeftAlt                        = 0xf340,

    /// Identifier: "dashicons-arrow-right-alt"
    IFDashArrowRightAlt                       = 0xf344,

    /// Identifier: "dashicons-arrow-up-alt2"
    IFDashArrowUpAlt2                         = 0xf343,

    /// Identifier: "dashicons-arrow-down-alt2"
    IFDashArrowDownAlt2                       = 0xf347,

    /// Identifier: "dashicons-arrow-left-alt2"
    IFDashArrowLeftAlt2                       = 0xf341,

    /// Identifier: "dashicons-arrow-right-alt2"
    IFDashArrowRightAlt2                      = 0xf345,

    /// Identifier: "dashicons-leftright"
    IFDashLeftright                           = 0xf229,

    /// Identifier: "dashicons-sort"
    IFDashSort                                = 0xf156,

    /// Identifier: "dashicons-randomize"
    IFDashRandomize                           = 0xf503,

    /// Identifier: "dashicons-list-view"
    IFDashListView                            = 0xf163,

    /// Identifier: "dashicons-exerpt-view"
    IFDashExerptView                          = 0xf164,

    /// Identifier: "dashicons-excerpt-view"
    IFDashExcerptView                         = 0xf164,

    /// Identifier: "dashicons-grid-view"
    IFDashGridView                            = 0xf509,

    /// Identifier: "dashicons-move"
    IFDashMove                                = 0xf545,

    /// Identifier: "dashicons-hammer"
    IFDashHammer                              = 0xf308,

    /// Identifier: "dashicons-art"
    IFDashArt                                 = 0xf309,

    /// Identifier: "dashicons-migrate"
    IFDashMigrate                             = 0xf310,

    /// Identifier: "dashicons-performance"
    IFDashPerformance                         = 0xf311,

    /// Identifier: "dashicons-universal-access"
    IFDashUniversalAccess                     = 0xf483,

    /// Identifier: "dashicons-universal-access-alt"
    IFDashUniversalAccessAlt                  = 0xf507,

    /// Identifier: "dashicons-tickets"
    IFDashTickets                             = 0xf486,

    /// Identifier: "dashicons-nametag"
    IFDashNametag                             = 0xf484,

    /// Identifier: "dashicons-clipboard"
    IFDashClipboard                           = 0xf481,

    /// Identifier: "dashicons-heart"
    IFDashHeart                               = 0xf487,

    /// Identifier: "dashicons-megaphone"
    IFDashMegaphone                           = 0xf488,

    /// Identifier: "dashicons-schedule"
    IFDashSchedule                            = 0xf489,

    /// Identifier: "dashicons-wordpress"
    IFDashWordpress                           = 0xf120,

    /// Identifier: "dashicons-wordpress-alt"
    IFDashWordpressAlt                        = 0xf324,

    /// Identifier: "dashicons-pressthis"
    IFDashPressthis                           = 0xf157,

    /// Identifier: "dashicons-update"
    IFDashUpdate                              = 0xf463,

    /// Identifier: "dashicons-screenoptions"
    IFDashScreenoptions                       = 0xf180,

    /// Identifier: "dashicons-cart"
    IFDashCart                                = 0xf174,

    /// Identifier: "dashicons-feedback"
    IFDashFeedback                            = 0xf175,

    /// Identifier: "dashicons-cloud"
    IFDashCloud                               = 0xf176,

    /// Identifier: "dashicons-translation"
    IFDashTranslation                         = 0xf326,

    /// Identifier: "dashicons-tag"
    IFDashTag                                 = 0xf323,

    /// Identifier: "dashicons-category"
    IFDashCategory                            = 0xf318,

    /// Identifier: "dashicons-archive"
    IFDashArchive                             = 0xf480,

    /// Identifier: "dashicons-tagcloud"
    IFDashTagcloud                            = 0xf479,

    /// Identifier: "dashicons-text"
    IFDashText                                = 0xf478,

    /// Identifier: "dashicons-media-archive"
    IFDashMediaArchive                        = 0xf501,

    /// Identifier: "dashicons-media-audio"
    IFDashMediaAudio                          = 0xf500,

    /// Identifier: "dashicons-media-code"
    IFDashMediaCode                           = 0xf499,

    /// Identifier: "dashicons-media-default"
    IFDashMediaDefault                        = 0xf498,

    /// Identifier: "dashicons-media-document"
    IFDashMediaDocument                       = 0xf497,

    /// Identifier: "dashicons-media-interactive"
    IFDashMediaInteractive                    = 0xf496,

    /// Identifier: "dashicons-media-spreadsheet"
    IFDashMediaSpreadsheet                    = 0xf495,

    /// Identifier: "dashicons-media-text"
    IFDashMediaText                           = 0xf491,

    /// Identifier: "dashicons-media-video"
    IFDashMediaVideo                          = 0xf490,

    /// Identifier: "dashicons-playlist-audio"
    IFDashPlaylistAudio                       = 0xf492,

    /// Identifier: "dashicons-playlist-video"
    IFDashPlaylistVideo                       = 0xf493,

    /// Identifier: "dashicons-controls-play"
    IFDashControlsPlay                        = 0xf522,

    /// Identifier: "dashicons-controls-pause"
    IFDashControlsPause                       = 0xf523,

    /// Identifier: "dashicons-controls-forward"
    IFDashControlsForward                     = 0xf519,

    /// Identifier: "dashicons-controls-skipforward"
    IFDashControlsSkipforward                 = 0xf517,

    /// Identifier: "dashicons-controls-back"
    IFDashControlsBack                        = 0xf518,

    /// Identifier: "dashicons-controls-skipback"
    IFDashControlsSkipback                    = 0xf516,

    /// Identifier: "dashicons-controls-repeat"
    IFDashControlsRepeat                      = 0xf515,

    /// Identifier: "dashicons-controls-volumeon"
    IFDashControlsVolumeon                    = 0xf521,

    /// Identifier: "dashicons-controls-volumeoff"
    IFDashControlsVolumeoff                   = 0xf520,

    /// Identifier: "dashicons-yes"
    IFDashYes                                 = 0xf147,

    /// Identifier: "dashicons-no"
    IFDashNo                                  = 0xf158,

    /// Identifier: "dashicons-no-alt"
    IFDashNoAlt                               = 0xf335,

    /// Identifier: "dashicons-plus"
    IFDashPlus                                = 0xf132,

    /// Identifier: "dashicons-plus-alt"
    IFDashPlusAlt                             = 0xf502,

    /// Identifier: "dashicons-plus-alt2"
    IFDashPlusAlt2                            = 0xf543,

    /// Identifier: "dashicons-minus"
    IFDashMinus                               = 0xf460,

    /// Identifier: "dashicons-dismiss"
    IFDashDismiss                             = 0xf153,

    /// Identifier: "dashicons-marker"
    IFDashMarker                              = 0xf159,

    /// Identifier: "dashicons-star-filled"
    IFDashStarFilled                          = 0xf155,

    /// Identifier: "dashicons-star-half"
    IFDashStarHalf                            = 0xf459,

    /// Identifier: "dashicons-star-empty"
    IFDashStarEmpty                           = 0xf154,

    /// Identifier: "dashicons-flag"
    IFDashFlag                                = 0xf227,

    /// Identifier: "dashicons-info"
    IFDashInfo                                = 0xf348,

    /// Identifier: "dashicons-warning"
    IFDashWarning                             = 0xf534,

    /// Identifier: "dashicons-share"
    IFDashShare                               = 0xf237,

    /// Identifier: "dashicons-share1"
    IFDashShare1                              = 0xf237,

    /// Identifier: "dashicons-share-alt"
    IFDashShareAlt                            = 0xf240,

    /// Identifier: "dashicons-share-alt2"
    IFDashShareAlt2                           = 0xf242,

    /// Identifier: "dashicons-twitter"
    IFDashTwitter                             = 0xf301,

    /// Identifier: "dashicons-rss"
    IFDashRss                                 = 0xf303,

    /// Identifier: "dashicons-email"
    IFDashEmail                               = 0xf465,

    /// Identifier: "dashicons-email-alt"
    IFDashEmailAlt                            = 0xf466,

    /// Identifier: "dashicons-facebook"
    IFDashFacebook                            = 0xf304,

    /// Identifier: "dashicons-facebook-alt"
    IFDashFacebookAlt                         = 0xf305,

    /// Identifier: "dashicons-networking"
    IFDashNetworking                          = 0xf325,

    /// Identifier: "dashicons-googleplus"
    IFDashGoogleplus                          = 0xf462,

    /// Identifier: "dashicons-location"
    IFDashLocation                            = 0xf230,

    /// Identifier: "dashicons-location-alt"
    IFDashLocationAlt                         = 0xf231,

    /// Identifier: "dashicons-camera"
    IFDashCamera                              = 0xf306,

    /// Identifier: "dashicons-images-alt"
    IFDashImagesAlt                           = 0xf232,

    /// Identifier: "dashicons-images-alt2"
    IFDashImagesAlt2                          = 0xf233,

    /// Identifier: "dashicons-video-alt"
    IFDashVideoAlt                            = 0xf234,

    /// Identifier: "dashicons-video-alt2"
    IFDashVideoAlt2                           = 0xf235,

    /// Identifier: "dashicons-video-alt3"
    IFDashVideoAlt3                           = 0xf236,

    /// Identifier: "dashicons-vault"
    IFDashVault                               = 0xf178,

    /// Identifier: "dashicons-shield"
    IFDashShield                              = 0xf332,

    /// Identifier: "dashicons-shield-alt"
    IFDashShieldAlt                           = 0xf334,

    /// Identifier: "dashicons-sos"
    IFDashSos                                 = 0xf468,

    /// Identifier: "dashicons-search"
    IFDashSearch                              = 0xf179,

    /// Identifier: "dashicons-slides"
    IFDashSlides                              = 0xf181,

    /// Identifier: "dashicons-analytics"
    IFDashAnalytics                           = 0xf183,

    /// Identifier: "dashicons-chart-pie"
    IFDashChartPie                            = 0xf184,

    /// Identifier: "dashicons-chart-bar"
    IFDashChartBar                            = 0xf185,

    /// Identifier: "dashicons-chart-line"
    IFDashChartLine                           = 0xf238,

    /// Identifier: "dashicons-chart-area"
    IFDashChartArea                           = 0xf239,

    /// Identifier: "dashicons-groups"
    IFDashGroups                              = 0xf307,

    /// Identifier: "dashicons-businessman"
    IFDashBusinessman                         = 0xf338,

    /// Identifier: "dashicons-id"
    IFDashId                                  = 0xf336,

    /// Identifier: "dashicons-id-alt"
    IFDashIdAlt                               = 0xf337,

    /// Identifier: "dashicons-products"
    IFDashProducts                            = 0xf312,

    /// Identifier: "dashicons-awards"
    IFDashAwards                              = 0xf313,

    /// Identifier: "dashicons-forms"
    IFDashForms                               = 0xf314,

    /// Identifier: "dashicons-testimonial"
    IFDashTestimonial                         = 0xf473,

    /// Identifier: "dashicons-portfolio"
    IFDashPortfolio                           = 0xf322,

    /// Identifier: "dashicons-book"
    IFDashBook                                = 0xf330,

    /// Identifier: "dashicons-book-alt"
    IFDashBookAlt                             = 0xf331,

    /// Identifier: "dashicons-download"
    IFDashDownload                            = 0xf316,

    /// Identifier: "dashicons-upload"
    IFDashUpload                              = 0xf317,

    /// Identifier: "dashicons-backup"
    IFDashBackup                              = 0xf321,

    /// Identifier: "dashicons-clock"
    IFDashClock                               = 0xf469,

    /// Identifier: "dashicons-lightbulb"
    IFDashLightbulb                           = 0xf339,

    /// Identifier: "dashicons-microphone"
    IFDashMicrophone                          = 0xf482,

    /// Identifier: "dashicons-desktop"
    IFDashDesktop                             = 0xf472,

    /// Identifier: "dashicons-laptop"
    IFDashLaptop                              = 0xf547,

    /// Identifier: "dashicons-tablet"
    IFDashTablet                              = 0xf471,

    /// Identifier: "dashicons-smartphone"
    IFDashSmartphone                          = 0xf470,

    /// Identifier: "dashicons-phone"
    IFDashPhone                               = 0xf525,

    /// Identifier: "dashicons-smiley"
    IFDashSmiley                              = 0xf328,

    /// Identifier: "dashicons-index-card"
    IFDashIndexCard                           = 0xf510,

    /// Identifier: "dashicons-carrot"
    IFDashCarrot                              = 0xf511,

    /// Identifier: "dashicons-building"
    IFDashBuilding                            = 0xf512,

    /// Identifier: "dashicons-store"
    IFDashStore                               = 0xf513,

    /// Identifier: "dashicons-album"
    IFDashAlbum                               = 0xf514,

    /// Identifier: "dashicons-palmtree"
    IFDashPalmtree                            = 0xf527,

    /// Identifier: "dashicons-tickets-alt"
    IFDashTicketsAlt                          = 0xf524,

    /// Identifier: "dashicons-money"
    IFDashMoney                               = 0xf526,

    /// Identifier: "dashicons-thumbs-up"
    IFDashThumbsUp                            = 0xf529,

    /// Identifier: "dashicons-thumbs-down"
    IFDashThumbsDown                          = 0xf542,

    /// Identifier: "dashicons-layout"
    IFDashLayout                              = 0xf538,

    /// Identifier: "dashicons-paperclip"
    IFDashPaperclip                           = 0xf546,

};

/**
 * Dashicons v3.8 https://developer.wordpress.org/resource/dashicons
 */
@interface IFDashicons : IFIcon
@end
