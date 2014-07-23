/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class UIView, <MFDragDestination>, NSTimer, NSString, NSMutableDictionary, UIWindow, <MFDraggableItem>, NSMutableArray, MFGobblerGestureRecognizer, UIGestureRecognizer;

@interface MFDragManager : NSObject <UIGestureRecognizerDelegate> {
    NSMutableArray *_dragContextValues;
    NSMutableArray *_dragDestinations;
    NSMutableArray *_dragSources;
    NSMutableDictionary *_gestureRecognizersForSource;
    NSMutableDictionary *_sourceForGestureRecognizer;
    <MFDraggableItem> *_draggedItem;
    UIView *_draggedItemView;
    <MFDragDestination> *_currentDestination;
    UIGestureRecognizer *_currentGestureBeingProcessed;
    UIWindow *_dragWindow;
    MFGobblerGestureRecognizer *_gobblerGestureRecognizer;
    NSTimer *_scrollTimer;
    struct CGPoint { 
        double x; 
        double y; 
    } _offsetCenterOfDraggedView;
    struct CGPoint { 
        double x; 
        double y; 
    } _previousGestureLocation;
    double _timeOfLastBigUpdate;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _draggedItemOriginalFrame;
    bool_dragWasSuccessful;
    bool_scrollingForDrag;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)sharedInstance;

- (void)cancelCurrentDragOperation;
- (void)removeDragSource:(id)arg1;
- (void)addDragSource:(id)arg1;
- (void)removeDragDestination:(id)arg1;
- (void)addDragDestination:(id)arg1;
- (void)_scrollViewIfNecessary;
- (void)_cleanUpAfterDragCompleted;
- (void)_processGestureUpdate;
- (void)enumerateDragContextsUsingBlock:(id)arg1;
- (void)_handleLongPress:(id)arg1;
- (void)removeDragContext:(id)arg1;
- (void)addDragContext:(id)arg1;
- (id)init;
- (void)dealloc;
- (bool)_gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;

@end
