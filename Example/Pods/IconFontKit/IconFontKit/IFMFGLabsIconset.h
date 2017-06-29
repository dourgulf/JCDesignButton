#import "IFIcon.h"

/**
 * MFGLabsIconset icon types.
 */
typedef NS_ENUM(IFIconType, IFMFGLabsIconsetType) {

    /// Identifier: "icon-cloud"
    IFMFGLabsCloud                               = 0x2601,

    /// Identifier: "icon-at"
    IFMFGLabsAt                                  = 0x0040,

    /// Identifier: "icon-plus"
    IFMFGLabsPlus                                = 0x002B,

    /// Identifier: "icon-minus"
    IFMFGLabsMinus                               = 0x2212,

    /// Identifier: "icon-arrow_up"
    IFMFGLabsArrowUp                             = 0x2191,

    /// Identifier: "icon-arrow_down"
    IFMFGLabsArrowDown                           = 0x2193,

    /// Identifier: "icon-arrow_right"
    IFMFGLabsArrowRight                          = 0x2192,

    /// Identifier: "icon-arrow_left"
    IFMFGLabsArrowLeft                           = 0x2190,

    /// Identifier: "icon-chevron_down"
    IFMFGLabsChevronDown                         = 0xf004,

    /// Identifier: "icon-chevron_up"
    IFMFGLabsChevronUp                           = 0xf005,

    /// Identifier: "icon-chevron_right"
    IFMFGLabsChevronRight                        = 0xf006,

    /// Identifier: "icon-chevron_left"
    IFMFGLabsChevronLeft                         = 0xf007,

    /// Identifier: "icon-reorder"
    IFMFGLabsReorder                             = 0xf008,

    /// Identifier: "icon-list"
    IFMFGLabsList                                = 0xf009,

    /// Identifier: "icon-reorder_square"
    IFMFGLabsReorderSquare                       = 0xf00a,

    /// Identifier: "icon-reorder_square_line"
    IFMFGLabsReorderSquareLine                   = 0xf00b,

    /// Identifier: "icon-coverflow"
    IFMFGLabsCoverflow                           = 0xf00c,

    /// Identifier: "icon-coverflow_line"
    IFMFGLabsCoverflowLine                       = 0xf00d,

    /// Identifier: "icon-pause"
    IFMFGLabsPause                               = 0xf00e,

    /// Identifier: "icon-play"
    IFMFGLabsPlay                                = 0xf00f,

    /// Identifier: "icon-step_forward"
    IFMFGLabsStepForward                         = 0xf010,

    /// Identifier: "icon-step_backward"
    IFMFGLabsStepBackward                        = 0xf011,

    /// Identifier: "icon-fast_forward"
    IFMFGLabsFastForward                         = 0xf012,

    /// Identifier: "icon-fast_backward"
    IFMFGLabsFastBackward                        = 0xf013,

    /// Identifier: "icon-cloud_upload"
    IFMFGLabsCloudUpload                         = 0xf014,

    /// Identifier: "icon-cloud_download"
    IFMFGLabsCloudDownload                       = 0xf015,

    /// Identifier: "icon-data_science"
    IFMFGLabsDataScience                         = 0xf016,

    /// Identifier: "icon-data_science_black"
    IFMFGLabsDataScienceBlack                    = 0xf017,

    /// Identifier: "icon-globe"
    IFMFGLabsGlobe                               = 0xf018,

    /// Identifier: "icon-globe_black"
    IFMFGLabsGlobeBlack                          = 0xf019,

    /// Identifier: "icon-math_ico"
    IFMFGLabsMathIco                             = 0xf01a,

    /// Identifier: "icon-math"
    IFMFGLabsMath                                = 0xf01b,

    /// Identifier: "icon-math_black"
    IFMFGLabsMathBlack                           = 0xf01c,

    /// Identifier: "icon-paperplane_ico"
    IFMFGLabsPaperplaneIco                       = 0xf01d,

    /// Identifier: "icon-paperplane"
    IFMFGLabsPaperplane                          = 0xf01e,

    /// Identifier: "icon-paperplane_black"
    IFMFGLabsPaperplaneBlack                     = 0xf01f,

    /// Identifier: "icon-color_balance"
    IFMFGLabsColorBalance                        = 0xf020,

    /// Identifier: "icon-star"
    IFMFGLabsStar                                = 0x2605,

    /// Identifier: "icon-star_half"
    IFMFGLabsStarHalf                            = 0xf022,

    /// Identifier: "icon-star_empty"
    IFMFGLabsStarEmpty                           = 0x2606,

    /// Identifier: "icon-star_half_empty"
    IFMFGLabsStarHalfEmpty                       = 0xf024,

    /// Identifier: "icon-reload"
    IFMFGLabsReload                              = 0xf025,

    /// Identifier: "icon-heart"
    IFMFGLabsHeart                               = 0x2665,

    /// Identifier: "icon-heart_broken"
    IFMFGLabsHeartBroken                         = 0xf028,

    /// Identifier: "icon-hashtag"
    IFMFGLabsHashtag                             = 0xf029,

    /// Identifier: "icon-reply"
    IFMFGLabsReply                               = 0xf02a,

    /// Identifier: "icon-retweet"
    IFMFGLabsRetweet                             = 0xf02b,

    /// Identifier: "icon-signin"
    IFMFGLabsSignin                              = 0xf02c,

    /// Identifier: "icon-signout"
    IFMFGLabsSignout                             = 0xf02d,

    /// Identifier: "icon-download"
    IFMFGLabsDownload                            = 0xf02e,

    /// Identifier: "icon-upload"
    IFMFGLabsUpload                              = 0xf02f,

    /// Identifier: "icon-placepin"
    IFMFGLabsPlacepin                            = 0xf031,

    /// Identifier: "icon-display_screen"
    IFMFGLabsDisplayScreen                       = 0xf032,

    /// Identifier: "icon-tablet"
    IFMFGLabsTablet                              = 0xf033,

    /// Identifier: "icon-smartphone"
    IFMFGLabsSmartphone                          = 0xf034,

    /// Identifier: "icon-connected_object"
    IFMFGLabsConnectedObject                     = 0xf035,

    /// Identifier: "icon-lock"
    IFMFGLabsLock                                = 0xF512,

    /// Identifier: "icon-unlock"
    IFMFGLabsUnlock                              = 0xF513,

    /// Identifier: "icon-camera"
    IFMFGLabsCamera                              = 0xF4F7,

    /// Identifier: "icon-isight"
    IFMFGLabsIsight                              = 0xf039,

    /// Identifier: "icon-video_camera"
    IFMFGLabsVideoCamera                         = 0xf03a,

    /// Identifier: "icon-random"
    IFMFGLabsRandom                              = 0xf03b,

    /// Identifier: "icon-message"
    IFMFGLabsMessage                             = 0xF4AC,

    /// Identifier: "icon-discussion"
    IFMFGLabsDiscussion                          = 0xf03d,

    /// Identifier: "icon-calendar"
    IFMFGLabsCalendar                            = 0xF4C5,

    /// Identifier: "icon-ringbell"
    IFMFGLabsRingbell                            = 0xf03f,

    /// Identifier: "icon-movie"
    IFMFGLabsMovie                               = 0xf040,

    /// Identifier: "icon-mail"
    IFMFGLabsMail                                = 0x2709,

    /// Identifier: "icon-pen"
    IFMFGLabsPen                                 = 0x270F,

    /// Identifier: "icon-settings"
    IFMFGLabsSettings                            = 0x9881,

    /// Identifier: "icon-measure"
    IFMFGLabsMeasure                             = 0xf044,

    /// Identifier: "icon-vector"
    IFMFGLabsVector                              = 0xf045,

    /// Identifier: "icon-vector_pen"
    IFMFGLabsVectorPen                           = 0x2712,

    /// Identifier: "icon-mute_on"
    IFMFGLabsMuteOn                              = 0xf047,

    /// Identifier: "icon-mute_off"
    IFMFGLabsMuteOff                             = 0xf048,

    /// Identifier: "icon-home"
    IFMFGLabsHome                                = 0x2302,

    /// Identifier: "icon-sheet"
    IFMFGLabsSheet                               = 0xf04a,

    /// Identifier: "icon-arrow_big_right"
    IFMFGLabsArrowBigRight                       = 0x21C9,

    /// Identifier: "icon-arrow_big_left"
    IFMFGLabsArrowBigLeft                        = 0x21C7,

    /// Identifier: "icon-arrow_big_down"
    IFMFGLabsArrowBigDown                        = 0x21CA,

    /// Identifier: "icon-arrow_big_up"
    IFMFGLabsArrowBigUp                          = 0x21C8,

    /// Identifier: "icon-dribbble_circle"
    IFMFGLabsDribbbleCircle                      = 0xf04f,

    /// Identifier: "icon-dribbble"
    IFMFGLabsDribbble                            = 0xf050,

    /// Identifier: "icon-facebook_circle"
    IFMFGLabsFacebookCircle                      = 0xf051,

    /// Identifier: "icon-facebook"
    IFMFGLabsFacebook                            = 0xf052,

    /// Identifier: "icon-git_circle_alt"
    IFMFGLabsGitCircleAlt                        = 0xf053,

    /// Identifier: "icon-git_circle"
    IFMFGLabsGitCircle                           = 0xf054,

    /// Identifier: "icon-git"
    IFMFGLabsGit                                 = 0xf055,

    /// Identifier: "icon-octopus"
    IFMFGLabsOctopus                             = 0xf056,

    /// Identifier: "icon-twitter_circle"
    IFMFGLabsTwitterCircle                       = 0xf057,

    /// Identifier: "icon-twitter"
    IFMFGLabsTwitter                             = 0xf058,

    /// Identifier: "icon-google_plus_circle"
    IFMFGLabsGooglePlusCircle                    = 0xf059,

    /// Identifier: "icon-google_plus"
    IFMFGLabsGooglePlus                          = 0xf05a,

    /// Identifier: "icon-linked_in_circle"
    IFMFGLabsLinkedInCircle                      = 0xf05b,

    /// Identifier: "icon-linked_in"
    IFMFGLabsLinkedIn                            = 0xf05c,

    /// Identifier: "icon-instagram"
    IFMFGLabsInstagram                           = 0xf05d,

    /// Identifier: "icon-instagram_circle"
    IFMFGLabsInstagramCircle                     = 0xf05e,

    /// Identifier: "icon-mfg_icon"
    IFMFGLabsMfgIcon                             = 0xf05f,

    /// Identifier: "icon-xing"
    IFMFGLabsXing                                = 0xF532,

    /// Identifier: "icon-xing_circle"
    IFMFGLabsXingCircle                          = 0xF533,

    /// Identifier: "icon-mfg_icon_circle"
    IFMFGLabsMfgIconCircle                       = 0xf060,

    /// Identifier: "icon-user"
    IFMFGLabsUser                                = 0xf061,

    /// Identifier: "icon-user_male"
    IFMFGLabsUserMale                            = 0xf062,

    /// Identifier: "icon-user_female"
    IFMFGLabsUserFemale                          = 0xf063,

    /// Identifier: "icon-users"
    IFMFGLabsUsers                               = 0xf064,

    /// Identifier: "icon-file_open"
    IFMFGLabsFileOpen                            = 0xF4C2,

    /// Identifier: "icon-file_close"
    IFMFGLabsFileClose                           = 0xf067,

    /// Identifier: "icon-file_alt"
    IFMFGLabsFileAlt                             = 0xf068,

    /// Identifier: "icon-file_close_alt"
    IFMFGLabsFileCloseAlt                        = 0xf069,

    /// Identifier: "icon-attachment"
    IFMFGLabsAttachment                          = 0xf06a,

    /// Identifier: "icon-check"
    IFMFGLabsCheck                               = 0x2713,

    /// Identifier: "icon-cross_mark"
    IFMFGLabsCrossMark                           = 0x274C,

    /// Identifier: "icon-cancel_circle"
    IFMFGLabsCancelCircle                        = 0xF06E,

    /// Identifier: "icon-check_circle"
    IFMFGLabsCheckCircle                         = 0xf06d,

    /// Identifier: "icon-magnifying"
    IFMFGLabsMagnifying                          = 0xF50D,

    /// Identifier: "icon-inbox"
    IFMFGLabsInbox                               = 0xf070,

    /// Identifier: "icon-clock"
    IFMFGLabsClock                               = 0x23F2,

    /// Identifier: "icon-stopwatch"
    IFMFGLabsStopwatch                           = 0x23F1,

    /// Identifier: "icon-hourglass"
    IFMFGLabsHourglass                           = 0x231B,

    /// Identifier: "icon-trophy"
    IFMFGLabsTrophy                              = 0xf074,

    /// Identifier: "icon-unlock_alt"
    IFMFGLabsUnlockAlt                           = 0xF075,

    /// Identifier: "icon-lock_alt"
    IFMFGLabsLockAlt                             = 0xF510,

    /// Identifier: "icon-arrow_doubled_right"
    IFMFGLabsArrowDoubledRight                   = 0x21D2,

    /// Identifier: "icon-arrow_doubled_left"
    IFMFGLabsArrowDoubledLeft                    = 0x21D0,

    /// Identifier: "icon-arrow_doubled_down"
    IFMFGLabsArrowDoubledDown                    = 0x21D3,

    /// Identifier: "icon-arrow_doubled_up"
    IFMFGLabsArrowDoubledUp                      = 0x21D1,

    /// Identifier: "icon-link"
    IFMFGLabsLink                                = 0xf07B,

    /// Identifier: "icon-warning"
    IFMFGLabsWarning                             = 0x2757,

    /// Identifier: "icon-warning_alt"
    IFMFGLabsWarningAlt                          = 0x2755,

    /// Identifier: "icon-magnifying_plus"
    IFMFGLabsMagnifyingPlus                      = 0xf07E,

    /// Identifier: "icon-magnifying_minus"
    IFMFGLabsMagnifyingMinus                     = 0xf07F,

    /// Identifier: "icon-white_question"
    IFMFGLabsWhiteQuestion                       = 0x2754,

    /// Identifier: "icon-black_question"
    IFMFGLabsBlackQuestion                       = 0x2753,

    /// Identifier: "icon-stop"
    IFMFGLabsStop                                = 0xf080,

    /// Identifier: "icon-share"
    IFMFGLabsShare                               = 0xf081,

    /// Identifier: "icon-eye"
    IFMFGLabsEye                                 = 0xf082,

    /// Identifier: "icon-trash_can"
    IFMFGLabsTrashCan                            = 0xf083,

    /// Identifier: "icon-hard_drive"
    IFMFGLabsHardDrive                           = 0xf084,

    /// Identifier: "icon-information_black"
    IFMFGLabsInformationBlack                    = 0xf085,

    /// Identifier: "icon-information_white"
    IFMFGLabsInformationWhite                    = 0xf086,

    /// Identifier: "icon-printer"
    IFMFGLabsPrinter                             = 0xf087,

    /// Identifier: "icon-letter"
    IFMFGLabsLetter                              = 0xf088,

    /// Identifier: "icon-soundcloud"
    IFMFGLabsSoundcloud                          = 0xf089,

    /// Identifier: "icon-soundcloud_circle"
    IFMFGLabsSoundcloudCircle                    = 0xf08A,

    /// Identifier: "icon-anchor"
    IFMFGLabsAnchor                              = 0x2693,

    /// Identifier: "icon-female_sign"
    IFMFGLabsFemaleSign                          = 0x2640,

    /// Identifier: "icon-male_sign"
    IFMFGLabsMaleSign                            = 0x2642,

    /// Identifier: "icon-joystick"
    IFMFGLabsJoystick                            = 0xF514,

    /// Identifier: "icon-high_voltage"
    IFMFGLabsHighVoltage                         = 0x26A1,

    /// Identifier: "icon-fire"
    IFMFGLabsFire                                = 0xF525,

    /// Identifier: "icon-newspaper"
    IFMFGLabsNewspaper                           = 0xF4F0,

    /// Identifier: "icon-chart"
    IFMFGLabsChart                               = 0xF526,

    /// Identifier: "icon-spread"
    IFMFGLabsSpread                              = 0xF527,

    /// Identifier: "icon-spinner_1"
    IFMFGLabsSpinner1                            = 0xF528,

    /// Identifier: "icon-spinner_2"
    IFMFGLabsSpinner2                            = 0xF529,

    /// Identifier: "icon-chart_alt"
    IFMFGLabsChartAlt                            = 0xF530,

    /// Identifier: "icon-label"
    IFMFGLabsLabel                               = 0xF531,

    /// Identifier: "icon-brush"
    IFMFGLabsBrush                               = 0xE000,

    /// Identifier: "icon-refresh"
    IFMFGLabsRefresh                             = 0xE001,

    /// Identifier: "icon-node"
    IFMFGLabsNode                                = 0xE002,

    /// Identifier: "icon-node_2"
    IFMFGLabsNode2                               = 0xE003,

    /// Identifier: "icon-node_3"
    IFMFGLabsNode3                               = 0xE004,

    /// Identifier: "icon-link_2_nodes"
    IFMFGLabsLink2Nodes                          = 0xE005,

    /// Identifier: "icon-link_3_nodes"
    IFMFGLabsLink3Nodes                          = 0xE006,

    /// Identifier: "icon-link_loop_nodes"
    IFMFGLabsLinkLoopNodes                       = 0xE007,

    /// Identifier: "icon-node_size"
    IFMFGLabsNodeSize                            = 0xE008,

    /// Identifier: "icon-node_color"
    IFMFGLabsNodeColor                           = 0xE009,

    /// Identifier: "icon-layout_directed"
    IFMFGLabsLayoutDirected                      = 0xE010,

    /// Identifier: "icon-layout_radial"
    IFMFGLabsLayoutRadial                        = 0xE011,

    /// Identifier: "icon-layout_hierarchical"
    IFMFGLabsLayoutHierarchical                  = 0xE012,

    /// Identifier: "icon-node_link_direction"
    IFMFGLabsNodeLinkDirection                   = 0xE013,

    /// Identifier: "icon-node_link_short_path"
    IFMFGLabsNodeLinkShortPath                   = 0xE014,

    /// Identifier: "icon-node_cluster"
    IFMFGLabsNodeCluster                         = 0xE015,

    /// Identifier: "icon-display_graph"
    IFMFGLabsDisplayGraph                        = 0xE016,

    /// Identifier: "icon-node_link_weight"
    IFMFGLabsNodeLinkWeight                      = 0xE017,

    /// Identifier: "icon-more_node_links"
    IFMFGLabsMoreNodeLinks                       = 0xE018,

    /// Identifier: "icon-node_shape"
    IFMFGLabsNodeShape                           = 0xE00A,

    /// Identifier: "icon-node_icon"
    IFMFGLabsNodeIcon                            = 0xE00B,

    /// Identifier: "icon-node_text"
    IFMFGLabsNodeText                            = 0xE00C,

    /// Identifier: "icon-node_link_text"
    IFMFGLabsNodeLinkText                        = 0xE00D,

    /// Identifier: "icon-node_link_color"
    IFMFGLabsNodeLinkColor                       = 0xE00E,

    /// Identifier: "icon-node_link_shape"
    IFMFGLabsNodeLinkShape                       = 0xE00F,

    /// Identifier: "icon-credit_card"
    IFMFGLabsCreditCard                          = 0xF4B3,

    /// Identifier: "icon-disconnect"
    IFMFGLabsDisconnect                          = 0xF534,

    /// Identifier: "icon-graph"
    IFMFGLabsGraph                               = 0xF535,

    /// Identifier: "icon-new_user"
    IFMFGLabsNewUser                             = 0xF536,

};

/**
 * MFG Labs iconset v1.0 http://mfglabs.github.io/mfglabs-iconset
 */
@interface IFMFGLabsIconset : IFIcon
@end
