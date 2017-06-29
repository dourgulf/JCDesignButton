#import "IFTypicons.h"

@implementation IFTypicons

+ (NSURL *)fontFileURL
{
    return [[[NSBundle mainBundle] resourceURL] URLByAppendingPathComponent:@"typicons.ttf"];
}

+ (NSString *)fontName
{
    return @"Typicons";
}

+ (NSDictionary *)allIcons
{
    return @{
             @"typcn-adjust-brightness":                 @"\ue000",
             @"typcn-adjust-contrast":                   @"\ue001",
             @"typcn-anchor-outline":                    @"\ue002",
             @"typcn-anchor":                            @"\ue003",
             @"typcn-archive":                           @"\ue004",
             @"typcn-arrow-back-outline":                @"\ue005",
             @"typcn-arrow-back":                        @"\ue006",
             @"typcn-arrow-down-outline":                @"\ue007",
             @"typcn-arrow-down-thick":                  @"\ue008",
             @"typcn-arrow-down":                        @"\ue009",
             @"typcn-arrow-forward-outline":             @"\ue00a",
             @"typcn-arrow-forward":                     @"\ue00b",
             @"typcn-arrow-left-outline":                @"\ue00c",
             @"typcn-arrow-left-thick":                  @"\ue00d",
             @"typcn-arrow-left":                        @"\ue00e",
             @"typcn-arrow-loop-outline":                @"\ue00f",
             @"typcn-arrow-loop":                        @"\ue010",
             @"typcn-arrow-maximise-outline":            @"\ue011",
             @"typcn-arrow-maximise":                    @"\ue012",
             @"typcn-arrow-minimise-outline":            @"\ue013",
             @"typcn-arrow-minimise":                    @"\ue014",
             @"typcn-arrow-move-outline":                @"\ue015",
             @"typcn-arrow-move":                        @"\ue016",
             @"typcn-arrow-repeat-outline":              @"\ue017",
             @"typcn-arrow-repeat":                      @"\ue018",
             @"typcn-arrow-right-outline":               @"\ue019",
             @"typcn-arrow-right-thick":                 @"\ue01a",
             @"typcn-arrow-right":                       @"\ue01b",
             @"typcn-arrow-shuffle":                     @"\ue01c",
             @"typcn-arrow-sorted-down":                 @"\ue01d",
             @"typcn-arrow-sorted-up":                   @"\ue01e",
             @"typcn-arrow-sync-outline":                @"\ue01f",
             @"typcn-arrow-sync":                        @"\ue020",
             @"typcn-arrow-unsorted":                    @"\ue021",
             @"typcn-arrow-up-outline":                  @"\ue022",
             @"typcn-arrow-up-thick":                    @"\ue023",
             @"typcn-arrow-up":                          @"\ue024",
             @"typcn-at":                                @"\ue025",
             @"typcn-attachment-outline":                @"\ue026",
             @"typcn-attachment":                        @"\ue027",
             @"typcn-backspace-outline":                 @"\ue028",
             @"typcn-backspace":                         @"\ue029",
             @"typcn-battery-charge":                    @"\ue02a",
             @"typcn-battery-full":                      @"\ue02b",
             @"typcn-battery-high":                      @"\ue02c",
             @"typcn-battery-low":                       @"\ue02d",
             @"typcn-battery-mid":                       @"\ue02e",
             @"typcn-beaker":                            @"\ue02f",
             @"typcn-beer":                              @"\ue030",
             @"typcn-bell":                              @"\ue031",
             @"typcn-book":                              @"\ue032",
             @"typcn-bookmark":                          @"\ue033",
             @"typcn-briefcase":                         @"\ue034",
             @"typcn-brush":                             @"\ue035",
             @"typcn-business-card":                     @"\ue036",
             @"typcn-calculator":                        @"\ue037",
             @"typcn-calendar-outline":                  @"\ue038",
             @"typcn-calendar":                          @"\ue039",
             @"typcn-camera-outline":                    @"\ue03a",
             @"typcn-camera":                            @"\ue03b",
             @"typcn-cancel-outline":                    @"\ue03c",
             @"typcn-cancel":                            @"\ue03d",
             @"typcn-chart-area-outline":                @"\ue03e",
             @"typcn-chart-area":                        @"\ue03f",
             @"typcn-chart-bar-outline":                 @"\ue040",
             @"typcn-chart-bar":                         @"\ue041",
             @"typcn-chart-line-outline":                @"\ue042",
             @"typcn-chart-line":                        @"\ue043",
             @"typcn-chart-pie-outline":                 @"\ue044",
             @"typcn-chart-pie":                         @"\ue045",
             @"typcn-chevron-left-outline":              @"\ue046",
             @"typcn-chevron-left":                      @"\ue047",
             @"typcn-chevron-right-outline":             @"\ue048",
             @"typcn-chevron-right":                     @"\ue049",
             @"typcn-clipboard":                         @"\ue04a",
             @"typcn-cloud-storage":                     @"\ue04b",
             @"typcn-cloud-storage-outline":             @"\ue054",
             @"typcn-code-outline":                      @"\ue04c",
             @"typcn-code":                              @"\ue04d",
             @"typcn-coffee":                            @"\ue04e",
             @"typcn-cog-outline":                       @"\ue04f",
             @"typcn-cog":                               @"\ue050",
             @"typcn-compass":                           @"\ue051",
             @"typcn-contacts":                          @"\ue052",
             @"typcn-credit-card":                       @"\ue053",
             @"typcn-css3":                              @"\ue055",
             @"typcn-database":                          @"\ue056",
             @"typcn-delete-outline":                    @"\ue057",
             @"typcn-delete":                            @"\ue058",
             @"typcn-device-desktop":                    @"\ue059",
             @"typcn-device-laptop":                     @"\ue05a",
             @"typcn-device-phone":                      @"\ue05b",
             @"typcn-device-tablet":                     @"\ue05c",
             @"typcn-directions":                        @"\ue05d",
             @"typcn-divide-outline":                    @"\ue05e",
             @"typcn-divide":                            @"\ue05f",
             @"typcn-document-add":                      @"\ue060",
             @"typcn-document-delete":                   @"\ue061",
             @"typcn-document-text":                     @"\ue062",
             @"typcn-document":                          @"\ue063",
             @"typcn-download-outline":                  @"\ue064",
             @"typcn-download":                          @"\ue065",
             @"typcn-dropbox":                           @"\ue066",
             @"typcn-edit":                              @"\ue067",
             @"typcn-eject-outline":                     @"\ue068",
             @"typcn-eject":                             @"\ue069",
             @"typcn-equals-outline":                    @"\ue06a",
             @"typcn-equals":                            @"\ue06b",
             @"typcn-export-outline":                    @"\ue06c",
             @"typcn-export":                            @"\ue06d",
             @"typcn-eye-outline":                       @"\ue06e",
             @"typcn-eye":                               @"\ue06f",
             @"typcn-feather":                           @"\ue070",
             @"typcn-film":                              @"\ue071",
             @"typcn-filter":                            @"\ue072",
             @"typcn-flag-outline":                      @"\ue073",
             @"typcn-flag":                              @"\ue074",
             @"typcn-flash-outline":                     @"\ue075",
             @"typcn-flash":                             @"\ue076",
             @"typcn-flow-children":                     @"\ue077",
             @"typcn-flow-merge":                        @"\ue078",
             @"typcn-flow-parallel":                     @"\ue079",
             @"typcn-flow-switch":                       @"\ue07a",
             @"typcn-folder-add":                        @"\ue07b",
             @"typcn-folder-delete":                     @"\ue07c",
             @"typcn-folder-open":                       @"\ue07d",
             @"typcn-folder":                            @"\ue07e",
             @"typcn-gift":                              @"\ue07f",
             @"typcn-globe-outline":                     @"\ue080",
             @"typcn-globe":                             @"\ue081",
             @"typcn-group-outline":                     @"\ue082",
             @"typcn-group":                             @"\ue083",
             @"typcn-headphones":                        @"\ue084",
             @"typcn-heart-full-outline":                @"\ue085",
             @"typcn-heart-half-outline":                @"\ue086",
             @"typcn-heart-outline":                     @"\ue087",
             @"typcn-heart":                             @"\ue088",
             @"typcn-home-outline":                      @"\ue089",
             @"typcn-home":                              @"\ue08a",
             @"typcn-html5":                             @"\ue08b",
             @"typcn-image-outline":                     @"\ue08c",
             @"typcn-image":                             @"\ue08d",
             @"typcn-infinity-outline":                  @"\ue08e",
             @"typcn-infinity":                          @"\ue08f",
             @"typcn-info-large-outline":                @"\ue090",
             @"typcn-info-large":                        @"\ue091",
             @"typcn-info-outline":                      @"\ue092",
             @"typcn-info":                              @"\ue093",
             @"typcn-input-checked-outline":             @"\ue094",
             @"typcn-input-checked":                     @"\ue095",
             @"typcn-key-outline":                       @"\ue096",
             @"typcn-key":                               @"\ue097",
             @"typcn-keyboard":                          @"\ue098",
             @"typcn-leaf":                              @"\ue099",
             @"typcn-lightbulb":                         @"\ue09a",
             @"typcn-link-outline":                      @"\ue09b",
             @"typcn-link":                              @"\ue09c",
             @"typcn-location-arrow-outline":            @"\ue09d",
             @"typcn-location-arrow":                    @"\ue09e",
             @"typcn-location-outline":                  @"\ue09f",
             @"typcn-location":                          @"\ue0a0",
             @"typcn-lock-closed-outline":               @"\ue0a1",
             @"typcn-lock-closed":                       @"\ue0a2",
             @"typcn-lock-open-outline":                 @"\ue0a3",
             @"typcn-lock-open":                         @"\ue0a4",
             @"typcn-mail":                              @"\ue0a5",
             @"typcn-map":                               @"\ue0a6",
             @"typcn-media-eject-outline":               @"\ue0a7",
             @"typcn-media-eject":                       @"\ue0a8",
             @"typcn-media-fast-forward-outline":        @"\ue0a9",
             @"typcn-media-fast-forward":                @"\ue0aa",
             @"typcn-media-pause-outline":               @"\ue0ab",
             @"typcn-media-pause":                       @"\ue0ac",
             @"typcn-media-play-outline":                @"\ue0ad",
             @"typcn-media-play-reverse-outline":        @"\ue0ae",
             @"typcn-media-play-reverse":                @"\ue0af",
             @"typcn-media-play":                        @"\ue0b0",
             @"typcn-media-record-outline":              @"\ue0b1",
             @"typcn-media-record":                      @"\ue0b2",
             @"typcn-media-rewind-outline":              @"\ue0b3",
             @"typcn-media-rewind":                      @"\ue0b4",
             @"typcn-media-stop-outline":                @"\ue0b5",
             @"typcn-media-stop":                        @"\ue0b6",
             @"typcn-message-typing":                    @"\ue0b7",
             @"typcn-message":                           @"\ue0b8",
             @"typcn-messages":                          @"\ue0b9",
             @"typcn-microphone-outline":                @"\ue0ba",
             @"typcn-microphone":                        @"\ue0bb",
             @"typcn-minus-outline":                     @"\ue0bc",
             @"typcn-minus":                             @"\ue0bd",
             @"typcn-mortar-board":                      @"\ue0be",
             @"typcn-news":                              @"\ue0bf",
             @"typcn-notes-outline":                     @"\ue0c0",
             @"typcn-notes":                             @"\ue0c1",
             @"typcn-pen":                               @"\ue0c2",
             @"typcn-pencil":                            @"\ue0c3",
             @"typcn-phone-outline":                     @"\ue0c4",
             @"typcn-phone":                             @"\ue0c5",
             @"typcn-pi-outline":                        @"\ue0c6",
             @"typcn-pi":                                @"\ue0c7",
             @"typcn-pin-outline":                       @"\ue0c8",
             @"typcn-pin":                               @"\ue0c9",
             @"typcn-pipette":                           @"\ue0ca",
             @"typcn-plane-outline":                     @"\ue0cb",
             @"typcn-plane":                             @"\ue0cc",
             @"typcn-plug":                              @"\ue0cd",
             @"typcn-plus-outline":                      @"\ue0ce",
             @"typcn-plus":                              @"\ue0cf",
             @"typcn-point-of-interest-outline":         @"\ue0d0",
             @"typcn-point-of-interest":                 @"\ue0d1",
             @"typcn-power-outline":                     @"\ue0d2",
             @"typcn-power":                             @"\ue0d3",
             @"typcn-printer":                           @"\ue0d4",
             @"typcn-puzzle-outline":                    @"\ue0d5",
             @"typcn-puzzle":                            @"\ue0d6",
             @"typcn-radar-outline":                     @"\ue0d7",
             @"typcn-radar":                             @"\ue0d8",
             @"typcn-refresh-outline":                   @"\ue0d9",
             @"typcn-refresh":                           @"\ue0da",
             @"typcn-rss-outline":                       @"\ue0db",
             @"typcn-rss":                               @"\ue0dc",
             @"typcn-scissors-outline":                  @"\ue0dd",
             @"typcn-scissors":                          @"\ue0de",
             @"typcn-shopping-bag":                      @"\ue0df",
             @"typcn-shopping-cart":                     @"\ue0e0",
             @"typcn-social-at-circular":                @"\ue0e1",
             @"typcn-social-dribbble-circular":          @"\ue0e2",
             @"typcn-social-dribbble":                   @"\ue0e3",
             @"typcn-social-facebook-circular":          @"\ue0e4",
             @"typcn-social-facebook":                   @"\ue0e5",
             @"typcn-social-flickr-circular":            @"\ue0e6",
             @"typcn-social-flickr":                     @"\ue0e7",
             @"typcn-social-github-circular":            @"\ue0e8",
             @"typcn-social-github":                     @"\ue0e9",
             @"typcn-social-google-plus-circular":       @"\ue0ea",
             @"typcn-social-google-plus":                @"\ue0eb",
             @"typcn-social-instagram-circular":         @"\ue0ec",
             @"typcn-social-instagram":                  @"\ue0ed",
             @"typcn-social-last-fm-circular":           @"\ue0ee",
             @"typcn-social-last-fm":                    @"\ue0ef",
             @"typcn-social-linkedin-circular":          @"\ue0f0",
             @"typcn-social-linkedin":                   @"\ue0f1",
             @"typcn-social-pinterest-circular":         @"\ue0f2",
             @"typcn-social-pinterest":                  @"\ue0f3",
             @"typcn-social-skype-outline":              @"\ue0f4",
             @"typcn-social-skype":                      @"\ue0f5",
             @"typcn-social-tumbler-circular":           @"\ue0f6",
             @"typcn-social-tumbler":                    @"\ue0f7",
             @"typcn-social-twitter-circular":           @"\ue0f8",
             @"typcn-social-twitter":                    @"\ue0f9",
             @"typcn-social-vimeo-circular":             @"\ue0fa",
             @"typcn-social-vimeo":                      @"\ue0fb",
             @"typcn-social-youtube-circular":           @"\ue0fc",
             @"typcn-social-youtube":                    @"\ue0fd",
             @"typcn-sort-alphabetically-outline":       @"\ue0fe",
             @"typcn-sort-alphabetically":               @"\ue0ff",
             @"typcn-sort-numerically-outline":          @"\ue100",
             @"typcn-sort-numerically":                  @"\ue101",
             @"typcn-spanner-outline":                   @"\ue102",
             @"typcn-spanner":                           @"\ue103",
             @"typcn-spiral":                            @"\ue104",
             @"typcn-star-full-outline":                 @"\ue105",
             @"typcn-star-half-outline":                 @"\ue106",
             @"typcn-star-half":                         @"\ue107",
             @"typcn-star-outline":                      @"\ue108",
             @"typcn-star":                              @"\ue109",
             @"typcn-starburst-outline":                 @"\ue10a",
             @"typcn-starburst":                         @"\ue10b",
             @"typcn-stopwatch":                         @"\ue10c",
             @"typcn-support":                           @"\ue10d",
             @"typcn-tabs-outline":                      @"\ue10e",
             @"typcn-tag":                               @"\ue10f",
             @"typcn-tags":                              @"\ue110",
             @"typcn-th-large-outline":                  @"\ue111",
             @"typcn-th-large":                          @"\ue112",
             @"typcn-th-list-outline":                   @"\ue113",
             @"typcn-th-list":                           @"\ue114",
             @"typcn-th-menu-outline":                   @"\ue115",
             @"typcn-th-menu":                           @"\ue116",
             @"typcn-th-small-outline":                  @"\ue117",
             @"typcn-th-small":                          @"\ue118",
             @"typcn-thermometer":                       @"\ue119",
             @"typcn-thumbs-down":                       @"\ue11a",
             @"typcn-thumbs-ok":                         @"\ue11b",
             @"typcn-thumbs-up":                         @"\ue11c",
             @"typcn-tick-outline":                      @"\ue11d",
             @"typcn-tick":                              @"\ue11e",
             @"typcn-ticket":                            @"\ue11f",
             @"typcn-time":                              @"\ue120",
             @"typcn-times-outline":                     @"\ue121",
             @"typcn-times":                             @"\ue122",
             @"typcn-trash":                             @"\ue123",
             @"typcn-tree":                              @"\ue124",
             @"typcn-upload-outline":                    @"\ue125",
             @"typcn-upload":                            @"\ue126",
             @"typcn-user-add-outline":                  @"\ue127",
             @"typcn-user-add":                          @"\ue128",
             @"typcn-user-delete-outline":               @"\ue129",
             @"typcn-user-delete":                       @"\ue12a",
             @"typcn-user-outline":                      @"\ue12b",
             @"typcn-user":                              @"\ue12c",
             @"typcn-vendor-android":                    @"\ue12d",
             @"typcn-vendor-apple":                      @"\ue12e",
             @"typcn-vendor-microsoft":                  @"\ue12f",
             @"typcn-video-outline":                     @"\ue130",
             @"typcn-video":                             @"\ue131",
             @"typcn-volume-down":                       @"\ue132",
             @"typcn-volume-mute":                       @"\ue133",
             @"typcn-volume-up":                         @"\ue134",
             @"typcn-volume":                            @"\ue135",
             @"typcn-warning-outline":                   @"\ue136",
             @"typcn-warning":                           @"\ue137",
             @"typcn-watch":                             @"\ue138",
             @"typcn-waves-outline":                     @"\ue139",
             @"typcn-waves":                             @"\ue13a",
             @"typcn-weather-cloudy":                    @"\ue13b",
             @"typcn-weather-downpour":                  @"\ue13c",
             @"typcn-weather-night":                     @"\ue13d",
             @"typcn-weather-partly-sunny":              @"\ue13e",
             @"typcn-weather-shower":                    @"\ue13f",
             @"typcn-weather-snow":                      @"\ue140",
             @"typcn-weather-stormy":                    @"\ue141",
             @"typcn-weather-sunny":                     @"\ue142",
             @"typcn-weather-windy-cloudy":              @"\ue143",
             @"typcn-weather-windy":                     @"\ue144",
             @"typcn-wi-fi-outline":                     @"\ue145",
             @"typcn-wi-fi":                             @"\ue146",
             @"typcn-wine":                              @"\ue147",
             @"typcn-world-outline":                     @"\ue148",
             @"typcn-world":                             @"\ue149",
             @"typcn-zoom-in-outline":                   @"\ue14a",
             @"typcn-zoom-in":                           @"\ue14b",
             @"typcn-zoom-out-outline":                  @"\ue14c",
             @"typcn-zoom-out":                          @"\ue14d",
             @"typcn-zoom-outline":                      @"\ue14e",
             @"typcn-zoom":                              @"\ue14f",
             };
}

@end
