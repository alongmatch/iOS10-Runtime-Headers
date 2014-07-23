/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class UIColor, UILabel, NSString;

@interface MFRecipientTableViewCellDetailView : UIView <MFTinting> {
    UIColor *_tintColor;
    bool_labelIsHidden;
    bool_shouldDim;
    bool_highlighted;
    UILabel *_labelLabel;
    UILabel *_detailLabel;
}

@property(readonly) UILabel * labelLabel;
@property(readonly) UILabel * detailLabel;
@property bool highlighted;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property bool shouldDim;

+ (id)labelStringAttributes;
+ (id)groupStringAttributes;
+ (id)highlightedStringAttributes;
+ (id)defaultStringAttributes;
+ (double)lineHeight;

- (void)_recalculateLabelColors;
- (bool)shouldDim;
- (void)setShouldDim:(bool)arg1;
- (void)setTintColor:(id)arg1 animated:(bool)arg2;
- (id)detailLabel;
- (id)labelLabel;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (bool)highlighted;
- (void)setHighlighted:(bool)arg1;
- (id)tintColor;
- (void)layoutSubviews;

@end
