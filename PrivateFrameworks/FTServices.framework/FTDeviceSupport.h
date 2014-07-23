/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSString, NSDictionary;

@interface FTDeviceSupport : NSObject  {
    NSString *_number;
    bool_blockPost;
    bool_supportsFrontCamera;
    bool_supportsBackCamera;
    bool_supportsiMessage;
    bool_supportsSMS;
    bool_supportsMMS;
    bool_mmsConfigured;
    bool_supportsHandoff;
    bool_supportsTethering;
    bool_supportsFT;
    bool_supportsFTA;
    bool_supportsWiFi;
    bool_supportsWLAN;
    bool_supportsNonWiFiFaceTime;
    bool_supportsCellularData;
    bool_shouldUseSIMState;
    bool_commCenterDead;
    bool_simBecameNotReady;
    bool_simInserted;
    int _carrierBundleSupported;
    int _iMessageAllowedToken;
    bool_faceTimeBlocked;
    bool_iMessageBlocked;
    bool_accountModificationRestricted;
    long long _performanceClass;
}

@property(readonly) bool isTelephonyDevice;
@property(readonly) bool faceTimeAvailable;
@property(readonly) bool faceTimeBlocked;
@property(readonly) bool faceTimeSupported;
@property(readonly) bool callingAvailable;
@property(readonly) bool callingBlocked;
@property(readonly) bool callingSupported;
@property(readonly) bool nonWifiFaceTimeAvailable;
@property(readonly) bool nonWifiCallingAvailable;
@property(readonly) bool iMessageAvailable;
@property(readonly) bool iMessageBlocked;
@property(readonly) bool iMessageSupported;
@property(readonly) bool identityServicesSupported;
@property(readonly) bool madridAvailable;
@property(readonly) bool madridBlocked;
@property(readonly) bool madridSupported;
@property(readonly) bool conferencingEnabled;
@property(readonly) bool conferencingBlocked;
@property(readonly) bool conferencingAllowed;
@property(readonly) bool registrationSupported;
@property(readonly) bool commCenterDead;
@property(readonly) bool accountModificationRestricted;
@property(readonly) bool wantsBreakBeforeMake;
@property(readonly) bool SIMInserted;
@property(readonly) bool isC2KEquipment;
@property(readonly) bool supportsSimultaneousVoiceAndDataRightNow;
@property(readonly) bool supportsSMSIdentification;
@property(readonly) bool supportsAppleIDIdentification;
@property(readonly) bool supportsHandoff;
@property(readonly) bool supportsTethering;
@property(readonly) bool supportsSMS;
@property(readonly) bool supportsMMS;
@property(readonly) bool mmsConfigured;
@property(readonly) bool supportsWiFi;
@property(readonly) bool supportsCellularData;
@property(readonly) bool supportsWLAN;
@property(readonly) bool supportsNonWiFiFaceTime;
@property(readonly) bool supportsNonWiFiCalling;
@property(readonly) bool supportsFrontFacingCamera;
@property(readonly) bool supportsBackFacingCamera;
@property(readonly) NSDictionary * CTNetworkInformation;
@property(readonly) NSDictionary * telephonyCapabilities;
@property(readonly) NSString * deviceName;
@property(readonly) NSString * deviceColor;
@property(readonly) NSString * enclosureColor;
@property(readonly) NSString * deviceIDPrefix;
@property(readonly) NSString * deviceTypeIDPrefix;
@property(readonly) NSString * model;
@property(readonly) NSString * userAgentString;
@property(readonly) NSString * productName;
@property(readonly) NSString * productVersion;
@property(readonly) NSString * productBuildVersion;
@property(readonly) NSString * deviceInformationString;
@property(readonly) NSString * telephoneNumber;
@property(readonly) long long performanceClass;
@property(readonly) long long deviceType;

+ (id)sharedInstance;

- (bool)supportsBackFacingCamera;
- (bool)supportsFrontFacingCamera;
- (bool)callingAvailable;
- (bool)faceTimeAvailable;
- (bool)supportsHandoff;
- (bool)supportsTethering;
- (id)enclosureColor;
- (id)deviceColor;
- (bool)mmsConfigured;
- (bool)supportsMMS;
- (bool)supportsSMS;
- (id)telephoneNumber;
- (bool)supportsCellularData;
- (bool)supportsWiFi;
- (bool)nonWifiCallingAvailable;
- (long long)performanceClass;
- (bool)supportsSMSIdentification;
- (id)CTNetworkInformation;
- (void)_handlePhoneNumberRegistrationStateChanged:(id)arg1;
- (void)_handleTechnologyChange:(id)arg1;
- (void)_simStatusChanged:(id)arg1;
- (bool)wantsBreakBeforeMake;
- (bool)SIMInserted;
- (id)telephonyCapabilities;
- (id)deviceTypeIDPrefix;
- (id)deviceIDPrefix;
- (bool)accountModificationRestricted;
- (bool)registrationSupported;
- (bool)identityServicesSupported;
- (bool)iMessageBlocked;
- (bool)iMessageAvailable;
- (bool)commCenterDead;
- (void)_registerForInternalCoreTelephonyNotifications;
- (void)_carrierChanged;
- (void)_operatorChanged;
- (void)_registerForCommCenterReadyNotifications;
- (void)carrierSettingsChanged:(id)arg1;
- (bool)nonWifiFaceTimeAvailable;
- (void)_lockdownStateChanged:(id)arg1;
- (bool)supportsAppleIDIdentification;
- (bool)iMessageSupported;
- (bool)conferencingAllowed;
- (bool)conferencingBlocked;
- (bool)conferencingEnabled;
- (bool)madridAvailable;
- (bool)faceTimeBlocked;
- (bool)callingBlocked;
- (bool)madridBlocked;
- (bool)madridSupported;
- (void)_unregisterForCommCenterReadyNotifications;
- (void)_unregisterForCarrierNotifications;
- (void)_unregisterForCoreTelephonyNotifications;
- (void)_unregisterForManagedConfigurationNotifications;
- (void)_registerForManagedConfigurationNotifications;
- (void)_registerForLockdownNotifications;
- (void)_registerForCoreTelephonyNotifications;
- (void)_registerForCapabilityNotifications;
- (void)_registerForCarrierNotifications;
- (void)_updateManagedConfigurationSettings;
- (void)_watchNotifyTokens;
- (bool)isC2KEquipment;
- (id)model;
- (long long)deviceType;
- (id)deviceInformationString;
- (id)userAgentString;
- (id)productBuildVersion;
- (id)productVersion;
- (id)productName;
- (id)deviceName;
- (bool)supportsNonWiFiFaceTime;
- (bool)supportsNonWiFiCalling;
- (bool)supportsWLAN;
- (bool)supportsSimultaneousVoiceAndDataRightNow;
- (bool)faceTimeSupported;
- (bool)callingSupported;
- (bool)isTelephonyDevice;
- (id)init;
- (void)dealloc;
- (void)_updateCapabilities;

@end
