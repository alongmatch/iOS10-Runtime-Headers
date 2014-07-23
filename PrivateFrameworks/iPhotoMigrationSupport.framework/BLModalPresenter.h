/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/iPhotoMigrationSupport.framework/iPhotoMigrationSupport
 */

@class NSString, NSMutableArray, BLModalPresenterRootViewController;

@interface BLModalPresenter : UIWindow <UIKeyInput> {
    BLModalPresenterRootViewController *_rootViewController;
    NSMutableArray *_controllers;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _keyboard;
    long long _lockCount;
    bool_keyboardVisible;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property long long autocapitalizationType;
@property long long autocorrectionType;
@property long long spellCheckingType;
@property long long keyboardType;
@property long long keyboardAppearance;
@property long long returnKeyType;
@property bool enablesReturnKeyAutomatically;
@property(getter=isSecureTextEntry) bool secureTextEntry;

+ (id)presenter;

- (void)hideController:(id)arg1 animated:(bool)arg2 withCompletion:(id)arg3;
- (void)unlockKeyboard;
- (void)lockKeyboard;
- (void)configureForOffscreen:(id)arg1 orientation:(long long)arg2;
- (void)showController:(id)arg1 withCompletionBlock:(id)arg2;
- (struct CGSize { double x1; double x2; })formSheetSizeForController:(id)arg1 withOrientation:(long long)arg2;
- (void)layoutForOrientation:(long long)arg1;
- (void)configureForOncreen:(id)arg1 orientation:(long long)arg2;
- (void)orientationDidChange:(id)arg1;
- (void)orientationWillChange:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)showController:(id)arg1;
- (void)insertText:(id)arg1;
- (id)hidden;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (bool)keyboardVisible;
- (void)keyboardDidShow:(id)arg1;
- (void)deleteBackward;
- (bool)hasText;
- (bool)canBecomeFirstResponder;

@end
