#import "IFIcon.h"

/**
 * Octicons icon types.
 */
typedef NS_ENUM(IFIconType, IFOcticonsType) {

    /// Identifier: "octicon-alert"
    IFOcticonAlert                               = 0xf02d,

    /// Identifier: "octicon-arrow-down"
    IFOcticonArrowDown                           = 0xf03f,

    /// Identifier: "octicon-arrow-left"
    IFOcticonArrowLeft                           = 0xf040,

    /// Identifier: "octicon-arrow-right"
    IFOcticonArrowRight                          = 0xf03e,

    /// Identifier: "octicon-arrow-small-down"
    IFOcticonArrowSmallDown                      = 0xf0a0,

    /// Identifier: "octicon-arrow-small-left"
    IFOcticonArrowSmallLeft                      = 0xf0a1,

    /// Identifier: "octicon-arrow-small-right"
    IFOcticonArrowSmallRight                     = 0xf071,

    /// Identifier: "octicon-arrow-small-up"
    IFOcticonArrowSmallUp                        = 0xf09f,

    /// Identifier: "octicon-arrow-up"
    IFOcticonArrowUp                             = 0xf03d,

    /// Identifier: "octicon-beaker"
    IFOcticonBeaker                              = 0xf0dd,

    /// Identifier: "octicon-bell"
    IFOcticonBell                                = 0xf0de,

    /// Identifier: "octicon-bold"
    IFOcticonBold                                = 0xf0e2,

    /// Identifier: "octicon-book"
    IFOcticonBook                                = 0xf007,

    /// Identifier: "octicon-bookmark"
    IFOcticonBookmark                            = 0xf07b,

    /// Identifier: "octicon-briefcase"
    IFOcticonBriefcase                           = 0xf0d3,

    /// Identifier: "octicon-broadcast"
    IFOcticonBroadcast                           = 0xf048,

    /// Identifier: "octicon-browser"
    IFOcticonBrowser                             = 0xf0c5,

    /// Identifier: "octicon-bug"
    IFOcticonBug                                 = 0xf091,

    /// Identifier: "octicon-calendar"
    IFOcticonCalendar                            = 0xf068,

    /// Identifier: "octicon-check"
    IFOcticonCheck                               = 0xf03a,

    /// Identifier: "octicon-checklist"
    IFOcticonChecklist                           = 0xf076,

    /// Identifier: "octicon-chevron-down"
    IFOcticonChevronDown                         = 0xf0a3,

    /// Identifier: "octicon-chevron-left"
    IFOcticonChevronLeft                         = 0xf0a4,

    /// Identifier: "octicon-chevron-right"
    IFOcticonChevronRight                        = 0xf078,

    /// Identifier: "octicon-chevron-up"
    IFOcticonChevronUp                           = 0xf0a2,

    /// Identifier: "octicon-circle-slash"
    IFOcticonCircleSlash                         = 0xf084,

    /// Identifier: "octicon-circuit-board"
    IFOcticonCircuitBoard                        = 0xf0d6,

    /// Identifier: "octicon-clippy"
    IFOcticonClippy                              = 0xf035,

    /// Identifier: "octicon-clock"
    IFOcticonClock                               = 0xf046,

    /// Identifier: "octicon-cloud-download"
    IFOcticonCloudDownload                       = 0xf00b,

    /// Identifier: "octicon-cloud-upload"
    IFOcticonCloudUpload                         = 0xf00c,

    /// Identifier: "octicon-code"
    IFOcticonCode                                = 0xf05f,

    /// Identifier: "octicon-comment-discussion"
    IFOcticonCommentDiscussion                   = 0xf04f,

    /// Identifier: "octicon-comment"
    IFOcticonComment                             = 0xf02b,

    /// Identifier: "octicon-credit-card"
    IFOcticonCreditCard                          = 0xf045,

    /// Identifier: "octicon-dash"
    IFOcticonDash                                = 0xf0ca,

    /// Identifier: "octicon-dashboard"
    IFOcticonDashboard                           = 0xf07d,

    /// Identifier: "octicon-database"
    IFOcticonDatabase                            = 0xf096,

    /// Identifier: "octicon-desktop-download"
    IFOcticonDesktopDownload                     = 0xf0dc,

    /// Identifier: "octicon-device-camera-video"
    IFOcticonDeviceCameraVideo                   = 0xf057,

    /// Identifier: "octicon-device-camera"
    IFOcticonDeviceCamera                        = 0xf056,

    /// Identifier: "octicon-device-desktop"
    IFOcticonDeviceDesktop                       = 0xf27c,

    /// Identifier: "octicon-device-mobile"
    IFOcticonDeviceMobile                        = 0xf038,

    /// Identifier: "octicon-diff-added"
    IFOcticonDiffAdded                           = 0xf06b,

    /// Identifier: "octicon-diff-ignored"
    IFOcticonDiffIgnored                         = 0xf099,

    /// Identifier: "octicon-diff-modified"
    IFOcticonDiffModified                        = 0xf06d,

    /// Identifier: "octicon-diff-removed"
    IFOcticonDiffRemoved                         = 0xf06c,

    /// Identifier: "octicon-diff-renamed"
    IFOcticonDiffRenamed                         = 0xf06e,

    /// Identifier: "octicon-diff"
    IFOcticonDiff                                = 0xf04d,

    /// Identifier: "octicon-ellipses"
    IFOcticonEllipses                            = 0xf101,

    /// Identifier: "octicon-ellipsis"
    IFOcticonEllipsis                            = 0xf09a,

    /// Identifier: "octicon-eye"
    IFOcticonEye                                 = 0xf04e,

    /// Identifier: "octicon-file-binary"
    IFOcticonFileBinary                          = 0xf094,

    /// Identifier: "octicon-file-code"
    IFOcticonFileCode                            = 0xf010,

    /// Identifier: "octicon-file-directory"
    IFOcticonFileDirectory                       = 0xf016,

    /// Identifier: "octicon-file-media"
    IFOcticonFileMedia                           = 0xf012,

    /// Identifier: "octicon-file-pdf"
    IFOcticonFilePdf                             = 0xf014,

    /// Identifier: "octicon-file-submodule"
    IFOcticonFileSubmodule                       = 0xf017,

    /// Identifier: "octicon-file-symlink-directory"
    IFOcticonFileSymlinkDirectory                = 0xf0b1,

    /// Identifier: "octicon-file-symlink-file"
    IFOcticonFileSymlinkFile                     = 0xf0b0,

    /// Identifier: "octicon-file-text"
    IFOcticonFileText                            = 0xf011,

    /// Identifier: "octicon-file-zip"
    IFOcticonFileZip                             = 0xf013,

    /// Identifier: "octicon-file"
    IFOcticonFile                                = 0xf102,

    /// Identifier: "octicon-flame"
    IFOcticonFlame                               = 0xf0d2,

    /// Identifier: "octicon-fold"
    IFOcticonFold                                = 0xf0cc,

    /// Identifier: "octicon-gear"
    IFOcticonGear                                = 0xf02f,

    /// Identifier: "octicon-gift"
    IFOcticonGift                                = 0xf042,

    /// Identifier: "octicon-gist-secret"
    IFOcticonGistSecret                          = 0xf08c,

    /// Identifier: "octicon-gist"
    IFOcticonGist                                = 0xf00e,

    /// Identifier: "octicon-git-branch"
    IFOcticonGitBranch                           = 0xf020,

    /// Identifier: "octicon-git-commit"
    IFOcticonGitCommit                           = 0xf01f,

    /// Identifier: "octicon-git-compare"
    IFOcticonGitCompare                          = 0xf0ac,

    /// Identifier: "octicon-git-merge"
    IFOcticonGitMerge                            = 0xf023,

    /// Identifier: "octicon-git-pull-request"
    IFOcticonGitPullRequest                      = 0xf009,

    /// Identifier: "octicon-globe"
    IFOcticonGlobe                               = 0xf0b6,

    /// Identifier: "octicon-grabber"
    IFOcticonGrabber                             = 0xf103,

    /// Identifier: "octicon-graph"
    IFOcticonGraph                               = 0xf043,

    /// Identifier: "octicon-heart"
    IFOcticonHeart                               = 0x2665,

    /// Identifier: "octicon-history"
    IFOcticonHistory                             = 0xf07e,

    /// Identifier: "octicon-home"
    IFOcticonHome                                = 0xf08d,

    /// Identifier: "octicon-horizontal-rule"
    IFOcticonHorizontalRule                      = 0xf070,

    /// Identifier: "octicon-hubot"
    IFOcticonHubot                               = 0xf09d,

    /// Identifier: "octicon-inbox"
    IFOcticonInbox                               = 0xf0cf,

    /// Identifier: "octicon-info"
    IFOcticonInfo                                = 0xf059,

    /// Identifier: "octicon-issue-closed"
    IFOcticonIssueClosed                         = 0xf028,

    /// Identifier: "octicon-issue-opened"
    IFOcticonIssueOpened                         = 0xf026,

    /// Identifier: "octicon-issue-reopened"
    IFOcticonIssueReopened                       = 0xf027,

    /// Identifier: "octicon-italic"
    IFOcticonItalic                              = 0xf0e4,

    /// Identifier: "octicon-jersey"
    IFOcticonJersey                              = 0xf019,

    /// Identifier: "octicon-key"
    IFOcticonKey                                 = 0xf049,

    /// Identifier: "octicon-keyboard"
    IFOcticonKeyboard                            = 0xf00d,

    /// Identifier: "octicon-law"
    IFOcticonLaw                                 = 0xf0d8,

    /// Identifier: "octicon-light-bulb"
    IFOcticonLightBulb                           = 0xf000,

    /// Identifier: "octicon-link-external"
    IFOcticonLinkExternal                        = 0xf07f,

    /// Identifier: "octicon-link"
    IFOcticonLink                                = 0xf05c,

    /// Identifier: "octicon-list-ordered"
    IFOcticonListOrdered                         = 0xf062,

    /// Identifier: "octicon-list-unordered"
    IFOcticonListUnordered                       = 0xf061,

    /// Identifier: "octicon-location"
    IFOcticonLocation                            = 0xf060,

    /// Identifier: "octicon-lock"
    IFOcticonLock                                = 0xf06a,

    /// Identifier: "octicon-logo-gist"
    IFOcticonLogoGist                            = 0xf0ad,

    /// Identifier: "octicon-logo-github"
    IFOcticonLogoGithub                          = 0xf092,

    /// Identifier: "octicon-mail-read"
    IFOcticonMailRead                            = 0xf03c,

    /// Identifier: "octicon-mail-reply"
    IFOcticonMailReply                           = 0xf051,

    /// Identifier: "octicon-mail"
    IFOcticonMail                                = 0xf03b,

    /// Identifier: "octicon-mark-github"
    IFOcticonMarkGithub                          = 0xf00a,

    /// Identifier: "octicon-markdown"
    IFOcticonMarkdown                            = 0xf0c9,

    /// Identifier: "octicon-megaphone"
    IFOcticonMegaphone                           = 0xf077,

    /// Identifier: "octicon-mention"
    IFOcticonMention                             = 0xf0be,

    /// Identifier: "octicon-milestone"
    IFOcticonMilestone                           = 0xf075,

    /// Identifier: "octicon-mirror"
    IFOcticonMirror                              = 0xf024,

    /// Identifier: "octicon-mortar-board"
    IFOcticonMortarBoard                         = 0xf0d7,

    /// Identifier: "octicon-mute"
    IFOcticonMute                                = 0xf080,

    /// Identifier: "octicon-no-newline"
    IFOcticonNoNewline                           = 0xf09c,

    /// Identifier: "octicon-octoface"
    IFOcticonOctoface                            = 0xf008,

    /// Identifier: "octicon-organization"
    IFOcticonOrganization                        = 0xf037,

    /// Identifier: "octicon-package"
    IFOcticonPackage                             = 0xf0c4,

    /// Identifier: "octicon-paintcan"
    IFOcticonPaintcan                            = 0xf0d1,

    /// Identifier: "octicon-pencil"
    IFOcticonPencil                              = 0xf058,

    /// Identifier: "octicon-person"
    IFOcticonPerson                              = 0xf018,

    /// Identifier: "octicon-pin"
    IFOcticonPin                                 = 0xf041,

    /// Identifier: "octicon-plug"
    IFOcticonPlug                                = 0xf0d4,

    /// Identifier: "octicon-plus-small"
    IFOcticonPlusSmall                           = 0xf104,

    /// Identifier: "octicon-plus"
    IFOcticonPlus                                = 0xf05d,

    /// Identifier: "octicon-primitive-dot"
    IFOcticonPrimitiveDot                        = 0xf052,

    /// Identifier: "octicon-primitive-square"
    IFOcticonPrimitiveSquare                     = 0xf053,

    /// Identifier: "octicon-pulse"
    IFOcticonPulse                               = 0xf085,

    /// Identifier: "octicon-question"
    IFOcticonQuestion                            = 0xf02c,

    /// Identifier: "octicon-quote"
    IFOcticonQuote                               = 0xf063,

    /// Identifier: "octicon-radio-tower"
    IFOcticonRadioTower                          = 0xf030,

    /// Identifier: "octicon-reply"
    IFOcticonReply                               = 0xf105,

    /// Identifier: "octicon-repo-clone"
    IFOcticonRepoClone                           = 0xf04c,

    /// Identifier: "octicon-repo-force-push"
    IFOcticonRepoForcePush                       = 0xf04a,

    /// Identifier: "octicon-repo-forked"
    IFOcticonRepoForked                          = 0xf002,

    /// Identifier: "octicon-repo-pull"
    IFOcticonRepoPull                            = 0xf006,

    /// Identifier: "octicon-repo-push"
    IFOcticonRepoPush                            = 0xf005,

    /// Identifier: "octicon-repo"
    IFOcticonRepo                                = 0xf001,

    /// Identifier: "octicon-rocket"
    IFOcticonRocket                              = 0xf033,

    /// Identifier: "octicon-rss"
    IFOcticonRss                                 = 0xf034,

    /// Identifier: "octicon-ruby"
    IFOcticonRuby                                = 0xf047,

    /// Identifier: "octicon-search"
    IFOcticonSearch                              = 0xf02e,

    /// Identifier: "octicon-server"
    IFOcticonServer                              = 0xf097,

    /// Identifier: "octicon-settings"
    IFOcticonSettings                            = 0xf07c,

    /// Identifier: "octicon-shield"
    IFOcticonShield                              = 0xf0e1,

    /// Identifier: "octicon-sign-in"
    IFOcticonSignIn                              = 0xf036,

    /// Identifier: "octicon-sign-out"
    IFOcticonSignOut                             = 0xf032,

    /// Identifier: "octicon-smiley"
    IFOcticonSmiley                              = 0xf0e7,

    /// Identifier: "octicon-squirrel"
    IFOcticonSquirrel                            = 0xf0b2,

    /// Identifier: "octicon-star"
    IFOcticonStar                                = 0xf02a,

    /// Identifier: "octicon-stop"
    IFOcticonStop                                = 0xf08f,

    /// Identifier: "octicon-sync"
    IFOcticonSync                                = 0xf087,

    /// Identifier: "octicon-tag"
    IFOcticonTag                                 = 0xf015,

    /// Identifier: "octicon-tasklist"
    IFOcticonTasklist                            = 0xf0e5,

    /// Identifier: "octicon-telescope"
    IFOcticonTelescope                           = 0xf088,

    /// Identifier: "octicon-terminal"
    IFOcticonTerminal                            = 0xf0c8,

    /// Identifier: "octicon-text-size"
    IFOcticonTextSize                            = 0xf0e3,

    /// Identifier: "octicon-three-bars"
    IFOcticonThreeBars                           = 0xf05e,

    /// Identifier: "octicon-thumbsdown"
    IFOcticonThumbsdown                          = 0xf0db,

    /// Identifier: "octicon-thumbsup"
    IFOcticonThumbsup                            = 0xf0da,

    /// Identifier: "octicon-tools"
    IFOcticonTools                               = 0xf031,

    /// Identifier: "octicon-trashcan"
    IFOcticonTrashcan                            = 0xf0d0,

    /// Identifier: "octicon-triangle-down"
    IFOcticonTriangleDown                        = 0xf05b,

    /// Identifier: "octicon-triangle-left"
    IFOcticonTriangleLeft                        = 0xf044,

    /// Identifier: "octicon-triangle-right"
    IFOcticonTriangleRight                       = 0xf05a,

    /// Identifier: "octicon-triangle-up"
    IFOcticonTriangleUp                          = 0xf0aa,

    /// Identifier: "octicon-unfold"
    IFOcticonUnfold                              = 0xf039,

    /// Identifier: "octicon-unmute"
    IFOcticonUnmute                              = 0xf0ba,

    /// Identifier: "octicon-unverified"
    IFOcticonUnverified                          = 0xf0e8,

    /// Identifier: "octicon-verified"
    IFOcticonVerified                            = 0xf0e6,

    /// Identifier: "octicon-versions"
    IFOcticonVersions                            = 0xf064,

    /// Identifier: "octicon-watch"
    IFOcticonWatch                               = 0xf0e0,

    /// Identifier: "octicon-x"
    IFOcticonX                                   = 0xf081,

    /// Identifier: "octicon-zap"
    IFOcticonZap                                 = 0x26a1,

};

/**
 * GitHub Octicons v4.3.0 https://octicons.github.com
 */
@interface IFOcticons : IFIcon
@end
