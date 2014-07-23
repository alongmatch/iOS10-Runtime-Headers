/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class NSString, MSAlbumSharingDaemon, MSBackoffManager, NSObject<OS_dispatch_queue>, MSASPersonModel, MMCSEngine;

@interface MSASAssetTransferer : NSObject <MMCSEngineDelegate> {
    bool_hasShutDown;
    int _maxBatchCount;
    int _maxRetryCount;
    id _delegate;
    NSString *_personID;
    MMCSEngine *_engine;
    double _maxMMCSTokenValidityTimeInterval;
    MSAlbumSharingDaemon *_daemon;
    MSASPersonModel *_model;
    MSBackoffManager *_backoffManager;
    NSString *_focusAlbumGUID;
    NSString *_focusAssetCollectionGUID;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
}

@property id delegate;
@property(copy) NSString * personID;
@property(readonly) MMCSEngine * engine;
@property double maxMMCSTokenValidityTimeInterval;
@property MSAlbumSharingDaemon * daemon;
@property MSASPersonModel * model;
@property MSBackoffManager * backoffManager;
@property(copy) NSString * focusAlbumGUID;
@property(copy) NSString * focusAssetCollectionGUID;
@property int maxBatchCount;
@property int maxRetryCount;
@property(retain) NSObject<OS_dispatch_queue> * eventQueue;
@property(retain) NSObject<OS_dispatch_queue> * workQueue;
@property bool hasShutDown;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)shutDownCompletionBlock:(id)arg1;
- (double)maxMMCSTokenValidityTimeInterval;
- (void)_rereadPerformanceLoggingSetting;
- (id)_MMCSTokenTooOldError;
- (double)workQueueMaxMMCSTokenValidityTimeInterval;
- (id)_missingMMCSTokenError;
- (void)workQueueCancel;
- (id)_pathForPersonID:(id)arg1;
- (int)maxRetryCount;
- (id)backoffManager;
- (unsigned long long)workQueueNextItemID;
- (id)_missingURLError;
- (int)maxBatchCount;
- (void)workQueueShutDownCompletionBlock:(id)arg1;
- (void)workQueueStop;
- (void)_sendDidIdleNotification;
- (void)MMCSEngine:(id)arg1 logMessage:(id)arg2 logLevel:(int)arg3;
- (bool)MMCSEngine:(id)arg1 shouldLogAtLogLevel:(int)arg2;
- (void)MMCSEngine:(id)arg1 didCreateRequestorContext:(id)arg2 forAssets:(id)arg3;
- (void)didFinishPuttingAllAssets;
- (void)didFinishGettingAllAssets;
- (void)MMCSEngine:(id)arg1 didFinishPuttingAsset:(id)arg2 putReceipt:(id)arg3 error:(id)arg4;
- (void)MMCSEngine:(id)arg1 didMakePutProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4;
- (void)MMCSEngine:(id)arg1 didFinishGettingAsset:(id)arg2 path:(id)arg3 error:(id)arg4;
- (void)MMCSEngine:(id)arg1 didMakeGetProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4;
- (void)MMCSEngine:(id)arg1 logPerformanceMetrics:(id)arg2;
- (id)focusAlbumGUID;
- (bool)hasShutDown;
- (id)_canceledError;
- (void)stopCompletionBlock:(id)arg1;
- (void)setHasShutDown:(bool)arg1;
- (void)setMaxMMCSTokenValidityTimeInterval:(double)arg1;
- (void)setMaxRetryCount:(int)arg1;
- (void)setMaxBatchCount:(int)arg1;
- (void)workQueueRetryOutstandingActivities;
- (void)setBackoffManager:(id)arg1;
- (id)initWithPersonID:(id)arg1 eventQueue:(id)arg2;
- (id)focusAssetCollectionGUID;
- (void)cancelCompletionBlock:(id)arg1;
- (void)setFocusAssetCollectionGUID:(id)arg1;
- (void)setFocusAlbumGUID:(id)arg1;
- (id)initWithPersonID:(id)arg1;
- (void)retryOutstandingActivities;
- (void)setDaemon:(id)arg1;
- (id)personID;
- (void)setPersonID:(id)arg1;
- (id)daemon;
- (id)engine;
- (id)model;
- (void)setEventQueue:(id)arg1;
- (id)eventQueue;
- (void)setDelegate:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)delegate;
- (id)workQueue;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setModel:(id)arg1;

@end
