/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, UIAlertView, ISDialog;

@interface SUDialog : NSObject <UIAlertViewDelegate> {
    UIAlertView *_alertView;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionBlock;

    ISDialog *_dialog;
}

@property(readonly) ISDialog * dialog;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)_completeWithButtonIndex:(long long)arg1;
- (id)_alertView;
- (bool)isEquivalent:(id)arg1;
- (void)showWithCompletionBlock:(id)arg1;
- (id)initWithDialog:(id)arg1;
- (id)dialog;
- (void)dealloc;
- (void)alertViewCancel:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;

@end
