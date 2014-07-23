/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class BRCAccountSession, NSObject<OS_dispatch_queue>;

@interface BRCDiskSpaceReclaimer : NSObject  {
    BRCAccountSession *_session;
    bool_isClosed;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(readonly) NSObject<OS_dispatch_queue> * queue;

+ (bool)createTablesWithDB:(id)arg1;

- (void)_enumerateItemsForEvictSyncWithBlock:(id)arg1;
- (void)documentWasAccessed:(id)arg1;
- (id)descriptionForItem:(id)arg1 context:(id)arg2;
- (bool)containerWasReset:(id)arg1;
- (bool)documentWasDeleted:(id)arg1;
- (bool)documentChangedEvictability:(id)arg1;
- (bool)documentWasCreated:(id)arg1;
- (id)initWithAccountSession:(id)arg1;
- (id)queue;
- (void)close;
- (void).cxx_destruct;

@end
