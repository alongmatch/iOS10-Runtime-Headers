/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@class ACDFakeRemoteAccountStoreSession, ACRemoteDeviceProxy, ACDAccountStoreFilter, ACDAccessPluginManager, <ACDAccountStoreDelegate>, NSMutableArray, ACDDataclassOwnersManager, ACDDatabase, NSString, ACDAuthenticationDialogManager, ACDClient, ACDAuthenticationPluginManager, ACDClientAuthorizationManager;

@interface ACDAccountStore : ACAccountStore <ACDAccountStoreProtocol> {
    NSMutableArray *_accountChanges;
    ACDDatabase *_database;
    ACDClientAuthorizationManager *_authorizationManager;
    ACDFakeRemoteAccountStoreSession *_fakeRemoteAccountStoreSession;
    bool_notificationsEnabled;
    bool_migrationInProgress;
    <ACDAccountStoreDelegate> *_delegate;
    ACDClient *_client;
    ACDAccountStoreFilter *_filter;
    ACDAuthenticationPluginManager *_authenticationPluginManager;
    ACDAccessPluginManager *_accessPluginManager;
    ACDDataclassOwnersManager *_dataclassOwnersManager;
    ACDAuthenticationDialogManager *_authenticationDialogManager;
    ACRemoteDeviceProxy *_remoteDeviceProxy;
}

