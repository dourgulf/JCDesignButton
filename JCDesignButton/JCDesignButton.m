//
//  JCDesignButton.m
//  JCDesignButton
//
//  Created by DawenRie on 23/06/2017.
//  Copyright © 2017 DawenRie. All rights reserved.
//
#import "JCDesignButton.h"

#ifndef JCDESIGN_BUTTON_DISABLE_ICONFONT
#import "JCIconFontManager.h"
#endif

@interface JCDesignButton()

@property (weak, nonatomic) UIView *rootView;
@property (weak, nonatomic) CAGradientLayer *gradient;

@property (weak, nonatomic) IBOutlet UIView *backgroundView;
@property (weak, nonatomic) IBOutlet UIView *contentView;

@property (weak, nonatomic) IBOutlet NSLayoutConstraint *contentTopConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *contentBottomConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *contentLeadingConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *contentTrailingConstraint;

@property (weak, nonatomic) IBOutlet UILabel *titleLabel;

@property (weak, nonatomic) IBOutlet UILabel *leftIconLabel;
@property (weak, nonatomic) IBOutlet UIImageView *leftImageView;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *leftImageWidthConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *leftImageHeightConstraint;

@property (weak, nonatomic) IBOutlet UILabel *rightIconLabel;
@property (weak, nonatomic) IBOutlet UIImageView *rightImageView;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *rightImageWidthConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *rightImageHeightConstraint;

@property (weak, nonatomic) IBOutlet NSLayoutConstraint *titleLeadingConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *titleTrailingConstraint;

@end

@implementation JCDesignButton

- (instancetype)initWithFrame:(CGRect)frame {
    self = [super initWithFrame:frame];
    if (self) {
        [self createViews];
        [self setupDefaults];
        [self setupViews];
    }
    return self;
}

- (instancetype)initWithCoder:(NSCoder *)coder
{
    self = [super initWithCoder:coder];
    if (self) {
        [self createViews];
        [self setupDefaults];
    }
    return self;
}

- (void)awakeFromNib {
    [super awakeFromNib];
    [self setupViews];
}

- (void)prepareForInterfaceBuilder {
    [self updateViews];
    [self adjustContentOffset];
}

// make the content center-align
- (void)adjustContentOffset {
    CGFloat leftSpace = self.titleLeftMargin;
    if (!self.leftImageView.hidden) {
        leftSpace += self.leftImageWidth;
    }
    else if (!self.leftIconLabel.hidden) {
        leftSpace += ceil(self.leftIconLabel.intrinsicContentSize.width);
    }
    
    CGFloat rightSpace = self.titleRightMargin;
    if (!self.rightImageView.hidden) {
        rightSpace += self.rightImageWidth;
    }
    else if (!self.rightIconLabel.hidden) {
        rightSpace += ceil(self.rightIconLabel.intrinsicContentSize.width);
    }
    CGFloat shift = (leftSpace - rightSpace)/2;
    self.titleCenterConstraint.constant = shift;
}

- (void)layoutSubviews {
    [self adjustContentOffset];
    [self rebuildGradientBackground];
    [self setupBorderAndCorners];
}

- (CGSize)intrinsicContentSize {
    CGSize leftSize = CGSizeZero;
    if (!self.leftImageView.hidden) {
        leftSize = CGSizeMake(self.leftImageWidth, self.leftImageHeight);
    }
    else if (!self.leftIconLabel.hidden) {
        leftSize = self.leftIconLabel.intrinsicContentSize;
    }
    
    CGSize titleSize = self.titleLabel.intrinsicContentSize;
    CGSize rightSize = CGSizeZero;
    if (!self.rightImageView.hidden) {
        rightSize = CGSizeMake(self.rightImageWidth, self.rightImageHeight);
    }
    else if (!self.rightIconLabel.hidden) {
        rightSize = self.rightIconLabel.intrinsicContentSize;
    }
    CGFloat width = ceil(leftSize.width) + ceil(titleSize.width) + ceil(rightSize.width);
    width += self.contentLeftSpace + self.contentRightSpace;
    width += self.titleLeftMargin + self.titleRightMargin;
    // fade height, our content size priority is lowest, it depend on the label content size.
    return CGSizeMake(width, 0);
}

