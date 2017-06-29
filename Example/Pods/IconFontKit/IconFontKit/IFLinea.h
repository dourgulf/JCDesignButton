#import "IFIcon.h"

/**
 * Linea icon types.
 */
typedef NS_ENUM(IFIconType, IFLineaType) {

    /// Identifier: "linea_basic_accelerator"
    IFLineaBasicAccelerator                    = 0xe000,

    /// Identifier: "linea_basic_alarm"
    IFLineaBasicAlarm                          = 0xe001,

    /// Identifier: "linea_basic_anchor"
    IFLineaBasicAnchor                         = 0xe002,

    /// Identifier: "linea_basic_anticlockwise"
    IFLineaBasicAnticlockwise                  = 0xe003,

    /// Identifier: "linea_basic_archive_full"
    IFLineaBasicArchiveFull                    = 0xe004,

    /// Identifier: "linea_basic_archive"
    IFLineaBasicArchive                        = 0xe005,

    /// Identifier: "linea_basic_ban"
    IFLineaBasicBan                            = 0xe006,

    /// Identifier: "linea_basic_battery_charge"
    IFLineaBasicBatteryCharge                  = 0xe007,

    /// Identifier: "linea_basic_battery_empty"
    IFLineaBasicBatteryEmpty                   = 0xe008,

    /// Identifier: "linea_basic_battery_full"
    IFLineaBasicBatteryFull                    = 0xe009,

    /// Identifier: "linea_basic_battery_half"
    IFLineaBasicBatteryHalf                    = 0xe00a,

    /// Identifier: "linea_basic_bolt"
    IFLineaBasicBolt                           = 0xe00b,

    /// Identifier: "linea_basic_book_pen"
    IFLineaBasicBookPen                        = 0xe00c,

    /// Identifier: "linea_basic_book_pencil"
    IFLineaBasicBookPencil                     = 0xe00d,

    /// Identifier: "linea_basic_book"
    IFLineaBasicBook                           = 0xe00e,

    /// Identifier: "linea_basic_bookmark"
    IFLineaBasicBookmark                       = 0xe00f,

    /// Identifier: "linea_basic_calculator"
    IFLineaBasicCalculator                     = 0xe010,

    /// Identifier: "linea_basic_calendar"
    IFLineaBasicCalendar                       = 0xe011,

    /// Identifier: "linea_basic_cards_diamonds"
    IFLineaBasicCardsDiamonds                  = 0xe012,

    /// Identifier: "linea_basic_cards_hearts"
    IFLineaBasicCardsHearts                    = 0xe013,

    /// Identifier: "linea_basic_case"
    IFLineaBasicCase                           = 0xe014,

    /// Identifier: "linea_basic_chronometer"
    IFLineaBasicChronometer                    = 0xe015,

    /// Identifier: "linea_basic_clessidre"
    IFLineaBasicClessidre                      = 0xe016,

    /// Identifier: "linea_basic_clock"
    IFLineaBasicClock                          = 0xe017,

    /// Identifier: "linea_basic_clockwise"
    IFLineaBasicClockwise                      = 0xe018,

    /// Identifier: "linea_basic_cloud"
    IFLineaBasicCloud                          = 0xe019,

    /// Identifier: "linea_basic_clubs"
    IFLineaBasicClubs                          = 0xe01a,

    /// Identifier: "linea_basic_compass"
    IFLineaBasicCompass                        = 0xe01b,

    /// Identifier: "linea_basic_cup"
    IFLineaBasicCup                            = 0xe01c,

    /// Identifier: "linea_basic_diamonds"
    IFLineaBasicDiamonds                       = 0xe01d,

    /// Identifier: "linea_basic_display"
    IFLineaBasicDisplay                        = 0xe01e,

    /// Identifier: "linea_basic_download"
    IFLineaBasicDownload                       = 0xe01f,

    /// Identifier: "linea_basic_exclamation"
    IFLineaBasicExclamation                    = 0xe020,

    /// Identifier: "linea_basic_eye_closed"
    IFLineaBasicEyeClosed                      = 0xe021,

    /// Identifier: "linea_basic_eye"
    IFLineaBasicEye                            = 0xe022,

    /// Identifier: "linea_basic_female"
    IFLineaBasicFemale                         = 0xe023,

    /// Identifier: "linea_basic_flag1"
    IFLineaBasicFlag1                          = 0xe024,

    /// Identifier: "linea_basic_flag2"
    IFLineaBasicFlag2                          = 0xe025,

    /// Identifier: "linea_basic_floppydisk"
    IFLineaBasicFloppydisk                     = 0xe026,

    /// Identifier: "linea_basic_folder_multiple"
    IFLineaBasicFolderMultiple                 = 0xe027,

    /// Identifier: "linea_basic_folder"
    IFLineaBasicFolder                         = 0xe028,

    /// Identifier: "linea_basic_gear"
    IFLineaBasicGear                           = 0xe029,

    /// Identifier: "linea_basic_geolocalize-01"
    IFLineaBasicGeolocalize01                  = 0xe02a,

    /// Identifier: "linea_basic_geolocalize-05"
    IFLineaBasicGeolocalize05                  = 0xe02b,

    /// Identifier: "linea_basic_globe"
    IFLineaBasicGlobe                          = 0xe02c,

    /// Identifier: "linea_basic_gunsight"
    IFLineaBasicGunsight                       = 0xe02d,

    /// Identifier: "linea_basic_hammer"
    IFLineaBasicHammer                         = 0xe02e,

    /// Identifier: "linea_basic_headset"
    IFLineaBasicHeadset                        = 0xe02f,

    /// Identifier: "linea_basic_heart_broken"
    IFLineaBasicHeartBroken                    = 0xe030,

    /// Identifier: "linea_basic_heart"
    IFLineaBasicHeart                          = 0xe031,

    /// Identifier: "linea_basic_helm"
    IFLineaBasicHelm                           = 0xe032,

    /// Identifier: "linea_basic_home"
    IFLineaBasicHome                           = 0xe033,

    /// Identifier: "linea_basic_info"
    IFLineaBasicInfo                           = 0xe034,

    /// Identifier: "linea_basic_ipod"
    IFLineaBasicIpod                           = 0xe035,

    /// Identifier: "linea_basic_joypad"
    IFLineaBasicJoypad                         = 0xe036,

    /// Identifier: "linea_basic_key"
    IFLineaBasicKey                            = 0xe037,

    /// Identifier: "linea_basic_keyboard"
    IFLineaBasicKeyboard                       = 0xe038,

    /// Identifier: "linea_basic_laptop"
    IFLineaBasicLaptop                         = 0xe039,

    /// Identifier: "linea_basic_life_buoy"
    IFLineaBasicLifeBuoy                       = 0xe03a,

    /// Identifier: "linea_basic_lightbulb"
    IFLineaBasicLightbulb                      = 0xe03b,

    /// Identifier: "linea_basic_link"
    IFLineaBasicLink                           = 0xe03c,

    /// Identifier: "linea_basic_lock_open"
    IFLineaBasicLockOpen                       = 0xe03d,

    /// Identifier: "linea_basic_lock"
    IFLineaBasicLock                           = 0xe03e,

    /// Identifier: "linea_basic_magic_mouse"
    IFLineaBasicMagicMouse                     = 0xe03f,

    /// Identifier: "linea_basic_magnifier_minus"
    IFLineaBasicMagnifierMinus                 = 0xe040,

    /// Identifier: "linea_basic_magnifier_plus"
    IFLineaBasicMagnifierPlus                  = 0xe041,

    /// Identifier: "linea_basic_magnifier"
    IFLineaBasicMagnifier                      = 0xe042,

    /// Identifier: "linea_basic_mail_multiple"
    IFLineaBasicMailMultiple                   = 0xe043,

    /// Identifier: "linea_basic_mail_open_text"
    IFLineaBasicMailOpenText                   = 0xe044,

    /// Identifier: "linea_basic_mail_open"
    IFLineaBasicMailOpen                       = 0xe045,

    /// Identifier: "linea_basic_mail"
    IFLineaBasicMail                           = 0xe046,

    /// Identifier: "linea_basic_male"
    IFLineaBasicMale                           = 0xe047,

    /// Identifier: "linea_basic_map"
    IFLineaBasicMap                            = 0xe048,

    /// Identifier: "linea_basic_message_multiple"
    IFLineaBasicMessageMultiple                = 0xe049,

    /// Identifier: "linea_basic_message_txt"
    IFLineaBasicMessageTxt                     = 0xe04a,

    /// Identifier: "linea_basic_message"
    IFLineaBasicMessage                        = 0xe04b,

    /// Identifier: "linea_basic_mixer2"
    IFLineaBasicMixer2                         = 0xe04c,

    /// Identifier: "linea_basic_mouse"
    IFLineaBasicMouse                          = 0xe04d,

    /// Identifier: "linea_basic_notebook_pen"
    IFLineaBasicNotebookPen                    = 0xe04e,

    /// Identifier: "linea_basic_notebook_pencil"
    IFLineaBasicNotebookPencil                 = 0xe04f,

    /// Identifier: "linea_basic_notebook"
    IFLineaBasicNotebook                       = 0xe050,

    /// Identifier: "linea_basic_paperplane"
    IFLineaBasicPaperplane                     = 0xe051,

    /// Identifier: "linea_basic_pencil_ruler_pen"
    IFLineaBasicPencilRulerPen                 = 0xe052,

    /// Identifier: "linea_basic_pencil_ruler"
    IFLineaBasicPencilRuler                    = 0xe053,

    /// Identifier: "linea_basic_photo"
    IFLineaBasicPhoto                          = 0xe054,

    /// Identifier: "linea_basic_picture_multiple"
    IFLineaBasicPictureMultiple                = 0xe055,

    /// Identifier: "linea_basic_picture"
    IFLineaBasicPicture                        = 0xe056,

    /// Identifier: "linea_basic_pin1"
    IFLineaBasicPin1                           = 0xe057,

    /// Identifier: "linea_basic_pin2"
    IFLineaBasicPin2                           = 0xe058,

    /// Identifier: "linea_basic_postcard_multiple"
    IFLineaBasicPostcardMultiple               = 0xe059,

    /// Identifier: "linea_basic_postcard"
    IFLineaBasicPostcard                       = 0xe05a,

    /// Identifier: "linea_basic_printer"
    IFLineaBasicPrinter                        = 0xe05b,

    /// Identifier: "linea_basic_question"
    IFLineaBasicQuestion                       = 0xe05c,

    /// Identifier: "linea_basic_rss"
    IFLineaBasicRss                            = 0xe05d,

    /// Identifier: "linea_basic_server_cloud"
    IFLineaBasicServerCloud                    = 0xe05e,

    /// Identifier: "linea_basic_server_download"
    IFLineaBasicServerDownload                 = 0xe05f,

    /// Identifier: "linea_basic_server_upload"
    IFLineaBasicServerUpload                   = 0xe060,

    /// Identifier: "linea_basic_server"
    IFLineaBasicServer                         = 0xe061,

    /// Identifier: "linea_basic_server2"
    IFLineaBasicServer2                        = 0xe062,

    /// Identifier: "linea_basic_settings"
    IFLineaBasicSettings                       = 0xe063,

    /// Identifier: "linea_basic_share"
    IFLineaBasicShare                          = 0xe064,

    /// Identifier: "linea_basic_sheet_multiple"
    IFLineaBasicSheetMultiple                  = 0xe065,

    /// Identifier: "linea_basic_sheet_pen"
    IFLineaBasicSheetPen                       = 0xe066,

    /// Identifier: "linea_basic_sheet_pencil"
    IFLineaBasicSheetPencil                    = 0xe067,

    /// Identifier: "linea_basic_sheet_txt"
    IFLineaBasicSheetTxt                       = 0xe068,

    /// Identifier: "linea_basic_sheet"
    IFLineaBasicSheet                          = 0xe069,

    /// Identifier: "linea_basic_signs"
    IFLineaBasicSigns                          = 0xe06a,

    /// Identifier: "linea_basic_smartphone"
    IFLineaBasicSmartphone                     = 0xe06b,

    /// Identifier: "linea_basic_spades"
    IFLineaBasicSpades                         = 0xe06c,

    /// Identifier: "linea_basic_spread_bookmark"
    IFLineaBasicSpreadBookmark                 = 0xe06d,

    /// Identifier: "linea_basic_spread_text_bookmark"
    IFLineaBasicSpreadTextBookmark             = 0xe06e,

    /// Identifier: "linea_basic_spread_text"
    IFLineaBasicSpreadText                     = 0xe06f,

    /// Identifier: "linea_basic_spread"
    IFLineaBasicSpread                         = 0xe070,

    /// Identifier: "linea_basic_star"
    IFLineaBasicStar                           = 0xe071,

    /// Identifier: "linea_basic_tablet"
    IFLineaBasicTablet                         = 0xe072,

    /// Identifier: "linea_basic_target"
    IFLineaBasicTarget                         = 0xe073,

    /// Identifier: "linea_basic_todo_pen"
    IFLineaBasicTodoPen                        = 0xe074,

    /// Identifier: "linea_basic_todo_pencil"
    IFLineaBasicTodoPencil                     = 0xe075,

    /// Identifier: "linea_basic_todo_txt"
    IFLineaBasicTodoTxt                        = 0xe076,

    /// Identifier: "linea_basic_todo"
    IFLineaBasicTodo                           = 0xe077,

    /// Identifier: "linea_basic_todolist_pen"
    IFLineaBasicTodolistPen                    = 0xe078,

    /// Identifier: "linea_basic_todolist_pencil"
    IFLineaBasicTodolistPencil                 = 0xe079,

    /// Identifier: "linea_basic_trashcan_full"
    IFLineaBasicTrashcanFull                   = 0xe07a,

    /// Identifier: "linea_basic_trashcan_refresh"
    IFLineaBasicTrashcanRefresh                = 0xe07b,

    /// Identifier: "linea_basic_trashcan_remove"
    IFLineaBasicTrashcanRemove                 = 0xe07c,

    /// Identifier: "linea_basic_trashcan"
    IFLineaBasicTrashcan                       = 0xe07d,

    /// Identifier: "linea_basic_upload"
    IFLineaBasicUpload                         = 0xe07e,

    /// Identifier: "linea_basic_usb"
    IFLineaBasicUsb                            = 0xe07f,

    /// Identifier: "linea_basic_video"
    IFLineaBasicVideo                          = 0xe080,

    /// Identifier: "linea_basic_watch"
    IFLineaBasicWatch                          = 0xe081,

    /// Identifier: "linea_basic_webpage_img_txt"
    IFLineaBasicWebpageImgTxt                  = 0xe082,

    /// Identifier: "linea_basic_webpage_multiple"
    IFLineaBasicWebpageMultiple                = 0xe083,

    /// Identifier: "linea_basic_webpage_txt"
    IFLineaBasicWebpageTxt                     = 0xe084,

    /// Identifier: "linea_basic_webpage"
    IFLineaBasicWebpage                        = 0xe085,

    /// Identifier: "linea_basic_world"
    IFLineaBasicWorld                          = 0xe086,

    /// Identifier: "linea_basic_elaboration_bookmark_checck"
    IFLineaBasicElaborationBookmarkChecck      = 0xe987,

    /// Identifier: "linea_basic_elaboration_bookmark_minus"
    IFLineaBasicElaborationBookmarkMinus       = 0xe988,

    /// Identifier: "linea_basic_elaboration_bookmark_plus"
    IFLineaBasicElaborationBookmarkPlus        = 0xe989,

    /// Identifier: "linea_basic_elaboration_bookmark_remove"
    IFLineaBasicElaborationBookmarkRemove      = 0xe98a,

    /// Identifier: "linea_basic_elaboration_briefcase_check"
    IFLineaBasicElaborationBriefcaseCheck      = 0xe98b,

    /// Identifier: "linea_basic_elaboration_briefcase_download"
    IFLineaBasicElaborationBriefcaseDownload   = 0xe98c,

    /// Identifier: "linea_basic_elaboration_briefcase_flagged"
    IFLineaBasicElaborationBriefcaseFlagged    = 0xe98d,

    /// Identifier: "linea_basic_elaboration_briefcase_minus"
    IFLineaBasicElaborationBriefcaseMinus      = 0xe98e,

    /// Identifier: "linea_basic_elaboration_briefcase_plus"
    IFLineaBasicElaborationBriefcasePlus       = 0xe98f,

    /// Identifier: "linea_basic_elaboration_briefcase_refresh"
    IFLineaBasicElaborationBriefcaseRefresh    = 0xe990,

    /// Identifier: "linea_basic_elaboration_briefcase_remove"
    IFLineaBasicElaborationBriefcaseRemove     = 0xe991,

    /// Identifier: "linea_basic_elaboration_briefcase_search"
    IFLineaBasicElaborationBriefcaseSearch     = 0xe992,

    /// Identifier: "linea_basic_elaboration_briefcase_star"
    IFLineaBasicElaborationBriefcaseStar       = 0xe993,

    /// Identifier: "linea_basic_elaboration_briefcase_upload"
    IFLineaBasicElaborationBriefcaseUpload     = 0xe994,

    /// Identifier: "linea_basic_elaboration_browser_check"
    IFLineaBasicElaborationBrowserCheck        = 0xe995,

    /// Identifier: "linea_basic_elaboration_browser_download"
    IFLineaBasicElaborationBrowserDownload     = 0xe996,

    /// Identifier: "linea_basic_elaboration_browser_minus"
    IFLineaBasicElaborationBrowserMinus        = 0xe997,

    /// Identifier: "linea_basic_elaboration_browser_plus"
    IFLineaBasicElaborationBrowserPlus         = 0xe998,

    /// Identifier: "linea_basic_elaboration_browser_refresh"
    IFLineaBasicElaborationBrowserRefresh      = 0xe999,

    /// Identifier: "linea_basic_elaboration_browser_remove"
    IFLineaBasicElaborationBrowserRemove       = 0xe99a,

    /// Identifier: "linea_basic_elaboration_browser_search"
    IFLineaBasicElaborationBrowserSearch       = 0xe99b,

    /// Identifier: "linea_basic_elaboration_browser_star"
    IFLineaBasicElaborationBrowserStar         = 0xe99c,

    /// Identifier: "linea_basic_elaboration_browser_upload"
    IFLineaBasicElaborationBrowserUpload       = 0xe99d,

    /// Identifier: "linea_basic_elaboration_calendar_check"
    IFLineaBasicElaborationCalendarCheck       = 0xe99e,

    /// Identifier: "linea_basic_elaboration_calendar_cloud"
    IFLineaBasicElaborationCalendarCloud       = 0xe99f,

    /// Identifier: "linea_basic_elaboration_calendar_download"
    IFLineaBasicElaborationCalendarDownload    = 0xe9a0,

    /// Identifier: "linea_basic_elaboration_calendar_empty"
    IFLineaBasicElaborationCalendarEmpty       = 0xe9a1,

    /// Identifier: "linea_basic_elaboration_calendar_flagged"
    IFLineaBasicElaborationCalendarFlagged     = 0xe9a2,

    /// Identifier: "linea_basic_elaboration_calendar_heart"
    IFLineaBasicElaborationCalendarHeart       = 0xe9a3,

    /// Identifier: "linea_basic_elaboration_calendar_minus"
    IFLineaBasicElaborationCalendarMinus       = 0xe9a4,

    /// Identifier: "linea_basic_elaboration_calendar_next"
    IFLineaBasicElaborationCalendarNext        = 0xe9a5,

    /// Identifier: "linea_basic_elaboration_calendar_noaccess"
    IFLineaBasicElaborationCalendarNoaccess    = 0xe9a6,

    /// Identifier: "linea_basic_elaboration_calendar_pencil"
    IFLineaBasicElaborationCalendarPencil      = 0xe9a7,

    /// Identifier: "linea_basic_elaboration_calendar_plus"
    IFLineaBasicElaborationCalendarPlus        = 0xe9a8,

    /// Identifier: "linea_basic_elaboration_calendar_previous"
    IFLineaBasicElaborationCalendarPrevious    = 0xe9a9,

    /// Identifier: "linea_basic_elaboration_calendar_refresh"
    IFLineaBasicElaborationCalendarRefresh     = 0xe9aa,

    /// Identifier: "linea_basic_elaboration_calendar_remove"
    IFLineaBasicElaborationCalendarRemove      = 0xe9ab,

    /// Identifier: "linea_basic_elaboration_calendar_search"
    IFLineaBasicElaborationCalendarSearch      = 0xe9ac,

    /// Identifier: "linea_basic_elaboration_calendar_star"
    IFLineaBasicElaborationCalendarStar        = 0xe9ad,

    /// Identifier: "linea_basic_elaboration_calendar_upload"
    IFLineaBasicElaborationCalendarUpload      = 0xe9ae,

    /// Identifier: "linea_basic_elaboration_cloud_check"
    IFLineaBasicElaborationCloudCheck          = 0xe9af,

    /// Identifier: "linea_basic_elaboration_cloud_download"
    IFLineaBasicElaborationCloudDownload       = 0xe9b0,

    /// Identifier: "linea_basic_elaboration_cloud_minus"
    IFLineaBasicElaborationCloudMinus          = 0xe9b1,

    /// Identifier: "linea_basic_elaboration_cloud_noaccess"
    IFLineaBasicElaborationCloudNoaccess       = 0xe9b2,

    /// Identifier: "linea_basic_elaboration_cloud_plus"
    IFLineaBasicElaborationCloudPlus           = 0xe9b3,

    /// Identifier: "linea_basic_elaboration_cloud_refresh"
    IFLineaBasicElaborationCloudRefresh        = 0xe9b4,

    /// Identifier: "linea_basic_elaboration_cloud_remove"
    IFLineaBasicElaborationCloudRemove         = 0xe9b5,

    /// Identifier: "linea_basic_elaboration_cloud_search"
    IFLineaBasicElaborationCloudSearch         = 0xe9b6,

    /// Identifier: "linea_basic_elaboration_cloud_upload"
    IFLineaBasicElaborationCloudUpload         = 0xe9b7,

    /// Identifier: "linea_basic_elaboration_document_check"
    IFLineaBasicElaborationDocumentCheck       = 0xe9b8,

    /// Identifier: "linea_basic_elaboration_document_cloud"
    IFLineaBasicElaborationDocumentCloud       = 0xe9b9,

    /// Identifier: "linea_basic_elaboration_document_download"
    IFLineaBasicElaborationDocumentDownload    = 0xe9ba,

    /// Identifier: "linea_basic_elaboration_document_flagged"
    IFLineaBasicElaborationDocumentFlagged     = 0xe9bb,

    /// Identifier: "linea_basic_elaboration_document_graph"
    IFLineaBasicElaborationDocumentGraph       = 0xe9bc,

    /// Identifier: "linea_basic_elaboration_document_heart"
    IFLineaBasicElaborationDocumentHeart       = 0xe9bd,

    /// Identifier: "linea_basic_elaboration_document_minus"
    IFLineaBasicElaborationDocumentMinus       = 0xe9be,

    /// Identifier: "linea_basic_elaboration_document_next"
    IFLineaBasicElaborationDocumentNext        = 0xe9bf,

    /// Identifier: "linea_basic_elaboration_document_noaccess"
    IFLineaBasicElaborationDocumentNoaccess    = 0xe9c0,

    /// Identifier: "linea_basic_elaboration_document_note"
    IFLineaBasicElaborationDocumentNote        = 0xe9c1,

    /// Identifier: "linea_basic_elaboration_document_pencil"
    IFLineaBasicElaborationDocumentPencil      = 0xe9c2,

    /// Identifier: "linea_basic_elaboration_document_picture"
    IFLineaBasicElaborationDocumentPicture     = 0xe9c3,

    /// Identifier: "linea_basic_elaboration_document_plus"
    IFLineaBasicElaborationDocumentPlus        = 0xe9c4,

    /// Identifier: "linea_basic_elaboration_document_previous"
    IFLineaBasicElaborationDocumentPrevious    = 0xe9c5,

    /// Identifier: "linea_basic_elaboration_document_refresh"
    IFLineaBasicElaborationDocumentRefresh     = 0xe9c6,

    /// Identifier: "linea_basic_elaboration_document_remove"
    IFLineaBasicElaborationDocumentRemove      = 0xe9c7,

    /// Identifier: "linea_basic_elaboration_document_search"
    IFLineaBasicElaborationDocumentSearch      = 0xe9c8,

    /// Identifier: "linea_basic_elaboration_document_star"
    IFLineaBasicElaborationDocumentStar        = 0xe9c9,

    /// Identifier: "linea_basic_elaboration_document_upload"
    IFLineaBasicElaborationDocumentUpload      = 0xe9ca,

    /// Identifier: "linea_basic_elaboration_folder_check"
    IFLineaBasicElaborationFolderCheck         = 0xe9cb,

    /// Identifier: "linea_basic_elaboration_folder_cloud"
    IFLineaBasicElaborationFolderCloud         = 0xe9cc,

    /// Identifier: "linea_basic_elaboration_folder_document"
    IFLineaBasicElaborationFolderDocument      = 0xe9cd,

    /// Identifier: "linea_basic_elaboration_folder_download"
    IFLineaBasicElaborationFolderDownload      = 0xe9ce,

    /// Identifier: "linea_basic_elaboration_folder_flagged"
    IFLineaBasicElaborationFolderFlagged       = 0xe9cf,

    /// Identifier: "linea_basic_elaboration_folder_graph"
    IFLineaBasicElaborationFolderGraph         = 0xe9d0,

    /// Identifier: "linea_basic_elaboration_folder_heart"
    IFLineaBasicElaborationFolderHeart         = 0xe9d1,

    /// Identifier: "linea_basic_elaboration_folder_minus"
    IFLineaBasicElaborationFolderMinus         = 0xe9d2,

    /// Identifier: "linea_basic_elaboration_folder_next"
    IFLineaBasicElaborationFolderNext          = 0xe9d3,

    /// Identifier: "linea_basic_elaboration_folder_noaccess"
    IFLineaBasicElaborationFolderNoaccess      = 0xe9d4,

    /// Identifier: "linea_basic_elaboration_folder_note"
    IFLineaBasicElaborationFolderNote          = 0xe9d5,

    /// Identifier: "linea_basic_elaboration_folder_pencil"
    IFLineaBasicElaborationFolderPencil        = 0xe9d6,

    /// Identifier: "linea_basic_elaboration_folder_picture"
    IFLineaBasicElaborationFolderPicture       = 0xe9d7,

    /// Identifier: "linea_basic_elaboration_folder_plus"
    IFLineaBasicElaborationFolderPlus          = 0xe9d8,

    /// Identifier: "linea_basic_elaboration_folder_previous"
    IFLineaBasicElaborationFolderPrevious      = 0xe9d9,

    /// Identifier: "linea_basic_elaboration_folder_refresh"
    IFLineaBasicElaborationFolderRefresh       = 0xe9da,

    /// Identifier: "linea_basic_elaboration_folder_remove"
    IFLineaBasicElaborationFolderRemove        = 0xe9db,

    /// Identifier: "linea_basic_elaboration_folder_search"
    IFLineaBasicElaborationFolderSearch        = 0xe9dc,

    /// Identifier: "linea_basic_elaboration_folder_star"
    IFLineaBasicElaborationFolderStar          = 0xe9dd,

    /// Identifier: "linea_basic_elaboration_folder_upload"
    IFLineaBasicElaborationFolderUpload        = 0xe9de,

    /// Identifier: "linea_basic_elaboration_mail_check"
    IFLineaBasicElaborationMailCheck           = 0xe9df,

    /// Identifier: "linea_basic_elaboration_mail_cloud"
    IFLineaBasicElaborationMailCloud           = 0xe9e0,

    /// Identifier: "linea_basic_elaboration_mail_document"
    IFLineaBasicElaborationMailDocument        = 0xe9e1,

    /// Identifier: "linea_basic_elaboration_mail_download"
    IFLineaBasicElaborationMailDownload        = 0xe9e2,

    /// Identifier: "linea_basic_elaboration_mail_flagged"
    IFLineaBasicElaborationMailFlagged         = 0xe9e3,

    /// Identifier: "linea_basic_elaboration_mail_heart"
    IFLineaBasicElaborationMailHeart           = 0xe9e4,

    /// Identifier: "linea_basic_elaboration_mail_next"
    IFLineaBasicElaborationMailNext            = 0xe9e5,

    /// Identifier: "linea_basic_elaboration_mail_noaccess"
    IFLineaBasicElaborationMailNoaccess        = 0xe9e6,

    /// Identifier: "linea_basic_elaboration_mail_note"
    IFLineaBasicElaborationMailNote            = 0xe9e7,

    /// Identifier: "linea_basic_elaboration_mail_pencil"
    IFLineaBasicElaborationMailPencil          = 0xe9e8,

    /// Identifier: "linea_basic_elaboration_mail_picture"
    IFLineaBasicElaborationMailPicture         = 0xe9e9,

    /// Identifier: "linea_basic_elaboration_mail_previous"
    IFLineaBasicElaborationMailPrevious        = 0xe9ea,

    /// Identifier: "linea_basic_elaboration_mail_refresh"
    IFLineaBasicElaborationMailRefresh         = 0xe9eb,

    /// Identifier: "linea_basic_elaboration_mail_remove"
    IFLineaBasicElaborationMailRemove          = 0xe9ec,

    /// Identifier: "linea_basic_elaboration_mail_search"
    IFLineaBasicElaborationMailSearch          = 0xe9ed,

    /// Identifier: "linea_basic_elaboration_mail_star"
    IFLineaBasicElaborationMailStar            = 0xe9ee,

    /// Identifier: "linea_basic_elaboration_mail_upload"
    IFLineaBasicElaborationMailUpload          = 0xe9ef,

    /// Identifier: "linea_basic_elaboration_message_check"
    IFLineaBasicElaborationMessageCheck        = 0xe9f0,

    /// Identifier: "linea_basic_elaboration_message_dots"
    IFLineaBasicElaborationMessageDots         = 0xe9f1,

    /// Identifier: "linea_basic_elaboration_message_happy"
    IFLineaBasicElaborationMessageHappy        = 0xe9f2,

    /// Identifier: "linea_basic_elaboration_message_heart"
    IFLineaBasicElaborationMessageHeart        = 0xe9f3,

    /// Identifier: "linea_basic_elaboration_message_minus"
    IFLineaBasicElaborationMessageMinus        = 0xe9f4,

    /// Identifier: "linea_basic_elaboration_message_note"
    IFLineaBasicElaborationMessageNote         = 0xe9f5,

    /// Identifier: "linea_basic_elaboration_message_plus"
    IFLineaBasicElaborationMessagePlus         = 0xe9f6,

    /// Identifier: "linea_basic_elaboration_message_refresh"
    IFLineaBasicElaborationMessageRefresh      = 0xe9f7,

    /// Identifier: "linea_basic_elaboration_message_remove"
    IFLineaBasicElaborationMessageRemove       = 0xe9f8,

    /// Identifier: "linea_basic_elaboration_message_sad"
    IFLineaBasicElaborationMessageSad          = 0xe9f9,

    /// Identifier: "linea_basic_elaboration_smartphone_cloud"
    IFLineaBasicElaborationSmartphoneCloud     = 0xe9fa,

    /// Identifier: "linea_basic_elaboration_smartphone_heart"
    IFLineaBasicElaborationSmartphoneHeart     = 0xe9fb,

    /// Identifier: "linea_basic_elaboration_smartphone_noaccess"
    IFLineaBasicElaborationSmartphoneNoaccess  = 0xe9fc,

    /// Identifier: "linea_basic_elaboration_smartphone_note"
    IFLineaBasicElaborationSmartphoneNote      = 0xe9fd,

    /// Identifier: "linea_basic_elaboration_smartphone_pencil"
    IFLineaBasicElaborationSmartphonePencil    = 0xe9fe,

    /// Identifier: "linea_basic_elaboration_smartphone_picture"
    IFLineaBasicElaborationSmartphonePicture   = 0xe9ff,

    /// Identifier: "linea_basic_elaboration_smartphone_refresh"
    IFLineaBasicElaborationSmartphoneRefresh   = 0xea00,

    /// Identifier: "linea_basic_elaboration_smartphone_search"
    IFLineaBasicElaborationSmartphoneSearch    = 0xea01,

    /// Identifier: "linea_basic_elaboration_tablet_cloud"
    IFLineaBasicElaborationTabletCloud         = 0xea02,

    /// Identifier: "linea_basic_elaboration_tablet_heart"
    IFLineaBasicElaborationTabletHeart         = 0xea03,

    /// Identifier: "linea_basic_elaboration_tablet_noaccess"
    IFLineaBasicElaborationTabletNoaccess      = 0xea04,

    /// Identifier: "linea_basic_elaboration_tablet_note"
    IFLineaBasicElaborationTabletNote          = 0xea05,

    /// Identifier: "linea_basic_elaboration_tablet_pencil"
    IFLineaBasicElaborationTabletPencil        = 0xea06,

    /// Identifier: "linea_basic_elaboration_tablet_picture"
    IFLineaBasicElaborationTabletPicture       = 0xea07,

    /// Identifier: "linea_basic_elaboration_tablet_refresh"
    IFLineaBasicElaborationTabletRefresh       = 0xea08,

    /// Identifier: "linea_basic_elaboration_tablet_search"
    IFLineaBasicElaborationTabletSearch        = 0xea09,

    /// Identifier: "linea_basic_elaboration_todolist_2"
    IFLineaBasicElaborationTodolist2           = 0xea0a,

    /// Identifier: "linea_basic_elaboration_todolist_check"
    IFLineaBasicElaborationTodolistCheck       = 0xea0b,

    /// Identifier: "linea_basic_elaboration_todolist_cloud"
    IFLineaBasicElaborationTodolistCloud       = 0xea0c,

    /// Identifier: "linea_basic_elaboration_todolist_download"
    IFLineaBasicElaborationTodolistDownload    = 0xea0d,

    /// Identifier: "linea_basic_elaboration_todolist_flagged"
    IFLineaBasicElaborationTodolistFlagged     = 0xea0e,

    /// Identifier: "linea_basic_elaboration_todolist_minus"
    IFLineaBasicElaborationTodolistMinus       = 0xea0f,

    /// Identifier: "linea_basic_elaboration_todolist_noaccess"
    IFLineaBasicElaborationTodolistNoaccess    = 0xea10,

    /// Identifier: "linea_basic_elaboration_todolist_pencil"
    IFLineaBasicElaborationTodolistPencil      = 0xea11,

    /// Identifier: "linea_basic_elaboration_todolist_plus"
    IFLineaBasicElaborationTodolistPlus        = 0xea12,

    /// Identifier: "linea_basic_elaboration_todolist_refresh"
    IFLineaBasicElaborationTodolistRefresh     = 0xea13,

    /// Identifier: "linea_basic_elaboration_todolist_remove"
    IFLineaBasicElaborationTodolistRemove      = 0xea14,

    /// Identifier: "linea_basic_elaboration_todolist_search"
    IFLineaBasicElaborationTodolistSearch      = 0xea15,

    /// Identifier: "linea_basic_elaboration_todolist_star"
    IFLineaBasicElaborationTodolistStar        = 0xea16,

    /// Identifier: "linea_basic_elaboration_todolist_upload"
    IFLineaBasicElaborationTodolistUpload      = 0xea17,

    /// Identifier: "linea_arrows_anticlockwise_dashed"
    IFLineaArrowsAnticlockwiseDashed           = 0xea18,

    /// Identifier: "linea_arrows_anticlockwise"
    IFLineaArrowsAnticlockwise                 = 0xea19,

    /// Identifier: "linea_arrows_button_down"
    IFLineaArrowsButtonDown                    = 0xea1a,

    /// Identifier: "linea_arrows_button_off"
    IFLineaArrowsButtonOff                     = 0xea1b,

    /// Identifier: "linea_arrows_button_on"
    IFLineaArrowsButtonOn                      = 0xea1c,

    /// Identifier: "linea_arrows_button_up"
    IFLineaArrowsButtonUp                      = 0xea1d,

    /// Identifier: "linea_arrows_check"
    IFLineaArrowsCheck                         = 0xea1e,

    /// Identifier: "linea_arrows_circle_check"
    IFLineaArrowsCircleCheck                   = 0xea1f,

    /// Identifier: "linea_arrows_circle_down"
    IFLineaArrowsCircleDown                    = 0xea20,

    /// Identifier: "linea_arrows_circle_downleft"
    IFLineaArrowsCircleDownleft                = 0xea21,

    /// Identifier: "linea_arrows_circle_downright"
    IFLineaArrowsCircleDownright               = 0xea22,

    /// Identifier: "linea_arrows_circle_left"
    IFLineaArrowsCircleLeft                    = 0xea23,

    /// Identifier: "linea_arrows_circle_minus"
    IFLineaArrowsCircleMinus                   = 0xea24,

    /// Identifier: "linea_arrows_circle_plus"
    IFLineaArrowsCirclePlus                    = 0xea25,

    /// Identifier: "linea_arrows_circle_remove"
    IFLineaArrowsCircleRemove                  = 0xea26,

    /// Identifier: "linea_arrows_circle_right"
    IFLineaArrowsCircleRight                   = 0xea27,

    /// Identifier: "linea_arrows_circle_up"
    IFLineaArrowsCircleUp                      = 0xea28,

    /// Identifier: "linea_arrows_circle_upleft"
    IFLineaArrowsCircleUpleft                  = 0xea29,

    /// Identifier: "linea_arrows_circle_upright"
    IFLineaArrowsCircleUpright                 = 0xea2a,

    /// Identifier: "linea_arrows_clockwise_dashed"
    IFLineaArrowsClockwiseDashed               = 0xea2b,

    /// Identifier: "linea_arrows_clockwise"
    IFLineaArrowsClockwise                     = 0xea2c,

    /// Identifier: "linea_arrows_compress"
    IFLineaArrowsCompress                      = 0xea2d,

    /// Identifier: "linea_arrows_deny"
    IFLineaArrowsDeny                          = 0xea2e,

    /// Identifier: "linea_arrows_diagonal"
    IFLineaArrowsDiagonal                      = 0xea2f,

    /// Identifier: "linea_arrows_diagonal2"
    IFLineaArrowsDiagonal2                     = 0xea30,

    /// Identifier: "linea_arrows_down_double-34"
    IFLineaArrowsDownDouble34                  = 0xea31,

    /// Identifier: "linea_arrows_down"
    IFLineaArrowsDown                          = 0xea32,

    /// Identifier: "linea_arrows_downleft"
    IFLineaArrowsDownleft                      = 0xea33,

    /// Identifier: "linea_arrows_downright"
    IFLineaArrowsDownright                     = 0xea34,

    /// Identifier: "linea_arrows_drag_down_dashed"
    IFLineaArrowsDragDownDashed                = 0xea35,

    /// Identifier: "linea_arrows_drag_down"
    IFLineaArrowsDragDown                      = 0xea36,

    /// Identifier: "linea_arrows_drag_horiz"
    IFLineaArrowsDragHoriz                     = 0xea37,

    /// Identifier: "linea_arrows_drag_left_dashed"
    IFLineaArrowsDragLeftDashed                = 0xea38,

    /// Identifier: "linea_arrows_drag_left"
    IFLineaArrowsDragLeft                      = 0xea39,

    /// Identifier: "linea_arrows_drag_right_dashed"
    IFLineaArrowsDragRightDashed               = 0xea3a,

    /// Identifier: "linea_arrows_drag_right"
    IFLineaArrowsDragRight                     = 0xea3b,

    /// Identifier: "linea_arrows_drag_up_dashed"
    IFLineaArrowsDragUpDashed                  = 0xea3c,

    /// Identifier: "linea_arrows_drag_up"
    IFLineaArrowsDragUp                        = 0xea3d,

    /// Identifier: "linea_arrows_drag_vert"
    IFLineaArrowsDragVert                      = 0xea3e,

    /// Identifier: "linea_arrows_exclamation"
    IFLineaArrowsExclamation                   = 0xea3f,

    /// Identifier: "linea_arrows_expand_diagonal1"
    IFLineaArrowsExpandDiagonal1               = 0xea40,

    /// Identifier: "linea_arrows_expand_horizontal1"
    IFLineaArrowsExpandHorizontal1             = 0xea41,

    /// Identifier: "linea_arrows_expand_vertical1"
    IFLineaArrowsExpandVertical1               = 0xea42,

    /// Identifier: "linea_arrows_expand"
    IFLineaArrowsExpand                        = 0xea43,

    /// Identifier: "linea_arrows_fit_horizontal"
    IFLineaArrowsFitHorizontal                 = 0xea44,

    /// Identifier: "linea_arrows_fit_vertical"
    IFLineaArrowsFitVertical                   = 0xea45,

    /// Identifier: "linea_arrows_glide_horizontal"
    IFLineaArrowsGlideHorizontal               = 0xea46,

    /// Identifier: "linea_arrows_glide_vertical"
    IFLineaArrowsGlideVertical                 = 0xea47,

    /// Identifier: "linea_arrows_glide"
    IFLineaArrowsGlide                         = 0xea48,

    /// Identifier: "linea_arrows_hamburger2"
    IFLineaArrowsHamburger2                    = 0xea49,

    /// Identifier: "linea_arrows_hamburger1"
    IFLineaArrowsHamburger1                    = 0xea4a,

    /// Identifier: "linea_arrows_horizontal"
    IFLineaArrowsHorizontal                    = 0xea4b,

    /// Identifier: "linea_arrows_info"
    IFLineaArrowsInfo                          = 0xea4c,

    /// Identifier: "linea_arrows_keyboard_alt"
    IFLineaArrowsKeyboardAlt                   = 0xea4d,

    /// Identifier: "linea_arrows_keyboard_cmd-29"
    IFLineaArrowsKeyboardCmd29                 = 0xea4e,

    /// Identifier: "linea_arrows_keyboard_delete"
    IFLineaArrowsKeyboardDelete                = 0xea4f,

    /// Identifier: "linea_arrows_keyboard_down-28"
    IFLineaArrowsKeyboardDown28                = 0xea50,

    /// Identifier: "linea_arrows_keyboard_left"
    IFLineaArrowsKeyboardLeft                  = 0xea51,

    /// Identifier: "linea_arrows_keyboard_return"
    IFLineaArrowsKeyboardReturn                = 0xea52,

    /// Identifier: "linea_arrows_keyboard_right"
    IFLineaArrowsKeyboardRight                 = 0xea53,

    /// Identifier: "linea_arrows_keyboard_shift"
    IFLineaArrowsKeyboardShift                 = 0xea54,

    /// Identifier: "linea_arrows_keyboard_tab"
    IFLineaArrowsKeyboardTab                   = 0xea55,

    /// Identifier: "linea_arrows_keyboard_up"
    IFLineaArrowsKeyboardUp                    = 0xea56,

    /// Identifier: "linea_arrows_left_double-32"
    IFLineaArrowsLeftDouble32                  = 0xea57,

    /// Identifier: "linea_arrows_left"
    IFLineaArrowsLeft                          = 0xea58,

    /// Identifier: "linea_arrows_minus"
    IFLineaArrowsMinus                         = 0xea59,

    /// Identifier: "linea_arrows_move_bottom"
    IFLineaArrowsMoveBottom                    = 0xea5a,

    /// Identifier: "linea_arrows_move_left"
    IFLineaArrowsMoveLeft                      = 0xea5b,

    /// Identifier: "linea_arrows_move_right"
    IFLineaArrowsMoveRight                     = 0xea5c,

    /// Identifier: "linea_arrows_move_top"
    IFLineaArrowsMoveTop                       = 0xea5d,

    /// Identifier: "linea_arrows_move"
    IFLineaArrowsMove                          = 0xea5e,

    /// Identifier: "linea_arrows_move2"
    IFLineaArrowsMove2                         = 0xea5f,

    /// Identifier: "linea_arrows_plus"
    IFLineaArrowsPlus                          = 0xea60,

    /// Identifier: "linea_arrows_question"
    IFLineaArrowsQuestion                      = 0xea61,

    /// Identifier: "linea_arrows_remove"
    IFLineaArrowsRemove                        = 0xea62,

    /// Identifier: "linea_arrows_right_double-31"
    IFLineaArrowsRightDouble31                 = 0xea63,

    /// Identifier: "linea_arrows_right"
    IFLineaArrowsRight                         = 0xea64,

    /// Identifier: "linea_arrows_rotate_anti_dashed"
    IFLineaArrowsRotateAntiDashed              = 0xea65,

    /// Identifier: "linea_arrows_rotate_anti"
    IFLineaArrowsRotateAnti                    = 0xea66,

    /// Identifier: "linea_arrows_rotate_dashed"
    IFLineaArrowsRotateDashed                  = 0xea67,

    /// Identifier: "linea_arrows_rotate"
    IFLineaArrowsRotate                        = 0xea68,

    /// Identifier: "linea_arrows_shrink_diagonal1"
    IFLineaArrowsShrinkDiagonal1               = 0xea69,

    /// Identifier: "linea_arrows_shrink_diagonal2"
    IFLineaArrowsShrinkDiagonal2               = 0xea6a,

    /// Identifier: "linea_arrows_shrink_horizonal2"
    IFLineaArrowsShrinkHorizonal2              = 0xea6b,

    /// Identifier: "linea_arrows_shrink_horizontal1"
    IFLineaArrowsShrinkHorizontal1             = 0xea6c,

    /// Identifier: "linea_arrows_shrink_vertical1"
    IFLineaArrowsShrinkVertical1               = 0xea6d,

    /// Identifier: "linea_arrows_shrink_vertical2"
    IFLineaArrowsShrinkVertical2               = 0xea6e,

    /// Identifier: "linea_arrows_shrink"
    IFLineaArrowsShrink                        = 0xea6f,

    /// Identifier: "linea_arrows_sign_down"
    IFLineaArrowsSignDown                      = 0xea70,

    /// Identifier: "linea_arrows_sign_left"
    IFLineaArrowsSignLeft                      = 0xea71,

    /// Identifier: "linea_arrows_sign_right"
    IFLineaArrowsSignRight                     = 0xea72,

    /// Identifier: "linea_arrows_sign_up"
    IFLineaArrowsSignUp                        = 0xea73,

    /// Identifier: "linea_arrows_slide_down1"
    IFLineaArrowsSlideDown1                    = 0xea74,

    /// Identifier: "linea_arrows_slide_down2"
    IFLineaArrowsSlideDown2                    = 0xea75,

    /// Identifier: "linea_arrows_slide_left1"
    IFLineaArrowsSlideLeft1                    = 0xea76,

    /// Identifier: "linea_arrows_slide_left2"
    IFLineaArrowsSlideLeft2                    = 0xea77,

    /// Identifier: "linea_arrows_slide_right1"
    IFLineaArrowsSlideRight1                   = 0xea78,

    /// Identifier: "linea_arrows_slide_right2"
    IFLineaArrowsSlideRight2                   = 0xea79,

    /// Identifier: "linea_arrows_slide_up1"
    IFLineaArrowsSlideUp1                      = 0xea7a,

    /// Identifier: "linea_arrows_slide_up2"
    IFLineaArrowsSlideUp2                      = 0xea7b,

    /// Identifier: "linea_arrows_slim_down_dashed"
    IFLineaArrowsSlimDownDashed                = 0xea7c,

    /// Identifier: "linea_arrows_slim_down"
    IFLineaArrowsSlimDown                      = 0xea7d,

    /// Identifier: "linea_arrows_slim_left_dashed"
    IFLineaArrowsSlimLeftDashed                = 0xea7e,

    /// Identifier: "linea_arrows_slim_left"
    IFLineaArrowsSlimLeft                      = 0xea7f,

    /// Identifier: "linea_arrows_slim_right_dashed"
    IFLineaArrowsSlimRightDashed               = 0xea80,

    /// Identifier: "linea_arrows_slim_right"
    IFLineaArrowsSlimRight                     = 0xea81,

    /// Identifier: "linea_arrows_slim_up_dashed"
    IFLineaArrowsSlimUpDashed                  = 0xea82,

    /// Identifier: "linea_arrows_slim_up"
    IFLineaArrowsSlimUp                        = 0xea83,

    /// Identifier: "linea_arrows_square_check"
    IFLineaArrowsSquareCheck                   = 0xea84,

    /// Identifier: "linea_arrows_square_down"
    IFLineaArrowsSquareDown                    = 0xea85,

    /// Identifier: "linea_arrows_square_downleft"
    IFLineaArrowsSquareDownleft                = 0xea86,

    /// Identifier: "linea_arrows_square_downright"
    IFLineaArrowsSquareDownright               = 0xea87,

    /// Identifier: "linea_arrows_square_left"
    IFLineaArrowsSquareLeft                    = 0xea88,

    /// Identifier: "linea_arrows_square_minus"
    IFLineaArrowsSquareMinus                   = 0xea89,

    /// Identifier: "linea_arrows_square_plus"
    IFLineaArrowsSquarePlus                    = 0xea8a,

    /// Identifier: "linea_arrows_square_remove"
    IFLineaArrowsSquareRemove                  = 0xea8b,

    /// Identifier: "linea_arrows_square_right"
    IFLineaArrowsSquareRight                   = 0xea8c,

    /// Identifier: "linea_arrows_square_up"
    IFLineaArrowsSquareUp                      = 0xea8d,

    /// Identifier: "linea_arrows_square_upleft"
    IFLineaArrowsSquareUpleft                  = 0xea8e,

    /// Identifier: "linea_arrows_square_upright"
    IFLineaArrowsSquareUpright                 = 0xea8f,

    /// Identifier: "linea_arrows_squares"
    IFLineaArrowsSquares                       = 0xea90,

    /// Identifier: "linea_arrows_stretch_diagonal1"
    IFLineaArrowsStretchDiagonal1              = 0xea91,

    /// Identifier: "linea_arrows_stretch_diagonal2"
    IFLineaArrowsStretchDiagonal2              = 0xea92,

    /// Identifier: "linea_arrows_stretch_diagonal3"
    IFLineaArrowsStretchDiagonal3              = 0xea93,

    /// Identifier: "linea_arrows_stretch_diagonal4"
    IFLineaArrowsStretchDiagonal4              = 0xea94,

    /// Identifier: "linea_arrows_stretch_horizontal1"
    IFLineaArrowsStretchHorizontal1            = 0xea95,

    /// Identifier: "linea_arrows_stretch_horizontal2"
    IFLineaArrowsStretchHorizontal2            = 0xea96,

    /// Identifier: "linea_arrows_stretch_vertical1"
    IFLineaArrowsStretchVertical1              = 0xea97,

    /// Identifier: "linea_arrows_stretch_vertical2"
    IFLineaArrowsStretchVertical2              = 0xea98,

    /// Identifier: "linea_arrows_switch_horizontal"
    IFLineaArrowsSwitchHorizontal              = 0xea99,

    /// Identifier: "linea_arrows_switch_vertical"
    IFLineaArrowsSwitchVertical                = 0xea9a,

    /// Identifier: "linea_arrows_up_double-33"
    IFLineaArrowsUpDouble33                    = 0xea9b,

    /// Identifier: "linea_arrows_up"
    IFLineaArrowsUp                            = 0xea9c,

    /// Identifier: "linea_arrows_upleft"
    IFLineaArrowsUpleft                        = 0xea9d,

    /// Identifier: "linea_arrows_upright"
    IFLineaArrowsUpright                       = 0xea9e,

    /// Identifier: "linea_arrows_vertical"
    IFLineaArrowsVertical                      = 0xea9f,

    /// Identifier: "linea_ecommerce_bag_check"
    IFLineaEcommerceBagCheck                   = 0xeaa0,

    /// Identifier: "linea_ecommerce_bag_cloud"
    IFLineaEcommerceBagCloud                   = 0xeaa1,

    /// Identifier: "linea_ecommerce_bag_download"
    IFLineaEcommerceBagDownload                = 0xeaa2,

    /// Identifier: "linea_ecommerce_bag_minus"
    IFLineaEcommerceBagMinus                   = 0xeaa3,

    /// Identifier: "linea_ecommerce_bag_plus"
    IFLineaEcommerceBagPlus                    = 0xeaa4,

    /// Identifier: "linea_ecommerce_bag_refresh"
    IFLineaEcommerceBagRefresh                 = 0xeaa5,

    /// Identifier: "linea_ecommerce_bag_remove"
    IFLineaEcommerceBagRemove                  = 0xeaa6,

    /// Identifier: "linea_ecommerce_bag_search"
    IFLineaEcommerceBagSearch                  = 0xeaa7,

    /// Identifier: "linea_ecommerce_bag_upload"
    IFLineaEcommerceBagUpload                  = 0xeaa8,

    /// Identifier: "linea_ecommerce_bag"
    IFLineaEcommerceBag                        = 0xeaa9,

    /// Identifier: "linea_ecommerce_banknote"
    IFLineaEcommerceBanknote                   = 0xeaaa,

    /// Identifier: "linea_ecommerce_banknotes"
    IFLineaEcommerceBanknotes                  = 0xeaab,

    /// Identifier: "linea_ecommerce_basket_check"
    IFLineaEcommerceBasketCheck                = 0xeaac,

    /// Identifier: "linea_ecommerce_basket_cloud"
    IFLineaEcommerceBasketCloud                = 0xeaad,

    /// Identifier: "linea_ecommerce_basket_download"
    IFLineaEcommerceBasketDownload             = 0xeaae,

    /// Identifier: "linea_ecommerce_basket_minus"
    IFLineaEcommerceBasketMinus                = 0xeaaf,

    /// Identifier: "linea_ecommerce_basket_plus"
    IFLineaEcommerceBasketPlus                 = 0xeab0,

    /// Identifier: "linea_ecommerce_basket_refresh"
    IFLineaEcommerceBasketRefresh              = 0xeab1,

    /// Identifier: "linea_ecommerce_basket_remove"
    IFLineaEcommerceBasketRemove               = 0xeab2,

    /// Identifier: "linea_ecommerce_basket_search"
    IFLineaEcommerceBasketSearch               = 0xeab3,

    /// Identifier: "linea_ecommerce_basket_upload"
    IFLineaEcommerceBasketUpload               = 0xeab4,

    /// Identifier: "linea_ecommerce_basket"
    IFLineaEcommerceBasket                     = 0xeab5,

    /// Identifier: "linea_ecommerce_bath"
    IFLineaEcommerceBath                       = 0xeab6,

    /// Identifier: "linea_ecommerce_cart_check"
    IFLineaEcommerceCartCheck                  = 0xeab7,

    /// Identifier: "linea_ecommerce_cart_cloud"
    IFLineaEcommerceCartCloud                  = 0xeab8,

    /// Identifier: "linea_ecommerce_cart_content"
    IFLineaEcommerceCartContent                = 0xeab9,

    /// Identifier: "linea_ecommerce_cart_download"
    IFLineaEcommerceCartDownload               = 0xeaba,

    /// Identifier: "linea_ecommerce_cart_minus"
    IFLineaEcommerceCartMinus                  = 0xeabb,

    /// Identifier: "linea_ecommerce_cart_plus"
    IFLineaEcommerceCartPlus                   = 0xeabc,

    /// Identifier: "linea_ecommerce_cart_refresh"
    IFLineaEcommerceCartRefresh                = 0xeabd,

    /// Identifier: "linea_ecommerce_cart_remove"
    IFLineaEcommerceCartRemove                 = 0xeabe,

    /// Identifier: "linea_ecommerce_cart_search"
    IFLineaEcommerceCartSearch                 = 0xeabf,

    /// Identifier: "linea_ecommerce_cart_upload"
    IFLineaEcommerceCartUpload                 = 0xeac0,

    /// Identifier: "linea_ecommerce_cart"
    IFLineaEcommerceCart                       = 0xeac1,

    /// Identifier: "linea_ecommerce_cent"
    IFLineaEcommerceCent                       = 0xeac2,

    /// Identifier: "linea_ecommerce_colon"
    IFLineaEcommerceColon                      = 0xeac3,

    /// Identifier: "linea_ecommerce_creditcard"
    IFLineaEcommerceCreditcard                 = 0xeac4,

    /// Identifier: "linea_ecommerce_diamond"
    IFLineaEcommerceDiamond                    = 0xeac5,

    /// Identifier: "linea_ecommerce_dollar"
    IFLineaEcommerceDollar                     = 0xeac6,

    /// Identifier: "linea_ecommerce_euro"
    IFLineaEcommerceEuro                       = 0xeac7,

    /// Identifier: "linea_ecommerce_franc"
    IFLineaEcommerceFranc                      = 0xeac8,

    /// Identifier: "linea_ecommerce_gift"
    IFLineaEcommerceGift                       = 0xeac9,

    /// Identifier: "linea_ecommerce_graph_decrease"
    IFLineaEcommerceGraphDecrease              = 0xeaca,

    /// Identifier: "linea_ecommerce_graph_increase"
    IFLineaEcommerceGraphIncrease              = 0xeacb,

    /// Identifier: "linea_ecommerce_graph1"
    IFLineaEcommerceGraph1                     = 0xeacc,

    /// Identifier: "linea_ecommerce_graph2"
    IFLineaEcommerceGraph2                     = 0xeacd,

    /// Identifier: "linea_ecommerce_graph3"
    IFLineaEcommerceGraph3                     = 0xeace,

    /// Identifier: "linea_ecommerce_guarani"
    IFLineaEcommerceGuarani                    = 0xeacf,

    /// Identifier: "linea_ecommerce_kips"
    IFLineaEcommerceKips                       = 0xead0,

    /// Identifier: "linea_ecommerce_lira"
    IFLineaEcommerceLira                       = 0xead1,

    /// Identifier: "linea_ecommerce_megaphone"
    IFLineaEcommerceMegaphone                  = 0xead2,

    /// Identifier: "linea_ecommerce_money"
    IFLineaEcommerceMoney                      = 0xead3,

    /// Identifier: "linea_ecommerce_naira"
    IFLineaEcommerceNaira                      = 0xead4,

    /// Identifier: "linea_ecommerce_pesos"
    IFLineaEcommercePesos                      = 0xead5,

    /// Identifier: "linea_ecommerce_pound"
    IFLineaEcommercePound                      = 0xead6,

    /// Identifier: "linea_ecommerce_receipt_bath"
    IFLineaEcommerceReceiptBath                = 0xead7,

    /// Identifier: "linea_ecommerce_receipt_cent"
    IFLineaEcommerceReceiptCent                = 0xead8,

    /// Identifier: "linea_ecommerce_receipt_dollar"
    IFLineaEcommerceReceiptDollar              = 0xead9,

    /// Identifier: "linea_ecommerce_receipt_euro"
    IFLineaEcommerceReceiptEuro                = 0xeada,

    /// Identifier: "linea_ecommerce_receipt_franc"
    IFLineaEcommerceReceiptFranc               = 0xeadb,

    /// Identifier: "linea_ecommerce_receipt_guarani"
    IFLineaEcommerceReceiptGuarani             = 0xeadc,

    /// Identifier: "linea_ecommerce_receipt_kips"
    IFLineaEcommerceReceiptKips                = 0xeadd,

    /// Identifier: "linea_ecommerce_receipt_lira"
    IFLineaEcommerceReceiptLira                = 0xeade,

    /// Identifier: "linea_ecommerce_receipt_naira"
    IFLineaEcommerceReceiptNaira               = 0xeadf,

    /// Identifier: "linea_ecommerce_receipt_pesos"
    IFLineaEcommerceReceiptPesos               = 0xeae0,

    /// Identifier: "linea_ecommerce_receipt_pound"
    IFLineaEcommerceReceiptPound               = 0xeae1,

    /// Identifier: "linea_ecommerce_receipt_rublo"
    IFLineaEcommerceReceiptRublo               = 0xeae2,

    /// Identifier: "linea_ecommerce_receipt_rupee"
    IFLineaEcommerceReceiptRupee               = 0xeae3,

    /// Identifier: "linea_ecommerce_receipt_tugrik"
    IFLineaEcommerceReceiptTugrik              = 0xeae4,

    /// Identifier: "linea_ecommerce_receipt_won"
    IFLineaEcommerceReceiptWon                 = 0xeae5,

    /// Identifier: "linea_ecommerce_receipt_yen"
    IFLineaEcommerceReceiptYen                 = 0xeae6,

    /// Identifier: "linea_ecommerce_receipt_yen2"
    IFLineaEcommerceReceiptYen2                = 0xeae7,

    /// Identifier: "linea_ecommerce_receipt"
    IFLineaEcommerceReceipt                    = 0xeae8,

    /// Identifier: "linea_ecommerce_recept_colon"
    IFLineaEcommerceReceptColon                = 0xeae9,

    /// Identifier: "linea_ecommerce_rublo"
    IFLineaEcommerceRublo                      = 0xeaea,

    /// Identifier: "linea_ecommerce_rupee"
    IFLineaEcommerceRupee                      = 0xeaeb,

    /// Identifier: "linea_ecommerce_safe"
    IFLineaEcommerceSafe                       = 0xeaec,

    /// Identifier: "linea_ecommerce_sale"
    IFLineaEcommerceSale                       = 0xeaed,

    /// Identifier: "linea_ecommerce_sales"
    IFLineaEcommerceSales                      = 0xeaee,

    /// Identifier: "linea_ecommerce_ticket"
    IFLineaEcommerceTicket                     = 0xeaef,

    /// Identifier: "linea_ecommerce_tugriks"
    IFLineaEcommerceTugriks                    = 0xeaf0,

    /// Identifier: "linea_ecommerce_wallet"
    IFLineaEcommerceWallet                     = 0xeaf1,

    /// Identifier: "linea_ecommerce_won"
    IFLineaEcommerceWon                        = 0xeaf2,

    /// Identifier: "linea_ecommerce_yen"
    IFLineaEcommerceYen                        = 0xeaf3,

    /// Identifier: "linea_ecommerce_yen2"
    IFLineaEcommerceYen2                       = 0xeaf4,

    /// Identifier: "linea_music_beginning_button"
    IFLineaMusicBeginningButton                = 0xeaf5,

    /// Identifier: "linea_music_bell"
    IFLineaMusicBell                           = 0xeaf6,

    /// Identifier: "linea_music_cd"
    IFLineaMusicCd                             = 0xeaf7,

    /// Identifier: "linea_music_diapason"
    IFLineaMusicDiapason                       = 0xeaf8,

    /// Identifier: "linea_music_eject_button"
    IFLineaMusicEjectButton                    = 0xeaf9,

    /// Identifier: "linea_music_end_button"
    IFLineaMusicEndButton                      = 0xeafa,

    /// Identifier: "linea_music_fastforward_button"
    IFLineaMusicFastforwardButton              = 0xeafb,

    /// Identifier: "linea_music_headphones"
    IFLineaMusicHeadphones                     = 0xeafc,

    /// Identifier: "linea_music_ipod"
    IFLineaMusicIpod                           = 0xeafd,

    /// Identifier: "linea_music_loudspeaker"
    IFLineaMusicLoudspeaker                    = 0xeafe,

    /// Identifier: "linea_music_microphone_old"
    IFLineaMusicMicrophoneOld                  = 0xeaff,

    /// Identifier: "linea_music_microphone"
    IFLineaMusicMicrophone                     = 0xeb00,

    /// Identifier: "linea_music_mixer"
    IFLineaMusicMixer                          = 0xeb01,

    /// Identifier: "linea_music_mute"
    IFLineaMusicMute                           = 0xeb02,

    /// Identifier: "linea_music_note_multiple"
    IFLineaMusicNoteMultiple                   = 0xeb03,

    /// Identifier: "linea_music_note_single"
    IFLineaMusicNoteSingle                     = 0xeb04,

    /// Identifier: "linea_music_pause_button"
    IFLineaMusicPauseButton                    = 0xeb05,

    /// Identifier: "linea_music_play_button"
    IFLineaMusicPlayButton                     = 0xeb06,

    /// Identifier: "linea_music_playlist"
    IFLineaMusicPlaylist                       = 0xeb07,

    /// Identifier: "linea_music_radio_ghettoblaster"
    IFLineaMusicRadioGhettoblaster             = 0xeb08,

    /// Identifier: "linea_music_radio_portable"
    IFLineaMusicRadioPortable                  = 0xeb09,

    /// Identifier: "linea_music_record"
    IFLineaMusicRecord                         = 0xeb0a,

    /// Identifier: "linea_music_recordplayer"
    IFLineaMusicRecordplayer                   = 0xeb0b,

    /// Identifier: "linea_music_repeat_button"
    IFLineaMusicRepeatButton                   = 0xeb0c,

    /// Identifier: "linea_music_rewind_button"
    IFLineaMusicRewindButton                   = 0xeb0d,

    /// Identifier: "linea_music_shuffle_button"
    IFLineaMusicShuffleButton                  = 0xeb0e,

    /// Identifier: "linea_music_stop_button"
    IFLineaMusicStopButton                     = 0xeb0f,

    /// Identifier: "linea_music_tape"
    IFLineaMusicTape                           = 0xeb10,

    /// Identifier: "linea_music_volume_down"
    IFLineaMusicVolumeDown                     = 0xeb11,

    /// Identifier: "linea_music_volume_up"
    IFLineaMusicVolumeUp                       = 0xeb12,

    /// Identifier: "linea_software_add_vectorpoint"
    IFLineaSoftwareAddVectorpoint              = 0xeb13,

    /// Identifier: "linea_software_box_oval"
    IFLineaSoftwareBoxOval                     = 0xeb14,

    /// Identifier: "linea_software_box_polygon"
    IFLineaSoftwareBoxPolygon                  = 0xeb15,

    /// Identifier: "linea_software_box_rectangle"
    IFLineaSoftwareBoxRectangle                = 0xeb16,

    /// Identifier: "linea_software_box_roundedrectangle"
    IFLineaSoftwareBoxRoundedrectangle         = 0xeb17,

    /// Identifier: "linea_software_character"
    IFLineaSoftwareCharacter                   = 0xeb18,

    /// Identifier: "linea_software_crop"
    IFLineaSoftwareCrop                        = 0xeb19,

    /// Identifier: "linea_software_eyedropper"
    IFLineaSoftwareEyedropper                  = 0xeb1a,

    /// Identifier: "linea_software_font_allcaps"
    IFLineaSoftwareFontAllcaps                 = 0xeb1b,

    /// Identifier: "linea_software_font_baseline_shift"
    IFLineaSoftwareFontBaselineShift           = 0xeb1c,

    /// Identifier: "linea_software_font_horizontal_scale"
    IFLineaSoftwareFontHorizontalScale         = 0xeb1d,

    /// Identifier: "linea_software_font_kerning"
    IFLineaSoftwareFontKerning                 = 0xeb1e,

    /// Identifier: "linea_software_font_leading"
    IFLineaSoftwareFontLeading                 = 0xeb1f,

    /// Identifier: "linea_software_font_size"
    IFLineaSoftwareFontSize                    = 0xeb20,

    /// Identifier: "linea_software_font_smallcapital"
    IFLineaSoftwareFontSmallcapital            = 0xeb21,

    /// Identifier: "linea_software_font_smallcaps"
    IFLineaSoftwareFontSmallcaps               = 0xeb22,

    /// Identifier: "linea_software_font_strikethrough"
    IFLineaSoftwareFontStrikethrough           = 0xeb23,

    /// Identifier: "linea_software_font_tracking"
    IFLineaSoftwareFontTracking                = 0xeb24,

    /// Identifier: "linea_software_font_underline"
    IFLineaSoftwareFontUnderline               = 0xeb25,

    /// Identifier: "linea_software_font_vertical_scale"
    IFLineaSoftwareFontVerticalScale           = 0xeb26,

    /// Identifier: "linea_software_horizontal_align_center"
    IFLineaSoftwareHorizontalAlignCenter       = 0xeb27,

    /// Identifier: "linea_software_horizontal_align_right"
    IFLineaSoftwareHorizontalAlignRight        = 0xeb28,

    /// Identifier: "linea_software_horizontal_distribute_center"
    IFLineaSoftwareHorizontalDistributeCenter  = 0xeb29,

    /// Identifier: "linea_software_horizontal_distribute_left"
    IFLineaSoftwareHorizontalDistributeLeft    = 0xeb2a,

    /// Identifier: "linea_software_horizontal_distribute_right"
    IFLineaSoftwareHorizontalDistributeRight   = 0xeb2b,

    /// Identifier: "linea_software_indent_firstline"
    IFLineaSoftwareIndentFirstline             = 0xeb2c,

    /// Identifier: "linea_software_indent_left"
    IFLineaSoftwareIndentLeft                  = 0xeb2d,

    /// Identifier: "linea_software_indent_right"
    IFLineaSoftwareIndentRight                 = 0xeb2e,

    /// Identifier: "linea_software_lasso"
    IFLineaSoftwareLasso                       = 0xeb2f,

    /// Identifier: "linea_software_layers1"
    IFLineaSoftwareLayers1                     = 0xeb30,

    /// Identifier: "linea_software_layers2"
    IFLineaSoftwareLayers2                     = 0xeb31,

    /// Identifier: "linea_software_layout_2columns"
    IFLineaSoftwareLayout2columns              = 0xeb32,

    /// Identifier: "linea_software_layout_3columns"
    IFLineaSoftwareLayout3columns              = 0xeb33,

    /// Identifier: "linea_software_layout_4boxes"
    IFLineaSoftwareLayout4boxes                = 0xeb34,

    /// Identifier: "linea_software_layout_4columns"
    IFLineaSoftwareLayout4columns              = 0xeb35,

    /// Identifier: "linea_software_layout_4lines"
    IFLineaSoftwareLayout4lines                = 0xeb36,

    /// Identifier: "linea_software_layout_header_2columns"
    IFLineaSoftwareLayoutHeader2columns        = 0xeb37,

    /// Identifier: "linea_software_layout_header_3columns"
    IFLineaSoftwareLayoutHeader3columns        = 0xeb38,

    /// Identifier: "linea_software_layout_header_4boxes"
    IFLineaSoftwareLayoutHeader4boxes          = 0xeb39,

    /// Identifier: "linea_software_layout_header_4columns"
    IFLineaSoftwareLayoutHeader4columns        = 0xeb3a,

    /// Identifier: "linea_software_layout_header_complex"
    IFLineaSoftwareLayoutHeaderComplex         = 0xeb3b,

    /// Identifier: "linea_software_layout_header_complex2"
    IFLineaSoftwareLayoutHeaderComplex2        = 0xeb3c,

    /// Identifier: "linea_software_layout_header_complex3"
    IFLineaSoftwareLayoutHeaderComplex3        = 0xeb3d,

    /// Identifier: "linea_software_layout_header_complex4"
    IFLineaSoftwareLayoutHeaderComplex4        = 0xeb3e,

    /// Identifier: "linea_software_layout_header_sideleft"
    IFLineaSoftwareLayoutHeaderSideleft        = 0xeb3f,

    /// Identifier: "linea_software_layout_header_sideright"
    IFLineaSoftwareLayoutHeaderSideright       = 0xeb40,

    /// Identifier: "linea_software_layout_header"
    IFLineaSoftwareLayoutHeader                = 0xeb41,

    /// Identifier: "linea_software_layout_sidebar_left"
    IFLineaSoftwareLayoutSidebarLeft           = 0xeb42,

    /// Identifier: "linea_software_layout_sidebar_right"
    IFLineaSoftwareLayoutSidebarRight          = 0xeb43,

    /// Identifier: "linea_software_layout-8boxes"
    IFLineaSoftwareLayout8boxes                = 0xeb44,

    /// Identifier: "linea_software_layout"
    IFLineaSoftwareLayout                      = 0xeb45,

    /// Identifier: "linea_software_magnete"
    IFLineaSoftwareMagnete                     = 0xeb46,

    /// Identifier: "linea_software_pages"
    IFLineaSoftwarePages                       = 0xeb47,

    /// Identifier: "linea_software_paintbrush"
    IFLineaSoftwarePaintbrush                  = 0xeb48,

    /// Identifier: "linea_software_paintbucket"
    IFLineaSoftwarePaintbucket                 = 0xeb49,

    /// Identifier: "linea_software_paintroller"
    IFLineaSoftwarePaintroller                 = 0xeb4a,

    /// Identifier: "linea_software_paragraph_align_left"
    IFLineaSoftwareParagraphAlignLeft          = 0xeb4b,

    /// Identifier: "linea_software_paragraph_align_right"
    IFLineaSoftwareParagraphAlignRight         = 0xeb4c,

    /// Identifier: "linea_software_paragraph_center"
    IFLineaSoftwareParagraphCenter             = 0xeb4d,

    /// Identifier: "linea_software_paragraph_justify_all"
    IFLineaSoftwareParagraphJustifyAll         = 0xeb4e,

    /// Identifier: "linea_software_paragraph_justify_center"
    IFLineaSoftwareParagraphJustifyCenter      = 0xeb4f,

    /// Identifier: "linea_software_paragraph_justify_left"
    IFLineaSoftwareParagraphJustifyLeft        = 0xeb50,

    /// Identifier: "linea_software_paragraph_justify_right"
    IFLineaSoftwareParagraphJustifyRight       = 0xeb51,

    /// Identifier: "linea_software_paragraph_space_after"
    IFLineaSoftwareParagraphSpaceAfter         = 0xeb52,

    /// Identifier: "linea_software_paragraph_space_before"
    IFLineaSoftwareParagraphSpaceBefore        = 0xeb53,

    /// Identifier: "linea_software_paragraph"
    IFLineaSoftwareParagraph                   = 0xeb54,

    /// Identifier: "linea_software_pathfinder_exclude"
    IFLineaSoftwarePathfinderExclude           = 0xeb55,

    /// Identifier: "linea_software_pathfinder_intersect"
    IFLineaSoftwarePathfinderIntersect         = 0xeb56,

    /// Identifier: "linea_software_pathfinder_subtract"
    IFLineaSoftwarePathfinderSubtract          = 0xeb57,

    /// Identifier: "linea_software_pathfinder_unite"
    IFLineaSoftwarePathfinderUnite             = 0xeb58,

    /// Identifier: "linea_software_pen_add"
    IFLineaSoftwarePenAdd                      = 0xeb59,

    /// Identifier: "linea_software_pen_remove"
    IFLineaSoftwarePenRemove                   = 0xeb5a,

    /// Identifier: "linea_software_pen"
    IFLineaSoftwarePen                         = 0xeb5b,

    /// Identifier: "linea_software_pencil"
    IFLineaSoftwarePencil                      = 0xeb5c,

    /// Identifier: "linea_software_polygonallasso"
    IFLineaSoftwarePolygonallasso              = 0xeb5d,

    /// Identifier: "linea_software_reflect_horizontal"
    IFLineaSoftwareReflectHorizontal           = 0xeb5e,

    /// Identifier: "linea_software_reflect_vertical"
    IFLineaSoftwareReflectVertical             = 0xeb5f,

    /// Identifier: "linea_software_remove_vectorpoint"
    IFLineaSoftwareRemoveVectorpoint           = 0xeb60,

    /// Identifier: "linea_software_scale_expand"
    IFLineaSoftwareScaleExpand                 = 0xeb61,

    /// Identifier: "linea_software_scale_reduce"
    IFLineaSoftwareScaleReduce                 = 0xeb62,

    /// Identifier: "linea_software_selection_oval"
    IFLineaSoftwareSelectionOval               = 0xeb63,

    /// Identifier: "linea_software_selection_polygon"
    IFLineaSoftwareSelectionPolygon            = 0xeb64,

    /// Identifier: "linea_software_selection_rectangle"
    IFLineaSoftwareSelectionRectangle          = 0xeb65,

    /// Identifier: "linea_software_selection_roundedrectangle"
    IFLineaSoftwareSelectionRoundedrectangle   = 0xeb66,

    /// Identifier: "linea_software_shape_oval"
    IFLineaSoftwareShapeOval                   = 0xeb67,

    /// Identifier: "linea_software_shape_polygon"
    IFLineaSoftwareShapePolygon                = 0xeb68,

    /// Identifier: "linea_software_shape_rectangle"
    IFLineaSoftwareShapeRectangle              = 0xeb69,

    /// Identifier: "linea_software_shape_roundedrectangle"
    IFLineaSoftwareShapeRoundedrectangle       = 0xeb6a,

    /// Identifier: "linea_software_slice"
    IFLineaSoftwareSlice                       = 0xeb6b,

    /// Identifier: "linea_software_transform_bezier"
    IFLineaSoftwareTransformBezier             = 0xeb6c,

    /// Identifier: "linea_software_vector_box"
    IFLineaSoftwareVectorBox                   = 0xeb6d,

    /// Identifier: "linea_software_vector_composite"
    IFLineaSoftwareVectorComposite             = 0xeb6e,

    /// Identifier: "linea_software_vector_line"
    IFLineaSoftwareVectorLine                  = 0xeb6f,

    /// Identifier: "linea_software_vertical_align_bottom"
    IFLineaSoftwareVerticalAlignBottom         = 0xeb70,

    /// Identifier: "linea_software_vertical_align_center"
    IFLineaSoftwareVerticalAlignCenter         = 0xeb71,

    /// Identifier: "linea_software_vertical_align_top"
    IFLineaSoftwareVerticalAlignTop            = 0xeb72,

    /// Identifier: "linea_software_vertical_distribute_bottom"
    IFLineaSoftwareVerticalDistributeBottom    = 0xeb73,

    /// Identifier: "linea_software_vertical_distribute_center"
    IFLineaSoftwareVerticalDistributeCenter    = 0xeb74,

    /// Identifier: "linea_software_vertical_distribute_top"
    IFLineaSoftwareVerticalDistributeTop       = 0xeb75,

    /// Identifier: "linea_software-horizontal_align_left"
    IFLineaSoftwareHorizontalAlignLeft         = 0xeb76,

    /// Identifier: "linea_weather_aquarius"
    IFLineaWeatherAquarius                     = 0xeb77,

    /// Identifier: "linea_weather_aries"
    IFLineaWeatherAries                        = 0xeb78,

    /// Identifier: "linea_weather_cancer"
    IFLineaWeatherCancer                       = 0xeb79,

    /// Identifier: "linea_weather_capricorn"
    IFLineaWeatherCapricorn                    = 0xeb7a,

    /// Identifier: "linea_weather_cloud_drop"
    IFLineaWeatherCloudDrop                    = 0xeb7b,

    /// Identifier: "linea_weather_cloud_lightning"
    IFLineaWeatherCloudLightning               = 0xeb7c,

    /// Identifier: "linea_weather_cloud_snowflake"
    IFLineaWeatherCloudSnowflake               = 0xeb7d,

    /// Identifier: "linea_weather_cloud"
    IFLineaWeatherCloud                        = 0xeb7e,

    /// Identifier: "linea_weather_downpour_fullmoon"
    IFLineaWeatherDownpourFullmoon             = 0xeb7f,

    /// Identifier: "linea_weather_downpour_halfmoon"
    IFLineaWeatherDownpourHalfmoon             = 0xeb80,

    /// Identifier: "linea_weather_downpour_sun"
    IFLineaWeatherDownpourSun                  = 0xeb81,

    /// Identifier: "linea_weather_drop"
    IFLineaWeatherDrop                         = 0xeb82,

    /// Identifier: "linea_weather_first_quarter"
    IFLineaWeatherFirstQuarter                 = 0xeb83,

    /// Identifier: "linea_weather_fog_fullmoon"
    IFLineaWeatherFogFullmoon                  = 0xeb84,

    /// Identifier: "linea_weather_fog_halfmoon"
    IFLineaWeatherFogHalfmoon                  = 0xeb85,

    /// Identifier: "linea_weather_fog_sun"
    IFLineaWeatherFogSun                       = 0xeb86,

    /// Identifier: "linea_weather_fog"
    IFLineaWeatherFog                          = 0xeb87,

    /// Identifier: "linea_weather_fullmoon"
    IFLineaWeatherFullmoon                     = 0xeb88,

    /// Identifier: "linea_weather_gemini"
    IFLineaWeatherGemini                       = 0xeb89,

    /// Identifier: "linea_weather_hail_fullmoon"
    IFLineaWeatherHailFullmoon                 = 0xeb8a,

    /// Identifier: "linea_weather_hail_halfmoon"
    IFLineaWeatherHailHalfmoon                 = 0xeb8b,

    /// Identifier: "linea_weather_hail_sun"
    IFLineaWeatherHailSun                      = 0xeb8c,

    /// Identifier: "linea_weather_hail"
    IFLineaWeatherHail                         = 0xeb8d,

    /// Identifier: "linea_weather_last_quarter"
    IFLineaWeatherLastQuarter                  = 0xeb8e,

    /// Identifier: "linea_weather_leo"
    IFLineaWeatherLeo                          = 0xeb8f,

    /// Identifier: "linea_weather_libra"
    IFLineaWeatherLibra                        = 0xeb90,

    /// Identifier: "linea_weather_lightning"
    IFLineaWeatherLightning                    = 0xeb91,

    /// Identifier: "linea_weather_mistyrain_fullmoon"
    IFLineaWeatherMistyrainFullmoon            = 0xeb92,

    /// Identifier: "linea_weather_mistyrain_halfmoon"
    IFLineaWeatherMistyrainHalfmoon            = 0xeb93,

    /// Identifier: "linea_weather_mistyrain_sun"
    IFLineaWeatherMistyrainSun                 = 0xeb94,

    /// Identifier: "linea_weather_mistyrain"
    IFLineaWeatherMistyrain                    = 0xeb95,

    /// Identifier: "linea_weather_moon"
    IFLineaWeatherMoon                         = 0xeb96,

    /// Identifier: "linea_weather_moondown_full"
    IFLineaWeatherMoondownFull                 = 0xeb97,

    /// Identifier: "linea_weather_moondown_half"
    IFLineaWeatherMoondownHalf                 = 0xeb98,

    /// Identifier: "linea_weather_moonset_full"
    IFLineaWeatherMoonsetFull                  = 0xeb99,

    /// Identifier: "linea_weather_moonset_half"
    IFLineaWeatherMoonsetHalf                  = 0xeb9a,

    /// Identifier: "linea_weather_move2"
    IFLineaWeatherMove2                        = 0xeb9b,

    /// Identifier: "linea_weather_newmoon"
    IFLineaWeatherNewmoon                      = 0xeb9c,

    /// Identifier: "linea_weather_pisces"
    IFLineaWeatherPisces                       = 0xeb9d,

    /// Identifier: "linea_weather_rain_fullmoon"
    IFLineaWeatherRainFullmoon                 = 0xeb9e,

    /// Identifier: "linea_weather_rain_halfmoon"
    IFLineaWeatherRainHalfmoon                 = 0xeb9f,

    /// Identifier: "linea_weather_rain_sun"
    IFLineaWeatherRainSun                      = 0xeba0,

    /// Identifier: "linea_weather_rain"
    IFLineaWeatherRain                         = 0xeba1,

    /// Identifier: "linea_weather_sagittarius"
    IFLineaWeatherSagittarius                  = 0xeba2,

    /// Identifier: "linea_weather_scorpio"
    IFLineaWeatherScorpio                      = 0xeba3,

    /// Identifier: "linea_weather_snow_fullmoon"
    IFLineaWeatherSnowFullmoon                 = 0xeba4,

    /// Identifier: "linea_weather_snow_halfmoon"
    IFLineaWeatherSnowHalfmoon                 = 0xeba5,

    /// Identifier: "linea_weather_snow_sun"
    IFLineaWeatherSnowSun                      = 0xeba6,

    /// Identifier: "linea_weather_snow"
    IFLineaWeatherSnow                         = 0xeba7,

    /// Identifier: "linea_weather_snowflake"
    IFLineaWeatherSnowflake                    = 0xeba8,

    /// Identifier: "linea_weather_star"
    IFLineaWeatherStar                         = 0xeba9,

    /// Identifier: "linea_weather_storm_fullmoon"
    IFLineaWeatherStormFullmoon                = 0xebaa,

    /// Identifier: "linea_weather_storm_halfmoon"
    IFLineaWeatherStormHalfmoon                = 0xebab,

    /// Identifier: "linea_weather_storm_sun"
    IFLineaWeatherStormSun                     = 0xebac,

    /// Identifier: "linea_weather_storm-11"
    IFLineaWeatherStorm11                      = 0xebad,

    /// Identifier: "linea_weather_storm-32"
    IFLineaWeatherStorm32                      = 0xebae,

    /// Identifier: "linea_weather_sun"
    IFLineaWeatherSun                          = 0xebaf,

    /// Identifier: "linea_weather_sundown"
    IFLineaWeatherSundown                      = 0xebb0,

    /// Identifier: "linea_weather_sunset"
    IFLineaWeatherSunset                       = 0xebb1,

    /// Identifier: "linea_weather_taurus"
    IFLineaWeatherTaurus                       = 0xebb2,

    /// Identifier: "linea_weather_tempest_fullmoon"
    IFLineaWeatherTempestFullmoon              = 0xebb3,

    /// Identifier: "linea_weather_tempest_halfmoon"
    IFLineaWeatherTempestHalfmoon              = 0xebb4,

    /// Identifier: "linea_weather_tempest_sun"
    IFLineaWeatherTempestSun                   = 0xebb5,

    /// Identifier: "linea_weather_tempest"
    IFLineaWeatherTempest                      = 0xebb6,

    /// Identifier: "linea_weather_variable_fullmoon"
    IFLineaWeatherVariableFullmoon             = 0xebb7,

    /// Identifier: "linea_weather_variable_halfmoon"
    IFLineaWeatherVariableHalfmoon             = 0xebb8,

    /// Identifier: "linea_weather_variable_sun"
    IFLineaWeatherVariableSun                  = 0xebb9,

    /// Identifier: "linea_weather_virgo"
    IFLineaWeatherVirgo                        = 0xebba,

    /// Identifier: "linea_weather_waning_cresent"
    IFLineaWeatherWaningCresent                = 0xebbb,

    /// Identifier: "linea_weather_waning_gibbous"
    IFLineaWeatherWaningGibbous                = 0xebbc,

    /// Identifier: "linea_weather_waxing_cresent"
    IFLineaWeatherWaxingCresent                = 0xebbd,

    /// Identifier: "linea_weather_waxing_gibbous"
    IFLineaWeatherWaxingGibbous                = 0xebbe,

    /// Identifier: "linea_weather_wind_E"
    IFLineaWeatherWindE                        = 0xebbf,

    /// Identifier: "linea_weather_wind_fullmoon"
    IFLineaWeatherWindFullmoon                 = 0xebc0,

    /// Identifier: "linea_weather_wind_halfmoon"
    IFLineaWeatherWindHalfmoon                 = 0xebc1,

    /// Identifier: "linea_weather_wind_N"
    IFLineaWeatherWindN                        = 0xebc2,

    /// Identifier: "linea_weather_wind_NE"
    IFLineaWeatherWindNE                       = 0xebc3,

    /// Identifier: "linea_weather_wind_NW"
    IFLineaWeatherWindNW                       = 0xebc4,

    /// Identifier: "linea_weather_wind_S"
    IFLineaWeatherWindS                        = 0xebc5,

    /// Identifier: "linea_weather_wind_SE"
    IFLineaWeatherWindSE                       = 0xebc6,

    /// Identifier: "linea_weather_wind_sun"
    IFLineaWeatherWindSun                      = 0xebc7,

    /// Identifier: "linea_weather_wind_SW"
    IFLineaWeatherWindSW                       = 0xebc8,

    /// Identifier: "linea_weather_wind_W"
    IFLineaWeatherWindW                        = 0xebc9,

    /// Identifier: "linea_weather_wind"
    IFLineaWeatherWind                         = 0xebca,

    /// Identifier: "linea_weather_windgust"
    IFLineaWeatherWindgust                     = 0xebcb,

};

/**
 * Linea, a free outline iconset designed by Dario Ferrando, v1.0 http://www.linea.io
 */
@interface IFLinea : IFIcon
@end
