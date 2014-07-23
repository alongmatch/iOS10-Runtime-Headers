/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@class NSRecursiveLock, NSMapTable, NSString, NSTimer, PCSimpleTimer;

@interface PCPersistentInterfaceManager : NSObject <PCInterfaceMonitorDelegate> {
    NSRecursiveLock *_lock;
    NSMapTable *_delegatesAndQueues;
    struct __CFSet { } *_WiFiAutoAssociationDelegates;
    PCSimpleTimer *_WiFiAutoAssociationDisableTimer;
    struct __CFSet { } *_wakeOnWiFiDelegates;
    PCSimpleTimer *_wakeOnWiFiDisableTimer;
    void *_ctServerConnection;
    void *_interfaceAssertion;
    int _WWANContextIdentifier;
    NSString *_WWANInterfaceName;
    bool_isWWANInterfaceUp;
    NSTimer *_inCallWWANOverrideTimer;
    bool_isWWANInterfaceDataActive;
    bool_ctIsWWANInHomeCountry;
    bool_hasWWANStatusIndicator;
    bool_isPowerStateDetectionSupported;
    bool_isWWANInterfaceInProlongedHighPowerState;
    bool_isWWANInterfaceActivationPermitted;
    double _lastActivationTime;
    int _wwanRSSI;
    bool_isInCall;
    bool_isWakeOnWiFiSupported;
    bool_isWakeOnWiFiEnabled;
    bool_shouldOverrideOnCallBehavior;
}

@property(readonly) bool isWWANInterfaceUp;
@property(readonly) bool isWWANInHomeCountry;
@property(readonly) bool isWWANBetterThanWiFi;
@property(readonly) bool doesWWANInterfaceExist;
@property(readonly) NSString * WWANInterfaceName;
@property(readonly) bool isInternetReachableViaWiFi;
@property(readonly) bool isWakeOnWiFiSupported;
@property(readonly) bool isInternetReachable;
@property(retain,readonly) NSString * currentLinkQualityString;
@property(readonly) bool isPowerStateDetectionSupported;
@property(readonly) bool isWWANInterfaceInProlongedHighPowerState;
@property(readonly) bool isInCall;
@property(readonly) bool isWWANInterfaceActivationPermitted;
@property(readonly) bool areAllNetworkInterfacesDisabled;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)sharedInstance;

- (id)urlConnectionBoundToWWANInterfaceWithRequest:(id)arg1 delegate:(id)arg2 usesCache:(bool)arg3 maxContentLength:(long long)arg4 startImmediately:(bool)arg5 connectionProperties:(id)arg6;
- (void)bindCFStreamToWWANInterface:(struct __CFReadStream { }*)arg1;
- (bool)_allowBindingToWWAN;
- (void)enableWakeOnWiFi:(bool)arg1 forDelegate:(id)arg2;
- (void)enableWiFiAutoAssociation:(bool)arg1 forDelegate:(id)arg2;
- (void)_updateWWANInterfaceAssertions;
- (void)cutWiFiManagerDeviceAttached:(id)arg1;
- (bool)areAllNetworkInterfacesDisabled;
- (bool)isWakeOnWiFiSupported;
- (bool)isInternetReachableViaWiFi;
- (bool)isWWANInHomeCountry;
- (bool)isWWANInterfaceInProlongedHighPowerState;
- (bool)isPowerStateDetectionSupported;
- (id)WWANInterfaceName;
- (bool)isWWANInterfaceUp;
- (bool)isWWANBetterThanWiFi;
- (bool)_wifiIsPoorLinkQuality;
- (bool)_wwanIsPoorLinkQuality;
- (id)currentLinkQualityString;
- (void)_updateCTIsWWANInHomeCountry:(bool)arg1 isWWANInterfaceDataActive:(bool)arg2;
- (void)_inCallWWANOverrideTimerFired;
- (void)interfaceReachabilityChanged:(id)arg1;
- (void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2;
- (id)urlConnectionBoundToWWANInterface:(bool)arg1 withRequest:(id)arg2 delegate:(id)arg3 usesCache:(bool)arg4 maxContentLength:(long long)arg5 startImmediately:(bool)arg6 connectionProperties:(id)arg7;
- (void)bindCFStream:(struct __CFReadStream { }*)arg1 toWWANInterface:(bool)arg2;
- (bool)_isWiFiUsable;
- (bool)isInCall;
- (bool)isWWANInterfaceActivationPermitted;
- (bool)doesWWANInterfaceExist;
- (void)_adjustWakeOnWiFiLocked;
- (bool)_wantsWakeOnWiFiEnabled;
- (void)_adjustWakeOnWiFi;
- (bool)_isInternetReachableLocked;
- (bool)_isWWANInHomeCountryLocked;
- (bool)isInternetReachable;
- (bool)_wantsWWANInterfaceAssertion;
- (void)_clearInCallWWANOverrideTimerLocked;
- (void)_scheduleCalloutsForSelector:(SEL)arg1;
- (void)_updateWWANInterfaceUpState;
- (void)_updateWWANInterfaceAssertionsLocked;
- (void)_mainThreadCTConnectionAttempt;
- (void)_ctConnectionAttempt;
- (void)_updateWWANInterfaceUpStateLocked;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)_createCTConnection;
- (void)removeDelegate:(id)arg1;
- (void)_adjustWiFiAutoAssociationLocked;
- (void)_adjustWiFiAutoAssociation;
- (id)init;
- (void)dealloc;
- (void)handleMachMessage:(void*)arg1;

@end
