/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UILabel, UISearchBar, <UITableViewDelegate>, UITableView, UIViewController, _UISearchControllerDidScrollDelegate, <UITableViewDataSource>, UIView, UIScrollView, NSString, UIPopoverController, UIButton, UIColor, <UISearchDisplayDelegate>, UISearchDisplayControllerContainerView, NSArray, UINavigationItem, _UINavigationControllerPalette;

@interface UISearchDisplayController : NSObject <_UIScrollNotification> {
    UIViewController *_viewController;
    UITableView *_tableView;
    UIView *_dimmingView;
    UISearchBar *_searchBar;
    UILabel *_noResultsLabel;
    NSString *_noResultsMessage;
    NSString *_resultsTitle;
    <UISearchDisplayDelegate> *_delegate;
    <UITableViewDataSource> *_tableViewDataSource;
    <UITableViewDelegate> *_tableViewDelegate;
    struct __CFArray { } *_containingScrollViews;
    double _lastKeyboardAdjustment;
    double _lastFooterAdjustment;
    UIPopoverController *_popoverController;
    long long _searchResultsTableViewStyle;
    id _navigationControllerBookkeeper;
    NSArray *_savedSelectedCellsWhenViewWillAppear;
    UIScrollView *_savedContainingScrollView;
    UISearchDisplayControllerContainerView *_containerView;
    unsigned long long _savedSearchBarResizingMask;
    UINavigationItem *_navigationItem;
    struct CGPoint { 
        double x; 
        double y; 
    } _containingScrollViewContentOffset;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _searchFieldInNavigationBarFrame;
    _UINavigationControllerPalette *_attachedNavigationPalette;
    UIButton *_animatingAppearanceNavigationButton;
    double _animatingAppearanceNavigationSearchBarWidth;
    UIColor *_dimmingOverlayColor;
    UIView *_tableViewBackgroundHeaderView;
    long long _unactivatedBarPosition;
    _UISearchControllerDidScrollDelegate *_didScrollDelegate;
    struct { 
        unsigned int visible : 1; 
        unsigned int animating : 1; 
        unsigned int hidIndexBar : 1; 
        unsigned int hidNavigationBar : 1; 
        unsigned int noResultsMessageVisible : 1; 
        unsigned int noResultsMessageAutoDisplay : 1; 
        unsigned int navigationBarHidingEnabled : 1; 
        unsigned int dimTableViewOnEmptySearchString : 1; 
        unsigned int isRotatingWithPopover : 1; 
        unsigned int cancelButtonManagementDisabled : 1; 
        unsigned int allowDisablingNavigationBarHiding : 1; 
        unsigned int showsResultsForEmptyField : 1; 
        unsigned int searchBarCanBeHoisted : 1; 
        unsigned int animatingSearchResultsDisappearance : 1; 
        unsigned int navigationBarShadowWasHidden : 1; 
        unsigned int hoistingSearchBar : 1; 
    } _searchDisplayControllerFlags;
    bool_displaysSearchBarInNavigationBar;
    unsigned long long _navigationBarSearchFieldSizing;
    double __activationGapHeight;
    double __additionalNonCollapsingHeightAboveSearchBar;
}

