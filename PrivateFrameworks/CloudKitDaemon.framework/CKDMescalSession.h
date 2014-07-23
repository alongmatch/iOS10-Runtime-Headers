/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDClientContext, NSOperationQueue, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_group>, NSData;

@interface CKDMescalSession : NSObject  {
    bool_isSetup;
    bool_renewing;
    bool_didCheckGoldenTicket;
    CKDClientContext *_context;
    NSObject<OS_dispatch_queue> *_opQueue;
    NSObject<OS_dispatch_group> *_renewalGroup;
    NSOperationQueue *_renewQueue;
    NSData *_goldenTicket;
}

@property(readonly) CKDClientContext * context;
@property bool isSetup;
@property bool renewing;
@property(retain) NSObject<OS_dispatch_queue> * opQueue;
@property(retain) NSObject<OS_dispatch_group> * renewalGroup;
@property(retain) NSOperationQueue * renewQueue;
@property(retain) NSData * goldenTicket;
@property bool didCheckGoldenTicket;


- (void)setDidCheckGoldenTicket:(bool)arg1;
- (bool)didCheckGoldenTicket;
- (void)setGoldenTicket:(id)arg1;
- (void)setRenewQueue:(id)arg1;
- (id)renewQueue;
- (void)setRenewalGroup:(id)arg1;
- (void)setOpQueue:(id)arg1;
- (void)_setUpWithCompletionHandler:(id)arg1;
- (id)goldenTicket;
- (id)renewalGroup;
- (void)setRenewing:(bool)arg1;
- (bool)renewing;
- (id)opQueue;
- (void)setIsSetup:(bool)arg1;
- (void)renewMescalSessionForRequest:(id)arg1 withCallback:(id)arg2;
- (void)processSignedData:(id)arg1 signature:(id)arg2 forRequest:(id)arg3 withCompletionHandler:(id)arg4;
- (void)signData:(id)arg1 forRequest:(id)arg2 withCompletionHandler:(id)arg3;
- (void)resetMescalSession;
- (void)exchangeData:(id)arg1 serverVersion:(int)arg2 withCompletionHandler:(id)arg3;
- (void)_teardown;
- (id)context;
- (id)initWithContext:(id)arg1;
- (bool)isSetup;
- (void)dealloc;
- (void).cxx_destruct;

@end
