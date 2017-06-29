#import "IFIcon.h"

/**
 * OpenWebIcons icon types.
 */
typedef NS_ENUM(IFIconType, IFOpenWebIconsType) {

    /// Identifier: "openwebicons-apml"
    IFOpenWebApml                                = 0xf001,

    /// Identifier: "openwebicons-open-share"
    IFOpenWebOpenShare                           = 0xf00E,

    /// Identifier: "openwebicons-open-share-simple"
    IFOpenWebOpenShareSimple                     = 0xf00F,

    /// Identifier: "openwebicons-share"
    IFOpenWebShare                               = 0xf006,

    /// Identifier: "openwebicons-share-simple"
    IFOpenWebShareSimple                         = 0xf007,

    /// Identifier: "openwebicons-feed"
    IFOpenWebFeed                                = 0xf009,

    /// Identifier: "openwebicons-feed-simple"
    IFOpenWebFeedSimple                          = 0xf00A,

    /// Identifier: "openwebicons-ostatus"
    IFOpenWebOstatus                             = 0xf004,

    /// Identifier: "openwebicons-ostatus-simple"
    IFOpenWebOstatusSimple                       = 0xf005,

    /// Identifier: "openwebicons-opml"
    IFOpenWebOpml                                = 0xf003,

    /// Identifier: "openwebicons-activity"
    IFOpenWebActivity                            = 0xf010,

    /// Identifier: "openwebicons-activity-simple"
    IFOpenWebActivitySimple                      = 0xf041,

    /// Identifier: "openwebicons-microformats"
    IFOpenWebMicroformats                        = 0xf00C,

    /// Identifier: "openwebicons-geo"
    IFOpenWebGeo                                 = 0xf00B,

    /// Identifier: "openwebicons-opensearch"
    IFOpenWebOpensearch                          = 0xf002,

    /// Identifier: "openwebicons-oauth"
    IFOpenWebOauth                               = 0xf008,

    /// Identifier: "openwebicons-openid"
    IFOpenWebOpenid                              = 0xf00D,

    /// Identifier: "openwebicons-semantic-web"
    IFOpenWebSemanticWeb                         = 0xf000,

    /// Identifier: "openwebicons-rdf"
    IFOpenWebRdf                                 = 0xf039,

    /// Identifier: "openwebicons-rdfa"
    IFOpenWebRdfa                                = 0xf039,

    /// Identifier: "openwebicons-owl"
    IFOpenWebOwl                                 = 0xf039,

    /// Identifier: "openwebicons-dataportability"
    IFOpenWebDataportability                     = 0xf013,

    /// Identifier: "openwebicons-federated"
    IFOpenWebFederated                           = 0xf011,

    /// Identifier: "openwebicons-web-intents"
    IFOpenWebWebIntents                          = 0xf014,

    /// Identifier: "openwebicons-open-web"
    IFOpenWebOpenWeb                             = 0xf012,

    /// Identifier: "openwebicons-xmpp"
    IFOpenWebXmpp                                = 0xf015,

    /// Identifier: "openwebicons-html5"
    IFOpenWebHtml5                               = 0xf016,

    /// Identifier: "openwebicons-css3"
    IFOpenWebCss3                                = 0xf017,

    /// Identifier: "openwebicons-connectivity"
    IFOpenWebConnectivity                        = 0xf018,

    /// Identifier: "openwebicons-semantics"
    IFOpenWebSemantics                           = 0xf019,

    /// Identifier: "openwebicons-3deffects"
    IFOpenWeb3deffects                           = 0xf037,

    /// Identifier: "openwebicons-device-access"
    IFOpenWebDeviceAccess                        = 0xf031,

    /// Identifier: "openwebicons-multimedia"
    IFOpenWebMultimedia                          = 0xf032,

    /// Identifier: "openwebicons-offline-storage"
    IFOpenWebOfflineStorage                      = 0xf033,

    /// Identifier: "openwebicons-perfintegration"
    IFOpenWebPerfintegration                     = 0xf034,

    /// Identifier: "openwebicons-git"
    IFOpenWebGit                                 = 0xf035,

    /// Identifier: "openwebicons-webhooks"
    IFOpenWebWebhooks                            = 0xf036,

    /// Identifier: "openwebicons-osi"
    IFOpenWebOsi                                 = 0xf038,

    /// Identifier: "openwebicons-opensource"
    IFOpenWebOpensource                          = 0xf038,

    /// Identifier: "openwebicons-opengraph"
    IFOpenWebOpengraph                           = 0xf020,

    /// Identifier: "openwebicons-epub"
    IFOpenWebEpub                                = 0xf021,

    /// Identifier: "openwebicons-qr"
    IFOpenWebQr                                  = 0xf022,

    /// Identifier: "openwebicons-foaf"
    IFOpenWebFoaf                                = 0xf023,

    /// Identifier: "openwebicons-info-card"
    IFOpenWebInfoCard                            = 0xf024,

    /// Identifier: "openwebicons-browserid"
    IFOpenWebBrowserid                           = 0xf025,

    /// Identifier: "openwebicons-remote-storage"
    IFOpenWebRemoteStorage                       = 0xf026,

    /// Identifier: "openwebicons-persona"
    IFOpenWebPersona                             = 0xf027,

    /// Identifier: "openwebicons-odata"
    IFOpenWebOdata                               = 0xf028,

    /// Identifier: "openwebicons-markdown"
    IFOpenWebMarkdown                            = 0xf029,

    /// Identifier: "openwebicons-tosdr"
    IFOpenWebTosdr                               = 0xf030,

    /// Identifier: "openwebicons-pub"
    IFOpenWebPub                                 = 0xf045,

    /// Identifier: "openwebicons-sub"
    IFOpenWebSub                                 = 0xf046,

    /// Identifier: "openwebicons-hubbub"
    IFOpenWebHubbub                              = 0xf045,

    /// Identifier: "openwebicons-pubsubhubbub"
    IFOpenWebPubsubhubbub                        = 0xf047,

    /// Identifier: "openwebicons-cc"
    IFOpenWebCc                                  = 0xf080,

    /// Identifier: "openwebicons-cc-by"
    IFOpenWebCcBy                                = 0xf081,

    /// Identifier: "openwebicons-cc-nc"
    IFOpenWebCcNc                                = 0xf082,

    /// Identifier: "openwebicons-cc-nc-eu"
    IFOpenWebCcNcEu                              = 0xf083,

    /// Identifier: "openwebicons-cc-nc-jp"
    IFOpenWebCcNcJp                              = 0xf084,

    /// Identifier: "openwebicons-cc-sa"
    IFOpenWebCcSa                                = 0xf085,

    /// Identifier: "openwebicons-cc-nd"
    IFOpenWebCcNd                                = 0xf086,

    /// Identifier: "openwebicons-cc-public"
    IFOpenWebCcPublic                            = 0xf087,

    /// Identifier: "openwebicons-cc-zero"
    IFOpenWebCcZero                              = 0xf088,

    /// Identifier: "openwebicons-cc-share"
    IFOpenWebCcShare                             = 0xf089,

    /// Identifier: "openwebicons-cc-remix"
    IFOpenWebCcRemix                             = 0xf08a,

    /// Identifier: "openwebicons-hatom"
    IFOpenWebHatom                               = 0xf040,

    /// Identifier: "openwebicons-hresume"
    IFOpenWebHresume                             = 0xf042,

    /// Identifier: "openwebicons-hcard-add"
    IFOpenWebHcardAdd                            = 0xf043,

    /// Identifier: "openwebicons-hcard-download"
    IFOpenWebHcardDownload                       = 0xf044,

    /// Identifier: "openwebicons-indieweb"
    IFOpenWebIndieweb                            = 0xf08b,

    /// Identifier: "openwebicons-indiewebcamp"
    IFOpenWebIndiewebcamp                        = 0xf08b,

    /// Identifier: "openwebicons-webfinger"
    IFOpenWebWebfinger                           = 0xf08e,

    /// Identifier: "openwebicons-bitcoin"
    IFOpenWebBitcoin                             = 0xf08f,

    /// Identifier: "openwebicons-bitcoin-simple"
    IFOpenWebBitcoinSimple                       = 0xf090,

    /// Identifier: "openwebicons-svg"
    IFOpenWebSvg                                 = 0xf049,

    /// Identifier: "openwebicons-json-ld"
    IFOpenWebJsonLd                              = 0xf048,

    /// Identifier: "openwebicons-tent"
    IFOpenWebTent                                = 0xf050,

    /// Identifier: "openwebicons-copyleft"
    IFOpenWebCopyleft                            = 0xf051,

    /// Identifier: "openwebicons-gnu"
    IFOpenWebGnu                                 = 0xf052,

    /// Identifier: "openwebicons-ofl-attribution"
    IFOpenWebOflAttribution                      = 0xf081,

    /// Identifier: "openwebicons-ofl-share"
    IFOpenWebOflShare                            = 0xf085,

    /// Identifier: "openwebicons-ofl-renaming"
    IFOpenWebOflRenaming                         = 0xf04a,

    /// Identifier: "openwebicons-ofl-selling"
    IFOpenWebOflSelling                          = 0xf04b,

    /// Identifier: "openwebicons-ofl-embedding"
    IFOpenWebOflEmbedding                        = 0xf04c,

    /// Identifier: "openwebicons-webmention"
    IFOpenWebWebmention                          = 0xf04d,

    /// Identifier: "openwebicons-javascript"
    IFOpenWebJavascript                          = 0xf04e,

    /// Identifier: "openwebicons-wtfpl"
    IFOpenWebWtfpl                               = 0xf04f,

    /// Identifier: "openwebicons-ofl"
    IFOpenWebOfl                                 = 0xf053,

    /// Identifier: "openwebicons-wordpress"
    IFOpenWebWordpress                           = 0xf054,

    /// Identifier: "openwebicons-owncloud"
    IFOpenWebOwncloud                            = 0xf055,

    /// Identifier: "openwebicons-cccs"
    IFOpenWebCccs                                = 0xf056,

    /// Identifier: "openwebicons-barcamp"
    IFOpenWebBarcamp                             = 0xf057,

    /// Identifier: "openwebicons-indiehosters"
    IFOpenWebIndiehosters                        = 0xf058,

    /// Identifier: "openwebicons-known"
    IFOpenWebKnown                               = 0xf059,

    /// Identifier: "openwebicons-mozilla"
    IFOpenWebMozilla                             = 0xf05a,

    /// Identifier: "openwebicons-unhosted"
    IFOpenWebUnhosted                            = 0xf05b,

    /// Identifier: "openwebicons-diaspora"
    IFOpenWebDiaspora                            = 0xf05c,

    /// Identifier: "openwebicons-indie"
    IFOpenWebIndie                               = 0xf05d,

    /// Identifier: "openwebicons-ghost"
    IFOpenWebGhost                               = 0xf05e,

    /// Identifier: "openwebicons-webplattform"
    IFOpenWebWebplattform                        = 0xf05f,

    /// Identifier: "openwebicons-opensourcedesign"
    IFOpenWebOpensourcedesign                    = 0xf060,

    /// Identifier: "openwebicons-opendesign"
    IFOpenWebOpendesign                          = 0xf061,

    /// Identifier: "openwebicons-gnusocial"
    IFOpenWebGnusocial                           = 0xf062,

    /// Identifier: "openwebicons-gnusocial-simple"
    IFOpenWebGnusocialSimple                     = 0xf063,

};

/**
 * OpenWebIcons v1.4.0 http://pfefferle.github.io/openwebicons
 */
@interface IFOpenWebIcons : IFIcon
@end
