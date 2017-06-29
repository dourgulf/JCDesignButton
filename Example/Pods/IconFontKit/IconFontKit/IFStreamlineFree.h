#import "IFIcon.h"

/**
 * StreamlineFree icon types.
 */
typedef NS_ENUM(IFIconType, IFStreamlineFreeType) {

    /// Identifier: "sf-backpack"
    IFStreamlineBackpack                            = 0xe900,

    /// Identifier: "sf-bomb"
    IFStreamlineBomb                                = 0xe901,

    /// Identifier: "sf-book"
    IFStreamlineBook                                = 0xe902,

    /// Identifier: "sf-briefcase"
    IFStreamlineBriefcase                           = 0xe903,

    /// Identifier: "sf-bubble-chat"
    IFStreamlineBubbleChat                          = 0xe904,

    /// Identifier: "sf-bubble-heart"
    IFStreamlineBubbleHeart                         = 0xe905,

    /// Identifier: "sf-camera-photo"
    IFStreamlineCameraPhoto                         = 0xe906,

    /// Identifier: "sf-camera-polaroid"
    IFStreamlineCameraPolaroid                      = 0xe907,

    /// Identifier: "sf-camera-video"
    IFStreamlineCameraVideo                         = 0xe908,

    /// Identifier: "sf-cassette-player"
    IFStreamlineCassettePlayer                      = 0xe909,

    /// Identifier: "sf-charlie-chaplin"
    IFStreamlineCharlieChaplin                      = 0xe90a,

    /// Identifier: "sf-chef-hat"
    IFStreamlineChefHat                             = 0xe90b,

    /// Identifier: "sf-clock"
    IFStreamlineClock                               = 0xe90c,

    /// Identifier: "sf-coffee-machine"
    IFStreamlineCoffeeMachine                       = 0xe90d,

    /// Identifier: "sf-cog"
    IFStreamlineCog                                 = 0xe90e,

    /// Identifier: "sf-computer-imac"
    IFStreamlineComputerImac                        = 0xe90f,

    /// Identifier: "sf-computer-network"
    IFStreamlineComputerNetwork                     = 0xe910,

    /// Identifier: "sf-computer-pc"
    IFStreamlineComputerPc                          = 0xe911,

    /// Identifier: "sf-computer-screen-1"
    IFStreamlineComputerScreen1                     = 0xe912,

    /// Identifier: "sf-computer-screen-2"
    IFStreamlineComputerScreen2                     = 0xe913,

    /// Identifier: "sf-contact-book"
    IFStreamlineContactBook                         = 0xe914,

    /// Identifier: "sf-content-download"
    IFStreamlineContentDownload                     = 0xe915,

    /// Identifier: "sf-cooking-pot"
    IFStreamlineCookingPot                          = 0xe916,

    /// Identifier: "sf-crop"
    IFStreamlineCrop                                = 0xe917,

    /// Identifier: "sf-crown"
    IFStreamlineCrown                               = 0xe918,

    /// Identifier: "sf-designer-cup"
    IFStreamlineDesignerCup                         = 0xe919,

    /// Identifier: "sf-diving-gear"
    IFStreamlineDivingGear                          = 0xe91a,

    /// Identifier: "sf-drink-cocktail"
    IFStreamlineDrinkCocktail                       = 0xe91b,

    /// Identifier: "sf-drink-coffee"
    IFStreamlineDrinkCoffee                         = 0xe91c,

    /// Identifier: "sf-e-mail"
    IFStreamlineEMail                               = 0xe91d,

    /// Identifier: "sf-envelope"
    IFStreamlineEnvelope                            = 0xe91e,

    /// Identifier: "sf-eyedropper"
    IFStreamlineEyedropper                          = 0xe91f,

    /// Identifier: "sf-fork-knife"
    IFStreamlineForkKnife                           = 0xe920,

    /// Identifier: "sf-forklift"
    IFStreamlineForklift                            = 0xe921,

    /// Identifier: "sf-fountain-pen-head-1"
    IFStreamlineFountainPenHead1                    = 0xe922,

    /// Identifier: "sf-fountain-pen-head-2"
    IFStreamlineFountainPenHead2                    = 0xe923,

    /// Identifier: "sf-gauge"
    IFStreamlineGauge                               = 0xe924,

    /// Identifier: "sf-globe"
    IFStreamlineGlobe                               = 0xe925,

    /// Identifier: "sf-grid"
    IFStreamlineGrid                                = 0xe926,

    /// Identifier: "sf-griller"
    IFStreamlineGriller                             = 0xe927,

    /// Identifier: "sf-handbag"
    IFStreamlineHandbag                             = 0xe928,

    /// Identifier: "sf-headphone"
    IFStreamlineHeadphone                           = 0xe929,

    /// Identifier: "sf-heart"
    IFStreamlineHeart                               = 0xe92a,

    /// Identifier: "sf-home"
    IFStreamlineHome                                = 0xe92b,

    /// Identifier: "sf-hotdog"
    IFStreamlineHotdog                              = 0xe92c,

    /// Identifier: "sf-icecream"
    IFStreamlineIcecream                            = 0xe92d,

    /// Identifier: "sf-image"
    IFStreamlineImage                               = 0xe92e,

    /// Identifier: "sf-iphone"
    IFStreamlineIphone                              = 0xe92f,

    /// Identifier: "sf-ipod"
    IFStreamlineIpod                                = 0xe930,

    /// Identifier: "sf-layers-image"
    IFStreamlineLayersImage                         = 0xe931,

    /// Identifier: "sf-layers"
    IFStreamlineLayers                              = 0xe932,

    /// Identifier: "sf-link"
    IFStreamlineLink                                = 0xe933,

    /// Identifier: "sf-location-pin"
    IFStreamlineLocationPin                         = 0xe934,

    /// Identifier: "sf-location-user"
    IFStreamlineLocationUser                        = 0xe935,

    /// Identifier: "sf-lock-locked"
    IFStreamlineLockLocked                          = 0xe936,

    /// Identifier: "sf-lock-unlocked"
    IFStreamlineLockUnlocked                        = 0xe937,

    /// Identifier: "sf-magic-wand"
    IFStreamlineMagicWand                           = 0xe938,

    /// Identifier: "sf-magnet"
    IFStreamlineMagnet                              = 0xe939,

    /// Identifier: "sf-microphone"
    IFStreamlineMicrophone                          = 0xe93a,

    /// Identifier: "sf-monocle"
    IFStreamlineMonocle                             = 0xe93b,

    /// Identifier: "sf-mp3-player"
    IFStreamlineMp3Player                           = 0xe93c,

    /// Identifier: "sf-music-note"
    IFStreamlineMusicNote                           = 0xe93d,

    /// Identifier: "sf-notebook-1"
    IFStreamlineNotebook1                           = 0xe93e,

    /// Identifier: "sf-notebook-2"
    IFStreamlineNotebook2                           = 0xe93f,

    /// Identifier: "sf-paint-brush"
    IFStreamlinePaintBrush                          = 0xe940,

    /// Identifier: "sf-paint-bucket"
    IFStreamlinePaintBucket                         = 0xe941,

    /// Identifier: "sf-paint-palette"
    IFStreamlinePaintPalette                        = 0xe942,

    /// Identifier: "sf-paint-roller"
    IFStreamlinePaintRoller                         = 0xe943,

    /// Identifier: "sf-pen-fountain"
    IFStreamlinePenFountain                         = 0xe944,

    /// Identifier: "sf-pen-point-tip"
    IFStreamlinePenPointTip                         = 0xe945,

    /// Identifier: "sf-pencil-ruler"
    IFStreamlinePencilRuler                         = 0xe946,

    /// Identifier: "sf-picture-frame"
    IFStreamlinePictureFrame                        = 0xe947,

    /// Identifier: "sf-quill-ink"
    IFStreamlineQuillInk                            = 0xe948,

    /// Identifier: "sf-refresh"
    IFStreamlineRefresh                             = 0xe949,

    /// Identifier: "sf-remote-control-hand"
    IFStreamlineRemoteControlHand                   = 0xe94a,

    /// Identifier: "sf-remote-control-screen"
    IFStreamlineRemoteControlScreen                 = 0xe94b,

    /// Identifier: "sf-script"
    IFStreamlineScript                              = 0xe94c,

    /// Identifier: "sf-server"
    IFStreamlineServer                              = 0xe94d,

    /// Identifier: "sf-settings"
    IFStreamlineSettings                            = 0xe94e,

    /// Identifier: "sf-shield-cross"
    IFStreamlineShieldCross                         = 0xe94f,

    /// Identifier: "sf-shopping-cart-add"
    IFStreamlineShoppingCartAdd                     = 0xe950,

    /// Identifier: "sf-shopping-cart-remove"
    IFStreamlineShoppingCartRemove                  = 0xe951,

    /// Identifier: "sf-skull"
    IFStreamlineSkull                               = 0xe952,

    /// Identifier: "sf-smart-device"
    IFStreamlineSmartDevice                         = 0xe953,

    /// Identifier: "sf-smiley"
    IFStreamlineSmiley                              = 0xe954,

    /// Identifier: "sf-sneakers"
    IFStreamlineSneakers                            = 0xe955,

    /// Identifier: "sf-sofa"
    IFStreamlineSofa                                = 0xe956,

    /// Identifier: "sf-stamp"
    IFStreamlineStamp                               = 0xe957,

    /// Identifier: "sf-sub-woofer"
    IFStreamlineSubWoofer                           = 0xe958,

    /// Identifier: "sf-syringe"
    IFStreamlineSyringe                             = 0xe959,

    /// Identifier: "sf-target"
    IFStreamlineTarget                              = 0xe95a,

    /// Identifier: "sf-teapot"
    IFStreamlineTeapot                              = 0xe95b,

    /// Identifier: "sf-trash-can"
    IFStreamlineTrashCan                            = 0xe95c,

    /// Identifier: "sf-umbrella"
    IFStreamlineUmbrella                            = 0xe95d,

    /// Identifier: "sf-user-chat"
    IFStreamlineUserChat                            = 0xe95e,

    /// Identifier: "sf-user"
    IFStreamlineUser                                = 0xe95f,

    /// Identifier: "sf-vector"
    IFStreamlineVector                              = 0xe960,

    /// Identifier: "sf-windows"
    IFStreamlineWindows                             = 0xe961,

    /// Identifier: "sf-wrenches"
    IFStreamlineWrenches                            = 0xe962,

    /// Identifier: "sf-write"
    IFStreamlineWrite                               = 0xe963,

};

/**
 * Streamline Free Pack, v2, free iOS 8 vector icons, http://streamlineicons.com/free-icons.html
 */
@interface IFStreamlineFree : IFIcon
@end
