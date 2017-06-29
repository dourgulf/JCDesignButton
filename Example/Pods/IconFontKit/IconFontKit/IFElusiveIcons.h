#import "IFIcon.h"

/**
 * ElusiveIcons icon types.
 */
typedef NS_ENUM(IFIconType, IFElusiveIconsType) {

    /// Identifier: "el-address-book-alt"
    IFELAddressBookAlt                      = 0xf101,

    /// Identifier: "el-address-book"
    IFELAddressBook                         = 0xf102,

    /// Identifier: "el-adjust-alt"
    IFELAdjustAlt                           = 0xf103,

    /// Identifier: "el-adjust"
    IFELAdjust                              = 0xf104,

    /// Identifier: "el-adult"
    IFELAdult                               = 0xf105,

    /// Identifier: "el-align-center"
    IFELAlignCenter                         = 0xf106,

    /// Identifier: "el-align-justify"
    IFELAlignJustify                        = 0xf107,

    /// Identifier: "el-align-left"
    IFELAlignLeft                           = 0xf108,

    /// Identifier: "el-align-right"
    IFELAlignRight                          = 0xf109,

    /// Identifier: "el-arrow-down"
    IFELArrowDown                           = 0xf10a,

    /// Identifier: "el-arrow-left"
    IFELArrowLeft                           = 0xf10b,

    /// Identifier: "el-arrow-right"
    IFELArrowRight                          = 0xf10c,

    /// Identifier: "el-arrow-up"
    IFELArrowUp                             = 0xf10d,

    /// Identifier: "el-asl"
    IFELAsl                                 = 0xf10e,

    /// Identifier: "el-asterisk"
    IFELAsterisk                            = 0xf10f,

    /// Identifier: "el-backward"
    IFELBackward                            = 0xf110,

    /// Identifier: "el-ban-circle"
    IFELBanCircle                           = 0xf111,

    /// Identifier: "el-barcode"
    IFELBarcode                             = 0xf112,

    /// Identifier: "el-behance"
    IFELBehance                             = 0xf113,

    /// Identifier: "el-bell"
    IFELBell                                = 0xf114,

    /// Identifier: "el-blind"
    IFELBlind                               = 0xf115,

    /// Identifier: "el-blogger"
    IFELBlogger                             = 0xf116,

    /// Identifier: "el-bold"
    IFELBold                                = 0xf117,

    /// Identifier: "el-book"
    IFELBook                                = 0xf118,

    /// Identifier: "el-bookmark-empty"
    IFELBookmarkEmpty                       = 0xf119,

    /// Identifier: "el-bookmark"
    IFELBookmark                            = 0xf11a,

    /// Identifier: "el-braille"
    IFELBraille                             = 0xf11b,

    /// Identifier: "el-briefcase"
    IFELBriefcase                           = 0xf11c,

    /// Identifier: "el-broom"
    IFELBroom                               = 0xf11d,

    /// Identifier: "el-brush"
    IFELBrush                               = 0xf11e,

    /// Identifier: "el-bulb"
    IFELBulb                                = 0xf11f,

    /// Identifier: "el-bullhorn"
    IFELBullhorn                            = 0xf120,

    /// Identifier: "el-calendar-sign"
    IFELCalendarSign                        = 0xf121,

    /// Identifier: "el-calendar"
    IFELCalendar                            = 0xf122,

    /// Identifier: "el-camera"
    IFELCamera                              = 0xf123,

    /// Identifier: "el-car"
    IFELCar                                 = 0xf124,

    /// Identifier: "el-caret-down"
    IFELCaretDown                           = 0xf125,

    /// Identifier: "el-caret-left"
    IFELCaretLeft                           = 0xf126,

    /// Identifier: "el-caret-right"
    IFELCaretRight                          = 0xf127,

    /// Identifier: "el-caret-up"
    IFELCaretUp                             = 0xf128,

    /// Identifier: "el-cc"
    IFELCc                                  = 0xf129,

    /// Identifier: "el-certificate"
    IFELCertificate                         = 0xf12a,

    /// Identifier: "el-check-empty"
    IFELCheckEmpty                          = 0xf12b,

    /// Identifier: "el-check"
    IFELCheck                               = 0xf12c,

    /// Identifier: "el-chevron-down"
    IFELChevronDown                         = 0xf12d,

    /// Identifier: "el-chevron-left"
    IFELChevronLeft                         = 0xf12e,

    /// Identifier: "el-chevron-right"
    IFELChevronRight                        = 0xf12f,

    /// Identifier: "el-chevron-up"
    IFELChevronUp                           = 0xf130,

    /// Identifier: "el-child"
    IFELChild                               = 0xf131,

    /// Identifier: "el-circle-arrow-down"
    IFELCircleArrowDown                     = 0xf132,

    /// Identifier: "el-circle-arrow-left"
    IFELCircleArrowLeft                     = 0xf133,

    /// Identifier: "el-circle-arrow-right"
    IFELCircleArrowRight                    = 0xf134,

    /// Identifier: "el-circle-arrow-up"
    IFELCircleArrowUp                       = 0xf135,

    /// Identifier: "el-cloud-alt"
    IFELCloudAlt                            = 0xf136,

    /// Identifier: "el-cloud"
    IFELCloud                               = 0xf137,

    /// Identifier: "el-cog-alt"
    IFELCogAlt                              = 0xf138,

    /// Identifier: "el-cog"
    IFELCog                                 = 0xf139,

    /// Identifier: "el-cogs"
    IFELCogs                                = 0xf13a,

    /// Identifier: "el-comment-alt"
    IFELCommentAlt                          = 0xf13b,

    /// Identifier: "el-comment"
    IFELComment                             = 0xf13c,

    /// Identifier: "el-compass-alt"
    IFELCompassAlt                          = 0xf13d,

    /// Identifier: "el-compass"
    IFELCompass                             = 0xf13e,

    /// Identifier: "el-credit-card"
    IFELCreditCard                          = 0xf13f,

    /// Identifier: "el-css"
    IFELCss                                 = 0xf140,

    /// Identifier: "el-dashboard"
    IFELDashboard                           = 0xf141,

    /// Identifier: "el-delicious"
    IFELDelicious                           = 0xf142,

    /// Identifier: "el-deviantart"
    IFELDeviantart                          = 0xf143,

    /// Identifier: "el-digg"
    IFELDigg                                = 0xf144,

    /// Identifier: "el-download-alt"
    IFELDownloadAlt                         = 0xf145,

    /// Identifier: "el-download"
    IFELDownload                            = 0xf146,

    /// Identifier: "el-dribbble"
    IFELDribbble                            = 0xf147,

    /// Identifier: "el-edit"
    IFELEdit                                = 0xf148,

    /// Identifier: "el-eject"
    IFELEject                               = 0xf149,

    /// Identifier: "el-envelope-alt"
    IFELEnvelopeAlt                         = 0xf14a,

    /// Identifier: "el-envelope"
    IFELEnvelope                            = 0xf14b,

    /// Identifier: "el-error-alt"
    IFELErrorAlt                            = 0xf14c,

    /// Identifier: "el-error"
    IFELError                               = 0xf14d,

    /// Identifier: "el-eur"
    IFELEur                                 = 0xf14e,

    /// Identifier: "el-exclamation-sign"
    IFELExclamationSign                     = 0xf14f,

    /// Identifier: "el-eye-close"
    IFELEyeClose                            = 0xf150,

    /// Identifier: "el-eye-open"
    IFELEyeOpen                             = 0xf151,

    /// Identifier: "el-facebook"
    IFELFacebook                            = 0xf152,

    /// Identifier: "el-facetime-video"
    IFELFacetimeVideo                       = 0xf153,

    /// Identifier: "el-fast-backward"
    IFELFastBackward                        = 0xf154,

    /// Identifier: "el-fast-forward"
    IFELFastForward                         = 0xf155,

    /// Identifier: "el-female"
    IFELFemale                              = 0xf156,

    /// Identifier: "el-file-alt"
    IFELFileAlt                             = 0xf157,

    /// Identifier: "el-file-edit-alt"
    IFELFileEditAlt                         = 0xf158,

    /// Identifier: "el-file-edit"
    IFELFileEdit                            = 0xf159,

    /// Identifier: "el-file-new-alt"
    IFELFileNewAlt                          = 0xf15a,

    /// Identifier: "el-file-new"
    IFELFileNew                             = 0xf15b,

    /// Identifier: "el-file"
    IFELFile                                = 0xf15c,

    /// Identifier: "el-film"
    IFELFilm                                = 0xf15d,

    /// Identifier: "el-filter"
    IFELFilter                              = 0xf15e,

    /// Identifier: "el-fire"
    IFELFire                                = 0xf15f,

    /// Identifier: "el-flag-alt"
    IFELFlagAlt                             = 0xf160,

    /// Identifier: "el-flag"
    IFELFlag                                = 0xf161,

    /// Identifier: "el-flickr"
    IFELFlickr                              = 0xf162,

    /// Identifier: "el-folder-close"
    IFELFolderClose                         = 0xf163,

    /// Identifier: "el-folder-open"
    IFELFolderOpen                          = 0xf164,

    /// Identifier: "el-folder-sign"
    IFELFolderSign                          = 0xf165,

    /// Identifier: "el-folder"
    IFELFolder                              = 0xf166,

    /// Identifier: "el-font"
    IFELFont                                = 0xf167,

    /// Identifier: "el-fontsize"
    IFELFontsize                            = 0xf168,

    /// Identifier: "el-fork"
    IFELFork                                = 0xf169,

    /// Identifier: "el-forward-alt"
    IFELForwardAlt                          = 0xf16a,

    /// Identifier: "el-forward"
    IFELForward                             = 0xf16b,

    /// Identifier: "el-foursquare"
    IFELFoursquare                          = 0xf16c,

    /// Identifier: "el-friendfeed-rect"
    IFELFriendfeedRect                      = 0xf16d,

    /// Identifier: "el-friendfeed"
    IFELFriendfeed                          = 0xf16e,

    /// Identifier: "el-fullscreen"
    IFELFullscreen                          = 0xf16f,

    /// Identifier: "el-gbp"
    IFELGbp                                 = 0xf170,

    /// Identifier: "el-gift"
    IFELGift                                = 0xf171,

    /// Identifier: "el-github-text"
    IFELGithubText                          = 0xf172,

    /// Identifier: "el-github"
    IFELGithub                              = 0xf173,

    /// Identifier: "el-glass"
    IFELGlass                               = 0xf174,

    /// Identifier: "el-glasses"
    IFELGlasses                             = 0xf175,

    /// Identifier: "el-globe-alt"
    IFELGlobeAlt                            = 0xf176,

    /// Identifier: "el-globe"
    IFELGlobe                               = 0xf177,

    /// Identifier: "el-googleplus"
    IFELGoogleplus                          = 0xf178,

    /// Identifier: "el-graph-alt"
    IFELGraphAlt                            = 0xf179,

    /// Identifier: "el-graph"
    IFELGraph                               = 0xf17a,

    /// Identifier: "el-group-alt"
    IFELGroupAlt                            = 0xf17b,

    /// Identifier: "el-group"
    IFELGroup                               = 0xf17c,

    /// Identifier: "el-guidedog"
    IFELGuidedog                            = 0xf17d,

    /// Identifier: "el-hand-down"
    IFELHandDown                            = 0xf17e,

    /// Identifier: "el-hand-left"
    IFELHandLeft                            = 0xf17f,

    /// Identifier: "el-hand-right"
    IFELHandRight                           = 0xf180,

    /// Identifier: "el-hand-up"
    IFELHandUp                              = 0xf181,

    /// Identifier: "el-hdd"
    IFELHdd                                 = 0xf182,

    /// Identifier: "el-headphones"
    IFELHeadphones                          = 0xf183,

    /// Identifier: "el-hearing-impaired"
    IFELHearingImpaired                     = 0xf184,

    /// Identifier: "el-heart-alt"
    IFELHeartAlt                            = 0xf185,

    /// Identifier: "el-heart-empty"
    IFELHeartEmpty                          = 0xf186,

    /// Identifier: "el-heart"
    IFELHeart                               = 0xf187,

    /// Identifier: "el-home-alt"
    IFELHomeAlt                             = 0xf188,

    /// Identifier: "el-home"
    IFELHome                                = 0xf189,

    /// Identifier: "el-hourglass"
    IFELHourglass                           = 0xf18a,

    /// Identifier: "el-idea-alt"
    IFELIdeaAlt                             = 0xf18b,

    /// Identifier: "el-idea"
    IFELIdea                                = 0xf18c,

    /// Identifier: "el-inbox-alt"
    IFELInboxAlt                            = 0xf18d,

    /// Identifier: "el-inbox-box"
    IFELInboxBox                            = 0xf18e,

    /// Identifier: "el-inbox"
    IFELInbox                               = 0xf18f,

    /// Identifier: "el-indent-left"
    IFELIndentLeft                          = 0xf190,

    /// Identifier: "el-indent-right"
    IFELIndentRight                         = 0xf191,

    /// Identifier: "el-info-circle"
    IFELInfoCircle                          = 0xf192,

    /// Identifier: "el-instagram"
    IFELInstagram                           = 0xf193,

    /// Identifier: "el-iphone-home"
    IFELIphoneHome                          = 0xf194,

    /// Identifier: "el-italic"
    IFELItalic                              = 0xf195,

    /// Identifier: "el-key"
    IFELKey                                 = 0xf196,

    /// Identifier: "el-laptop-alt"
    IFELLaptopAlt                           = 0xf197,

    /// Identifier: "el-laptop"
    IFELLaptop                              = 0xf198,

    /// Identifier: "el-lastfm"
    IFELLastfm                              = 0xf199,

    /// Identifier: "el-leaf"
    IFELLeaf                                = 0xf19a,

    /// Identifier: "el-lines"
    IFELLines                               = 0xf19b,

    /// Identifier: "el-link"
    IFELLink                                = 0xf19c,

    /// Identifier: "el-linkedin"
    IFELLinkedin                            = 0xf19d,

    /// Identifier: "el-list-alt"
    IFELListAlt                             = 0xf19e,

    /// Identifier: "el-list"
    IFELList                                = 0xf19f,

    /// Identifier: "el-livejournal"
    IFELLivejournal                         = 0xf1a0,

    /// Identifier: "el-lock-alt"
    IFELLockAlt                             = 0xf1a1,

    /// Identifier: "el-lock"
    IFELLock                                = 0xf1a2,

    /// Identifier: "el-magic"
    IFELMagic                               = 0xf1a3,

    /// Identifier: "el-magnet"
    IFELMagnet                              = 0xf1a4,

    /// Identifier: "el-male"
    IFELMale                                = 0xf1a5,

    /// Identifier: "el-map-marker-alt"
    IFELMapMarkerAlt                        = 0xf1a6,

    /// Identifier: "el-map-marker"
    IFELMapMarker                           = 0xf1a7,

    /// Identifier: "el-mic-alt"
    IFELMicAlt                              = 0xf1a8,

    /// Identifier: "el-mic"
    IFELMic                                 = 0xf1a9,

    /// Identifier: "el-minus-sign"
    IFELMinusSign                           = 0xf1aa,

    /// Identifier: "el-minus"
    IFELMinus                               = 0xf1ab,

    /// Identifier: "el-move"
    IFELMove                                = 0xf1ac,

    /// Identifier: "el-music"
    IFELMusic                               = 0xf1ad,

    /// Identifier: "el-myspace"
    IFELMyspace                             = 0xf1ae,

    /// Identifier: "el-network"
    IFELNetwork                             = 0xf1af,

    /// Identifier: "el-off"
    IFELOff                                 = 0xf1b0,

    /// Identifier: "el-ok-circle"
    IFELOkCircle                            = 0xf1b1,

    /// Identifier: "el-ok-sign"
    IFELOkSign                              = 0xf1b2,

    /// Identifier: "el-ok"
    IFELOk                                  = 0xf1b3,

    /// Identifier: "el-opensource"
    IFELOpensource                          = 0xf1b4,

    /// Identifier: "el-paper-clip-alt"
    IFELPaperClipAlt                        = 0xf1b5,

    /// Identifier: "el-paper-clip"
    IFELPaperClip                           = 0xf1b6,

    /// Identifier: "el-path"
    IFELPath                                = 0xf1b7,

    /// Identifier: "el-pause-alt"
    IFELPauseAlt                            = 0xf1b8,

    /// Identifier: "el-pause"
    IFELPause                               = 0xf1b9,

    /// Identifier: "el-pencil-alt"
    IFELPencilAlt                           = 0xf1ba,

    /// Identifier: "el-pencil"
    IFELPencil                              = 0xf1bb,

    /// Identifier: "el-person"
    IFELPerson                              = 0xf1bc,

    /// Identifier: "el-phone-alt"
    IFELPhoneAlt                            = 0xf1bd,

    /// Identifier: "el-phone"
    IFELPhone                               = 0xf1be,

    /// Identifier: "el-photo-alt"
    IFELPhotoAlt                            = 0xf1bf,

    /// Identifier: "el-photo"
    IFELPhoto                               = 0xf1c0,

    /// Identifier: "el-picasa"
    IFELPicasa                              = 0xf1c1,

    /// Identifier: "el-picture"
    IFELPicture                             = 0xf1c2,

    /// Identifier: "el-pinterest"
    IFELPinterest                           = 0xf1c3,

    /// Identifier: "el-plane"
    IFELPlane                               = 0xf1c4,

    /// Identifier: "el-play-alt"
    IFELPlayAlt                             = 0xf1c5,

    /// Identifier: "el-play-circle"
    IFELPlayCircle                          = 0xf1c6,

    /// Identifier: "el-play"
    IFELPlay                                = 0xf1c7,

    /// Identifier: "el-plurk-alt"
    IFELPlurkAlt                            = 0xf1c8,

    /// Identifier: "el-plurk"
    IFELPlurk                               = 0xf1c9,

    /// Identifier: "el-plus-sign"
    IFELPlusSign                            = 0xf1ca,

    /// Identifier: "el-plus"
    IFELPlus                                = 0xf1cb,

    /// Identifier: "el-podcast"
    IFELPodcast                             = 0xf1cc,

    /// Identifier: "el-print"
    IFELPrint                               = 0xf1cd,

    /// Identifier: "el-puzzle"
    IFELPuzzle                              = 0xf1ce,

    /// Identifier: "el-qrcode"
    IFELQrcode                              = 0xf1cf,

    /// Identifier: "el-question-sign"
    IFELQuestionSign                        = 0xf1d0,

    /// Identifier: "el-question"
    IFELQuestion                            = 0xf1d1,

    /// Identifier: "el-quote-alt"
    IFELQuoteAlt                            = 0xf1d2,

    /// Identifier: "el-quote-right-alt"
    IFELQuoteRightAlt                       = 0xf1d3,

    /// Identifier: "el-quote-right"
    IFELQuoteRight                          = 0xf1d4,

    /// Identifier: "el-quotes"
    IFELQuotes                              = 0xf1d5,

    /// Identifier: "el-random"
    IFELRandom                              = 0xf1d6,

    /// Identifier: "el-record"
    IFELRecord                              = 0xf1d7,

    /// Identifier: "el-reddit"
    IFELReddit                              = 0xf1d8,

    /// Identifier: "el-redux"
    IFELRedux                               = 0xf1d9,

    /// Identifier: "el-refresh"
    IFELRefresh                             = 0xf1da,

    /// Identifier: "el-remove-circle"
    IFELRemoveCircle                        = 0xf1db,

    /// Identifier: "el-remove-sign"
    IFELRemoveSign                          = 0xf1dc,

    /// Identifier: "el-remove"
    IFELRemove                              = 0xf1dd,

    /// Identifier: "el-repeat-alt"
    IFELRepeatAlt                           = 0xf1de,

    /// Identifier: "el-repeat"
    IFELRepeat                              = 0xf1df,

    /// Identifier: "el-resize-full"
    IFELResizeFull                          = 0xf1e0,

    /// Identifier: "el-resize-horizontal"
    IFELResizeHorizontal                    = 0xf1e1,

    /// Identifier: "el-resize-small"
    IFELResizeSmall                         = 0xf1e2,

    /// Identifier: "el-resize-vertical"
    IFELResizeVertical                      = 0xf1e3,

    /// Identifier: "el-return-key"
    IFELReturnKey                           = 0xf1e4,

    /// Identifier: "el-retweet"
    IFELRetweet                             = 0xf1e5,

    /// Identifier: "el-reverse-alt"
    IFELReverseAlt                          = 0xf1e6,

    /// Identifier: "el-road"
    IFELRoad                                = 0xf1e7,

    /// Identifier: "el-rss"
    IFELRss                                 = 0xf1e8,

    /// Identifier: "el-scissors"
    IFELScissors                            = 0xf1e9,

    /// Identifier: "el-screen-alt"
    IFELScreenAlt                           = 0xf1ea,

    /// Identifier: "el-screen"
    IFELScreen                              = 0xf1eb,

    /// Identifier: "el-screenshot"
    IFELScreenshot                          = 0xf1ec,

    /// Identifier: "el-search-alt"
    IFELSearchAlt                           = 0xf1ed,

    /// Identifier: "el-search"
    IFELSearch                              = 0xf1ee,

    /// Identifier: "el-share-alt"
    IFELShareAlt                            = 0xf1ef,

    /// Identifier: "el-share"
    IFELShare                               = 0xf1f0,

    /// Identifier: "el-shopping-cart-sign"
    IFELShoppingCartSign                    = 0xf1f1,

    /// Identifier: "el-shopping-cart"
    IFELShoppingCart                        = 0xf1f2,

    /// Identifier: "el-signal"
    IFELSignal                              = 0xf1f3,

    /// Identifier: "el-skype"
    IFELSkype                               = 0xf1f4,

    /// Identifier: "el-slideshare"
    IFELSlideshare                          = 0xf1f5,

    /// Identifier: "el-smiley-alt"
    IFELSmileyAlt                           = 0xf1f6,

    /// Identifier: "el-smiley"
    IFELSmiley                              = 0xf1f7,

    /// Identifier: "el-soundcloud"
    IFELSoundcloud                          = 0xf1f8,

    /// Identifier: "el-speaker"
    IFELSpeaker                             = 0xf1f9,

    /// Identifier: "el-spotify"
    IFELSpotify                             = 0xf1fa,

    /// Identifier: "el-stackoverflow"
    IFELStackoverflow                       = 0xf1fb,

    /// Identifier: "el-star-alt"
    IFELStarAlt                             = 0xf1fc,

    /// Identifier: "el-star-empty"
    IFELStarEmpty                           = 0xf1fd,

    /// Identifier: "el-star"
    IFELStar                                = 0xf1fe,

    /// Identifier: "el-step-backward"
    IFELStepBackward                        = 0xf1ff,

    /// Identifier: "el-step-forward"
    IFELStepForward                         = 0xf200,

    /// Identifier: "el-stop-alt"
    IFELStopAlt                             = 0xf201,

    /// Identifier: "el-stop"
    IFELStop                                = 0xf202,

    /// Identifier: "el-stumbleupon"
    IFELStumbleupon                         = 0xf203,

    /// Identifier: "el-tag"
    IFELTag                                 = 0xf204,

    /// Identifier: "el-tags"
    IFELTags                                = 0xf205,

    /// Identifier: "el-tasks"
    IFELTasks                               = 0xf206,

    /// Identifier: "el-text-height"
    IFELTextHeight                          = 0xf207,

    /// Identifier: "el-text-width"
    IFELTextWidth                           = 0xf208,

    /// Identifier: "el-th-large"
    IFELThLarge                             = 0xf209,

    /// Identifier: "el-th-list"
    IFELThList                              = 0xf20a,

    /// Identifier: "el-th"
    IFELTh                                  = 0xf20b,

    /// Identifier: "el-thumbs-down"
    IFELThumbsDown                          = 0xf20c,

    /// Identifier: "el-thumbs-up"
    IFELThumbsUp                            = 0xf20d,

    /// Identifier: "el-time-alt"
    IFELTimeAlt                             = 0xf20e,

    /// Identifier: "el-time"
    IFELTime                                = 0xf20f,

    /// Identifier: "el-tint"
    IFELTint                                = 0xf210,

    /// Identifier: "el-torso"
    IFELTorso                               = 0xf211,

    /// Identifier: "el-trash-alt"
    IFELTrashAlt                            = 0xf212,

    /// Identifier: "el-trash"
    IFELTrash                               = 0xf213,

    /// Identifier: "el-tumblr"
    IFELTumblr                              = 0xf214,

    /// Identifier: "el-twitter"
    IFELTwitter                             = 0xf215,

    /// Identifier: "el-universal-access"
    IFELUniversalAccess                     = 0xf216,

    /// Identifier: "el-unlock-alt"
    IFELUnlockAlt                           = 0xf217,

    /// Identifier: "el-unlock"
    IFELUnlock                              = 0xf218,

    /// Identifier: "el-upload"
    IFELUpload                              = 0xf219,

    /// Identifier: "el-usd"
    IFELUsd                                 = 0xf21a,

    /// Identifier: "el-user"
    IFELUser                                = 0xf21b,

    /// Identifier: "el-viadeo"
    IFELViadeo                              = 0xf21c,

    /// Identifier: "el-video-alt"
    IFELVideoAlt                            = 0xf21d,

    /// Identifier: "el-video-chat"
    IFELVideoChat                           = 0xf21e,

    /// Identifier: "el-video"
    IFELVideo                               = 0xf21f,

    /// Identifier: "el-view-mode"
    IFELViewMode                            = 0xf220,

    /// Identifier: "el-vimeo"
    IFELVimeo                               = 0xf221,

    /// Identifier: "el-vkontakte"
    IFELVkontakte                           = 0xf222,

    /// Identifier: "el-volume-down"
    IFELVolumeDown                          = 0xf223,

    /// Identifier: "el-volume-off"
    IFELVolumeOff                           = 0xf224,

    /// Identifier: "el-volume-up"
    IFELVolumeUp                            = 0xf225,

    /// Identifier: "el-w3c"
    IFELW3c                                 = 0xf226,

    /// Identifier: "el-warning-sign"
    IFELWarningSign                         = 0xf227,

    /// Identifier: "el-website-alt"
    IFELWebsiteAlt                          = 0xf228,

    /// Identifier: "el-website"
    IFELWebsite                             = 0xf229,

    /// Identifier: "el-wheelchair"
    IFELWheelchair                          = 0xf22a,

    /// Identifier: "el-wordpress"
    IFELWordpress                           = 0xf22b,

    /// Identifier: "el-wrench-alt"
    IFELWrenchAlt                           = 0xf22c,

    /// Identifier: "el-wrench"
    IFELWrench                              = 0xf22d,

    /// Identifier: "el-youtube"
    IFELYoutube                             = 0xf22e,

    /// Identifier: "el-zoom-in"
    IFELZoomIn                              = 0xf22f,

    /// Identifier: "el-zoom-out"
    IFELZoomOut                             = 0xf230,

};

/**
 * Elusive Icons v2.0.0 http://elusiveicons.com
 */
@interface IFElusiveIcons : IFIcon
@end
