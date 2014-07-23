/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CKDModifyRecordZonesOperation : CKDDatabaseOperation  {
    bool_allowDefaultZoneSave;
    int _numZoneSaveAttempts;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _saveCompletionBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _deleteCompletionBlock;

    NSMutableArray *_recordZonesToSave;
    NSArray *_recordZoneIDsToDelete;
    NSMutableDictionary *_recordZonesByZoneID;
    NSMutableDictionary *_pcsOplockFailureCountByZoneID;
}

@property(copy) id saveCompletionBlock;
@property(copy) id deleteCompletionBlock;
@property(retain) NSMutableArray * recordZonesToSave;
@property(retain) NSArray * recordZoneIDsToDelete;
@property(retain) NSMutableDictionary * recordZonesByZoneID;
@property(retain) NSMutableDictionary * pcsOplockFailureCountByZoneID;
@property bool allowDefaultZoneSave;
@property int numZoneSaveAttempts;


- (void)setPcsOplockFailureCountByZoneID:(id)arg1;
- (id)pcsOplockFailureCountByZoneID;
- (void)_checkAndPrepareZones;
- (void)_fetchPCSDataForZone:(id)arg1 fromServer:(bool)arg2;
- (void)_handleRecordZoneDeleted:(id)arg1 responseCode:(id)arg2;
- (void)_handleRecordZoneSaved:(id)arg1 responseCode:(id)arg2;
- (void)setNumZoneSaveAttempts:(int)arg1;
- (id)deleteCompletionBlock;
- (id)saveCompletionBlock;
- (int)numZoneSaveAttempts;
- (bool)_saveZonesToServer;
- (void)_fetchPCSDataForZonesFromServer:(bool)arg1;
- (bool)allowDefaultZoneSave;
- (void)setAllowDefaultZoneSave:(bool)arg1;
- (bool)makeStateTransition;
- (id)nameForState:(unsigned long long)arg1;
- (void)setDeleteCompletionBlock:(id)arg1;
- (void)setSaveCompletionBlock:(id)arg1;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)setRecordZonesByZoneID:(id)arg1;
- (id)recordZonesByZoneID;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)setRecordZoneIDsToDelete:(id)arg1;
- (id)recordZoneIDsToDelete;
- (void)setRecordZonesToSave:(id)arg1;
- (id)recordZonesToSave;
- (void)main;
- (void).cxx_destruct;

@end
