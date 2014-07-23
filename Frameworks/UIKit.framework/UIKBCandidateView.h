/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIKeyboardCandidateGridCollectionViewController, NSString, UIView, TIKeyboardCandidateResultSet, UIKeyboardCandidateSortControl;

@interface UIKBCandidateView : UIKBKeyView <UIKeyboardCandidateGridCollectionViewControllerDelegate> {
    UIView *_clippingView;
    UIView *_topBorder;
    unsigned long long _selectedSortIndex;
    UIKeyboardCandidateGridCollectionViewController *_collectionViewController;
    UIKeyboardCandidateSortControl *_scrollViewSortControl;
    struct { 
        unsigned int idiom : 6; 
        unsigned int landscape : 1; 
        unsigned int split : 1; 
        unsigned int appearance : 8; 
        unsigned int rendering : 16; 
    } _visualStyling;
}

@property(readonly) TIKeyboardCandidateResultSet * candidateResultSet;
@property unsigned long long selectedSortIndex;
@property(retain) UIKeyboardCandidateGridCollectionViewController * collectionViewController;
@property(retain) UIKeyboardCandidateSortControl * scrollViewSortControl;
@property struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; } visualStyling;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (unsigned long long)currentIndex;
- (void)addSubview:(id)arg1;
- (id)candidateResultSet;
- (bool)hasCandidates;
- (id)currentCandidate;
- (void)displayLayer:(id)arg1;
- (void)dealloc;
- (id)groupedCandidatesFromCandidateSet:(id)arg1 forSortIndex:(unsigned long long)arg2;
- (void)setScrollViewSortControl:(id)arg1;
- (void)sortSelectionBarAction:(id)arg1;
- (void)setSelectedSortIndex:(unsigned long long)arg1;
- (void)setCollectionViewController:(id)arg1;
- (void)updateCollectionViewController:(bool)arg1;
- (id)collectionViewController;
- (id)scrollViewSortControl;
- (void)clearCollectionViewController;
- (void)updateCollectionViewController;
- (bool)isTenKey;
- (unsigned long long)gridCollectionViewSelectedSortMethodIndex:(id)arg1;
- (id)headerViewForCandidateSet:(id)arg1;
- (unsigned long long)gridCollectionViewNumberOfColumns:(id)arg1;
- (id)candidateList;
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 keyplane:(id)arg2 key:(id)arg3;
- (void)setRenderConfig:(id)arg1;
- (struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })visualStyling;
- (void)setVisualStyling:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })arg1;
- (unsigned long long)selectedSortIndex;
- (id)keyboardBehaviors;
- (void)candidateAcceptedAtIndex:(unsigned long long)arg1;
- (void)showPreviousRow;
- (void)showNextRow;
- (void)showPreviousPage;
- (void)showNextPage;
- (void)showPreviousCandidate;
- (bool)showCandidate:(id)arg1;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (bool)isHiddenCandidatesList;
- (bool)isExtendedList;
- (id)statisticsIdentifier;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 maxX:(double)arg4 layout:(bool)arg5;
- (void)showNextCandidate;
- (void)showCandidateAtIndex:(unsigned long long)arg1;

@end
