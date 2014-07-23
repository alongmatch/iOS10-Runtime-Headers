/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSMutableDictionary, NSDictionary, SSItem, SSURLRequestProperties, SSDownloadPolicy, SSNetworkConstraints, NSString, NSObject<OS_dispatch_queue>, NSArray, SSItemOffer, NSData, NSNumber;

@interface SSPurchase : NSObject <SSXPCCoding, NSCoding, NSCopying> {
    NSNumber *_accountIdentifier;
    NSString *_affiliateIdentifier;
    bool_backgroundPurchase;
    long long _batchIdentifier;
    NSString *_buyParameters;
    bool_createsDownloads;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    bool_displaysOnLockScreen;
    SSDownloadPolicy *_downloadPolicy;
    NSMutableDictionary *_downloadProperties;
    long long _expectedDownloadFileSize;
    NSArray *_filteredAssetTypes;
    NSArray *_gratisIdentifiers;
    bool_ignoresForcedPasswordRestriction;
    SSItem *_item;
    SSItemOffer *_itemOffer;
    SSNetworkConstraints *_networkConstraints;
    long long _placeholderDownloadIdentifier;
    bool_preauthenticated;
    SSURLRequestProperties *_requestProperties;
    id _requiredDeviceCapabilities;
    long long _uniqueIdentifier;
    bool_usesLocalRedownloadParametersIfPossible;
}

@property(retain) NSNumber * accountIdentifier;
@property(copy) NSString * affiliateIdentifier;
@property(copy) NSString * buyParameters;
@property bool createsDownloads;
@property(copy) NSArray * filteredAssetTypes;
@property(getter=isBackgroundPurchase) bool backgroundPurchase;
@property long long placeholderDownloadIdentifier;
@property(copy) SSURLRequestProperties * requestProperties;
@property(copy) NSDictionary * downloadProperties;
@property bool displaysOnLockScreen;
@property(copy) SSDownloadPolicy * downloadPolicy;
@property bool ignoresForcedPasswordRestriction;
@property(copy) SSNetworkConstraints * networkConstraints;
@property long long batchIdentifier;
@property long long expectedDownloadFileSize;
@property(copy) NSArray * gratisIdentifiers;
@property(copy) id requiredDeviceCapabilities;
@property long long uniqueIdentifier;
@property bool usesLocalRedownloadParametersIfPossible;
@property(getter=isPreauthenticated) bool preauthenticated;
@property(readonly) NSData * databaseEncoding;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)newPurchaseWithXPCEncoding:(id)arg1;
+ (id)newPurchaseWithDatabaseEncoding:(id)arg1;
+ (id)purchaseWithBuyParameters:(id)arg1;

- (void)setDownloadProperties:(id)arg1;
- (void)setNetworkConstraints:(id)arg1;
- (id)itemOffer;
- (void)setGratisIdentifiers:(id)arg1;
- (void)setUsesLocalRedownloadParametersIfPossible:(bool)arg1;
- (void)setRequiredDeviceCapabilities:(id)arg1;
- (void)setExpectedDownloadFileSize:(long long)arg1;
- (id)affiliateIdentifier;
- (void)setAffiliateIdentifier:(id)arg1;
- (void)setDownloadMetadata:(id)arg1;
- (id)downloadMetadata;
- (bool)usesLocalRedownloadParametersIfPossible;
- (void)setPreauthenticated:(bool)arg1;
- (void)setPlaceholderDownloadIdentifier:(long long)arg1;
- (void)setDefaultUserAgent:(id)arg1;
- (void)setBatchIdentifier:(long long)arg1;
- (bool)isPreauthenticated;
- (id)gratisIdentifiers;
- (long long)expectedDownloadFileSize;
- (id)databaseEncoding;
- (long long)batchIdentifier;
- (id)initWithDatabaseEncoding:(id)arg1;
- (void)setValue:(id)arg1 forDownloadProperty:(id)arg2;
- (void)setFilteredAssetTypes:(id)arg1;
- (long long)placeholderDownloadIdentifier;
- (bool)isBackgroundPurchase;
- (bool)ignoresForcedPasswordRestriction;
- (id)filteredAssetTypes;
- (bool)displaysOnLockScreen;
- (void)_addEntriesToDatabaseEncoding:(id)arg1;
- (void)_setValuesUsingDatabaseEncoding:(id)arg1;
- (void)setBuyParameters:(id)arg1;
- (id)buyParameters;
- (id)_initSSPurchase;
- (bool)createsDownloads;
- (void)setCreatesDownloads:(bool)arg1;
- (void)setBackgroundPurchase:(bool)arg1;
- (id)initWithItem:(id)arg1 offer:(id)arg2;
- (id)networkConstraints;
- (void)setDownloadPolicy:(id)arg1;
- (id)downloadPolicy;
- (void)setRequestProperties:(id)arg1;
- (id)requestProperties;
- (id)valueForDownloadProperty:(id)arg1;
- (void)setDisplaysOnLockScreen:(bool)arg1;
- (void)setIgnoresForcedPasswordRestriction:(bool)arg1;
- (id)downloadProperties;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)setAccountIdentifier:(id)arg1;
- (id)accountIdentifier;
- (id)requiredDeviceCapabilities;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (long long)uniqueIdentifier;
- (void)setUniqueIdentifier:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)item;
- (id)initWithItem:(id)arg1;

@end
