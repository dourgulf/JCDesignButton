//
//  JCIconFontManager.h
//  JCDesignButton
//
//  Created by dawenhing on 23/06/2017.
//  Copyright © 2017 dawenhing. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "IFIcon.h"

@interface JCIconFontManager : NSObject

/**
 * 
 */
//+ (void)registerAllIconFontKit;

/**
 * Register the IconFontKit class with it's font name
 * For example FontAwesome shout be register the class IFFontAwesome with name "fa".
 * And then you can use `+iconWithIdentifier:fontSize` to create icon.
 * @param fontClass any `IconFontKit` class
 * @param fontName the name for access `IconFontKit` class.
 */
+ (void)registerIconFont:(Class)fontClass forName:(NSString *)fontName;

/**
 * Creates an IFIcon instance for the given `identifier` and `fontSize`.
 *
 * FontAwesome icons identifiers should be like "fa-{icon}"
 *
 * @param identifier A string that represents the icon, e.g. `@"fa-mobile"`.
 * @param fontSize The desired size (in points) of the icon font that will be used for the icon. This value must be greater than 0.0.
 *
 * @return Returns an IFIcon instance if the `identifier` is existed in `allIcons`, returns nil otherwise.
 */
+ (IFIcon *)iconWithIdentifier:(NSString *)identifier fontSize:(CGFloat)fontSize;

/**
 * Creates an IFIcon instance for the given `fontName`, `iconName` and `fontSize`.
 *
 * FontAwesome icons identifiers should be like "fa-mobile"
 * "fa" is the `fontName` and "mobile" is `iconName`
 *
 * @param fontName A string that represents the icon font name, e.g. `@"fa"`.
 * @param iconName A string that represents the icon name e.g. `@"mobile"`.
 * @param fontSize The desired size (in points) of the icon font that will be used for the icon. This value must be greater than 0.0.
 *
 * @return Returns an IFIcon instance if the `identifier` is existed in `allIcons`, returns nil otherwise.
 */
+ (IFIcon *)iconWithFontName:(NSString *)fontName iconName:(NSString *)iconName fontSize:(CGFloat)fontSize;


@end