@property <ACDAccountStoreDelegate> * delegate;
@property ACDClient * client;
@property(readonly) ACDClientAuthorizationManager * authorizationManager;
@property ACDAccountStoreFilter * filter;
@property(retain) ACDAuthenticationPluginManager * authenticationPluginManager;
@property(retain) ACDAccessPluginManager * accessPluginManager;
@property(retain) ACDDataclassOwnersManager * dataclassOwnersManager;
@property(retain) ACDAuthenticationDialogManager * authenticationDialogManager;
@property(retain) ACRemoteDeviceProxy * remoteDeviceProxy;
@property bool notificationsEnabled;
@property(getter=isMigrationInProgress) bool migrationInProgress;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setMigrationInProgress:(bool)arg1;
- (void)setRemoteDeviceProxy:(id)arg1;
- (id)remoteDeviceProxy;
- (void)setAuthenticationDialogManager:(id)arg1;
- (void)setDataclassOwnersManager:(id)arg1;
- (void)setAccessPluginManager:(id)arg1;
- (id)accessPluginManager;
- (void)setAuthenticationPluginManager:(id)arg1;
- (id)authenticationPluginManager;
- (void)sendRenewCredentialsForAccount:(id)arg1;
- (void)saveAccount:(id)arg1 pid:(id)arg2 verify:(bool)arg3 dataclassActions:(id)arg4 completion:(id)arg5;
- (id)masterCredentialForAccountIdentifier:(id)arg1;
- (bool)_clientIsEntitledForAdHocAccountType:(id)arg1;
- (void)deleteAccountNoSave:(id)arg1 error:(id*)arg2;
- (void)updateAccountNoSave:(id)arg1 error:(id*)arg2;
- (void)addAccountNoSave:(id)arg1 error:(id*)arg2;
- (id)accountsWithAccountTypeIdentifier:(id)arg1;
- (void)notifyRemoteDevicesOfModifiedAccount:(id)arg1 withChangeType:(id)arg2;
- (void)saveAccount:(id)arg1 withHandler:(id)arg2;
- (id)authenticationDialogManager;
- (id)_clientTokenForAccountIdentifier:(id)arg1 error:(id)arg2;
- (id)authorizationManager;
- (void)_requestAccessForAccountTypeWithIdentifier:(id)arg1 options:(id)arg2 allowUserInteraction:(bool)arg3 withHandler:(id)arg4;
- (id)accountTypeWithIdentifier:(id)arg1;
- (id)_handleAccountMod:(id)arg1 withDataclassActions:(id)arg2;
- (id)_handleAccountAdd:(id)arg1 withDataclassActions:(id)arg2;
- (void)_completeSave:(id)arg1 dataclassActions:(id)arg2 completion:(id)arg3;
- (bool)_canSaveAccount:(id)arg1;
- (id)_removeAccountNoSave:(id)arg1 withDataclassActions:(id)arg2;
- (bool)accountsExistWithAccountTypeIdentifier:(id)arg1;
- (bool)_isManagedAccount:(id)arg1 enabledForManagedDataclass:(id)arg2;
- (bool)_canManagedAccountType:(id)arg1 syncManagedDataclass:(id)arg2;
- (id)_accountsWithAcountType:(id)arg1 error:(id*)arg2;
- (id)_legacyCredentialForAccount:(id)arg1 client:(id)arg2 error:(id*)arg3;
- (id)_allAccounts_sync;
- (void)_updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg1 withHandler:(id)arg2;
- (id)_dataclassWithName:(id)arg1 createIfNecessary:(bool)arg2;
- (id)_displayAccountForAccount:(id)arg1;
- (void)_deleteAccountNoSave:(id)arg1 withDataclassActions:(id)arg2 error:(id*)arg3;
- (id)_accountWithIdentifier:(id)arg1;
- (void)_updateAccountNoSave:(id)arg1 withDataclassActions:(id)arg2 error:(id*)arg3;
- (void)_setAccountManagedObjectRelationships:(id)arg1 withAccount:(id)arg2 isNew:(bool)arg3 error:(id*)arg4;
- (id)_addAccountNoSave:(id)arg1 withDataclassActions:(id)arg2 error:(id*)arg3;
- (void)_noteAccountStoreDidSaveAccountsWithAccountTypeIdentifiers:(id)arg1;
- (void)_removeClientTokenForAccountIdentifer:(id)arg1;
- (id)_clientTokenQueue;
- (id)dataclassOwnersManager;
- (id)_childAccountsForAccountWithID:(id)arg1;
- (bool)isMigrationInProgress;
- (id)_accountTypeWithIdentifier:(id)arg1;
- (id)initWithClient:(id)arg1;
- (bool)notificationsEnabled;
- (void)setClientBundleID:(id)arg1 withHandler:(id)arg2;
- (void)notifyRemoteDevicesOfModifiedAccount:(id)arg1 withChangeType:(id)arg2 completion:(id)arg3;
- (void)accountsWithAccountTypeIdentifiers:(id)arg1 preloadedProperties:(id)arg2 completion:(id)arg3;
- (void)visibleTopLevelAccountsWithAccountTypeIdentifiers:(id)arg1 completion:(id)arg2;
- (void)openAuthenticationURL:(id)arg1 forAccount:(id)arg2 shouldConfirm:(bool)arg3 completion:(id)arg4;
- (void)addClientToken:(id)arg1 forAccountIdentifier:(id)arg2 completion:(id)arg3;
- (void)clientTokenForAccountIdentifier:(id)arg1 completion:(id)arg2;
- (void)handleURL:(id)arg1;
- (void)updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg1 withHandler:(id)arg2;
- (void)accountIdentifiersEnabledForDataclasses:(id)arg1 withAccountTypeIdentifiers:(id)arg2 completion:(id)arg3;
- (void)isPushSupportedForAccount:(id)arg1 completion:(id)arg2;
- (void)kerberosAccountsForDomainFromURL:(id)arg1 completion:(id)arg2;
- (void)tetheredSyncSourceTypeForDataclass:(id)arg1 completion:(id)arg2;
- (void)isTetheredSyncingEnabledForDataclass:(id)arg1 completion:(id)arg2;
- (void)accountExistsWithDescription:(id)arg1 completion:(id)arg2;
- (void)isPerformingDataclassActionsForAccount:(id)arg1 completion:(id)arg2;
- (void)dataclassActionsForAccountDeletion:(id)arg1 completion:(id)arg2;
- (void)dataclassActionsForAccountSave:(id)arg1 completion:(id)arg2;
- (void)accountIdentifiersEnabledToSyncDataclass:(id)arg1 handler:(id)arg2;
- (void)accountIdentifiersEnabledForDataclass:(id)arg1 handler:(id)arg2;
- (void)displayAccountTypeForAccountWithIdentifier:(id)arg1 handler:(id)arg2;
- (void)typeIdentifierForDomain:(id)arg1 withHandler:(id)arg2;
- (void)clearGrantedPermissionsForAccountType:(id)arg1 withHandler:(id)arg2;
- (void)grantedPermissionsForAccountType:(id)arg1 withHandler:(id)arg2;
- (void)permissionForAccountType:(id)arg1 withHandler:(id)arg2;
- (void)clearAllPermissionsGrantedForAccountType:(id)arg1 withHandler:(id)arg2;
- (void)setPermissionGranted:(id)arg1 forBundleID:(id)arg2 onAccountType:(id)arg3 withHandler:(id)arg4;
- (void)appPermissionsForAccountType:(id)arg1 withHandler:(id)arg2;
- (void)setNotificationsEnabled:(bool)arg1;
- (void)accessKeysForAccountType:(id)arg1 handler:(id)arg2;
- (void)syncableDataclassesForAccountType:(id)arg1 handler:(id)arg2;
- (void)supportedDataclassesForAccountType:(id)arg1 handler:(id)arg2;
- (void)provisionedDataclassesForAccountWithIdentifier:(id)arg1 handler:(id)arg2;
- (void)enabledDataclassesForAccountWithIdentifier:(id)arg1 handler:(id)arg2;
- (void)childAccountsWithAccountTypeIdentifier:(id)arg1 parentAccountIdentifier:(id)arg2 handler:(id)arg3;
- (void)childAccountsForAccountWithIdentifier:(id)arg1 handler:(id)arg2;
- (void)parentAccountForAccountWithIdentifier:(id)arg1 handler:(id)arg2;
- (void)credentialForAccount:(id)arg1 serviceID:(id)arg2 handler:(id)arg3;
- (void)credentialForAccountWithIdentifier:(id)arg1 handler:(id)arg2;
- (void)dataclassesWithHandler:(id)arg1;
- (void)accountTypesWithHandler:(id)arg1;
- (void)renewCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(id)arg3;
- (void)verifyCredentialsForAccount:(id)arg1 saveWhenAuthorized:(bool)arg2 withHandler:(id)arg3;
- (void)requestAccessForAccountTypeWithIdentifier:(id)arg1 options:(id)arg2 withHandler:(id)arg3;
- (void)saveAccount:(id)arg1 verify:(bool)arg2 dataclassActions:(id)arg3 completion:(id)arg4;
- (void)canSaveAccount:(id)arg1 completion:(id)arg2;
- (void)removeAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(id)arg3;
- (void)removeAccountType:(id)arg1 withHandler:(id)arg2;
- (void)insertAccountType:(id)arg1 withHandler:(id)arg2;
- (void)accountsWithAccountType:(id)arg1 handler:(id)arg2;
- (void)accountsWithHandler:(id)arg1;
- (void)accountTypeWithIdentifier:(id)arg1 handler:(id)arg2;
- (void)accountWithIdentifier:(id)arg1 handler:(id)arg2;
- (id)remoteAccountStoreSession;
- (void)disconnectFromRemoteAccountStore;
- (void)connectToRemoteAccountStoreUsingEndpoint:(id)arg1;
- (void)setClient:(id)arg1;
- (id)filter;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)client;
- (void).cxx_destruct;
- (id)_save;
- (void)setFilter:(id)arg1;

@end
