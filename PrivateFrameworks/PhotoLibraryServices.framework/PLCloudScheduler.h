/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSMutableDictionary, NSString, NSObject<OS_dispatch_queue>, NSMutableArray;

@interface PLCloudScheduler : NSObject <PLCloudScenarioConsumer> {
    NSObject<OS_dispatch_queue> *_backlogSync;
    int _concurrencyLevel;
    NSMutableArray *_pendingOperations;
    NSMutableDictionary *_pendingScenarios;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (unsigned long long)operationsBacklogLimit;
- (void)runNextOperation;
- (void)completeOperation:(id)arg1 withError:(id)arg2;
- (void)reporioritizeBacklogOperations;
- (void)consumeScenario:(id)arg1 withCompletionHandler:(id)arg2;
- (id)initWithConfiguration:(id)arg1;

@end
