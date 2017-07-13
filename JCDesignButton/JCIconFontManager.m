//
//  JCIconFontManager.m
//  JCDesignButton
//
//  Created by dawenhing on 23/06/2017.
//  Copyright © 2017 dawenhing. All rights reserved.
//

#import "JCIconFontManager.h"

@implementation JCIconFontManager

static NSMutableDictionary *gIconFontClass = nil;

+ (Class)fontClassForName:(NSString *)name {
    if (gIconFontClass) {
        return gIconFontClass[name];
    }
    return nil;
}

+ (void)registerIconFont:(Class)fontClass forName:(NSString *)fontName {
    NSParameterAssert(fontClass);
    NSParameterAssert(fontName);
    
    if (![fontClass respondsToSelector:@selector(iconWithIdentifier:fontSize:)]) {
        [NSException raise:NSInvalidArgumentException format:@"font class function missed"];
        return;
    }
    
    if (!gIconFontClass) {
        gIconFontClass = [[NSMutableDictionary alloc] init];
    }
    [gIconFontClass setObject:fontClass forKey:fontName];
}

+ (IFIcon *)iconWithFontName:(NSString *)fontName iconName:(NSString *)iconName fontSize:(CGFloat)fontSize {
    
    Class fontClass = [self fontClassForName:fontName];
    
    if (fontClass) {
        NSString *identifier = [[NSString alloc] initWithFormat:@"%@-%@", fontName, iconName];        
        return [fontClass iconWithIdentifier:identifier fontSize:fontSize];
    }
    return nil;
    
}

+ (IFIcon *)iconWithIdentifier:(NSString *)identifier fontSize:(CGFloat)fontSize {
    NSArray *part = [identifier componentsSeparatedByString:@"-"];
    if (part.count >= 2) {
        Class fontClass = [self fontClassForName:part[0]];
        if (fontClass) {
            return [fontClass iconWithIdentifier:identifier fontSize:fontSize];
        }        
    }
    return nil;
}

@end
