/* Generated by RuntimeBrowser.
 */

@protocol CKXPCDaemon <NSObject>

@required

- (void)accountChangedWithID:(NSString *)arg1;
- (void)accountStatusWithSetupInfo:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: CKContainerSetupInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSError *, void*
- (void)accountsDidGrantAccessToBundleID:(NSString *)arg1 containerIdentifiers:(NSArray *)arg2;
- (void)accountsDidRevokeAccessToBundleID:(NSString *)arg1 containerIdentifiers:(NSArray *)arg2;
- (void)accountsWillDeleteAccount:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)cancelOperationWithIdentifier:(NSString *)arg1;
- (void)clearAssetCacheWithSetupInfo:(CKContainerSetupInfo *)arg1 databaseScope:(int)arg2;
- (void)clearAuthTokensWithSetupInfo:(CKContainerSetupInfo *)arg1 recordID:(CKRecordID *)arg2 databaseScope:(int)arg3;
- (void)clearRecordCacheWithSetupInfo:(CKContainerSetupInfo *)arg1 databaseScope:(int)arg2;
- (void)currentUserIDWithSetupInfo:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: CKContainerSetupInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)getBehaviorOptionForKey:(void *)arg1 isContainerOption:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: NSString *, BOOL, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id
- (void)getNewWebSharingIdentityWithSetupInfo:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: CKContainerSetupInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CKEncryptedData *, NSError *, void*
- (void)getPCSDiagnosticsForZonesWithSetupInfo:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: CKContainerSetupInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CKPCSDiagnosticInformation *, void*
- (void)getSandboxExtensionsWithSetupInfo:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: CKContainerSetupInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)performAcceptSharesOperation:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 6: CKAcceptSharesOperationInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performDiscoverAllContactsOperation:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 6: CKDiscoverUserInfosOperationInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performDiscoverUserInfosOperation:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 6: CKDiscoverUserInfosOperationInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performFetchChangedRecordZonesOperation:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 6: CKFetchChangedRecordZonesOperationInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performFetchEnvironmentOperation:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 6: CKOperationInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performFetchNotificationChangesOperation:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 6: CKFetchNotificationChangesOperationInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performFetchRecordChangesOperation:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 6: CKFetchRecordChangesOperationInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performFetchRecordVersionsOperation:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 6: CKFetchRecordVersionsOperationInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performFetchRecordZonesOperation:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 6: CKFetchRecordZonesOperationInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performFetchRecordsOperation:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 6: CKFetchRecordsOperationInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performFetchShareInfoOperation:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 6: CKFetchShareInfoOperationInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performFetchSharesOperation:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 6: CKFetchSharesOperationInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performFetchSubscriptionsOperation:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 6: CKFetchSubscriptionsOperationInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performFetchUserIdentitiesOperation:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 6: CKFetchUserIdentitiesOperationInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performFetchUserQuotaOperation:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 6: CKDatabaseOperationInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performFetchWebAuthTokenOperation:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 6: CKDatabaseOperationInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performMarkNotificationsReadOperation:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 6: CKMarkNotificationsReadOperationInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performModifyBadgeOperation:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 6: CKModifyBadgeOperationInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performModifyRecordAccessOperation:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 6: CKModifyRecordAccessOperationInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performModifyRecordZonesOperation:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 6: CKModifyRecordZonesOperationInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performModifyRecordsOperation:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 6: CKModifyRecordsOperationInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performModifySharesOperation:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 6: CKModifySharesOperationInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performModifySubscriptionsOperation:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 6: CKModifySubscriptionsOperationInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performModifyWebSharingOperation:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 6: CKModifyWebSharingOperationInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performPublishAssetsOperation:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 6: CKPublishAssetsOperationInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performQueryOperation:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 6: CKQueryOperationInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)repairZonePCSWithOperationInfo:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 6: CKRepairZonePCSOperationInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)requestApplicationPermission:(void *)arg1 setupInfo:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: unsigned int, CKContainerSetupInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSError *, void*
- (void)resetAllApplicationPermissionsWithSetupInfo:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: CKContainerSetupInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)serverPreferredPushEnvironmentWithSetupInfo:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: CKContainerSetupInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)setApplicationPermission:(void *)arg1 enabled:(void *)arg2 setupInfo:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: unsigned int, BOOL, CKContainerSetupInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSError *, void*
- (void)setFakeError:(NSError *)arg1 forNextRequestOfClassName:(NSString *)arg2 setupInfo:(CKContainerSetupInfo *)arg3;
- (void)statusForApplicationPermission:(void *)arg1 setupInfo:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: unsigned int, CKContainerSetupInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSError *, void*
- (void)statusGroupsForApplicationPermission:(void *)arg1 setupInfo:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: unsigned int, CKContainerSetupInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)tossConfigWithSetupInfo:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: CKContainerSetupInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updatePushTokens;
- (void)wipeAllCachesAndDie;

@end