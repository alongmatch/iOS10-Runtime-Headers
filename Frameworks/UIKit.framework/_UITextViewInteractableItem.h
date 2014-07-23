/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITextView, NSArray, NSDictionary, NSString, _UIRotatingAlertController;

@interface _UITextViewInteractableItem : NSObject <_UIRotatingAlertControllerDelegate> {
    _UIRotatingAlertController *_linkInteractionAlertController;
    UITextView *_textView;
    NSArray *_actions;
    NSDictionary *_defaultAction;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _range;
}

@property struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property UITextView * textView;
@property(readonly) NSString * localizedTitle;
@property(readonly) NSArray * actions;
@property(readonly) NSDictionary * defaultAction;


- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (id)actions;
- (id)textView;
- (id)localizedTitle;
- (void)_handleActionAndFinish:(id)arg1;
- (void)_showActionSheet;
- (bool)allowInteraction;
- (void)handleLongPress;
- (bool)allowHighlight;
- (id)defaultAction;
- (id)_actionSheet;
- (void)handleTap;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })presentationRectInHostViewForSheet:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialPresentationRectInHostViewForSheet:(id)arg1;
- (id)hostViewForSheet:(id)arg1;
- (void)_cleanupSheet;
- (void)setTextView:(id)arg1;

@end