#pragma mark View setup
- (void)createViews {
    NSBundle *bundle = [NSBundle bundleForClass:self.class];
    UINib *nib = [UINib nibWithNibName:@"JCDesignButton" bundle:bundle];
    NSArray *views = [nib instantiateWithOwner:self options:nil];
    NSAssert(views.count > 0, @"Invalid XIB file?");
    self.rootView = views[0];
    self.rootView.frame = self.bounds;
    self.rootView.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    [self addSubview:self.rootView];
}

- (void)setupDefaults {
    _bgColor = [UIColor grayColor];
        
    _contentTopSpace = 8.0;
    _contentBottomSpace = 8.0;
    _contentLeftSpace = 16.0;
    _contentRightSpace = 16.0;
    
    _borderColor = [UIColor whiteColor];
    
#if TARGET_INTERFACE_BUILDER
    _title = @"{title}";
#endif
    
    _titleColor = [UIColor whiteColor];
    _titleFontSize = 16.0;
    _titleLeftMargin = 16;
    _titleRightMargin = 16;
    
    _leftIconSize = 16.0;
    _leftIconColor = [UIColor whiteColor];
    
    _leftImageWidth = 20.0;
    _leftImageHeight = 20.0;
    
    _rightIconSize = 16.0;
    _rightIconColor = [UIColor whiteColor];
    
    _rightImageWidth = 20.0;
    _rightImageHeight = 20.0;
    
#ifndef JCDESIGN_BUTTON_DISABLE_ICONFONT
    [self loadDesignIconFont];
#endif
}

- (void)updateViews {
    [self setupViews];
}

- (void)setupViews {
    [self setupBackgroundColor];
    [self setupGradientBackground];
    [self setupBorderAndCorners];
    [self setupTitle];
    [self setupLeftImage];
    [self setupLeftIcon];
    [self setupRightImage];
    [self setupRightIcon];    
    [self setupSpacing];
}

- (void)setupBackgroundColor {
    self.backgroundView.backgroundColor = self.bgColor;
}

- (void)setupGradientBackground {
    if (self.gradientStartColor != nil &&
        self.gradientEndColor != nil && 
        self.gradient == nil) {
                
        CAGradientLayer *gradient = [[CAGradientLayer alloc] init];
        self.gradient = gradient;
        self.gradient.frame = self.bounds;
        self.gradient.colors = @[(__bridge id)self.gradientStartColor.CGColor, (__bridge id)self.gradientEndColor.CGColor];
        self.gradient.startPoint = CGPointMake(0, 0);
        if (self.gradientHorizontal) {
            self.gradient.endPoint = CGPointMake(1, 0);
        }
        else {
            self.gradient.endPoint = CGPointMake(0, 1);
        }
        [self.backgroundView.layer addSublayer:self.gradient];
    }
}

- (void)rebuildGradientBackground {
    if (self.gradient != nil) {
        [self.gradient removeFromSuperlayer];
        self.gradient = nil;
    }
    [self setupGradientBackground];
}

- (void)setupBorderAndCorners {
    if (self.conerRounded) {
        self.backgroundView.layer.cornerRadius = self.frame.size.height/2;
        if (self.gradient) {
            self.backgroundView.clipsToBounds = YES;
        }
        self.layer.cornerRadius = self.frame.size.height/2;
        self.layer.masksToBounds = NO;
    }
    else if (self.cornerRadius > 0) {
        self.backgroundView.layer.cornerRadius = self.cornerRadius;
        if (self.gradient) {
            self.backgroundView.clipsToBounds = YES;
        }
        self.layer.cornerRadius = self.cornerRadius;
        self.layer.masksToBounds = NO;
    }
    self.backgroundView.layer.borderColor = self.borderColor.CGColor;
    self.backgroundView.layer.borderWidth = self.borderWidth;
}

