/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIDimmingView, UIView, _UIPopoverView, <UIPopoverPresentationControllerDelegate>, NSArray, NSString, UIPanGestureRecognizer, UIViewController, _UIPopoverLayoutInfo, UIBarButtonItem, UIColor;

@interface UIPopoverPresentationController : UIPresentationController <UIDimmingViewDelegate, UIGestureRecognizerDelegatePrivate> {
    UIViewController *_contentViewController;
    UIViewController *_splitParentController;
    _UIPopoverView *_popoverView;
    UIDimmingView *_dimmingView;
    UIView *_layoutConstraintView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _targetRectInEmbeddingView;
    UIBarButtonItem *_targetBarButtonItem;
    unsigned long long _currentArrowDirection;
    long long _popoverBackgroundStyle;
    UIColor *_backgroundColor;
    _UIPopoverLayoutInfo *_preferredLayoutInfo;
    Class _popoverBackgroundViewClass;
    struct CGSize { 
        double width; 
        double height; 
    } _popoverContentSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _targetRectInContainerView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _embeddedTargetRect;
    long long _popoverControllerStyle;
    bool_ignoresKeyboardNotifications;
    unsigned int draggingChildScrollViewCount;
    id _target;
    SEL _didEndSelector;
    UIViewController *_modalPresentationFromViewController;
    UIViewController *_modalPresentationToViewController;
    unsigned long long _toViewAutoResizingMask;
    UIViewController *_slidingViewController;
    bool_isLayoutDisabled;
    bool_useSourceViewBoundsAsSourceRect;
    UIView *_presentingView;
    unsigned long long _presentationEdge;
    long long _presentationDirection;
    int _presentationState;
    bool_didPresentInActiveSequence;
    unsigned long long _slideTransitionCount;
    UIPanGestureRecognizer *_vendedGestureRecognizer;
    UIPanGestureRecognizer *_dimmingViewGestureRecognizer;
    struct { 
        unsigned int isPresentingModalViewController : 1; 
        unsigned int isPresentingActionSheet : 1; 
        unsigned int wasIgnoringDimmingViewTouchesBeforeScrolling : 1; 
        unsigned int isInTextEffectsWindow : 1; 
        unsigned int isEmbeddingInView : 1; 
        unsigned int embeddedPresentationBounces : 1; 
    } _popoverControllerFlags;
    bool_isDismissingBecauseDimmingViewTapped;
    bool_allowResizePastTargetRect;
    bool_dismissesOnRotation;
    bool_showsTargetRect;
    bool_showsOrientationMarker;
    bool_showsPresentationArea;
    bool_retainsSelfWhilePresented;
    bool__centersPopoverIfSourceViewNotSet;
    bool__shouldHideArrow;
    unsigned long long _permittedArrowDirections;
    UIView *_sourceView;
    UIBarButtonItem *_barButtonItem;
    unsigned long long _popoverArrowDirection;
    double __dimmingViewTopEdgeInset;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _popoverLayoutMargins;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _sourceRect;
}

@property <UIPopoverPresentationControllerDelegate> * delegate;
@property unsigned long long permittedArrowDirections;
@property(retain) UIView * sourceView;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceRect;
@property(retain) UIBarButtonItem * barButtonItem;
@property struct CGSize { double x1; double x2; } popoverContentSize;
@property(readonly) unsigned long long arrowDirection;
@property(copy) NSArray * passthroughViews;
@property(copy) UIColor * backgroundColor;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } popoverLayoutMargins;
@property(retain) Class popoverBackgroundViewClass;
@property unsigned long long popoverArrowDirection;
@property(getter=_centersPopoverIfSourceViewNotSet,setter=_setCentersPopoverIfSourceViewNotSet:) bool _centersPopoverIfSourceViewNotSet;
@property(retain) UIDimmingView * dimmingView;
@property bool allowResizePastTargetRect;
@property bool dismissesOnRotation;
@property(retain) _UIPopoverLayoutInfo * preferredLayoutInfo;
@property(getter=_presentingView,setter=_setPresentingView:) UIView * presentingView;
@property(getter=_presentationEdge,setter=_setPresentationEdge:) unsigned long long presentationEdge;
@property(setter=_setIgnoresKeyboardNotifications:) bool _ignoresKeyboardNotifications;
@property bool showsTargetRect;
@property bool showsOrientationMarker;
@property bool showsPresentationArea;
@property(getter=_retainsSelfWhilePresented,setter=_setRetainsSelfWhilePresented:) bool retainsSelfWhilePresented;
@property(getter=_shouldHideArrow,setter=_setShouldHideArrow:) bool _shouldHideArrow;
@property(setter=_setDimmingViewTopEdgeInset:) double _dimmingViewTopEdgeInset;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (bool)_alwaysAllowPopoverPresentations;
+ (bool)_forceAttemptsToAvoidKeyboard;
+ (Class)_popoverViewClass;
+ (bool)_showTargetRectPref;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_defaultPopoverLayoutMarginsForPopoverControllerStyle:(long long)arg1 andContentViewController:(id)arg2;
+ (void)_setAlwaysAllowPopoverPresentations:(bool)arg1;

