/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSMetadataQuery, NSString, NSArray, NSPredicate, NSMutableDictionary, NSOperationQueue, NSMutableArray, BRNotificationReceiver;

@interface BRQuery : NSObject <BRNotificationReceiverDelegate> {
    NSMutableArray *_results;
    NSMutableDictionary *_resultsByRowID;
    BRNotificationReceiver *_receiver;
    NSMetadataQuery *_query;
    NSPredicate *_predicate;
    NSString *_bundleIdentifier;
    NSMutableDictionary *_toBeRemovedByFileObjectID;
    NSMutableDictionary *_toBeReplacedByFileObjectID;
    NSMutableDictionary *_toBeInsertedByFileObjectID;
    int _queryState;
    bool_ubiquitousGatherComplete;
    bool_needsCrashMarking;
    bool_needsCrashEvicting;
    bool_sendHasUpdateNotification;
    NSArray *_values;
    NSArray *_sortingAttributes;
    struct { 
        unsigned long long first_max_num; 
        unsigned long long first_max_ms; 
        unsigned long long progress_max_num; 
        unsigned long long progress_max_ms; 
        unsigned long long update_max_num; 
        unsigned long long update_max_ms; 
    } _batchingParameters;
    int (*_create_result_fn)();
    void *_create_result_context;
    int (*_create_result_callbacks_equal)();
    int (*_create_result_callbacks_release)();
    int (*_create_value_fn)();
    void *_create_value_context;
    int (*_create_value_callbacks_equal)();
    int (*_create_value_callbacks_release)();
    NSArray *_searchScopes;
    unsigned int _scopeOptions;
    int (*_sort_fn)();
    void *_sort_context;
    struct __CFRunLoop { } *_runLoop;
    NSOperationQueue *_queryQueue;
    int _disableCount;
}

@property NSMetadataQuery * query;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (void)initialize;
+ (id)willBeginPossibleCreationOfItemAtURL:(id)arg1;
+ (id)willBeginPossibleDeletionOfItemAtURL:(id)arg1;
+ (id)willBeginPossibleMoveOfItemAtURL:(id)arg1 toURL:(id)arg2;
+ (void)didEndPossibleFileOperation:(id)arg1;

- (void)_processChanges:(id)arg1;
- (void)_sendHasUpdateNotificationIfNeeded;
- (void)_postNote:(struct __CFString { }*)arg1 userInfo:(id)arg2;
- (void)_processUpdates;
- (id)_replacementObjectsForArrayOfQueryItem:(id)arg1;
- (bool)_collectUpdates:(id)arg1;
- (void)_postNote:(struct __CFString { }*)arg1;
- (id)_replacementObjectForQueryItem:(id)arg1;
- (void)_runQuery;
- (void)_startReceiver;
- (void)_setQueryState:(int)arg1;
- (void)notificationReceiverDidReceiveNotifications:(id)arg1;
- (void)notificationsReceiverDidInvalidate:(id)arg1;
- (void)notificationsReceiverDidFinishGathering:(id)arg1;
- (void)notificationsReceiverDidReceiveNotificationsBatch:(id)arg1;
- (void)_performBlock:(id)arg1;
- (id)query;
- (void)finalize;
- (void)dealloc;
- (id)description;
- (void)stop;
- (void)setQueryQueue:(id)arg1;
- (void)setBatchingParameters:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; })arg1;
- (id)initWithQuery:(id)arg1 values:(id)arg2 sortingAttributes:(id)arg3 items:(id)arg4;
- (void)setCreateResultFunction:(int (*)())arg1 withContext:(void*)arg2 callbacks:(const struct { long long x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); }*)arg3;
- (void)setCreateValueFunction:(int (*)())arg1 withContext:(void*)arg2 callbacks:(const struct { long long x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); }*)arg3;
- (void)setSortComparator:(int (*)())arg1 withContext:(void*)arg2;
- (void)setSearchScope:(id)arg1 withOptions:(unsigned int)arg2;
- (void)setExternalDocumentsBundleIdentifier:(id)arg1;
- (unsigned char)executeWithOptions:(unsigned long long)arg1;
- (void)setSendHasUpdateNotification:(bool)arg1;
- (void)processUpdates;
- (id)valuesOfAttribute:(id)arg1;
- (unsigned long long)countOfResultsForAttributeName:(id)arg1 value:(id)arg2;
- (id)attributeValueForName:(id)arg1 forResultAtIndex:(long long)arg2;
- (long long)indexOfResult:(const void*)arg1;
- (const void*)resultAtIndex:(long long)arg1;
- (void)enableUpdates;
- (void)disableUpdates;
- (unsigned long long)resultCount;
- (id)queryQueue;
- (void)setQuery:(id)arg1;

@end
