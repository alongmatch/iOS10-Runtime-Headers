/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIIndexBarControl;

@interface SKUICollectionView : UICollectionView  {
    bool_delegateWantsWillLayoutSubviews;
    bool_externalShowsHorizontalScrollIndicator;
    bool_externalShowsVerticalScrollIndicator;
    SKUIIndexBarControl *_indexBarControl;
}

@property(retain) SKUIIndexBarControl * indexBarControl;


- (void)_updateShowsScrollIndicators;
- (void)_updateIndexBarControlFrame;
- (id)indexBarControl;
- (void)setIndexBarControl:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 collectionViewLayout:(id)arg2;
- (void)setShowsHorizontalScrollIndicator:(bool)arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2;
- (void)layoutSubviews;
- (void)setShowsVerticalScrollIndicator:(bool)arg1;

@end
