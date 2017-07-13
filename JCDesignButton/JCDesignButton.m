//
//  JCDesignButton.m
//  JCDesignButton
//
//  Created by dawenhing on 23/06/2017.
//  Copyright © 2017 dawenhing. All rights reserved.
//
#import "JCDesignButton.h"

#ifndef JCDESIGN_BUTTON_DISABLE_ICONFONT
#import "JCIconFontManager.h"
#endif

//#define TARGET_INTERFACE_BUILDER 1

@interface JCDesignButton()

@property (weak, nonatomic) UIView *rootView;
@property (weak, nonatomic) CAGradientLayer *gradient;

@property (weak, nonatomic) IBOutlet UIView *backgroundView;
@property (weak, nonatomic) IBOutlet UIView *contentView;

@property (weak, nonatomic) IBOutlet UILabel *titleLabel;

@property (weak, nonatomic) IBOutlet UILabel *leftIconLabel;
@property (weak, nonatomic) IBOutlet UIImageView *leftImageView;

@property (weak, nonatomic) IBOutlet UILabel *rightIconLabel;
@property (weak, nonatomic) IBOutlet UIImageView *rightImageView;

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

- (instancetype)initWithCoder:(NSCoder *)coder {
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
    [self setupViews];
}

- (void)layoutSubviews {
    [self setupLayout];
    [self rebuildGradientBackground];
    [self setupBorderAndCorners];
}

- (CGSize)intrinsicContentSize {
    
    CGSize leftSize = [self leftElementSize];
    CGSize titleSize = [self titleElementSize];
    CGSize rightSize = [self rightElementSize];
    
    CGFloat width = leftSize.width + titleSize.width + rightSize.width;
    width += self.contentLeftSpace + self.contentRightSpace;
    width += self.titleLeftMargin + self.titleRightMargin;
    // fade height, our content size priority is lowest, it depend on the label content size.
    CGFloat height = titleSize.height;
    if (leftSize.height > height) {
        height = leftSize.height;
    }
    if (rightSize.height > height) {
        height = rightSize.height;
    }
    height += self.contentTopSpace + self.contentBottomSpace;
    
    return CGSizeMake(width, height);
}

#pragma mark View setup
- (UILabel *)leftIconLabel {
    if (!_leftIconLabel) {
        UILabel *l = [[UILabel alloc] init];
        [self.contentView addSubview:l];
        _leftIconLabel = l;
    }
    return _leftIconLabel;
}

- (BOOL)hasLeftIcon {
    return _leftIconLabel && !_leftIconLabel.hidden;
}

- (UILabel *)rightIconLabel {
    if (!_rightIconLabel) {
        UILabel *l = [[UILabel alloc] init];
        [self.contentView addSubview:l];
        _rightIconLabel = l;
    }
    return _rightIconLabel;
}

- (BOOL)hasRightIcon {
    return _rightIconLabel && !_rightIconLabel.hidden;
}

- (UIImageView *)leftImageView {
    if (!_leftImageView) {
        UIImageView *iv = [[UIImageView alloc] init];
        [self.contentView addSubview:iv];
        _leftImageView = iv;
    }
    return _leftImageView;
}

- (CGSize)leftImageSize {
    CGSize size = CGSizeMake(self.leftImageWidth, self.leftImageHeight);
    if (size.width == 0) {
        size.width = self.leftImage.size.width;
    }
    if (size.height == 0) {
        size.height = self.leftImage.size.height;
    }
    return size;
}

- (BOOL)hasLeftImage {
    return _leftImageView && !_leftImageView.hidden;
}

- (UIImageView *)rightImageView {
    if (!_rightImageView) {
        UIImageView *iv = [[UIImageView alloc] init];
        [self.contentView addSubview:iv];
        _rightImageView = iv;
    }
    return _rightImageView;
}

- (CGSize)rightImageSize {
    CGSize size = CGSizeMake(self.rightImageWidth, self.rightImageHeight);
    if (size.width == 0) {
        size.width = self.rightImage.size.width;
    }
    if (size.height == 0) {
        size.height = self.rightImage.size.height;
    }
    return size;
}

- (BOOL)hasRightImage {
    return _rightImageView && !_rightImageView.hidden;
}

- (CGSize)leftElementSize {
    if ([self hasLeftImage]) {
        return [self leftImageSize];
    }
    else if ([self hasLeftIcon]) {
        CGSize size = self.leftIconLabel.intrinsicContentSize;
        return CGSizeMake(ceil(size.width), ceil(size.height));
    }
    return CGSizeZero;
}

- (CGSize)rightElementSize {
    if ([self hasRightImage]) {
        return [self rightImageSize];
    }
    else if ([self hasRightIcon]) {
        CGSize size = self.rightIconLabel.intrinsicContentSize;
        return CGSizeMake(ceil(size.width), ceil(size.height));
    }
    return CGSizeZero;
}

- (CGSize)titleElementSize {
    CGSize size = self.titleLabel.intrinsicContentSize;
    return CGSizeMake(ceil(size.width), ceil(size.height));
}

