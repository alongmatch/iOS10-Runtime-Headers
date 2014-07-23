/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@class NSUUID, NSString, NSURL, NSDate, NSData, NSMutableDictionary, NSDictionary, LSUserActivityManager, SFCompanionAdvertiser, <LSUserActivityDelegate>;

@interface LSUserActivity : NSObject <SFCompanionAdvertiserDelegate> {
    LSUserActivityManager *_manager;
    NSMutableDictionary *_userInfo;
    NSMutableDictionary *_frameworkPayload;
    NSString *_title;
    NSURL *_webpageURL;
    <LSUserActivityDelegate> *_delegate;
    SFCompanionAdvertiser *_advertiser;
    double _lastSaveTime;
    bool_saveScheduled;
    bool_createsNewUUIDIfSaved;
    bool_needsSave;
    bool_sendToServerPending;
    bool_inWillSaveCallback;
    bool_supportsContinuationStreams;
    bool_forceImmediateSendToServer;
    bool_canCreateStreams;
    NSString *_typeIdentifier;
    NSUUID *_uniqueIdentifier;
    unsigned long long _suggestedActionType;
    NSDate *_lastActivityDate;
    NSDictionary *_options;
    NSData *_streamsData;
}

@property(copy) NSString * owningBundleIdentifier;
@property(getter=isActive) bool active;
@property(copy) NSDictionary * activityPayload;
@property(getter=activityPayload,setter=setActivityPayload:,copy) NSDictionary * activityPayloadDictionary;
@property(getter=frameworkPayload,setter=setFrameworkPayload:,copy) NSDictionary * frameworkPayloadDictionary;
@property(copy) NSDictionary * frameworkPayload;
@property(copy) NSURL * webPageURL;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(copy) NSString * typeIdentifier;
@property(copy) NSString * title;
@property(copy) NSDictionary * userInfo;
@property(copy) NSURL * webpageURL;
@property bool needsSave;
@property bool supportsContinuationStreams;
@property bool forceImmediateSendToServer;
@property <LSUserActivityDelegate> * delegate;
@property(copy) NSUUID * uniqueIdentifier;
@property(readonly) unsigned long long suggestedActionType;
@property(copy) NSDate * lastActivityDate;
@property(copy) NSDictionary * options;
@property(copy) NSData * streamsData;
@property bool canCreateStreams;
@property(readonly) LSUserActivityManager * manager;

+ (void)unregisterForSuggestedActionNudgeOfType:(id)arg1;
+ (id)registerForSuggestedActionNudgeOfType:(unsigned long long)arg1 withOptions:(id)arg2 block:(id)arg3;
+ (id)allowedWebpageURLSchemes;
+ (id)suggestedActionOfType:(unsigned long long)arg1;
+ (id)userActivityFromUUID:(id)arg1 withError:(id*)arg2;
+ (bool)checkWebpageURL:(id)arg1 actionType:(unsigned long long)arg2 throwIfFailed:(bool)arg3;
+ (void)fetchUserActivityWithUUID:(id)arg1 completionHandler:(id)arg2;
+ (id)userActivity;

- (id)initWithUUID:(id)arg1;
- (void)save;
- (void)setUserInfo:(id)arg1;
- (void)advertiser:(id)arg1 didReceiveInputStream:(id)arg2 outputStream:(id)arg3;
- (void)didSynchronizeUserActivity;
- (void)willSynchronizeUserActivityWithHandler:(id)arg1;
- (id)initWithManager:(id)arg1 userActivityInfo:(id)arg2;
- (void)didReceiveInputStream:(id)arg1 outputStream:(id)arg2;
- (id)callWillSaveDelegateIfDirtyAndPackageUpData:(bool)arg1;
- (id)userActivityInfoForSelf;
- (id)resourceURLForKey:(id)arg1;
- (void)removeResourceURL:(id)arg1;
- (id)addResourceURL:(id)arg1;
- (void)setResourceURLs:(id)arg1;
- (id)resourceURLs;
- (void)setActivityPayload:(id)arg1;
- (id)activityPayload;
- (void)removeActivityPayloadForKey:(id)arg1;
- (void)updateActivityPayloadValue:(id)arg1 forKey:(id)arg2;
- (void)removeFrameworkPayloadForKey:(id)arg1;
- (void)setFrameworkPayload:(id)arg1;
- (id)frameworkPayload;
- (void)setOwningBundleIdentifier:(id)arg1;
- (id)owningBundleIdentifier;
- (void)setWebPageURL:(id)arg1;
- (id)webPageURL;
- (void)removeUserInfoValueForKey:(id)arg1;
- (void)updateUserInfoValue:(id)arg1 forKey:(id)arg2;
- (void)removeFrameworkPayloadValueForKey:(id)arg1;
- (id)initWithSuggestedActionType:(unsigned long long)arg1 options:(id)arg2;
- (void)setCanCreateStreams:(bool)arg1;
- (bool)canCreateStreams;
- (void)setStreamsData:(id)arg1;
- (id)streamsData;
- (void)setTypeIdentifier:(id)arg1;
- (id)decodeUserInfo:(id)arg1;
- (id)encodeUserInfo:(id)arg1;
- (void)becomeCurrent;
- (bool)needsSave;
- (void)setWebpageURL:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)initWithTypeIdentifier:(id)arg1;
- (bool)isActive;
- (id)title;
- (id)webpageURL;
- (void)sendUserActivityInfoToLSUserActivityd:(bool)arg1 onAsyncQueue:(bool)arg2;
- (void)scheduleSendUserActivityInfoToLSUserActivityd;
- (bool)forceImmediateSendToServer;
- (void)setForceImmediateSendToServer:(bool)arg1;
- (unsigned long long)suggestedActionType;
- (void)setNeedsSave:(bool)arg1;
- (id)manager;
- (void)tellServerAboutNewLSUserActivity;
- (id)initWithTypeIdentifier:(id)arg1 suggestedActionType:(unsigned long long)arg2 options:(id)arg3;
- (id)typeIdentifier;
- (id)init;
- (id)debugDescription;
- (void)setDelegate:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)invalidate;
- (id)userInfo;
- (id)options;
- (id)uniqueIdentifier;
- (void)setOptions:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)description;
- (void)setActive:(bool)arg1;
- (void)setLastActivityDate:(id)arg1;
- (id)lastActivityDate;
- (void)updateFrameworkPayloadValue:(id)arg1 forKey:(id)arg2;
- (void)getContinuationStreamsWithCompletionHandler:(id)arg1;
- (void)setSupportsContinuationStreams:(bool)arg1;
- (bool)supportsContinuationStreams;
- (void)addUserInfoEntriesFromDictionary:(id)arg1;
- (id)initWithTypeIdentifier:(id)arg1 options:(id)arg2;
- (id)archiver:(id)arg1 willEncodeObject:(id)arg2;
- (id)unarchiver:(id)arg1 didDecodeObject:(id)arg2;
- (void)remove;

@end
