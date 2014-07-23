/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UILongPressGestureRecognizer, NSIndexPath, _UIActivityGroupActivityCell;

@interface _UIActivityGroupViewFlowLayout : UICollectionViewFlowLayout  {
    UILongPressGestureRecognizer *_editingGestureRecognizer;
    NSIndexPath *_indexPathForDraggedItem;
    _UIActivityGroupActivityCell *_draggingView;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    } _draggingOffset;
}

@property(retain) UILongPressGestureRecognizer * editingGestureRecognizer;
@property(copy) NSIndexPath * indexPathForDraggedItem;
@property struct UIOffset { double x1; double x2; } draggingOffset;
@property(retain) _UIActivityGroupActivityCell * draggingView;


- (void)dealloc;
- (struct UIOffset { double x1; double x2; })draggingOffset;
- (void)invalidateGroupViewLayoutAnimated:(bool)arg1;
- (id)draggingViewForItemAtIndexPath:(id)arg1;
- (void)cancelDraggingForGesture:(id)arg1;
- (bool)shouldCancelDraggingForGesture:(id)arg1;
- (void)updateDraggingViewForGesture:(id)arg1;
- (void)beginDraggingForGesture:(id)arg1;
- (void)setDraggingOffset:(struct UIOffset { double x1; double x2; })arg1;
- (id)indexPathForDraggedItem;
- (void)adjustLayoutAttributesForDraggingIfNeeded:(id)arg1;
- (void)adjustLayoutAttributesIfNeeded:(id)arg1;
- (void)setIndexPathForDraggedItem:(id)arg1;
- (void)setDraggingView:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)draggingView;
- (id)indexPathForItemRecognizedByGesture:(id)arg1;
- (id)editingGestureRecognizer;
- (void)setEditingGestureRecognizer:(id)arg1;
- (void)handleEditingGesture:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;

@end
