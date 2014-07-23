/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSOperationQueue, MSSearch, ACAccount;

@interface AAAutoAccountVerifier : NSObject <MSSearchDelegate> {
    NSOperationQueue *_requesterQueue;
    MSSearch *_search;
    ACAccount *_account;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _handler;

    int _attempts;
    bool_canceled;
}

@property(retain) ACAccount * account;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)verifyWithHandler:(id)arg1;
- (void)sendVerificationEmail;
- (bool)search:(id)arg1 didFindResults:(id)arg2;
- (void)search:(id)arg1 didFinishWithError:(id)arg2;
- (void)_validateToken:(id)arg1;
- (void)_verify;
- (void)_resendVerificationEmailForAccount:(id)arg1 completion:(id)arg2;
- (id)initWithAccount:(id)arg1;
- (id)account;
- (void)setAccount:(id)arg1;
- (id)init;
- (void)cancel;
- (void).cxx_destruct;

@end
