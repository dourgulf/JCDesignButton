#import "IFIcon.h"

/**
 * MapIcons icon types.
 */
typedef NS_ENUM(IFIconType, IFMapIconsType) {

    /// Identifier: "map-icon-abseiling"
    IFMapIconAbseiling                           = 0xe800,

    /// Identifier: "map-icon-accounting"
    IFMapIconAccounting                          = 0xe801,

    /// Identifier: "map-icon-airport"
    IFMapIconAirport                             = 0xe802,

    /// Identifier: "map-icon-amusement-park"
    IFMapIconAmusementPark                       = 0xe803,

    /// Identifier: "map-icon-aquarium"
    IFMapIconAquarium                            = 0xe804,

    /// Identifier: "map-icon-archery"
    IFMapIconArchery                             = 0xe805,

    /// Identifier: "map-icon-art-gallery"
    IFMapIconArtGallery                          = 0xe806,

    /// Identifier: "map-icon-assistive-listening-system"
    IFMapIconAssistiveListeningSystem            = 0xe807,

    /// Identifier: "map-icon-atm"
    IFMapIconAtm                                 = 0xe808,

    /// Identifier: "map-icon-audio-description"
    IFMapIconAudioDescription                    = 0xe809,

    /// Identifier: "map-icon-bakery"
    IFMapIconBakery                              = 0xe80a,

    /// Identifier: "map-icon-bank"
    IFMapIconBank                                = 0xe80b,

    /// Identifier: "map-icon-bar"
    IFMapIconBar                                 = 0xe80c,

    /// Identifier: "map-icon-baseball"
    IFMapIconBaseball                            = 0xe80d,

    /// Identifier: "map-icon-beauty-salon"
    IFMapIconBeautySalon                         = 0xe80e,

    /// Identifier: "map-icon-bicycle-store"
    IFMapIconBicycleStore                        = 0xe80f,

    /// Identifier: "map-icon-bicycling"
    IFMapIconBicycling                           = 0xe810,

    /// Identifier: "map-icon-boat-ramp"
    IFMapIconBoatRamp                            = 0xe811,

    /// Identifier: "map-icon-boat-tour"
    IFMapIconBoatTour                            = 0xe812,

    /// Identifier: "map-icon-boating"
    IFMapIconBoating                             = 0xe813,

    /// Identifier: "map-icon-book-store"
    IFMapIconBookStore                           = 0xe814,

    /// Identifier: "map-icon-bowling-alley"
    IFMapIconBowlingAlley                        = 0xe815,

    /// Identifier: "map-icon-braille"
    IFMapIconBraille                             = 0xe816,

    /// Identifier: "map-icon-bus-station"
    IFMapIconBusStation                          = 0xe817,

    /// Identifier: "map-icon-cafe"
    IFMapIconCafe                                = 0xe818,

    /// Identifier: "map-icon-campground"
    IFMapIconCampground                          = 0xe819,

    /// Identifier: "map-icon-canoe"
    IFMapIconCanoe                               = 0xe81a,

    /// Identifier: "map-icon-car-dealer"
    IFMapIconCarDealer                           = 0xe81b,

    /// Identifier: "map-icon-car-rental"
    IFMapIconCarRental                           = 0xe81c,

    /// Identifier: "map-icon-car-repair"
    IFMapIconCarRepair                           = 0xe81d,

    /// Identifier: "map-icon-car-wash"
    IFMapIconCarWash                             = 0xe81e,

    /// Identifier: "map-icon-casino"
    IFMapIconCasino                              = 0xe81f,

    /// Identifier: "map-icon-cemetery"
    IFMapIconCemetery                            = 0xe820,

    /// Identifier: "map-icon-chairlift"
    IFMapIconChairlift                           = 0xe821,

    /// Identifier: "map-icon-church"
    IFMapIconChurch                              = 0xe822,

    /// Identifier: "map-icon-circle"
    IFMapIconCircle                              = 0xe823,

    /// Identifier: "map-icon-city-hall"
    IFMapIconCityHall                            = 0xe824,

    /// Identifier: "map-icon-climbing"
    IFMapIconClimbing                            = 0xe825,

    /// Identifier: "map-icon-closed-captioning"
    IFMapIconClosedCaptioning                    = 0xe826,

    /// Identifier: "map-icon-clothing-store"
    IFMapIconClothingStore                       = 0xe827,

    /// Identifier: "map-icon-compass"
    IFMapIconCompass                             = 0xe828,

    /// Identifier: "map-icon-convenience-store"
    IFMapIconConvenienceStore                    = 0xe829,

    /// Identifier: "map-icon-courthouse"
    IFMapIconCourthouse                          = 0xe82a,

    /// Identifier: "map-icon-cross-country-skiing"
    IFMapIconCrossCountrySkiing                  = 0xe82b,

    /// Identifier: "map-icon-crosshairs"
    IFMapIconCrosshairs                          = 0xe82c,

    /// Identifier: "map-icon-dentist"
    IFMapIconDentist                             = 0xe82d,

    /// Identifier: "map-icon-department-store"
    IFMapIconDepartmentStore                     = 0xe82e,

    /// Identifier: "map-icon-diving"
    IFMapIconDiving                              = 0xe82f,

    /// Identifier: "map-icon-doctor"
    IFMapIconDoctor                              = 0xe830,

    /// Identifier: "map-icon-electrician"
    IFMapIconElectrician                         = 0xe831,

    /// Identifier: "map-icon-electronics-store"
    IFMapIconElectronicsStore                    = 0xe832,

    /// Identifier: "map-icon-embassy"
    IFMapIconEmbassy                             = 0xe833,

    /// Identifier: "map-icon-expand"
    IFMapIconExpand                              = 0xe834,

    /// Identifier: "map-icon-female"
    IFMapIconFemale                              = 0xe835,

    /// Identifier: "map-icon-finance"
    IFMapIconFinance                             = 0xe836,

    /// Identifier: "map-icon-fire-station"
    IFMapIconFireStation                         = 0xe837,

    /// Identifier: "map-icon-fish-cleaning"
    IFMapIconFishCleaning                        = 0xe838,

    /// Identifier: "map-icon-fishing-pier"
    IFMapIconFishingPier                         = 0xe839,

    /// Identifier: "map-icon-fishing"
    IFMapIconFishing                             = 0xe83a,

    /// Identifier: "map-icon-florist"
    IFMapIconFlorist                             = 0xe83b,

    /// Identifier: "map-icon-food"
    IFMapIconFood                                = 0xe83c,

    /// Identifier: "map-icon-fullscreen"
    IFMapIconFullscreen                          = 0xe83d,

    /// Identifier: "map-icon-funeral-home"
    IFMapIconFuneralHome                         = 0xe83e,

    /// Identifier: "map-icon-furniture-store"
    IFMapIconFurnitureStore                      = 0xe83f,

    /// Identifier: "map-icon-gas-station"
    IFMapIconGasStation                          = 0xe840,

    /// Identifier: "map-icon-general-contractor"
    IFMapIconGeneralContractor                   = 0xe841,

    /// Identifier: "map-icon-golf"
    IFMapIconGolf                                = 0xe842,

    /// Identifier: "map-icon-grocery-or-supermarket"
    IFMapIconGroceryOrSupermarket                = 0xe843,

    /// Identifier: "map-icon-gym"
    IFMapIconGym                                 = 0xe844,

    /// Identifier: "map-icon-hair-care"
    IFMapIconHairCare                            = 0xe845,

    /// Identifier: "map-icon-hang-gliding"
    IFMapIconHangGliding                         = 0xe846,

    /// Identifier: "map-icon-hardware-store"
    IFMapIconHardwareStore                       = 0xe847,

    /// Identifier: "map-icon-health"
    IFMapIconHealth                              = 0xe848,

    /// Identifier: "map-icon-hindu-temple"
    IFMapIconHinduTemple                         = 0xe849,

    /// Identifier: "map-icon-horse-riding"
    IFMapIconHorseRiding                         = 0xe84a,

    /// Identifier: "map-icon-hospital"
    IFMapIconHospital                            = 0xe84b,

    /// Identifier: "map-icon-ice-fishing"
    IFMapIconIceFishing                          = 0xe84c,

    /// Identifier: "map-icon-ice-skating"
    IFMapIconIceSkating                          = 0xe84d,

    /// Identifier: "map-icon-inline-skating"
    IFMapIconInlineSkating                       = 0xe84e,

    /// Identifier: "map-icon-insurance-agency"
    IFMapIconInsuranceAgency                     = 0xe84f,

    /// Identifier: "map-icon-jet-skiing"
    IFMapIconJetSkiing                           = 0xe850,

    /// Identifier: "map-icon-jewelry-store"
    IFMapIconJewelryStore                        = 0xe851,

    /// Identifier: "map-icon-kayaking"
    IFMapIconKayaking                            = 0xe852,

    /// Identifier: "map-icon-laundry"
    IFMapIconLaundry                             = 0xe853,

    /// Identifier: "map-icon-lawyer"
    IFMapIconLawyer                              = 0xe854,

    /// Identifier: "map-icon-library"
    IFMapIconLibrary                             = 0xe855,

    /// Identifier: "map-icon-liquor-store"
    IFMapIconLiquorStore                         = 0xe856,

    /// Identifier: "map-icon-local-government"
    IFMapIconLocalGovernment                     = 0xe857,

    /// Identifier: "map-icon-location-arrow"
    IFMapIconLocationArrow                       = 0xe858,

    /// Identifier: "map-icon-locksmith"
    IFMapIconLocksmith                           = 0xe859,

    /// Identifier: "map-icon-lodging"
    IFMapIconLodging                             = 0xe85a,

    /// Identifier: "map-icon-low-vision-access"
    IFMapIconLowVisionAccess                     = 0xe85b,

    /// Identifier: "map-icon-male"
    IFMapIconMale                                = 0xe85c,

    /// Identifier: "map-icon-map-pin"
    IFMapIconMapPin                              = 0xe85d,

    /// Identifier: "map-icon-marina"
    IFMapIconMarina                              = 0xe85e,

    /// Identifier: "map-icon-mosque"
    IFMapIconMosque                              = 0xe85f,

    /// Identifier: "map-icon-motobike-trail"
    IFMapIconMotobikeTrail                       = 0xe860,

    /// Identifier: "map-icon-movie-rental"
    IFMapIconMovieRental                         = 0xe861,

    /// Identifier: "map-icon-movie-theater"
    IFMapIconMovieTheater                        = 0xe862,

    /// Identifier: "map-icon-moving-company"
    IFMapIconMovingCompany                       = 0xe863,

    /// Identifier: "map-icon-museum"
    IFMapIconMuseum                              = 0xe864,

    /// Identifier: "map-icon-natural-feature"
    IFMapIconNaturalFeature                      = 0xe865,

    /// Identifier: "map-icon-night-club"
    IFMapIconNightClub                           = 0xe866,

    /// Identifier: "map-icon-open-captioning"
    IFMapIconOpenCaptioning                      = 0xe867,

    /// Identifier: "map-icon-painter"
    IFMapIconPainter                             = 0xe868,

    /// Identifier: "map-icon-park"
    IFMapIconPark                                = 0xe869,

    /// Identifier: "map-icon-parking"
    IFMapIconParking                             = 0xe86a,

    /// Identifier: "map-icon-pet-store"
    IFMapIconPetStore                            = 0xe86b,

    /// Identifier: "map-icon-pharmacy"
    IFMapIconPharmacy                            = 0xe86c,

    /// Identifier: "map-icon-physiotherapist"
    IFMapIconPhysiotherapist                     = 0xe86d,

    /// Identifier: "map-icon-place-of-worship"
    IFMapIconPlaceOfWorship                      = 0xe86e,

    /// Identifier: "map-icon-playground"
    IFMapIconPlayground                          = 0xe86f,

    /// Identifier: "map-icon-plumber"
    IFMapIconPlumber                             = 0xe870,

    /// Identifier: "map-icon-point-of-interest"
    IFMapIconPointOfInterest                     = 0xe871,

    /// Identifier: "map-icon-police"
    IFMapIconPolice                              = 0xe872,

    /// Identifier: "map-icon-political"
    IFMapIconPolitical                           = 0xe873,

    /// Identifier: "map-icon-post-box"
    IFMapIconPostBox                             = 0xe874,

    /// Identifier: "map-icon-post-office"
    IFMapIconPostOffice                          = 0xe875,

    /// Identifier: "map-icon-postal-code-prefix"
    IFMapIconPostalCodePrefix                    = 0xe876,

    /// Identifier: "map-icon-postal-code"
    IFMapIconPostalCode                          = 0xe877,

    /// Identifier: "map-icon-rafting"
    IFMapIconRafting                             = 0xe878,

    /// Identifier: "map-icon-real-estate-agency"
    IFMapIconRealEstateAgency                    = 0xe879,

    /// Identifier: "map-icon-restaurant"
    IFMapIconRestaurant                          = 0xe87a,

    /// Identifier: "map-icon-roofing-contractor"
    IFMapIconRoofingContractor                   = 0xe87b,

    /// Identifier: "map-icon-route-pin"
    IFMapIconRoutePin                            = 0xe87c,

    /// Identifier: "map-icon-route"
    IFMapIconRoute                               = 0xe87d,

    /// Identifier: "map-icon-rv-park"
    IFMapIconRvPark                              = 0xe87e,

    /// Identifier: "map-icon-sailing"
    IFMapIconSailing                             = 0xe87f,

    /// Identifier: "map-icon-school"
    IFMapIconSchool                              = 0xe880,

    /// Identifier: "map-icon-scuba-diving"
    IFMapIconScubaDiving                         = 0xe881,

    /// Identifier: "map-icon-search"
    IFMapIconSearch                              = 0xe882,

    /// Identifier: "map-icon-shield"
    IFMapIconShield                              = 0xe883,

    /// Identifier: "map-icon-shopping-mall"
    IFMapIconShoppingMall                        = 0xe884,

    /// Identifier: "map-icon-sign-language"
    IFMapIconSignLanguage                        = 0xe885,

    /// Identifier: "map-icon-skateboarding"
    IFMapIconSkateboarding                       = 0xe886,

    /// Identifier: "map-icon-ski-jumping"
    IFMapIconSkiJumping                          = 0xe887,

    /// Identifier: "map-icon-skiing"
    IFMapIconSkiing                              = 0xe888,

    /// Identifier: "map-icon-sledding"
    IFMapIconSledding                            = 0xe889,

    /// Identifier: "map-icon-snow-shoeing"
    IFMapIconSnowShoeing                         = 0xe88a,

    /// Identifier: "map-icon-snow"
    IFMapIconSnow                                = 0xe88b,

    /// Identifier: "map-icon-snowboarding"
    IFMapIconSnowboarding                        = 0xe88c,

    /// Identifier: "map-icon-snowmobile"
    IFMapIconSnowmobile                          = 0xe88d,

    /// Identifier: "map-icon-spa"
    IFMapIconSpa                                 = 0xe88e,

    /// Identifier: "map-icon-square-pin"
    IFMapIconSquarePin                           = 0xe88f,

    /// Identifier: "map-icon-square-rounded"
    IFMapIconSquareRounded                       = 0xe890,

    /// Identifier: "map-icon-square"
    IFMapIconSquare                              = 0xe891,

    /// Identifier: "map-icon-stadium"
    IFMapIconStadium                             = 0xe892,

    /// Identifier: "map-icon-storage"
    IFMapIconStorage                             = 0xe893,

    /// Identifier: "map-icon-store"
    IFMapIconStore                               = 0xe894,

    /// Identifier: "map-icon-subway-station"
    IFMapIconSubwayStation                       = 0xe895,

    /// Identifier: "map-icon-surfing"
    IFMapIconSurfing                             = 0xe896,

    /// Identifier: "map-icon-swimming"
    IFMapIconSwimming                            = 0xe897,

    /// Identifier: "map-icon-synagogue"
    IFMapIconSynagogue                           = 0xe898,

    /// Identifier: "map-icon-taxi-stand"
    IFMapIconTaxiStand                           = 0xe899,

    /// Identifier: "map-icon-tennis"
    IFMapIconTennis                              = 0xe89a,

    /// Identifier: "map-icon-toilet"
    IFMapIconToilet                              = 0xe89b,

    /// Identifier: "map-icon-trail-walking"
    IFMapIconTrailWalking                        = 0xe89c,

    /// Identifier: "map-icon-train-station"
    IFMapIconTrainStation                        = 0xe89d,

    /// Identifier: "map-icon-transit-station"
    IFMapIconTransitStation                      = 0xe89e,

    /// Identifier: "map-icon-travel-agency"
    IFMapIconTravelAgency                        = 0xe89f,

    /// Identifier: "map-icon-unisex"
    IFMapIconUnisex                              = 0xe8a0,

    /// Identifier: "map-icon-university"
    IFMapIconUniversity                          = 0xe8a1,

    /// Identifier: "map-icon-veterinary-care"
    IFMapIconVeterinaryCare                      = 0xe8a2,

    /// Identifier: "map-icon-viewing"
    IFMapIconViewing                             = 0xe8a3,

    /// Identifier: "map-icon-volume-control-telephone"
    IFMapIconVolumeControlTelephone              = 0xe8a4,

    /// Identifier: "map-icon-walking"
    IFMapIconWalking                             = 0xe8a5,

    /// Identifier: "map-icon-waterskiing"
    IFMapIconWaterskiing                         = 0xe8a6,

    /// Identifier: "map-icon-whale-watching"
    IFMapIconWhaleWatching                       = 0xe8a7,

    /// Identifier: "map-icon-wheelchair"
    IFMapIconWheelchair                          = 0xe8a8,

    /// Identifier: "map-icon-wind-surfing"
    IFMapIconWindSurfing                         = 0xe8a9,

    /// Identifier: "map-icon-zoo"
    IFMapIconZoo                                 = 0xe8aa,

    /// Identifier: "map-icon-zoom-in-alt"
    IFMapIconZoomInAlt                           = 0xe8ab,

    /// Identifier: "map-icon-zoom-in"
    IFMapIconZoomIn                              = 0xe8ac,

    /// Identifier: "map-icon-zoom-out-alt"
    IFMapIconZoomOutAlt                          = 0xe8ad,

    /// Identifier: "map-icon-zoom-out"
    IFMapIconZoomOut                             = 0xe8ae,

};

/**
 * MapIcons v3.0.0 http://map-icons.com
 */
@interface IFMapIcons : IFIcon
@end
