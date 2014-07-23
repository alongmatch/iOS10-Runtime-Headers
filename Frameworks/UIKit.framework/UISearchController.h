/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView, NSString, <UISearchControllerDelegate>, _UISearchControllerDidScrollDelegate, UISearchBar, <UIViewControllerAnimatedTransitioning>, <UISearchResultsUpdating>, UIViewController;

@interface UISearchController : UIViewController <UIViewControllerPresenting, _UIScrollNotification, NSCoding, UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning> {
    UISearchBar *_searchBar;
    int _barPresentationStyle;
    <UIViewControllerAnimatedTransitioning> *_animator;
    id _windowWillAnimateToken;
    _UISearchControllerDidScrollDelegate *_didScrollDelegate;
    struct { 
        unsigned int searchBarWasTableHeaderView : 1; 
    } _controllerFlags;
    bool_dimsBackgroundDuringPresentation;
    bool_hidesNavigationBarDuringPresentation;
    bool__showResultsForEmptySearch;
    UIView *_resultsControllerViewContainer;
    <UISearchResultsUpdating> *_searchResultsUpdater;
    <UISearchControllerDelegate> *_delegate;
    UIViewController *_searchResultsController;
    long long __previousSearchBarPosition;
    double __resultsContentScrollViewPresentationOffset;
}

@property <UISearchResultsUpdating> * searchResultsUpdater;
@property(getter=isActive) bool active;
@property <UISearchControllerDelegate> * delegate;
@property bool dimsBackgroundDuringPresentation;
@property bool hidesNavigationBarDuringPresentation;
@property(retain,readonly) UIViewController * searchResultsController;
@property(retain,readonly) UISearchBar * searchBar;
@property(setter=_setShowResultsForEmptySearch:) bool _showResultsForEmptySearch;
@property(readonly) int _barPresentationStyle;
@property long long _previousSearchBarPosition;
@property(retain) UIView * _resultsControllerViewContainer;
@property double _resultsContentScrollViewPresentationOffset;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (bool)_shouldForwardViewWillTransitionToSize;

- (bool)isActive;
- (void)_commonInit;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (void)setActive:(bool)arg1;
- (void)_setShowResultsForEmptySearch:(bool)arg1;
- (void)setHidesNavigationBarDuringPresentation:(bool)arg1;
- (void)setDimsBackgroundDuringPresentation:(bool)arg1;
- (void)setSearchResultsUpdater:(id)arg1;
- (void)set_resultsControllerViewContainer:(id)arg1;
- (id)initWithSearchResultsController:(id)arg1;
- (void)_navigationControllerWillShowViewController:(id)arg1;
- (void)_endWatchingPresentingController;
- (void)_beginWatchingPresentingController;
- (void)_updateSearchResultsPositionWithDelta:(struct CGSize { double x1; double x2; })arg1;
- (void)_updateSearchResultsContentScrollViewWithDelta:(struct CGSize { double x1; double x2; })arg1;
- (id)_animatorForBarPresentationStyle:(int)arg1 dismissing:(bool)arg2;
- (bool)_allowFormSheetStylePresentation;
- (void)_didDismissSearchController;
- (void)_willDismissSearchController;
- (void)_didPresentFromViewController:(id)arg1;
- (void)_willPresentFromViewController:(id)arg1;
- (void)_sizeSearchViewToPresentingViewController:(id)arg1;
- (id)_locatePresentingViewController;
- (void)_watchScrollView:(id)arg1 forScrolling:(bool)arg2;
- (id)searchResultsUpdater;
- (void)_updateVisibilityOfSearchResultsForSearchBar:(id)arg1;
- (void)_performAutomaticPresentation;
- (void)_resizeResultsControllerWithDelta:(struct CGSize { double x1; double x2; })arg1;
- (id)_createAnimationCoordinator;
- (void)_adjustSearchBarSizeForOrientation:(long long)arg1;
- (void)_connectSearchBar:(id)arg1;
- (void)_updateSearchResultsControllerWithDelta:(struct CGSize { double x1; double x2; })arg1;
- (long long)_previousSearchBarPosition;
- (id)_resultsControllerViewContainer;
- (double)_resultsContentScrollViewPresentationOffset;
- (void)set_previousSearchBarPosition:(long long)arg1;
- (id)_searchPresentationController;
- (void)_dismissPresentation:(bool)arg1;
- (void)set_resultsContentScrollViewPresentationOffset:(double)arg1;
- (bool)_resultsControllerWillLayoutVisibleUnderContainerView;
- (void)_updateTableHeaderBackgroundViewInTableView:(id)arg1 amountScrolledUnder:(double)arg2;
- (void)_searchBarSearchButtonClicked:(id)arg1;
- (void)_searchBarTextDidBeginEditing:(id)arg1;
- (void)_searchBarCancelButtonClicked:(id)arg1;
- (void)_searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)_searchBarSuperviewChanged;
- (void)_updateSearchBarMaskIfNecessary;
- (id)searchResultsController;
- (bool)hidesNavigationBarDuringPresentation;
- (int)_barPresentationStyle;
- (bool)_showResultsForEmptySearch;
- (bool)dimsBackgroundDuringPresentation;
- (id)searchBar;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (bool)_requiresCustomPresentationController;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)setModalPresentationStyle:(long long)arg1;
- (void)loadView;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)_presentingViewControllerWillChange:(id)arg1;
- (void)_presentingViewControllerDidChange:(id)arg1;
- (void)_didScroll;
- (void)_updateBackdropMaskViewsInScrollView:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

@end