- (void)setBackgroundColor:(id)arg1;
- (id)backgroundColor;
- (id)init;
- (void)dealloc;
- (void)_setShouldHideArrow:(bool)arg1;
- (void)_setCentersPopoverIfSourceViewNotSet:(bool)arg1;
- (id)barButtonItem;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceRect;
- (long long)_defaultPresentationStyleForCompactWidth;
- (bool)_shouldHideArrow;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sourceRect;
- (id)_sourceView;
- (bool)_centersPopoverIfSourceViewNotSet;
- (id)_popoverHostingWindow;
- (id)sourceView;
- (void)setPopoverArrowDirection:(unsigned long long)arg1;
- (unsigned long long)_presentationEdge;
- (id)_presentingView;
- (id)preferredLayoutInfo;
- (bool)_retainsSelfWhilePresented;
- (void)setShowsPresentationArea:(bool)arg1;
- (bool)showsPresentationArea;
- (void)setShowsOrientationMarker:(bool)arg1;
- (bool)showsOrientationMarker;
- (void)setShowsTargetRect:(bool)arg1;
- (bool)showsTargetRect;
- (void)setDismissesOnRotation:(bool)arg1;
- (bool)dismissesOnRotation;
- (bool)allowResizePastTargetRect;
- (void)setDimmingView:(id)arg1;
- (void)_setIgnoresKeyboardNotifications:(bool)arg1;
- (bool)_ignoresKeyboardNotifications;
- (void)_stopWatchingForNavigationControllerNotifications:(id)arg1;
- (void)_startWatchingForNavigationControllerNotifications:(id)arg1;
- (void)_setContentViewController:(id)arg1 backgroundStyle:(long long)arg2 animated:(bool)arg3;
- (unsigned long long)popoverArrowDirection;
- (void)setPopoverContentSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })_currentPopoverContentSize;
- (void)_stopWatchingForScrollViewNotifications;
- (void)_stopWatchingForKeyboardNotifications;
- (void)_scrollViewDidEndDragging:(id)arg1;
- (void)_scrollViewWillBeginDragging:(id)arg1;
- (void)_invalidateLayoutInfo;
- (void)_keyboardStateChanged:(id)arg1;
- (void)_moveAwayFromTheKeyboard:(id)arg1;
- (bool)_attemptsToAvoidKeyboard;
- (double)_dismissalAnimationDuration;
- (void)_stopWatchingForNotifications;
- (void)_setPopoverView:(id)arg1;
- (void)_setSplitParentController:(id)arg1;
- (void)_commonPresentPopoverFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2 permittedArrowDirections:(unsigned long long)arg3 animated:(bool)arg4;
- (struct CGSize { double x1; double x2; })popoverContentSize;
- (Class)popoverBackgroundViewClass;
- (void)_startWatchingForScrollViewNotifications;
- (bool)isPresentingOrDismissing;
- (struct CGPoint { double x1; double x2; })_centerPointForScale:(double)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 anchor:(struct CGPoint { double x1; double x2; })arg3;
- (Class)_defaultChromeViewClass;
- (void)_resetSlideTransitionCount;
- (void)_postludeForDismissal;
- (void)_setPresentationEdge:(unsigned long long)arg1;
- (void)_setPresentingView:(id)arg1;
- (int)_presentationState;
- (id)_completionBlockForDismissalWhenNotifyingDelegate:(bool)arg1;
- (void)_setPresentationState:(int)arg1;
- (void)_incrementSlideTransitionCount:(bool)arg1;
- (id)_layoutInfoForCurrentKeyboardStateAndHostingWindow:(id)arg1;
- (void)_startWatchingForKeyboardNotificationsIfNecessary;
- (id)_layoutInfoFromLayoutInfo:(id)arg1 forCurrentKeyboardStateAndHostingWindow:(id)arg2;
- (Class)_popoverLayoutInfoForChromeClass:(Class)arg1;
- (void)setPopoverLayoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })popoverLayoutMargins;
- (void)setPopoverFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(bool)arg2;
- (bool)_isPresenting;
- (void)setPreferredLayoutInfo:(id)arg1;
- (double)_presentationAnimationDuration;
- (id)_layoutInfoForCurrentKeyboardState;
- (void)setAllowResizePastTargetRect:(bool)arg1;
- (void)_setContentViewController:(id)arg1 animated:(bool)arg2;
- (void)_transitionFromViewController:(id)arg1 toViewController:(id)arg2 animated:(bool)arg3;
- (void)_performHierarchyCheckOnViewController:(id)arg1;
- (void)_setDimmingViewTopEdgeInset:(double)arg1;
- (double)_dimmingViewTopEdgeInset;
- (void)_setRetainsSelfWhilePresented:(bool)arg1;
- (void)_setPopoverBackgroundStyle:(long long)arg1;
- (unsigned long long)_slideTransitionCount;
- (void)setPopoverBackgroundViewClass:(Class)arg1;
- (void)_setGesturesEnabled:(bool)arg1;
- (void)_setManagingSplitViewController:(id)arg1;
- (unsigned long long)arrowDirection;
- (void)dimmingViewWasTapped:(id)arg1;
- (void)_dismissPopoverAnimated:(bool)arg1 stateOnly:(bool)arg2 notifyDelegate:(bool)arg3;
- (id)dimmingView;
- (void)setPassthroughViews:(id)arg1;
- (id)passthroughViews;
- (void)setPermittedArrowDirections:(unsigned long long)arg1;
- (unsigned long long)permittedArrowDirections;
- (void)setBarButtonItem:(id)arg1;
- (void)setSourceView:(id)arg1;
- (void)setSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_newViewControllerWasPushed:(id)arg1;
- (void)_newViewControllerWillBePushed:(id)arg1;
- (void)_adjustPopoverForNewContentSizeFromViewController:(id)arg1 allowShrink:(bool)arg2;
- (id)_splitParentController;
- (id)_dimmingView;
- (id)_managingSplitViewController;
- (bool)_isShimmingPopoverControllerPresentation;
- (bool)isPopoverVisible;
- (bool)_manuallyHandlesContentViewControllerAppearanceCalls;
- (bool)_popoverBackgroundViewWantsDefaultContentAppearance;
- (id)popoverView;
- (long long)_popoverBackgroundStyle;
- (void)_containedViewControllerModalStateChanged;
- (void)setPopoverContentSize:(struct CGSize { double x1; double x2; })arg1 animated:(bool)arg2;
- (bool)_embedsInView;
- (id)_preferredAnimationControllerForDismissal;
- (id)_preferredAnimationControllerForPresentation;
- (bool)_forcesPreferredAnimationControllers;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_baseContentInsets;
- (bool)_shouldKeepCurrentFirstResponder;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (long long)adaptivePresentationStyle;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)containerViewWillLayoutSubviews;
- (void)_transitionToWillBegin;
- (void)_transitionFromWillBegin;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionWillBegin;
- (void)_transitionFromDidEnd;
- (void)_transitionToDidEnd;
- (void)dismissalTransitionDidEnd:(bool)arg1;
- (void)presentationTransitionDidEnd:(bool)arg1;
- (id)presentedView;
- (bool)_isDismissing;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (bool)_shouldDisableInteractionDuringTransitions;
- (id)_presentationView;
- (bool)shouldPresentInFullscreen;
- (bool)shouldRemovePresentersView;
- (long long)_popoverControllerStyle;
- (bool)_presentationPotentiallyUnderlapsStatusBar;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfPresentedViewInContainerView;

@end
