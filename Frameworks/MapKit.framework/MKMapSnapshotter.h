/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_queue>, VKMapSnapshotCreator, MKMapSnapshotOptions;

@interface MKMapSnapshotter : NSObject  {
    MKMapSnapshotOptions *_options;
    BOOL _loading;
    NSObject<OS_dispatch_queue> *_callbackQueue;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

    VKMapSnapshotCreator *_snapshotCreator;
}

@property(getter=isLoading,readonly) BOOL loading;


- (void)_succeedWithSnapshot:(id)arg1;
- (BOOL)_checkIfThrottled;
- (void)startWithQueue:(id)arg1 completionHandler:(id)arg2;
- (void)startWithCompletionHandler:(id)arg1;
- (void)_failWithError:(id)arg1;
- (BOOL)isLoading;
- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)_cancel;
- (id)initWithOptions:(id)arg1;

@end