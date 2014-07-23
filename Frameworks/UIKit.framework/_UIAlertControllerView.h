/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView, _UIKeyboardLayoutAlignmentView, NSLayoutConstraint, NSMutableArray, _UIDimmingKnockoutBackdropView, NSString, _UIAlertControllerCollectionViewFlowLayout, UIAlertController, UICollectionView, UILabel, _UIAlertControllerActionView;

@interface _UIAlertControllerView : UIView <UICollectionViewDataSource> {
    UIAlertController *_alertController;
    UICollectionView *_actionCollectionView;
    _UIAlertControllerCollectionViewFlowLayout *_flowLayout;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UIView *_contentViewControllerContainerView;
    _UIAlertControllerActionView *_discreteCancelActionView;
    _UIDimmingKnockoutBackdropView *_backdropView;
    UIView *_contentView;
    UIView *_foregroundView;
    UIView *_dimmingView;
    _UIKeyboardLayoutAlignmentView *_keyboardLayoutAlignmentView;
    UIView *_keyboardLayoutAlignmentAvailableSpaceView;
    long long _layoutOrientation;
    bool_inPopover;
    bool_hasDimmingView;
    bool_showsCancelAction;
    bool_cancelActionIsDiscrete;
    bool_hasBackdropView;
    bool_alignsToKeyboard;
    NSLayoutConstraint *_foregroundViewWidthConstraint;
    NSLayoutConstraint *_contentViewTopConstraint;
    NSLayoutConstraint *_contentViewBottomConstraint;
    NSLayoutConstraint *_messageLabelTopAlignmentConstraint;
    NSLayoutConstraint *_contentViewControllerViewLeftConstraint;
    NSLayoutConstraint *_contentViewControllerViewRightConstraint;
    NSLayoutConstraint *_contentViewControllerViewTopConstraint;
    NSLayoutConstraint *_contentViewControllerViewBottomConstraint;
    NSLayoutConstraint *_contentViewControllerContainerViewTopAlignmentConstraint;
    NSLayoutConstraint *_contentViewControllerContainerViewWidthConstraint;
    NSLayoutConstraint *_contentViewControllerContainerViewHeightConstraint;
    NSLayoutConstraint *_collectionViewTopAlignmentConstraint;
    NSLayoutConstraint *_collectionViewWidthConstraint;
    NSLayoutConstraint *_collectionViewHeightConstraint;
    NSLayoutConstraint *_discreteCancelActionViewTopConstraint;
    NSLayoutConstraint *_discreteCancelActionViewLeadingConstraint;
    NSLayoutConstraint *_discreteCancelActionViewWidthConstraint;
    NSLayoutConstraint *_discreteCancelActionViewHeightConstraint;
    NSLayoutConstraint *_centerXConstraint;
    NSLayoutConstraint *_centerYConstraint;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_availableSpaceAlignmentConstraint;
    NSMutableArray *_backdropViewConstraints;
    NSLayoutConstraint *_backdropViewBottomConstraint;
    NSLayoutConstraint *_backdropViewRightConstraint;
    NSMutableArray *_dimmingViewConstraints;
    NSMutableArray *_dimmingViewConstraintsForActionSheetStyle;
    NSMutableArray *_noDimmingViewConstraints;
    NSLayoutConstraint *_foregroundViewCenteringYConstraint;
    bool_hasCachedLargestActionDimension;
    struct CGSize { 
        double width; 
        double height; 
    } _largestActionDimension;
}

@property UIAlertController * alertController;
@property(readonly) UIView * _foregroundView;
@property(readonly) UIView * _dimmingView;
@property(readonly) _UIAlertControllerCollectionViewFlowLayout * _flowLayout;
@property long long layoutOrientation;
@property bool inPopover;
@property bool hasDimmingView;
@property bool showsCancelAction;
@property bool cancelActionIsDiscrete;
@property bool hasBackdropView;
@property bool alignsToKeyboard;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (void)initialize;
+ (bool)_retroactivelyRequiresConstraintBasedLayout;

