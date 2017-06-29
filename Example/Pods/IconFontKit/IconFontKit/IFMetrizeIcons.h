#import "IFIcon.h"

/**
 * MetrizeIcons icon types.
 */
typedef NS_ENUM(IFIconType, IFMetrizeIconsType) {

    /// Identifier: "icon-yen"
    IFMetrizeYen                                 = 0xe000,

    /// Identifier: "icon-world"
    IFMetrizeWorld                               = 0xe001,

    /// Identifier: "icon-wireframe-globe"
    IFMetrizeWireframeGlobe                      = 0xe002,

    /// Identifier: "icon-wind"
    IFMetrizeWind                                = 0xe003,

    /// Identifier: "icon-wifi"
    IFMetrizeWifi                                = 0xe004,

    /// Identifier: "icon-waves"
    IFMetrizeWaves                               = 0xe005,

    /// Identifier: "icon-viewport"
    IFMetrizeViewport                            = 0xe006,

    /// Identifier: "icon-viewport-video"
    IFMetrizeViewportVideo                       = 0xe007,

    /// Identifier: "icon-user"
    IFMetrizeUser                                = 0xe008,

    /// Identifier: "icon-user-remove"
    IFMetrizeUserRemove                          = 0xe009,

    /// Identifier: "icon-user-ban"
    IFMetrizeUserBan                             = 0xe00a,

    /// Identifier: "icon-user-add"
    IFMetrizeUserAdd                             = 0xe00b,

    /// Identifier: "icon-upload"
    IFMetrizeUpload                              = 0xe00c,

    /// Identifier: "icon-upload-selection"
    IFMetrizeUploadSelection                     = 0xe00d,

    /// Identifier: "icon-upload-selection-circle"
    IFMetrizeUploadSelectionCircle               = 0xe00e,

    /// Identifier: "icon-underline"
    IFMetrizeUnderline                           = 0xe00f,

    /// Identifier: "icon-triple-points"
    IFMetrizeTriplePoints                        = 0xe010,

    /// Identifier: "icon-top-bottom"
    IFMetrizeTopBottom                           = 0xe011,

    /// Identifier: "icon-three-points"
    IFMetrizeThreePoints                         = 0xe012,

    /// Identifier: "icon-three-points-top"
    IFMetrizeThreePointsTop                      = 0xe013,

    /// Identifier: "icon-three-points-bottom"
    IFMetrizeThreePointsBottom                   = 0xe014,

    /// Identifier: "icon-text-width"
    IFMetrizeTextWidth                           = 0xe015,

    /// Identifier: "icon-text-size-upper"
    IFMetrizeTextSizeUpper                       = 0xe016,

    /// Identifier: "icon-text-size-reduce"
    IFMetrizeTextSizeReduce                      = 0xe017,

    /// Identifier: "icon-text-paragraph"
    IFMetrizeTextParagraph                       = 0xe018,

    /// Identifier: "icon-text-normal"
    IFMetrizeTextNormal                          = 0xe019,

    /// Identifier: "icon-text-justify-right"
    IFMetrizeTextJustifyRight                    = 0xe01a,

    /// Identifier: "icon-text-justify-left"
    IFMetrizeTextJustifyLeft                     = 0xe01b,

    /// Identifier: "icon-text-justify-center"
    IFMetrizeTextJustifyCenter                   = 0xe01c,

    /// Identifier: "icon-text-height"
    IFMetrizeTextHeight                          = 0xe01d,

    /// Identifier: "icon-text-center"
    IFMetrizeTextCenter                          = 0xe01e,

    /// Identifier: "icon-text-bold"
    IFMetrizeTextBold                            = 0xe01f,

    /// Identifier: "icon-text-align-right"
    IFMetrizeTextAlignRight                      = 0xe020,

    /// Identifier: "icon-text-align-left"
    IFMetrizeTextAlignLeft                       = 0xe021,

    /// Identifier: "icon-telephone"
    IFMetrizeTelephone                           = 0xe022,

    /// Identifier: "icon-sunshine"
    IFMetrizeSunshine                            = 0xe023,

    /// Identifier: "icon-sun"
    IFMetrizeSun                                 = 0xe024,

    /// Identifier: "icon-stop"
    IFMetrizeStop                                = 0xe025,

    /// Identifier: "icon-star"
    IFMetrizeStar                                = 0xe026,

    /// Identifier: "icon-speed"
    IFMetrizeSpeed                               = 0xe027,

    /// Identifier: "icon-sound-on"
    IFMetrizeSoundOn                             = 0xe028,

    /// Identifier: "icon-sound-off"
    IFMetrizeSoundOff                            = 0xe029,

    /// Identifier: "icon-sos"
    IFMetrizeSos                                 = 0xe02a,

    /// Identifier: "icon-social-zerply"
    IFMetrizeSocialZerply                        = 0xe02b,

    /// Identifier: "icon-social-youtube"
    IFMetrizeSocialYoutube                       = 0xe02c,

    /// Identifier: "icon-social-yelp"
    IFMetrizeSocialYelp                          = 0xe02d,

    /// Identifier: "icon-social-yahoo"
    IFMetrizeSocialYahoo                         = 0xe02e,

    /// Identifier: "icon-social-wordpress"
    IFMetrizeSocialWordpress                     = 0xe02f,

    /// Identifier: "icon-social-virb"
    IFMetrizeSocialVirb                          = 0xe030,

    /// Identifier: "icon-social-vimeo"
    IFMetrizeSocialVimeo                         = 0xe031,

    /// Identifier: "icon-social-viddler"
    IFMetrizeSocialViddler                       = 0xe032,

    /// Identifier: "icon-social-twitter"
    IFMetrizeSocialTwitter                       = 0xe033,

    /// Identifier: "icon-social-tumblr"
    IFMetrizeSocialTumblr                        = 0xe034,

    /// Identifier: "icon-social-stumbleupon"
    IFMetrizeSocialStumbleupon                   = 0xe035,

    /// Identifier: "icon-social-soundcloud"
    IFMetrizeSocialSoundcloud                    = 0xe036,

    /// Identifier: "icon-social-skype"
    IFMetrizeSocialSkype                         = 0xe037,

    /// Identifier: "icon-social-sharethis"
    IFMetrizeSocialSharethis                     = 0xe038,

    /// Identifier: "icon-social-quora"
    IFMetrizeSocialQuora                         = 0xe039,

    /// Identifier: "icon-social-pinterest"
    IFMetrizeSocialPinterest                     = 0xe03a,

    /// Identifier: "icon-social-photobucket"
    IFMetrizeSocialPhotobucket                   = 0xe03b,

    /// Identifier: "icon-social-paypal"
    IFMetrizeSocialPaypal                        = 0xe03c,

    /// Identifier: "icon-social-myspace"
    IFMetrizeSocialMyspace                       = 0xe03d,

    /// Identifier: "icon-social-linkedin"
    IFMetrizeSocialLinkedin                      = 0xe03e,

    /// Identifier: "icon-social-last-fm"
    IFMetrizeSocialLastFm                        = 0xe03f,

    /// Identifier: "icon-social-grooveshark"
    IFMetrizeSocialGrooveshark                   = 0xe040,

    /// Identifier: "icon-social-google-plus"
    IFMetrizeSocialGooglePlus                    = 0xe041,

    /// Identifier: "icon-social-github"
    IFMetrizeSocialGithub                        = 0xe042,

    /// Identifier: "icon-social-forrst"
    IFMetrizeSocialForrst                        = 0xe043,

    /// Identifier: "icon-social-flickr"
    IFMetrizeSocialFlickr                        = 0xe044,

    /// Identifier: "icon-social-facebook"
    IFMetrizeSocialFacebook                      = 0xe045,

    /// Identifier: "icon-social-evernote"
    IFMetrizeSocialEvernote                      = 0xe046,

    /// Identifier: "icon-social-envato"
    IFMetrizeSocialEnvato                        = 0xe047,

    /// Identifier: "icon-social-email"
    IFMetrizeSocialEmail                         = 0xe048,

    /// Identifier: "icon-social-dribbble"
    IFMetrizeSocialDribbble                      = 0xe049,

    /// Identifier: "icon-social-digg"
    IFMetrizeSocialDigg                          = 0xe04a,

    /// Identifier: "icon-social-deviantart"
    IFMetrizeSocialDeviantart                    = 0xe04b,

    /// Identifier: "icon-social-blogger"
    IFMetrizeSocialBlogger                       = 0xe04c,

    /// Identifier: "icon-social-behance"
    IFMetrizeSocialBehance                       = 0xe04d,

    /// Identifier: "icon-social-bebo"
    IFMetrizeSocialBebo                          = 0xe04e,

    /// Identifier: "icon-social-addthis"
    IFMetrizeSocialAddthis                       = 0xe04f,

    /// Identifier: "icon-social-500px"
    IFMetrizeSocial500px                         = 0xe050,

    /// Identifier: "icon-snow"
    IFMetrizeSnow                                = 0xe051,

    /// Identifier: "icon-sliders"
    IFMetrizeSliders                             = 0xe052,

    /// Identifier: "icon-sliders-vertical"
    IFMetrizeSlidersVertical                     = 0xe053,

    /// Identifier: "icon-sign-male"
    IFMetrizeSignMale                            = 0xe054,

    /// Identifier: "icon-sign-female"
    IFMetrizeSignFemale                          = 0xe055,

    /// Identifier: "icon-shield"
    IFMetrizeShield                              = 0xe056,

    /// Identifier: "icon-settings"
    IFMetrizeSettings                            = 0xe057,

    /// Identifier: "icon-setting"
    IFMetrizeSetting                             = 0xe058,

    /// Identifier: "icon-select-square"
    IFMetrizeSelectSquare                        = 0xe059,

    /// Identifier: "icon-select-circle"
    IFMetrizeSelectCircle                        = 0xe05a,

    /// Identifier: "icon-search"
    IFMetrizeSearch                              = 0xe05b,

    /// Identifier: "icon-scale"
    IFMetrizeScale                               = 0xe05c,

    /// Identifier: "icon-rules"
    IFMetrizeRules                               = 0xe05d,

    /// Identifier: "icon-rss"
    IFMetrizeRss                                 = 0xe05e,

    /// Identifier: "icon-retweet"
    IFMetrizeRetweet                             = 0xe05f,

    /// Identifier: "icon-report-comment"
    IFMetrizeReportComment                       = 0xe060,

    /// Identifier: "icon-refresh"
    IFMetrizeRefresh                             = 0xe061,

    /// Identifier: "icon-rec"
    IFMetrizeRec                                 = 0xe062,

    /// Identifier: "icon-random"
    IFMetrizeRandom                              = 0xe063,

    /// Identifier: "icon-quote"
    IFMetrizeQuote                               = 0xe064,

    /// Identifier: "icon-question"
    IFMetrizeQuestion                            = 0xe065,

    /// Identifier: "icon-previous-fast-step"
    IFMetrizePreviousFastStep                    = 0xe066,

    /// Identifier: "icon-prev-step"
    IFMetrizePrevStep                            = 0xe067,

    /// Identifier: "icon-pounds"
    IFMetrizePounds                              = 0xe068,

    /// Identifier: "icon-podcast"
    IFMetrizePodcast                             = 0xe069,

    /// Identifier: "icon-plus"
    IFMetrizePlus                                = 0xe06a,

    /// Identifier: "icon-play"
    IFMetrizePlay                                = 0xe06b,

    /// Identifier: "icon-pin"
    IFMetrizePin                                 = 0xe06c,

    /// Identifier: "icon-pin-map"
    IFMetrizePinMap                              = 0xe06d,

    /// Identifier: "icon-pig-money"
    IFMetrizePigMoney                            = 0xe06e,

    /// Identifier: "icon-pause"
    IFMetrizePause                               = 0xe06f,

    /// Identifier: "icon-paperclip"
    IFMetrizePaperclip                           = 0xe070,

    /// Identifier: "icon-paperclip-oblique"
    IFMetrizePaperclipOblique                    = 0xe071,

    /// Identifier: "icon-options-settings"
    IFMetrizeOptionsSettings                     = 0xe072,

    /// Identifier: "icon-officine"
    IFMetrizeOfficine                            = 0xe073,

    /// Identifier: "icon-officine-2"
    IFMetrizeOfficine2                           = 0xe074,

    /// Identifier: "icon-off"
    IFMetrizeOff                                 = 0xe075,

    /// Identifier: "icon-number-zero"
    IFMetrizeNumberZero                          = 0xe076,

    /// Identifier: "icon-number-two"
    IFMetrizeNumberTwo                           = 0xe077,

    /// Identifier: "icon-number-three"
    IFMetrizeNumberThree                         = 0xe078,

    /// Identifier: "icon-number-six"
    IFMetrizeNumberSix                           = 0xe079,

    /// Identifier: "icon-number-seven"
    IFMetrizeNumberSeven                         = 0xe07a,

    /// Identifier: "icon-number-one"
    IFMetrizeNumberOne                           = 0xe07b,

    /// Identifier: "icon-number-nine"
    IFMetrizeNumberNine                          = 0xe07c,

    /// Identifier: "icon-number-four"
    IFMetrizeNumberFour                          = 0xe07d,

    /// Identifier: "icon-number-five"
    IFMetrizeNumberFive                          = 0xe07e,

    /// Identifier: "icon-number-eight"
    IFMetrizeNumberEight                         = 0xe07f,

    /// Identifier: "icon-next-step"
    IFMetrizeNextStep                            = 0xe080,

    /// Identifier: "icon-next-fast-step"
    IFMetrizeNextFastStep                        = 0xe081,

    /// Identifier: "icon-music"
    IFMetrizeMusic                               = 0xe082,

    /// Identifier: "icon-multi-borders"
    IFMetrizeMultiBorders                        = 0xe083,

    /// Identifier: "icon-minus"
    IFMetrizeMinus                               = 0xe084,

    /// Identifier: "icon-marker"
    IFMetrizeMarker                              = 0xe085,

    /// Identifier: "icon-marker-points"
    IFMetrizeMarkerPoints                        = 0xe086,

    /// Identifier: "icon-marker-minus"
    IFMetrizeMarkerMinus                         = 0xe087,

    /// Identifier: "icon-marker-add"
    IFMetrizeMarkerAdd                           = 0xe088,

    /// Identifier: "icon-map"
    IFMetrizeMap                                 = 0xe089,

    /// Identifier: "icon-male-symbol"
    IFMetrizeMaleSymbol                          = 0xe08a,

    /// Identifier: "icon-mailbox"
    IFMetrizeMailbox                             = 0xe08b,

    /// Identifier: "icon-mail"
    IFMetrizeMail                                = 0xe08c,

    /// Identifier: "icon-magnet"
    IFMetrizeMagnet                              = 0xe08d,

    /// Identifier: "icon-magic-wand"
    IFMetrizeMagicWand                           = 0xe08e,

    /// Identifier: "icon-login-lock-refresh"
    IFMetrizeLoginLockRefresh                    = 0xe08f,

    /// Identifier: "icon-locked"
    IFMetrizeLocked                              = 0xe090,

    /// Identifier: "icon-location"
    IFMetrizeLocation                            = 0xe091,

    /// Identifier: "icon-location-maps"
    IFMetrizeLocationMaps                        = 0xe092,

    /// Identifier: "icon-list-square"
    IFMetrizeListSquare                          = 0xe093,

    /// Identifier: "icon-list-circle"
    IFMetrizeListCircle                          = 0xe094,

    /// Identifier: "icon-link-url"
    IFMetrizeLinkUrl                             = 0xe095,

    /// Identifier: "icon-line-through"
    IFMetrizeLineThrough                         = 0xe096,

    /// Identifier: "icon-limit-directions"
    IFMetrizeLimitDirections                     = 0xe097,

    /// Identifier: "icon-like-upload"
    IFMetrizeLikeUpload                          = 0xe098,

    /// Identifier: "icon-like-remove"
    IFMetrizeLikeRemove                          = 0xe099,

    /// Identifier: "icon-like-download"
    IFMetrizeLikeDownload                        = 0xe09a,

    /// Identifier: "icon-like-close"
    IFMetrizeLikeClose                           = 0xe09b,

    /// Identifier: "icon-like-ban"
    IFMetrizeLikeBan                             = 0xe09c,

    /// Identifier: "icon-like-add"
    IFMetrizeLikeAdd                             = 0xe09d,

    /// Identifier: "icon-left-right"
    IFMetrizeLeftRight                           = 0xe09e,

    /// Identifier: "icon-leaf"
    IFMetrizeLeaf                                = 0xe09f,

    /// Identifier: "icon-layers"
    IFMetrizeLayers                              = 0xe0a0,

    /// Identifier: "icon-landscape"
    IFMetrizeLandscape                           = 0xe0a1,

    /// Identifier: "icon-key"
    IFMetrizeKey                                 = 0xe0a2,

    /// Identifier: "icon-italic"
    IFMetrizeItalic                              = 0xe0a3,

    /// Identifier: "icon-info"
    IFMetrizeInfo                                = 0xe0a4,

    /// Identifier: "icon-idea"
    IFMetrizeIdea                                = 0xe0a5,

    /// Identifier: "icon-home-wifi"
    IFMetrizeHomeWifi                            = 0xe0a6,

    /// Identifier: "icon-heart"
    IFMetrizeHeart                               = 0xe0a7,

    /// Identifier: "icon-hdd"
    IFMetrizeHdd                                 = 0xe0a8,

    /// Identifier: "icon-hdd-raid"
    IFMetrizeHddRaid                             = 0xe0a9,

    /// Identifier: "icon-hdd-net"
    IFMetrizeHddNet                              = 0xe0aa,

    /// Identifier: "icon-grids"
    IFMetrizeGrids                               = 0xe0ab,

    /// Identifier: "icon-grid-big"
    IFMetrizeGridBig                             = 0xe0ac,

    /// Identifier: "icon-graphs"
    IFMetrizeGraphs                              = 0xe0ad,

    /// Identifier: "icon-forward"
    IFMetrizeForward                             = 0xe0ae,

    /// Identifier: "icon-fire"
    IFMetrizeFire                                = 0xe0af,

    /// Identifier: "icon-female-symbol"
    IFMetrizeFemaleSymbol                        = 0xe0b0,

    /// Identifier: "icon-eye"
    IFMetrizeEye                                 = 0xe0b1,

    /// Identifier: "icon-eye-disabled"
    IFMetrizeEyeDisabled                         = 0xe0b2,

    /// Identifier: "icon-expand"
    IFMetrizeExpand                              = 0xe0b3,

    /// Identifier: "icon-expand-vertical"
    IFMetrizeExpandVertical                      = 0xe0b4,

    /// Identifier: "icon-expand-horizontal"
    IFMetrizeExpandHorizontal                    = 0xe0b5,

    /// Identifier: "icon-expand-directions"
    IFMetrizeExpandDirections                    = 0xe0b6,

    /// Identifier: "icon-exclamation"
    IFMetrizeExclamation                         = 0xe0b7,

    /// Identifier: "icon-euro"
    IFMetrizeEuro                                = 0xe0b8,

    /// Identifier: "icon-email-upload"
    IFMetrizeEmailUpload                         = 0xe0b9,

    /// Identifier: "icon-email-spam"
    IFMetrizeEmailSpam                           = 0xe0ba,

    /// Identifier: "icon-email-remove"
    IFMetrizeEmailRemove                         = 0xe0bb,

    /// Identifier: "icon-email-luminosity"
    IFMetrizeEmailLuminosity                     = 0xe0bc,

    /// Identifier: "icon-email-download"
    IFMetrizeEmailDownload                       = 0xe0bd,

    /// Identifier: "icon-email-close"
    IFMetrizeEmailClose                          = 0xe0be,

    /// Identifier: "icon-email-add"
    IFMetrizeEmailAdd                            = 0xe0bf,

    /// Identifier: "icon-eject"
    IFMetrizeEject                               = 0xe0c0,

    /// Identifier: "icon-drops"
    IFMetrizeDrops                               = 0xe0c1,

    /// Identifier: "icon-drop"
    IFMetrizeDrop                                = 0xe0c2,

    /// Identifier: "icon-download"
    IFMetrizeDownload                            = 0xe0c3,

    /// Identifier: "icon-download-selection"
    IFMetrizeDownloadSelection                   = 0xe0c4,

    /// Identifier: "icon-download-selection-circle"
    IFMetrizeDownloadSelectionCircle             = 0xe0c5,

    /// Identifier: "icon-double-diamonds"
    IFMetrizeDoubleDiamonds                      = 0xe0c6,

    /// Identifier: "icon-dot-square"
    IFMetrizeDotSquare                           = 0xe0c7,

    /// Identifier: "icon-dot-line"
    IFMetrizeDotLine                             = 0xe0c8,

    /// Identifier: "icon-dot-circle"
    IFMetrizeDotCircle                           = 0xe0c9,

    /// Identifier: "icon-dollar"
    IFMetrizeDollar                              = 0xe0ca,

    /// Identifier: "icon-documents"
    IFMetrizeDocuments                           = 0xe0cb,

    /// Identifier: "icon-document"
    IFMetrizeDocument                            = 0xe0cc,

    /// Identifier: "icon-document-fill"
    IFMetrizeDocumentFill                        = 0xe0cd,

    /// Identifier: "icon-directions"
    IFMetrizeDirections                          = 0xe0ce,

    /// Identifier: "icon-cross"
    IFMetrizeCross                               = 0xe0cf,

    /// Identifier: "icon-credit-card"
    IFMetrizeCreditCard                          = 0xe0d0,

    /// Identifier: "icon-copy-paste-document"
    IFMetrizeCopyPasteDocument                   = 0xe0d1,

    /// Identifier: "icon-copy-document"
    IFMetrizeCopyDocument                        = 0xe0d2,

    /// Identifier: "icon-contract-vertical"
    IFMetrizeContractVertical                    = 0xe0d3,

    /// Identifier: "icon-contract-horizontal"
    IFMetrizeContractHorizontal                  = 0xe0d4,

    /// Identifier: "icon-contract-directions"
    IFMetrizeContractDirections                  = 0xe0d5,

    /// Identifier: "icon-compass"
    IFMetrizeCompass                             = 0xe0d6,

    /// Identifier: "icon-compass-2"
    IFMetrizeCompass2                            = 0xe0d7,

    /// Identifier: "icon-comments"
    IFMetrizeComments                            = 0xe0d8,

    /// Identifier: "icon-comment"
    IFMetrizeComment                             = 0xe0d9,

    /// Identifier: "icon-coins"
    IFMetrizeCoins                               = 0xe0da,

    /// Identifier: "icon-cloud"
    IFMetrizeCloud                               = 0xe0db,

    /// Identifier: "icon-cloud-upload"
    IFMetrizeCloudUpload                         = 0xe0dc,

    /// Identifier: "icon-cloud-remove"
    IFMetrizeCloudRemove                         = 0xe0dd,

    /// Identifier: "icon-cloud-download"
    IFMetrizeCloudDownload                       = 0xe0de,

    /// Identifier: "icon-cloud-add"
    IFMetrizeCloudAdd                            = 0xe0df,

    /// Identifier: "icon-clock"
    IFMetrizeClock                               = 0xe0e0,

    /// Identifier: "icon-circles"
    IFMetrizeCircles                             = 0xe0e1,

    /// Identifier: "icon-check"
    IFMetrizeCheck                               = 0xe0e2,

    /// Identifier: "icon-chat"
    IFMetrizeChat                                = 0xe0e3,

    /// Identifier: "icon-chart-down"
    IFMetrizeChartDown                           = 0xe0e4,

    /// Identifier: "icon-cd-dvd-rom"
    IFMetrizeCdDvdRom                            = 0xe0e5,

    /// Identifier: "icon-camera"
    IFMetrizeCamera                              = 0xe0e6,

    /// Identifier: "icon-button-question"
    IFMetrizeButtonQuestion                      = 0xe0e7,

    /// Identifier: "icon-button-minus"
    IFMetrizeButtonMinus                         = 0xe0e8,

    /// Identifier: "icon-button-exclamation"
    IFMetrizeButtonExclamation                   = 0xe0e9,

    /// Identifier: "icon-button-email"
    IFMetrizeButtonEmail                         = 0xe0ea,

    /// Identifier: "icon-button-close"
    IFMetrizeButtonClose                         = 0xe0eb,

    /// Identifier: "icon-button-check"
    IFMetrizeButtonCheck                         = 0xe0ec,

    /// Identifier: "icon-button-add"
    IFMetrizeButtonAdd                           = 0xe0ed,

    /// Identifier: "icon-brush"
    IFMetrizeBrush                               = 0xe0ee,

    /// Identifier: "icon-browser-sizes"
    IFMetrizeBrowserSizes                        = 0xe0ef,

    /// Identifier: "icon-box-remove"
    IFMetrizeBoxRemove                           = 0xe0f0,

    /// Identifier: "icon-box-close"
    IFMetrizeBoxClose                            = 0xe0f1,

    /// Identifier: "icon-box-blank"
    IFMetrizeBoxBlank                            = 0xe0f2,

    /// Identifier: "icon-box-add"
    IFMetrizeBoxAdd                              = 0xe0f3,

    /// Identifier: "icon-bolt"
    IFMetrizeBolt                                = 0xe0f4,

    /// Identifier: "icon-block-menu"
    IFMetrizeBlockMenu                           = 0xe0f5,

    /// Identifier: "icon-blank"
    IFMetrizeBlank                               = 0xe0f6,

    /// Identifier: "icon-bezier"
    IFMetrizeBezier                              = 0xe0f7,

    /// Identifier: "icon-bars"
    IFMetrizeBars                                = 0xe0f8,

    /// Identifier: "icon-ban-circle"
    IFMetrizeBanCircle                           = 0xe0f9,

    /// Identifier: "icon-bag"
    IFMetrizeBag                                 = 0xe0fa,

    /// Identifier: "icon-backward"
    IFMetrizeBackward                            = 0xe0fb,

    /// Identifier: "icon-axis-rules"
    IFMetrizeAxisRules                           = 0xe0fc,

    /// Identifier: "icon-atom"
    IFMetrizeAtom                                = 0xe0fd,

    /// Identifier: "icon-arrow-up"
    IFMetrizeArrowUp                             = 0xe0fe,

    /// Identifier: "icon-arrow-up-thin"
    IFMetrizeArrowUpThin                         = 0xe0ff,

    /// Identifier: "icon-arrow-up-light"
    IFMetrizeArrowUpLight                        = 0xe100,

    /// Identifier: "icon-arrow-up-bold"
    IFMetrizeArrowUpBold                         = 0xe101,

    /// Identifier: "icon-arrow-up-bold-round"
    IFMetrizeArrowUpBoldRound                    = 0xe102,

    /// Identifier: "icon-arrow-up-big"
    IFMetrizeArrowUpBig                          = 0xe103,

    /// Identifier: "icon-arrow-right"
    IFMetrizeArrowRight                          = 0xe104,

    /// Identifier: "icon-arrow-right-thin"
    IFMetrizeArrowRightThin                      = 0xe105,

    /// Identifier: "icon-arrow-right-light"
    IFMetrizeArrowRightLight                     = 0xe106,

    /// Identifier: "icon-arrow-right-bold"
    IFMetrizeArrowRightBold                      = 0xe107,

    /// Identifier: "icon-arrow-right-bold-round"
    IFMetrizeArrowRightBoldRound                 = 0xe108,

    /// Identifier: "icon-arrow-right-big"
    IFMetrizeArrowRightBig                       = 0xe109,

    /// Identifier: "icon-arrow-oblique-expand"
    IFMetrizeArrowObliqueExpand                  = 0xe10a,

    /// Identifier: "icon-arrow-oblique-expand-directions"
    IFMetrizeArrowObliqueExpandDirections        = 0xe10b,

    /// Identifier: "icon-arrow-oblique-contract"
    IFMetrizeArrowObliqueContract                = 0xe10c,

    /// Identifier: "icon-arrow-oblique-contract-directions"
    IFMetrizeArrowObliqueContractDirections      = 0xe10d,

    /// Identifier: "icon-arrow-multi-line-up"
    IFMetrizeArrowMultiLineUp                    = 0xe10e,

    /// Identifier: "icon-arrow-multi-line-right"
    IFMetrizeArrowMultiLineRight                 = 0xe10f,

    /// Identifier: "icon-arrow-multi-line-left"
    IFMetrizeArrowMultiLineLeft                  = 0xe110,

    /// Identifier: "icon-arrow-multi-line-down"
    IFMetrizeArrowMultiLineDown                  = 0xe111,

    /// Identifier: "icon-arrow-left"
    IFMetrizeArrowLeft                           = 0xe112,

    /// Identifier: "icon-arrow-left-thin"
    IFMetrizeArrowLeftThin                       = 0xe113,

    /// Identifier: "icon-arrow-left-light"
    IFMetrizeArrowLeftLight                      = 0xe114,

    /// Identifier: "icon-arrow-left-bold"
    IFMetrizeArrowLeftBold                       = 0xe115,

    /// Identifier: "icon-arrow-left-bold-round"
    IFMetrizeArrowLeftBoldRound                  = 0xe116,

    /// Identifier: "icon-arrow-left-big"
    IFMetrizeArrowLeftBig                        = 0xe117,

    /// Identifier: "icon-arrow-fill-up"
    IFMetrizeArrowFillUp                         = 0xe118,

    /// Identifier: "icon-arrow-fill-right"
    IFMetrizeArrowFillRight                      = 0xe119,

    /// Identifier: "icon-arrow-fill-left"
    IFMetrizeArrowFillLeft                       = 0xe11a,

    /// Identifier: "icon-arrow-fill-down"
    IFMetrizeArrowFillDown                       = 0xe11b,

    /// Identifier: "icon-arrow-down"
    IFMetrizeArrowDown                           = 0xe11c,

    /// Identifier: "icon-arrow-down-thin"
    IFMetrizeArrowDownThin                       = 0xe11d,

    /// Identifier: "icon-arrow-down-light"
    IFMetrizeArrowDownLight                      = 0xe11e,

    /// Identifier: "icon-arrow-down-bold"
    IFMetrizeArrowDownBold                       = 0xe11f,

    /// Identifier: "icon-arrow-down-bold-round"
    IFMetrizeArrowDownBoldRound                  = 0xe120,

    /// Identifier: "icon-arrow-down-big"
    IFMetrizeArrowDownBig                        = 0xe121,

    /// Identifier: "icon-arrow-cycling"
    IFMetrizeArrowCycling                        = 0xe122,

    /// Identifier: "icon-arrow-cycle"
    IFMetrizeArrowCycle                          = 0xe123,

    /// Identifier: "icon-arrow-curve-right"
    IFMetrizeArrowCurveRight                     = 0xe124,

    /// Identifier: "icon-arrow-curve-recycle"
    IFMetrizeArrowCurveRecycle                   = 0xe125,

    /// Identifier: "icon-arrow-curve-left"
    IFMetrizeArrowCurveLeft                      = 0xe126,

    /// Identifier: "icon-animal-footprint"
    IFMetrizeAnimalFootprint                     = 0xe127,

    /// Identifier: "icon-alarm-clock"
    IFMetrizeAlarmClock                          = 0xe128,

    /// Identifier: "icon-air-plane"
    IFMetrizeAirPlane                            = 0xe129,

    /// Identifier: "icon-adjust"
    IFMetrizeAdjust                              = 0xe12a,

    /// Identifier: "icon-cube"
    IFMetrizeCube                                = 0xe12b,

};

/**
 * Metrize Icons v1.0 http://www.alessioatzeni.com/metrize-icons
 */
@interface IFMetrizeIcons : IFIcon
@end
