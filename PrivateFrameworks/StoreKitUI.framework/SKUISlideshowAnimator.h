/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIImageView, NSString;

@interface SKUISlideshowAnimator : NSObject <UIViewControllerAnimatorTransitioning> {
    UIImageView *_imageView;
}

@property(retain) UIImageView * imageView;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void).cxx_destruct;
- (void)setImageView:(id)arg1;
- (id)imageView;
- (void)animationEnded:(bool)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

@end
