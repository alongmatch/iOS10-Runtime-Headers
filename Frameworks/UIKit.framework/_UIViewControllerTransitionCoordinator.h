/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UIViewControllerTransitionContext, NSMutableArray, NSString;

@interface _UIViewControllerTransitionCoordinator : NSObject <UIViewControllerTransitionCoordinator> {
    _UIViewControllerTransitionContext *__mainContext;
    NSMutableArray *__alongsideAnimations;
    NSMutableArray *__alongsideAnimationViews;
    NSMutableArray *__alongsideCompletions;
    NSMutableArray *__interactiveChangeHandlers;
}

@property(setter=_setMainContext:) _UIViewControllerTransitionContext * _mainContext;
@property(setter=_setAlongsideAnimations:,retain) NSMutableArray * _alongsideAnimations;
@property(setter=_setAlongsideAnimationViews:,retain) NSMutableArray * _alongsideAnimationViews;
@property(setter=_setAlongsideCompletions:,retain) NSMutableArray * _alongsideCompletions;
@property(setter=_setInteractiveChangeHandlers:,retain) NSMutableArray * _interactiveChangeHandlers;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (bool)isCancelled;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })affineTransform;
- (void)dealloc;
- (void)handlerToInvokeOnInteractivityChanges:(id)arg1;
- (bool)isCompleting;
- (id)_interactiveChangeHandlers:(bool)arg1;
- (void)_setAlongsideAnimationViews:(id)arg1;
- (void)_setMainContext:(id)arg1;
- (void)_setInteractiveChangeHandlers:(id)arg1;
- (id)_interactiveChangeHandlers;
- (void)_setAlongsideCompletions:(id)arg1;
- (id)initWithMainContext:(id)arg1;
- (id)_alongsideCompletions;
- (double)completionVelocity;
- (void)_applyBlocks:(id)arg1 releaseBlocks:(id)arg2;
- (id)_alongsideCompletions:(bool)arg1;
- (id)_alongsideAnimations:(bool)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })targetTransform;
- (bool)initiallyInteractive;
- (id)_mainContext;
- (void)notifyWhenInteractionEndsUsingBlock:(id)arg1;
- (id)_alongsideAnimationViews;
- (long long)completionCurve;
- (double)transitionDuration;
- (bool)animateAlongsideTransitionInView:(id)arg1 animation:(id)arg2 completion:(id)arg3;
- (long long)presentationStyle;
- (bool)animateAlongsideTransition:(id)arg1 completion:(id)arg2;
- (id)_alongsideAnimations;
- (void)_setAlongsideAnimations:(id)arg1;
- (bool)isAnimated;
- (bool)isRotating;
- (double)percentComplete;
- (bool)isInteractive;
- (id)viewForKey:(id)arg1;
- (id)viewControllerForKey:(id)arg1;
- (id)containerView;

@end
