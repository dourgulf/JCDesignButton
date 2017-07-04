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
        [self createLabel];
        [self setupDefaults];
        [self updateIconText];
    }
    return self;
}

- (instancetype)initWithCoder:(NSCoder *)coder {
    self = [super initWithCoder:coder];
    if (self) {
        [self createLabel];
        [self setupDefaults];
    }
    return self;
}

-(void)awakeFromNib {
    [super awakeFromNib];
    [self updateIconText];
}

- (void)prepareForInterfaceBuilder {
    [self updateIconText];
}

- (void)setupDefaults {
    _fontSize = 14.0;
    [self loadDesignIconFont];
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

- (void)loadDesignIconFont {
    [JCIconFontManager registerIconFont:[IFFontAwesome class] forName:@"fa"];
}

@end
