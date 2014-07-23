/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIPopupMenuHeaderView, NSString, SKUIPillsControl, SKUIMenuViewController, SKUIMenuPageComponent, UIPopoverController, UIBarButtonItem, NSMutableIndexSet;

@interface SKUIMenuPageSection : SKUIStorePageSection <SKUIMenuViewControllerDelegate, SKUIPopupMenuDelegate, SKUISortDataRequestDelegate, UIPopoverControllerDelegate> {
    UIBarButtonItem *_cancelMenuItem;
    SKUIPillsControl *_pillsControl;
    SKUIMenuViewController *_moreListMenuViewController;
    UIPopoverController *_moreListPopoverController;
    SKUIPopupMenuHeaderView *_popupHeaderView;
    long long _selectedIndex;
    NSMutableIndexSet *_sortRequestIndexSet;
}

@property(readonly) SKUIMenuPageComponent * pageComponent;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)cellForIndexPath:(id)arg1;
- (void)menuViewController:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)popupMenuHeader:(id)arg1 didSelectMenuItemAtIndex:(long long)arg2;
- (void)_showPopoverController;
- (void)_showMenuViewController;
- (id)_newMenuViewController;
- (void)_loadSortDataIfNecessaryForMenuIndex:(long long)arg1 reason:(long long)arg2;
- (void)_pillAction:(id)arg1;
- (id)_popupHeaderView;
- (id)_pillsControl;
- (void)_showMoreList;
- (void)_restorePreviousSelection;
- (void)_dismissMenuViewController;
- (void)_setSelectedIndex:(long long)arg1;
- (void)_cancelMenuAction:(id)arg1;
- (void)sortDataRequest:(id)arg1 didFinishWithLockups:(id)arg2;
- (id)_contentChildView;
- (long long)defaultItemPinningStyle;
- (id)backgroundColorForIndexPath:(id)arg1;
- (long long)numberOfCells;
- (struct CGSize { double x1; double x2; })cellSizeForIndexPath:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionContentInset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })pinningContentInsetForItemAtIndexPath:(id)arg1;
- (void)willAppearInContext:(id)arg1;
- (id)initWithPageComponent:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)popoverControllerDidDismissPopover:(id)arg1;

@end