- (void)setupImageView:(UIImageView *)imageView image:(UIImage *)image color:(UIColor *)color {
    
    imageView.hidden = (image == nil);
    if (image != nil) {
        if (color != nil) {
            imageView.image = [image imageWithRenderingMode:UIImageRenderingModeAlwaysTemplate];
            imageView.tintColor = color;
        }
        else {
            imageView.image = image;
        }
    }
}

- (void)setupLeftImage {
    [self setupImageView:self.leftImageView image:self.leftImage color:self.leftImageColor];
    self.leftImageWidthConstraint.constant = self.leftImageWidth;
    self.leftImageHeightConstraint.constant = self.leftImageHeight;
}

- (void)setupRightImage {
    [self setupImageView:self.rightImageView image:self.rightImage color:self.rightImageColor];
    self.rightImageWidthConstraint.constant = self.rightImageWidth;
    self.rightImageHeightConstraint.constant = self.rightImageHeight;
}

- (void)setupIconLabel:(UILabel *)label fontIdentifier:(NSString *)identifier fontSize:(CGFloat)size color:(UIColor *)color {
    
    if (!identifier) {
        label.hidden = YES;
        return ;
    }
#ifndef JCDESIGN_BUTTON_DISABLE_ICONFONT    
    IFIcon *icon = [JCIconFontManager iconWithIdentifier:identifier fontSize:size];
#ifdef DEBUG
    if (!icon) {
        NSLog(@"Warning: can't find icon for identifier:%@", identifier);
    }
#endif
    label.hidden = (icon == nil);
    if (!label.hidden) {
        label.textColor = color;
        label.attributedText = icon.attributedString;
    }
#else
    label.hidden = (identifier == nil);
    label.text = identifier;
    label.textColor = color;
#endif
}

- (void)setupLeftIcon {
    [self setupIconLabel:self.leftIconLabel fontIdentifier:self.leftIconText fontSize:self.leftIconSize color:self.leftIconColor];
    if (!self.leftImageView.hidden) {
        self.leftIconLabel.hidden = YES;
    }
}

- (void)setupRightIcon {
    [self setupIconLabel:self.rightIconLabel fontIdentifier:self.rightIconText fontSize:self.rightIconSize color:self.rightIconColor];
    if (!self.rightImageView.hidden) {
        self.rightIconLabel.hidden = YES;
    }
}


- (void)setupTitle {
    self.titleLabel.hidden = (self.title.length == 0);
    self.titleLabel.text = self.title;
    self.titleLabel.textColor = self.titleColor;
    if (self.titleFont) {
        self.titleLabel.font = self.titleFont;
    }
    else {
        self.titleLabel.font = [UIFont systemFontOfSize:self.titleFontSize];
    }
}

- (void)setupSpacing {
    self.contentTopConstraint.constant = self.contentTopSpace;
    self.contentLeadingConstraint.constant = self.contentLeftSpace;
    self.contentTrailingConstraint.constant = self.contentRightSpace;
    self.contentBottomConstraint.constant = self.contentBottomSpace;
    
    self.titleLeadingConstraint.constant = self.titleLeftMargin;
    self.titleTrailingConstraint.constant = self.titleRightMargin;
}

#pragma mark Touches
- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
    [UIView animateWithDuration:0.3 animations:^{
        self.alpha = 0.7;
    }];
}

- (void)touchesEnded:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
    // TODO: check touch still inside....
    [UIView animateWithDuration:0.1 animations:^{
        self.alpha = 1;
    }];
    [self sendActionsForControlEvents:UIControlEventTouchUpInside];
}

@end

#ifndef JCDESIGN_BUTTON_DISABLE_ICONFONT
#import "IFFontAwesome.h"

@implementation JCDesignButton(Subclass)

- (void)loadDesignIconFont {
    [JCIconFontManager registerIconFont:[IFFontAwesome class] forName:@"fa"];
}

@end
#endif
