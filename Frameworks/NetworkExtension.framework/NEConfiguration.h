/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@class NSUUID, NSString, NEContentFilter, NEVPNApp, NEAOVPN, NEProfileIngestionPayloadInfo, NEVPN;

@interface NEConfiguration : NSObject <NEProfilePayloadHandlerDelegate, NEConfigurationValidating, NSSecureCoding, NSCopying> {
    long long _grade;
    NSUUID *_identifier;
    NSString *_application;
    NSString *_name;
    NSString *_applicationName;
    NSString *_applicationIdentifier;
    NSString *_externalIdentifier;
    NEVPN *_VPN;
    NEAOVPN *_alwaysOnVPN;
    NEVPNApp *_appVPN;
    NEContentFilter *_contentFilter;
    NEProfileIngestionPayloadInfo *_payloadInfo;
}

@property(readonly) long long grade;
@property(readonly) NSUUID * identifier;
@property(copy) NSString * application;
@property(copy) NSString * name;
@property(copy) NSString * applicationName;
@property(copy) NSString * applicationIdentifier;
@property(copy) NSString * externalIdentifier;
@property(copy) NEVPN * VPN;
@property(copy) NEAOVPN * alwaysOnVPN;
@property(copy) NEVPNApp * appVPN;
@property(copy) NEContentFilter * contentFilter;
@property(copy) NEProfileIngestionPayloadInfo * payloadInfo;
@property(readonly) NSString * pluginType;

+ (bool)removeSCServiceWithIdentifier:(id)arg1 fromPreferences:(struct __SCPreferences { }*)arg2;
+ (bool)SCServiceWithIdentifier:(id)arg1 existsInPreferences:(struct __SCPreferences { }*)arg2;
+ (struct __CFDictionary { }*)copyConfigurationForProtocol:(struct __CFString { }*)arg1 inService:(struct __SCNetworkService { }*)arg2;
+ (bool)setConfiguration:(struct __CFDictionary { }*)arg1 forProtocol:(struct __CFString { }*)arg2 inService:(struct __SCNetworkService { }*)arg3;
+ (void)addError:(id)arg1 toList:(id)arg2;
+ (bool)supportsSecureCoding;

- (bool)setAppLayerVPNUUID:(id)arg1 andSafariDomains:(id)arg2;
- (bool)setProfileInfo:(id)arg1;
- (bool)setPayloadInfoCommon:(id)arg1 payloadOrganization:(id)arg2;
- (bool)setPayloadInfoIdentity:(id)arg1;
- (bool)setConfigurationHTTPPassword:(id)arg1;
- (id)getConfigurationIdentifier;
- (id)getPendingCertificateUUIDs:(id)arg1;
- (bool)setCertificates:(id)arg1;
- (id)initWithContentFilterPayload:(id)arg1 configurationName:(id)arg2;
- (id)initWithAlwaysOnVPNPayload:(id)arg1 configurationName:(id)arg2;
- (id)initWithAppLayerVPNPayload:(id)arg1 configurationName:(id)arg2;
- (id)initWithVPNPayload:(id)arg1 configurationName:(id)arg2;
- (bool)setPayloadInfoIdentityPIN:(id)arg1;
- (bool)setPayloadInfoIdentityIPSecSharedSecret:(id)arg1;
- (bool)setPayloadInfoIdentityProxy:(id)arg1;
- (bool)setPayloadInfoIdentityUserNameAndPassword:(id)arg1;
- (bool)setConfigurationSharedSecret:(id)arg1;
- (id)getPendingCertificateUUIDsContentFilter:(id)arg1;
- (id)getPendingCertificateUUIDsAOVpn:(id)arg1;
- (id)getPendingCertificateUUIDsAppVPN:(id)arg1;
- (id)getPendingCertificateUUIDsVPN:(id)arg1;
- (bool)setCertificateContentFilter:(id)arg1;
- (bool)setCertificatesAOVpn:(id)arg1;
- (bool)setCertificatesAppVPN:(id)arg1;
- (bool)setCertificatesVPN:(id)arg1;
- (id)getConfigurationPasswordPersist:(id)arg1 account:(id)arg2 description:(id)arg3;
- (bool)setConfigurationPassword:(id)arg1 account:(id)arg2 password:(id)arg3 description:(id)arg4;
- (id)configureAOVPNTunnelFromTunnelDict:(id)arg1 payloadBase:(id)arg2;
- (bool)setAppLayerVPNRuleSettings:(id)arg1 withAppIdentifier:(id)arg2;
- (bool)ingestProxyOptions:(id)arg1;
- (bool)ingestDNSOptions:(id)arg1;
- (bool)configureVpnOnDemand:(id)arg1 vpnType:(id)arg2;
- (bool)configurePluginWithPayload:(id)arg1 pluginType:(id)arg2 payloadType:(id)arg3;
- (bool)ingestIPSecDict:(id)arg1 vpnType:(id)arg2 vpn:(id)arg3;
- (bool)configurePPPWithVPNOptions:(id)arg1 payloadBase:(id)arg2;
- (bool)ingestPPPData:(id)arg1 vnpType:(id)arg2;
- (bool)configureIKE:(id)arg1 vpnType:(id)arg2 payloadBase:(id)arg3 vpn:(id)arg4;
- (bool)configurePPTPWithPPPOptions:(id)arg1;
- (bool)configureL2TPWithPPPOptions:(id)arg1;
- (bool)configureVpnOnDemandRules:(id)arg1;
- (bool)configurePPPCommon:(id)arg1;
- (bool)ingestPPPDict:(id)arg1;
- (id)getConfigurationProtocol;
- (bool)ingestDisconnectOptions:(id)arg1;
- (bool)setConfigurationVPNPassword:(id)arg1;
- (void)copyPasswordsFromSystemKeychain;
- (id)copyProfileDictionary;
- (void)clearKeychainInDomain:(long long)arg1;
- (void)syncWithKeychainInDomain:(long long)arg1;
- (void)setPayloadInfo:(id)arg1;
- (void)setAppVPN:(id)arg1;
- (void)setAlwaysOnVPN:(id)arg1;
- (void)setApplication:(id)arg1;
- (void)setVPN:(id)arg1;
- (void)setContentFilter:(id)arg1;
- (id)initWithName:(id)arg1 grade:(long long)arg2;
- (id)application;
- (void)clearUserKeychain;
- (void)syncWithUserKeychain;
- (id)applicationName;
- (id)initFromSCService:(struct __SCNetworkService { }*)arg1;
- (bool)updateFromSCService:(struct __SCNetworkService { }*)arg1;
- (id)payloadInfo;
- (void)clearSystemKeychain;
- (bool)applyChangesToSCServiceInPreferences:(struct __SCPreferences { }*)arg1;
- (bool)isSupportedBySC;
- (id)generateSignature;
- (void)syncWithSystemKeychain;
- (long long)grade;
- (id)contentFilter;
- (id)alwaysOnVPN;
- (id)appVPN;
- (id)VPN;
- (id)pluginType;
- (bool)checkValidityAndCollectErrors:(id)arg1;
- (id)externalIdentifier;
- (void)setExternalIdentifier:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (void)setApplicationIdentifier:(id)arg1;
- (id)identifier;
- (void)setName:(id)arg1;
- (id)applicationIdentifier;
- (id)initWithIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)name;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setApplicationName:(id)arg1;

@end
