/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIColor, NSString, SKUIClientContext, UIImageView, UILabel, SKUIBadgeLabel;

@interface SKUILockupMetadataView : UIView  {
    UILabel *_artistNameLabel;
    UILabel *_categoryLabel;
    SKUIClientContext *_clientContext;
    SKUIBadgeLabel *_editorialBadgeLabel;
    UILabel *_itemCountLabel;
    UILabel *_itemOfferLabel;
    long long _numberOfUserRatings;
    UILabel *_releaseDateLabel;
    UIColor *_textColor;
    UIColor *_titleColor;
    UILabel *_titleLabel;
    float _userRating;
    UIImageView *_userRatingImageView;
    UILabel *_userRatingLabel;
    unsigned long long _visibleFields;
}

@property(retain) SKUIClientContext * clientContext;
@property unsigned long long visibleFields;
@property(copy) NSString * artistName;
@property(copy) NSString * editorialBadgeString;
@property(copy) NSString * categoryString;
@property(copy) NSString * itemCountString;
@property(copy) NSString * itemOfferString;
@property(copy) NSString * releaseDateString;
@property(copy) NSString * title;
@property long long numberOfUserRatings;
@property float userRating;
@property(readonly) UIColor * primaryTextColor;

+ (double)maximumHeightWithVisibleFields:(unsigned long long)arg1;

- (long long)numberOfUserRatings;
- (unsigned long long)visibleFields;
- (void)setVisibleFields:(unsigned long long)arg1;
- (void)setReleaseDateString:(id)arg1;
- (void)setNumberOfUserRatings:(long long)arg1;
- (void)setItemOfferString:(id)arg1;
- (void)setItemCountString:(id)arg1;
- (void)setCategoryString:(id)arg1;
- (void)setEditorialBadgeString:(id)arg1;
- (id)itemOfferString;
- (id)itemCountString;
- (id)categoryString;
- (id)editorialBadgeString;
- (id)_decimalNumberFormatter;
- (void)_reloadUserRatingViews;
- (id)_newDefaultLabel;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)setClientContext:(id)arg1;
- (id)clientContext;
- (id)primaryTextColor;
- (id)releaseDateString;
- (void)setArtistName:(id)arg1;
- (id)artistName;
- (float)userRating;
- (void)setUserRating:(float)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
