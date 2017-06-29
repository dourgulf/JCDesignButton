#import "IFIcon.h"

/**
 * HawconsStroke icon types.
 */
typedef NS_ENUM(IFIconType, IFHawconsStrokeType) {

    /// Identifier: "hawcons-stroke-mail-envelope"
    IFHawconsStrokeMailEnvelope                        = 0xe600,

    /// Identifier: "hawcons-stroke-mail-envelope-open"
    IFHawconsStrokeMailEnvelopeOpen                    = 0xe601,

    /// Identifier: "hawcons-stroke-mail-envelope-closed"
    IFHawconsStrokeMailEnvelopeClosed                  = 0xe602,

    /// Identifier: "hawcons-stroke-mail-envelope-open2"
    IFHawconsStrokeMailEnvelopeOpen2                   = 0xe603,

    /// Identifier: "hawcons-stroke-mail-envelope-open3"
    IFHawconsStrokeMailEnvelopeOpen3                   = 0xe604,

    /// Identifier: "hawcons-stroke-mail-envelope-closed2"
    IFHawconsStrokeMailEnvelopeClosed2                 = 0xe605,

    /// Identifier: "hawcons-stroke-mail-envelope-open4"
    IFHawconsStrokeMailEnvelopeOpen4                   = 0xe606,

    /// Identifier: "hawcons-stroke-mail-error"
    IFHawconsStrokeMailError                           = 0xe607,

    /// Identifier: "hawcons-stroke-mail-checked"
    IFHawconsStrokeMailChecked                         = 0xe608,

    /// Identifier: "hawcons-stroke-mail-cancel"
    IFHawconsStrokeMailCancel                          = 0xe609,

    /// Identifier: "hawcons-stroke-mail--forbidden"
    IFHawconsStrokeMailForbidden                       = 0xe60a,

    /// Identifier: "hawcons-stroke-mail-add"
    IFHawconsStrokeMailAdd                             = 0xe60b,

    /// Identifier: "hawcons-stroke-mail-remove"
    IFHawconsStrokeMailRemove                          = 0xe60c,

    /// Identifier: "hawcons-stroke-flag"
    IFHawconsStrokeFlag                                = 0xe60d,

    /// Identifier: "hawcons-stroke-flag2"
    IFHawconsStrokeFlag2                               = 0xe60e,

    /// Identifier: "hawcons-stroke-flag3"
    IFHawconsStrokeFlag3                               = 0xe60f,

    /// Identifier: "hawcons-stroke-flag4"
    IFHawconsStrokeFlag4                               = 0xe610,

    /// Identifier: "hawcons-stroke-bookmark"
    IFHawconsStrokeBookmark                            = 0xe611,

    /// Identifier: "hawcons-stroke-bookmark-add"
    IFHawconsStrokeBookmarkAdd                         = 0xe612,

    /// Identifier: "hawcons-stroke-bookmark-remove"
    IFHawconsStrokeBookmarkRemove                      = 0xe613,

    /// Identifier: "hawcons-stroke-eye-hidden"
    IFHawconsStrokeEyeHidden                           = 0xe614,

    /// Identifier: "hawcons-stroke-eye"
    IFHawconsStrokeEye                                 = 0xe615,

    /// Identifier: "hawcons-stroke-star"
    IFHawconsStrokeStar                                = 0xe616,

    /// Identifier: "hawcons-stroke-key"
    IFHawconsStrokeKey                                 = 0xe617,

    /// Identifier: "hawcons-stroke-key2"
    IFHawconsStrokeKey2                                = 0xe618,

    /// Identifier: "hawcons-stroke-trash-can"
    IFHawconsStrokeTrashCan                            = 0xe619,

    /// Identifier: "hawcons-stroke-trash-can2"
    IFHawconsStrokeTrashCan2                           = 0xe61a,

    /// Identifier: "hawcons-stroke-information"
    IFHawconsStrokeInformation                         = 0xe61b,

    /// Identifier: "hawcons-stroke-information2"
    IFHawconsStrokeInformation2                        = 0xe61c,

    /// Identifier: "hawcons-stroke-book"
    IFHawconsStrokeBook                                = 0xe61d,

    /// Identifier: "hawcons-stroke-book-bookmark"
    IFHawconsStrokeBookBookmark                        = 0xe61e,

    /// Identifier: "hawcons-stroke-clipboard-edit"
    IFHawconsStrokeClipboardEdit                       = 0xe61f,

    /// Identifier: "hawcons-stroke-clipboard-add"
    IFHawconsStrokeClipboardAdd                        = 0xe620,

    /// Identifier: "hawcons-stroke-clipboard-remove"
    IFHawconsStrokeClipboardRemove                     = 0xe621,

    /// Identifier: "hawcons-stroke-clipboard"
    IFHawconsStrokeClipboard                           = 0xe622,

    /// Identifier: "hawcons-stroke-clipboard-download"
    IFHawconsStrokeClipboardDownload                   = 0xe623,

    /// Identifier: "hawcons-stroke-clipboard-upload"
    IFHawconsStrokeClipboardUpload                     = 0xe624,

    /// Identifier: "hawcons-stroke-clipboard-checked"
    IFHawconsStrokeClipboardChecked                    = 0xe625,

    /// Identifier: "hawcons-stroke-clipboard-text"
    IFHawconsStrokeClipboardText                       = 0xe626,

    /// Identifier: "hawcons-stroke-clipboard-list"
    IFHawconsStrokeClipboardList                       = 0xe627,

    /// Identifier: "hawcons-stroke-note"
    IFHawconsStrokeNote                                = 0xe628,

    /// Identifier: "hawcons-stroke-note-add"
    IFHawconsStrokeNoteAdd                             = 0xe629,

    /// Identifier: "hawcons-stroke-note-remove"
    IFHawconsStrokeNoteRemove                          = 0xe62a,

    /// Identifier: "hawcons-stroke-note-text"
    IFHawconsStrokeNoteText                            = 0xe62b,

    /// Identifier: "hawcons-stroke-note-list"
    IFHawconsStrokeNoteList                            = 0xe62c,

    /// Identifier: "hawcons-stroke-note-checked"
    IFHawconsStrokeNoteChecked                         = 0xe62d,

    /// Identifier: "hawcons-stroke-note-important"
    IFHawconsStrokeNoteImportant                       = 0xe62e,

    /// Identifier: "hawcons-stroke-notebook"
    IFHawconsStrokeNotebook                            = 0xe62f,

    /// Identifier: "hawcons-stroke-notebook2"
    IFHawconsStrokeNotebook2                           = 0xe630,

    /// Identifier: "hawcons-stroke-notebook3"
    IFHawconsStrokeNotebook3                           = 0xe631,

    /// Identifier: "hawcons-stroke-notebook4"
    IFHawconsStrokeNotebook4                           = 0xe632,

    /// Identifier: "hawcons-stroke-notebook-text"
    IFHawconsStrokeNotebookText                        = 0xe633,

    /// Identifier: "hawcons-stroke-notebook-list"
    IFHawconsStrokeNotebookList                        = 0xe634,

    /// Identifier: "hawcons-stroke-document"
    IFHawconsStrokeDocument                            = 0xe635,

    /// Identifier: "hawcons-stroke-document-text"
    IFHawconsStrokeDocumentText                        = 0xe636,

    /// Identifier: "hawcons-stroke-document-text2"
    IFHawconsStrokeDocumentText2                       = 0xe637,

    /// Identifier: "hawcons-stroke-document-download"
    IFHawconsStrokeDocumentDownload                    = 0xe638,

    /// Identifier: "hawcons-stroke-document-upload"
    IFHawconsStrokeDocumentUpload                      = 0xe639,

    /// Identifier: "hawcons-stroke-document-bookmark"
    IFHawconsStrokeDocumentBookmark                    = 0xe63a,

    /// Identifier: "hawcons-stroke-document-diagrams"
    IFHawconsStrokeDocumentDiagrams                    = 0xe63b,

    /// Identifier: "hawcons-stroke-document-recording"
    IFHawconsStrokeDocumentRecording                   = 0xe63c,

    /// Identifier: "hawcons-stroke-document-table"
    IFHawconsStrokeDocumentTable                       = 0xe63d,

    /// Identifier: "hawcons-stroke-document-music"
    IFHawconsStrokeDocumentMusic                       = 0xe63e,

    /// Identifier: "hawcons-stroke-document-movie"
    IFHawconsStrokeDocumentMovie                       = 0xe63f,

    /// Identifier: "hawcons-stroke-document-play"
    IFHawconsStrokeDocumentPlay                        = 0xe640,

    /// Identifier: "hawcons-stroke-document-graph"
    IFHawconsStrokeDocumentGraph                       = 0xe641,

    /// Identifier: "hawcons-stroke-document-time"
    IFHawconsStrokeDocumentTime                        = 0xe642,

    /// Identifier: "hawcons-stroke-document-text3"
    IFHawconsStrokeDocumentText3                       = 0xe643,

    /// Identifier: "hawcons-stroke-document-code"
    IFHawconsStrokeDocumentCode                        = 0xe644,

    /// Identifier: "hawcons-stroke-document-cloud"
    IFHawconsStrokeDocumentCloud                       = 0xe645,

    /// Identifier: "hawcons-stroke-documents"
    IFHawconsStrokeDocuments                           = 0xe646,

    /// Identifier: "hawcons-stroke-documents2"
    IFHawconsStrokeDocuments2                          = 0xe647,

    /// Identifier: "hawcons-stroke-document-search"
    IFHawconsStrokeDocumentSearch                      = 0xe648,

    /// Identifier: "hawcons-stroke-document-star"
    IFHawconsStrokeDocumentStar                        = 0xe649,

    /// Identifier: "hawcons-stroke-document-unlocked"
    IFHawconsStrokeDocumentUnlocked                    = 0xe64a,

    /// Identifier: "hawcons-stroke-document-locked"
    IFHawconsStrokeDocumentLocked                      = 0xe64b,

    /// Identifier: "hawcons-stroke-document-error"
    IFHawconsStrokeDocumentError                       = 0xe64c,

    /// Identifier: "hawcons-stroke-document-cancel"
    IFHawconsStrokeDocumentCancel                      = 0xe64d,

    /// Identifier: "hawcons-stroke-document-checked"
    IFHawconsStrokeDocumentChecked                     = 0xe64e,

    /// Identifier: "hawcons-stroke-document-add"
    IFHawconsStrokeDocumentAdd                         = 0xe64f,

    /// Identifier: "hawcons-stroke-document-remove"
    IFHawconsStrokeDocumentRemove                      = 0xe650,

    /// Identifier: "hawcons-stroke-document-forbidden"
    IFHawconsStrokeDocumentForbidden                   = 0xe651,

    /// Identifier: "hawcons-stroke-document-information"
    IFHawconsStrokeDocumentInformation                 = 0xe652,

    /// Identifier: "hawcons-stroke-folder-information"
    IFHawconsStrokeFolderInformation                   = 0xe653,

    /// Identifier: "hawcons-stroke-document-list"
    IFHawconsStrokeDocumentList                        = 0xe654,

    /// Identifier: "hawcons-stroke-document-font"
    IFHawconsStrokeDocumentFont                        = 0xe655,

    /// Identifier: "hawcons-stroke-inbox"
    IFHawconsStrokeInbox                               = 0xe656,

    /// Identifier: "hawcons-stroke-inboxes"
    IFHawconsStrokeInboxes                             = 0xe657,

    /// Identifier: "hawcons-stroke-inbox-document"
    IFHawconsStrokeInboxDocument                       = 0xe658,

    /// Identifier: "hawcons-stroke-inbox-document-text"
    IFHawconsStrokeInboxDocumentText                   = 0xe659,

    /// Identifier: "hawcons-stroke-inbox-download"
    IFHawconsStrokeInboxDownload                       = 0xe65a,

    /// Identifier: "hawcons-stroke-inbox-upload"
    IFHawconsStrokeInboxUpload                         = 0xe65b,

    /// Identifier: "hawcons-stroke-folder"
    IFHawconsStrokeFolder                              = 0xe65c,

    /// Identifier: "hawcons-stroke-folder2"
    IFHawconsStrokeFolder2                             = 0xe65d,

    /// Identifier: "hawcons-stroke-folders"
    IFHawconsStrokeFolders                             = 0xe65e,

    /// Identifier: "hawcons-stroke-folder-download"
    IFHawconsStrokeFolderDownload                      = 0xe65f,

    /// Identifier: "hawcons-stroke-folder-upload"
    IFHawconsStrokeFolderUpload                        = 0xe660,

    /// Identifier: "hawcons-stroke-folder-unlocked"
    IFHawconsStrokeFolderUnlocked                      = 0xe661,

    /// Identifier: "hawcons-stroke-folder-locked"
    IFHawconsStrokeFolderLocked                        = 0xe662,

    /// Identifier: "hawcons-stroke-folder-search"
    IFHawconsStrokeFolderSearch                        = 0xe663,

    /// Identifier: "hawcons-stroke-folder-error"
    IFHawconsStrokeFolderError                         = 0xe664,

    /// Identifier: "hawcons-stroke-folder-cancel"
    IFHawconsStrokeFolderCancel                        = 0xe665,

    /// Identifier: "hawcons-stroke-folder-checked"
    IFHawconsStrokeFolderChecked                       = 0xe666,

    /// Identifier: "hawcons-stroke-folder-add"
    IFHawconsStrokeFolderAdd                           = 0xe667,

    /// Identifier: "hawcons-stroke-folder-remove"
    IFHawconsStrokeFolderRemove                        = 0xe668,

    /// Identifier: "hawcons-stroke-folder-forbidden"
    IFHawconsStrokeFolderForbidden                     = 0xe669,

    /// Identifier: "hawcons-stroke-folder-bookmark"
    IFHawconsStrokeFolderBookmark                      = 0xe66a,

    /// Identifier: "hawcons-stroke-document-zip"
    IFHawconsStrokeDocumentZip                         = 0xe66b,

    /// Identifier: "hawcons-stroke-zip"
    IFHawconsStrokeZip                                 = 0xe66c,

    /// Identifier: "hawcons-stroke-search"
    IFHawconsStrokeSearch                              = 0xe66d,

    /// Identifier: "hawcons-stroke-search-plus"
    IFHawconsStrokeSearchPlus                          = 0xe66e,

    /// Identifier: "hawcons-stroke-search-minus"
    IFHawconsStrokeSearchMinus                         = 0xe66f,

    /// Identifier: "hawcons-stroke-lock"
    IFHawconsStrokeLock                                = 0xe670,

    /// Identifier: "hawcons-stroke-lock-open"
    IFHawconsStrokeLockOpen                            = 0xe671,

    /// Identifier: "hawcons-stroke-lock-open2"
    IFHawconsStrokeLockOpen2                           = 0xe672,

    /// Identifier: "hawcons-stroke-lock-stripes"
    IFHawconsStrokeLockStripes                         = 0xe673,

    /// Identifier: "hawcons-stroke-lock-rounded"
    IFHawconsStrokeLockRounded                         = 0xe674,

    /// Identifier: "hawcons-stroke-lock-rounded-open"
    IFHawconsStrokeLockRoundedOpen                     = 0xe675,

    /// Identifier: "hawcons-stroke-lock-rounded-open2"
    IFHawconsStrokeLockRoundedOpen2                    = 0xe676,

    /// Identifier: "hawcons-stroke-combination-lock"
    IFHawconsStrokeCombinationLock                     = 0xe677,

    /// Identifier: "hawcons-stroke-printer"
    IFHawconsStrokePrinter                             = 0xe678,

    /// Identifier: "hawcons-stroke-printer2"
    IFHawconsStrokePrinter2                            = 0xe679,

    /// Identifier: "hawcons-stroke-printer-text"
    IFHawconsStrokePrinterText                         = 0xe67a,

    /// Identifier: "hawcons-stroke-printer-text2"
    IFHawconsStrokePrinterText2                        = 0xe67b,

    /// Identifier: "hawcons-stroke-document-shred"
    IFHawconsStrokeDocumentShred                       = 0xe67c,

    /// Identifier: "hawcons-stroke-shredder"
    IFHawconsStrokeShredder                            = 0xe67d,

    /// Identifier: "hawcons-stroke-document-scan"
    IFHawconsStrokeDocumentScan                        = 0xe67e,

    /// Identifier: "hawcons-stroke-cloud-download"
    IFHawconsStrokeCloudDownload                       = 0xe67f,

    /// Identifier: "hawcons-stroke-cloud-upload"
    IFHawconsStrokeCloudUpload                         = 0xe680,

    /// Identifier: "hawcons-stroke-cloud-error"
    IFHawconsStrokeCloudError                          = 0xe681,

    /// Identifier: "hawcons-stroke-cloud"
    IFHawconsStrokeCloud                               = 0xe682,

    /// Identifier: "hawcons-stroke-inbox-filled"
    IFHawconsStrokeInboxFilled                         = 0xe683,

    /// Identifier: "hawcons-stroke-pen"
    IFHawconsStrokePen                                 = 0xe684,

    /// Identifier: "hawcons-stroke-pen-angled"
    IFHawconsStrokePenAngled                           = 0xe685,

    /// Identifier: "hawcons-stroke-document-edit"
    IFHawconsStrokeDocumentEdit                        = 0xe686,

    /// Identifier: "hawcons-stroke-document-certificate"
    IFHawconsStrokeDocumentCertificate                 = 0xe687,

    /// Identifier: "hawcons-stroke-certificate"
    IFHawconsStrokeCertificate                         = 0xe688,

    /// Identifier: "hawcons-stroke-package"
    IFHawconsStrokePackage                             = 0xe689,

    /// Identifier: "hawcons-stroke-box"
    IFHawconsStrokeBox                                 = 0xe68a,

    /// Identifier: "hawcons-stroke-box-filled"
    IFHawconsStrokeBoxFilled                           = 0xe68b,

    /// Identifier: "hawcons-stroke-box2"
    IFHawconsStrokeBox2                                = 0xe68c,

    /// Identifier: "hawcons-stroke-box3"
    IFHawconsStrokeBox3                                = 0xe68d,

    /// Identifier: "hawcons-stroke-box-bookmark"
    IFHawconsStrokeBoxBookmark                         = 0xe68e,

    /// Identifier: "hawcons-stroke-tag-cord"
    IFHawconsStrokeTagCord                             = 0xe68f,

    /// Identifier: "hawcons-stroke-tag"
    IFHawconsStrokeTag                                 = 0xe690,

    /// Identifier: "hawcons-stroke-tags"
    IFHawconsStrokeTags                                = 0xe691,

    /// Identifier: "hawcons-stroke-tag-add"
    IFHawconsStrokeTagAdd                              = 0xe692,

    /// Identifier: "hawcons-stroke-tag-remove"
    IFHawconsStrokeTagRemove                           = 0xe693,

    /// Identifier: "hawcons-stroke-tag-checked"
    IFHawconsStrokeTagChecked                          = 0xe694,

    /// Identifier: "hawcons-stroke-tag-cancel"
    IFHawconsStrokeTagCancel                           = 0xe695,

    /// Identifier: "hawcons-stroke-paperclip"
    IFHawconsStrokePaperclip                           = 0xe696,

    /// Identifier: "hawcons-stroke-basketball"
    IFHawconsStrokeBasketball                          = 0xe697,

    /// Identifier: "hawcons-stroke-baseball"
    IFHawconsStrokeBaseball                            = 0xe698,

    /// Identifier: "hawcons-stroke-tennis-ball"
    IFHawconsStrokeTennisBall                          = 0xe699,

    /// Identifier: "hawcons-stroke-bowling-ball"
    IFHawconsStrokeBowlingBall                         = 0xe69a,

    /// Identifier: "hawcons-stroke-billiard-ball"
    IFHawconsStrokeBilliardBall                        = 0xe69b,

    /// Identifier: "hawcons-stroke-soccer-ball"
    IFHawconsStrokeSoccerBall                          = 0xe69c,

    /// Identifier: "hawcons-stroke-soccer-court"
    IFHawconsStrokeSoccerCourt                         = 0xe69d,

    /// Identifier: "hawcons-stroke-football"
    IFHawconsStrokeFootball                            = 0xe69e,

    /// Identifier: "hawcons-stroke-football2"
    IFHawconsStrokeFootball2                           = 0xe69f,

    /// Identifier: "hawcons-stroke-basketball2"
    IFHawconsStrokeBasketball2                         = 0xe6a0,

    /// Identifier: "hawcons-stroke-baseball-set"
    IFHawconsStrokeBaseballSet                         = 0xe6a1,

    /// Identifier: "hawcons-stroke-tennis-ball2"
    IFHawconsStrokeTennisBall2                         = 0xe6a2,

    /// Identifier: "hawcons-stroke-trophy"
    IFHawconsStrokeTrophy                              = 0xe6a3,

    /// Identifier: "hawcons-stroke-trophy-one"
    IFHawconsStrokeTrophyOne                           = 0xe6a4,

    /// Identifier: "hawcons-stroke-trophy2"
    IFHawconsStrokeTrophy2                             = 0xe6a5,

    /// Identifier: "hawcons-stroke-medal"
    IFHawconsStrokeMedal                               = 0xe6a6,

    /// Identifier: "hawcons-stroke-medal2"
    IFHawconsStrokeMedal2                              = 0xe6a7,

    /// Identifier: "hawcons-stroke-weights"
    IFHawconsStrokeWeights                             = 0xe6a8,

    /// Identifier: "hawcons-stroke-tennis-racket"
    IFHawconsStrokeTennisRacket                        = 0xe6a9,

    /// Identifier: "hawcons-stroke-basketball-hoop"
    IFHawconsStrokeBasketballHoop                      = 0xe6aa,

    /// Identifier: "hawcons-stroke-table-tennis"
    IFHawconsStrokeTableTennis                         = 0xe6ab,

    /// Identifier: "hawcons-stroke-volleyball"
    IFHawconsStrokeVolleyball                          = 0xe6ac,

    /// Identifier: "hawcons-stroke-stop-watch"
    IFHawconsStrokeStopWatch                           = 0xe6ad,

    /// Identifier: "hawcons-stroke-stop-watch2"
    IFHawconsStrokeStopWatch2                          = 0xe6ae,

    /// Identifier: "hawcons-stroke-hockey-stick"
    IFHawconsStrokeHockeyStick                         = 0xe6af,

    /// Identifier: "hawcons-stroke-hockey-sticks"
    IFHawconsStrokeHockeySticks                        = 0xe6b0,

    /// Identifier: "hawcons-stroke-shuttlecock"
    IFHawconsStrokeShuttlecock                         = 0xe6b1,

    /// Identifier: "hawcons-stroke-golf"
    IFHawconsStrokeGolf                                = 0xe6b2,

    /// Identifier: "hawcons-stroke-move"
    IFHawconsStrokeMove                                = 0xe6b3,

    /// Identifier: "hawcons-stroke-clipboard-move"
    IFHawconsStrokeClipboardMove                       = 0xe6b4,

    /// Identifier: "hawcons-stroke-award"
    IFHawconsStrokeAward                               = 0xe6b5,

    /// Identifier: "hawcons-stroke-award2"
    IFHawconsStrokeAward2                              = 0xe6b6,

    /// Identifier: "hawcons-stroke-award3"
    IFHawconsStrokeAward3                              = 0xe6b7,

    /// Identifier: "hawcons-stroke-award4"
    IFHawconsStrokeAward4                              = 0xe6b8,

    /// Identifier: "hawcons-stroke-medal3"
    IFHawconsStrokeMedal3                              = 0xe6b9,

    /// Identifier: "hawcons-stroke-medal4"
    IFHawconsStrokeMedal4                              = 0xe6ba,

    /// Identifier: "hawcons-stroke-boxing-glove"
    IFHawconsStrokeBoxingGlove                         = 0xe6bb,

    /// Identifier: "hawcons-stroke-whistle"
    IFHawconsStrokeWhistle                             = 0xe6bc,

    /// Identifier: "hawcons-stroke-volleyball-water"
    IFHawconsStrokeVolleyballWater                     = 0xe6bd,

    /// Identifier: "hawcons-stroke-checkered-flag"
    IFHawconsStrokeCheckeredFlag                       = 0xe6be,

    /// Identifier: "hawcons-stroke-target-arrow"
    IFHawconsStrokeTargetArrow                         = 0xe6bf,

    /// Identifier: "hawcons-stroke-target"
    IFHawconsStrokeTarget                              = 0xe6c0,

    /// Identifier: "hawcons-stroke-sailing-boat"
    IFHawconsStrokeSailingBoat                         = 0xe6c1,

    /// Identifier: "hawcons-stroke-sailing-boat-water"
    IFHawconsStrokeSailingBoatWater                    = 0xe6c2,

    /// Identifier: "hawcons-stroke-bowling-pins"
    IFHawconsStrokeBowlingPins                         = 0xe6c3,

    /// Identifier: "hawcons-stroke-bowling-pin-ball"
    IFHawconsStrokeBowlingPinBall                      = 0xe6c4,

    /// Identifier: "hawcons-stroke-diving-goggles"
    IFHawconsStrokeDivingGoggles                       = 0xe6c5,

    /// Identifier: "hawcons-stroke-sports-shoe"
    IFHawconsStrokeSportsShoe                          = 0xe6c6,

    /// Identifier: "hawcons-stroke-soccer-shoe"
    IFHawconsStrokeSoccerShoe                          = 0xe6c7,

    /// Identifier: "hawcons-stroke-ice-skate"
    IFHawconsStrokeIceSkate                            = 0xe6c8,

    /// Identifier: "hawcons-stroke-cloud2"
    IFHawconsStrokeCloud2                              = 0xe6c9,

    /// Identifier: "hawcons-stroke-cloud-sun"
    IFHawconsStrokeCloudSun                            = 0xe6ca,

    /// Identifier: "hawcons-stroke-cloud-moon"
    IFHawconsStrokeCloudMoon                           = 0xe6cb,

    /// Identifier: "hawcons-stroke-cloud-rain"
    IFHawconsStrokeCloudRain                           = 0xe6cc,

    /// Identifier: "hawcons-stroke-cloud-sun-rain"
    IFHawconsStrokeCloudSunRain                        = 0xe6cd,

    /// Identifier: "hawcons-stroke-cloud-moon-rain"
    IFHawconsStrokeCloudMoonRain                       = 0xe6ce,

    /// Identifier: "hawcons-stroke-cloud-snow"
    IFHawconsStrokeCloudSnow                           = 0xe6cf,

    /// Identifier: "hawcons-stroke-cloud-sun-snow"
    IFHawconsStrokeCloudSunSnow                        = 0xe6d0,

    /// Identifier: "hawcons-stroke-cloud-moon-snow"
    IFHawconsStrokeCloudMoonSnow                       = 0xe6d1,

    /// Identifier: "hawcons-stroke-cloud-lightning"
    IFHawconsStrokeCloudLightning                      = 0xe6d2,

    /// Identifier: "hawcons-stroke-cloud-sun-lightning"
    IFHawconsStrokeCloudSunLightning                   = 0xe6d3,

    /// Identifier: "hawcons-stroke-cloud-moon-lightning"
    IFHawconsStrokeCloudMoonLightning                  = 0xe6d4,

    /// Identifier: "hawcons-stroke-cloud-wind"
    IFHawconsStrokeCloudWind                           = 0xe6d5,

    /// Identifier: "hawcons-stroke-cloud-raindrops"
    IFHawconsStrokeCloudRaindrops                      = 0xe6d6,

    /// Identifier: "hawcons-stroke-cloud-sun-raindrops"
    IFHawconsStrokeCloudSunRaindrops                   = 0xe6d7,

    /// Identifier: "hawcons-stroke-cloud-moon-raindrops"
    IFHawconsStrokeCloudMoonRaindrops                  = 0xe6d8,

    /// Identifier: "hawcons-stroke-cloud-snowflakes"
    IFHawconsStrokeCloudSnowflakes                     = 0xe6d9,

    /// Identifier: "hawcons-stroke-cloud-sun-snowflakes"
    IFHawconsStrokeCloudSunSnowflakes                  = 0xe6da,

    /// Identifier: "hawcons-stroke-cloud-moon-snowflakes"
    IFHawconsStrokeCloudMoonSnowflakes                 = 0xe6db,

    /// Identifier: "hawcons-stroke-clouds"
    IFHawconsStrokeClouds                              = 0xe6dc,

    /// Identifier: "hawcons-stroke-cloud-add"
    IFHawconsStrokeCloudAdd                            = 0xe6dd,

    /// Identifier: "hawcons-stroke-cloud-remove"
    IFHawconsStrokeCloudRemove                         = 0xe6de,

    /// Identifier: "hawcons-stroke-cloud-error2"
    IFHawconsStrokeCloudError2                         = 0xe6df,

    /// Identifier: "hawcons-stroke-cloud-fog"
    IFHawconsStrokeCloudFog                            = 0xe6e0,

    /// Identifier: "hawcons-stroke--cloud-sun-fog"
    IFHawconsStrokeCloudSunFog                         = 0xe6e1,

    /// Identifier: "hawcons-stroke-cloud-moon-fog"
    IFHawconsStrokeCloudMoonFog                        = 0xe6e2,

    /// Identifier: "hawcons-stroke-moon-stars"
    IFHawconsStrokeMoonStars                           = 0xe6e3,

    /// Identifier: "hawcons-stroke-moon"
    IFHawconsStrokeMoon                                = 0xe6e4,

    /// Identifier: "hawcons-stroke-sun"
    IFHawconsStrokeSun                                 = 0xe6e5,

    /// Identifier: "hawcons-stroke-sunrise"
    IFHawconsStrokeSunrise                             = 0xe6e6,

    /// Identifier: "hawcons-stroke-sunset"
    IFHawconsStrokeSunset                              = 0xe6e7,

    /// Identifier: "hawcons-stroke-sunset2"
    IFHawconsStrokeSunset2                             = 0xe6e8,

    /// Identifier: "hawcons-stroke-sunset3"
    IFHawconsStrokeSunset3                             = 0xe6e9,

    /// Identifier: "hawcons-stroke-rainbow"
    IFHawconsStrokeRainbow                             = 0xe6ea,

    /// Identifier: "hawcons-stroke-umbrella"
    IFHawconsStrokeUmbrella                            = 0xe6eb,

    /// Identifier: "hawcons-stroke-raindrops"
    IFHawconsStrokeRaindrops                           = 0xe6ec,

    /// Identifier: "hawcons-stroke-raindrop"
    IFHawconsStrokeRaindrop                            = 0xe6ed,

    /// Identifier: "hawcons-stroke-sunglasses"
    IFHawconsStrokeSunglasses                          = 0xe6ee,

    /// Identifier: "hawcons-stroke-stars"
    IFHawconsStrokeStars                               = 0xe6ef,

    /// Identifier: "hawcons-stroke-clouds2"
    IFHawconsStrokeClouds2                             = 0xe6f0,

    /// Identifier: "hawcons-stroke-moonrise"
    IFHawconsStrokeMoonrise                            = 0xe6f1,

    /// Identifier: "hawcons-stroke-moonset"
    IFHawconsStrokeMoonset                             = 0xe6f2,

    /// Identifier: "hawcons-stroke-wind"
    IFHawconsStrokeWind                                = 0xe6f3,

    /// Identifier: "hawcons-stroke-full-moon"
    IFHawconsStrokeFullMoon                            = 0xe6f4,

    /// Identifier: "hawcons-stroke-crescent"
    IFHawconsStrokeCrescent                            = 0xe6f5,

    /// Identifier: "hawcons-stroke-half-moon"
    IFHawconsStrokeHalfMoon                            = 0xe6f6,

    /// Identifier: "hawcons-stroke-gibbous-moon"
    IFHawconsStrokeGibbousMoon                         = 0xe6f7,

    /// Identifier: "hawcons-stroke-moon2"
    IFHawconsStrokeMoon2                               = 0xe6f8,

    /// Identifier: "hawcons-stroke-gibbous-moon2"
    IFHawconsStrokeGibbousMoon2                        = 0xe6f9,

    /// Identifier: "hawcons-stroke-half-moon2"
    IFHawconsStrokeHalfMoon2                           = 0xe6fa,

    /// Identifier: "hawcons-stroke-crescent2"
    IFHawconsStrokeCrescent2                           = 0xe6fb,

    /// Identifier: "hawcons-stroke-barometer"
    IFHawconsStrokeBarometer                           = 0xe6fc,

    /// Identifier: "hawcons-stroke-compass-north"
    IFHawconsStrokeCompassNorth                        = 0xe6fd,

    /// Identifier: "hawcons-stroke-compass-west"
    IFHawconsStrokeCompassWest                         = 0xe6fe,

    /// Identifier: "hawcons-stroke-compass-east"
    IFHawconsStrokeCompassEast                         = 0xe6ff,

    /// Identifier: "hawcons-stroke-compass-south"
    IFHawconsStrokeCompassSouth                        = 0xe700,

    /// Identifier: "hawcons-stroke-air-sock"
    IFHawconsStrokeAirSock                             = 0xe701,

    /// Identifier: "hawcons-stroke-tornado"
    IFHawconsStrokeTornado                             = 0xe702,

    /// Identifier: "hawcons-stroke-degree-fahrenheit"
    IFHawconsStrokeDegreeFahrenheit                    = 0xe703,

    /// Identifier: "hawcons-stroke-degree-celsius"
    IFHawconsStrokeDegreeCelsius                       = 0xe704,

    /// Identifier: "hawcons-stroke-warning"
    IFHawconsStrokeWarning                             = 0xe705,

    /// Identifier: "hawcons-stroke-compass"
    IFHawconsStrokeCompass                             = 0xe706,

    /// Identifier: "hawcons-stroke-compass2"
    IFHawconsStrokeCompass2                            = 0xe707,

    /// Identifier: "hawcons-stroke-compass3"
    IFHawconsStrokeCompass3                            = 0xe708,

    /// Identifier: "hawcons-stroke-compass4"
    IFHawconsStrokeCompass4                            = 0xe709,

    /// Identifier: "hawcons-stroke-thermometer"
    IFHawconsStrokeThermometer                         = 0xe70a,

    /// Identifier: "hawcons-stroke-thermometer-low"
    IFHawconsStrokeThermometerLow                      = 0xe70b,

    /// Identifier: "hawcons-stroke-thermometer-quarter"
    IFHawconsStrokeThermometerQuarter                  = 0xe70c,

    /// Identifier: "hawcons-stroke-thermometer-half"
    IFHawconsStrokeThermometerHalf                     = 0xe70d,

    /// Identifier: "hawcons-stroke-thermometer-three-quarters"
    IFHawconsStrokeThermometerThreeQuarters            = 0xe70e,

    /// Identifier: "hawcons-stroke-thermometer-full"
    IFHawconsStrokeThermometerFull                     = 0xe70f,

    /// Identifier: "hawcons-stroke-lightning"
    IFHawconsStrokeLightning                           = 0xe710,

    /// Identifier: "hawcons-stroke-wind-turbine"
    IFHawconsStrokeWindTurbine                         = 0xe711,

    /// Identifier: "hawcons-stroke-snowflake"
    IFHawconsStrokeSnowflake                           = 0xe712,

    /// Identifier: "hawcons-stroke-flashed-face"
    IFHawconsStrokeFlashedFace                         = 0xe713,

    /// Identifier: "hawcons-stroke-flashed-face2"
    IFHawconsStrokeFlashedFace2                        = 0xe714,

    /// Identifier: "hawcons-stroke-flashed-face-glasses"
    IFHawconsStrokeFlashedFaceGlasses                  = 0xe715,

    /// Identifier: "hawcons-stroke-face-missing-moth"
    IFHawconsStrokeFaceMissingMoth                     = 0xe716,

    /// Identifier: "hawcons-stroke-neutral-face"
    IFHawconsStrokeNeutralFace                         = 0xe717,

    /// Identifier: "hawcons-stroke-smiling-face"
    IFHawconsStrokeSmilingFace                         = 0xe718,

    /// Identifier: "hawcons-stroke-sad-face"
    IFHawconsStrokeSadFace                             = 0xe719,

    /// Identifier: "hawcons-stroke-face-open-mouth"
    IFHawconsStrokeFaceOpenMouth                       = 0xe71a,

    /// Identifier: "hawcons-stroke-face-open-mouth2"
    IFHawconsStrokeFaceOpenMouth2                      = 0xe71b,

    /// Identifier: "hawcons-stroke-winking-face"
    IFHawconsStrokeWinkingFace                         = 0xe71c,

    /// Identifier: "hawcons-stroke-laughing-face"
    IFHawconsStrokeLaughingFace                        = 0xe71d,

    /// Identifier: "hawcons-stroke-laughing-face2"
    IFHawconsStrokeLaughingFace2                       = 0xe71e,

    /// Identifier: "hawcons-stroke-smirking-face"
    IFHawconsStrokeSmirkingFace                        = 0xe71f,

    /// Identifier: "hawcons-stroke-stubborn-face"
    IFHawconsStrokeStubbornFace                        = 0xe720,

    /// Identifier: "hawcons-stroke-neutral-face2"
    IFHawconsStrokeNeutralFace2                        = 0xe721,

    /// Identifier: "hawcons-stroke-sad-face2"
    IFHawconsStrokeSadFace2                            = 0xe722,

    /// Identifier: "hawcons-stroke-smiling-face2"
    IFHawconsStrokeSmilingFace2                        = 0xe723,

    /// Identifier: "hawcons-stroke-smiling-face-eyebrows"
    IFHawconsStrokeSmilingFaceEyebrows                 = 0xe724,

    /// Identifier: "hawcons-stroke-grinning-face-eyebrows"
    IFHawconsStrokeGrinningFaceEyebrows                = 0xe725,

    /// Identifier: "hawcons-stroke-sad-face-eyebrows"
    IFHawconsStrokeSadFaceEyebrows                     = 0xe726,

    /// Identifier: "hawcons-stroke-neutral-face-eyebrows"
    IFHawconsStrokeNeutralFaceEyebrows                 = 0xe727,

    /// Identifier: "hawcons-stroke-angry-face"
    IFHawconsStrokeAngryFace                           = 0xe728,

    /// Identifier: "hawcons-stroke-worried-face"
    IFHawconsStrokeWorriedFace                         = 0xe729,

    /// Identifier: "hawcons-stroke-winking-face2"
    IFHawconsStrokeWinkingFace2                        = 0xe72a,

    /// Identifier: "hawcons-stroke-angry-face-eyebrows"
    IFHawconsStrokeAngryFaceEyebrows                   = 0xe72b,

    /// Identifier: "hawcons-stroke-grinning-face"
    IFHawconsStrokeGrinningFace                        = 0xe72c,

    /// Identifier: "hawcons-stroke-sad-face3"
    IFHawconsStrokeSadFace3                            = 0xe72d,

    /// Identifier: "hawcons-stroke-grinning-face-eyebrows2"
    IFHawconsStrokeGrinningFaceEyebrows2               = 0xe72e,

    /// Identifier: "hawcons-stroke-fake-grinning-face-eyebrows"
    IFHawconsStrokeFakeGrinningFaceEyebrows            = 0xe72f,

    /// Identifier: "hawcons-stroke-worried-face-eyebrows"
    IFHawconsStrokeWorriedFaceEyebrows                 = 0xe730,

    /// Identifier: "hawcons-stroke-face-stuck-out-tongue"
    IFHawconsStrokeFaceStuckOutTongue                  = 0xe731,

    /// Identifier: "hawcons-stroke-face-stuck-out-tongue2"
    IFHawconsStrokeFaceStuckOutTongue2                 = 0xe732,

    /// Identifier: "hawcons-stroke-kissing-face"
    IFHawconsStrokeKissingFace                         = 0xe733,

    /// Identifier: "hawcons-stroke-grinning-face-teeth"
    IFHawconsStrokeGrinningFaceTeeth                   = 0xe734,

    /// Identifier: "hawcons-stroke-angry-face-teeth"
    IFHawconsStrokeAngryFaceTeeth                      = 0xe735,

    /// Identifier: "hawcons-stroke-worried-face-teeth"
    IFHawconsStrokeWorriedFaceTeeth                    = 0xe736,

    /// Identifier: "hawcons-stroke-grinning-face-teeth2"
    IFHawconsStrokeGrinningFaceTeeth2                  = 0xe737,

    /// Identifier: "hawcons-stroke-face-open-mouth-eyebrows"
    IFHawconsStrokeFaceOpenMouthEyebrows               = 0xe738,

    /// Identifier: "hawcons-stroke-face-open-mouth-eyebrows2"
    IFHawconsStrokeFaceOpenMouthEyebrows2              = 0xe739,

    /// Identifier: "hawcons-stroke-angry-face-open-mouth-eyebrows"
    IFHawconsStrokeAngryFaceOpenMouthEyebrows          = 0xe73a,

    /// Identifier: "hawcons-stroke-unamused-face-tightly-closed-eyes"
    IFHawconsStrokeUnamusedFaceTightlyClosedEyes       = 0xe73b,

    /// Identifier: "hawcons-stroke-sad-face--tightly-closed-eyes"
    IFHawconsStrokeSadFaceTightlyClosedEyes            = 0xe73c,

    /// Identifier: "hawcons-stroke-kissing-face2"
    IFHawconsStrokeKissingFace2                        = 0xe73d,

    /// Identifier: "hawcons-stroke-face-closed-meyes"
    IFHawconsStrokeFaceClosedMeyes                     = 0xe73e,

    /// Identifier: "hawcons-stroke-amused-face"
    IFHawconsStrokeAmusedFace                          = 0xe73f,

    /// Identifier: "hawcons-stroke-amused-face-closed-eyes"
    IFHawconsStrokeAmusedFaceClosedEyes                = 0xe740,

    /// Identifier: "hawcons-stroke-amused-face-closed-eyes2"
    IFHawconsStrokeAmusedFaceClosedEyes2               = 0xe741,

    /// Identifier: "hawcons-stroke-face-closed-eyes-open-mouth"
    IFHawconsStrokeFaceClosedEyesOpenMouth             = 0xe742,

    /// Identifier: "hawcons-stroke-face-closed-eyes-open-mouth2"
    IFHawconsStrokeFaceClosedEyesOpenMouth2            = 0xe743,

    /// Identifier: "hawcons-stroke-face-closed-eyes-open-mouth3"
    IFHawconsStrokeFaceClosedEyesOpenMouth3            = 0xe744,

    /// Identifier: "hawcons-stroke-laughing-face3"
    IFHawconsStrokeLaughingFace3                       = 0xe745,

    /// Identifier: "hawcons-stroke-smiling-face3"
    IFHawconsStrokeSmilingFace3                        = 0xe746,

    /// Identifier: "hawcons-stroke-grinning-face2"
    IFHawconsStrokeGrinningFace2                       = 0xe747,

    /// Identifier: "hawcons-stroke-sad-face4"
    IFHawconsStrokeSadFace4                            = 0xe748,

    /// Identifier: "hawcons-stroke-sad-face5"
    IFHawconsStrokeSadFace5                            = 0xe749,

    /// Identifier: "hawcons-stroke-sad-face-closed-eyes"
    IFHawconsStrokeSadFaceClosedEyes                   = 0xe74a,

    /// Identifier: "hawcons-stroke-sad-face6"
    IFHawconsStrokeSadFace6                            = 0xe74b,

    /// Identifier: "hawcons-stroke-smiling-face4"
    IFHawconsStrokeSmilingFace4                        = 0xe74c,

    /// Identifier: "hawcons-stroke-astonished-face"
    IFHawconsStrokeAstonishedFace                      = 0xe74d,

    /// Identifier: "hawcons-stroke-astonished-face2"
    IFHawconsStrokeAstonishedFace2                     = 0xe74e,

    /// Identifier: "hawcons-stroke-face-moustache"
    IFHawconsStrokeFaceMoustache                       = 0xe74f,

    /// Identifier: "hawcons-stroke-face-moustache2"
    IFHawconsStrokeFaceMoustache2                      = 0xe750,

    /// Identifier: "hawcons-stroke-face-glasses"
    IFHawconsStrokeFaceGlasses                         = 0xe751,

    /// Identifier: "hawcons-stroke-face-sunglasses"
    IFHawconsStrokeFaceSunglasses                      = 0xe752,

    /// Identifier: "hawcons-stroke-smirking-face-sunglasses"
    IFHawconsStrokeSmirkingFaceSunglasses              = 0xe753,

    /// Identifier: "hawcons-stroke-middle-finger"
    IFHawconsStrokeMiddleFinger                        = 0xe754,

    /// Identifier: "hawcons-stroke-rock-n-roll"
    IFHawconsStrokeRockNRoll                           = 0xe755,

    /// Identifier: "hawcons-stroke-high-five"
    IFHawconsStrokeHighFive                            = 0xe756,

    /// Identifier: "hawcons-stroke-thumb-up"
    IFHawconsStrokeThumbUp                             = 0xe757,

    /// Identifier: "hawcons-stroke-thumb-down"
    IFHawconsStrokeThumbDown                           = 0xe758,

    /// Identifier: "hawcons-stroke-thumb-up2"
    IFHawconsStrokeThumbUp2                            = 0xe759,

    /// Identifier: "hawcons-stroke-thumb-down2"
    IFHawconsStrokeThumbDown2                          = 0xe75a,

    /// Identifier: "hawcons-stroke-two-fingers-swipe-left"
    IFHawconsStrokeTwoFingersSwipeLeft                 = 0xe75b,

    /// Identifier: "hawcons-stroke-two-fingers-swipe-right"
    IFHawconsStrokeTwoFingersSwipeRight                = 0xe75c,

    /// Identifier: "hawcons-stroke-two-fingers-swipe-up"
    IFHawconsStrokeTwoFingersSwipeUp                   = 0xe75d,

    /// Identifier: "hawcons-stroke-two-fingers-swipe-down"
    IFHawconsStrokeTwoFingersSwipeDown                 = 0xe75e,

    /// Identifier: "hawcons-stroke-two-fingers"
    IFHawconsStrokeTwoFingers                          = 0xe75f,

    /// Identifier: "hawcons-stroke-three-fingers-double-tap"
    IFHawconsStrokeThreeFingersDoubleTap               = 0xe760,

    /// Identifier: "hawcons-stroke-two-fingers-resize-out"
    IFHawconsStrokeTwoFingersResizeOut                 = 0xe761,

    /// Identifier: "hawcons-stroke-two-fingers-resize-in"
    IFHawconsStrokeTwoFingersResizeIn                  = 0xe762,

    /// Identifier: "hawcons-stroke-two-fingers-rotate"
    IFHawconsStrokeTwoFingersRotate                    = 0xe763,

    /// Identifier: "hawcons-stroke-one-finger-swipe-left"
    IFHawconsStrokeOneFingerSwipeLeft                  = 0xe764,

    /// Identifier: "hawcons-stroke-one-finger-swipe-right"
    IFHawconsStrokeOneFingerSwipeRight                 = 0xe765,

    /// Identifier: "hawcons-stroke-one-finger-swipe-up"
    IFHawconsStrokeOneFingerSwipeUp                    = 0xe766,

    /// Identifier: "hawcons-stroke-one-finger-swipe-down"
    IFHawconsStrokeOneFingerSwipeDown                  = 0xe767,

    /// Identifier: "hawcons-stroke-one-finger"
    IFHawconsStrokeOneFinger                           = 0xe768,

    /// Identifier: "hawcons-stroke-one-finger-double-tap"
    IFHawconsStrokeOneFingerDoubleTap                  = 0xe769,

    /// Identifier: "hawcons-stroke-one-finger-tap"
    IFHawconsStrokeOneFingerTap                        = 0xe76a,

    /// Identifier: "hawcons-stroke-one-finger-tap-hold"
    IFHawconsStrokeOneFingerTapHold                    = 0xe76b,

    /// Identifier: "hawcons-stroke-thumb-finger-tap"
    IFHawconsStrokeThumbFingerTap                      = 0xe76c,

    /// Identifier: "hawcons-stroke-one-finger-click"
    IFHawconsStrokeOneFingerClick                      = 0xe76d,

    /// Identifier: "hawcons-stroke-three-fingers-swipe-left"
    IFHawconsStrokeThreeFingersSwipeLeft               = 0xe76e,

    /// Identifier: "hawcons-stroke-three-fingers-swipe-right"
    IFHawconsStrokeThreeFingersSwipeRight              = 0xe76f,

    /// Identifier: "hawcons-stroke-three-fingers-swipe-up"
    IFHawconsStrokeThreeFingersSwipeUp                 = 0xe770,

    /// Identifier: "hawcons-stroke-three-fingers-swipe-down"
    IFHawconsStrokeThreeFingersSwipeDown               = 0xe771,

    /// Identifier: "hawcons-stroke-three-fingers"
    IFHawconsStrokeThreeFingers                        = 0xe772,

    /// Identifier: "hawcons-stroke-three-fingers-double-tap2"
    IFHawconsStrokeThreeFingersDoubleTap2              = 0xe773,

    /// Identifier: "hawcons-stroke-two-fingers-swipe-up2"
    IFHawconsStrokeTwoFingersSwipeUp2                  = 0xe774,

    /// Identifier: "hawcons-stroke-one-finger-double-tap2"
    IFHawconsStrokeOneFingerDoubleTap2                 = 0xe775,

    /// Identifier: "hawcons-stroke-two-fingers-swipe-down2"
    IFHawconsStrokeTwoFingersSwipeDown2                = 0xe776,

    /// Identifier: "hawcons-stroke-two-fingers-swipe-right2"
    IFHawconsStrokeTwoFingersSwipeRight2               = 0xe777,

    /// Identifier: "hawcons-stroke-two-fingers-swipe-left2"
    IFHawconsStrokeTwoFingersSwipeLeft2                = 0xe778,

    /// Identifier: "hawcons-stroke-one-finger-tap2"
    IFHawconsStrokeOneFingerTap2                       = 0xe779,

    /// Identifier: "hawcons-stroke-one-finger-tap-hold2"
    IFHawconsStrokeOneFingerTapHold2                   = 0xe77a,

    /// Identifier: "hawcons-stroke-one-finger-click2"
    IFHawconsStrokeOneFingerClick2                     = 0xe77b,

    /// Identifier: "hawcons-stroke-one-finger-swipe-horizontally"
    IFHawconsStrokeOneFingerSwipeHorizontally          = 0xe77c,

    /// Identifier: "hawcons-stroke-one-finger-swipe"
    IFHawconsStrokeOneFingerSwipe                      = 0xe77d,

    /// Identifier: "hawcons-stroke-two-fingers-double-tap"
    IFHawconsStrokeTwoFingersDoubleTap                 = 0xe77e,

    /// Identifier: "hawcons-stroke-two-fingers-tap"
    IFHawconsStrokeTwoFingersTap                       = 0xe77f,

    /// Identifier: "hawcons-stroke-one-finger-swipe-left2"
    IFHawconsStrokeOneFingerSwipeLeft2                 = 0xe780,

    /// Identifier: "hawcons-stroke-one-finger-swipe-right2"
    IFHawconsStrokeOneFingerSwipeRight2                = 0xe781,

    /// Identifier: "hawcons-stroke-one-finger-swipe-up2"
    IFHawconsStrokeOneFingerSwipeUp2                   = 0xe782,

    /// Identifier: "hawcons-stroke-one-finger-swipe-down2"
    IFHawconsStrokeOneFingerSwipeDown2                 = 0xe783,

    /// Identifier: "hawcons-stroke-file-numbers"
    IFHawconsStrokeFileNumbers                         = 0xe784,

    /// Identifier: "hawcons-stroke-file-pages"
    IFHawconsStrokeFilePages                           = 0xe785,

    /// Identifier: "hawcons-stroke-file-app"
    IFHawconsStrokeFileApp                             = 0xe786,

    /// Identifier: "hawcons-stroke-file-png"
    IFHawconsStrokeFilePng                             = 0xe787,

    /// Identifier: "hawcons-stroke-file-pdf"
    IFHawconsStrokeFilePdf                             = 0xe788,

    /// Identifier: "hawcons-stroke-file-mp3"
    IFHawconsStrokeFileMp3                             = 0xe789,

    /// Identifier: "hawcons-stroke-file-mp4"
    IFHawconsStrokeFileMp4                             = 0xe78a,

    /// Identifier: "hawcons-stroke-file-mov"
    IFHawconsStrokeFileMov                             = 0xe78b,

    /// Identifier: "hawcons-stroke-file-jpg"
    IFHawconsStrokeFileJpg                             = 0xe78c,

    /// Identifier: "hawcons-stroke-file-key"
    IFHawconsStrokeFileKey                             = 0xe78d,

    /// Identifier: "hawcons-stroke-file-html"
    IFHawconsStrokeFileHtml                            = 0xe78e,

    /// Identifier: "hawcons-stroke-file-css"
    IFHawconsStrokeFileCss                             = 0xe78f,

    /// Identifier: "hawcons-stroke-file-java"
    IFHawconsStrokeFileJava                            = 0xe790,

    /// Identifier: "hawcons-stroke-file-psd"
    IFHawconsStrokeFilePsd                             = 0xe791,

    /// Identifier: "hawcons-stroke-file-ai"
    IFHawconsStrokeFileAi                              = 0xe792,

    /// Identifier: "hawcons-stroke-file-bmp"
    IFHawconsStrokeFileBmp                             = 0xe793,

    /// Identifier: "hawcons-stroke-file-dwg"
    IFHawconsStrokeFileDwg                             = 0xe794,

    /// Identifier: "hawcons-stroke-file-eps"
    IFHawconsStrokeFileEps                             = 0xe795,

    /// Identifier: "hawcons-stroke-file-tiff"
    IFHawconsStrokeFileTiff                            = 0xe796,

    /// Identifier: "hawcons-stroke-file-ots"
    IFHawconsStrokeFileOts                             = 0xe797,

    /// Identifier: "hawcons-stroke-file-php"
    IFHawconsStrokeFilePhp                             = 0xe798,

    /// Identifier: "hawcons-stroke-file-py"
    IFHawconsStrokeFilePy                              = 0xe799,

    /// Identifier: "hawcons-stroke-file-c"
    IFHawconsStrokeFileC                               = 0xe79a,

    /// Identifier: "hawcons-stroke-file-sql"
    IFHawconsStrokeFileSql                             = 0xe79b,

    /// Identifier: "hawcons-stroke-file-rb"
    IFHawconsStrokeFileRb                              = 0xe79c,

    /// Identifier: "hawcons-stroke-file-cpp"
    IFHawconsStrokeFileCpp                             = 0xe79d,

    /// Identifier: "hawcons-stroke-file-tga"
    IFHawconsStrokeFileTga                             = 0xe79e,

    /// Identifier: "hawcons-stroke-file-dxf"
    IFHawconsStrokeFileDxf                             = 0xe79f,

    /// Identifier: "hawcons-stroke-file-doc"
    IFHawconsStrokeFileDoc                             = 0xe7a0,

    /// Identifier: "hawcons-stroke-file-odt"
    IFHawconsStrokeFileOdt                             = 0xe7a1,

    /// Identifier: "hawcons-stroke-file-xls"
    IFHawconsStrokeFileXls                             = 0xe7a2,

    /// Identifier: "hawcons-stroke-file-docx"
    IFHawconsStrokeFileDocx                            = 0xe7a3,

    /// Identifier: "hawcons-stroke-file-ppt"
    IFHawconsStrokeFilePpt                             = 0xe7a4,

    /// Identifier: "hawcons-stroke-file-asp"
    IFHawconsStrokeFileAsp                             = 0xe7a5,

    /// Identifier: "hawcons-stroke-file-ics"
    IFHawconsStrokeFileIcs                             = 0xe7a6,

    /// Identifier: "hawcons-stroke-file-dat"
    IFHawconsStrokeFileDat                             = 0xe7a7,

    /// Identifier: "hawcons-stroke-file-xml"
    IFHawconsStrokeFileXml                             = 0xe7a8,

    /// Identifier: "hawcons-stroke-file-yml"
    IFHawconsStrokeFileYml                             = 0xe7a9,

    /// Identifier: "hawcons-stroke-file-h"
    IFHawconsStrokeFileH                               = 0xe7aa,

    /// Identifier: "hawcons-stroke-file-exe"
    IFHawconsStrokeFileExe                             = 0xe7ab,

    /// Identifier: "hawcons-stroke-file-avi"
    IFHawconsStrokeFileAvi                             = 0xe7ac,

    /// Identifier: "hawcons-stroke-file-odp"
    IFHawconsStrokeFileOdp                             = 0xe7ad,

    /// Identifier: "hawcons-stroke-file-dotx"
    IFHawconsStrokeFileDotx                            = 0xe7ae,

    /// Identifier: "hawcons-stroke-file-xlsx"
    IFHawconsStrokeFileXlsx                            = 0xe7af,

    /// Identifier: "hawcons-stroke-file-ods"
    IFHawconsStrokeFileOds                             = 0xe7b0,

    /// Identifier: "hawcons-stroke-file-pps"
    IFHawconsStrokeFilePps                             = 0xe7b1,

    /// Identifier: "hawcons-stroke-file-dot"
    IFHawconsStrokeFileDot                             = 0xe7b2,

    /// Identifier: "hawcons-stroke-file-txt"
    IFHawconsStrokeFileTxt                             = 0xe7b3,

    /// Identifier: "hawcons-stroke-file-rtf"
    IFHawconsStrokeFileRtf                             = 0xe7b4,

    /// Identifier: "hawcons-stroke-file-m4v"
    IFHawconsStrokeFileM4v                             = 0xe7b5,

    /// Identifier: "hawcons-stroke-file-flv"
    IFHawconsStrokeFileFlv                             = 0xe7b6,

    /// Identifier: "hawcons-stroke-file-mpg"
    IFHawconsStrokeFileMpg                             = 0xe7b7,

    /// Identifier: "hawcons-stroke-file-quicktime"
    IFHawconsStrokeFileQuicktime                       = 0xe7b8,

    /// Identifier: "hawcons-stroke-file-mid"
    IFHawconsStrokeFileMid                             = 0xe7b9,

    /// Identifier: "hawcons-stroke-file-3gp"
    IFHawconsStrokeFile3gp                             = 0xe7ba,

    /// Identifier: "hawcons-stroke-file-aiff"
    IFHawconsStrokeFileAiff                            = 0xe7bb,

    /// Identifier: "hawcons-stroke-file-aac"
    IFHawconsStrokeFileAac                             = 0xe7bc,

    /// Identifier: "hawcons-stroke-file-wav"
    IFHawconsStrokeFileWav                             = 0xe7bd,

    /// Identifier: "hawcons-stroke-file-zip"
    IFHawconsStrokeFileZip                             = 0xe7be,

    /// Identifier: "hawcons-stroke-file-ott"
    IFHawconsStrokeFileOtt                             = 0xe7bf,

    /// Identifier: "hawcons-stroke-file-tgz"
    IFHawconsStrokeFileTgz                             = 0xe7c0,

    /// Identifier: "hawcons-stroke-file-dmg"
    IFHawconsStrokeFileDmg                             = 0xe7c1,

    /// Identifier: "hawcons-stroke-file-iso"
    IFHawconsStrokeFileIso                             = 0xe7c2,

    /// Identifier: "hawcons-stroke-file-rar"
    IFHawconsStrokeFileRar                             = 0xe7c3,

    /// Identifier: "hawcons-stroke-file-gif"
    IFHawconsStrokeFileGif                             = 0xe7c4,

    /// Identifier: "hawcons-stroke-document-file-numbers"
    IFHawconsStrokeDocumentFileNumbers                 = 0xe7c5,

    /// Identifier: "hawcons-stroke-document-file-pages"
    IFHawconsStrokeDocumentFilePages                   = 0xe7c6,

    /// Identifier: "hawcons-stroke-document-file-app"
    IFHawconsStrokeDocumentFileApp                     = 0xe7c7,

    /// Identifier: "hawcons-stroke-document-file-png"
    IFHawconsStrokeDocumentFilePng                     = 0xe7c8,

    /// Identifier: "hawcons-stroke-document-file-pdf"
    IFHawconsStrokeDocumentFilePdf                     = 0xe7c9,

    /// Identifier: "hawcons-stroke-document-file-mp3"
    IFHawconsStrokeDocumentFileMp3                     = 0xe7ca,

    /// Identifier: "hawcons-stroke-document-file-mp4"
    IFHawconsStrokeDocumentFileMp4                     = 0xe7cb,

    /// Identifier: "hawcons-stroke-document-file-mov"
    IFHawconsStrokeDocumentFileMov                     = 0xe7cc,

    /// Identifier: "hawcons-stroke-document-file-jpg"
    IFHawconsStrokeDocumentFileJpg                     = 0xe7cd,

    /// Identifier: "hawcons-stroke-document-file-key"
    IFHawconsStrokeDocumentFileKey                     = 0xe7ce,

    /// Identifier: "hawcons-stroke-document-file-html"
    IFHawconsStrokeDocumentFileHtml                    = 0xe7cf,

    /// Identifier: "hawcons-stroke-document-file-css"
    IFHawconsStrokeDocumentFileCss                     = 0xe7d0,

    /// Identifier: "hawcons-stroke-document-file-java"
    IFHawconsStrokeDocumentFileJava                    = 0xe7d1,

    /// Identifier: "hawcons-stroke-document-file-psd"
    IFHawconsStrokeDocumentFilePsd                     = 0xe7d2,

    /// Identifier: "hawcons-stroke-document-file-ai"
    IFHawconsStrokeDocumentFileAi                      = 0xe7d3,

    /// Identifier: "hawcons-stroke-document-file-bmp"
    IFHawconsStrokeDocumentFileBmp                     = 0xe7d4,

    /// Identifier: "hawcons-stroke-document-file-dwg"
    IFHawconsStrokeDocumentFileDwg                     = 0xe7d5,

    /// Identifier: "hawcons-stroke-document-file-eps"
    IFHawconsStrokeDocumentFileEps                     = 0xe7d6,

    /// Identifier: "hawcons-stroke-document-file-tiff"
    IFHawconsStrokeDocumentFileTiff                    = 0xe7d7,

    /// Identifier: "hawcons-stroke-document-file-ots"
    IFHawconsStrokeDocumentFileOts                     = 0xe7d8,

    /// Identifier: "hawcons-stroke-document-file-php"
    IFHawconsStrokeDocumentFilePhp                     = 0xe7d9,

    /// Identifier: "hawcons-stroke-document-file-py"
    IFHawconsStrokeDocumentFilePy                      = 0xe7da,

    /// Identifier: "hawcons-stroke-document-file-c"
    IFHawconsStrokeDocumentFileC                       = 0xe7db,

    /// Identifier: "hawcons-stroke-document-file-sql"
    IFHawconsStrokeDocumentFileSql                     = 0xe7dc,

    /// Identifier: "hawcons-stroke-document-file-rb"
    IFHawconsStrokeDocumentFileRb                      = 0xe7dd,

    /// Identifier: "hawcons-stroke-document-file-cpp"
    IFHawconsStrokeDocumentFileCpp                     = 0xe7de,

    /// Identifier: "hawcons-stroke-document-file-tga"
    IFHawconsStrokeDocumentFileTga                     = 0xe7df,

    /// Identifier: "hawcons-stroke-document-file-dxf"
    IFHawconsStrokeDocumentFileDxf                     = 0xe7e0,

    /// Identifier: "hawcons-stroke-document-file-doc"
    IFHawconsStrokeDocumentFileDoc                     = 0xe7e1,

    /// Identifier: "hawcons-stroke-document-file-odt"
    IFHawconsStrokeDocumentFileOdt                     = 0xe7e2,

    /// Identifier: "hawcons-stroke-document-file-xls"
    IFHawconsStrokeDocumentFileXls                     = 0xe7e3,

    /// Identifier: "hawcons-stroke-document-file-docx"
    IFHawconsStrokeDocumentFileDocx                    = 0xe7e4,

    /// Identifier: "hawcons-stroke-document-file-ppt"
    IFHawconsStrokeDocumentFilePpt                     = 0xe7e5,

    /// Identifier: "hawcons-stroke-document-file-asp"
    IFHawconsStrokeDocumentFileAsp                     = 0xe7e6,

    /// Identifier: "hawcons-stroke-document-file-ics"
    IFHawconsStrokeDocumentFileIcs                     = 0xe7e7,

    /// Identifier: "hawcons-stroke-document-file-dat"
    IFHawconsStrokeDocumentFileDat                     = 0xe7e8,

    /// Identifier: "hawcons-stroke-document-file-xml"
    IFHawconsStrokeDocumentFileXml                     = 0xe7e9,

    /// Identifier: "hawcons-stroke-document-file-yml"
    IFHawconsStrokeDocumentFileYml                     = 0xe7ea,

    /// Identifier: "hawcons-stroke-document-file-h"
    IFHawconsStrokeDocumentFileH                       = 0xe7eb,

    /// Identifier: "hawcons-stroke-document-file-exe"
    IFHawconsStrokeDocumentFileExe                     = 0xe7ec,

    /// Identifier: "hawcons-stroke-document-file-avi"
    IFHawconsStrokeDocumentFileAvi                     = 0xe7ed,

    /// Identifier: "hawcons-stroke-document-file-odp"
    IFHawconsStrokeDocumentFileOdp                     = 0xe7ee,

    /// Identifier: "hawcons-stroke-document-file-dotx"
    IFHawconsStrokeDocumentFileDotx                    = 0xe7ef,

    /// Identifier: "hawcons-stroke-document-file-xlsx"
    IFHawconsStrokeDocumentFileXlsx                    = 0xe7f0,

    /// Identifier: "hawcons-stroke-document-file-ods"
    IFHawconsStrokeDocumentFileOds                     = 0xe7f1,

    /// Identifier: "hawcons-stroke-document-file-pps"
    IFHawconsStrokeDocumentFilePps                     = 0xe7f2,

    /// Identifier: "hawcons-stroke-document-file-dot"
    IFHawconsStrokeDocumentFileDot                     = 0xe7f3,

    /// Identifier: "hawcons-stroke-document-file-txt"
    IFHawconsStrokeDocumentFileTxt                     = 0xe7f4,

    /// Identifier: "hawcons-stroke-document-file-rtf"
    IFHawconsStrokeDocumentFileRtf                     = 0xe7f5,

    /// Identifier: "hawcons-stroke-document-file-m4v"
    IFHawconsStrokeDocumentFileM4v                     = 0xe7f6,

    /// Identifier: "hawcons-stroke-document-file-flv"
    IFHawconsStrokeDocumentFileFlv                     = 0xe7f7,

    /// Identifier: "hawcons-stroke-document-file-mpg"
    IFHawconsStrokeDocumentFileMpg                     = 0xe7f8,

    /// Identifier: "hawcons-stroke-document-file-qt"
    IFHawconsStrokeDocumentFileQt                      = 0xe7f9,

    /// Identifier: "hawcons-stroke-document-file-mid"
    IFHawconsStrokeDocumentFileMid                     = 0xe7fa,

    /// Identifier: "hawcons-stroke-document-file-3gp"
    IFHawconsStrokeDocumentFile3gp                     = 0xe7fb,

    /// Identifier: "hawcons-stroke-document-file-aiff"
    IFHawconsStrokeDocumentFileAiff                    = 0xe7fc,

    /// Identifier: "hawcons-stroke-document-file-aac"
    IFHawconsStrokeDocumentFileAac                     = 0xe7fd,

    /// Identifier: "hawcons-stroke-document-file-wav"
    IFHawconsStrokeDocumentFileWav                     = 0xe7fe,

    /// Identifier: "hawcons-stroke-document-file-zip"
    IFHawconsStrokeDocumentFileZip                     = 0xe7ff,

    /// Identifier: "hawcons-stroke-document-file-ott"
    IFHawconsStrokeDocumentFileOtt                     = 0xe800,

    /// Identifier: "hawcons-stroke-document-file-tgz"
    IFHawconsStrokeDocumentFileTgz                     = 0xe801,

    /// Identifier: "hawcons-stroke-document-file-dmg"
    IFHawconsStrokeDocumentFileDmg                     = 0xe802,

    /// Identifier: "hawcons-stroke-document-file-iso"
    IFHawconsStrokeDocumentFileIso                     = 0xe803,

    /// Identifier: "hawcons-stroke-document-file-rar"
    IFHawconsStrokeDocumentFileRar                     = 0xe804,

    /// Identifier: "hawcons-stroke-document-file-gif"
    IFHawconsStrokeDocumentFileGif                     = 0xe805,

};

/**
 * Hawcons, stroke style, v1.0 http://hawcons.com
 */
@interface IFHawconsStroke : IFIcon
@end
