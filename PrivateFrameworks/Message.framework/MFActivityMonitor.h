/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFMailboxUid, NSThread, NSString, MFError, MFInvocationQueue, NSMutableSet;

@interface MFActivityMonitor : MFPriorityDesignator  {
    NSThread *_runningThread;
    NSString *_taskName;
    NSString *_displayName;
    NSString *_statusMessage;
    NSString *_descriptionString;
    MFInvocationQueue *_ourQueue;
    double _percentDone;
    unsigned int _key : 13;
    unsigned int _canCancel : 1;
    unsigned int _shouldCancel : 1;
    unsigned int _isActive : 1;
    unsigned int _changeCount : 8;
    id _delegate;
    id _target;
    MFError *_error;
    unsigned long long _expectedLength;
    unsigned long long _maxCount;
    unsigned long long _currentCount;
    double _currentItemPercentDone;
    unsigned int _supportsPerItemProgress : 1;
    MFMailboxUid *_mailbox;
    double _lastTime;
    double _startTime;
    unsigned long long _gotNewMessagesState;
    unsigned long long _bytesRead;
    unsigned long long _bytesWritten;
    NSMutableSet *_reasons;
}

@property(retain) MFMailboxUid * mailbox;

+ (void)destroyMonitor;
+ (id)currentMonitor;

- (unsigned long long)bytesRead;
- (void)setCurrentCount:(unsigned long long)arg1;
- (unsigned long long)gotNewMessagesState;
- (void)relinquishExclusiveAccessKey:(int)arg1;
- (int)acquireExclusiveAccessKey;
- (id)taskName;
- (id)statusMessage;
- (void)setInvocationQueue:(id)arg1;
- (id)activityTargets;
- (void)addActivityTargets:(id)arg1;
- (id)activityTarget;
- (void)setActivityTarget:(id)arg1;
- (void)setTaskName:(id)arg1;
- (void)setStatusMessage:(id)arg1;
- (id)reasons;
- (bool)hasReason:(id)arg1;
- (void)setPercentDoneOfCurrentItem:(double)arg1;
- (void)notifyConnectionEstablished;
- (void)finishedActivity:(id)arg1;
- (void)startActivity;
- (void)setStatusMessage:(id)arg1 withKey:(int)arg2;
- (void)_didChange;
- (void)cancelMessage;
- (void)setPrimaryTarget:(id)arg1;
- (id)primaryTarget;
- (void)removeActivityTarget:(id)arg1;
- (bool)_lockedAddActivityTarget:(id)arg1;
- (void)addActivityTarget:(id)arg1;
- (void)setDisplayName:(id)arg1 maxCount:(unsigned long long)arg2;
- (void)setPercentDone:(double)arg1 withKey:(int)arg2;
- (void)setStatusMessage:(id)arg1 percentDone:(double)arg2 withKey:(int)arg3;
- (void)setStatusMessage:(id)arg1 percentDone:(double)arg2;
- (double)percentDone;
- (void)setSupportsPerItemProgress:(bool)arg1;
- (id)_ntsThrottledUserInfoDict;
- (void)postDidChangeWithUserInfo:(id)arg1;
- (id)userInfoForNotification;
- (void)postActivityFinished:(id)arg1;
- (void)postActivityStarting;
- (void)setShouldCancel:(bool)arg1;
- (void)recordBytesRead:(unsigned long long)arg1;
- (void)recordBytesWritten:(unsigned long long)arg1;
- (void)setGotNewMessagesState:(unsigned long long)arg1;
- (unsigned long long)expectedLength;
- (void)setExpectedLength:(unsigned long long)arg1;
- (id)mailbox;
- (unsigned long long)bytesWritten;
- (void)setPercentDone:(double)arg1;
- (void)resetConnectionStats;
- (void)setCanBeCancelled:(bool)arg1;
- (bool)canBeCancelled;
- (bool)shouldCancel;
- (void)addReason:(id)arg1;
- (void)setMailbox:(id)arg1;
- (void)setMaxCount:(unsigned long long)arg1;
- (void)setDisplayName:(id)arg1;
- (bool)isActive;
- (int)changeCount;
- (id)init;
- (void)setDelegate:(id)arg1;
- (double)startTime;
- (void)setError:(id)arg1;
- (id)error;
- (void)cancel;
- (void)dealloc;
- (id)description;
- (void)reset;
- (id)displayName;

@end
