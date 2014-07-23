/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSObject<OS_dispatch_queue>, AVWeakReference, NSObject<OS_dispatch_source>;

@interface AVTimebaseObserver : NSObject  {
    NSObject<OS_dispatch_queue> *_timerQueue;
    AVWeakReference *_weakReference;
    NSObject<OS_dispatch_source> *_timerSource;
    struct OpaqueCMTimebase { } *_timebase;
    double _lastRate;
    double _currentRate;
    bool_invalid;
}

@property(getter=_weakReference,readonly) AVWeakReference * weakReference;
@property(readonly) struct OpaqueCMTimebase { }* timebase;
@property(readonly) bool invalidated;


- (void)_finishInitialization;
- (void)_handleTimeDiscontinuity;
- (void)_resetNextFireTime;
- (struct OpaqueCMTimebase { }*)timebase;
- (id)initWithTimebase:(struct OpaqueCMTimebase { }*)arg1 queue:(id)arg2;
- (void)_effectiveRateChanged;
- (void)_stopObservingTimebaseNotifications;
- (void)_removeTimebaseFromTimerSource;
- (bool)invalidated;
- (void)_attachTimerSourceToTimebase;
- (void)_startObservingTimebaseNotifications;
- (id)_weakReference;
- (void)invalidate;
- (void)finalize;
- (void)dealloc;

@end
