#import "IFIcon.h"

/**
 * ZocialButtons icon types.
 */
typedef NS_ENUM(IFIconType, IFZocialButtonsType) {

    /// Identifier: "zocial.acrobat"
    IFZBAcrobat                             = 0xf100,

    /// Identifier: "zocial.amazon"
    IFZBAmazon                              = 0xf101,

    /// Identifier: "zocial.android"
    IFZBAndroid                             = 0xf102,

    /// Identifier: "zocial.angellist"
    IFZBAngellist                           = 0xf103,

    /// Identifier: "zocial.aol"
    IFZBAol                                 = 0xf104,

    /// Identifier: "zocial.appnet"
    IFZBAppnet                              = 0xf105,

    /// Identifier: "zocial.appstore"
    IFZBAppstore                            = 0xf106,

    /// Identifier: "zocial.bitbucket"
    IFZBBitbucket                           = 0xf107,

    /// Identifier: "zocial.bitcoin"
    IFZBBitcoin                             = 0xf108,

    /// Identifier: "zocial.blogger"
    IFZBBlogger                             = 0xf109,

    /// Identifier: "zocial.buffer"
    IFZBBuffer                              = 0xf10a,

    /// Identifier: "zocial.cal"
    IFZBCal                                 = 0xf10b,

    /// Identifier: "zocial.call"
    IFZBCall                                = 0xf10c,

    /// Identifier: "zocial.cart"
    IFZBCart                                = 0xf10d,

    /// Identifier: "zocial.chrome"
    IFZBChrome                              = 0xf10e,

    /// Identifier: "zocial.cloudapp"
    IFZBCloudapp                            = 0xf10f,

    /// Identifier: "zocial.creativecommons"
    IFZBCreativecommons                     = 0xf110,

    /// Identifier: "zocial.delicious"
    IFZBDelicious                           = 0xf111,

    /// Identifier: "zocial.digg"
    IFZBDigg                                = 0xf112,

    /// Identifier: "zocial.disqus"
    IFZBDisqus                              = 0xf113,

    /// Identifier: "zocial.dribbble"
    IFZBDribbble                            = 0xf114,

    /// Identifier: "zocial.dropbox"
    IFZBDropbox                             = 0xf115,

    /// Identifier: "zocial.drupal"
    IFZBDrupal                              = 0xf116,

    /// Identifier: "zocial.dwolla"
    IFZBDwolla                              = 0xf118,

    /// Identifier: "zocial.email"
    IFZBEmail                               = 0xf119,

    /// Identifier: "zocial.eventasaurus"
    IFZBEventasaurus                        = 0xf11a,

    /// Identifier: "zocial.eventbrite"
    IFZBEventbrite                          = 0xf11b,

    /// Identifier: "zocial.eventful"
    IFZBEventful                            = 0xf11c,

    /// Identifier: "zocial.evernote"
    IFZBEvernote                            = 0xf11d,

    /// Identifier: "zocial.facebook"
    IFZBFacebook                            = 0xf11e,

    /// Identifier: "zocial.fivehundredpx"
    IFZBFivehundredpx                       = 0xf11f,

    /// Identifier: "zocial.flattr"
    IFZBFlattr                              = 0xf120,

    /// Identifier: "zocial.flickr"
    IFZBFlickr                              = 0xf121,

    /// Identifier: "zocial.forrst"
    IFZBForrst                              = 0xf122,

    /// Identifier: "zocial.foursquare"
    IFZBFoursquare                          = 0xf123,

    /// Identifier: "zocial.github"
    IFZBGithub                              = 0xf124,

    /// Identifier: "zocial.gmail"
    IFZBGmail                               = 0xf125,

    /// Identifier: "zocial.google"
    IFZBGoogle                              = 0xf126,

    /// Identifier: "zocial.googleplay"
    IFZBGoogleplay                          = 0xf127,

    /// Identifier: "zocial.googleplus"
    IFZBGoogleplus                          = 0xf128,

    /// Identifier: "zocial.gowalla"
    IFZBGowalla                             = 0xf129,

    /// Identifier: "zocial.grooveshark"
    IFZBGrooveshark                         = 0xf12a,

    /// Identifier: "zocial.guest"
    IFZBGuest                               = 0xf12b,

    /// Identifier: "zocial.html5"
    IFZBHtml5                               = 0xf12c,

    /// Identifier: "zocial.ie"
    IFZBIe                                  = 0xf12d,

    /// Identifier: "zocial.instagram"
    IFZBInstagram                           = 0xf12e,

    /// Identifier: "zocial.instapaper"
    IFZBInstapaper                          = 0xf12f,

    /// Identifier: "zocial.intensedebate"
    IFZBIntensedebate                       = 0xf130,

    /// Identifier: "zocial.itunes"
    IFZBItunes                              = 0xf131,

    /// Identifier: "zocial.joinme"
    IFZBJoinme                              = 0xf165,

    /// Identifier: "zocial.klout"
    IFZBKlout                               = 0xf132,

    /// Identifier: "zocial.lanyrd"
    IFZBLanyrd                              = 0xf133,

    /// Identifier: "zocial.lastfm"
    IFZBLastfm                              = 0xf134,

    /// Identifier: "zocial.lego"
    IFZBLego                                = 0xf135,

    /// Identifier: "zocial.linkedin"
    IFZBLinkedin                            = 0xf136,

    /// Identifier: "zocial.lkdto"
    IFZBLkdto                               = 0xf137,

    /// Identifier: "zocial.logmein"
    IFZBLogmein                             = 0xf138,

    /// Identifier: "zocial.macstore"
    IFZBMacstore                            = 0xf139,

    /// Identifier: "zocial.meetup"
    IFZBMeetup                              = 0xf13a,

    /// Identifier: "zocial.myspace"
    IFZBMyspace                             = 0xf13b,

    /// Identifier: "zocial.ninetyninedesigns"
    IFZBNinetyninedesigns                   = 0xf13c,

    /// Identifier: "zocial.openid"
    IFZBOpenid                              = 0xf13d,

    /// Identifier: "zocial.opentable"
    IFZBOpentable                           = 0xf13e,

    /// Identifier: "zocial.paypal"
    IFZBPaypal                              = 0xf13f,

    /// Identifier: "zocial.persona"
    IFZBPersona                             = 0xf164,

    /// Identifier: "zocial.pinboard"
    IFZBPinboard                            = 0xf140,

    /// Identifier: "zocial.pinterest"
    IFZBPinterest                           = 0xf141,

    /// Identifier: "zocial.plancast"
    IFZBPlancast                            = 0xf142,

    /// Identifier: "zocial.plurk"
    IFZBPlurk                               = 0xf143,

    /// Identifier: "zocial.pocket"
    IFZBPocket                              = 0xf144,

    /// Identifier: "zocial.podcast"
    IFZBPodcast                             = 0xf145,

    /// Identifier: "zocial.posterous"
    IFZBPosterous                           = 0xf146,

    /// Identifier: "zocial.print"
    IFZBPrint                               = 0xf147,

    /// Identifier: "zocial.quora"
    IFZBQuora                               = 0xf148,

    /// Identifier: "zocial.reddit"
    IFZBReddit                              = 0xf149,

    /// Identifier: "zocial.rss"
    IFZBRss                                 = 0xf14a,

    /// Identifier: "zocial.scribd"
    IFZBScribd                              = 0xf14b,

    /// Identifier: "zocial.skype"
    IFZBSkype                               = 0xf14c,

    /// Identifier: "zocial.smashing"
    IFZBSmashing                            = 0xf14d,

    /// Identifier: "zocial.songkick"
    IFZBSongkick                            = 0xf14e,

    /// Identifier: "zocial.soundcloud"
    IFZBSoundcloud                          = 0xf14f,

    /// Identifier: "zocial.spotify"
    IFZBSpotify                             = 0xf150,

    /// Identifier: "zocial.stackoverflow"
    IFZBStackoverflow                       = 0xf151,

    /// Identifier: "zocial.statusnet"
    IFZBStatusnet                           = 0xf152,

    /// Identifier: "zocial.steam"
    IFZBSteam                               = 0xf153,

    /// Identifier: "zocial.stripe"
    IFZBStripe                              = 0xf154,

    /// Identifier: "zocial.stumbleupon"
    IFZBStumbleupon                         = 0xf155,

    /// Identifier: "zocial.tumblr"
    IFZBTumblr                              = 0xf156,

    /// Identifier: "zocial.twitch"
    IFZBTwitch                              = 0xf166,

    /// Identifier: "zocial.twitter"
    IFZBTwitter                             = 0xf157,

    /// Identifier: "zocial.viadeo"
    IFZBViadeo                              = 0xf158,

    /// Identifier: "zocial.vimeo"
    IFZBVimeo                               = 0xf159,

    /// Identifier: "zocial.vk"
    IFZBVk                                  = 0xf15a,

    /// Identifier: "zocial.weibo"
    IFZBWeibo                               = 0xf15b,

    /// Identifier: "zocial.wikipedia"
    IFZBWikipedia                           = 0xf15c,

    /// Identifier: "zocial.windows"
    IFZBWindows                             = 0xf15d,

    /// Identifier: "zocial.wordpress"
    IFZBWordpress                           = 0xf15e,

    /// Identifier: "zocial.xing"
    IFZBXing                                = 0xf15f,

    /// Identifier: "zocial.yahoo"
    IFZBYahoo                               = 0xf160,

    /// Identifier: "zocial.ycombinator"
    IFZBYcombinator                         = 0xf161,

    /// Identifier: "zocial.yelp"
    IFZBYelp                                = 0xf162,

    /// Identifier: "zocial.youtube"
    IFZBYoutube                             = 0xf163,

};

/**
 * ZocialButtons v1.2.0 http://zocial.smcllns.com
 */
@interface IFZocialButtons : IFIcon
@end
