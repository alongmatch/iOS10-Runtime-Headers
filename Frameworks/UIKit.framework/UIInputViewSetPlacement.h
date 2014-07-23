/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputViewSetPlacement : NSObject  {
}

@property(readonly) bool showsInputViews;
@property(readonly) bool showsKeyboard;
@property(readonly) bool isUndocked;
@property(readonly) bool isInteractive;

+ (id)placement;

- (bool)isEqual:(id)arg1;
- (bool)accessoryViewWillAppear;
- (unsigned long long)notificationsForTransitionToPlacement:(id)arg1;
- (id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;
- (id)horizontalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;
- (bool)showsKeyboard;
- (bool)isUndocked;
- (bool)inputViewWillAppear;
- (bool)showsInputViews;
- (bool)isInteractive;

@end
