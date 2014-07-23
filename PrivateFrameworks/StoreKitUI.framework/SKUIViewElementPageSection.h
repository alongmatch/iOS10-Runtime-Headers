/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, SKUIViewElementLayoutContext;

@interface SKUIViewElementPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIItemStateCenterObserver> {
    Class _cellClass;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _cellContentInset;
    SKUIViewElementLayoutContext *_cellLayoutContext;
    double _firstSectionTopInset;
    bool_rendersWithPerspective;
    NSString *_reuseIdentifier;
    double _sectionBottomInset;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)cellForIndexPath:(id)arg1;
- (bool)_stretchesToFitCollectionViewBounds;
- (bool)_showsImageReflection;
- (void)_requestCellLayout;
- (long long)defaultItemPinningStyle;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)backgroundColorForIndexPath:(id)arg1;
- (long long)applyUpdateType:(long long)arg1;
- (void)_reloadViewElementProperties;
- (void)getModalSourceViewForViewElement:(id)arg1 completionBlock:(id)arg2;
- (double)contentInsetAdjustmentForCollectionView:(id)arg1;
- (void)reloadVisibleCellsWithReason:(long long)arg1;
- (void)willTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (bool)collectionViewShouldSelectItemAtIndexPath:(id)arg1;
- (bool)collectionViewShouldHighlightItemAtIndexPath:(id)arg1;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (long long)numberOfCells;
- (struct CGSize { double x1; double x2; })cellSizeForIndexPath:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionContentInset;
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })pinningContentInsetForItemAtIndexPath:(id)arg1;
- (void)prefetchResourcesWithReason:(long long)arg1;
- (void)willHideInContext:(id)arg1;
- (void)willAppearInContext:(id)arg1;
- (id)initWithPageComponent:(id)arg1;
- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;
- (void)dealloc;
- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })preferredContentSize;

@end
