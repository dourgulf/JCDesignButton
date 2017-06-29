#import "IFIcon.h"

/**
 * MaterialIcons icon types.
 */
typedef NS_ENUM(IFIconType, IFMaterialIconsType) {

    /// Identifier: "3d_rotation"
    IFMI3dRotation                          = 0xe84d,

    /// Identifier: "ac_unit"
    IFMIAcUnit                              = 0xeb3b,

    /// Identifier: "access_alarm"
    IFMIAccessAlarm                         = 0xe190,

    /// Identifier: "access_alarms"
    IFMIAccessAlarms                        = 0xe191,

    /// Identifier: "access_time"
    IFMIAccessTime                          = 0xe192,

    /// Identifier: "accessibility"
    IFMIAccessibility                       = 0xe84e,

    /// Identifier: "accessible"
    IFMIAccessible                          = 0xe914,

    /// Identifier: "account_balance"
    IFMIAccountBalance                      = 0xe84f,

    /// Identifier: "account_balance_wallet"
    IFMIAccountBalanceWallet                = 0xe850,

    /// Identifier: "account_box"
    IFMIAccountBox                          = 0xe851,

    /// Identifier: "account_circle"
    IFMIAccountCircle                       = 0xe853,

    /// Identifier: "adb"
    IFMIAdb                                 = 0xe60e,

    /// Identifier: "add"
    IFMIAdd                                 = 0xe145,

    /// Identifier: "add_a_photo"
    IFMIAddAPhoto                           = 0xe439,

    /// Identifier: "add_alarm"
    IFMIAddAlarm                            = 0xe193,

    /// Identifier: "add_alert"
    IFMIAddAlert                            = 0xe003,

    /// Identifier: "add_box"
    IFMIAddBox                              = 0xe146,

    /// Identifier: "add_circle"
    IFMIAddCircle                           = 0xe147,

    /// Identifier: "add_circle_outline"
    IFMIAddCircleOutline                    = 0xe148,

    /// Identifier: "add_location"
    IFMIAddLocation                         = 0xe567,

    /// Identifier: "add_shopping_cart"
    IFMIAddShoppingCart                     = 0xe854,

    /// Identifier: "add_to_photos"
    IFMIAddToPhotos                         = 0xe39d,

    /// Identifier: "add_to_queue"
    IFMIAddToQueue                          = 0xe05c,

    /// Identifier: "adjust"
    IFMIAdjust                              = 0xe39e,

    /// Identifier: "airline_seat_flat"
    IFMIAirlineSeatFlat                     = 0xe630,

    /// Identifier: "airline_seat_flat_angled"
    IFMIAirlineSeatFlatAngled               = 0xe631,

    /// Identifier: "airline_seat_individual_suite"
    IFMIAirlineSeatIndividualSuite          = 0xe632,

    /// Identifier: "airline_seat_legroom_extra"
    IFMIAirlineSeatLegroomExtra             = 0xe633,

    /// Identifier: "airline_seat_legroom_normal"
    IFMIAirlineSeatLegroomNormal            = 0xe634,

    /// Identifier: "airline_seat_legroom_reduced"
    IFMIAirlineSeatLegroomReduced           = 0xe635,

    /// Identifier: "airline_seat_recline_extra"
    IFMIAirlineSeatReclineExtra             = 0xe636,

    /// Identifier: "airline_seat_recline_normal"
    IFMIAirlineSeatReclineNormal            = 0xe637,

    /// Identifier: "airplanemode_active"
    IFMIAirplanemodeActive                  = 0xe195,

    /// Identifier: "airplanemode_inactive"
    IFMIAirplanemodeInactive                = 0xe194,

    /// Identifier: "airplay"
    IFMIAirplay                             = 0xe055,

    /// Identifier: "airport_shuttle"
    IFMIAirportShuttle                      = 0xeb3c,

    /// Identifier: "alarm"
    IFMIAlarm                               = 0xe855,

    /// Identifier: "alarm_add"
    IFMIAlarmAdd                            = 0xe856,

    /// Identifier: "alarm_off"
    IFMIAlarmOff                            = 0xe857,

    /// Identifier: "alarm_on"
    IFMIAlarmOn                             = 0xe858,

    /// Identifier: "album"
    IFMIAlbum                               = 0xe019,

    /// Identifier: "all_inclusive"
    IFMIAllInclusive                        = 0xeb3d,

    /// Identifier: "all_out"
    IFMIAllOut                              = 0xe90b,

    /// Identifier: "android"
    IFMIAndroid                             = 0xe859,

    /// Identifier: "announcement"
    IFMIAnnouncement                        = 0xe85a,

    /// Identifier: "apps"
    IFMIApps                                = 0xe5c3,

    /// Identifier: "archive"
    IFMIArchive                             = 0xe149,

    /// Identifier: "arrow_back"
    IFMIArrowBack                           = 0xe5c4,

    /// Identifier: "arrow_downward"
    IFMIArrowDownward                       = 0xe5db,

    /// Identifier: "arrow_drop_down"
    IFMIArrowDropDown                       = 0xe5c5,

    /// Identifier: "arrow_drop_down_circle"
    IFMIArrowDropDownCircle                 = 0xe5c6,

    /// Identifier: "arrow_drop_up"
    IFMIArrowDropUp                         = 0xe5c7,

    /// Identifier: "arrow_forward"
    IFMIArrowForward                        = 0xe5c8,

    /// Identifier: "arrow_upward"
    IFMIArrowUpward                         = 0xe5d8,

    /// Identifier: "art_track"
    IFMIArtTrack                            = 0xe060,

    /// Identifier: "aspect_ratio"
    IFMIAspectRatio                         = 0xe85b,

    /// Identifier: "assessment"
    IFMIAssessment                          = 0xe85c,

    /// Identifier: "assignment"
    IFMIAssignment                          = 0xe85d,

    /// Identifier: "assignment_ind"
    IFMIAssignmentInd                       = 0xe85e,

    /// Identifier: "assignment_late"
    IFMIAssignmentLate                      = 0xe85f,

    /// Identifier: "assignment_return"
    IFMIAssignmentReturn                    = 0xe860,

    /// Identifier: "assignment_returned"
    IFMIAssignmentReturned                  = 0xe861,

    /// Identifier: "assignment_turned_in"
    IFMIAssignmentTurnedIn                  = 0xe862,

    /// Identifier: "assistant"
    IFMIAssistant                           = 0xe39f,

    /// Identifier: "assistant_photo"
    IFMIAssistantPhoto                      = 0xe3a0,

    /// Identifier: "attach_file"
    IFMIAttachFile                          = 0xe226,

    /// Identifier: "attach_money"
    IFMIAttachMoney                         = 0xe227,

    /// Identifier: "attachment"
    IFMIAttachment                          = 0xe2bc,

    /// Identifier: "audiotrack"
    IFMIAudiotrack                          = 0xe3a1,

    /// Identifier: "autorenew"
    IFMIAutorenew                           = 0xe863,

    /// Identifier: "av_timer"
    IFMIAvTimer                             = 0xe01b,

    /// Identifier: "backspace"
    IFMIBackspace                           = 0xe14a,

    /// Identifier: "backup"
    IFMIBackup                              = 0xe864,

    /// Identifier: "battery_alert"
    IFMIBatteryAlert                        = 0xe19c,

    /// Identifier: "battery_charging_full"
    IFMIBatteryChargingFull                 = 0xe1a3,

    /// Identifier: "battery_full"
    IFMIBatteryFull                         = 0xe1a4,

    /// Identifier: "battery_std"
    IFMIBatteryStd                          = 0xe1a5,

    /// Identifier: "battery_unknown"
    IFMIBatteryUnknown                      = 0xe1a6,

    /// Identifier: "beach_access"
    IFMIBeachAccess                         = 0xeb3e,

    /// Identifier: "beenhere"
    IFMIBeenhere                            = 0xe52d,

    /// Identifier: "block"
    IFMIBlock                               = 0xe14b,

    /// Identifier: "bluetooth"
    IFMIBluetooth                           = 0xe1a7,

    /// Identifier: "bluetooth_audio"
    IFMIBluetoothAudio                      = 0xe60f,

    /// Identifier: "bluetooth_connected"
    IFMIBluetoothConnected                  = 0xe1a8,

    /// Identifier: "bluetooth_disabled"
    IFMIBluetoothDisabled                   = 0xe1a9,

    /// Identifier: "bluetooth_searching"
    IFMIBluetoothSearching                  = 0xe1aa,

    /// Identifier: "blur_circular"
    IFMIBlurCircular                        = 0xe3a2,

    /// Identifier: "blur_linear"
    IFMIBlurLinear                          = 0xe3a3,

    /// Identifier: "blur_off"
    IFMIBlurOff                             = 0xe3a4,

    /// Identifier: "blur_on"
    IFMIBlurOn                              = 0xe3a5,

    /// Identifier: "book"
    IFMIBook                                = 0xe865,

    /// Identifier: "bookmark"
    IFMIBookmark                            = 0xe866,

    /// Identifier: "bookmark_border"
    IFMIBookmarkBorder                      = 0xe867,

    /// Identifier: "border_all"
    IFMIBorderAll                           = 0xe228,

    /// Identifier: "border_bottom"
    IFMIBorderBottom                        = 0xe229,

    /// Identifier: "border_clear"
    IFMIBorderClear                         = 0xe22a,

    /// Identifier: "border_color"
    IFMIBorderColor                         = 0xe22b,

    /// Identifier: "border_horizontal"
    IFMIBorderHorizontal                    = 0xe22c,

    /// Identifier: "border_inner"
    IFMIBorderInner                         = 0xe22d,

    /// Identifier: "border_left"
    IFMIBorderLeft                          = 0xe22e,

    /// Identifier: "border_outer"
    IFMIBorderOuter                         = 0xe22f,

    /// Identifier: "border_right"
    IFMIBorderRight                         = 0xe230,

    /// Identifier: "border_style"
    IFMIBorderStyle                         = 0xe231,

    /// Identifier: "border_top"
    IFMIBorderTop                           = 0xe232,

    /// Identifier: "border_vertical"
    IFMIBorderVertical                      = 0xe233,

    /// Identifier: "branding_watermark"
    IFMIBrandingWatermark                   = 0xe06b,

    /// Identifier: "brightness_1"
    IFMIBrightness1                         = 0xe3a6,

    /// Identifier: "brightness_2"
    IFMIBrightness2                         = 0xe3a7,

    /// Identifier: "brightness_3"
    IFMIBrightness3                         = 0xe3a8,

    /// Identifier: "brightness_4"
    IFMIBrightness4                         = 0xe3a9,

    /// Identifier: "brightness_5"
    IFMIBrightness5                         = 0xe3aa,

    /// Identifier: "brightness_6"
    IFMIBrightness6                         = 0xe3ab,

    /// Identifier: "brightness_7"
    IFMIBrightness7                         = 0xe3ac,

    /// Identifier: "brightness_auto"
    IFMIBrightnessAuto                      = 0xe1ab,

    /// Identifier: "brightness_high"
    IFMIBrightnessHigh                      = 0xe1ac,

    /// Identifier: "brightness_low"
    IFMIBrightnessLow                       = 0xe1ad,

    /// Identifier: "brightness_medium"
    IFMIBrightnessMedium                    = 0xe1ae,

    /// Identifier: "broken_image"
    IFMIBrokenImage                         = 0xe3ad,

    /// Identifier: "brush"
    IFMIBrush                               = 0xe3ae,

    /// Identifier: "bubble_chart"
    IFMIBubbleChart                         = 0xe6dd,

    /// Identifier: "bug_report"
    IFMIBugReport                           = 0xe868,

    /// Identifier: "build"
    IFMIBuild                               = 0xe869,

    /// Identifier: "burst_mode"
    IFMIBurstMode                           = 0xe43c,

    /// Identifier: "business"
    IFMIBusiness                            = 0xe0af,

    /// Identifier: "business_center"
    IFMIBusinessCenter                      = 0xeb3f,

    /// Identifier: "cached"
    IFMICached                              = 0xe86a,

    /// Identifier: "cake"
    IFMICake                                = 0xe7e9,

    /// Identifier: "call"
    IFMICall                                = 0xe0b0,

    /// Identifier: "call_end"
    IFMICallEnd                             = 0xe0b1,

    /// Identifier: "call_made"
    IFMICallMade                            = 0xe0b2,

    /// Identifier: "call_merge"
    IFMICallMerge                           = 0xe0b3,

    /// Identifier: "call_missed"
    IFMICallMissed                          = 0xe0b4,

    /// Identifier: "call_missed_outgoing"
    IFMICallMissedOutgoing                  = 0xe0e4,

    /// Identifier: "call_received"
    IFMICallReceived                        = 0xe0b5,

    /// Identifier: "call_split"
    IFMICallSplit                           = 0xe0b6,

    /// Identifier: "call_to_action"
    IFMICallToAction                        = 0xe06c,

    /// Identifier: "camera"
    IFMICamera                              = 0xe3af,

    /// Identifier: "camera_alt"
    IFMICameraAlt                           = 0xe3b0,

    /// Identifier: "camera_enhance"
    IFMICameraEnhance                       = 0xe8fc,

    /// Identifier: "camera_front"
    IFMICameraFront                         = 0xe3b1,

    /// Identifier: "camera_rear"
    IFMICameraRear                          = 0xe3b2,

    /// Identifier: "camera_roll"
    IFMICameraRoll                          = 0xe3b3,

    /// Identifier: "cancel"
    IFMICancel                              = 0xe5c9,

    /// Identifier: "card_giftcard"
    IFMICardGiftcard                        = 0xe8f6,

    /// Identifier: "card_membership"
    IFMICardMembership                      = 0xe8f7,

    /// Identifier: "card_travel"
    IFMICardTravel                          = 0xe8f8,

    /// Identifier: "casino"
    IFMICasino                              = 0xeb40,

    /// Identifier: "cast"
    IFMICast                                = 0xe307,

    /// Identifier: "cast_connected"
    IFMICastConnected                       = 0xe308,

    /// Identifier: "center_focus_strong"
    IFMICenterFocusStrong                   = 0xe3b4,

    /// Identifier: "center_focus_weak"
    IFMICenterFocusWeak                     = 0xe3b5,

    /// Identifier: "change_history"
    IFMIChangeHistory                       = 0xe86b,

    /// Identifier: "chat"
    IFMIChat                                = 0xe0b7,

    /// Identifier: "chat_bubble"
    IFMIChatBubble                          = 0xe0ca,

    /// Identifier: "chat_bubble_outline"
    IFMIChatBubbleOutline                   = 0xe0cb,

    /// Identifier: "check"
    IFMICheck                               = 0xe5ca,

    /// Identifier: "check_box"
    IFMICheckBox                            = 0xe834,

    /// Identifier: "check_box_outline_blank"
    IFMICheckBoxOutlineBlank                = 0xe835,

    /// Identifier: "check_circle"
    IFMICheckCircle                         = 0xe86c,

    /// Identifier: "chevron_left"
    IFMIChevronLeft                         = 0xe5cb,

    /// Identifier: "chevron_right"
    IFMIChevronRight                        = 0xe5cc,

    /// Identifier: "child_care"
    IFMIChildCare                           = 0xeb41,

    /// Identifier: "child_friendly"
    IFMIChildFriendly                       = 0xeb42,

    /// Identifier: "chrome_reader_mode"
    IFMIChromeReaderMode                    = 0xe86d,

    /// Identifier: "class"
    IFMIClass                               = 0xe86e,

    /// Identifier: "clear"
    IFMIClear                               = 0xe14c,

    /// Identifier: "clear_all"
    IFMIClearAll                            = 0xe0b8,

    /// Identifier: "close"
    IFMIClose                               = 0xe5cd,

    /// Identifier: "closed_caption"
    IFMIClosedCaption                       = 0xe01c,

    /// Identifier: "cloud"
    IFMICloud                               = 0xe2bd,

    /// Identifier: "cloud_circle"
    IFMICloudCircle                         = 0xe2be,

    /// Identifier: "cloud_done"
    IFMICloudDone                           = 0xe2bf,

    /// Identifier: "cloud_download"
    IFMICloudDownload                       = 0xe2c0,

    /// Identifier: "cloud_off"
    IFMICloudOff                            = 0xe2c1,

    /// Identifier: "cloud_queue"
    IFMICloudQueue                          = 0xe2c2,

    /// Identifier: "cloud_upload"
    IFMICloudUpload                         = 0xe2c3,

    /// Identifier: "code"
    IFMICode                                = 0xe86f,

    /// Identifier: "collections"
    IFMICollections                         = 0xe3b6,

    /// Identifier: "collections_bookmark"
    IFMICollectionsBookmark                 = 0xe431,

    /// Identifier: "color_lens"
    IFMIColorLens                           = 0xe3b7,

    /// Identifier: "colorize"
    IFMIColorize                            = 0xe3b8,

    /// Identifier: "comment"
    IFMIComment                             = 0xe0b9,

    /// Identifier: "compare"
    IFMICompare                             = 0xe3b9,

    /// Identifier: "compare_arrows"
    IFMICompareArrows                       = 0xe915,

    /// Identifier: "computer"
    IFMIComputer                            = 0xe30a,

    /// Identifier: "confirmation_number"
    IFMIConfirmationNumber                  = 0xe638,

    /// Identifier: "contact_mail"
    IFMIContactMail                         = 0xe0d0,

    /// Identifier: "contact_phone"
    IFMIContactPhone                        = 0xe0cf,

    /// Identifier: "contacts"
    IFMIContacts                            = 0xe0ba,

    /// Identifier: "content_copy"
    IFMIContentCopy                         = 0xe14d,

    /// Identifier: "content_cut"
    IFMIContentCut                          = 0xe14e,

    /// Identifier: "content_paste"
    IFMIContentPaste                        = 0xe14f,

    /// Identifier: "control_point"
    IFMIControlPoint                        = 0xe3ba,

    /// Identifier: "control_point_duplicate"
    IFMIControlPointDuplicate               = 0xe3bb,

    /// Identifier: "copyright"
    IFMICopyright                           = 0xe90c,

    /// Identifier: "create"
    IFMICreate                              = 0xe150,

    /// Identifier: "create_new_folder"
    IFMICreateNewFolder                     = 0xe2cc,

    /// Identifier: "credit_card"
    IFMICreditCard                          = 0xe870,

    /// Identifier: "crop"
    IFMICrop                                = 0xe3be,

    /// Identifier: "crop_16_9"
    IFMICrop169                             = 0xe3bc,

    /// Identifier: "crop_3_2"
    IFMICrop32                              = 0xe3bd,

    /// Identifier: "crop_5_4"
    IFMICrop54                              = 0xe3bf,

    /// Identifier: "crop_7_5"
    IFMICrop75                              = 0xe3c0,

    /// Identifier: "crop_din"
    IFMICropDin                             = 0xe3c1,

    /// Identifier: "crop_free"
    IFMICropFree                            = 0xe3c2,

    /// Identifier: "crop_landscape"
    IFMICropLandscape                       = 0xe3c3,

    /// Identifier: "crop_original"
    IFMICropOriginal                        = 0xe3c4,

    /// Identifier: "crop_portrait"
    IFMICropPortrait                        = 0xe3c5,

    /// Identifier: "crop_rotate"
    IFMICropRotate                          = 0xe437,

    /// Identifier: "crop_square"
    IFMICropSquare                          = 0xe3c6,

    /// Identifier: "dashboard"
    IFMIDashboard                           = 0xe871,

    /// Identifier: "data_usage"
    IFMIDataUsage                           = 0xe1af,

    /// Identifier: "date_range"
    IFMIDateRange                           = 0xe916,

    /// Identifier: "dehaze"
    IFMIDehaze                              = 0xe3c7,

    /// Identifier: "delete"
    IFMIDelete                              = 0xe872,

    /// Identifier: "delete_forever"
    IFMIDeleteForever                       = 0xe92b,

    /// Identifier: "delete_sweep"
    IFMIDeleteSweep                         = 0xe16c,

    /// Identifier: "description"
    IFMIDescription                         = 0xe873,

    /// Identifier: "desktop_mac"
    IFMIDesktopMac                          = 0xe30b,

    /// Identifier: "desktop_windows"
    IFMIDesktopWindows                      = 0xe30c,

    /// Identifier: "details"
    IFMIDetails                             = 0xe3c8,

    /// Identifier: "developer_board"
    IFMIDeveloperBoard                      = 0xe30d,

    /// Identifier: "developer_mode"
    IFMIDeveloperMode                       = 0xe1b0,

    /// Identifier: "device_hub"
    IFMIDeviceHub                           = 0xe335,

    /// Identifier: "devices"
    IFMIDevices                             = 0xe1b1,

    /// Identifier: "devices_other"
    IFMIDevicesOther                        = 0xe337,

    /// Identifier: "dialer_sip"
    IFMIDialerSip                           = 0xe0bb,

    /// Identifier: "dialpad"
    IFMIDialpad                             = 0xe0bc,

    /// Identifier: "directions"
    IFMIDirections                          = 0xe52e,

    /// Identifier: "directions_bike"
    IFMIDirectionsBike                      = 0xe52f,

    /// Identifier: "directions_boat"
    IFMIDirectionsBoat                      = 0xe532,

    /// Identifier: "directions_bus"
    IFMIDirectionsBus                       = 0xe530,

    /// Identifier: "directions_car"
    IFMIDirectionsCar                       = 0xe531,

    /// Identifier: "directions_railway"
    IFMIDirectionsRailway                   = 0xe534,

    /// Identifier: "directions_run"
    IFMIDirectionsRun                       = 0xe566,

    /// Identifier: "directions_subway"
    IFMIDirectionsSubway                    = 0xe533,

    /// Identifier: "directions_transit"
    IFMIDirectionsTransit                   = 0xe535,

    /// Identifier: "directions_walk"
    IFMIDirectionsWalk                      = 0xe536,

    /// Identifier: "disc_full"
    IFMIDiscFull                            = 0xe610,

    /// Identifier: "dns"
    IFMIDns                                 = 0xe875,

    /// Identifier: "do_not_disturb"
    IFMIDoNotDisturb                        = 0xe612,

    /// Identifier: "do_not_disturb_alt"
    IFMIDoNotDisturbAlt                     = 0xe611,

    /// Identifier: "do_not_disturb_off"
    IFMIDoNotDisturbOff                     = 0xe643,

    /// Identifier: "do_not_disturb_on"
    IFMIDoNotDisturbOn                      = 0xe644,

    /// Identifier: "dock"
    IFMIDock                                = 0xe30e,

    /// Identifier: "domain"
    IFMIDomain                              = 0xe7ee,

    /// Identifier: "done"
    IFMIDone                                = 0xe876,

    /// Identifier: "done_all"
    IFMIDoneAll                             = 0xe877,

    /// Identifier: "donut_large"
    IFMIDonutLarge                          = 0xe917,

    /// Identifier: "donut_small"
    IFMIDonutSmall                          = 0xe918,

    /// Identifier: "drafts"
    IFMIDrafts                              = 0xe151,

    /// Identifier: "drag_handle"
    IFMIDragHandle                          = 0xe25d,

    /// Identifier: "drive_eta"
    IFMIDriveEta                            = 0xe613,

    /// Identifier: "dvr"
    IFMIDvr                                 = 0xe1b2,

    /// Identifier: "edit"
    IFMIEdit                                = 0xe3c9,

    /// Identifier: "edit_location"
    IFMIEditLocation                        = 0xe568,

    /// Identifier: "eject"
    IFMIEject                               = 0xe8fb,

    /// Identifier: "email"
    IFMIEmail                               = 0xe0be,

    /// Identifier: "enhanced_encryption"
    IFMIEnhancedEncryption                  = 0xe63f,

    /// Identifier: "equalizer"
    IFMIEqualizer                           = 0xe01d,

    /// Identifier: "error"
    IFMIError                               = 0xe000,

    /// Identifier: "error_outline"
    IFMIErrorOutline                        = 0xe001,

    /// Identifier: "euro_symbol"
    IFMIEuroSymbol                          = 0xe926,

    /// Identifier: "ev_station"
    IFMIEvStation                           = 0xe56d,

    /// Identifier: "event"
    IFMIEvent                               = 0xe878,

    /// Identifier: "event_available"
    IFMIEventAvailable                      = 0xe614,

    /// Identifier: "event_busy"
    IFMIEventBusy                           = 0xe615,

    /// Identifier: "event_note"
    IFMIEventNote                           = 0xe616,

    /// Identifier: "event_seat"
    IFMIEventSeat                           = 0xe903,

    /// Identifier: "exit_to_app"
    IFMIExitToApp                           = 0xe879,

    /// Identifier: "expand_less"
    IFMIExpandLess                          = 0xe5ce,

    /// Identifier: "expand_more"
    IFMIExpandMore                          = 0xe5cf,

    /// Identifier: "explicit"
    IFMIExplicit                            = 0xe01e,

    /// Identifier: "explore"
    IFMIExplore                             = 0xe87a,

    /// Identifier: "exposure"
    IFMIExposure                            = 0xe3ca,

    /// Identifier: "exposure_neg_1"
    IFMIExposureNeg1                        = 0xe3cb,

    /// Identifier: "exposure_neg_2"
    IFMIExposureNeg2                        = 0xe3cc,

    /// Identifier: "exposure_plus_1"
    IFMIExposurePlus1                       = 0xe3cd,

    /// Identifier: "exposure_plus_2"
    IFMIExposurePlus2                       = 0xe3ce,

    /// Identifier: "exposure_zero"
    IFMIExposureZero                        = 0xe3cf,

    /// Identifier: "extension"
    IFMIExtension                           = 0xe87b,

    /// Identifier: "face"
    IFMIFace                                = 0xe87c,

    /// Identifier: "fast_forward"
    IFMIFastForward                         = 0xe01f,

    /// Identifier: "fast_rewind"
    IFMIFastRewind                          = 0xe020,

    /// Identifier: "favorite"
    IFMIFavorite                            = 0xe87d,

    /// Identifier: "favorite_border"
    IFMIFavoriteBorder                      = 0xe87e,

    /// Identifier: "featured_play_list"
    IFMIFeaturedPlayList                    = 0xe06d,

    /// Identifier: "featured_video"
    IFMIFeaturedVideo                       = 0xe06e,

    /// Identifier: "feedback"
    IFMIFeedback                            = 0xe87f,

    /// Identifier: "fiber_dvr"
    IFMIFiberDvr                            = 0xe05d,

    /// Identifier: "fiber_manual_record"
    IFMIFiberManualRecord                   = 0xe061,

    /// Identifier: "fiber_new"
    IFMIFiberNew                            = 0xe05e,

    /// Identifier: "fiber_pin"
    IFMIFiberPin                            = 0xe06a,

    /// Identifier: "fiber_smart_record"
    IFMIFiberSmartRecord                    = 0xe062,

    /// Identifier: "file_download"
    IFMIFileDownload                        = 0xe2c4,

    /// Identifier: "file_upload"
    IFMIFileUpload                          = 0xe2c6,

    /// Identifier: "filter"
    IFMIFilter                              = 0xe3d3,

    /// Identifier: "filter_1"
    IFMIFilter1                             = 0xe3d0,

    /// Identifier: "filter_2"
    IFMIFilter2                             = 0xe3d1,

    /// Identifier: "filter_3"
    IFMIFilter3                             = 0xe3d2,

    /// Identifier: "filter_4"
    IFMIFilter4                             = 0xe3d4,

    /// Identifier: "filter_5"
    IFMIFilter5                             = 0xe3d5,

    /// Identifier: "filter_6"
    IFMIFilter6                             = 0xe3d6,

    /// Identifier: "filter_7"
    IFMIFilter7                             = 0xe3d7,

    /// Identifier: "filter_8"
    IFMIFilter8                             = 0xe3d8,

    /// Identifier: "filter_9"
    IFMIFilter9                             = 0xe3d9,

    /// Identifier: "filter_9_plus"
    IFMIFilter9Plus                         = 0xe3da,

    /// Identifier: "filter_b_and_w"
    IFMIFilterBAndW                         = 0xe3db,

    /// Identifier: "filter_center_focus"
    IFMIFilterCenterFocus                   = 0xe3dc,

    /// Identifier: "filter_drama"
    IFMIFilterDrama                         = 0xe3dd,

    /// Identifier: "filter_frames"
    IFMIFilterFrames                        = 0xe3de,

    /// Identifier: "filter_hdr"
    IFMIFilterHdr                           = 0xe3df,

    /// Identifier: "filter_list"
    IFMIFilterList                          = 0xe152,

    /// Identifier: "filter_none"
    IFMIFilterNone                          = 0xe3e0,

    /// Identifier: "filter_tilt_shift"
    IFMIFilterTiltShift                     = 0xe3e2,

    /// Identifier: "filter_vintage"
    IFMIFilterVintage                       = 0xe3e3,

    /// Identifier: "find_in_page"
    IFMIFindInPage                          = 0xe880,

    /// Identifier: "find_replace"
    IFMIFindReplace                         = 0xe881,

    /// Identifier: "fingerprint"
    IFMIFingerprint                         = 0xe90d,

    /// Identifier: "first_page"
    IFMIFirstPage                           = 0xe5dc,

    /// Identifier: "fitness_center"
    IFMIFitnessCenter                       = 0xeb43,

    /// Identifier: "flag"
    IFMIFlag                                = 0xe153,

    /// Identifier: "flare"
    IFMIFlare                               = 0xe3e4,

    /// Identifier: "flash_auto"
    IFMIFlashAuto                           = 0xe3e5,

    /// Identifier: "flash_off"
    IFMIFlashOff                            = 0xe3e6,

    /// Identifier: "flash_on"
    IFMIFlashOn                             = 0xe3e7,

    /// Identifier: "flight"
    IFMIFlight                              = 0xe539,

    /// Identifier: "flight_land"
    IFMIFlightLand                          = 0xe904,

    /// Identifier: "flight_takeoff"
    IFMIFlightTakeoff                       = 0xe905,

    /// Identifier: "flip"
    IFMIFlip                                = 0xe3e8,

    /// Identifier: "flip_to_back"
    IFMIFlipToBack                          = 0xe882,

    /// Identifier: "flip_to_front"
    IFMIFlipToFront                         = 0xe883,

    /// Identifier: "folder"
    IFMIFolder                              = 0xe2c7,

    /// Identifier: "folder_open"
    IFMIFolderOpen                          = 0xe2c8,

    /// Identifier: "folder_shared"
    IFMIFolderShared                        = 0xe2c9,

    /// Identifier: "folder_special"
    IFMIFolderSpecial                       = 0xe617,

    /// Identifier: "font_download"
    IFMIFontDownload                        = 0xe167,

    /// Identifier: "format_align_center"
    IFMIFormatAlignCenter                   = 0xe234,

    /// Identifier: "format_align_justify"
    IFMIFormatAlignJustify                  = 0xe235,

    /// Identifier: "format_align_left"
    IFMIFormatAlignLeft                     = 0xe236,

    /// Identifier: "format_align_right"
    IFMIFormatAlignRight                    = 0xe237,

    /// Identifier: "format_bold"
    IFMIFormatBold                          = 0xe238,

    /// Identifier: "format_clear"
    IFMIFormatClear                         = 0xe239,

    /// Identifier: "format_color_fill"
    IFMIFormatColorFill                     = 0xe23a,

    /// Identifier: "format_color_reset"
    IFMIFormatColorReset                    = 0xe23b,

    /// Identifier: "format_color_text"
    IFMIFormatColorText                     = 0xe23c,

    /// Identifier: "format_indent_decrease"
    IFMIFormatIndentDecrease                = 0xe23d,

    /// Identifier: "format_indent_increase"
    IFMIFormatIndentIncrease                = 0xe23e,

    /// Identifier: "format_italic"
    IFMIFormatItalic                        = 0xe23f,

    /// Identifier: "format_line_spacing"
    IFMIFormatLineSpacing                   = 0xe240,

    /// Identifier: "format_list_bulleted"
    IFMIFormatListBulleted                  = 0xe241,

    /// Identifier: "format_list_numbered"
    IFMIFormatListNumbered                  = 0xe242,

    /// Identifier: "format_paint"
    IFMIFormatPaint                         = 0xe243,

    /// Identifier: "format_quote"
    IFMIFormatQuote                         = 0xe244,

    /// Identifier: "format_shapes"
    IFMIFormatShapes                        = 0xe25e,

    /// Identifier: "format_size"
    IFMIFormatSize                          = 0xe245,

    /// Identifier: "format_strikethrough"
    IFMIFormatStrikethrough                 = 0xe246,

    /// Identifier: "format_textdirection_l_to_r"
    IFMIFormatTextdirectionLToR             = 0xe247,

    /// Identifier: "format_textdirection_r_to_l"
    IFMIFormatTextdirectionRToL             = 0xe248,

    /// Identifier: "format_underlined"
    IFMIFormatUnderlined                    = 0xe249,

    /// Identifier: "forum"
    IFMIForum                               = 0xe0bf,

    /// Identifier: "forward"
    IFMIForward                             = 0xe154,

    /// Identifier: "forward_10"
    IFMIForward10                           = 0xe056,

    /// Identifier: "forward_30"
    IFMIForward30                           = 0xe057,

    /// Identifier: "forward_5"
    IFMIForward5                            = 0xe058,

    /// Identifier: "free_breakfast"
    IFMIFreeBreakfast                       = 0xeb44,

    /// Identifier: "fullscreen"
    IFMIFullscreen                          = 0xe5d0,

    /// Identifier: "fullscreen_exit"
    IFMIFullscreenExit                      = 0xe5d1,

    /// Identifier: "functions"
    IFMIFunctions                           = 0xe24a,

    /// Identifier: "g_translate"
    IFMIGTranslate                          = 0xe927,

    /// Identifier: "gamepad"
    IFMIGamepad                             = 0xe30f,

    /// Identifier: "games"
    IFMIGames                               = 0xe021,

    /// Identifier: "gavel"
    IFMIGavel                               = 0xe90e,

    /// Identifier: "gesture"
    IFMIGesture                             = 0xe155,

    /// Identifier: "get_app"
    IFMIGetApp                              = 0xe884,

    /// Identifier: "gif"
    IFMIGif                                 = 0xe908,

    /// Identifier: "golf_course"
    IFMIGolfCourse                          = 0xeb45,

    /// Identifier: "gps_fixed"
    IFMIGpsFixed                            = 0xe1b3,

    /// Identifier: "gps_not_fixed"
    IFMIGpsNotFixed                         = 0xe1b4,

    /// Identifier: "gps_off"
    IFMIGpsOff                              = 0xe1b5,

    /// Identifier: "grade"
    IFMIGrade                               = 0xe885,

    /// Identifier: "gradient"
    IFMIGradient                            = 0xe3e9,

    /// Identifier: "grain"
    IFMIGrain                               = 0xe3ea,

    /// Identifier: "graphic_eq"
    IFMIGraphicEq                           = 0xe1b8,

    /// Identifier: "grid_off"
    IFMIGridOff                             = 0xe3eb,

    /// Identifier: "grid_on"
    IFMIGridOn                              = 0xe3ec,

    /// Identifier: "group"
    IFMIGroup                               = 0xe7ef,

    /// Identifier: "group_add"
    IFMIGroupAdd                            = 0xe7f0,

    /// Identifier: "group_work"
    IFMIGroupWork                           = 0xe886,

    /// Identifier: "hd"
    IFMIHd                                  = 0xe052,

    /// Identifier: "hdr_off"
    IFMIHdrOff                              = 0xe3ed,

    /// Identifier: "hdr_on"
    IFMIHdrOn                               = 0xe3ee,

    /// Identifier: "hdr_strong"
    IFMIHdrStrong                           = 0xe3f1,

    /// Identifier: "hdr_weak"
    IFMIHdrWeak                             = 0xe3f2,

    /// Identifier: "headset"
    IFMIHeadset                             = 0xe310,

    /// Identifier: "headset_mic"
    IFMIHeadsetMic                          = 0xe311,

    /// Identifier: "healing"
    IFMIHealing                             = 0xe3f3,

    /// Identifier: "hearing"
    IFMIHearing                             = 0xe023,

    /// Identifier: "help"
    IFMIHelp                                = 0xe887,

    /// Identifier: "help_outline"
    IFMIHelpOutline                         = 0xe8fd,

    /// Identifier: "high_quality"
    IFMIHighQuality                         = 0xe024,

    /// Identifier: "highlight"
    IFMIHighlight                           = 0xe25f,

    /// Identifier: "highlight_off"
    IFMIHighlightOff                        = 0xe888,

    /// Identifier: "history"
    IFMIHistory                             = 0xe889,

    /// Identifier: "home"
    IFMIHome                                = 0xe88a,

    /// Identifier: "hot_tub"
    IFMIHotTub                              = 0xeb46,

    /// Identifier: "hotel"
    IFMIHotel                               = 0xe53a,

    /// Identifier: "hourglass_empty"
    IFMIHourglassEmpty                      = 0xe88b,

    /// Identifier: "hourglass_full"
    IFMIHourglassFull                       = 0xe88c,

    /// Identifier: "http"
    IFMIHttp                                = 0xe902,

    /// Identifier: "https"
    IFMIHttps                               = 0xe88d,

    /// Identifier: "image"
    IFMIImage                               = 0xe3f4,

    /// Identifier: "image_aspect_ratio"
    IFMIImageAspectRatio                    = 0xe3f5,

    /// Identifier: "import_contacts"
    IFMIImportContacts                      = 0xe0e0,

    /// Identifier: "import_export"
    IFMIImportExport                        = 0xe0c3,

    /// Identifier: "important_devices"
    IFMIImportantDevices                    = 0xe912,

    /// Identifier: "inbox"
    IFMIInbox                               = 0xe156,

    /// Identifier: "indeterminate_check_box"
    IFMIIndeterminateCheckBox               = 0xe909,

    /// Identifier: "info"
    IFMIInfo                                = 0xe88e,

    /// Identifier: "info_outline"
    IFMIInfoOutline                         = 0xe88f,

    /// Identifier: "input"
    IFMIInput                               = 0xe890,

    /// Identifier: "insert_chart"
    IFMIInsertChart                         = 0xe24b,

    /// Identifier: "insert_comment"
    IFMIInsertComment                       = 0xe24c,

    /// Identifier: "insert_drive_file"
    IFMIInsertDriveFile                     = 0xe24d,

    /// Identifier: "insert_emoticon"
    IFMIInsertEmoticon                      = 0xe24e,

    /// Identifier: "insert_invitation"
    IFMIInsertInvitation                    = 0xe24f,

    /// Identifier: "insert_link"
    IFMIInsertLink                          = 0xe250,

    /// Identifier: "insert_photo"
    IFMIInsertPhoto                         = 0xe251,

    /// Identifier: "invert_colors"
    IFMIInvertColors                        = 0xe891,

    /// Identifier: "invert_colors_off"
    IFMIInvertColorsOff                     = 0xe0c4,

    /// Identifier: "iso"
    IFMIIso                                 = 0xe3f6,

    /// Identifier: "keyboard"
    IFMIKeyboard                            = 0xe312,

    /// Identifier: "keyboard_arrow_down"
    IFMIKeyboardArrowDown                   = 0xe313,

    /// Identifier: "keyboard_arrow_left"
    IFMIKeyboardArrowLeft                   = 0xe314,

    /// Identifier: "keyboard_arrow_right"
    IFMIKeyboardArrowRight                  = 0xe315,

    /// Identifier: "keyboard_arrow_up"
    IFMIKeyboardArrowUp                     = 0xe316,

    /// Identifier: "keyboard_backspace"
    IFMIKeyboardBackspace                   = 0xe317,

    /// Identifier: "keyboard_capslock"
    IFMIKeyboardCapslock                    = 0xe318,

    /// Identifier: "keyboard_hide"
    IFMIKeyboardHide                        = 0xe31a,

    /// Identifier: "keyboard_return"
    IFMIKeyboardReturn                      = 0xe31b,

    /// Identifier: "keyboard_tab"
    IFMIKeyboardTab                         = 0xe31c,

    /// Identifier: "keyboard_voice"
    IFMIKeyboardVoice                       = 0xe31d,

    /// Identifier: "kitchen"
    IFMIKitchen                             = 0xeb47,

    /// Identifier: "label"
    IFMILabel                               = 0xe892,

    /// Identifier: "label_outline"
    IFMILabelOutline                        = 0xe893,

    /// Identifier: "landscape"
    IFMILandscape                           = 0xe3f7,

    /// Identifier: "language"
    IFMILanguage                            = 0xe894,

    /// Identifier: "laptop"
    IFMILaptop                              = 0xe31e,

    /// Identifier: "laptop_chromebook"
    IFMILaptopChromebook                    = 0xe31f,

    /// Identifier: "laptop_mac"
    IFMILaptopMac                           = 0xe320,

    /// Identifier: "laptop_windows"
    IFMILaptopWindows                       = 0xe321,

    /// Identifier: "last_page"
    IFMILastPage                            = 0xe5dd,

    /// Identifier: "launch"
    IFMILaunch                              = 0xe895,

    /// Identifier: "layers"
    IFMILayers                              = 0xe53b,

    /// Identifier: "layers_clear"
    IFMILayersClear                         = 0xe53c,

    /// Identifier: "leak_add"
    IFMILeakAdd                             = 0xe3f8,

    /// Identifier: "leak_remove"
    IFMILeakRemove                          = 0xe3f9,

    /// Identifier: "lens"
    IFMILens                                = 0xe3fa,

    /// Identifier: "library_add"
    IFMILibraryAdd                          = 0xe02e,

    /// Identifier: "library_books"
    IFMILibraryBooks                        = 0xe02f,

    /// Identifier: "library_music"
    IFMILibraryMusic                        = 0xe030,

    /// Identifier: "lightbulb_outline"
    IFMILightbulbOutline                    = 0xe90f,

    /// Identifier: "line_style"
    IFMILineStyle                           = 0xe919,

    /// Identifier: "line_weight"
    IFMILineWeight                          = 0xe91a,

    /// Identifier: "linear_scale"
    IFMILinearScale                         = 0xe260,

    /// Identifier: "link"
    IFMILink                                = 0xe157,

    /// Identifier: "linked_camera"
    IFMILinkedCamera                        = 0xe438,

    /// Identifier: "list"
    IFMIList                                = 0xe896,

    /// Identifier: "live_help"
    IFMILiveHelp                            = 0xe0c6,

    /// Identifier: "live_tv"
    IFMILiveTv                              = 0xe639,

    /// Identifier: "local_activity"
    IFMILocalActivity                       = 0xe53f,

    /// Identifier: "local_airport"
    IFMILocalAirport                        = 0xe53d,

    /// Identifier: "local_atm"
    IFMILocalAtm                            = 0xe53e,

    /// Identifier: "local_bar"
    IFMILocalBar                            = 0xe540,

    /// Identifier: "local_cafe"
    IFMILocalCafe                           = 0xe541,

    /// Identifier: "local_car_wash"
    IFMILocalCarWash                        = 0xe542,

    /// Identifier: "local_convenience_store"
    IFMILocalConvenienceStore               = 0xe543,

    /// Identifier: "local_dining"
    IFMILocalDining                         = 0xe556,

    /// Identifier: "local_drink"
    IFMILocalDrink                          = 0xe544,

    /// Identifier: "local_florist"
    IFMILocalFlorist                        = 0xe545,

    /// Identifier: "local_gas_station"
    IFMILocalGasStation                     = 0xe546,

    /// Identifier: "local_grocery_store"
    IFMILocalGroceryStore                   = 0xe547,

    /// Identifier: "local_hospital"
    IFMILocalHospital                       = 0xe548,

    /// Identifier: "local_hotel"
    IFMILocalHotel                          = 0xe549,

    /// Identifier: "local_laundry_service"
    IFMILocalLaundryService                 = 0xe54a,

    /// Identifier: "local_library"
    IFMILocalLibrary                        = 0xe54b,

    /// Identifier: "local_mall"
    IFMILocalMall                           = 0xe54c,

    /// Identifier: "local_movies"
    IFMILocalMovies                         = 0xe54d,

    /// Identifier: "local_offer"
    IFMILocalOffer                          = 0xe54e,

    /// Identifier: "local_parking"
    IFMILocalParking                        = 0xe54f,

    /// Identifier: "local_pharmacy"
    IFMILocalPharmacy                       = 0xe550,

    /// Identifier: "local_phone"
    IFMILocalPhone                          = 0xe551,

    /// Identifier: "local_pizza"
    IFMILocalPizza                          = 0xe552,

    /// Identifier: "local_play"
    IFMILocalPlay                           = 0xe553,

    /// Identifier: "local_post_office"
    IFMILocalPostOffice                     = 0xe554,

    /// Identifier: "local_printshop"
    IFMILocalPrintshop                      = 0xe555,

    /// Identifier: "local_see"
    IFMILocalSee                            = 0xe557,

    /// Identifier: "local_shipping"
    IFMILocalShipping                       = 0xe558,

    /// Identifier: "local_taxi"
    IFMILocalTaxi                           = 0xe559,

    /// Identifier: "location_city"
    IFMILocationCity                        = 0xe7f1,

    /// Identifier: "location_disabled"
    IFMILocationDisabled                    = 0xe1b6,

    /// Identifier: "location_off"
    IFMILocationOff                         = 0xe0c7,

    /// Identifier: "location_on"
    IFMILocationOn                          = 0xe0c8,

    /// Identifier: "location_searching"
    IFMILocationSearching                   = 0xe1b7,

    /// Identifier: "lock"
    IFMILock                                = 0xe897,

    /// Identifier: "lock_open"
    IFMILockOpen                            = 0xe898,

    /// Identifier: "lock_outline"
    IFMILockOutline                         = 0xe899,

    /// Identifier: "looks"
    IFMILooks                               = 0xe3fc,

    /// Identifier: "looks_3"
    IFMILooks3                              = 0xe3fb,

    /// Identifier: "looks_4"
    IFMILooks4                              = 0xe3fd,

    /// Identifier: "looks_5"
    IFMILooks5                              = 0xe3fe,

    /// Identifier: "looks_6"
    IFMILooks6                              = 0xe3ff,

    /// Identifier: "looks_one"
    IFMILooksOne                            = 0xe400,

    /// Identifier: "looks_two"
    IFMILooksTwo                            = 0xe401,

    /// Identifier: "loop"
    IFMILoop                                = 0xe028,

    /// Identifier: "loupe"
    IFMILoupe                               = 0xe402,

    /// Identifier: "low_priority"
    IFMILowPriority                         = 0xe16d,

    /// Identifier: "loyalty"
    IFMILoyalty                             = 0xe89a,

    /// Identifier: "mail"
    IFMIMail                                = 0xe158,

    /// Identifier: "mail_outline"
    IFMIMailOutline                         = 0xe0e1,

    /// Identifier: "map"
    IFMIMap                                 = 0xe55b,

    /// Identifier: "markunread"
    IFMIMarkunread                          = 0xe159,

    /// Identifier: "markunread_mailbox"
    IFMIMarkunreadMailbox                   = 0xe89b,

    /// Identifier: "memory"
    IFMIMemory                              = 0xe322,

    /// Identifier: "menu"
    IFMIMenu                                = 0xe5d2,

    /// Identifier: "merge_type"
    IFMIMergeType                           = 0xe252,

    /// Identifier: "message"
    IFMIMessage                             = 0xe0c9,

    /// Identifier: "mic"
    IFMIMic                                 = 0xe029,

    /// Identifier: "mic_none"
    IFMIMicNone                             = 0xe02a,

    /// Identifier: "mic_off"
    IFMIMicOff                              = 0xe02b,

    /// Identifier: "mms"
    IFMIMms                                 = 0xe618,

    /// Identifier: "mode_comment"
    IFMIModeComment                         = 0xe253,

    /// Identifier: "mode_edit"
    IFMIModeEdit                            = 0xe254,

    /// Identifier: "monetization_on"
    IFMIMonetizationOn                      = 0xe263,

    /// Identifier: "money_off"
    IFMIMoneyOff                            = 0xe25c,

    /// Identifier: "monochrome_photos"
    IFMIMonochromePhotos                    = 0xe403,

    /// Identifier: "mood"
    IFMIMood                                = 0xe7f2,

    /// Identifier: "mood_bad"
    IFMIMoodBad                             = 0xe7f3,

    /// Identifier: "more"
    IFMIMore                                = 0xe619,

    /// Identifier: "more_horiz"
    IFMIMoreHoriz                           = 0xe5d3,

    /// Identifier: "more_vert"
    IFMIMoreVert                            = 0xe5d4,

    /// Identifier: "motorcycle"
    IFMIMotorcycle                          = 0xe91b,

    /// Identifier: "mouse"
    IFMIMouse                               = 0xe323,

    /// Identifier: "move_to_inbox"
    IFMIMoveToInbox                         = 0xe168,

    /// Identifier: "movie"
    IFMIMovie                               = 0xe02c,

    /// Identifier: "movie_creation"
    IFMIMovieCreation                       = 0xe404,

    /// Identifier: "movie_filter"
    IFMIMovieFilter                         = 0xe43a,

    /// Identifier: "multiline_chart"
    IFMIMultilineChart                      = 0xe6df,

    /// Identifier: "music_note"
    IFMIMusicNote                           = 0xe405,

    /// Identifier: "music_video"
    IFMIMusicVideo                          = 0xe063,

    /// Identifier: "my_location"
    IFMIMyLocation                          = 0xe55c,

    /// Identifier: "nature"
    IFMINature                              = 0xe406,

    /// Identifier: "nature_people"
    IFMINaturePeople                        = 0xe407,

    /// Identifier: "navigate_before"
    IFMINavigateBefore                      = 0xe408,

    /// Identifier: "navigate_next"
    IFMINavigateNext                        = 0xe409,

    /// Identifier: "navigation"
    IFMINavigation                          = 0xe55d,

    /// Identifier: "near_me"
    IFMINearMe                              = 0xe569,

    /// Identifier: "network_cell"
    IFMINetworkCell                         = 0xe1b9,

    /// Identifier: "network_check"
    IFMINetworkCheck                        = 0xe640,

    /// Identifier: "network_locked"
    IFMINetworkLocked                       = 0xe61a,

    /// Identifier: "network_wifi"
    IFMINetworkWifi                         = 0xe1ba,

    /// Identifier: "new_releases"
    IFMINewReleases                         = 0xe031,

    /// Identifier: "next_week"
    IFMINextWeek                            = 0xe16a,

    /// Identifier: "nfc"
    IFMINfc                                 = 0xe1bb,

    /// Identifier: "no_encryption"
    IFMINoEncryption                        = 0xe641,

    /// Identifier: "no_sim"
    IFMINoSim                               = 0xe0cc,

    /// Identifier: "not_interested"
    IFMINotInterested                       = 0xe033,

    /// Identifier: "note"
    IFMINote                                = 0xe06f,

    /// Identifier: "note_add"
    IFMINoteAdd                             = 0xe89c,

    /// Identifier: "notifications"
    IFMINotifications                       = 0xe7f4,

    /// Identifier: "notifications_active"
    IFMINotificationsActive                 = 0xe7f7,

    /// Identifier: "notifications_none"
    IFMINotificationsNone                   = 0xe7f5,

    /// Identifier: "notifications_off"
    IFMINotificationsOff                    = 0xe7f6,

    /// Identifier: "notifications_paused"
    IFMINotificationsPaused                 = 0xe7f8,

    /// Identifier: "offline_pin"
    IFMIOfflinePin                          = 0xe90a,

    /// Identifier: "ondemand_video"
    IFMIOndemandVideo                       = 0xe63a,

    /// Identifier: "opacity"
    IFMIOpacity                             = 0xe91c,

    /// Identifier: "open_in_browser"
    IFMIOpenInBrowser                       = 0xe89d,

    /// Identifier: "open_in_new"
    IFMIOpenInNew                           = 0xe89e,

    /// Identifier: "open_with"
    IFMIOpenWith                            = 0xe89f,

    /// Identifier: "pages"
    IFMIPages                               = 0xe7f9,

    /// Identifier: "pageview"
    IFMIPageview                            = 0xe8a0,

    /// Identifier: "palette"
    IFMIPalette                             = 0xe40a,

    /// Identifier: "pan_tool"
    IFMIPanTool                             = 0xe925,

    /// Identifier: "panorama"
    IFMIPanorama                            = 0xe40b,

    /// Identifier: "panorama_fish_eye"
    IFMIPanoramaFishEye                     = 0xe40c,

    /// Identifier: "panorama_horizontal"
    IFMIPanoramaHorizontal                  = 0xe40d,

    /// Identifier: "panorama_vertical"
    IFMIPanoramaVertical                    = 0xe40e,

    /// Identifier: "panorama_wide_angle"
    IFMIPanoramaWideAngle                   = 0xe40f,

    /// Identifier: "party_mode"
    IFMIPartyMode                           = 0xe7fa,

    /// Identifier: "pause"
    IFMIPause                               = 0xe034,

    /// Identifier: "pause_circle_filled"
    IFMIPauseCircleFilled                   = 0xe035,

    /// Identifier: "pause_circle_outline"
    IFMIPauseCircleOutline                  = 0xe036,

    /// Identifier: "payment"
    IFMIPayment                             = 0xe8a1,

    /// Identifier: "people"
    IFMIPeople                              = 0xe7fb,

    /// Identifier: "people_outline"
    IFMIPeopleOutline                       = 0xe7fc,

    /// Identifier: "perm_camera_mic"
    IFMIPermCameraMic                       = 0xe8a2,

    /// Identifier: "perm_contact_calendar"
    IFMIPermContactCalendar                 = 0xe8a3,

    /// Identifier: "perm_data_setting"
    IFMIPermDataSetting                     = 0xe8a4,

    /// Identifier: "perm_device_information"
    IFMIPermDeviceInformation               = 0xe8a5,

    /// Identifier: "perm_identity"
    IFMIPermIdentity                        = 0xe8a6,

    /// Identifier: "perm_media"
    IFMIPermMedia                           = 0xe8a7,

    /// Identifier: "perm_phone_msg"
    IFMIPermPhoneMsg                        = 0xe8a8,

    /// Identifier: "perm_scan_wifi"
    IFMIPermScanWifi                        = 0xe8a9,

    /// Identifier: "person"
    IFMIPerson                              = 0xe7fd,

    /// Identifier: "person_add"
    IFMIPersonAdd                           = 0xe7fe,

    /// Identifier: "person_outline"
    IFMIPersonOutline                       = 0xe7ff,

    /// Identifier: "person_pin"
    IFMIPersonPin                           = 0xe55a,

    /// Identifier: "person_pin_circle"
    IFMIPersonPinCircle                     = 0xe56a,

    /// Identifier: "personal_video"
    IFMIPersonalVideo                       = 0xe63b,

    /// Identifier: "pets"
    IFMIPets                                = 0xe91d,

    /// Identifier: "phone"
    IFMIPhone                               = 0xe0cd,

    /// Identifier: "phone_android"
    IFMIPhoneAndroid                        = 0xe324,

    /// Identifier: "phone_bluetooth_speaker"
    IFMIPhoneBluetoothSpeaker               = 0xe61b,

    /// Identifier: "phone_forwarded"
    IFMIPhoneForwarded                      = 0xe61c,

    /// Identifier: "phone_in_talk"
    IFMIPhoneInTalk                         = 0xe61d,

    /// Identifier: "phone_iphone"
    IFMIPhoneIphone                         = 0xe325,

    /// Identifier: "phone_locked"
    IFMIPhoneLocked                         = 0xe61e,

    /// Identifier: "phone_missed"
    IFMIPhoneMissed                         = 0xe61f,

    /// Identifier: "phone_paused"
    IFMIPhonePaused                         = 0xe620,

    /// Identifier: "phonelink"
    IFMIPhonelink                           = 0xe326,

    /// Identifier: "phonelink_erase"
    IFMIPhonelinkErase                      = 0xe0db,

    /// Identifier: "phonelink_lock"
    IFMIPhonelinkLock                       = 0xe0dc,

    /// Identifier: "phonelink_off"
    IFMIPhonelinkOff                        = 0xe327,

    /// Identifier: "phonelink_ring"
    IFMIPhonelinkRing                       = 0xe0dd,

    /// Identifier: "phonelink_setup"
    IFMIPhonelinkSetup                      = 0xe0de,

    /// Identifier: "photo"
    IFMIPhoto                               = 0xe410,

    /// Identifier: "photo_album"
    IFMIPhotoAlbum                          = 0xe411,

    /// Identifier: "photo_camera"
    IFMIPhotoCamera                         = 0xe412,

    /// Identifier: "photo_filter"
    IFMIPhotoFilter                         = 0xe43b,

    /// Identifier: "photo_library"
    IFMIPhotoLibrary                        = 0xe413,

    /// Identifier: "photo_size_select_actual"
    IFMIPhotoSizeSelectActual               = 0xe432,

    /// Identifier: "photo_size_select_large"
    IFMIPhotoSizeSelectLarge                = 0xe433,

    /// Identifier: "photo_size_select_small"
    IFMIPhotoSizeSelectSmall                = 0xe434,

    /// Identifier: "picture_as_pdf"
    IFMIPictureAsPdf                        = 0xe415,

    /// Identifier: "picture_in_picture"
    IFMIPictureInPicture                    = 0xe8aa,

    /// Identifier: "picture_in_picture_alt"
    IFMIPictureInPictureAlt                 = 0xe911,

    /// Identifier: "pie_chart"
    IFMIPieChart                            = 0xe6c4,

    /// Identifier: "pie_chart_outlined"
    IFMIPieChartOutlined                    = 0xe6c5,

    /// Identifier: "pin_drop"
    IFMIPinDrop                             = 0xe55e,

    /// Identifier: "place"
    IFMIPlace                               = 0xe55f,

    /// Identifier: "play_arrow"
    IFMIPlayArrow                           = 0xe037,

    /// Identifier: "play_circle_filled"
    IFMIPlayCircleFilled                    = 0xe038,

    /// Identifier: "play_circle_outline"
    IFMIPlayCircleOutline                   = 0xe039,

    /// Identifier: "play_for_work"
    IFMIPlayForWork                         = 0xe906,

    /// Identifier: "playlist_add"
    IFMIPlaylistAdd                         = 0xe03b,

    /// Identifier: "playlist_add_check"
    IFMIPlaylistAddCheck                    = 0xe065,

    /// Identifier: "playlist_play"
    IFMIPlaylistPlay                        = 0xe05f,

    /// Identifier: "plus_one"
    IFMIPlusOne                             = 0xe800,

    /// Identifier: "poll"
    IFMIPoll                                = 0xe801,

    /// Identifier: "polymer"
    IFMIPolymer                             = 0xe8ab,

    /// Identifier: "pool"
    IFMIPool                                = 0xeb48,

    /// Identifier: "portable_wifi_off"
    IFMIPortableWifiOff                     = 0xe0ce,

    /// Identifier: "portrait"
    IFMIPortrait                            = 0xe416,

    /// Identifier: "power"
    IFMIPower                               = 0xe63c,

    /// Identifier: "power_input"
    IFMIPowerInput                          = 0xe336,

    /// Identifier: "power_settings_new"
    IFMIPowerSettingsNew                    = 0xe8ac,

    /// Identifier: "pregnant_woman"
    IFMIPregnantWoman                       = 0xe91e,

    /// Identifier: "present_to_all"
    IFMIPresentToAll                        = 0xe0df,

    /// Identifier: "print"
    IFMIPrint                               = 0xe8ad,

    /// Identifier: "priority_high"
    IFMIPriorityHigh                        = 0xe645,

    /// Identifier: "public"
    IFMIPublic                              = 0xe80b,

    /// Identifier: "publish"
    IFMIPublish                             = 0xe255,

    /// Identifier: "query_builder"
    IFMIQueryBuilder                        = 0xe8ae,

    /// Identifier: "question_answer"
    IFMIQuestionAnswer                      = 0xe8af,

    /// Identifier: "queue"
    IFMIQueue                               = 0xe03c,

    /// Identifier: "queue_music"
    IFMIQueueMusic                          = 0xe03d,

    /// Identifier: "queue_play_next"
    IFMIQueuePlayNext                       = 0xe066,

    /// Identifier: "radio"
    IFMIRadio                               = 0xe03e,

    /// Identifier: "radio_button_checked"
    IFMIRadioButtonChecked                  = 0xe837,

    /// Identifier: "radio_button_unchecked"
    IFMIRadioButtonUnchecked                = 0xe836,

    /// Identifier: "rate_review"
    IFMIRateReview                          = 0xe560,

    /// Identifier: "receipt"
    IFMIReceipt                             = 0xe8b0,

    /// Identifier: "recent_actors"
    IFMIRecentActors                        = 0xe03f,

    /// Identifier: "record_voice_over"
    IFMIRecordVoiceOver                     = 0xe91f,

    /// Identifier: "redeem"
    IFMIRedeem                              = 0xe8b1,

    /// Identifier: "redo"
    IFMIRedo                                = 0xe15a,

    /// Identifier: "refresh"
    IFMIRefresh                             = 0xe5d5,

    /// Identifier: "remove"
    IFMIRemove                              = 0xe15b,

    /// Identifier: "remove_circle"
    IFMIRemoveCircle                        = 0xe15c,

    /// Identifier: "remove_circle_outline"
    IFMIRemoveCircleOutline                 = 0xe15d,

    /// Identifier: "remove_from_queue"
    IFMIRemoveFromQueue                     = 0xe067,

    /// Identifier: "remove_red_eye"
    IFMIRemoveRedEye                        = 0xe417,

    /// Identifier: "remove_shopping_cart"
    IFMIRemoveShoppingCart                  = 0xe928,

    /// Identifier: "reorder"
    IFMIReorder                             = 0xe8fe,

    /// Identifier: "repeat"
    IFMIRepeat                              = 0xe040,

    /// Identifier: "repeat_one"
    IFMIRepeatOne                           = 0xe041,

    /// Identifier: "replay"
    IFMIReplay                              = 0xe042,

    /// Identifier: "replay_10"
    IFMIReplay10                            = 0xe059,

    /// Identifier: "replay_30"
    IFMIReplay30                            = 0xe05a,

    /// Identifier: "replay_5"
    IFMIReplay5                             = 0xe05b,

    /// Identifier: "reply"
    IFMIReply                               = 0xe15e,

    /// Identifier: "reply_all"
    IFMIReplyAll                            = 0xe15f,

    /// Identifier: "report"
    IFMIReport                              = 0xe160,

    /// Identifier: "report_problem"
    IFMIReportProblem                       = 0xe8b2,

    /// Identifier: "restaurant"
    IFMIRestaurant                          = 0xe56c,

    /// Identifier: "restaurant_menu"
    IFMIRestaurantMenu                      = 0xe561,

    /// Identifier: "restore"
    IFMIRestore                             = 0xe8b3,

    /// Identifier: "restore_page"
    IFMIRestorePage                         = 0xe929,

    /// Identifier: "ring_volume"
    IFMIRingVolume                          = 0xe0d1,

    /// Identifier: "room"
    IFMIRoom                                = 0xe8b4,

    /// Identifier: "room_service"
    IFMIRoomService                         = 0xeb49,

    /// Identifier: "rotate_90_degrees_ccw"
    IFMIRotate90DegreesCcw                  = 0xe418,

    /// Identifier: "rotate_left"
    IFMIRotateLeft                          = 0xe419,

    /// Identifier: "rotate_right"
    IFMIRotateRight                         = 0xe41a,

    /// Identifier: "rounded_corner"
    IFMIRoundedCorner                       = 0xe920,

    /// Identifier: "router"
    IFMIRouter                              = 0xe328,

    /// Identifier: "rowing"
    IFMIRowing                              = 0xe921,

    /// Identifier: "rss_feed"
    IFMIRssFeed                             = 0xe0e5,

    /// Identifier: "rv_hookup"
    IFMIRvHookup                            = 0xe642,

    /// Identifier: "satellite"
    IFMISatellite                           = 0xe562,

    /// Identifier: "save"
    IFMISave                                = 0xe161,

    /// Identifier: "scanner"
    IFMIScanner                             = 0xe329,

    /// Identifier: "schedule"
    IFMISchedule                            = 0xe8b5,

    /// Identifier: "school"
    IFMISchool                              = 0xe80c,

    /// Identifier: "screen_lock_landscape"
    IFMIScreenLockLandscape                 = 0xe1be,

    /// Identifier: "screen_lock_portrait"
    IFMIScreenLockPortrait                  = 0xe1bf,

    /// Identifier: "screen_lock_rotation"
    IFMIScreenLockRotation                  = 0xe1c0,

    /// Identifier: "screen_rotation"
    IFMIScreenRotation                      = 0xe1c1,

    /// Identifier: "screen_share"
    IFMIScreenShare                         = 0xe0e2,

    /// Identifier: "sd_card"
    IFMISdCard                              = 0xe623,

    /// Identifier: "sd_storage"
    IFMISdStorage                           = 0xe1c2,

    /// Identifier: "search"
    IFMISearch                              = 0xe8b6,

    /// Identifier: "security"
    IFMISecurity                            = 0xe32a,

    /// Identifier: "select_all"
    IFMISelectAll                           = 0xe162,

    /// Identifier: "send"
    IFMISend                                = 0xe163,

    /// Identifier: "sentiment_dissatisfied"
    IFMISentimentDissatisfied               = 0xe811,

    /// Identifier: "sentiment_neutral"
    IFMISentimentNeutral                    = 0xe812,

    /// Identifier: "sentiment_satisfied"
    IFMISentimentSatisfied                  = 0xe813,

    /// Identifier: "sentiment_very_dissatisfied"
    IFMISentimentVeryDissatisfied           = 0xe814,

    /// Identifier: "sentiment_very_satisfied"
    IFMISentimentVerySatisfied              = 0xe815,

    /// Identifier: "settings"
    IFMISettings                            = 0xe8b8,

    /// Identifier: "settings_applications"
    IFMISettingsApplications                = 0xe8b9,

    /// Identifier: "settings_backup_restore"
    IFMISettingsBackupRestore               = 0xe8ba,

    /// Identifier: "settings_bluetooth"
    IFMISettingsBluetooth                   = 0xe8bb,

    /// Identifier: "settings_brightness"
    IFMISettingsBrightness                  = 0xe8bd,

    /// Identifier: "settings_cell"
    IFMISettingsCell                        = 0xe8bc,

    /// Identifier: "settings_ethernet"
    IFMISettingsEthernet                    = 0xe8be,

    /// Identifier: "settings_input_antenna"
    IFMISettingsInputAntenna                = 0xe8bf,

    /// Identifier: "settings_input_component"
    IFMISettingsInputComponent              = 0xe8c0,

    /// Identifier: "settings_input_composite"
    IFMISettingsInputComposite              = 0xe8c1,

    /// Identifier: "settings_input_hdmi"
    IFMISettingsInputHdmi                   = 0xe8c2,

    /// Identifier: "settings_input_svideo"
    IFMISettingsInputSvideo                 = 0xe8c3,

    /// Identifier: "settings_overscan"
    IFMISettingsOverscan                    = 0xe8c4,

    /// Identifier: "settings_phone"
    IFMISettingsPhone                       = 0xe8c5,

    /// Identifier: "settings_power"
    IFMISettingsPower                       = 0xe8c6,

    /// Identifier: "settings_remote"
    IFMISettingsRemote                      = 0xe8c7,

    /// Identifier: "settings_system_daydream"
    IFMISettingsSystemDaydream              = 0xe1c3,

    /// Identifier: "settings_voice"
    IFMISettingsVoice                       = 0xe8c8,

    /// Identifier: "share"
    IFMIShare                               = 0xe80d,

    /// Identifier: "shop"
    IFMIShop                                = 0xe8c9,

    /// Identifier: "shop_two"
    IFMIShopTwo                             = 0xe8ca,

    /// Identifier: "shopping_basket"
    IFMIShoppingBasket                      = 0xe8cb,

    /// Identifier: "shopping_cart"
    IFMIShoppingCart                        = 0xe8cc,

    /// Identifier: "short_text"
    IFMIShortText                           = 0xe261,

    /// Identifier: "show_chart"
    IFMIShowChart                           = 0xe6e1,

    /// Identifier: "shuffle"
    IFMIShuffle                             = 0xe043,

    /// Identifier: "signal_cellular_4_bar"
    IFMISignalCellular4Bar                  = 0xe1c8,

    /// Identifier: "signal_cellular_connected_no_internet_4_bar"
    IFMISignalCellularConnectedNoInternet4Bar = 0xe1cd,

    /// Identifier: "signal_cellular_no_sim"
    IFMISignalCellularNoSim                 = 0xe1ce,

    /// Identifier: "signal_cellular_null"
    IFMISignalCellularNull                  = 0xe1cf,

    /// Identifier: "signal_cellular_off"
    IFMISignalCellularOff                   = 0xe1d0,

    /// Identifier: "signal_wifi_4_bar"
    IFMISignalWifi4Bar                      = 0xe1d8,

    /// Identifier: "signal_wifi_4_bar_lock"
    IFMISignalWifi4BarLock                  = 0xe1d9,

    /// Identifier: "signal_wifi_off"
    IFMISignalWifiOff                       = 0xe1da,

    /// Identifier: "sim_card"
    IFMISimCard                             = 0xe32b,

    /// Identifier: "sim_card_alert"
    IFMISimCardAlert                        = 0xe624,

    /// Identifier: "skip_next"
    IFMISkipNext                            = 0xe044,

    /// Identifier: "skip_previous"
    IFMISkipPrevious                        = 0xe045,

    /// Identifier: "slideshow"
    IFMISlideshow                           = 0xe41b,

    /// Identifier: "slow_motion_video"
    IFMISlowMotionVideo                     = 0xe068,

    /// Identifier: "smartphone"
    IFMISmartphone                          = 0xe32c,

    /// Identifier: "smoke_free"
    IFMISmokeFree                           = 0xeb4a,

    /// Identifier: "smoking_rooms"
    IFMISmokingRooms                        = 0xeb4b,

    /// Identifier: "sms"
    IFMISms                                 = 0xe625,

    /// Identifier: "sms_failed"
    IFMISmsFailed                           = 0xe626,

    /// Identifier: "snooze"
    IFMISnooze                              = 0xe046,

    /// Identifier: "sort"
    IFMISort                                = 0xe164,

    /// Identifier: "sort_by_alpha"
    IFMISortByAlpha                         = 0xe053,

    /// Identifier: "spa"
    IFMISpa                                 = 0xeb4c,

    /// Identifier: "space_bar"
    IFMISpaceBar                            = 0xe256,

    /// Identifier: "speaker"
    IFMISpeaker                             = 0xe32d,

    /// Identifier: "speaker_group"
    IFMISpeakerGroup                        = 0xe32e,

    /// Identifier: "speaker_notes"
    IFMISpeakerNotes                        = 0xe8cd,

    /// Identifier: "speaker_notes_off"
    IFMISpeakerNotesOff                     = 0xe92a,

    /// Identifier: "speaker_phone"
    IFMISpeakerPhone                        = 0xe0d2,

    /// Identifier: "spellcheck"
    IFMISpellcheck                          = 0xe8ce,

    /// Identifier: "star"
    IFMIStar                                = 0xe838,

    /// Identifier: "star_border"
    IFMIStarBorder                          = 0xe83a,

    /// Identifier: "star_half"
    IFMIStarHalf                            = 0xe839,

    /// Identifier: "stars"
    IFMIStars                               = 0xe8d0,

    /// Identifier: "stay_current_landscape"
    IFMIStayCurrentLandscape                = 0xe0d3,

    /// Identifier: "stay_current_portrait"
    IFMIStayCurrentPortrait                 = 0xe0d4,

    /// Identifier: "stay_primary_landscape"
    IFMIStayPrimaryLandscape                = 0xe0d5,

    /// Identifier: "stay_primary_portrait"
    IFMIStayPrimaryPortrait                 = 0xe0d6,

    /// Identifier: "stop"
    IFMIStop                                = 0xe047,

    /// Identifier: "stop_screen_share"
    IFMIStopScreenShare                     = 0xe0e3,

    /// Identifier: "storage"
    IFMIStorage                             = 0xe1db,

    /// Identifier: "store"
    IFMIStore                               = 0xe8d1,

    /// Identifier: "store_mall_directory"
    IFMIStoreMallDirectory                  = 0xe563,

    /// Identifier: "straighten"
    IFMIStraighten                          = 0xe41c,

    /// Identifier: "streetview"
    IFMIStreetview                          = 0xe56e,

    /// Identifier: "strikethrough_s"
    IFMIStrikethroughS                      = 0xe257,

    /// Identifier: "style"
    IFMIStyle                               = 0xe41d,

    /// Identifier: "subdirectory_arrow_left"
    IFMISubdirectoryArrowLeft               = 0xe5d9,

    /// Identifier: "subdirectory_arrow_right"
    IFMISubdirectoryArrowRight              = 0xe5da,

    /// Identifier: "subject"
    IFMISubject                             = 0xe8d2,

    /// Identifier: "subscriptions"
    IFMISubscriptions                       = 0xe064,

    /// Identifier: "subtitles"
    IFMISubtitles                           = 0xe048,

    /// Identifier: "subway"
    IFMISubway                              = 0xe56f,

    /// Identifier: "supervisor_account"
    IFMISupervisorAccount                   = 0xe8d3,

    /// Identifier: "surround_sound"
    IFMISurroundSound                       = 0xe049,

    /// Identifier: "swap_calls"
    IFMISwapCalls                           = 0xe0d7,

    /// Identifier: "swap_horiz"
    IFMISwapHoriz                           = 0xe8d4,

    /// Identifier: "swap_vert"
    IFMISwapVert                            = 0xe8d5,

    /// Identifier: "swap_vertical_circle"
    IFMISwapVerticalCircle                  = 0xe8d6,

    /// Identifier: "switch_camera"
    IFMISwitchCamera                        = 0xe41e,

    /// Identifier: "switch_video"
    IFMISwitchVideo                         = 0xe41f,

    /// Identifier: "sync"
    IFMISync                                = 0xe627,

    /// Identifier: "sync_disabled"
    IFMISyncDisabled                        = 0xe628,

    /// Identifier: "sync_problem"
    IFMISyncProblem                         = 0xe629,

    /// Identifier: "system_update"
    IFMISystemUpdate                        = 0xe62a,

    /// Identifier: "system_update_alt"
    IFMISystemUpdateAlt                     = 0xe8d7,

    /// Identifier: "tab"
    IFMITab                                 = 0xe8d8,

    /// Identifier: "tab_unselected"
    IFMITabUnselected                       = 0xe8d9,

    /// Identifier: "tablet"
    IFMITablet                              = 0xe32f,

    /// Identifier: "tablet_android"
    IFMITabletAndroid                       = 0xe330,

    /// Identifier: "tablet_mac"
    IFMITabletMac                           = 0xe331,

    /// Identifier: "tag_faces"
    IFMITagFaces                            = 0xe420,

    /// Identifier: "tap_and_play"
    IFMITapAndPlay                          = 0xe62b,

    /// Identifier: "terrain"
    IFMITerrain                             = 0xe564,

    /// Identifier: "text_fields"
    IFMITextFields                          = 0xe262,

    /// Identifier: "text_format"
    IFMITextFormat                          = 0xe165,

    /// Identifier: "textsms"
    IFMITextsms                             = 0xe0d8,

    /// Identifier: "texture"
    IFMITexture                             = 0xe421,

    /// Identifier: "theaters"
    IFMITheaters                            = 0xe8da,

    /// Identifier: "thumb_down"
    IFMIThumbDown                           = 0xe8db,

    /// Identifier: "thumb_up"
    IFMIThumbUp                             = 0xe8dc,

    /// Identifier: "thumbs_up_down"
    IFMIThumbsUpDown                        = 0xe8dd,

    /// Identifier: "time_to_leave"
    IFMITimeToLeave                         = 0xe62c,

    /// Identifier: "timelapse"
    IFMITimelapse                           = 0xe422,

    /// Identifier: "timeline"
    IFMITimeline                            = 0xe922,

    /// Identifier: "timer"
    IFMITimer                               = 0xe425,

    /// Identifier: "timer_10"
    IFMITimer10                             = 0xe423,

    /// Identifier: "timer_3"
    IFMITimer3                              = 0xe424,

    /// Identifier: "timer_off"
    IFMITimerOff                            = 0xe426,

    /// Identifier: "title"
    IFMITitle                               = 0xe264,

    /// Identifier: "toc"
    IFMIToc                                 = 0xe8de,

    /// Identifier: "today"
    IFMIToday                               = 0xe8df,

    /// Identifier: "toll"
    IFMIToll                                = 0xe8e0,

    /// Identifier: "tonality"
    IFMITonality                            = 0xe427,

    /// Identifier: "touch_app"
    IFMITouchApp                            = 0xe913,

    /// Identifier: "toys"
    IFMIToys                                = 0xe332,

    /// Identifier: "track_changes"
    IFMITrackChanges                        = 0xe8e1,

    /// Identifier: "traffic"
    IFMITraffic                             = 0xe565,

    /// Identifier: "train"
    IFMITrain                               = 0xe570,

    /// Identifier: "tram"
    IFMITram                                = 0xe571,

    /// Identifier: "transfer_within_a_station"
    IFMITransferWithinAStation              = 0xe572,

    /// Identifier: "transform"
    IFMITransform                           = 0xe428,

    /// Identifier: "translate"
    IFMITranslate                           = 0xe8e2,

    /// Identifier: "trending_down"
    IFMITrendingDown                        = 0xe8e3,

    /// Identifier: "trending_flat"
    IFMITrendingFlat                        = 0xe8e4,

    /// Identifier: "trending_up"
    IFMITrendingUp                          = 0xe8e5,

    /// Identifier: "tune"
    IFMITune                                = 0xe429,

    /// Identifier: "turned_in"
    IFMITurnedIn                            = 0xe8e6,

    /// Identifier: "turned_in_not"
    IFMITurnedInNot                         = 0xe8e7,

    /// Identifier: "tv"
    IFMITv                                  = 0xe333,

    /// Identifier: "unarchive"
    IFMIUnarchive                           = 0xe169,

    /// Identifier: "undo"
    IFMIUndo                                = 0xe166,

    /// Identifier: "unfold_less"
    IFMIUnfoldLess                          = 0xe5d6,

    /// Identifier: "unfold_more"
    IFMIUnfoldMore                          = 0xe5d7,

    /// Identifier: "update"
    IFMIUpdate                              = 0xe923,

    /// Identifier: "usb"
    IFMIUsb                                 = 0xe1e0,

    /// Identifier: "verified_user"
    IFMIVerifiedUser                        = 0xe8e8,

    /// Identifier: "vertical_align_bottom"
    IFMIVerticalAlignBottom                 = 0xe258,

    /// Identifier: "vertical_align_center"
    IFMIVerticalAlignCenter                 = 0xe259,

    /// Identifier: "vertical_align_top"
    IFMIVerticalAlignTop                    = 0xe25a,

    /// Identifier: "vibration"
    IFMIVibration                           = 0xe62d,

    /// Identifier: "video_call"
    IFMIVideoCall                           = 0xe070,

    /// Identifier: "video_label"
    IFMIVideoLabel                          = 0xe071,

    /// Identifier: "video_library"
    IFMIVideoLibrary                        = 0xe04a,

    /// Identifier: "videocam"
    IFMIVideocam                            = 0xe04b,

    /// Identifier: "videocam_off"
    IFMIVideocamOff                         = 0xe04c,

    /// Identifier: "videogame_asset"
    IFMIVideogameAsset                      = 0xe338,

    /// Identifier: "view_agenda"
    IFMIViewAgenda                          = 0xe8e9,

    /// Identifier: "view_array"
    IFMIViewArray                           = 0xe8ea,

    /// Identifier: "view_carousel"
    IFMIViewCarousel                        = 0xe8eb,

    /// Identifier: "view_column"
    IFMIViewColumn                          = 0xe8ec,

    /// Identifier: "view_comfy"
    IFMIViewComfy                           = 0xe42a,

    /// Identifier: "view_compact"
    IFMIViewCompact                         = 0xe42b,

    /// Identifier: "view_day"
    IFMIViewDay                             = 0xe8ed,

    /// Identifier: "view_headline"
    IFMIViewHeadline                        = 0xe8ee,

    /// Identifier: "view_list"
    IFMIViewList                            = 0xe8ef,

    /// Identifier: "view_module"
    IFMIViewModule                          = 0xe8f0,

    /// Identifier: "view_quilt"
    IFMIViewQuilt                           = 0xe8f1,

    /// Identifier: "view_stream"
    IFMIViewStream                          = 0xe8f2,

    /// Identifier: "view_week"
    IFMIViewWeek                            = 0xe8f3,

    /// Identifier: "vignette"
    IFMIVignette                            = 0xe435,

    /// Identifier: "visibility"
    IFMIVisibility                          = 0xe8f4,

    /// Identifier: "visibility_off"
    IFMIVisibilityOff                       = 0xe8f5,

    /// Identifier: "voice_chat"
    IFMIVoiceChat                           = 0xe62e,

    /// Identifier: "voicemail"
    IFMIVoicemail                           = 0xe0d9,

    /// Identifier: "volume_down"
    IFMIVolumeDown                          = 0xe04d,

    /// Identifier: "volume_mute"
    IFMIVolumeMute                          = 0xe04e,

    /// Identifier: "volume_off"
    IFMIVolumeOff                           = 0xe04f,

    /// Identifier: "volume_up"
    IFMIVolumeUp                            = 0xe050,

    /// Identifier: "vpn_key"
    IFMIVpnKey                              = 0xe0da,

    /// Identifier: "vpn_lock"
    IFMIVpnLock                             = 0xe62f,

    /// Identifier: "wallpaper"
    IFMIWallpaper                           = 0xe1bc,

    /// Identifier: "warning"
    IFMIWarning                             = 0xe002,

    /// Identifier: "watch"
    IFMIWatch                               = 0xe334,

    /// Identifier: "watch_later"
    IFMIWatchLater                          = 0xe924,

    /// Identifier: "wb_auto"
    IFMIWbAuto                              = 0xe42c,

    /// Identifier: "wb_cloudy"
    IFMIWbCloudy                            = 0xe42d,

    /// Identifier: "wb_incandescent"
    IFMIWbIncandescent                      = 0xe42e,

    /// Identifier: "wb_iridescent"
    IFMIWbIridescent                        = 0xe436,

    /// Identifier: "wb_sunny"
    IFMIWbSunny                             = 0xe430,

    /// Identifier: "wc"
    IFMIWc                                  = 0xe63d,

    /// Identifier: "web"
    IFMIWeb                                 = 0xe051,

    /// Identifier: "web_asset"
    IFMIWebAsset                            = 0xe069,

    /// Identifier: "weekend"
    IFMIWeekend                             = 0xe16b,

    /// Identifier: "whatshot"
    IFMIWhatshot                            = 0xe80e,

    /// Identifier: "widgets"
    IFMIWidgets                             = 0xe1bd,

    /// Identifier: "wifi"
    IFMIWifi                                = 0xe63e,

    /// Identifier: "wifi_lock"
    IFMIWifiLock                            = 0xe1e1,

    /// Identifier: "wifi_tethering"
    IFMIWifiTethering                       = 0xe1e2,

    /// Identifier: "work"
    IFMIWork                                = 0xe8f9,

    /// Identifier: "wrap_text"
    IFMIWrapText                            = 0xe25b,

    /// Identifier: "youtube_searched_for"
    IFMIYoutubeSearchedFor                  = 0xe8fa,

    /// Identifier: "zoom_in"
    IFMIZoomIn                              = 0xe8ff,

    /// Identifier: "zoom_out"
    IFMIZoomOut                             = 0xe900,

    /// Identifier: "zoom_out_map"
    IFMIZoomOutMap                          = 0xe56b,

};

/**
 * Material Icons by Google, v2.2.3 https://design.google.com/icons
 */
@interface IFMaterialIcons : IFIcon
@end
