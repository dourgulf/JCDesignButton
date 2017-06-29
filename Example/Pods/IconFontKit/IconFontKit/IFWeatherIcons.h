#import "IFIcon.h"

/**
 * WeatherIcons icon types.
 */
typedef NS_ENUM(IFIconType, IFWeatherIconsType) {

    /// Identifier: "wi-day-sunny"
    IFWeatherIconDaySunny                            = 0xf00d,

    /// Identifier: "wi-day-cloudy"
    IFWeatherIconDayCloudy                           = 0xf002,

    /// Identifier: "wi-day-cloudy-gusts"
    IFWeatherIconDayCloudyGusts                      = 0xf000,

    /// Identifier: "wi-day-cloudy-windy"
    IFWeatherIconDayCloudyWindy                      = 0xf001,

    /// Identifier: "wi-day-fog"
    IFWeatherIconDayFog                              = 0xf003,

    /// Identifier: "wi-day-hail"
    IFWeatherIconDayHail                             = 0xf004,

    /// Identifier: "wi-day-haze"
    IFWeatherIconDayHaze                             = 0xf0b6,

    /// Identifier: "wi-day-lightning"
    IFWeatherIconDayLightning                        = 0xf005,

    /// Identifier: "wi-day-rain"
    IFWeatherIconDayRain                             = 0xf008,

    /// Identifier: "wi-day-rain-mix"
    IFWeatherIconDayRainMix                          = 0xf006,

    /// Identifier: "wi-day-rain-wind"
    IFWeatherIconDayRainWind                         = 0xf007,

    /// Identifier: "wi-day-showers"
    IFWeatherIconDayShowers                          = 0xf009,

    /// Identifier: "wi-day-sleet"
    IFWeatherIconDaySleet                            = 0xf0b2,

    /// Identifier: "wi-day-sleet-storm"
    IFWeatherIconDaySleetStorm                       = 0xf068,

    /// Identifier: "wi-day-snow"
    IFWeatherIconDaySnow                             = 0xf00a,

    /// Identifier: "wi-day-snow-thunderstorm"
    IFWeatherIconDaySnowThunderstorm                 = 0xf06b,

    /// Identifier: "wi-day-snow-wind"
    IFWeatherIconDaySnowWind                         = 0xf065,

    /// Identifier: "wi-day-sprinkle"
    IFWeatherIconDaySprinkle                         = 0xf00b,

    /// Identifier: "wi-day-storm-showers"
    IFWeatherIconDayStormShowers                     = 0xf00e,

    /// Identifier: "wi-day-sunny-overcast"
    IFWeatherIconDaySunnyOvercast                    = 0xf00c,

    /// Identifier: "wi-day-thunderstorm"
    IFWeatherIconDayThunderstorm                     = 0xf010,

    /// Identifier: "wi-day-windy"
    IFWeatherIconDayWindy                            = 0xf085,

    /// Identifier: "wi-solar-eclipse"
    IFWeatherIconSolarEclipse                        = 0xf06e,

    /// Identifier: "wi-hot"
    IFWeatherIconHot                                 = 0xf072,

    /// Identifier: "wi-day-cloudy-high"
    IFWeatherIconDayCloudyHigh                       = 0xf07d,

    /// Identifier: "wi-day-light-wind"
    IFWeatherIconDayLightWind                        = 0xf0c4,

    /// Identifier: "wi-night-clear"
    IFWeatherIconNightClear                          = 0xf02e,

    /// Identifier: "wi-night-alt-cloudy"
    IFWeatherIconNightAltCloudy                      = 0xf086,

    /// Identifier: "wi-night-alt-cloudy-gusts"
    IFWeatherIconNightAltCloudyGusts                 = 0xf022,

    /// Identifier: "wi-night-alt-cloudy-windy"
    IFWeatherIconNightAltCloudyWindy                 = 0xf023,

    /// Identifier: "wi-night-alt-hail"
    IFWeatherIconNightAltHail                        = 0xf024,

    /// Identifier: "wi-night-alt-lightning"
    IFWeatherIconNightAltLightning                   = 0xf025,

    /// Identifier: "wi-night-alt-rain"
    IFWeatherIconNightAltRain                        = 0xf028,

    /// Identifier: "wi-night-alt-rain-mix"
    IFWeatherIconNightAltRainMix                     = 0xf026,

    /// Identifier: "wi-night-alt-rain-wind"
    IFWeatherIconNightAltRainWind                    = 0xf027,

    /// Identifier: "wi-night-alt-showers"
    IFWeatherIconNightAltShowers                     = 0xf029,

    /// Identifier: "wi-night-alt-sleet"
    IFWeatherIconNightAltSleet                       = 0xf0b4,

    /// Identifier: "wi-night-alt-sleet-storm"
    IFWeatherIconNightAltSleetStorm                  = 0xf06a,

    /// Identifier: "wi-night-alt-snow"
    IFWeatherIconNightAltSnow                        = 0xf02a,

    /// Identifier: "wi-night-alt-snow-thunderstorm"
    IFWeatherIconNightAltSnowThunderstorm            = 0xf06d,

    /// Identifier: "wi-night-alt-snow-wind"
    IFWeatherIconNightAltSnowWind                    = 0xf067,

    /// Identifier: "wi-night-alt-sprinkle"
    IFWeatherIconNightAltSprinkle                    = 0xf02b,

    /// Identifier: "wi-night-alt-storm-showers"
    IFWeatherIconNightAltStormShowers                = 0xf02c,

    /// Identifier: "wi-night-alt-thunderstorm"
    IFWeatherIconNightAltThunderstorm                = 0xf02d,

    /// Identifier: "wi-night-cloudy"
    IFWeatherIconNightCloudy                         = 0xf031,

    /// Identifier: "wi-night-cloudy-gusts"
    IFWeatherIconNightCloudyGusts                    = 0xf02f,

    /// Identifier: "wi-night-cloudy-windy"
    IFWeatherIconNightCloudyWindy                    = 0xf030,

    /// Identifier: "wi-night-fog"
    IFWeatherIconNightFog                            = 0xf04a,

    /// Identifier: "wi-night-hail"
    IFWeatherIconNightHail                           = 0xf032,

    /// Identifier: "wi-night-lightning"
    IFWeatherIconNightLightning                      = 0xf033,

    /// Identifier: "wi-night-partly-cloudy"
    IFWeatherIconNightPartlyCloudy                   = 0xf083,

    /// Identifier: "wi-night-rain"
    IFWeatherIconNightRain                           = 0xf036,

    /// Identifier: "wi-night-rain-mix"
    IFWeatherIconNightRainMix                        = 0xf034,

    /// Identifier: "wi-night-rain-wind"
    IFWeatherIconNightRainWind                       = 0xf035,

    /// Identifier: "wi-night-showers"
    IFWeatherIconNightShowers                        = 0xf037,

    /// Identifier: "wi-night-sleet"
    IFWeatherIconNightSleet                          = 0xf0b3,

    /// Identifier: "wi-night-sleet-storm"
    IFWeatherIconNightSleetStorm                     = 0xf069,

    /// Identifier: "wi-night-snow"
    IFWeatherIconNightSnow                           = 0xf038,

    /// Identifier: "wi-night-snow-thunderstorm"
    IFWeatherIconNightSnowThunderstorm               = 0xf06c,

    /// Identifier: "wi-night-snow-wind"
    IFWeatherIconNightSnowWind                       = 0xf066,

    /// Identifier: "wi-night-sprinkle"
    IFWeatherIconNightSprinkle                       = 0xf039,

    /// Identifier: "wi-night-storm-showers"
    IFWeatherIconNightStormShowers                   = 0xf03a,

    /// Identifier: "wi-night-thunderstorm"
    IFWeatherIconNightThunderstorm                   = 0xf03b,

    /// Identifier: "wi-lunar-eclipse"
    IFWeatherIconLunarEclipse                        = 0xf070,

    /// Identifier: "wi-stars"
    IFWeatherIconStars                               = 0xf077,

    /// Identifier: "wi-storm-showers"
    IFWeatherIconStormShowers                        = 0xf01d,

    /// Identifier: "wi-thunderstorm"
    IFWeatherIconThunderstorm                        = 0xf01e,

    /// Identifier: "wi-night-alt-cloudy-high"
    IFWeatherIconNightAltCloudyHigh                  = 0xf07e,

    /// Identifier: "wi-night-cloudy-high"
    IFWeatherIconNightCloudyHigh                     = 0xf080,

    /// Identifier: "wi-night-alt-partly-cloudy"
    IFWeatherIconNightAltPartlyCloudy                = 0xf081,

    /// Identifier: "wi-cloud"
    IFWeatherIconCloud                               = 0xf041,

    /// Identifier: "wi-cloudy"
    IFWeatherIconCloudy                              = 0xf013,

    /// Identifier: "wi-cloudy-gusts"
    IFWeatherIconCloudyGusts                         = 0xf011,

    /// Identifier: "wi-cloudy-windy"
    IFWeatherIconCloudyWindy                         = 0xf012,

    /// Identifier: "wi-fog"
    IFWeatherIconFog                                 = 0xf014,

    /// Identifier: "wi-hail"
    IFWeatherIconHail                                = 0xf015,

    /// Identifier: "wi-rain"
    IFWeatherIconRain                                = 0xf019,

    /// Identifier: "wi-rain-mix"
    IFWeatherIconRainMix                             = 0xf017,

    /// Identifier: "wi-rain-wind"
    IFWeatherIconRainWind                            = 0xf018,

    /// Identifier: "wi-showers"
    IFWeatherIconShowers                             = 0xf01a,

    /// Identifier: "wi-sleet"
    IFWeatherIconSleet                               = 0xf0b5,

    /// Identifier: "wi-snow"
    IFWeatherIconSnow                                = 0xf01b,

    /// Identifier: "wi-sprinkle"
    IFWeatherIconSprinkle                            = 0xf01c,

    /// Identifier: "wi-snow-wind"
    IFWeatherIconSnowWind                            = 0xf064,

    /// Identifier: "wi-smog"
    IFWeatherIconSmog                                = 0xf074,

    /// Identifier: "wi-smoke"
    IFWeatherIconSmoke                               = 0xf062,

    /// Identifier: "wi-lightning"
    IFWeatherIconLightning                           = 0xf016,

    /// Identifier: "wi-raindrops"
    IFWeatherIconRaindrops                           = 0xf04e,

    /// Identifier: "wi-raindrop"
    IFWeatherIconRaindrop                            = 0xf078,

    /// Identifier: "wi-dust"
    IFWeatherIconDust                                = 0xf063,

    /// Identifier: "wi-snowflake-cold"
    IFWeatherIconSnowflakeCold                       = 0xf076,

    /// Identifier: "wi-windy"
    IFWeatherIconWindy                               = 0xf021,

    /// Identifier: "wi-strong-wind"
    IFWeatherIconStrongWind                          = 0xf050,

    /// Identifier: "wi-sandstorm"
    IFWeatherIconSandstorm                           = 0xf082,

    /// Identifier: "wi-earthquake"
    IFWeatherIconEarthquake                          = 0xf0c6,

    /// Identifier: "wi-fire"
    IFWeatherIconFire                                = 0xf0c7,

    /// Identifier: "wi-flood"
    IFWeatherIconFlood                               = 0xf07c,

    /// Identifier: "wi-meteor"
    IFWeatherIconMeteor                              = 0xf071,

    /// Identifier: "wi-tsunami"
    IFWeatherIconTsunami                             = 0xf0c5,

    /// Identifier: "wi-volcano"
    IFWeatherIconVolcano                             = 0xf0c8,

    /// Identifier: "wi-hurricane"
    IFWeatherIconHurricane                           = 0xf073,

    /// Identifier: "wi-tornado"
    IFWeatherIconTornado                             = 0xf056,

    /// Identifier: "wi-small-craft-advisory"
    IFWeatherIconSmallCraftAdvisory                  = 0xf0cc,

    /// Identifier: "wi-gale-warning"
    IFWeatherIconGaleWarning                         = 0xf0cd,

    /// Identifier: "wi-storm-warning"
    IFWeatherIconStormWarning                        = 0xf0ce,

    /// Identifier: "wi-hurricane-warning"
    IFWeatherIconHurricaneWarning                    = 0xf0cf,

    /// Identifier: "wi-wind-direction"
    IFWeatherIconWindDirection                       = 0xf0b1,

    /// Identifier: "wi-alien"
    IFWeatherIconAlien                               = 0xf075,

    /// Identifier: "wi-celsius"
    IFWeatherIconCelsius                             = 0xf03c,

    /// Identifier: "wi-fahrenheit"
    IFWeatherIconFahrenheit                          = 0xf045,

    /// Identifier: "wi-degrees"
    IFWeatherIconDegrees                             = 0xf042,

    /// Identifier: "wi-thermometer"
    IFWeatherIconThermometer                         = 0xf055,

    /// Identifier: "wi-thermometer-exterior"
    IFWeatherIconThermometerExterior                 = 0xf053,

    /// Identifier: "wi-thermometer-internal"
    IFWeatherIconThermometerInternal                 = 0xf054,

    /// Identifier: "wi-cloud-down"
    IFWeatherIconCloudDown                           = 0xf03d,

    /// Identifier: "wi-cloud-up"
    IFWeatherIconCloudUp                             = 0xf040,

    /// Identifier: "wi-cloud-refresh"
    IFWeatherIconCloudRefresh                        = 0xf03e,

    /// Identifier: "wi-horizon"
    IFWeatherIconHorizon                             = 0xf047,

    /// Identifier: "wi-horizon-alt"
    IFWeatherIconHorizonAlt                          = 0xf046,

    /// Identifier: "wi-sunrise"
    IFWeatherIconSunrise                             = 0xf051,

    /// Identifier: "wi-sunset"
    IFWeatherIconSunset                              = 0xf052,

    /// Identifier: "wi-moonrise"
    IFWeatherIconMoonrise                            = 0xf0c9,

    /// Identifier: "wi-moonset"
    IFWeatherIconMoonset                             = 0xf0ca,

    /// Identifier: "wi-refresh"
    IFWeatherIconRefresh                             = 0xf04c,

    /// Identifier: "wi-refresh-alt"
    IFWeatherIconRefreshAlt                          = 0xf04b,

    /// Identifier: "wi-umbrella"
    IFWeatherIconUmbrella                            = 0xf084,

    /// Identifier: "wi-barometer"
    IFWeatherIconBarometer                           = 0xf079,

    /// Identifier: "wi-humidity"
    IFWeatherIconHumidity                            = 0xf07a,

    /// Identifier: "wi-na"
    IFWeatherIconNa                                  = 0xf07b,

    /// Identifier: "wi-train"
    IFWeatherIconTrain                               = 0xf0cb,

    /// Identifier: "wi-moon-new"
    IFWeatherIconMoonNew                             = 0xf095,

    /// Identifier: "wi-moon-waxing-crescent-1"
    IFWeatherIconMoonWaxingCrescent1                 = 0xf096,

    /// Identifier: "wi-moon-waxing-crescent-2"
    IFWeatherIconMoonWaxingCrescent2                 = 0xf097,

    /// Identifier: "wi-moon-waxing-crescent-3"
    IFWeatherIconMoonWaxingCrescent3                 = 0xf098,

    /// Identifier: "wi-moon-waxing-crescent-4"
    IFWeatherIconMoonWaxingCrescent4                 = 0xf099,

    /// Identifier: "wi-moon-waxing-crescent-5"
    IFWeatherIconMoonWaxingCrescent5                 = 0xf09a,

    /// Identifier: "wi-moon-waxing-crescent-6"
    IFWeatherIconMoonWaxingCrescent6                 = 0xf09b,

    /// Identifier: "wi-moon-first-quarter"
    IFWeatherIconMoonFirstQuarter                    = 0xf09c,

    /// Identifier: "wi-moon-waxing-gibbous-1"
    IFWeatherIconMoonWaxingGibbous1                  = 0xf09d,

    /// Identifier: "wi-moon-waxing-gibbous-2"
    IFWeatherIconMoonWaxingGibbous2                  = 0xf09e,

    /// Identifier: "wi-moon-waxing-gibbous-3"
    IFWeatherIconMoonWaxingGibbous3                  = 0xf09f,

    /// Identifier: "wi-moon-waxing-gibbous-4"
    IFWeatherIconMoonWaxingGibbous4                  = 0xf0a0,

    /// Identifier: "wi-moon-waxing-gibbous-5"
    IFWeatherIconMoonWaxingGibbous5                  = 0xf0a1,

    /// Identifier: "wi-moon-waxing-gibbous-6"
    IFWeatherIconMoonWaxingGibbous6                  = 0xf0a2,

    /// Identifier: "wi-moon-full"
    IFWeatherIconMoonFull                            = 0xf0a3,

    /// Identifier: "wi-moon-waning-gibbous-1"
    IFWeatherIconMoonWaningGibbous1                  = 0xf0a4,

    /// Identifier: "wi-moon-waning-gibbous-2"
    IFWeatherIconMoonWaningGibbous2                  = 0xf0a5,

    /// Identifier: "wi-moon-waning-gibbous-3"
    IFWeatherIconMoonWaningGibbous3                  = 0xf0a6,

    /// Identifier: "wi-moon-waning-gibbous-4"
    IFWeatherIconMoonWaningGibbous4                  = 0xf0a7,

    /// Identifier: "wi-moon-waning-gibbous-5"
    IFWeatherIconMoonWaningGibbous5                  = 0xf0a8,

    /// Identifier: "wi-moon-waning-gibbous-6"
    IFWeatherIconMoonWaningGibbous6                  = 0xf0a9,

    /// Identifier: "wi-moon-third-quarter"
    IFWeatherIconMoonThirdQuarter                    = 0xf0aa,

    /// Identifier: "wi-moon-waning-crescent-1"
    IFWeatherIconMoonWaningCrescent1                 = 0xf0ab,

    /// Identifier: "wi-moon-waning-crescent-2"
    IFWeatherIconMoonWaningCrescent2                 = 0xf0ac,

    /// Identifier: "wi-moon-waning-crescent-3"
    IFWeatherIconMoonWaningCrescent3                 = 0xf0ad,

    /// Identifier: "wi-moon-waning-crescent-4"
    IFWeatherIconMoonWaningCrescent4                 = 0xf0ae,

    /// Identifier: "wi-moon-waning-crescent-5"
    IFWeatherIconMoonWaningCrescent5                 = 0xf0af,

    /// Identifier: "wi-moon-waning-crescent-6"
    IFWeatherIconMoonWaningCrescent6                 = 0xf0b0,

    /// Identifier: "wi-moon-alt-new"
    IFWeatherIconMoonAltNew                          = 0xf0eb,

    /// Identifier: "wi-moon-alt-waxing-crescent-1"
    IFWeatherIconMoonAltWaxingCrescent1              = 0xf0d0,

    /// Identifier: "wi-moon-alt-waxing-crescent-2"
    IFWeatherIconMoonAltWaxingCrescent2              = 0xf0d1,

    /// Identifier: "wi-moon-alt-waxing-crescent-3"
    IFWeatherIconMoonAltWaxingCrescent3              = 0xf0d2,

    /// Identifier: "wi-moon-alt-waxing-crescent-4"
    IFWeatherIconMoonAltWaxingCrescent4              = 0xf0d3,

    /// Identifier: "wi-moon-alt-waxing-crescent-5"
    IFWeatherIconMoonAltWaxingCrescent5              = 0xf0d4,

    /// Identifier: "wi-moon-alt-waxing-crescent-6"
    IFWeatherIconMoonAltWaxingCrescent6              = 0xf0d5,

    /// Identifier: "wi-moon-alt-first-quarter"
    IFWeatherIconMoonAltFirstQuarter                 = 0xf0d6,

    /// Identifier: "wi-moon-alt-waxing-gibbous-1"
    IFWeatherIconMoonAltWaxingGibbous1               = 0xf0d7,

    /// Identifier: "wi-moon-alt-waxing-gibbous-2"
    IFWeatherIconMoonAltWaxingGibbous2               = 0xf0d8,

    /// Identifier: "wi-moon-alt-waxing-gibbous-3"
    IFWeatherIconMoonAltWaxingGibbous3               = 0xf0d9,

    /// Identifier: "wi-moon-alt-waxing-gibbous-4"
    IFWeatherIconMoonAltWaxingGibbous4               = 0xf0da,

    /// Identifier: "wi-moon-alt-waxing-gibbous-5"
    IFWeatherIconMoonAltWaxingGibbous5               = 0xf0db,

    /// Identifier: "wi-moon-alt-waxing-gibbous-6"
    IFWeatherIconMoonAltWaxingGibbous6               = 0xf0dc,

    /// Identifier: "wi-moon-alt-full"
    IFWeatherIconMoonAltFull                         = 0xf0dd,

    /// Identifier: "wi-moon-alt-waning-gibbous-1"
    IFWeatherIconMoonAltWaningGibbous1               = 0xf0de,

    /// Identifier: "wi-moon-alt-waning-gibbous-2"
    IFWeatherIconMoonAltWaningGibbous2               = 0xf0df,

    /// Identifier: "wi-moon-alt-waning-gibbous-3"
    IFWeatherIconMoonAltWaningGibbous3               = 0xf0e0,

    /// Identifier: "wi-moon-alt-waning-gibbous-4"
    IFWeatherIconMoonAltWaningGibbous4               = 0xf0e1,

    /// Identifier: "wi-moon-alt-waning-gibbous-5"
    IFWeatherIconMoonAltWaningGibbous5               = 0xf0e2,

    /// Identifier: "wi-moon-alt-waning-gibbous-6"
    IFWeatherIconMoonAltWaningGibbous6               = 0xf0e3,

    /// Identifier: "wi-moon-alt-third-quarter"
    IFWeatherIconMoonAltThirdQuarter                 = 0xf0e4,

    /// Identifier: "wi-moon-alt-waning-crescent-1"
    IFWeatherIconMoonAltWaningCrescent1              = 0xf0e5,

    /// Identifier: "wi-moon-alt-waning-crescent-2"
    IFWeatherIconMoonAltWaningCrescent2              = 0xf0e6,

    /// Identifier: "wi-moon-alt-waning-crescent-3"
    IFWeatherIconMoonAltWaningCrescent3              = 0xf0e7,

    /// Identifier: "wi-moon-alt-waning-crescent-4"
    IFWeatherIconMoonAltWaningCrescent4              = 0xf0e8,

    /// Identifier: "wi-moon-alt-waning-crescent-5"
    IFWeatherIconMoonAltWaningCrescent5              = 0xf0e9,

    /// Identifier: "wi-moon-alt-waning-crescent-6"
    IFWeatherIconMoonAltWaningCrescent6              = 0xf0ea,

    /// Identifier: "wi-moon-0"
    IFWeatherIconMoon0                               = 0xf095,

    /// Identifier: "wi-moon-1"
    IFWeatherIconMoon1                               = 0xf096,

    /// Identifier: "wi-moon-2"
    IFWeatherIconMoon2                               = 0xf097,

    /// Identifier: "wi-moon-3"
    IFWeatherIconMoon3                               = 0xf098,

    /// Identifier: "wi-moon-4"
    IFWeatherIconMoon4                               = 0xf099,

    /// Identifier: "wi-moon-5"
    IFWeatherIconMoon5                               = 0xf09a,

    /// Identifier: "wi-moon-6"
    IFWeatherIconMoon6                               = 0xf09b,

    /// Identifier: "wi-moon-7"
    IFWeatherIconMoon7                               = 0xf09c,

    /// Identifier: "wi-moon-8"
    IFWeatherIconMoon8                               = 0xf09d,

    /// Identifier: "wi-moon-9"
    IFWeatherIconMoon9                               = 0xf09e,

    /// Identifier: "wi-moon-10"
    IFWeatherIconMoon10                              = 0xf09f,

    /// Identifier: "wi-moon-11"
    IFWeatherIconMoon11                              = 0xf0a0,

    /// Identifier: "wi-moon-12"
    IFWeatherIconMoon12                              = 0xf0a1,

    /// Identifier: "wi-moon-13"
    IFWeatherIconMoon13                              = 0xf0a2,

    /// Identifier: "wi-moon-14"
    IFWeatherIconMoon14                              = 0xf0a3,

    /// Identifier: "wi-moon-15"
    IFWeatherIconMoon15                              = 0xf0a4,

    /// Identifier: "wi-moon-16"
    IFWeatherIconMoon16                              = 0xf0a5,

    /// Identifier: "wi-moon-17"
    IFWeatherIconMoon17                              = 0xf0a6,

    /// Identifier: "wi-moon-18"
    IFWeatherIconMoon18                              = 0xf0a7,

    /// Identifier: "wi-moon-19"
    IFWeatherIconMoon19                              = 0xf0a8,

    /// Identifier: "wi-moon-20"
    IFWeatherIconMoon20                              = 0xf0a9,

    /// Identifier: "wi-moon-21"
    IFWeatherIconMoon21                              = 0xf0aa,

    /// Identifier: "wi-moon-22"
    IFWeatherIconMoon22                              = 0xf0ab,

    /// Identifier: "wi-moon-23"
    IFWeatherIconMoon23                              = 0xf0ac,

    /// Identifier: "wi-moon-24"
    IFWeatherIconMoon24                              = 0xf0ad,

    /// Identifier: "wi-moon-25"
    IFWeatherIconMoon25                              = 0xf0ae,

    /// Identifier: "wi-moon-26"
    IFWeatherIconMoon26                              = 0xf0af,

    /// Identifier: "wi-moon-27"
    IFWeatherIconMoon27                              = 0xf0b0,

    /// Identifier: "wi-time-1"
    IFWeatherIconTime1                               = 0xf08a,

    /// Identifier: "wi-time-2"
    IFWeatherIconTime2                               = 0xf08b,

    /// Identifier: "wi-time-3"
    IFWeatherIconTime3                               = 0xf08c,

    /// Identifier: "wi-time-4"
    IFWeatherIconTime4                               = 0xf08d,

    /// Identifier: "wi-time-5"
    IFWeatherIconTime5                               = 0xf08e,

    /// Identifier: "wi-time-6"
    IFWeatherIconTime6                               = 0xf08f,

    /// Identifier: "wi-time-7"
    IFWeatherIconTime7                               = 0xf090,

    /// Identifier: "wi-time-8"
    IFWeatherIconTime8                               = 0xf091,

    /// Identifier: "wi-time-9"
    IFWeatherIconTime9                               = 0xf092,

    /// Identifier: "wi-time-10"
    IFWeatherIconTime10                              = 0xf093,

    /// Identifier: "wi-time-11"
    IFWeatherIconTime11                              = 0xf094,

    /// Identifier: "wi-time-12"
    IFWeatherIconTime12                              = 0xf089,

    /// Identifier: "wi-direction-up"
    IFWeatherIconDirectionUp                         = 0xf058,

    /// Identifier: "wi-direction-up-right"
    IFWeatherIconDirectionUpRight                    = 0xf057,

    /// Identifier: "wi-direction-right"
    IFWeatherIconDirectionRight                      = 0xf04d,

    /// Identifier: "wi-direction-down-right"
    IFWeatherIconDirectionDownRight                  = 0xf088,

    /// Identifier: "wi-direction-down"
    IFWeatherIconDirectionDown                       = 0xf044,

    /// Identifier: "wi-direction-down-left"
    IFWeatherIconDirectionDownLeft                   = 0xf043,

    /// Identifier: "wi-direction-left"
    IFWeatherIconDirectionLeft                       = 0xf048,

    /// Identifier: "wi-direction-up-left"
    IFWeatherIconDirectionUpLeft                     = 0xf087,

    /// Identifier: "wi-wind-beaufort-0"
    IFWeatherIconWindBeaufort0                       = 0xf0b7,

    /// Identifier: "wi-wind-beaufort-1"
    IFWeatherIconWindBeaufort1                       = 0xf0b8,

    /// Identifier: "wi-wind-beaufort-2"
    IFWeatherIconWindBeaufort2                       = 0xf0b9,

    /// Identifier: "wi-wind-beaufort-3"
    IFWeatherIconWindBeaufort3                       = 0xf0ba,

    /// Identifier: "wi-wind-beaufort-4"
    IFWeatherIconWindBeaufort4                       = 0xf0bb,

    /// Identifier: "wi-wind-beaufort-5"
    IFWeatherIconWindBeaufort5                       = 0xf0bc,

    /// Identifier: "wi-wind-beaufort-6"
    IFWeatherIconWindBeaufort6                       = 0xf0bd,

    /// Identifier: "wi-wind-beaufort-7"
    IFWeatherIconWindBeaufort7                       = 0xf0be,

    /// Identifier: "wi-wind-beaufort-8"
    IFWeatherIconWindBeaufort8                       = 0xf0bf,

    /// Identifier: "wi-wind-beaufort-9"
    IFWeatherIconWindBeaufort9                       = 0xf0c0,

    /// Identifier: "wi-wind-beaufort-10"
    IFWeatherIconWindBeaufort10                      = 0xf0c1,

    /// Identifier: "wi-wind-beaufort-11"
    IFWeatherIconWindBeaufort11                      = 0xf0c2,

    /// Identifier: "wi-wind-beaufort-12"
    IFWeatherIconWindBeaufort12                      = 0xf0c3,

    /// Identifier: "wi-yahoo-0"
    IFWeatherIconYahoo0                              = 0xf056,

    /// Identifier: "wi-yahoo-1"
    IFWeatherIconYahoo1                              = 0xf00e,

    /// Identifier: "wi-yahoo-2"
    IFWeatherIconYahoo2                              = 0xf073,

    /// Identifier: "wi-yahoo-3"
    IFWeatherIconYahoo3                              = 0xf01e,

    /// Identifier: "wi-yahoo-4"
    IFWeatherIconYahoo4                              = 0xf01e,

    /// Identifier: "wi-yahoo-5"
    IFWeatherIconYahoo5                              = 0xf017,

    /// Identifier: "wi-yahoo-6"
    IFWeatherIconYahoo6                              = 0xf017,

    /// Identifier: "wi-yahoo-7"
    IFWeatherIconYahoo7                              = 0xf017,

    /// Identifier: "wi-yahoo-8"
    IFWeatherIconYahoo8                              = 0xf015,

    /// Identifier: "wi-yahoo-9"
    IFWeatherIconYahoo9                              = 0xf01a,

    /// Identifier: "wi-yahoo-10"
    IFWeatherIconYahoo10                             = 0xf015,

    /// Identifier: "wi-yahoo-11"
    IFWeatherIconYahoo11                             = 0xf01a,

    /// Identifier: "wi-yahoo-12"
    IFWeatherIconYahoo12                             = 0xf01a,

    /// Identifier: "wi-yahoo-13"
    IFWeatherIconYahoo13                             = 0xf01b,

    /// Identifier: "wi-yahoo-14"
    IFWeatherIconYahoo14                             = 0xf00a,

    /// Identifier: "wi-yahoo-15"
    IFWeatherIconYahoo15                             = 0xf064,

    /// Identifier: "wi-yahoo-16"
    IFWeatherIconYahoo16                             = 0xf01b,

    /// Identifier: "wi-yahoo-17"
    IFWeatherIconYahoo17                             = 0xf015,

    /// Identifier: "wi-yahoo-18"
    IFWeatherIconYahoo18                             = 0xf017,

    /// Identifier: "wi-yahoo-19"
    IFWeatherIconYahoo19                             = 0xf063,

    /// Identifier: "wi-yahoo-20"
    IFWeatherIconYahoo20                             = 0xf014,

    /// Identifier: "wi-yahoo-21"
    IFWeatherIconYahoo21                             = 0xf021,

    /// Identifier: "wi-yahoo-22"
    IFWeatherIconYahoo22                             = 0xf062,

    /// Identifier: "wi-yahoo-23"
    IFWeatherIconYahoo23                             = 0xf050,

    /// Identifier: "wi-yahoo-24"
    IFWeatherIconYahoo24                             = 0xf050,

    /// Identifier: "wi-yahoo-25"
    IFWeatherIconYahoo25                             = 0xf076,

    /// Identifier: "wi-yahoo-26"
    IFWeatherIconYahoo26                             = 0xf013,

    /// Identifier: "wi-yahoo-27"
    IFWeatherIconYahoo27                             = 0xf031,

    /// Identifier: "wi-yahoo-28"
    IFWeatherIconYahoo28                             = 0xf002,

    /// Identifier: "wi-yahoo-29"
    IFWeatherIconYahoo29                             = 0xf031,

    /// Identifier: "wi-yahoo-30"
    IFWeatherIconYahoo30                             = 0xf002,

    /// Identifier: "wi-yahoo-31"
    IFWeatherIconYahoo31                             = 0xf02e,

    /// Identifier: "wi-yahoo-32"
    IFWeatherIconYahoo32                             = 0xf00d,

    /// Identifier: "wi-yahoo-33"
    IFWeatherIconYahoo33                             = 0xf083,

    /// Identifier: "wi-yahoo-34"
    IFWeatherIconYahoo34                             = 0xf00c,

    /// Identifier: "wi-yahoo-35"
    IFWeatherIconYahoo35                             = 0xf017,

    /// Identifier: "wi-yahoo-36"
    IFWeatherIconYahoo36                             = 0xf072,

    /// Identifier: "wi-yahoo-37"
    IFWeatherIconYahoo37                             = 0xf00e,

    /// Identifier: "wi-yahoo-38"
    IFWeatherIconYahoo38                             = 0xf00e,

    /// Identifier: "wi-yahoo-39"
    IFWeatherIconYahoo39                             = 0xf00e,

    /// Identifier: "wi-yahoo-40"
    IFWeatherIconYahoo40                             = 0xf01a,

    /// Identifier: "wi-yahoo-41"
    IFWeatherIconYahoo41                             = 0xf064,

    /// Identifier: "wi-yahoo-42"
    IFWeatherIconYahoo42                             = 0xf01b,

    /// Identifier: "wi-yahoo-43"
    IFWeatherIconYahoo43                             = 0xf064,

    /// Identifier: "wi-yahoo-44"
    IFWeatherIconYahoo44                             = 0xf00c,

    /// Identifier: "wi-yahoo-45"
    IFWeatherIconYahoo45                             = 0xf00e,

    /// Identifier: "wi-yahoo-46"
    IFWeatherIconYahoo46                             = 0xf01b,

    /// Identifier: "wi-yahoo-47"
    IFWeatherIconYahoo47                             = 0xf00e,

    /// Identifier: "wi-yahoo-3200"
    IFWeatherIconYahoo3200                           = 0xf077,

    /// Identifier: "wi-forecast-io-clear-day"
    IFWeatherIconForecastIoClearDay                  = 0xf00d,

    /// Identifier: "wi-forecast-io-clear-night"
    IFWeatherIconForecastIoClearNight                = 0xf02e,

    /// Identifier: "wi-forecast-io-rain"
    IFWeatherIconForecastIoRain                      = 0xf019,

    /// Identifier: "wi-forecast-io-snow"
    IFWeatherIconForecastIoSnow                      = 0xf01b,

    /// Identifier: "wi-forecast-io-sleet"
    IFWeatherIconForecastIoSleet                     = 0xf0b5,

    /// Identifier: "wi-forecast-io-wind"
    IFWeatherIconForecastIoWind                      = 0xf050,

    /// Identifier: "wi-forecast-io-fog"
    IFWeatherIconForecastIoFog                       = 0xf014,

    /// Identifier: "wi-forecast-io-cloudy"
    IFWeatherIconForecastIoCloudy                    = 0xf013,

    /// Identifier: "wi-forecast-io-partly-cloudy-day"
    IFWeatherIconForecastIoPartlyCloudyDay           = 0xf002,

    /// Identifier: "wi-forecast-io-partly-cloudy-night"
    IFWeatherIconForecastIoPartlyCloudyNight         = 0xf031,

    /// Identifier: "wi-forecast-io-hail"
    IFWeatherIconForecastIoHail                      = 0xf015,

    /// Identifier: "wi-forecast-io-thunderstorm"
    IFWeatherIconForecastIoThunderstorm              = 0xf01e,

    /// Identifier: "wi-forecast-io-tornado"
    IFWeatherIconForecastIoTornado                   = 0xf056,

    /// Identifier: "wi-wmo4680-0"
    IFWeatherIconWmo46800                            = 0xf055,

    /// Identifier: "wi-wmo4680-00"
    IFWeatherIconWmo468000                           = 0xf055,

    /// Identifier: "wi-wmo4680-1"
    IFWeatherIconWmo46801                            = 0xf013,

    /// Identifier: "wi-wmo4680-01"
    IFWeatherIconWmo468001                           = 0xf013,

    /// Identifier: "wi-wmo4680-2"
    IFWeatherIconWmo46802                            = 0xf055,

    /// Identifier: "wi-wmo4680-02"
    IFWeatherIconWmo468002                           = 0xf055,

    /// Identifier: "wi-wmo4680-3"
    IFWeatherIconWmo46803                            = 0xf013,

    /// Identifier: "wi-wmo4680-03"
    IFWeatherIconWmo468003                           = 0xf013,

    /// Identifier: "wi-wmo4680-4"
    IFWeatherIconWmo46804                            = 0xf014,

    /// Identifier: "wi-wmo4680-04"
    IFWeatherIconWmo468004                           = 0xf014,

    /// Identifier: "wi-wmo4680-5"
    IFWeatherIconWmo46805                            = 0xf014,

    /// Identifier: "wi-wmo4680-05"
    IFWeatherIconWmo468005                           = 0xf014,

    /// Identifier: "wi-wmo4680-10"
    IFWeatherIconWmo468010                           = 0xf014,

    /// Identifier: "wi-wmo4680-11"
    IFWeatherIconWmo468011                           = 0xf014,

    /// Identifier: "wi-wmo4680-12"
    IFWeatherIconWmo468012                           = 0xf016,

    /// Identifier: "wi-wmo4680-18"
    IFWeatherIconWmo468018                           = 0xf050,

    /// Identifier: "wi-wmo4680-20"
    IFWeatherIconWmo468020                           = 0xf014,

    /// Identifier: "wi-wmo4680-21"
    IFWeatherIconWmo468021                           = 0xf017,

    /// Identifier: "wi-wmo4680-22"
    IFWeatherIconWmo468022                           = 0xf017,

    /// Identifier: "wi-wmo4680-23"
    IFWeatherIconWmo468023                           = 0xf019,

    /// Identifier: "wi-wmo4680-24"
    IFWeatherIconWmo468024                           = 0xf01b,

    /// Identifier: "wi-wmo4680-25"
    IFWeatherIconWmo468025                           = 0xf015,

    /// Identifier: "wi-wmo4680-26"
    IFWeatherIconWmo468026                           = 0xf01e,

    /// Identifier: "wi-wmo4680-27"
    IFWeatherIconWmo468027                           = 0xf063,

    /// Identifier: "wi-wmo4680-28"
    IFWeatherIconWmo468028                           = 0xf063,

    /// Identifier: "wi-wmo4680-29"
    IFWeatherIconWmo468029                           = 0xf063,

    /// Identifier: "wi-wmo4680-30"
    IFWeatherIconWmo468030                           = 0xf014,

    /// Identifier: "wi-wmo4680-31"
    IFWeatherIconWmo468031                           = 0xf014,

    /// Identifier: "wi-wmo4680-32"
    IFWeatherIconWmo468032                           = 0xf014,

    /// Identifier: "wi-wmo4680-33"
    IFWeatherIconWmo468033                           = 0xf014,

    /// Identifier: "wi-wmo4680-34"
    IFWeatherIconWmo468034                           = 0xf014,

    /// Identifier: "wi-wmo4680-35"
    IFWeatherIconWmo468035                           = 0xf014,

    /// Identifier: "wi-wmo4680-40"
    IFWeatherIconWmo468040                           = 0xf017,

    /// Identifier: "wi-wmo4680-41"
    IFWeatherIconWmo468041                           = 0xf01c,

    /// Identifier: "wi-wmo4680-42"
    IFWeatherIconWmo468042                           = 0xf019,

    /// Identifier: "wi-wmo4680-43"
    IFWeatherIconWmo468043                           = 0xf01c,

    /// Identifier: "wi-wmo4680-44"
    IFWeatherIconWmo468044                           = 0xf019,

    /// Identifier: "wi-wmo4680-45"
    IFWeatherIconWmo468045                           = 0xf015,

    /// Identifier: "wi-wmo4680-46"
    IFWeatherIconWmo468046                           = 0xf015,

    /// Identifier: "wi-wmo4680-47"
    IFWeatherIconWmo468047                           = 0xf01b,

    /// Identifier: "wi-wmo4680-48"
    IFWeatherIconWmo468048                           = 0xf01b,

    /// Identifier: "wi-wmo4680-50"
    IFWeatherIconWmo468050                           = 0xf01c,

    /// Identifier: "wi-wmo4680-51"
    IFWeatherIconWmo468051                           = 0xf01c,

    /// Identifier: "wi-wmo4680-52"
    IFWeatherIconWmo468052                           = 0xf019,

    /// Identifier: "wi-wmo4680-53"
    IFWeatherIconWmo468053                           = 0xf019,

    /// Identifier: "wi-wmo4680-54"
    IFWeatherIconWmo468054                           = 0xf076,

    /// Identifier: "wi-wmo4680-55"
    IFWeatherIconWmo468055                           = 0xf076,

    /// Identifier: "wi-wmo4680-56"
    IFWeatherIconWmo468056                           = 0xf076,

    /// Identifier: "wi-wmo4680-57"
    IFWeatherIconWmo468057                           = 0xf01c,

    /// Identifier: "wi-wmo4680-58"
    IFWeatherIconWmo468058                           = 0xf019,

    /// Identifier: "wi-wmo4680-60"
    IFWeatherIconWmo468060                           = 0xf01c,

    /// Identifier: "wi-wmo4680-61"
    IFWeatherIconWmo468061                           = 0xf01c,

    /// Identifier: "wi-wmo4680-62"
    IFWeatherIconWmo468062                           = 0xf019,

    /// Identifier: "wi-wmo4680-63"
    IFWeatherIconWmo468063                           = 0xf019,

    /// Identifier: "wi-wmo4680-64"
    IFWeatherIconWmo468064                           = 0xf015,

    /// Identifier: "wi-wmo4680-65"
    IFWeatherIconWmo468065                           = 0xf015,

    /// Identifier: "wi-wmo4680-66"
    IFWeatherIconWmo468066                           = 0xf015,

    /// Identifier: "wi-wmo4680-67"
    IFWeatherIconWmo468067                           = 0xf017,

    /// Identifier: "wi-wmo4680-68"
    IFWeatherIconWmo468068                           = 0xf017,

    /// Identifier: "wi-wmo4680-70"
    IFWeatherIconWmo468070                           = 0xf01b,

    /// Identifier: "wi-wmo4680-71"
    IFWeatherIconWmo468071                           = 0xf01b,

    /// Identifier: "wi-wmo4680-72"
    IFWeatherIconWmo468072                           = 0xf01b,

    /// Identifier: "wi-wmo4680-73"
    IFWeatherIconWmo468073                           = 0xf01b,

    /// Identifier: "wi-wmo4680-74"
    IFWeatherIconWmo468074                           = 0xf076,

    /// Identifier: "wi-wmo4680-75"
    IFWeatherIconWmo468075                           = 0xf076,

    /// Identifier: "wi-wmo4680-76"
    IFWeatherIconWmo468076                           = 0xf076,

    /// Identifier: "wi-wmo4680-77"
    IFWeatherIconWmo468077                           = 0xf01b,

    /// Identifier: "wi-wmo4680-78"
    IFWeatherIconWmo468078                           = 0xf076,

    /// Identifier: "wi-wmo4680-80"
    IFWeatherIconWmo468080                           = 0xf019,

    /// Identifier: "wi-wmo4680-81"
    IFWeatherIconWmo468081                           = 0xf01c,

    /// Identifier: "wi-wmo4680-82"
    IFWeatherIconWmo468082                           = 0xf019,

    /// Identifier: "wi-wmo4680-83"
    IFWeatherIconWmo468083                           = 0xf019,

    /// Identifier: "wi-wmo4680-84"
    IFWeatherIconWmo468084                           = 0xf01d,

    /// Identifier: "wi-wmo4680-85"
    IFWeatherIconWmo468085                           = 0xf017,

    /// Identifier: "wi-wmo4680-86"
    IFWeatherIconWmo468086                           = 0xf017,

    /// Identifier: "wi-wmo4680-87"
    IFWeatherIconWmo468087                           = 0xf017,

    /// Identifier: "wi-wmo4680-89"
    IFWeatherIconWmo468089                           = 0xf015,

    /// Identifier: "wi-wmo4680-90"
    IFWeatherIconWmo468090                           = 0xf016,

    /// Identifier: "wi-wmo4680-91"
    IFWeatherIconWmo468091                           = 0xf01d,

    /// Identifier: "wi-wmo4680-92"
    IFWeatherIconWmo468092                           = 0xf01e,

    /// Identifier: "wi-wmo4680-93"
    IFWeatherIconWmo468093                           = 0xf01e,

    /// Identifier: "wi-wmo4680-94"
    IFWeatherIconWmo468094                           = 0xf016,

    /// Identifier: "wi-wmo4680-95"
    IFWeatherIconWmo468095                           = 0xf01e,

    /// Identifier: "wi-wmo4680-96"
    IFWeatherIconWmo468096                           = 0xf01e,

    /// Identifier: "wi-wmo4680-99"
    IFWeatherIconWmo468099                           = 0xf056,

    /// Identifier: "wi-owm-200"
    IFWeatherIconOwm200                              = 0xf01e,

    /// Identifier: "wi-owm-201"
    IFWeatherIconOwm201                              = 0xf01e,

    /// Identifier: "wi-owm-202"
    IFWeatherIconOwm202                              = 0xf01e,

    /// Identifier: "wi-owm-210"
    IFWeatherIconOwm210                              = 0xf016,

    /// Identifier: "wi-owm-211"
    IFWeatherIconOwm211                              = 0xf016,

    /// Identifier: "wi-owm-212"
    IFWeatherIconOwm212                              = 0xf016,

    /// Identifier: "wi-owm-221"
    IFWeatherIconOwm221                              = 0xf016,

    /// Identifier: "wi-owm-230"
    IFWeatherIconOwm230                              = 0xf01e,

    /// Identifier: "wi-owm-231"
    IFWeatherIconOwm231                              = 0xf01e,

    /// Identifier: "wi-owm-232"
    IFWeatherIconOwm232                              = 0xf01e,

    /// Identifier: "wi-owm-300"
    IFWeatherIconOwm300                              = 0xf01c,

    /// Identifier: "wi-owm-301"
    IFWeatherIconOwm301                              = 0xf01c,

    /// Identifier: "wi-owm-302"
    IFWeatherIconOwm302                              = 0xf019,

    /// Identifier: "wi-owm-310"
    IFWeatherIconOwm310                              = 0xf017,

    /// Identifier: "wi-owm-311"
    IFWeatherIconOwm311                              = 0xf019,

    /// Identifier: "wi-owm-312"
    IFWeatherIconOwm312                              = 0xf019,

    /// Identifier: "wi-owm-313"
    IFWeatherIconOwm313                              = 0xf01a,

    /// Identifier: "wi-owm-314"
    IFWeatherIconOwm314                              = 0xf019,

    /// Identifier: "wi-owm-321"
    IFWeatherIconOwm321                              = 0xf01c,

    /// Identifier: "wi-owm-500"
    IFWeatherIconOwm500                              = 0xf01c,

    /// Identifier: "wi-owm-501"
    IFWeatherIconOwm501                              = 0xf019,

    /// Identifier: "wi-owm-502"
    IFWeatherIconOwm502                              = 0xf019,

    /// Identifier: "wi-owm-503"
    IFWeatherIconOwm503                              = 0xf019,

    /// Identifier: "wi-owm-504"
    IFWeatherIconOwm504                              = 0xf019,

    /// Identifier: "wi-owm-511"
    IFWeatherIconOwm511                              = 0xf017,

    /// Identifier: "wi-owm-520"
    IFWeatherIconOwm520                              = 0xf01a,

    /// Identifier: "wi-owm-521"
    IFWeatherIconOwm521                              = 0xf01a,

    /// Identifier: "wi-owm-522"
    IFWeatherIconOwm522                              = 0xf01a,

    /// Identifier: "wi-owm-531"
    IFWeatherIconOwm531                              = 0xf01d,

    /// Identifier: "wi-owm-600"
    IFWeatherIconOwm600                              = 0xf01b,

    /// Identifier: "wi-owm-601"
    IFWeatherIconOwm601                              = 0xf01b,

    /// Identifier: "wi-owm-602"
    IFWeatherIconOwm602                              = 0xf0b5,

    /// Identifier: "wi-owm-611"
    IFWeatherIconOwm611                              = 0xf017,

    /// Identifier: "wi-owm-612"
    IFWeatherIconOwm612                              = 0xf017,

    /// Identifier: "wi-owm-615"
    IFWeatherIconOwm615                              = 0xf017,

    /// Identifier: "wi-owm-616"
    IFWeatherIconOwm616                              = 0xf017,

    /// Identifier: "wi-owm-620"
    IFWeatherIconOwm620                              = 0xf017,

    /// Identifier: "wi-owm-621"
    IFWeatherIconOwm621                              = 0xf01b,

    /// Identifier: "wi-owm-622"
    IFWeatherIconOwm622                              = 0xf01b,

    /// Identifier: "wi-owm-701"
    IFWeatherIconOwm701                              = 0xf01a,

    /// Identifier: "wi-owm-711"
    IFWeatherIconOwm711                              = 0xf062,

    /// Identifier: "wi-owm-721"
    IFWeatherIconOwm721                              = 0xf0b6,

    /// Identifier: "wi-owm-731"
    IFWeatherIconOwm731                              = 0xf063,

    /// Identifier: "wi-owm-741"
    IFWeatherIconOwm741                              = 0xf014,

    /// Identifier: "wi-owm-761"
    IFWeatherIconOwm761                              = 0xf063,

    /// Identifier: "wi-owm-762"
    IFWeatherIconOwm762                              = 0xf063,

    /// Identifier: "wi-owm-771"
    IFWeatherIconOwm771                              = 0xf011,

    /// Identifier: "wi-owm-781"
    IFWeatherIconOwm781                              = 0xf056,

    /// Identifier: "wi-owm-800"
    IFWeatherIconOwm800                              = 0xf00d,

    /// Identifier: "wi-owm-801"
    IFWeatherIconOwm801                              = 0xf011,

    /// Identifier: "wi-owm-802"
    IFWeatherIconOwm802                              = 0xf011,

    /// Identifier: "wi-owm-803"
    IFWeatherIconOwm803                              = 0xf012,

    /// Identifier: "wi-owm-804"
    IFWeatherIconOwm804                              = 0xf013,

    /// Identifier: "wi-owm-900"
    IFWeatherIconOwm900                              = 0xf056,

    /// Identifier: "wi-owm-901"
    IFWeatherIconOwm901                              = 0xf01d,

    /// Identifier: "wi-owm-902"
    IFWeatherIconOwm902                              = 0xf073,

    /// Identifier: "wi-owm-903"
    IFWeatherIconOwm903                              = 0xf076,

    /// Identifier: "wi-owm-904"
    IFWeatherIconOwm904                              = 0xf072,

    /// Identifier: "wi-owm-905"
    IFWeatherIconOwm905                              = 0xf021,

    /// Identifier: "wi-owm-906"
    IFWeatherIconOwm906                              = 0xf015,

    /// Identifier: "wi-owm-957"
    IFWeatherIconOwm957                              = 0xf050,

    /// Identifier: "wi-owm-day-200"
    IFWeatherIconOwmDay200                           = 0xf010,

    /// Identifier: "wi-owm-day-201"
    IFWeatherIconOwmDay201                           = 0xf010,

    /// Identifier: "wi-owm-day-202"
    IFWeatherIconOwmDay202                           = 0xf010,

    /// Identifier: "wi-owm-day-210"
    IFWeatherIconOwmDay210                           = 0xf005,

    /// Identifier: "wi-owm-day-211"
    IFWeatherIconOwmDay211                           = 0xf005,

    /// Identifier: "wi-owm-day-212"
    IFWeatherIconOwmDay212                           = 0xf005,

    /// Identifier: "wi-owm-day-221"
    IFWeatherIconOwmDay221                           = 0xf005,

    /// Identifier: "wi-owm-day-230"
    IFWeatherIconOwmDay230                           = 0xf010,

    /// Identifier: "wi-owm-day-231"
    IFWeatherIconOwmDay231                           = 0xf010,

    /// Identifier: "wi-owm-day-232"
    IFWeatherIconOwmDay232                           = 0xf010,

    /// Identifier: "wi-owm-day-300"
    IFWeatherIconOwmDay300                           = 0xf00b,

    /// Identifier: "wi-owm-day-301"
    IFWeatherIconOwmDay301                           = 0xf00b,

    /// Identifier: "wi-owm-day-302"
    IFWeatherIconOwmDay302                           = 0xf008,

    /// Identifier: "wi-owm-day-310"
    IFWeatherIconOwmDay310                           = 0xf008,

    /// Identifier: "wi-owm-day-311"
    IFWeatherIconOwmDay311                           = 0xf008,

    /// Identifier: "wi-owm-day-312"
    IFWeatherIconOwmDay312                           = 0xf008,

    /// Identifier: "wi-owm-day-313"
    IFWeatherIconOwmDay313                           = 0xf008,

    /// Identifier: "wi-owm-day-314"
    IFWeatherIconOwmDay314                           = 0xf008,

    /// Identifier: "wi-owm-day-321"
    IFWeatherIconOwmDay321                           = 0xf00b,

    /// Identifier: "wi-owm-day-500"
    IFWeatherIconOwmDay500                           = 0xf00b,

    /// Identifier: "wi-owm-day-501"
    IFWeatherIconOwmDay501                           = 0xf008,

    /// Identifier: "wi-owm-day-502"
    IFWeatherIconOwmDay502                           = 0xf008,

    /// Identifier: "wi-owm-day-503"
    IFWeatherIconOwmDay503                           = 0xf008,

    /// Identifier: "wi-owm-day-504"
    IFWeatherIconOwmDay504                           = 0xf008,

    /// Identifier: "wi-owm-day-511"
    IFWeatherIconOwmDay511                           = 0xf006,

    /// Identifier: "wi-owm-day-520"
    IFWeatherIconOwmDay520                           = 0xf009,

    /// Identifier: "wi-owm-day-521"
    IFWeatherIconOwmDay521                           = 0xf009,

    /// Identifier: "wi-owm-day-522"
    IFWeatherIconOwmDay522                           = 0xf009,

    /// Identifier: "wi-owm-day-531"
    IFWeatherIconOwmDay531                           = 0xf00e,

    /// Identifier: "wi-owm-day-600"
    IFWeatherIconOwmDay600                           = 0xf00a,

    /// Identifier: "wi-owm-day-601"
    IFWeatherIconOwmDay601                           = 0xf0b2,

    /// Identifier: "wi-owm-day-602"
    IFWeatherIconOwmDay602                           = 0xf00a,

    /// Identifier: "wi-owm-day-611"
    IFWeatherIconOwmDay611                           = 0xf006,

    /// Identifier: "wi-owm-day-612"
    IFWeatherIconOwmDay612                           = 0xf006,

    /// Identifier: "wi-owm-day-615"
    IFWeatherIconOwmDay615                           = 0xf006,

    /// Identifier: "wi-owm-day-616"
    IFWeatherIconOwmDay616                           = 0xf006,

    /// Identifier: "wi-owm-day-620"
    IFWeatherIconOwmDay620                           = 0xf006,

    /// Identifier: "wi-owm-day-621"
    IFWeatherIconOwmDay621                           = 0xf00a,

    /// Identifier: "wi-owm-day-622"
    IFWeatherIconOwmDay622                           = 0xf00a,

    /// Identifier: "wi-owm-day-701"
    IFWeatherIconOwmDay701                           = 0xf009,

    /// Identifier: "wi-owm-day-711"
    IFWeatherIconOwmDay711                           = 0xf062,

    /// Identifier: "wi-owm-day-721"
    IFWeatherIconOwmDay721                           = 0xf0b6,

    /// Identifier: "wi-owm-day-731"
    IFWeatherIconOwmDay731                           = 0xf063,

    /// Identifier: "wi-owm-day-741"
    IFWeatherIconOwmDay741                           = 0xf003,

    /// Identifier: "wi-owm-day-761"
    IFWeatherIconOwmDay761                           = 0xf063,

    /// Identifier: "wi-owm-day-762"
    IFWeatherIconOwmDay762                           = 0xf063,

    /// Identifier: "wi-owm-day-781"
    IFWeatherIconOwmDay781                           = 0xf056,

    /// Identifier: "wi-owm-day-800"
    IFWeatherIconOwmDay800                           = 0xf00d,

    /// Identifier: "wi-owm-day-801"
    IFWeatherIconOwmDay801                           = 0xf000,

    /// Identifier: "wi-owm-day-802"
    IFWeatherIconOwmDay802                           = 0xf000,

    /// Identifier: "wi-owm-day-803"
    IFWeatherIconOwmDay803                           = 0xf000,

    /// Identifier: "wi-owm-day-804"
    IFWeatherIconOwmDay804                           = 0xf00c,

    /// Identifier: "wi-owm-day-900"
    IFWeatherIconOwmDay900                           = 0xf056,

    /// Identifier: "wi-owm-day-902"
    IFWeatherIconOwmDay902                           = 0xf073,

    /// Identifier: "wi-owm-day-903"
    IFWeatherIconOwmDay903                           = 0xf076,

    /// Identifier: "wi-owm-day-904"
    IFWeatherIconOwmDay904                           = 0xf072,

    /// Identifier: "wi-owm-day-906"
    IFWeatherIconOwmDay906                           = 0xf004,

    /// Identifier: "wi-owm-day-957"
    IFWeatherIconOwmDay957                           = 0xf050,

    /// Identifier: "wi-owm-night-200"
    IFWeatherIconOwmNight200                         = 0xf02d,

    /// Identifier: "wi-owm-night-201"
    IFWeatherIconOwmNight201                         = 0xf02d,

    /// Identifier: "wi-owm-night-202"
    IFWeatherIconOwmNight202                         = 0xf02d,

    /// Identifier: "wi-owm-night-210"
    IFWeatherIconOwmNight210                         = 0xf025,

    /// Identifier: "wi-owm-night-211"
    IFWeatherIconOwmNight211                         = 0xf025,

    /// Identifier: "wi-owm-night-212"
    IFWeatherIconOwmNight212                         = 0xf025,

    /// Identifier: "wi-owm-night-221"
    IFWeatherIconOwmNight221                         = 0xf025,

    /// Identifier: "wi-owm-night-230"
    IFWeatherIconOwmNight230                         = 0xf02d,

    /// Identifier: "wi-owm-night-231"
    IFWeatherIconOwmNight231                         = 0xf02d,

    /// Identifier: "wi-owm-night-232"
    IFWeatherIconOwmNight232                         = 0xf02d,

    /// Identifier: "wi-owm-night-300"
    IFWeatherIconOwmNight300                         = 0xf02b,

    /// Identifier: "wi-owm-night-301"
    IFWeatherIconOwmNight301                         = 0xf02b,

    /// Identifier: "wi-owm-night-302"
    IFWeatherIconOwmNight302                         = 0xf028,

    /// Identifier: "wi-owm-night-310"
    IFWeatherIconOwmNight310                         = 0xf028,

    /// Identifier: "wi-owm-night-311"
    IFWeatherIconOwmNight311                         = 0xf028,

    /// Identifier: "wi-owm-night-312"
    IFWeatherIconOwmNight312                         = 0xf028,

    /// Identifier: "wi-owm-night-313"
    IFWeatherIconOwmNight313                         = 0xf028,

    /// Identifier: "wi-owm-night-314"
    IFWeatherIconOwmNight314                         = 0xf028,

    /// Identifier: "wi-owm-night-321"
    IFWeatherIconOwmNight321                         = 0xf02b,

    /// Identifier: "wi-owm-night-500"
    IFWeatherIconOwmNight500                         = 0xf02b,

    /// Identifier: "wi-owm-night-501"
    IFWeatherIconOwmNight501                         = 0xf028,

    /// Identifier: "wi-owm-night-502"
    IFWeatherIconOwmNight502                         = 0xf028,

    /// Identifier: "wi-owm-night-503"
    IFWeatherIconOwmNight503                         = 0xf028,

    /// Identifier: "wi-owm-night-504"
    IFWeatherIconOwmNight504                         = 0xf028,

    /// Identifier: "wi-owm-night-511"
    IFWeatherIconOwmNight511                         = 0xf026,

    /// Identifier: "wi-owm-night-520"
    IFWeatherIconOwmNight520                         = 0xf029,

    /// Identifier: "wi-owm-night-521"
    IFWeatherIconOwmNight521                         = 0xf029,

    /// Identifier: "wi-owm-night-522"
    IFWeatherIconOwmNight522                         = 0xf029,

    /// Identifier: "wi-owm-night-531"
    IFWeatherIconOwmNight531                         = 0xf02c,

    /// Identifier: "wi-owm-night-600"
    IFWeatherIconOwmNight600                         = 0xf02a,

    /// Identifier: "wi-owm-night-601"
    IFWeatherIconOwmNight601                         = 0xf0b4,

    /// Identifier: "wi-owm-night-602"
    IFWeatherIconOwmNight602                         = 0xf02a,

    /// Identifier: "wi-owm-night-611"
    IFWeatherIconOwmNight611                         = 0xf026,

    /// Identifier: "wi-owm-night-612"
    IFWeatherIconOwmNight612                         = 0xf026,

    /// Identifier: "wi-owm-night-615"
    IFWeatherIconOwmNight615                         = 0xf026,

    /// Identifier: "wi-owm-night-616"
    IFWeatherIconOwmNight616                         = 0xf026,

    /// Identifier: "wi-owm-night-620"
    IFWeatherIconOwmNight620                         = 0xf026,

    /// Identifier: "wi-owm-night-621"
    IFWeatherIconOwmNight621                         = 0xf02a,

    /// Identifier: "wi-owm-night-622"
    IFWeatherIconOwmNight622                         = 0xf02a,

    /// Identifier: "wi-owm-night-701"
    IFWeatherIconOwmNight701                         = 0xf029,

    /// Identifier: "wi-owm-night-711"
    IFWeatherIconOwmNight711                         = 0xf062,

    /// Identifier: "wi-owm-night-721"
    IFWeatherIconOwmNight721                         = 0xf0b6,

    /// Identifier: "wi-owm-night-731"
    IFWeatherIconOwmNight731                         = 0xf063,

    /// Identifier: "wi-owm-night-741"
    IFWeatherIconOwmNight741                         = 0xf04a,

    /// Identifier: "wi-owm-night-761"
    IFWeatherIconOwmNight761                         = 0xf063,

    /// Identifier: "wi-owm-night-762"
    IFWeatherIconOwmNight762                         = 0xf063,

    /// Identifier: "wi-owm-night-781"
    IFWeatherIconOwmNight781                         = 0xf056,

    /// Identifier: "wi-owm-night-800"
    IFWeatherIconOwmNight800                         = 0xf02e,

    /// Identifier: "wi-owm-night-801"
    IFWeatherIconOwmNight801                         = 0xf022,

    /// Identifier: "wi-owm-night-802"
    IFWeatherIconOwmNight802                         = 0xf022,

    /// Identifier: "wi-owm-night-803"
    IFWeatherIconOwmNight803                         = 0xf022,

    /// Identifier: "wi-owm-night-804"
    IFWeatherIconOwmNight804                         = 0xf086,

    /// Identifier: "wi-owm-night-900"
    IFWeatherIconOwmNight900                         = 0xf056,

    /// Identifier: "wi-owm-night-902"
    IFWeatherIconOwmNight902                         = 0xf073,

    /// Identifier: "wi-owm-night-903"
    IFWeatherIconOwmNight903                         = 0xf076,

    /// Identifier: "wi-owm-night-904"
    IFWeatherIconOwmNight904                         = 0xf072,

    /// Identifier: "wi-owm-night-906"
    IFWeatherIconOwmNight906                         = 0xf024,

    /// Identifier: "wi-owm-night-957"
    IFWeatherIconOwmNight957                         = 0xf050,

    /// Identifier: "wi-wu-chanceflurries"
    IFWeatherIconWuChanceflurries                    = 0xf064,

    /// Identifier: "wi-wu-chancerain"
    IFWeatherIconWuChancerain                        = 0xf019,

    /// Identifier: "wi-wu-chancesleat"
    IFWeatherIconWuChancesleat                       = 0xf0b5,

    /// Identifier: "wi-wu-chancesnow"
    IFWeatherIconWuChancesnow                        = 0xf01b,

    /// Identifier: "wi-wu-chancetstorms"
    IFWeatherIconWuChancetstorms                     = 0xf01e,

    /// Identifier: "wi-wu-clear"
    IFWeatherIconWuClear                             = 0xf00d,

    /// Identifier: "wi-wu-cloudy"
    IFWeatherIconWuCloudy                            = 0xf002,

    /// Identifier: "wi-wu-flurries"
    IFWeatherIconWuFlurries                          = 0xf064,

    /// Identifier: "wi-wu-hazy"
    IFWeatherIconWuHazy                              = 0xf0b6,

    /// Identifier: "wi-wu-mostlycloudy"
    IFWeatherIconWuMostlycloudy                      = 0xf002,

    /// Identifier: "wi-wu-mostlysunny"
    IFWeatherIconWuMostlysunny                       = 0xf00d,

    /// Identifier: "wi-wu-partlycloudy"
    IFWeatherIconWuPartlycloudy                      = 0xf002,

    /// Identifier: "wi-wu-partlysunny"
    IFWeatherIconWuPartlysunny                       = 0xf00d,

    /// Identifier: "wi-wu-rain"
    IFWeatherIconWuRain                              = 0xf01a,

    /// Identifier: "wi-wu-sleat"
    IFWeatherIconWuSleat                             = 0xf0b5,

    /// Identifier: "wi-wu-snow"
    IFWeatherIconWuSnow                              = 0xf01b,

    /// Identifier: "wi-wu-sunny"
    IFWeatherIconWuSunny                             = 0xf00d,

    /// Identifier: "wi-wu-tstorms"
    IFWeatherIconWuTstorms                           = 0xf01e,

    /// Identifier: "wi-wu-unknown"
    IFWeatherIconWuUnknown                           = 0xf00d,

};

/**
 * WeatherIcons v2.0.10 http://erikflowers.github.io/weather-icons
 */
@interface IFWeatherIcons : IFIcon
@end
