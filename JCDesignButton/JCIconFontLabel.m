//
//  JCIconFontLabel.m
//  JCDesignButton
//
//  Created by DawenRie on 28/06/2017.
//  Copyright © 2017 DawenRie. All rights reserved.
//

#import "JCIconFontLabel.h"
#import "IFFontAwesome.h"
#import "JCIconFontManager.h"

@interface JCIconFontLabel()

@end

@implementation JCIconFontLabel

- (instancetype)initWithFrame:(CGRect)frame {
    self = [super initWithFrame:frame];
    if (self) {
        [self commonSetup];
    }
    return self;
}

- (instancetype)initWithCoder:(NSCoder *)coder {
    self = [super initWithCoder:coder];
    if (self) {
        [self commonSetup];
    }
    return self;
}

- (void)commonSetup {
    [self createLabel];
    [self setupDefaults];
    [self updateIconText];
}

#ifdef DEBUG
#define DESIGN_SUPPORT
#endif

- (void)setIconText:(NSString *)text {
    _iconText = text;
    [self updateIconText];
}

- (void)setFontSize:(CGFloat)fontSize {
    _fontSize = fontSize;
    [self updateIconText];
}

- (void)setupDefaults {
    _fontSize = 14.0;
    
#ifdef DESIGN_SUPPORT
    [JCIconFontManager registerIconFont:[IFFontAwesome class] forName:@"fa"];    
#endif    
}

- (void)createLabel {
}

- (void)updateIconText {
    if (self.iconText) {
        IFIcon *icon = [JCIconFontManager iconWithIdentifier:self.iconText fontSize:self.fontSize];
        if (icon) {
            self.attributedText = icon.attributedString;
        }
        else {
            NSLog(@"Warning: can't find icon font for identifier:%@", self.iconText);
            self.text = self.iconText;
        }
    }
}

@end
