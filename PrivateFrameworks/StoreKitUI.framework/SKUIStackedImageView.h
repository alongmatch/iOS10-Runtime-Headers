/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class MPUStackView, NSString, UIView;

@interface SKUIStackedImageView : SKUIImageView <MPUStackViewDataSource> {
    long long _stackDepth;
    MPUStackView *_stackView;
}

@property UIView * perspectiveTargetView;
@property struct CGPoint { double x1; double x2; } vanishingPoint;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (struct SKUIStackedImageConfiguration { struct UIOffset { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; long long x3; })_configurationForSize:(struct CGSize { double x1; double x2; })arg1;
+ (double)maximumPerspectiveHeightForSize:(struct CGSize { double x1; double x2; })arg1;

- (void)performCompressionAnimationWithCompletionHandler:(id)arg1;
- (void)stackView:(id)arg1 didCreateItem:(id)arg2;
- (void)stackView:(id)arg1 applyAttributesToItem:(id)arg2 atIndex:(long long)arg3;
- (long long)numberOfItemsInStackView:(id)arg1;
- (struct CGPoint { double x1; double x2; })vanishingPoint;
- (id)perspectiveTargetView;
- (void)updateForChangedDistanceFromVanishingPoint;
- (void)setVanishingPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPerspectiveTargetView:(id)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImage:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
