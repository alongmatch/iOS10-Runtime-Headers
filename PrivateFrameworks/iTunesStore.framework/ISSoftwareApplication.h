/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSString, NSArray, NSDate, NSNumber, SSItemContentRating;

@interface ISSoftwareApplication : NSObject <SSXPCCoding> {
    NSNumber *_accountDSID;
    NSString *_accountIdentifier;
    bool_beta;
    NSString *_bundleIdentifier;
    NSString *_bundleShortVersionString;
    NSString *_bundleVersion;
    NSString *_containerPath;
    SSItemContentRating *_contentRating;
    NSString *_deviceIdentifierForVendor;
    NSNumber *_itemIdentifier;
    NSString *_itemName;
    bool_placeholder;
    bool_profileValidated;
    NSString *_softwareType;
    NSNumber *_storeFrontIdentifier;
    NSString *_vendorName;
    NSNumber *_versionIdentifier;
    NSArray *_versionOrdering;
    NSDate *_receiptExpirationDate;
    unsigned long long _vppStateFlags;
}

@property(retain) NSNumber * accountDSID;
@property(copy) NSString * accountIdentifier;
@property(getter=isBeta) bool beta;
@property(copy) NSString * bundleIdentifier;
@property(copy) NSString * bundleShortVersionString;
@property(copy) NSString * bundleVersion;
@property(copy) NSString * containerPath;
@property(copy) SSItemContentRating * contentRating;
@property(copy) NSString * deviceIdentifierForVendor;
@property(retain) NSNumber * itemIdentifier;
@property(copy) NSString * itemName;
@property(getter=isPlaceholder) bool placeholder;
@property(getter=isProfileValidated) bool profileValidated;
@property(copy) NSString * softwareType;
@property(retain) NSNumber * storeFrontIdentifier;
@property(copy) NSString * vendorName;
@property(retain) NSNumber * versionIdentifier;
@property(copy) NSArray * versionOrdering;
@property(readonly) NSDate * receiptExpirationDate;
@property(readonly) unsigned long long vppStateFlags;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)versionOrdering;
- (bool)isProfileValidated;
- (void)setStoreFrontIdentifier:(id)arg1;
- (id)storeFrontIdentifier;
- (void)setContentRating:(id)arg1;
- (id)contentRating;
- (id)softwareType;
- (void)setBundleIdentifier:(id)arg1;
- (void)setItemIdentifier:(id)arg1;
- (id)itemIdentifier;
- (id)receiptExpirationDate;
- (void)setVendorName:(id)arg1;
- (void)setDeviceIdentifierForVendor:(id)arg1;
- (bool)isBeta;
- (id)ITunesMetadataDictionary;
- (unsigned long long)vppStateFlags;
- (void)resetVPPStateFlags;
- (id)initWithLaunchServicesApplication:(id)arg1;
- (id)accountDSID;
- (void)setVersionOrdering:(id)arg1;
- (void)setVersionIdentifier:(id)arg1;
- (void)setSoftwareType:(id)arg1;
- (void)setItemName:(id)arg1;
- (id)containerPath;
- (void)_loadMetadataFromContainer:(id)arg1;
- (void)setProfileValidated:(bool)arg1;
- (void)setContainerPath:(id)arg1;
- (void)setBundleVersion:(id)arg1;
- (void)setBundleShortVersionString:(id)arg1;
- (void)setBeta:(bool)arg1;
- (void)setAccountDSID:(id)arg1;
- (id)initWithLaunchServicesApplication:(id)arg1 containerPath:(id)arg2;
- (id)bundleShortVersionString;
- (id)versionIdentifier;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)setAccountIdentifier:(id)arg1;
- (id)accountIdentifier;
- (id)bundleIdentifier;
- (id)itemName;
- (id)vendorName;
- (id)bundleVersion;
- (bool)isPlaceholder;
- (void)dealloc;
- (id)description;
- (id)deviceIdentifierForVendor;
- (void)setPlaceholder:(bool)arg1;

@end
