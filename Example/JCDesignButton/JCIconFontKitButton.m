//
//  JCIconFontKitButton.m
//  JCDesignButton
//
//  Created by DawenRie on 29/06/2017.
//  Copyright © 2017 DawenRie. All rights reserved.
//

#import "JCIconFontKitButton.h"

#import <IconFontKit/IconFontKit.h>
#import "JCIconFontManager.h"

@implementation JCIconFontKitButton

- (void)loadDesignIconFont {
    [JCIconFontManager registerIconFont:[IFFontAwesome class] forName:@"fa"];
    [JCIconFontManager registerIconFont:[IFOpenIconic class] forName:@"oi"];
    // ... more things you want
}


@end
