//
//  JCIconFontLabel.h
//  JCDesignButton
//
//  Created by dawenhing on 28/06/2017.
//  Copyright © 2017 dawenhing. All rights reserved.
//

#import <UIKit/UIKit.h>

IB_DESIGNABLE

@interface JCIconFontLabel : UILabel

@property(strong, nonatomic) IBInspectable NSString *iconText;
@property(assign, nonatomic) IBInspectable CGFloat fontSize;

@end

@interface JCIconFontLabel(Subclass)

- (void)loadDesignIconFont;

@end