@property <UISearchDisplayDelegate> * delegate;
@property(getter=isActive) bool active;
@property(readonly) UISearchBar * searchBar;
@property(readonly) UIViewController * searchContentsController;
@property(readonly) UITableView * searchResultsTableView;
@property <UITableViewDataSource> * searchResultsDataSource;
@property <UITableViewDelegate> * searchResultsDelegate;
@property(copy) NSString * searchResultsTitle;
@property bool displaysSearchBarInNavigationBar;
@property(readonly) UINavigationItem * navigationItem;
@property bool noResultsMessageVisible;
@property bool automaticallyShowsNoResultsMessage;
@property(copy) NSString * noResultsMessage;
@property(getter=isNavigationBarHidingEnabled) bool navigationBarHidingEnabled;
@property bool dimTableViewOnEmptySearchString;
@property(getter=_isCancelButtonManagementDisabled,setter=_setCancelButtonManagementDisabled:) bool cancelButtonManagementDisabled;
@property unsigned long long navigationBarSearchFieldSizing;
@property double _activationGapHeight;
@property double _additionalNonCollapsingHeightAboveSearchBar;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (bool)isActive;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (void)setActive:(bool)arg1;
- (void)set_activationGapHeight:(double)arg1;
- (double)_activationGapHeight;
- (void)setDisplaysSearchBarInNavigationBar:(bool)arg1;
- (void)setSearchResultsTitle:(id)arg1;
- (id)searchResultsDelegate;
- (id)searchResultsDataSource;
- (void)_setDimmingOverlayColor:(id)arg1;
- (void)setNavigationBarSearchFieldSizing:(unsigned long long)arg1;
- (void)_setShowsResultsForEmptyField:(bool)arg1;
- (id)_noResultsMessageLabel;
- (void)_setCancelButtonManagementDisabled:(bool)arg1;
- (bool)_isCancelButtonManagementDisabled;
- (void)setDimTableViewOnEmptySearchString:(bool)arg1;
- (bool)_allowDisablingNavigationBarHiding;
- (void)_setAllowDisablingNavigationBarHiding:(bool)arg1;
- (void)setNavigationBarHidingEnabled:(bool)arg1;
- (void)setNoResultsMessage:(id)arg1;
- (bool)automaticallyShowsNoResultsMessage;
- (void)setAutomaticallyShowsNoResultsMessage:(bool)arg1;
- (bool)noResultsMessageVisible;
- (void)setNoResultsMessageVisible:(bool)arg1;
- (void)setSearchResultsDelegate:(id)arg1;
- (void)setSearchResultsDataSource:(id)arg1;
- (bool)popoverControllerShouldDismissPopover:(id)arg1;
- (void)popoverController:(id)arg1 animationCompleted:(long long)arg2;
- (void)setSearchContentsController:(id)arg1;
- (void)setSearchBar:(id)arg1;
- (void)_configureContainerView;
- (void)_setupNoResultsLabelIfNecessary;
- (void)_restoreSelectedCellsInCaseViewDidNotReallyAppear;
- (void)_saveSelectedRowsInCaseViewDoesNotReallyAppear;
- (void)_clearSavedSelectedCellsWeUsedWhenHedgingOurBets;
- (double)_updateNavigationPalette;
- (void)_updatePinnedSearchBar;
- (void)showHideAnimationDidFinish;
- (void)set_additionalNonCollapsingHeightAboveSearchBar:(double)arg1;
- (double)_dimmingViewAlpha;
- (bool)_containedInPopover;
- (void)_enableParentScrollViews;
- (void)_disableParentScrollViews;
- (void)_hideVisibleRefreshControl;
- (void)navigationControllerDidCancelShowingViewController:(id)arg1;
- (void)navigationControllerDidShowViewController:(id)arg1;
- (void)_popoverKeyboardDidHide:(id)arg1;
- (void)_popoverKeyboardDidShow:(id)arg1;
- (void)_sendDelegateDidBeginDidEndSearch;
- (void)_setTableViewVisible:(bool)arg1 inView:(id)arg2;
- (void)_hoistSearchBar;
- (bool)_showsResultsForEmptyField;
- (id)_dimmingOverlayColor;
- (void)navigationControllerWillShowViewController:(id)arg1;
- (void)_cleanUpSearchBar;
- (bool)dimTableViewOnEmptySearchString;
- (id)_createPopoverController;
- (void)_adjustTableViewContentInsetsAndOffsetsIgnoringCurrent:(bool)arg1;
- (bool)_isSearchBarInBar;
- (double)_additionalNonCollapsingHeightAboveSearchBar;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_tableViewContentInsets;
- (double)_statusBarHeight;
- (bool)_shouldAccountForStatusBarHeight;
- (bool)_searchBarInNavigationControllerComponent;
- (void)_popoverClearButtonPressed:(id)arg1;
- (id)searchResultsTitle;
- (id)searchResultsTableView;
- (void)setActive:(bool)arg1 animated:(bool)arg2;
- (id)_containingViewOfClass:(Class)arg1;
- (bool)isNavigationBarHidingEnabled;
- (id)noResultsMessage;
- (void)_configureSearchBarForTableView;
- (void)windowDidRotate:(id)arg1;
- (void)windowWillAnimateRotation:(id)arg1;
- (bool)_areSearchContentsSplitViewMaster;
- (void)_watchContainingTableViewForScrolling:(bool)arg1;
- (void)_indexBarFrameChanged:(id)arg1;
- (void)_updateTableHeaderBackgroundViewInTableView:(id)arg1 amountScrolledUnder:(double)arg2;
- (id)_containingTableView;
- (void)_destroyManagedTableView;
- (void)_configureNewSearchBar;
- (id)initWithSearchBar:(id)arg1 contentsController:(id)arg2 searchResultsTableViewStyle:(long long)arg3;
- (id)initWithSearchBar:(id)arg1 contentsController:(id)arg2;
- (void)_updateNoSearchResultsMessageVisiblity;
- (void)_managedTableViewDidScroll;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarResultsListButtonClicked:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (bool)_searchBarShouldScrollToVisible:(id)arg1;
- (void)_animateNavigationBarSearchBarAppearance:(id)arg1;
- (void)searchBar:(id)arg1 selectedScopeButtonIndexDidChange:(long long)arg2;
- (unsigned long long)navigationBarSearchFieldSizing;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)_searchBarSuperviewChanged;
- (void)_searchBarSuperviewWillChange;
- (void)_updateSearchBarMaskIfNecessary;
- (id)searchContentsController;
- (id)_topShadowView;
- (id)_dimmingViewColor;
- (id)searchBar;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (bool)displaysSearchBarInNavigationBar;
- (bool)hidNavigationBar;
- (void)_clearViewController;
- (id)_containerView;
- (void)_didScroll;
- (void)_updateBackdropMaskViewsInScrollView:(id)arg1;
- (id)navigationItem;

@end
