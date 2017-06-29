#import "IFIcon.h"

/**
 * HawconsFilled icon types.
 */
typedef NS_ENUM(IFIconType, IFHawconsFilledType) {

    /// Identifier: "hawcons-filled-mail-envelope"
    IFHawconsFilledMailEnvelope                        = 0xe600,

    /// Identifier: "hawcons-filled-mail-envelope-open"
    IFHawconsFilledMailEnvelopeOpen                    = 0xe601,

    /// Identifier: "hawcons-filled-mail-envelope-closed"
    IFHawconsFilledMailEnvelopeClosed                  = 0xe602,

    /// Identifier: "hawcons-filled-mail-envelope-open2"
    IFHawconsFilledMailEnvelopeOpen2                   = 0xe603,

    /// Identifier: "hawcons-filled-mail-envelope-open3"
    IFHawconsFilledMailEnvelopeOpen3                   = 0xe604,

    /// Identifier: "hawcons-filled-mail-envelope-closed2"
    IFHawconsFilledMailEnvelopeClosed2                 = 0xe605,

    /// Identifier: "hawcons-filled-mail-envelope-open4"
    IFHawconsFilledMailEnvelopeOpen4                   = 0xe606,

    /// Identifier: "hawcons-filled-mail-error"
    IFHawconsFilledMailError                           = 0xe607,

    /// Identifier: "hawcons-filled-mail-checked"
    IFHawconsFilledMailChecked                         = 0xe608,

    /// Identifier: "hawcons-filled-mail-cancel"
    IFHawconsFilledMailCancel                          = 0xe609,

    /// Identifier: "hawcons-filled-mail--forbidden"
    IFHawconsFilledMailForbidden                       = 0xe60a,

    /// Identifier: "hawcons-filled-mail-add"
    IFHawconsFilledMailAdd                             = 0xe60b,

    /// Identifier: "hawcons-filled-mail-remove"
    IFHawconsFilledMailRemove                          = 0xe60c,

    /// Identifier: "hawcons-filled-flag"
    IFHawconsFilledFlag                                = 0xe60d,

    /// Identifier: "hawcons-filled-flag2"
    IFHawconsFilledFlag2                               = 0xe60e,

    /// Identifier: "hawcons-filled-flag3"
    IFHawconsFilledFlag3                               = 0xe60f,

    /// Identifier: "hawcons-filled-flag4"
    IFHawconsFilledFlag4                               = 0xe610,

    /// Identifier: "hawcons-filled-bookmark"
    IFHawconsFilledBookmark                            = 0xe611,

    /// Identifier: "hawcons-filled-bookmark-add"
    IFHawconsFilledBookmarkAdd                         = 0xe612,

    /// Identifier: "hawcons-filled-bookmark-remove"
    IFHawconsFilledBookmarkRemove                      = 0xe613,

    /// Identifier: "hawcons-filled-eye-hidden"
    IFHawconsFilledEyeHidden                           = 0xe614,

    /// Identifier: "hawcons-filled-eye"
    IFHawconsFilledEye                                 = 0xe615,

    /// Identifier: "hawcons-filled-star"
    IFHawconsFilledStar                                = 0xe616,

    /// Identifier: "hawcons-filled-key"
    IFHawconsFilledKey                                 = 0xe617,

    /// Identifier: "hawcons-filled-key2"
    IFHawconsFilledKey2                                = 0xe618,

    /// Identifier: "hawcons-filled-trash-can"
    IFHawconsFilledTrashCan                            = 0xe619,

    /// Identifier: "hawcons-filled-trash-can2"
    IFHawconsFilledTrashCan2                           = 0xe61a,

    /// Identifier: "hawcons-filled-information"
    IFHawconsFilledInformation                         = 0xe61b,

    /// Identifier: "hawcons-filled-information2"
    IFHawconsFilledInformation2                        = 0xe61c,

    /// Identifier: "hawcons-filled-book"
    IFHawconsFilledBook                                = 0xe61d,

    /// Identifier: "hawcons-filled-book-bookmark"
    IFHawconsFilledBookBookmark                        = 0xe61e,

    /// Identifier: "hawcons-filled-clipboard-edit"
    IFHawconsFilledClipboardEdit                       = 0xe61f,

    /// Identifier: "hawcons-filled-clipboard-add"
    IFHawconsFilledClipboardAdd                        = 0xe620,

    /// Identifier: "hawcons-filled-clipboard-remove"
    IFHawconsFilledClipboardRemove                     = 0xe621,

    /// Identifier: "hawcons-filled-clipboard"
    IFHawconsFilledClipboard                           = 0xe622,

    /// Identifier: "hawcons-filled-clipboard-download"
    IFHawconsFilledClipboardDownload                   = 0xe623,

    /// Identifier: "hawcons-filled-clipboard-upload"
    IFHawconsFilledClipboardUpload                     = 0xe624,

    /// Identifier: "hawcons-filled-clipboard-checked"
    IFHawconsFilledClipboardChecked                    = 0xe625,

    /// Identifier: "hawcons-filled-clipboard-text"
    IFHawconsFilledClipboardText                       = 0xe626,

    /// Identifier: "hawcons-filled-clipboard-list"
    IFHawconsFilledClipboardList                       = 0xe627,

    /// Identifier: "hawcons-filled-note"
    IFHawconsFilledNote                                = 0xe628,

    /// Identifier: "hawcons-filled-note-add"
    IFHawconsFilledNoteAdd                             = 0xe629,

    /// Identifier: "hawcons-filled-note-remove"
    IFHawconsFilledNoteRemove                          = 0xe62a,

    /// Identifier: "hawcons-filled-note-text"
    IFHawconsFilledNoteText                            = 0xe62b,

    /// Identifier: "hawcons-filled-note-list"
    IFHawconsFilledNoteList                            = 0xe62c,

    /// Identifier: "hawcons-filled-note-checked"
    IFHawconsFilledNoteChecked                         = 0xe62d,

    /// Identifier: "hawcons-filled-note-important"
    IFHawconsFilledNoteImportant                       = 0xe62e,

    /// Identifier: "hawcons-filled-notebook"
    IFHawconsFilledNotebook                            = 0xe62f,

    /// Identifier: "hawcons-filled-notebook2"
    IFHawconsFilledNotebook2                           = 0xe630,

    /// Identifier: "hawcons-filled-notebook3"
    IFHawconsFilledNotebook3                           = 0xe631,

    /// Identifier: "hawcons-filled-notebook4"
    IFHawconsFilledNotebook4                           = 0xe632,

    /// Identifier: "hawcons-filled-notebook-text"
    IFHawconsFilledNotebookText                        = 0xe633,

    /// Identifier: "hawcons-filled-notebook-list"
    IFHawconsFilledNotebookList                        = 0xe634,

    /// Identifier: "hawcons-filled-document"
    IFHawconsFilledDocument                            = 0xe635,

    /// Identifier: "hawcons-filled-document-text"
    IFHawconsFilledDocumentText                        = 0xe636,

    /// Identifier: "hawcons-filled-document-text2"
    IFHawconsFilledDocumentText2                       = 0xe637,

    /// Identifier: "hawcons-filled-document-download"
    IFHawconsFilledDocumentDownload                    = 0xe638,

    /// Identifier: "hawcons-filled-document-upload"
    IFHawconsFilledDocumentUpload                      = 0xe639,

    /// Identifier: "hawcons-filled-document-bookmark"
    IFHawconsFilledDocumentBookmark                    = 0xe63a,

    /// Identifier: "hawcons-filled-document-diagrams"
    IFHawconsFilledDocumentDiagrams                    = 0xe63b,

    /// Identifier: "hawcons-filled-document-recording"
    IFHawconsFilledDocumentRecording                   = 0xe63c,

    /// Identifier: "hawcons-filled-document-table"
    IFHawconsFilledDocumentTable                       = 0xe63d,

    /// Identifier: "hawcons-filled-document-music"
    IFHawconsFilledDocumentMusic                       = 0xe63e,

    /// Identifier: "hawcons-filled-document-movie"
    IFHawconsFilledDocumentMovie                       = 0xe63f,

    /// Identifier: "hawcons-filled-document-play"
    IFHawconsFilledDocumentPlay                        = 0xe640,

    /// Identifier: "hawcons-filled-document-graph"
    IFHawconsFilledDocumentGraph                       = 0xe641,

    /// Identifier: "hawcons-filled-document-time"
    IFHawconsFilledDocumentTime                        = 0xe642,

    /// Identifier: "hawcons-filled-document-text3"
    IFHawconsFilledDocumentText3                       = 0xe643,

    /// Identifier: "hawcons-filled-document-code"
    IFHawconsFilledDocumentCode                        = 0xe644,

    /// Identifier: "hawcons-filled-document-cloud"
    IFHawconsFilledDocumentCloud                       = 0xe645,

    /// Identifier: "hawcons-filled-documents"
    IFHawconsFilledDocuments                           = 0xe646,

    /// Identifier: "hawcons-filled-documents2"
    IFHawconsFilledDocuments2                          = 0xe647,

    /// Identifier: "hawcons-filled-document-search"
    IFHawconsFilledDocumentSearch                      = 0xe648,

    /// Identifier: "hawcons-filled-document-star"
    IFHawconsFilledDocumentStar                        = 0xe649,

    /// Identifier: "hawcons-filled-document-unlocked"
    IFHawconsFilledDocumentUnlocked                    = 0xe64a,

    /// Identifier: "hawcons-filled-document-locked"
    IFHawconsFilledDocumentLocked                      = 0xe64b,

    /// Identifier: "hawcons-filled-document-error"
    IFHawconsFilledDocumentError                       = 0xe64c,

    /// Identifier: "hawcons-filled-document-cancel"
    IFHawconsFilledDocumentCancel                      = 0xe64d,

    /// Identifier: "hawcons-filled-document-checked"
    IFHawconsFilledDocumentChecked                     = 0xe64e,

    /// Identifier: "hawcons-filled-document-add"
    IFHawconsFilledDocumentAdd                         = 0xe64f,

    /// Identifier: "hawcons-filled-document-remove"
    IFHawconsFilledDocumentRemove                      = 0xe650,

    /// Identifier: "hawcons-filled-document-forbidden"
    IFHawconsFilledDocumentForbidden                   = 0xe651,

    /// Identifier: "hawcons-filled-document-information"
    IFHawconsFilledDocumentInformation                 = 0xe652,

    /// Identifier: "hawcons-filled-folder-information"
    IFHawconsFilledFolderInformation                   = 0xe653,

    /// Identifier: "hawcons-filled-document-list"
    IFHawconsFilledDocumentList                        = 0xe654,

    /// Identifier: "hawcons-filled-document-font"
    IFHawconsFilledDocumentFont                        = 0xe655,

    /// Identifier: "hawcons-filled-inbox"
    IFHawconsFilledInbox                               = 0xe656,

    /// Identifier: "hawcons-filled-inboxes"
    IFHawconsFilledInboxes                             = 0xe657,

    /// Identifier: "hawcons-filled-inbox-document"
    IFHawconsFilledInboxDocument                       = 0xe658,

    /// Identifier: "hawcons-filled-inbox-document-text"
    IFHawconsFilledInboxDocumentText                   = 0xe659,

    /// Identifier: "hawcons-filled-inbox-download"
    IFHawconsFilledInboxDownload                       = 0xe65a,

    /// Identifier: "hawcons-filled-inbox-upload"
    IFHawconsFilledInboxUpload                         = 0xe65b,

    /// Identifier: "hawcons-filled-folder"
    IFHawconsFilledFolder                              = 0xe65c,

    /// Identifier: "hawcons-filled-folder2"
    IFHawconsFilledFolder2                             = 0xe65d,

    /// Identifier: "hawcons-filled-folders"
    IFHawconsFilledFolders                             = 0xe65e,

    /// Identifier: "hawcons-filled-folder-download"
    IFHawconsFilledFolderDownload                      = 0xe65f,

    /// Identifier: "hawcons-filled-folder-upload"
    IFHawconsFilledFolderUpload                        = 0xe660,

    /// Identifier: "hawcons-filled-folder-unlocked"
    IFHawconsFilledFolderUnlocked                      = 0xe661,

    /// Identifier: "hawcons-filled-folder-locked"
    IFHawconsFilledFolderLocked                        = 0xe662,

    /// Identifier: "hawcons-filled-folder-search"
    IFHawconsFilledFolderSearch                        = 0xe663,

    /// Identifier: "hawcons-filled-folder-error"
    IFHawconsFilledFolderError                         = 0xe664,

    /// Identifier: "hawcons-filled-folder-cancel"
    IFHawconsFilledFolderCancel                        = 0xe665,

    /// Identifier: "hawcons-filled-folder-checked"
    IFHawconsFilledFolderChecked                       = 0xe666,

    /// Identifier: "hawcons-filled-folder-add"
    IFHawconsFilledFolderAdd                           = 0xe667,

    /// Identifier: "hawcons-filled-folder-remove"
    IFHawconsFilledFolderRemove                        = 0xe668,

    /// Identifier: "hawcons-filled-folder-forbidden"
    IFHawconsFilledFolderForbidden                     = 0xe669,

    /// Identifier: "hawcons-filled-folder-bookmark"
    IFHawconsFilledFolderBookmark                      = 0xe66a,

    /// Identifier: "hawcons-filled-document-zip"
    IFHawconsFilledDocumentZip                         = 0xe66b,

    /// Identifier: "hawcons-filled-zip"
    IFHawconsFilledZip                                 = 0xe66c,

    /// Identifier: "hawcons-filled-search"
    IFHawconsFilledSearch                              = 0xe66d,

    /// Identifier: "hawcons-filled-search-plus"
    IFHawconsFilledSearchPlus                          = 0xe66e,

    /// Identifier: "hawcons-filled-search-minus"
    IFHawconsFilledSearchMinus                         = 0xe66f,

    /// Identifier: "hawcons-filled-lock"
    IFHawconsFilledLock                                = 0xe670,

    /// Identifier: "hawcons-filled-lock-open"
    IFHawconsFilledLockOpen                            = 0xe671,

    /// Identifier: "hawcons-filled-lock-open2"
    IFHawconsFilledLockOpen2                           = 0xe672,

    /// Identifier: "hawcons-filled-lock-stripes"
    IFHawconsFilledLockStripes                         = 0xe673,

    /// Identifier: "hawcons-filled-lock-rounded"
    IFHawconsFilledLockRounded                         = 0xe674,

    /// Identifier: "hawcons-filled-lock-rounded-open"
    IFHawconsFilledLockRoundedOpen                     = 0xe675,

    /// Identifier: "hawcons-filled-lock-rounded-open2"
    IFHawconsFilledLockRoundedOpen2                    = 0xe676,

    /// Identifier: "hawcons-filled-combination-lock"
    IFHawconsFilledCombinationLock                     = 0xe677,

    /// Identifier: "hawcons-filled-printer"
    IFHawconsFilledPrinter                             = 0xe678,

    /// Identifier: "hawcons-filled-printer2"
    IFHawconsFilledPrinter2                            = 0xe679,

    /// Identifier: "hawcons-filled-printer-text"
    IFHawconsFilledPrinterText                         = 0xe67a,

    /// Identifier: "hawcons-filled-printer-text2"
    IFHawconsFilledPrinterText2                        = 0xe67b,

    /// Identifier: "hawcons-filled-document-shred"
    IFHawconsFilledDocumentShred                       = 0xe67c,

    /// Identifier: "hawcons-filled-shredder"
    IFHawconsFilledShredder                            = 0xe67d,

    /// Identifier: "hawcons-filled-document-scan"
    IFHawconsFilledDocumentScan                        = 0xe67e,

    /// Identifier: "hawcons-filled-cloud-download"
    IFHawconsFilledCloudDownload                       = 0xe67f,

    /// Identifier: "hawcons-filled-cloud-upload"
    IFHawconsFilledCloudUpload                         = 0xe680,

    /// Identifier: "hawcons-filled-cloud-error"
    IFHawconsFilledCloudError                          = 0xe681,

    /// Identifier: "hawcons-filled-cloud"
    IFHawconsFilledCloud                               = 0xe682,

    /// Identifier: "hawcons-filled-inbox-filled"
    IFHawconsFilledInboxFilled                         = 0xe683,

    /// Identifier: "hawcons-filled-pen"
    IFHawconsFilledPen                                 = 0xe684,

    /// Identifier: "hawcons-filled-pen-angled"
    IFHawconsFilledPenAngled                           = 0xe685,

    /// Identifier: "hawcons-filled-document-edit"
    IFHawconsFilledDocumentEdit                        = 0xe686,

    /// Identifier: "hawcons-filled-document-certificate"
    IFHawconsFilledDocumentCertificate                 = 0xe687,

    /// Identifier: "hawcons-filled-certificate"
    IFHawconsFilledCertificate                         = 0xe688,

    /// Identifier: "hawcons-filled-package"
    IFHawconsFilledPackage                             = 0xe689,

    /// Identifier: "hawcons-filled-box"
    IFHawconsFilledBox                                 = 0xe68a,

    /// Identifier: "hawcons-filled-box-filled"
    IFHawconsFilledBoxFilled                           = 0xe68b,

    /// Identifier: "hawcons-filled-box2"
    IFHawconsFilledBox2                                = 0xe68c,

    /// Identifier: "hawcons-filled-box3"
    IFHawconsFilledBox3                                = 0xe68d,

    /// Identifier: "hawcons-filled-box-bookmark"
    IFHawconsFilledBoxBookmark                         = 0xe68e,

    /// Identifier: "hawcons-filled-tag-cord"
    IFHawconsFilledTagCord                             = 0xe68f,

    /// Identifier: "hawcons-filled-tag"
    IFHawconsFilledTag                                 = 0xe690,

    /// Identifier: "hawcons-filled-tags"
    IFHawconsFilledTags                                = 0xe691,

    /// Identifier: "hawcons-filled-tag-add"
    IFHawconsFilledTagAdd                              = 0xe692,

    /// Identifier: "hawcons-filled-tag-remove"
    IFHawconsFilledTagRemove                           = 0xe693,

    /// Identifier: "hawcons-filled-tag-checked"
    IFHawconsFilledTagChecked                          = 0xe694,

    /// Identifier: "hawcons-filled-tag-cancel"
    IFHawconsFilledTagCancel                           = 0xe695,

    /// Identifier: "hawcons-filled-paperclip"
    IFHawconsFilledPaperclip                           = 0xe696,

    /// Identifier: "hawcons-filled-basketball"
    IFHawconsFilledBasketball                          = 0xe697,

    /// Identifier: "hawcons-filled-baseball"
    IFHawconsFilledBaseball                            = 0xe698,

    /// Identifier: "hawcons-filled-tennis-ball"
    IFHawconsFilledTennisBall                          = 0xe699,

    /// Identifier: "hawcons-filled-bowling-ball"
    IFHawconsFilledBowlingBall                         = 0xe69a,

    /// Identifier: "hawcons-filled-billiard-ball"
    IFHawconsFilledBilliardBall                        = 0xe69b,

    /// Identifier: "hawcons-filled-soccer-ball"
    IFHawconsFilledSoccerBall                          = 0xe69c,

    /// Identifier: "hawcons-filled-soccer-court"
    IFHawconsFilledSoccerCourt                         = 0xe69d,

    /// Identifier: "hawcons-filled-football"
    IFHawconsFilledFootball                            = 0xe69e,

    /// Identifier: "hawcons-filled-football2"
    IFHawconsFilledFootball2                           = 0xe69f,

    /// Identifier: "hawcons-filled-basketball2"
    IFHawconsFilledBasketball2                         = 0xe6a0,

    /// Identifier: "hawcons-filled-baseball-set"
    IFHawconsFilledBaseballSet                         = 0xe6a1,

    /// Identifier: "hawcons-filled-tennis-ball2"
    IFHawconsFilledTennisBall2                         = 0xe6a2,

    /// Identifier: "hawcons-filled-trophy"
    IFHawconsFilledTrophy                              = 0xe6a3,

    /// Identifier: "hawcons-filled-trophy-one"
    IFHawconsFilledTrophyOne                           = 0xe6a4,

    /// Identifier: "hawcons-filled-trophy2"
    IFHawconsFilledTrophy2                             = 0xe6a5,

    /// Identifier: "hawcons-filled-medal"
    IFHawconsFilledMedal                               = 0xe6a6,

    /// Identifier: "hawcons-filled-medal2"
    IFHawconsFilledMedal2                              = 0xe6a7,

    /// Identifier: "hawcons-filled-weights"
    IFHawconsFilledWeights                             = 0xe6a8,

    /// Identifier: "hawcons-filled-tennis-racket"
    IFHawconsFilledTennisRacket                        = 0xe6a9,

    /// Identifier: "hawcons-filled-basketball-hoop"
    IFHawconsFilledBasketballHoop                      = 0xe6aa,

    /// Identifier: "hawcons-filled-table-tennis"
    IFHawconsFilledTableTennis                         = 0xe6ab,

    /// Identifier: "hawcons-filled-volleyball"
    IFHawconsFilledVolleyball                          = 0xe6ac,

    /// Identifier: "hawcons-filled-stop-watch"
    IFHawconsFilledStopWatch                           = 0xe6ad,

    /// Identifier: "hawcons-filled-stop-watch2"
    IFHawconsFilledStopWatch2                          = 0xe6ae,

    /// Identifier: "hawcons-filled-hockey-stick"
    IFHawconsFilledHockeyStick                         = 0xe6af,

    /// Identifier: "hawcons-filled-hockey-sticks"
    IFHawconsFilledHockeySticks                        = 0xe6b0,

    /// Identifier: "hawcons-filled-shuttlecock"
    IFHawconsFilledShuttlecock                         = 0xe6b1,

    /// Identifier: "hawcons-filled-golf"
    IFHawconsFilledGolf                                = 0xe6b2,

    /// Identifier: "hawcons-filled-move"
    IFHawconsFilledMove                                = 0xe6b3,

    /// Identifier: "hawcons-filled-clipboard-move"
    IFHawconsFilledClipboardMove                       = 0xe6b4,

    /// Identifier: "hawcons-filled-award"
    IFHawconsFilledAward                               = 0xe6b5,

    /// Identifier: "hawcons-filled-award2"
    IFHawconsFilledAward2                              = 0xe6b6,

    /// Identifier: "hawcons-filled-award3"
    IFHawconsFilledAward3                              = 0xe6b7,

    /// Identifier: "hawcons-filled-award4"
    IFHawconsFilledAward4                              = 0xe6b8,

    /// Identifier: "hawcons-filled-medal3"
    IFHawconsFilledMedal3                              = 0xe6b9,

    /// Identifier: "hawcons-filled-medal4"
    IFHawconsFilledMedal4                              = 0xe6ba,

    /// Identifier: "hawcons-filled-boxing-glove"
    IFHawconsFilledBoxingGlove                         = 0xe6bb,

    /// Identifier: "hawcons-filled-whistle"
    IFHawconsFilledWhistle                             = 0xe6bc,

    /// Identifier: "hawcons-filled-volleyball-water"
    IFHawconsFilledVolleyballWater                     = 0xe6bd,

    /// Identifier: "hawcons-filled-checkered-flag"
    IFHawconsFilledCheckeredFlag                       = 0xe6be,

    /// Identifier: "hawcons-filled-target-arrow"
    IFHawconsFilledTargetArrow                         = 0xe6bf,

    /// Identifier: "hawcons-filled-target"
    IFHawconsFilledTarget                              = 0xe6c0,

    /// Identifier: "hawcons-filled-sailing-boat"
    IFHawconsFilledSailingBoat                         = 0xe6c1,

    /// Identifier: "hawcons-filled-sailing-boat-water"
    IFHawconsFilledSailingBoatWater                    = 0xe6c2,

    /// Identifier: "hawcons-filled-bowling-pins"
    IFHawconsFilledBowlingPins                         = 0xe6c3,

    /// Identifier: "hawcons-filled-bowling-pin-ball"
    IFHawconsFilledBowlingPinBall                      = 0xe6c4,

    /// Identifier: "hawcons-filled-diving-goggles"
    IFHawconsFilledDivingGoggles                       = 0xe6c5,

    /// Identifier: "hawcons-filled-sports-shoe"
    IFHawconsFilledSportsShoe                          = 0xe6c6,

    /// Identifier: "hawcons-filled-soccer-shoe"
    IFHawconsFilledSoccerShoe                          = 0xe6c7,

    /// Identifier: "hawcons-filled-ice-skate"
    IFHawconsFilledIceSkate                            = 0xe6c8,

    /// Identifier: "hawcons-filled-cloud2"
    IFHawconsFilledCloud2                              = 0xe6c9,

    /// Identifier: "hawcons-filled-cloud-sun"
    IFHawconsFilledCloudSun                            = 0xe6ca,

    /// Identifier: "hawcons-filled-cloud-moon"
    IFHawconsFilledCloudMoon                           = 0xe6cb,

    /// Identifier: "hawcons-filled-cloud-rain"
    IFHawconsFilledCloudRain                           = 0xe6cc,

    /// Identifier: "hawcons-filled-cloud-sun-rain"
    IFHawconsFilledCloudSunRain                        = 0xe6cd,

    /// Identifier: "hawcons-filled-cloud-moon-rain"
    IFHawconsFilledCloudMoonRain                       = 0xe6ce,

    /// Identifier: "hawcons-filled-cloud-snow"
    IFHawconsFilledCloudSnow                           = 0xe6cf,

    /// Identifier: "hawcons-filled-cloud-sun-snow"
    IFHawconsFilledCloudSunSnow                        = 0xe6d0,

    /// Identifier: "hawcons-filled-cloud-moon-snow"
    IFHawconsFilledCloudMoonSnow                       = 0xe6d1,

    /// Identifier: "hawcons-filled-cloud-lightning"
    IFHawconsFilledCloudLightning                      = 0xe6d2,

    /// Identifier: "hawcons-filled-cloud-sun-lightning"
    IFHawconsFilledCloudSunLightning                   = 0xe6d3,

    /// Identifier: "hawcons-filled-cloud-moon-lightning"
    IFHawconsFilledCloudMoonLightning                  = 0xe6d4,

    /// Identifier: "hawcons-filled-cloud-wind"
    IFHawconsFilledCloudWind                           = 0xe6d5,

    /// Identifier: "hawcons-filled-cloud-raindrops"
    IFHawconsFilledCloudRaindrops                      = 0xe6d6,

    /// Identifier: "hawcons-filled-cloud-sun-raindrops"
    IFHawconsFilledCloudSunRaindrops                   = 0xe6d7,

    /// Identifier: "hawcons-filled-cloud-moon-raindrops"
    IFHawconsFilledCloudMoonRaindrops                  = 0xe6d8,

    /// Identifier: "hawcons-filled-cloud-snowflakes"
    IFHawconsFilledCloudSnowflakes                     = 0xe6d9,

    /// Identifier: "hawcons-filled-cloud-sun-snowflakes"
    IFHawconsFilledCloudSunSnowflakes                  = 0xe6da,

    /// Identifier: "hawcons-filled-cloud-moon-snowflakes"
    IFHawconsFilledCloudMoonSnowflakes                 = 0xe6db,

    /// Identifier: "hawcons-filled-clouds"
    IFHawconsFilledClouds                              = 0xe6dc,

    /// Identifier: "hawcons-filled-cloud-add"
    IFHawconsFilledCloudAdd                            = 0xe6dd,

    /// Identifier: "hawcons-filled-cloud-remove"
    IFHawconsFilledCloudRemove                         = 0xe6de,

    /// Identifier: "hawcons-filled-cloud-error2"
    IFHawconsFilledCloudError2                         = 0xe6df,

    /// Identifier: "hawcons-filled-cloud-fog"
    IFHawconsFilledCloudFog                            = 0xe6e0,

    /// Identifier: "hawcons-filled--cloud-sun-fog"
    IFHawconsFilledCloudSunFog                         = 0xe6e1,

    /// Identifier: "hawcons-filled-cloud-moon-fog"
    IFHawconsFilledCloudMoonFog                        = 0xe6e2,

    /// Identifier: "hawcons-filled-moon-stars"
    IFHawconsFilledMoonStars                           = 0xe6e3,

    /// Identifier: "hawcons-filled-moon"
    IFHawconsFilledMoon                                = 0xe6e4,

    /// Identifier: "hawcons-filled-sun"
    IFHawconsFilledSun                                 = 0xe6e5,

    /// Identifier: "hawcons-filled-sunrise"
    IFHawconsFilledSunrise                             = 0xe6e6,

    /// Identifier: "hawcons-filled-sunset"
    IFHawconsFilledSunset                              = 0xe6e7,

    /// Identifier: "hawcons-filled-sunset2"
    IFHawconsFilledSunset2                             = 0xe6e8,

    /// Identifier: "hawcons-filled-sunset3"
    IFHawconsFilledSunset3                             = 0xe6e9,

    /// Identifier: "hawcons-filled-rainbow"
    IFHawconsFilledRainbow                             = 0xe6ea,

    /// Identifier: "hawcons-filled-umbrella"
    IFHawconsFilledUmbrella                            = 0xe6eb,

    /// Identifier: "hawcons-filled-raindrops"
    IFHawconsFilledRaindrops                           = 0xe6ec,

    /// Identifier: "hawcons-filled-raindrop"
    IFHawconsFilledRaindrop                            = 0xe6ed,

    /// Identifier: "hawcons-filled-sunglasses"
    IFHawconsFilledSunglasses                          = 0xe6ee,

    /// Identifier: "hawcons-filled-stars"
    IFHawconsFilledStars                               = 0xe6ef,

    /// Identifier: "hawcons-filled-clouds2"
    IFHawconsFilledClouds2                             = 0xe6f0,

    /// Identifier: "hawcons-filled-moonrise"
    IFHawconsFilledMoonrise                            = 0xe6f1,

    /// Identifier: "hawcons-filled-moonset"
    IFHawconsFilledMoonset                             = 0xe6f2,

    /// Identifier: "hawcons-filled-wind"
    IFHawconsFilledWind                                = 0xe6f3,

    /// Identifier: "hawcons-filled-full-moon"
    IFHawconsFilledFullMoon                            = 0xe6f4,

    /// Identifier: "hawcons-filled-crescent"
    IFHawconsFilledCrescent                            = 0xe6f5,

    /// Identifier: "hawcons-filled-half-moon"
    IFHawconsFilledHalfMoon                            = 0xe6f6,

    /// Identifier: "hawcons-filled-gibbous-moon"
    IFHawconsFilledGibbousMoon                         = 0xe6f7,

    /// Identifier: "hawcons-filled-moon2"
    IFHawconsFilledMoon2                               = 0xe6f8,

    /// Identifier: "hawcons-filled-gibbous-moon2"
    IFHawconsFilledGibbousMoon2                        = 0xe6f9,

    /// Identifier: "hawcons-filled-half-moon2"
    IFHawconsFilledHalfMoon2                           = 0xe6fa,

    /// Identifier: "hawcons-filled-crescent2"
    IFHawconsFilledCrescent2                           = 0xe6fb,

    /// Identifier: "hawcons-filled-barometer"
    IFHawconsFilledBarometer                           = 0xe6fc,

    /// Identifier: "hawcons-filled-compass-north"
    IFHawconsFilledCompassNorth                        = 0xe6fd,

    /// Identifier: "hawcons-filled-compass-west"
    IFHawconsFilledCompassWest                         = 0xe6fe,

    /// Identifier: "hawcons-filled-compass-east"
    IFHawconsFilledCompassEast                         = 0xe6ff,

    /// Identifier: "hawcons-filled-compass-south"
    IFHawconsFilledCompassSouth                        = 0xe700,

    /// Identifier: "hawcons-filled-air-sock"
    IFHawconsFilledAirSock                             = 0xe701,

    /// Identifier: "hawcons-filled-tornado"
    IFHawconsFilledTornado                             = 0xe702,

    /// Identifier: "hawcons-filled-degree-fahrenheit"
    IFHawconsFilledDegreeFahrenheit                    = 0xe703,

    /// Identifier: "hawcons-filled-degree-celsius"
    IFHawconsFilledDegreeCelsius                       = 0xe704,

    /// Identifier: "hawcons-filled-warning"
    IFHawconsFilledWarning                             = 0xe705,

    /// Identifier: "hawcons-filled-compass"
    IFHawconsFilledCompass                             = 0xe706,

    /// Identifier: "hawcons-filled-compass2"
    IFHawconsFilledCompass2                            = 0xe707,

    /// Identifier: "hawcons-filled-compass3"
    IFHawconsFilledCompass3                            = 0xe708,

    /// Identifier: "hawcons-filled-compass4"
    IFHawconsFilledCompass4                            = 0xe709,

    /// Identifier: "hawcons-filled-thermometer"
    IFHawconsFilledThermometer                         = 0xe70a,

    /// Identifier: "hawcons-filled-thermometer-low"
    IFHawconsFilledThermometerLow                      = 0xe70b,

    /// Identifier: "hawcons-filled-thermometer-quarter"
    IFHawconsFilledThermometerQuarter                  = 0xe70c,

    /// Identifier: "hawcons-filled-thermometer-half"
    IFHawconsFilledThermometerHalf                     = 0xe70d,

    /// Identifier: "hawcons-filled-thermometer-three-quarters"
    IFHawconsFilledThermometerThreeQuarters            = 0xe70e,

    /// Identifier: "hawcons-filled-thermometer-full"
    IFHawconsFilledThermometerFull                     = 0xe70f,

    /// Identifier: "hawcons-filled-lightning"
    IFHawconsFilledLightning                           = 0xe710,

    /// Identifier: "hawcons-filled-wind-turbine"
    IFHawconsFilledWindTurbine                         = 0xe711,

    /// Identifier: "hawcons-filled-snowflake"
    IFHawconsFilledSnowflake                           = 0xe712,

    /// Identifier: "hawcons-filled-flashed-face"
    IFHawconsFilledFlashedFace                         = 0xe713,

    /// Identifier: "hawcons-filled-flashed-face2"
    IFHawconsFilledFlashedFace2                        = 0xe714,

    /// Identifier: "hawcons-filled-flashed-face-glasses"
    IFHawconsFilledFlashedFaceGlasses                  = 0xe715,

    /// Identifier: "hawcons-filled-face-missing-moth"
    IFHawconsFilledFaceMissingMoth                     = 0xe716,

    /// Identifier: "hawcons-filled-neutral-face"
    IFHawconsFilledNeutralFace                         = 0xe717,

    /// Identifier: "hawcons-filled-smiling-face"
    IFHawconsFilledSmilingFace                         = 0xe718,

    /// Identifier: "hawcons-filled-sad-face"
    IFHawconsFilledSadFace                             = 0xe719,

    /// Identifier: "hawcons-filled-face-open-mouth"
    IFHawconsFilledFaceOpenMouth                       = 0xe71a,

    /// Identifier: "hawcons-filled-face-open-mouth2"
    IFHawconsFilledFaceOpenMouth2                      = 0xe71b,

    /// Identifier: "hawcons-filled-winking-face"
    IFHawconsFilledWinkingFace                         = 0xe71c,

    /// Identifier: "hawcons-filled-laughing-face"
    IFHawconsFilledLaughingFace                        = 0xe71d,

    /// Identifier: "hawcons-filled-laughing-face2"
    IFHawconsFilledLaughingFace2                       = 0xe71e,

    /// Identifier: "hawcons-filled-smirking-face"
    IFHawconsFilledSmirkingFace                        = 0xe71f,

    /// Identifier: "hawcons-filled-stubborn-face"
    IFHawconsFilledStubbornFace                        = 0xe720,

    /// Identifier: "hawcons-filled-neutral-face2"
    IFHawconsFilledNeutralFace2                        = 0xe721,

    /// Identifier: "hawcons-filled-sad-face2"
    IFHawconsFilledSadFace2                            = 0xe722,

    /// Identifier: "hawcons-filled-smiling-face2"
    IFHawconsFilledSmilingFace2                        = 0xe723,

    /// Identifier: "hawcons-filled-smiling-face-eyebrows"
    IFHawconsFilledSmilingFaceEyebrows                 = 0xe724,

    /// Identifier: "hawcons-filled-grinning-face-eyebrows"
    IFHawconsFilledGrinningFaceEyebrows                = 0xe725,

    /// Identifier: "hawcons-filled-sad-face-eyebrows"
    IFHawconsFilledSadFaceEyebrows                     = 0xe726,

    /// Identifier: "hawcons-filled-neutral-face-eyebrows"
    IFHawconsFilledNeutralFaceEyebrows                 = 0xe727,

    /// Identifier: "hawcons-filled-angry-face"
    IFHawconsFilledAngryFace                           = 0xe728,

    /// Identifier: "hawcons-filled-worried-face"
    IFHawconsFilledWorriedFace                         = 0xe729,

    /// Identifier: "hawcons-filled-winking-face2"
    IFHawconsFilledWinkingFace2                        = 0xe72a,

    /// Identifier: "hawcons-filled-angry-face-eyebrows"
    IFHawconsFilledAngryFaceEyebrows                   = 0xe72b,

    /// Identifier: "hawcons-filled-grinning-face"
    IFHawconsFilledGrinningFace                        = 0xe72c,

    /// Identifier: "hawcons-filled-sad-face3"
    IFHawconsFilledSadFace3                            = 0xe72d,

    /// Identifier: "hawcons-filled-grinning-face-eyebrows2"
    IFHawconsFilledGrinningFaceEyebrows2               = 0xe72e,

    /// Identifier: "hawcons-filled-fake-grinning-face-eyebrows"
    IFHawconsFilledFakeGrinningFaceEyebrows            = 0xe72f,

    /// Identifier: "hawcons-filled-worried-face-eyebrows"
    IFHawconsFilledWorriedFaceEyebrows                 = 0xe730,

    /// Identifier: "hawcons-filled-face-stuck-out-tongue"
    IFHawconsFilledFaceStuckOutTongue                  = 0xe731,

    /// Identifier: "hawcons-filled-face-stuck-out-tongue2"
    IFHawconsFilledFaceStuckOutTongue2                 = 0xe732,

    /// Identifier: "hawcons-filled-kissing-face"
    IFHawconsFilledKissingFace                         = 0xe733,

    /// Identifier: "hawcons-filled-grinning-face-teeth"
    IFHawconsFilledGrinningFaceTeeth                   = 0xe734,

    /// Identifier: "hawcons-filled-angry-face-teeth"
    IFHawconsFilledAngryFaceTeeth                      = 0xe735,

    /// Identifier: "hawcons-filled-grinning-face-teeth2"
    IFHawconsFilledGrinningFaceTeeth2                  = 0xe736,

    /// Identifier: "hawcons-filled-face-open-mouth-eyebrows"
    IFHawconsFilledFaceOpenMouthEyebrows               = 0xe737,

    /// Identifier: "hawcons-filled-face-open-mouth-eyebrows2"
    IFHawconsFilledFaceOpenMouthEyebrows2              = 0xe738,

    /// Identifier: "hawcons-filled-angry-face-open-mouth-eyebrows"
    IFHawconsFilledAngryFaceOpenMouthEyebrows          = 0xe739,

    /// Identifier: "hawcons-filled-unamused-face-tightly-closed-eyes"
    IFHawconsFilledUnamusedFaceTightlyClosedEyes       = 0xe73a,

    /// Identifier: "hawcons-filled-sad-face--tightly-closed-eyes"
    IFHawconsFilledSadFaceTightlyClosedEyes            = 0xe73b,

    /// Identifier: "hawcons-filled-kissing-face2"
    IFHawconsFilledKissingFace2                        = 0xe73c,

    /// Identifier: "hawcons-filled-face-closed-meyes"
    IFHawconsFilledFaceClosedMeyes                     = 0xe73d,

    /// Identifier: "hawcons-filled-amused-face"
    IFHawconsFilledAmusedFace                          = 0xe73e,

    /// Identifier: "hawcons-filled-amused-face-closed-eyes"
    IFHawconsFilledAmusedFaceClosedEyes                = 0xe73f,

    /// Identifier: "hawcons-filled-amused-face-closed-eyes2"
    IFHawconsFilledAmusedFaceClosedEyes2               = 0xe740,

    /// Identifier: "hawcons-filled-face-closed-eyes-open-mouth"
    IFHawconsFilledFaceClosedEyesOpenMouth             = 0xe741,

    /// Identifier: "hawcons-filled-face-closed-eyes-open-mouth2"
    IFHawconsFilledFaceClosedEyesOpenMouth2            = 0xe742,

    /// Identifier: "hawcons-filled-face-closed-eyes-open-mouth3"
    IFHawconsFilledFaceClosedEyesOpenMouth3            = 0xe743,

    /// Identifier: "hawcons-filled-laughing-face3"
    IFHawconsFilledLaughingFace3                       = 0xe744,

    /// Identifier: "hawcons-filled-smiling-face3"
    IFHawconsFilledSmilingFace3                        = 0xe745,

    /// Identifier: "hawcons-filled-grinning-face2"
    IFHawconsFilledGrinningFace2                       = 0xe746,

    /// Identifier: "hawcons-filled-sad-face4"
    IFHawconsFilledSadFace4                            = 0xe747,

    /// Identifier: "hawcons-filled-sad-face5"
    IFHawconsFilledSadFace5                            = 0xe748,

    /// Identifier: "hawcons-filled-sad-face-closed-eyes"
    IFHawconsFilledSadFaceClosedEyes                   = 0xe749,

    /// Identifier: "hawcons-filled-sad-face6"
    IFHawconsFilledSadFace6                            = 0xe74a,

    /// Identifier: "hawcons-filled-smiling-face4"
    IFHawconsFilledSmilingFace4                        = 0xe74b,

    /// Identifier: "hawcons-filled-astonished-face"
    IFHawconsFilledAstonishedFace                      = 0xe74c,

    /// Identifier: "hawcons-filled-astonished-face2"
    IFHawconsFilledAstonishedFace2                     = 0xe74d,

    /// Identifier: "hawcons-filled-face-moustache"
    IFHawconsFilledFaceMoustache                       = 0xe74e,

    /// Identifier: "hawcons-filled-face-moustache2"
    IFHawconsFilledFaceMoustache2                      = 0xe74f,

    /// Identifier: "hawcons-filled-face-glasses"
    IFHawconsFilledFaceGlasses                         = 0xe750,

    /// Identifier: "hawcons-filled-face-sunglasses"
    IFHawconsFilledFaceSunglasses                      = 0xe751,

    /// Identifier: "hawcons-filled-smirking-face-sunglasses"
    IFHawconsFilledSmirkingFaceSunglasses              = 0xe752,

    /// Identifier: "hawcons-filled-middle-finger"
    IFHawconsFilledMiddleFinger                        = 0xe753,

    /// Identifier: "hawcons-filled-rock-n-roll"
    IFHawconsFilledRockNRoll                           = 0xe754,

    /// Identifier: "hawcons-filled-high-five"
    IFHawconsFilledHighFive                            = 0xe755,

    /// Identifier: "hawcons-filled-thumb-up"
    IFHawconsFilledThumbUp                             = 0xe756,

    /// Identifier: "hawcons-filled-thumb-down"
    IFHawconsFilledThumbDown                           = 0xe757,

    /// Identifier: "hawcons-filled-thumb-up2"
    IFHawconsFilledThumbUp2                            = 0xe758,

    /// Identifier: "hawcons-filled-thumb-down2"
    IFHawconsFilledThumbDown2                          = 0xe759,

    /// Identifier: "hawcons-filled-two-fingers-swipe-left"
    IFHawconsFilledTwoFingersSwipeLeft                 = 0xe75a,

    /// Identifier: "hawcons-filled-two-fingers-swipe-right"
    IFHawconsFilledTwoFingersSwipeRight                = 0xe75b,

    /// Identifier: "hawcons-filled-two-fingers-swipe-up"
    IFHawconsFilledTwoFingersSwipeUp                   = 0xe75c,

    /// Identifier: "hawcons-filled-two-fingers-swipe-down"
    IFHawconsFilledTwoFingersSwipeDown                 = 0xe75d,

    /// Identifier: "hawcons-filled-two-fingers"
    IFHawconsFilledTwoFingers                          = 0xe75e,

    /// Identifier: "hawcons-filled-three-fingers-double-tap"
    IFHawconsFilledThreeFingersDoubleTap               = 0xe75f,

    /// Identifier: "hawcons-filled-two-fingers-resize-out"
    IFHawconsFilledTwoFingersResizeOut                 = 0xe760,

    /// Identifier: "hawcons-filled-two-fingers-resize-in"
    IFHawconsFilledTwoFingersResizeIn                  = 0xe761,

    /// Identifier: "hawcons-filled-two-fingers-rotate"
    IFHawconsFilledTwoFingersRotate                    = 0xe762,

    /// Identifier: "hawcons-filled-one-finger-swipe-left"
    IFHawconsFilledOneFingerSwipeLeft                  = 0xe763,

    /// Identifier: "hawcons-filled-one-finger-swipe-right"
    IFHawconsFilledOneFingerSwipeRight                 = 0xe764,

    /// Identifier: "hawcons-filled-one-finger-swipe-up"
    IFHawconsFilledOneFingerSwipeUp                    = 0xe765,

    /// Identifier: "hawcons-filled-one-finger-swipe-down"
    IFHawconsFilledOneFingerSwipeDown                  = 0xe766,

    /// Identifier: "hawcons-filled-one-finger"
    IFHawconsFilledOneFinger                           = 0xe767,

    /// Identifier: "hawcons-filled-one-finger-double-tap"
    IFHawconsFilledOneFingerDoubleTap                  = 0xe768,

    /// Identifier: "hawcons-filled-one-finger-tap"
    IFHawconsFilledOneFingerTap                        = 0xe769,

    /// Identifier: "hawcons-filled-one-finger-tap-hold"
    IFHawconsFilledOneFingerTapHold                    = 0xe76a,

    /// Identifier: "hawcons-filled-thumb-finger-tap"
    IFHawconsFilledThumbFingerTap                      = 0xe76b,

    /// Identifier: "hawcons-filled-one-finger-click"
    IFHawconsFilledOneFingerClick                      = 0xe76c,

    /// Identifier: "hawcons-filled-three-fingers-swipe-left"
    IFHawconsFilledThreeFingersSwipeLeft               = 0xe76d,

    /// Identifier: "hawcons-filled-three-fingers-swipe-right"
    IFHawconsFilledThreeFingersSwipeRight              = 0xe76e,

    /// Identifier: "hawcons-filled-three-fingers-swipe-up"
    IFHawconsFilledThreeFingersSwipeUp                 = 0xe76f,

    /// Identifier: "hawcons-filled-three-fingers-swipe-down"
    IFHawconsFilledThreeFingersSwipeDown               = 0xe770,

    /// Identifier: "hawcons-filled-three-fingers"
    IFHawconsFilledThreeFingers                        = 0xe771,

    /// Identifier: "hawcons-filled-three-fingers-double-tap2"
    IFHawconsFilledThreeFingersDoubleTap2              = 0xe772,

    /// Identifier: "hawcons-filled-two-fingers-swipe-up2"
    IFHawconsFilledTwoFingersSwipeUp2                  = 0xe773,

    /// Identifier: "hawcons-filled-one-finger-double-tap2"
    IFHawconsFilledOneFingerDoubleTap2                 = 0xe774,

    /// Identifier: "hawcons-filled-two-fingers-swipe-down2"
    IFHawconsFilledTwoFingersSwipeDown2                = 0xe775,

    /// Identifier: "hawcons-filled-two-fingers-swipe-right2"
    IFHawconsFilledTwoFingersSwipeRight2               = 0xe776,

    /// Identifier: "hawcons-filled-two-fingers-swipe-left2"
    IFHawconsFilledTwoFingersSwipeLeft2                = 0xe777,

    /// Identifier: "hawcons-filled-one-finger-tap2"
    IFHawconsFilledOneFingerTap2                       = 0xe778,

    /// Identifier: "hawcons-filled-one-finger-tap-hold2"
    IFHawconsFilledOneFingerTapHold2                   = 0xe779,

    /// Identifier: "hawcons-filled-one-finger-click2"
    IFHawconsFilledOneFingerClick2                     = 0xe77a,

    /// Identifier: "hawcons-filled-one-finger-swipe-horizontally"
    IFHawconsFilledOneFingerSwipeHorizontally          = 0xe77b,

    /// Identifier: "hawcons-filled-one-finger-swipe"
    IFHawconsFilledOneFingerSwipe                      = 0xe77c,

    /// Identifier: "hawcons-filled-two-fingers-double-tap"
    IFHawconsFilledTwoFingersDoubleTap                 = 0xe77d,

    /// Identifier: "hawcons-filled-two-fingers-tap"
    IFHawconsFilledTwoFingersTap                       = 0xe77e,

    /// Identifier: "hawcons-filled-one-finger-swipe-left2"
    IFHawconsFilledOneFingerSwipeLeft2                 = 0xe77f,

    /// Identifier: "hawcons-filled-one-finger-swipe-right2"
    IFHawconsFilledOneFingerSwipeRight2                = 0xe780,

    /// Identifier: "hawcons-filled-one-finger-swipe-up2"
    IFHawconsFilledOneFingerSwipeUp2                   = 0xe781,

    /// Identifier: "hawcons-filled-one-finger-swipe-down2"
    IFHawconsFilledOneFingerSwipeDown2                 = 0xe782,

    /// Identifier: "hawcons-filled-file-numbers"
    IFHawconsFilledFileNumbers                         = 0xe783,

    /// Identifier: "hawcons-filled-file-pages"
    IFHawconsFilledFilePages                           = 0xe784,

    /// Identifier: "hawcons-filled-file-app"
    IFHawconsFilledFileApp                             = 0xe785,

    /// Identifier: "hawcons-filled-file-png"
    IFHawconsFilledFilePng                             = 0xe786,

    /// Identifier: "hawcons-filled-file-pdf"
    IFHawconsFilledFilePdf                             = 0xe787,

    /// Identifier: "hawcons-filled-file-mp3"
    IFHawconsFilledFileMp3                             = 0xe788,

    /// Identifier: "hawcons-filled-file-mp4"
    IFHawconsFilledFileMp4                             = 0xe789,

    /// Identifier: "hawcons-filled-file-mov"
    IFHawconsFilledFileMov                             = 0xe78a,

    /// Identifier: "hawcons-filled-file-jpg"
    IFHawconsFilledFileJpg                             = 0xe78b,

    /// Identifier: "hawcons-filled-file-key"
    IFHawconsFilledFileKey                             = 0xe78c,

    /// Identifier: "hawcons-filled-file-html"
    IFHawconsFilledFileHtml                            = 0xe78d,

    /// Identifier: "hawcons-filled-file-css"
    IFHawconsFilledFileCss                             = 0xe78e,

    /// Identifier: "hawcons-filled-file-java"
    IFHawconsFilledFileJava                            = 0xe78f,

    /// Identifier: "hawcons-filled-file-psd"
    IFHawconsFilledFilePsd                             = 0xe790,

    /// Identifier: "hawcons-filled-file-ai"
    IFHawconsFilledFileAi                              = 0xe791,

    /// Identifier: "hawcons-filled-file-bmp"
    IFHawconsFilledFileBmp                             = 0xe792,

    /// Identifier: "hawcons-filled-file-dwg"
    IFHawconsFilledFileDwg                             = 0xe793,

    /// Identifier: "hawcons-filled-file-eps"
    IFHawconsFilledFileEps                             = 0xe794,

    /// Identifier: "hawcons-filled-file-tiff"
    IFHawconsFilledFileTiff                            = 0xe795,

    /// Identifier: "hawcons-filled-file-ots"
    IFHawconsFilledFileOts                             = 0xe796,

    /// Identifier: "hawcons-filled-file-php"
    IFHawconsFilledFilePhp                             = 0xe797,

    /// Identifier: "hawcons-filled-file-py"
    IFHawconsFilledFilePy                              = 0xe798,

    /// Identifier: "hawcons-filled-file-c"
    IFHawconsFilledFileC                               = 0xe799,

    /// Identifier: "hawcons-filled-file-sql"
    IFHawconsFilledFileSql                             = 0xe79a,

    /// Identifier: "hawcons-filled-file-rb"
    IFHawconsFilledFileRb                              = 0xe79b,

    /// Identifier: "hawcons-filled-file-cpp"
    IFHawconsFilledFileCpp                             = 0xe79c,

    /// Identifier: "hawcons-filled-file-tga"
    IFHawconsFilledFileTga                             = 0xe79d,

    /// Identifier: "hawcons-filled-file-dxf"
    IFHawconsFilledFileDxf                             = 0xe79e,

    /// Identifier: "hawcons-filled-file-doc"
    IFHawconsFilledFileDoc                             = 0xe79f,

    /// Identifier: "hawcons-filled-file-odt"
    IFHawconsFilledFileOdt                             = 0xe7a0,

    /// Identifier: "hawcons-filled-file-xls"
    IFHawconsFilledFileXls                             = 0xe7a1,

    /// Identifier: "hawcons-filled-file-docx"
    IFHawconsFilledFileDocx                            = 0xe7a2,

    /// Identifier: "hawcons-filled-file-ppt"
    IFHawconsFilledFilePpt                             = 0xe7a3,

    /// Identifier: "hawcons-filled-file-asp"
    IFHawconsFilledFileAsp                             = 0xe7a4,

    /// Identifier: "hawcons-filled-file-ics"
    IFHawconsFilledFileIcs                             = 0xe7a5,

    /// Identifier: "hawcons-filled-file-dat"
    IFHawconsFilledFileDat                             = 0xe7a6,

    /// Identifier: "hawcons-filled-file-xml"
    IFHawconsFilledFileXml                             = 0xe7a7,

    /// Identifier: "hawcons-filled-file-yml"
    IFHawconsFilledFileYml                             = 0xe7a8,

    /// Identifier: "hawcons-filled-file-h"
    IFHawconsFilledFileH                               = 0xe7a9,

    /// Identifier: "hawcons-filled-file-exe"
    IFHawconsFilledFileExe                             = 0xe7aa,

    /// Identifier: "hawcons-filled-file-avi"
    IFHawconsFilledFileAvi                             = 0xe7ab,

    /// Identifier: "hawcons-filled-file-odp"
    IFHawconsFilledFileOdp                             = 0xe7ac,

    /// Identifier: "hawcons-filled-file-dotx"
    IFHawconsFilledFileDotx                            = 0xe7ad,

    /// Identifier: "hawcons-filled-file-xlsx"
    IFHawconsFilledFileXlsx                            = 0xe7ae,

    /// Identifier: "hawcons-filled-file-ods"
    IFHawconsFilledFileOds                             = 0xe7af,

    /// Identifier: "hawcons-filled-file-pps"
    IFHawconsFilledFilePps                             = 0xe7b0,

    /// Identifier: "hawcons-filled-file-dot"
    IFHawconsFilledFileDot                             = 0xe7b1,

    /// Identifier: "hawcons-filled-file-txt"
    IFHawconsFilledFileTxt                             = 0xe7b2,

    /// Identifier: "hawcons-filled-file-rtf"
    IFHawconsFilledFileRtf                             = 0xe7b3,

    /// Identifier: "hawcons-filled-file-m4v"
    IFHawconsFilledFileM4v                             = 0xe7b4,

    /// Identifier: "hawcons-filled-file-flv"
    IFHawconsFilledFileFlv                             = 0xe7b5,

    /// Identifier: "hawcons-filled-file-mpg"
    IFHawconsFilledFileMpg                             = 0xe7b6,

    /// Identifier: "hawcons-filled-file-quicktime"
    IFHawconsFilledFileQuicktime                       = 0xe7b7,

    /// Identifier: "hawcons-filled-file-mid"
    IFHawconsFilledFileMid                             = 0xe7b8,

    /// Identifier: "hawcons-filled-file-3gp"
    IFHawconsFilledFile3gp                             = 0xe7b9,

    /// Identifier: "hawcons-filled-file-aiff"
    IFHawconsFilledFileAiff                            = 0xe7ba,

    /// Identifier: "hawcons-filled-file-aac"
    IFHawconsFilledFileAac                             = 0xe7bb,

    /// Identifier: "hawcons-filled-file-wav"
    IFHawconsFilledFileWav                             = 0xe7bc,

    /// Identifier: "hawcons-filled-file-zip"
    IFHawconsFilledFileZip                             = 0xe7bd,

    /// Identifier: "hawcons-filled-file-ott"
    IFHawconsFilledFileOtt                             = 0xe7be,

    /// Identifier: "hawcons-filled-file-tgz"
    IFHawconsFilledFileTgz                             = 0xe7bf,

    /// Identifier: "hawcons-filled-file-dmg"
    IFHawconsFilledFileDmg                             = 0xe7c0,

    /// Identifier: "hawcons-filled-file-iso"
    IFHawconsFilledFileIso                             = 0xe7c1,

    /// Identifier: "hawcons-filled-file-rar"
    IFHawconsFilledFileRar                             = 0xe7c2,

    /// Identifier: "hawcons-filled-file-gif"
    IFHawconsFilledFileGif                             = 0xe7c3,

    /// Identifier: "hawcons-filled-document-file-numbers"
    IFHawconsFilledDocumentFileNumbers                 = 0xe7c4,

    /// Identifier: "hawcons-filled-document-file-pages"
    IFHawconsFilledDocumentFilePages                   = 0xe7c5,

    /// Identifier: "hawcons-filled-document-file-app"
    IFHawconsFilledDocumentFileApp                     = 0xe7c6,

    /// Identifier: "hawcons-filled-document-file-png"
    IFHawconsFilledDocumentFilePng                     = 0xe7c7,

    /// Identifier: "hawcons-filled-document-file-pdf"
    IFHawconsFilledDocumentFilePdf                     = 0xe7c8,

    /// Identifier: "hawcons-filled-document-file-mp3"
    IFHawconsFilledDocumentFileMp3                     = 0xe7c9,

    /// Identifier: "hawcons-filled-document-file-mp4"
    IFHawconsFilledDocumentFileMp4                     = 0xe7ca,

    /// Identifier: "hawcons-filled-document-file-mov"
    IFHawconsFilledDocumentFileMov                     = 0xe7cb,

    /// Identifier: "hawcons-filled-document-file-jpg"
    IFHawconsFilledDocumentFileJpg                     = 0xe7cc,

    /// Identifier: "hawcons-filled-document-file-key"
    IFHawconsFilledDocumentFileKey                     = 0xe7cd,

    /// Identifier: "hawcons-filled-document-file-html"
    IFHawconsFilledDocumentFileHtml                    = 0xe7ce,

    /// Identifier: "hawcons-filled-document-file-css"
    IFHawconsFilledDocumentFileCss                     = 0xe7cf,

    /// Identifier: "hawcons-filled-document-file-java"
    IFHawconsFilledDocumentFileJava                    = 0xe7d0,

    /// Identifier: "hawcons-filled-document-file-psd"
    IFHawconsFilledDocumentFilePsd                     = 0xe7d1,

    /// Identifier: "hawcons-filled-document-file-ai"
    IFHawconsFilledDocumentFileAi                      = 0xe7d2,

    /// Identifier: "hawcons-filled-document-file-bmp"
    IFHawconsFilledDocumentFileBmp                     = 0xe7d3,

    /// Identifier: "hawcons-filled-document-file-dwg"
    IFHawconsFilledDocumentFileDwg                     = 0xe7d4,

    /// Identifier: "hawcons-filled-document-file-eps"
    IFHawconsFilledDocumentFileEps                     = 0xe7d5,

    /// Identifier: "hawcons-filled-document-file-tiff"
    IFHawconsFilledDocumentFileTiff                    = 0xe7d6,

    /// Identifier: "hawcons-filled-document-file-ots"
    IFHawconsFilledDocumentFileOts                     = 0xe7d7,

    /// Identifier: "hawcons-filled-document-file-php"
    IFHawconsFilledDocumentFilePhp                     = 0xe7d8,

    /// Identifier: "hawcons-filled-document-file-py"
    IFHawconsFilledDocumentFilePy                      = 0xe7d9,

    /// Identifier: "hawcons-filled-document-file-c"
    IFHawconsFilledDocumentFileC                       = 0xe7da,

    /// Identifier: "hawcons-filled-document-file-sql"
    IFHawconsFilledDocumentFileSql                     = 0xe7db,

    /// Identifier: "hawcons-filled-document-file-rb"
    IFHawconsFilledDocumentFileRb                      = 0xe7dc,

    /// Identifier: "hawcons-filled-document-file-cpp"
    IFHawconsFilledDocumentFileCpp                     = 0xe7dd,

    /// Identifier: "hawcons-filled-document-file-tga"
    IFHawconsFilledDocumentFileTga                     = 0xe7de,

    /// Identifier: "hawcons-filled-document-file-dxf"
    IFHawconsFilledDocumentFileDxf                     = 0xe7df,

    /// Identifier: "hawcons-filled-document-file-doc"
    IFHawconsFilledDocumentFileDoc                     = 0xe7e0,

    /// Identifier: "hawcons-filled-document-file-odt"
    IFHawconsFilledDocumentFileOdt                     = 0xe7e1,

    /// Identifier: "hawcons-filled-document-file-xls"
    IFHawconsFilledDocumentFileXls                     = 0xe7e2,

    /// Identifier: "hawcons-filled-document-file-docx"
    IFHawconsFilledDocumentFileDocx                    = 0xe7e3,

    /// Identifier: "hawcons-filled-document-file-ppt"
    IFHawconsFilledDocumentFilePpt                     = 0xe7e4,

    /// Identifier: "hawcons-filled-document-file-asp"
    IFHawconsFilledDocumentFileAsp                     = 0xe7e5,

    /// Identifier: "hawcons-filled-document-file-ics"
    IFHawconsFilledDocumentFileIcs                     = 0xe7e6,

    /// Identifier: "hawcons-filled-document-file-dat"
    IFHawconsFilledDocumentFileDat                     = 0xe7e7,

    /// Identifier: "hawcons-filled-document-file-xml"
    IFHawconsFilledDocumentFileXml                     = 0xe7e8,

    /// Identifier: "hawcons-filled-document-file-yml"
    IFHawconsFilledDocumentFileYml                     = 0xe7e9,

    /// Identifier: "hawcons-filled-document-file-h"
    IFHawconsFilledDocumentFileH                       = 0xe7ea,

    /// Identifier: "hawcons-filled-document-file-exe"
    IFHawconsFilledDocumentFileExe                     = 0xe7eb,

    /// Identifier: "hawcons-filled-document-file-avi"
    IFHawconsFilledDocumentFileAvi                     = 0xe7ec,

    /// Identifier: "hawcons-filled-document-file-odp"
    IFHawconsFilledDocumentFileOdp                     = 0xe7ed,

    /// Identifier: "hawcons-filled-document-file-dotx"
    IFHawconsFilledDocumentFileDotx                    = 0xe7ee,

    /// Identifier: "hawcons-filled-document-file-xlsx"
    IFHawconsFilledDocumentFileXlsx                    = 0xe7ef,

    /// Identifier: "hawcons-filled-document-file-ods"
    IFHawconsFilledDocumentFileOds                     = 0xe7f0,

    /// Identifier: "hawcons-filled-document-file-pps"
    IFHawconsFilledDocumentFilePps                     = 0xe7f1,

    /// Identifier: "hawcons-filled-document-file-dot"
    IFHawconsFilledDocumentFileDot                     = 0xe7f2,

    /// Identifier: "hawcons-filled-document-file-txt"
    IFHawconsFilledDocumentFileTxt                     = 0xe7f3,

    /// Identifier: "hawcons-filled-document-file-rtf"
    IFHawconsFilledDocumentFileRtf                     = 0xe7f4,

    /// Identifier: "hawcons-filled-document-file-m4v"
    IFHawconsFilledDocumentFileM4v                     = 0xe7f5,

    /// Identifier: "hawcons-filled-document-file-flv"
    IFHawconsFilledDocumentFileFlv                     = 0xe7f6,

    /// Identifier: "hawcons-filled-document-file-mpg"
    IFHawconsFilledDocumentFileMpg                     = 0xe7f7,

    /// Identifier: "hawcons-filled-document-file-qt"
    IFHawconsFilledDocumentFileQt                      = 0xe7f8,

    /// Identifier: "hawcons-filled-document-file-mid"
    IFHawconsFilledDocumentFileMid                     = 0xe7f9,

    /// Identifier: "hawcons-filled-document-file-3gp"
    IFHawconsFilledDocumentFile3gp                     = 0xe7fa,

    /// Identifier: "hawcons-filled-document-file-aiff"
    IFHawconsFilledDocumentFileAiff                    = 0xe7fb,

    /// Identifier: "hawcons-filled-document-file-aac"
    IFHawconsFilledDocumentFileAac                     = 0xe7fc,

    /// Identifier: "hawcons-filled-document-file-wav"
    IFHawconsFilledDocumentFileWav                     = 0xe7fd,

    /// Identifier: "hawcons-filled-document-file-zip"
    IFHawconsFilledDocumentFileZip                     = 0xe7fe,

    /// Identifier: "hawcons-filled-document-file-ott"
    IFHawconsFilledDocumentFileOtt                     = 0xe7ff,

    /// Identifier: "hawcons-filled-document-file-tgz"
    IFHawconsFilledDocumentFileTgz                     = 0xe800,

    /// Identifier: "hawcons-filled-document-file-dmg"
    IFHawconsFilledDocumentFileDmg                     = 0xe801,

    /// Identifier: "hawcons-filled-document-file-iso"
    IFHawconsFilledDocumentFileIso                     = 0xe802,

    /// Identifier: "hawcons-filled-document-file-rar"
    IFHawconsFilledDocumentFileRar                     = 0xe803,

    /// Identifier: "hawcons-filled-document-file-gif"
    IFHawconsFilledDocumentFileGif                     = 0xe804,

};

/**
 * Hawcons, filled style, v1.0 http://hawcons.com
 */
@interface IFHawconsFilled : IFIcon
@end
