#import "IFIcon.h"

/**
 * FoundationIcons icon types.
 */
typedef NS_ENUM(IFIconType, IFFoundationIconsType) {

    /// Identifier: "fi-address-book"
    IFFIAddressBook                         = 0xf100,

    /// Identifier: "fi-alert"
    IFFIAlert                               = 0xf101,

    /// Identifier: "fi-align-center"
    IFFIAlignCenter                         = 0xf102,

    /// Identifier: "fi-align-justify"
    IFFIAlignJustify                        = 0xf103,

    /// Identifier: "fi-align-left"
    IFFIAlignLeft                           = 0xf104,

    /// Identifier: "fi-align-right"
    IFFIAlignRight                          = 0xf105,

    /// Identifier: "fi-anchor"
    IFFIAnchor                              = 0xf106,

    /// Identifier: "fi-annotate"
    IFFIAnnotate                            = 0xf107,

    /// Identifier: "fi-archive"
    IFFIArchive                             = 0xf108,

    /// Identifier: "fi-arrow-down"
    IFFIArrowDown                           = 0xf109,

    /// Identifier: "fi-arrow-left"
    IFFIArrowLeft                           = 0xf10a,

    /// Identifier: "fi-arrow-right"
    IFFIArrowRight                          = 0xf10b,

    /// Identifier: "fi-arrow-up"
    IFFIArrowUp                             = 0xf10c,

    /// Identifier: "fi-arrows-compress"
    IFFIArrowsCompress                      = 0xf10d,

    /// Identifier: "fi-arrows-expand"
    IFFIArrowsExpand                        = 0xf10e,

    /// Identifier: "fi-arrows-in"
    IFFIArrowsIn                            = 0xf10f,

    /// Identifier: "fi-arrows-out"
    IFFIArrowsOut                           = 0xf110,

    /// Identifier: "fi-asl"
    IFFIAsl                                 = 0xf111,

    /// Identifier: "fi-asterisk"
    IFFIAsterisk                            = 0xf112,

    /// Identifier: "fi-at-sign"
    IFFIAtSign                              = 0xf113,

    /// Identifier: "fi-background-color"
    IFFIBackgroundColor                     = 0xf114,

    /// Identifier: "fi-battery-empty"
    IFFIBatteryEmpty                        = 0xf115,

    /// Identifier: "fi-battery-full"
    IFFIBatteryFull                         = 0xf116,

    /// Identifier: "fi-battery-half"
    IFFIBatteryHalf                         = 0xf117,

    /// Identifier: "fi-bitcoin-circle"
    IFFIBitcoinCircle                       = 0xf118,

    /// Identifier: "fi-bitcoin"
    IFFIBitcoin                             = 0xf119,

    /// Identifier: "fi-blind"
    IFFIBlind                               = 0xf11a,

    /// Identifier: "fi-bluetooth"
    IFFIBluetooth                           = 0xf11b,

    /// Identifier: "fi-bold"
    IFFIBold                                = 0xf11c,

    /// Identifier: "fi-book-bookmark"
    IFFIBookBookmark                        = 0xf11d,

    /// Identifier: "fi-book"
    IFFIBook                                = 0xf11e,

    /// Identifier: "fi-bookmark"
    IFFIBookmark                            = 0xf11f,

    /// Identifier: "fi-braille"
    IFFIBraille                             = 0xf120,

    /// Identifier: "fi-burst-new"
    IFFIBurstNew                            = 0xf121,

    /// Identifier: "fi-burst-sale"
    IFFIBurstSale                           = 0xf122,

    /// Identifier: "fi-burst"
    IFFIBurst                               = 0xf123,

    /// Identifier: "fi-calendar"
    IFFICalendar                            = 0xf124,

    /// Identifier: "fi-camera"
    IFFICamera                              = 0xf125,

    /// Identifier: "fi-check"
    IFFICheck                               = 0xf126,

    /// Identifier: "fi-checkbox"
    IFFICheckbox                            = 0xf127,

    /// Identifier: "fi-clipboard-notes"
    IFFIClipboardNotes                      = 0xf128,

    /// Identifier: "fi-clipboard-pencil"
    IFFIClipboardPencil                     = 0xf129,

    /// Identifier: "fi-clipboard"
    IFFIClipboard                           = 0xf12a,

    /// Identifier: "fi-clock"
    IFFIClock                               = 0xf12b,

    /// Identifier: "fi-closed-caption"
    IFFIClosedCaption                       = 0xf12c,

    /// Identifier: "fi-cloud"
    IFFICloud                               = 0xf12d,

    /// Identifier: "fi-comment-minus"
    IFFICommentMinus                        = 0xf12e,

    /// Identifier: "fi-comment-quotes"
    IFFICommentQuotes                       = 0xf12f,

    /// Identifier: "fi-comment-video"
    IFFICommentVideo                        = 0xf130,

    /// Identifier: "fi-comment"
    IFFIComment                             = 0xf131,

    /// Identifier: "fi-comments"
    IFFIComments                            = 0xf132,

    /// Identifier: "fi-compass"
    IFFICompass                             = 0xf133,

    /// Identifier: "fi-contrast"
    IFFIContrast                            = 0xf134,

    /// Identifier: "fi-credit-card"
    IFFICreditCard                          = 0xf135,

    /// Identifier: "fi-crop"
    IFFICrop                                = 0xf136,

    /// Identifier: "fi-crown"
    IFFICrown                               = 0xf137,

    /// Identifier: "fi-css3"
    IFFICss3                                = 0xf138,

    /// Identifier: "fi-database"
    IFFIDatabase                            = 0xf139,

    /// Identifier: "fi-die-five"
    IFFIDieFive                             = 0xf13a,

    /// Identifier: "fi-die-four"
    IFFIDieFour                             = 0xf13b,

    /// Identifier: "fi-die-one"
    IFFIDieOne                              = 0xf13c,

    /// Identifier: "fi-die-six"
    IFFIDieSix                              = 0xf13d,

    /// Identifier: "fi-die-three"
    IFFIDieThree                            = 0xf13e,

    /// Identifier: "fi-die-two"
    IFFIDieTwo                              = 0xf13f,

    /// Identifier: "fi-dislike"
    IFFIDislike                             = 0xf140,

    /// Identifier: "fi-dollar-bill"
    IFFIDollarBill                          = 0xf141,

    /// Identifier: "fi-dollar"
    IFFIDollar                              = 0xf142,

    /// Identifier: "fi-download"
    IFFIDownload                            = 0xf143,

    /// Identifier: "fi-eject"
    IFFIEject                               = 0xf144,

    /// Identifier: "fi-elevator"
    IFFIElevator                            = 0xf145,

    /// Identifier: "fi-euro"
    IFFIEuro                                = 0xf146,

    /// Identifier: "fi-eye"
    IFFIEye                                 = 0xf147,

    /// Identifier: "fi-fast-forward"
    IFFIFastForward                         = 0xf148,

    /// Identifier: "fi-female-symbol"
    IFFIFemaleSymbol                        = 0xf149,

    /// Identifier: "fi-female"
    IFFIFemale                              = 0xf14a,

    /// Identifier: "fi-filter"
    IFFIFilter                              = 0xf14b,

    /// Identifier: "fi-first-aid"
    IFFIFirstAid                            = 0xf14c,

    /// Identifier: "fi-flag"
    IFFIFlag                                = 0xf14d,

    /// Identifier: "fi-folder-add"
    IFFIFolderAdd                           = 0xf14e,

    /// Identifier: "fi-folder-lock"
    IFFIFolderLock                          = 0xf14f,

    /// Identifier: "fi-folder"
    IFFIFolder                              = 0xf150,

    /// Identifier: "fi-foot"
    IFFIFoot                                = 0xf151,

    /// Identifier: "fi-foundation"
    IFFIFoundation                          = 0xf152,

    /// Identifier: "fi-graph-bar"
    IFFIGraphBar                            = 0xf153,

    /// Identifier: "fi-graph-horizontal"
    IFFIGraphHorizontal                     = 0xf154,

    /// Identifier: "fi-graph-pie"
    IFFIGraphPie                            = 0xf155,

    /// Identifier: "fi-graph-trend"
    IFFIGraphTrend                          = 0xf156,

    /// Identifier: "fi-guide-dog"
    IFFIGuideDog                            = 0xf157,

    /// Identifier: "fi-hearing-aid"
    IFFIHearingAid                          = 0xf158,

    /// Identifier: "fi-heart"
    IFFIHeart                               = 0xf159,

    /// Identifier: "fi-home"
    IFFIHome                                = 0xf15a,

    /// Identifier: "fi-html5"
    IFFIHtml5                               = 0xf15b,

    /// Identifier: "fi-indent-less"
    IFFIIndentLess                          = 0xf15c,

    /// Identifier: "fi-indent-more"
    IFFIIndentMore                          = 0xf15d,

    /// Identifier: "fi-info"
    IFFIInfo                                = 0xf15e,

    /// Identifier: "fi-italic"
    IFFIItalic                              = 0xf15f,

    /// Identifier: "fi-key"
    IFFIKey                                 = 0xf160,

    /// Identifier: "fi-laptop"
    IFFILaptop                              = 0xf161,

    /// Identifier: "fi-layout"
    IFFILayout                              = 0xf162,

    /// Identifier: "fi-lightbulb"
    IFFILightbulb                           = 0xf163,

    /// Identifier: "fi-like"
    IFFILike                                = 0xf164,

    /// Identifier: "fi-link"
    IFFILink                                = 0xf165,

    /// Identifier: "fi-list-bullet"
    IFFIListBullet                          = 0xf166,

    /// Identifier: "fi-list-number"
    IFFIListNumber                          = 0xf167,

    /// Identifier: "fi-list-thumbnails"
    IFFIListThumbnails                      = 0xf168,

    /// Identifier: "fi-list"
    IFFIList                                = 0xf169,

    /// Identifier: "fi-lock"
    IFFILock                                = 0xf16a,

    /// Identifier: "fi-loop"
    IFFILoop                                = 0xf16b,

    /// Identifier: "fi-magnifying-glass"
    IFFIMagnifyingGlass                     = 0xf16c,

    /// Identifier: "fi-mail"
    IFFIMail                                = 0xf16d,

    /// Identifier: "fi-male-female"
    IFFIMaleFemale                          = 0xf16e,

    /// Identifier: "fi-male-symbol"
    IFFIMaleSymbol                          = 0xf16f,

    /// Identifier: "fi-male"
    IFFIMale                                = 0xf170,

    /// Identifier: "fi-map"
    IFFIMap                                 = 0xf171,

    /// Identifier: "fi-marker"
    IFFIMarker                              = 0xf172,

    /// Identifier: "fi-megaphone"
    IFFIMegaphone                           = 0xf173,

    /// Identifier: "fi-microphone"
    IFFIMicrophone                          = 0xf174,

    /// Identifier: "fi-minus-circle"
    IFFIMinusCircle                         = 0xf175,

    /// Identifier: "fi-minus"
    IFFIMinus                               = 0xf176,

    /// Identifier: "fi-mobile-signal"
    IFFIMobileSignal                        = 0xf177,

    /// Identifier: "fi-mobile"
    IFFIMobile                              = 0xf178,

    /// Identifier: "fi-monitor"
    IFFIMonitor                             = 0xf179,

    /// Identifier: "fi-mountains"
    IFFIMountains                           = 0xf17a,

    /// Identifier: "fi-music"
    IFFIMusic                               = 0xf17b,

    /// Identifier: "fi-next"
    IFFINext                                = 0xf17c,

    /// Identifier: "fi-no-dogs"
    IFFINoDogs                              = 0xf17d,

    /// Identifier: "fi-no-smoking"
    IFFINoSmoking                           = 0xf17e,

    /// Identifier: "fi-page-add"
    IFFIPageAdd                             = 0xf17f,

    /// Identifier: "fi-page-copy"
    IFFIPageCopy                            = 0xf180,

    /// Identifier: "fi-page-csv"
    IFFIPageCsv                             = 0xf181,

    /// Identifier: "fi-page-delete"
    IFFIPageDelete                          = 0xf182,

    /// Identifier: "fi-page-doc"
    IFFIPageDoc                             = 0xf183,

    /// Identifier: "fi-page-edit"
    IFFIPageEdit                            = 0xf184,

    /// Identifier: "fi-page-export-csv"
    IFFIPageExportCsv                       = 0xf185,

    /// Identifier: "fi-page-export-doc"
    IFFIPageExportDoc                       = 0xf186,

    /// Identifier: "fi-page-export-pdf"
    IFFIPageExportPdf                       = 0xf187,

    /// Identifier: "fi-page-export"
    IFFIPageExport                          = 0xf188,

    /// Identifier: "fi-page-filled"
    IFFIPageFilled                          = 0xf189,

    /// Identifier: "fi-page-multiple"
    IFFIPageMultiple                        = 0xf18a,

    /// Identifier: "fi-page-pdf"
    IFFIPagePdf                             = 0xf18b,

    /// Identifier: "fi-page-remove"
    IFFIPageRemove                          = 0xf18c,

    /// Identifier: "fi-page-search"
    IFFIPageSearch                          = 0xf18d,

    /// Identifier: "fi-page"
    IFFIPage                                = 0xf18e,

    /// Identifier: "fi-paint-bucket"
    IFFIPaintBucket                         = 0xf18f,

    /// Identifier: "fi-paperclip"
    IFFIPaperclip                           = 0xf190,

    /// Identifier: "fi-pause"
    IFFIPause                               = 0xf191,

    /// Identifier: "fi-paw"
    IFFIPaw                                 = 0xf192,

    /// Identifier: "fi-paypal"
    IFFIPaypal                              = 0xf193,

    /// Identifier: "fi-pencil"
    IFFIPencil                              = 0xf194,

    /// Identifier: "fi-photo"
    IFFIPhoto                               = 0xf195,

    /// Identifier: "fi-play-circle"
    IFFIPlayCircle                          = 0xf196,

    /// Identifier: "fi-play-video"
    IFFIPlayVideo                           = 0xf197,

    /// Identifier: "fi-play"
    IFFIPlay                                = 0xf198,

    /// Identifier: "fi-plus"
    IFFIPlus                                = 0xf199,

    /// Identifier: "fi-pound"
    IFFIPound                               = 0xf19a,

    /// Identifier: "fi-power"
    IFFIPower                               = 0xf19b,

    /// Identifier: "fi-previous"
    IFFIPrevious                            = 0xf19c,

    /// Identifier: "fi-price-tag"
    IFFIPriceTag                            = 0xf19d,

    /// Identifier: "fi-pricetag-multiple"
    IFFIPricetagMultiple                    = 0xf19e,

    /// Identifier: "fi-print"
    IFFIPrint                               = 0xf19f,

    /// Identifier: "fi-prohibited"
    IFFIProhibited                          = 0xf1a0,

    /// Identifier: "fi-projection-screen"
    IFFIProjectionScreen                    = 0xf1a1,

    /// Identifier: "fi-puzzle"
    IFFIPuzzle                              = 0xf1a2,

    /// Identifier: "fi-quote"
    IFFIQuote                               = 0xf1a3,

    /// Identifier: "fi-record"
    IFFIRecord                              = 0xf1a4,

    /// Identifier: "fi-refresh"
    IFFIRefresh                             = 0xf1a5,

    /// Identifier: "fi-results-demographics"
    IFFIResultsDemographics                 = 0xf1a6,

    /// Identifier: "fi-results"
    IFFIResults                             = 0xf1a7,

    /// Identifier: "fi-rewind-ten"
    IFFIRewindTen                           = 0xf1a8,

    /// Identifier: "fi-rewind"
    IFFIRewind                              = 0xf1a9,

    /// Identifier: "fi-rss"
    IFFIRss                                 = 0xf1aa,

    /// Identifier: "fi-safety-cone"
    IFFISafetyCone                          = 0xf1ab,

    /// Identifier: "fi-save"
    IFFISave                                = 0xf1ac,

    /// Identifier: "fi-share"
    IFFIShare                               = 0xf1ad,

    /// Identifier: "fi-sheriff-badge"
    IFFISheriffBadge                        = 0xf1ae,

    /// Identifier: "fi-shield"
    IFFIShield                              = 0xf1af,

    /// Identifier: "fi-shopping-bag"
    IFFIShoppingBag                         = 0xf1b0,

    /// Identifier: "fi-shopping-cart"
    IFFIShoppingCart                        = 0xf1b1,

    /// Identifier: "fi-shuffle"
    IFFIShuffle                             = 0xf1b2,

    /// Identifier: "fi-skull"
    IFFISkull                               = 0xf1b3,

    /// Identifier: "fi-social-500px"
    IFFISocial500px                         = 0xf1b4,

    /// Identifier: "fi-social-adobe"
    IFFISocialAdobe                         = 0xf1b5,

    /// Identifier: "fi-social-amazon"
    IFFISocialAmazon                        = 0xf1b6,

    /// Identifier: "fi-social-android"
    IFFISocialAndroid                       = 0xf1b7,

    /// Identifier: "fi-social-apple"
    IFFISocialApple                         = 0xf1b8,

    /// Identifier: "fi-social-behance"
    IFFISocialBehance                       = 0xf1b9,

    /// Identifier: "fi-social-bing"
    IFFISocialBing                          = 0xf1ba,

    /// Identifier: "fi-social-blogger"
    IFFISocialBlogger                       = 0xf1bb,

    /// Identifier: "fi-social-delicious"
    IFFISocialDelicious                     = 0xf1bc,

    /// Identifier: "fi-social-designer-news"
    IFFISocialDesignerNews                  = 0xf1bd,

    /// Identifier: "fi-social-deviant-art"
    IFFISocialDeviantArt                    = 0xf1be,

    /// Identifier: "fi-social-digg"
    IFFISocialDigg                          = 0xf1bf,

    /// Identifier: "fi-social-dribbble"
    IFFISocialDribbble                      = 0xf1c0,

    /// Identifier: "fi-social-drive"
    IFFISocialDrive                         = 0xf1c1,

    /// Identifier: "fi-social-dropbox"
    IFFISocialDropbox                       = 0xf1c2,

    /// Identifier: "fi-social-evernote"
    IFFISocialEvernote                      = 0xf1c3,

    /// Identifier: "fi-social-facebook"
    IFFISocialFacebook                      = 0xf1c4,

    /// Identifier: "fi-social-flickr"
    IFFISocialFlickr                        = 0xf1c5,

    /// Identifier: "fi-social-forrst"
    IFFISocialForrst                        = 0xf1c6,

    /// Identifier: "fi-social-foursquare"
    IFFISocialFoursquare                    = 0xf1c7,

    /// Identifier: "fi-social-game-center"
    IFFISocialGameCenter                    = 0xf1c8,

    /// Identifier: "fi-social-github"
    IFFISocialGithub                        = 0xf1c9,

    /// Identifier: "fi-social-google-plus"
    IFFISocialGooglePlus                    = 0xf1ca,

    /// Identifier: "fi-social-hacker-news"
    IFFISocialHackerNews                    = 0xf1cb,

    /// Identifier: "fi-social-hi5"
    IFFISocialHi5                           = 0xf1cc,

    /// Identifier: "fi-social-instagram"
    IFFISocialInstagram                     = 0xf1cd,

    /// Identifier: "fi-social-joomla"
    IFFISocialJoomla                        = 0xf1ce,

    /// Identifier: "fi-social-lastfm"
    IFFISocialLastfm                        = 0xf1cf,

    /// Identifier: "fi-social-linkedin"
    IFFISocialLinkedin                      = 0xf1d0,

    /// Identifier: "fi-social-medium"
    IFFISocialMedium                        = 0xf1d1,

    /// Identifier: "fi-social-myspace"
    IFFISocialMyspace                       = 0xf1d2,

    /// Identifier: "fi-social-orkut"
    IFFISocialOrkut                         = 0xf1d3,

    /// Identifier: "fi-social-path"
    IFFISocialPath                          = 0xf1d4,

    /// Identifier: "fi-social-picasa"
    IFFISocialPicasa                        = 0xf1d5,

    /// Identifier: "fi-social-pinterest"
    IFFISocialPinterest                     = 0xf1d6,

    /// Identifier: "fi-social-rdio"
    IFFISocialRdio                          = 0xf1d7,

    /// Identifier: "fi-social-reddit"
    IFFISocialReddit                        = 0xf1d8,

    /// Identifier: "fi-social-skillshare"
    IFFISocialSkillshare                    = 0xf1d9,

    /// Identifier: "fi-social-skype"
    IFFISocialSkype                         = 0xf1da,

    /// Identifier: "fi-social-smashing-mag"
    IFFISocialSmashingMag                   = 0xf1db,

    /// Identifier: "fi-social-snapchat"
    IFFISocialSnapchat                      = 0xf1dc,

    /// Identifier: "fi-social-spotify"
    IFFISocialSpotify                       = 0xf1dd,

    /// Identifier: "fi-social-squidoo"
    IFFISocialSquidoo                       = 0xf1de,

    /// Identifier: "fi-social-stack-overflow"
    IFFISocialStackOverflow                 = 0xf1df,

    /// Identifier: "fi-social-steam"
    IFFISocialSteam                         = 0xf1e0,

    /// Identifier: "fi-social-stumbleupon"
    IFFISocialStumbleupon                   = 0xf1e1,

    /// Identifier: "fi-social-treehouse"
    IFFISocialTreehouse                     = 0xf1e2,

    /// Identifier: "fi-social-tumblr"
    IFFISocialTumblr                        = 0xf1e3,

    /// Identifier: "fi-social-twitter"
    IFFISocialTwitter                       = 0xf1e4,

    /// Identifier: "fi-social-vimeo"
    IFFISocialVimeo                         = 0xf1e5,

    /// Identifier: "fi-social-windows"
    IFFISocialWindows                       = 0xf1e6,

    /// Identifier: "fi-social-xbox"
    IFFISocialXbox                          = 0xf1e7,

    /// Identifier: "fi-social-yahoo"
    IFFISocialYahoo                         = 0xf1e8,

    /// Identifier: "fi-social-yelp"
    IFFISocialYelp                          = 0xf1e9,

    /// Identifier: "fi-social-youtube"
    IFFISocialYoutube                       = 0xf1ea,

    /// Identifier: "fi-social-zerply"
    IFFISocialZerply                        = 0xf1eb,

    /// Identifier: "fi-social-zurb"
    IFFISocialZurb                          = 0xf1ec,

    /// Identifier: "fi-sound"
    IFFISound                               = 0xf1ed,

    /// Identifier: "fi-star"
    IFFIStar                                = 0xf1ee,

    /// Identifier: "fi-stop"
    IFFIStop                                = 0xf1ef,

    /// Identifier: "fi-strikethrough"
    IFFIStrikethrough                       = 0xf1f0,

    /// Identifier: "fi-subscript"
    IFFISubscript                           = 0xf1f1,

    /// Identifier: "fi-superscript"
    IFFISuperscript                         = 0xf1f2,

    /// Identifier: "fi-tablet-landscape"
    IFFITabletLandscape                     = 0xf1f3,

    /// Identifier: "fi-tablet-portrait"
    IFFITabletPortrait                      = 0xf1f4,

    /// Identifier: "fi-target-two"
    IFFITargetTwo                           = 0xf1f5,

    /// Identifier: "fi-target"
    IFFITarget                              = 0xf1f6,

    /// Identifier: "fi-telephone-accessible"
    IFFITelephoneAccessible                 = 0xf1f7,

    /// Identifier: "fi-telephone"
    IFFITelephone                           = 0xf1f8,

    /// Identifier: "fi-text-color"
    IFFITextColor                           = 0xf1f9,

    /// Identifier: "fi-thumbnails"
    IFFIThumbnails                          = 0xf1fa,

    /// Identifier: "fi-ticket"
    IFFITicket                              = 0xf1fb,

    /// Identifier: "fi-torso-business"
    IFFITorsoBusiness                       = 0xf1fc,

    /// Identifier: "fi-torso-female"
    IFFITorsoFemale                         = 0xf1fd,

    /// Identifier: "fi-torso"
    IFFITorso                               = 0xf1fe,

    /// Identifier: "fi-torsos-all-female"
    IFFITorsosAllFemale                     = 0xf1ff,

    /// Identifier: "fi-torsos-all"
    IFFITorsosAll                           = 0xf200,

    /// Identifier: "fi-torsos-female-male"
    IFFITorsosFemaleMale                    = 0xf201,

    /// Identifier: "fi-torsos-male-female"
    IFFITorsosMaleFemale                    = 0xf202,

    /// Identifier: "fi-torsos"
    IFFITorsos                              = 0xf203,

    /// Identifier: "fi-trash"
    IFFITrash                               = 0xf204,

    /// Identifier: "fi-trees"
    IFFITrees                               = 0xf205,

    /// Identifier: "fi-trophy"
    IFFITrophy                              = 0xf206,

    /// Identifier: "fi-underline"
    IFFIUnderline                           = 0xf207,

    /// Identifier: "fi-universal-access"
    IFFIUniversalAccess                     = 0xf208,

    /// Identifier: "fi-unlink"
    IFFIUnlink                              = 0xf209,

    /// Identifier: "fi-unlock"
    IFFIUnlock                              = 0xf20a,

    /// Identifier: "fi-upload-cloud"
    IFFIUploadCloud                         = 0xf20b,

    /// Identifier: "fi-upload"
    IFFIUpload                              = 0xf20c,

    /// Identifier: "fi-usb"
    IFFIUsb                                 = 0xf20d,

    /// Identifier: "fi-video"
    IFFIVideo                               = 0xf20e,

    /// Identifier: "fi-volume-none"
    IFFIVolumeNone                          = 0xf20f,

    /// Identifier: "fi-volume-strike"
    IFFIVolumeStrike                        = 0xf210,

    /// Identifier: "fi-volume"
    IFFIVolume                              = 0xf211,

    /// Identifier: "fi-web"
    IFFIWeb                                 = 0xf212,

    /// Identifier: "fi-wheelchair"
    IFFIWheelchair                          = 0xf213,

    /// Identifier: "fi-widget"
    IFFIWidget                              = 0xf214,

    /// Identifier: "fi-wrench"
    IFFIWrench                              = 0xf215,

    /// Identifier: "fi-x-circle"
    IFFIXCircle                             = 0xf216,

    /// Identifier: "fi-x"
    IFFIX                                   = 0xf217,

    /// Identifier: "fi-yen"
    IFFIYen                                 = 0xf218,

    /// Identifier: "fi-zoom-in"
    IFFIZoomIn                              = 0xf219,

    /// Identifier: "fi-zoom-out"
    IFFIZoomOut                             = 0xf21a,

};

/**
 * Foundation Icon Fonts 3 http://zurb.com/playground/foundation-icon-fonts-3
 */
@interface IFFoundationIcons : IFIcon
@end