- (void)createViews {
    UIView *v = [[UIView alloc] initWithFrame:CGRectZero];
    [self addSubview:v];
    self.backgroundView = v;
    self.contentView = self;
    UILabel *title = [[UILabel alloc] init];
    [self.contentView addSubview:title];
    self.titleLabel = title;
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
        
    _rightIconSize = 16.0;
    _rightIconColor = [UIColor whiteColor];
        
#ifndef JCDESIGN_BUTTON_DISABLE_ICONFONT
    [self loadDesignIconFont];
#endif
}

- (void)updateViews {
    [self setupViews];
}

- (void)setupViews {
    [self setupBackgroundColor];
    [self setupTitle];
    [self setupLeftImage];
    [self setupLeftIcon];
    [self setupRightImage];
    [self setupRightIcon];    
    [self setupLayout];
    [self setupGradientBackground];
    [self setupBorderAndCorners];
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
    
    if (color != nil) {
        imageView.image = [image imageWithRenderingMode:UIImageRenderingModeAlwaysTemplate];
        imageView.tintColor = color;
    }
    else {
        imageView.image = image;
    }
}

- (void)setupLeftImage {
    if (self.leftImage != nil) {
        [self setupImageView:self.leftImageView image:self.leftImage color:self.leftImageColor];
    }
}

- (void)setupRightImage {
    if (self.rightImage != nil) {
        [self setupImageView:self.rightImageView image:self.rightImage color:self.rightImageColor];
    }
}

- (void)setupIconLabel:(UILabel *)label fontIdentifier:(NSString *)identifier fontSize:(CGFloat)size color:(UIColor *)color {
    
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
    
#if TARGET_INTERFACE_BUILDER
    else {
        label.hidden = NO;
        label.textColor = color;
        label.text = @"invalid";
    }
#endif
    
#else
    label.text = identifier;
    label.textColor = color;
#endif
}

- (void)setupLeftIcon {
    if (self.leftIconText != nil && ![self hasLeftImage]) {
        [self setupIconLabel:self.leftIconLabel fontIdentifier:self.leftIconText fontSize:self.leftIconSize color:self.leftIconColor];
    }
}

- (void)setupRightIcon {
    if (self.rightIconText != nil && ![self hasRightImage]) {
        [self setupIconLabel:self.rightIconLabel fontIdentifier:self.rightIconText fontSize:self.rightIconSize color:self.rightIconColor];
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

// make the content center-align
- (CGSize)contentCenterOffset {
    CGFloat leftSpace = [self leftElementSize].width + self.titleLeftMargin;
    CGFloat rightSpace= [self rightElementSize].width + self.titleRightMargin;
    
    CGFloat shift = (leftSpace - rightSpace)/2;
    return CGSizeMake(shift, 0);
}

- (void)setupLayout {
    CGSize contentSize = self.frame.size;
    CGRect frame = CGRectMake(0, 0, contentSize.width, contentSize.height);
    self.backgroundView.frame = frame;
    
    CGSize contentOffset = [self contentCenterOffset];
    CGPoint titleCenter = CGPointMake(contentSize.width/2.0, contentSize.height/2.0);
    titleCenter.x += contentOffset.width;
    titleCenter.y += contentOffset.height;
    
    // title 
    CGRect titleFrame = CGRectZero;
    titleFrame.size = [self titleElementSize];
    self.titleLabel.frame = titleFrame;
    self.titleLabel.center = titleCenter;
    
    [self setupLeftLayout];
    [self setupRightLayout];
}

- (void)setupLeftLayout {
    UIView *leftView = nil;
    if ([self hasLeftImage]) {
        leftView = self.leftImageView;
    }
    else if ([self hasLeftIcon]) {
        leftView = self.leftIconLabel;
    }
    else {
        return ;
    }
    
    CGSize contentSize = [self leftElementSize];
    CGRect leftFrame = CGRectMake(0, 0, contentSize.width, contentSize.height);
    leftFrame.size = contentSize;
    leftView.frame = leftFrame;
    CGPoint titleCenter = self.titleLabel.center;
    CGFloat distance = (self.titleLabel.frame.size.width/2 + self.titleLeftMargin + leftFrame.size.width/2);
    CGPoint leadingCenter = CGPointMake(ceil(titleCenter.x - distance), titleCenter.y);
    leftView.center = leadingCenter;
}

- (void)setupRightLayout {
    UIView *rightView = nil;
    if ([self hasRightImage]) {
        rightView = self.rightImageView;
    }
    else if ([self hasRightIcon]) {
        rightView = self.rightIconLabel;
    }
    else {
        return ;
    }
    
    CGSize contentSize = [self rightElementSize];
    CGRect rightFrame = CGRectMake(0, 0, contentSize.width, contentSize.height);
    rightView.frame = rightFrame;
    CGPoint titleCenter = self.titleLabel.center;
    CGFloat distance = self.titleLabel.frame.size.width/2 + self.titleRightMargin + rightFrame.size.width/2;
    CGPoint leadingCenter = CGPointMake(ceil(titleCenter.x + distance), titleCenter.y);
    rightView.center = leadingCenter;    
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
