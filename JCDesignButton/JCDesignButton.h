//
//  JCDesignButton.h
//  JCDesignButton
//
//  Created by DawenRie on 23/06/2017.
//  Copyright © 2017 DawenRie. All rights reserved.
//

#import <UIKit/UIKit.h>

IB_DESIGNABLE 
@interface JCDesignButton : UIControl

@property (strong, nonatomic) IBInspectable UIColor *bgColor;   //

@property (strong, nonatomic) IBInspectable UIColor *gradientStartColor;
@property (strong, nonatomic) IBInspectable UIColor *gradientEndColor;
@property (assign, nonatomic) IBInspectable BOOL gradientHorizontal;

@property (assign, nonatomic) IBInspectable CGFloat cornerRadius;
@property (assign, nonatomic) IBInspectable BOOL conerRounded;  // fully rounded corner
@property (strong, nonatomic) IBInspectable UIColor *borderColor;
@property (assign, nonatomic) IBInspectable CGFloat borderWidth;

@property (strong, nonatomic) IBInspectable NSString *title;
@property (strong, nonatomic) IBInspectable UIColor *titleColor;
@property (strong, nonatomic) IBInspectable UIFont *titleFont;
@property (assign, nonatomic) IBInspectable CGFloat titleFontSize;
@property (assign, nonatomic) IBInspectable CGFloat titleLeftMargin;
@property (assign, nonatomic) IBInspectable CGFloat titleRightMargin;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *titleCenterConstraint;


@property (strong, nonatomic) IBInspectable NSString *leftIconText;
@property (strong, nonatomic) IBInspectable UIColor *leftIconColor;
@property (assign, nonatomic) IBInspectable CGFloat leftIconSize;

@property (strong, nonatomic) IBInspectable UIImage *leftImage;
@property (strong, nonatomic) IBInspectable UIColor *leftImageColor;
@property (assign, nonatomic) IBInspectable CGFloat leftImageHeight;
@property (assign, nonatomic) IBInspectable CGFloat leftImageWidth;

@property (strong, nonatomic) IBInspectable NSString *rightIconText;
@property (strong, nonatomic) IBInspectable UIColor *rightIconColor;
@property (assign, nonatomic) IBInspectable CGFloat rightIconSize;

@property (strong, nonatomic) IBInspectable UIImage *rightImage;
@property (strong, nonatomic) IBInspectable UIColor *rightImageColor;
@property (assign, nonatomic) IBInspectable CGFloat rightImageHeight;
@property (assign, nonatomic) IBInspectable CGFloat rightImageWidth;


@property (assign, nonatomic) IBInspectable CGFloat contentTopSpace;
@property (assign, nonatomic) IBInspectable CGFloat contentBottomSpace;
@property (assign, nonatomic) IBInspectable CGFloat contentLeftSpace;
@property (assign, nonatomic) IBInspectable CGFloat contentRightSpace;

/**
 * Design attributes will cause views update automatically when disigning, but not in runtime.
 * So if you set it in runtime, make sure call `updateViews`
 */
- (void)updateViews;

@end

/**
 * We only support one icon font(Awesome) at design time by default, 
 *
 * You can use `CIconFontManager` register any icon font from `IconFontKit`, but you can't apply in design time.
 * So, if you want to support more icon font at design time, 
 * you can derive your custom class and implement `loadDesignIconFont` and load any icon font you want.
 * See the `JCIconKitButton.h
 */
@interface JCDesignButton(Subclass)

- (void)loadDesignIconFont;

@end