- (id)message;
- (id)title;
- (id)actions;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)layoutOrientation;
- (void)dealloc;
- (bool)_actionLayoutIsVertical;
- (void)_applyKeyboardAlignmentViewsConstraints;
- (void)_reevaluateSuperviewSizingConstraints;
- (void)_updateVisualAltitude;
- (bool)_shouldTreatEmptyStringsAsNil;
- (double)_bottomLabelPixelOffset;
- (double)_messageLabelPixelOffset;
- (double)_singleLabelTopScaledValue;
- (double)_singleLabelScaledValue;
- (double)_singleLabelTopPixelOffset;
- (double)_singleLabelPixelOffset;
- (id)_singleLabelFont;
- (id)defaultAction;
- (id)_orderedActionsForCollectionView;
- (id)_actionsForCollectionView;
- (bool)_shouldHaveCancelActionInCollectionView;
- (void)_actionLayoutDirectionChanged;
- (bool)hasDimmingView;
- (void)updateDefaultAction;
- (double)_messageTopScaledValue;
- (double)_messageScaledValue;
- (double)_bottomLabelScaledValue;
- (double)_titleTopScaledValue;
- (double)_titleScaledValue;
- (bool)alignsToKeyboard;
- (double)_styleAppropriateVisualAltitude;
- (id)_messageColor;
- (id)_titleColor;
- (id)_messageFont;
- (bool)_hasAttributedMessage;
- (bool)_hasAttributedTitle;
- (bool)hasBackdropView;
- (void)_removeDiscreteCancelActionView;
- (id)_bottomMostViewToAlignDiscreteCancelActionViewTo;
- (double)_marginBetweenContentAndDiscreteCancelButton;
- (bool)_hasDiscreteCancelAction;
- (struct CGSize { double x1; double x2; })_collectionViewSizeForHorizontalLayout:(bool)arg1 itemSize:(struct CGSize { double x1; double x2; })arg2;
- (double)_layoutWidthForHorizontalLayout:(bool)arg1;
- (bool)_canLayOutActionsHorizontally;
- (bool)cancelActionIsDiscrete;
- (bool)showsCancelAction;
- (struct CGSize { double x1; double x2; })_itemSizeForHorizontalLayout:(bool)arg1;
- (bool)_wantsHorizontalCollectionViewLayout;
- (struct CGSize { double x1; double x2; })_minimumSizeForAllActions;
- (bool)hasDiscreteHorizontalCancelAction;
- (double)_idealLayoutWidth;
- (long long)_numberOfActionsForCollectionView;
- (bool)_wantsHorizontalActionSheet;
- (double)_availableWidthForHorizontalLayout:(bool)arg1;
- (double)_contrainedWidth;
- (bool)_horizontalLayoutCanUseFullWidth;
- (struct CGSize { double x1; double x2; })_sizeForLayoutWidthDetermination;
- (bool)_hasMessage;
- (bool)_hasTitle;
- (double)_labelHorizontalInsets;
- (double)_contentCornerRadius;
- (bool)_buttonsAreTopMost;
- (void)_invalidateFlowLayout;
- (void)_prepareDimmingViewConstraints;
- (void)_applyCollectionViewConstraints;
- (void)_applyContentViewControllerContainerViewConstraints;
- (void)_applyMessageConstraints;
- (void)_applyTitleConstraints;
- (void)_prepareBackdropViewConstraints;
- (void)_applyViewConstraints;
- (void)_prepareKeyboardLayoutAlignmentViews;
- (void)_prepareDimmingView;
- (void)_prepareCancelView;
- (void)_prepareActionCollectionView;
- (void)_prepareContentViewControllerContainerView;
- (void)_prepareMesssageLabel;
- (void)_prepareTitleLabel;
- (void)_prepareBackdropView;
- (void)_prepareContentView;
- (void)_prepareForegroundView;
- (void)_prepareViewsAndAddConstraints;
- (void)setShowsCancelAction:(bool)arg1;
- (void)setInPopover:(bool)arg1;
- (id)_titleFont;
- (void)_contentSizeChanged;
- (id)alertController;
- (struct CGSize { double x1; double x2; })_contentViewControllerSize;
- (id)_attributedMessage;
- (id)_attributedTitle;
- (void)_sizeOfContentViewControllerChanged;
- (void)_removeContentViewController;
- (double)_contentHorizontalInsets;
- (id)cancelAction;
- (void)_alignContentToAvailableSpaceByLayoutAttribute:(long long)arg1;
- (void)_updateLabelTextColor;
- (void)_updateLabelFontSizes;
- (void)setCancelActionIsDiscrete:(bool)arg1;
- (void)_recomputeAlignedDescriptiveLabelTextWidth;
- (void)setAlignsToKeyboard:(bool)arg1;
- (void)_propertiesChanged;
- (void)setHasBackdropView:(bool)arg1;
- (void)setHasDimmingView:(bool)arg1;
- (id)_flowLayout;
- (void)setAlertController:(id)arg1;
- (void)_actionsChanged;
- (double)_contentVerticalInsets;
- (bool)inPopover;
- (double)_idealWidth;
- (id)_dimmingView;
- (id)contentViewController;
- (void)setLayoutOrientation:(long long)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)willMoveToSuperview:(id)arg1;
- (void)didMoveToSuperview;
- (void)setTintAdjustmentMode:(long long)arg1;
- (long long)tintAdjustmentMode;
- (id)_foregroundView;
- (void)didMoveToWindow;
- (void)_UIAppearance_setInPopover:(bool)arg1;
- (void)_UIAppearance_setHasDimmingView:(bool)arg1;
- (void)_UIAppearance_setShowsCancelAction:(bool)arg1;
- (void)_UIAppearance_setHasBackdropView:(bool)arg1;
- (void)_UIAppearance_setAlignsToKeyboard:(bool)arg1;

@end
