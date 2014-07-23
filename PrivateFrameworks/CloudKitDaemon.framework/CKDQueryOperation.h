/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSSet, CKQueryCursor, CKQuery, CKRecordZoneID;

@interface CKDQueryOperation : CKDDatabaseOperation  {
    bool_shouldFetchAssetContent;
    CKQuery *_query;
    CKQueryCursor *_cursor;
    unsigned long long _resultsLimit;
    CKQueryCursor *_resultsCursor;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _recordFetchedBlock;

    NSSet *_desiredKeySet;
    CKRecordZoneID *_zoneID;
}

@property(readonly) CKQuery * query;
@property(readonly) CKQueryCursor * cursor;
@property(readonly) unsigned long long resultsLimit;
@property(retain) CKQueryCursor * resultsCursor;
@property(copy) id recordFetchedBlock;
@property(retain) NSSet * desiredKeySet;
@property bool shouldFetchAssetContent;
@property(retain) CKRecordZoneID * zoneID;


- (void)setDesiredKeySet:(id)arg1;
- (void)_handleQueryRequestFinished:(id)arg1;
- (id)desiredKeySet;
- (void)fillOutOperationResult:(id)arg1;
- (Class)operationResultClass;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)setShouldFetchAssetContent:(bool)arg1;
- (bool)shouldFetchAssetContent;
- (void)setZoneID:(id)arg1;
- (void)setRecordFetchedBlock:(id)arg1;
- (id)resultsCursor;
- (void)setResultsCursor:(id)arg1;
- (id)recordFetchedBlock;
- (unsigned long long)resultsLimit;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)zoneID;
- (id)cursor;
- (void)main;
- (id)query;
- (void).cxx_destruct;

@end
