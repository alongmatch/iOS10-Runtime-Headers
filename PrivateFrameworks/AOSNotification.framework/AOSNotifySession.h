/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/AOSNotification.framework/AOSNotification
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_queue>, NSString, NSXPCConnection;

@interface AOSNotifySession : NSObject <AOSXPCClientProtocol> {
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_xpcConnectionCreationQueue;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _fmfAppPushMsgHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _fmfAppPushTokenHandler;

}

@property(retain) NSXPCConnection * xpcConnection;
@property(retain) NSObject<OS_dispatch_queue> * xpcConnectionCreationQueue;
@property(copy) id fmfAppPushMsgHandler;
@property(copy) id fmfAppPushTokenHandler;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)copyStoreAccount;
+ (id)sharedInstance;

- (id)iCloudAccount;
- (id)newErrorForCode:(int)arg1 message:(id)arg2;
- (void)setXpcConnectionCreationQueue:(id)arg1;
- (id)xpcConnectionCreationQueue;
- (id)retrieveAllAccounts:(id*)arg1;
- (void)stopListeningOnTopic:(id)arg1;
- (void)startListeningOnTopic:(id)arg1;
- (void)willDeleteiCloudAccountWithCompletion:(id)arg1;
- (void)locationAuthorizationForShareMyLocationWithCompletion:(id)arg1;
- (void)renewFMFAccountCredentialsUsingCallback:(id)arg1;
- (void)retrieveFMFAccountUsingCallback:(id)arg1;
- (void)removeLegacyFMFAccountUsingCallback:(id)arg1;
- (void)retrieveLegacyFMFAccountUsingCallback:(id)arg1;
- (id)retrieveFMFAccount:(id*)arg1;
- (id)removeFMFAccountWithUsername:(id)arg1;
- (id)addFMFAccount:(id)arg1;
- (void)didChangeFMFAccountInfo:(id)arg1;
- (void)didExitFMFRegion:(id)arg1 atLocation:(id)arg2;
- (void)didEnterFMFRegion:(id)arg1 atLocation:(id)arg2;
- (id)fmfDeviceId;
- (id)fmipDeviceId;
- (id)currentXPCConnection;
- (oneway void)didReceiveFMFAppPushToken:(id)arg1;
- (oneway void)didReceiveFMFAppPushMessage:(id)arg1;
- (id)fmipAccount;
- (id)storeAccount;
- (void)stopListeningForFMFAppPush;
- (void)startListeningForFMFAppPushInEnvironment:(id)arg1 withMessageHandler:(id)arg2 tokenHandler:(id)arg3;
- (id)fmfAppPushTokenHandler;
- (id)fmfAppPushMsgHandler;
- (void)setFmfAppPushTokenHandler:(id)arg1;
- (void)setFmfAppPushMsgHandler:(id)arg1;
- (void)_destroyXPCConnection;
- (bool)performMigration;
- (void)setXpcConnection:(id)arg1;
- (id)xpcConnection;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
