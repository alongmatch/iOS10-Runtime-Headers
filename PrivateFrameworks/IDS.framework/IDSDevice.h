/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@class _IDSDevice, NSString, NSUUID, NSArray, NSData;

@interface IDSDevice : NSObject  {
    _IDSDevice *_internal;
}

@property(retain,readonly) NSString * uniqueID;
@property(retain,readonly) NSString * modelIdentifier;
@property(readonly) NSString * productName;
@property(readonly) NSString * productVersion;
@property(readonly) NSString * productBuildVersion;
@property(retain,readonly) NSString * name;
@property(retain,readonly) NSString * service;
@property(retain,readonly) NSString * deviceColor;
@property(retain,readonly) NSString * enclosureColor;
@property(readonly) bool isDefaultPairedDevice;
@property(getter=isNearby,readonly) bool nearby;
@property(readonly) bool locallyPresent;
@property(setter=setNSUUID:,retain) NSUUID * nsuuid;
@property(readonly) bool supportsTethering;
@property(readonly) bool supportsHandoff;
@property(readonly) bool supportsiCloudPairing;
@property(readonly) bool supportsSMSRelay;
@property(readonly) bool supportsMMSRelay;
@property(readonly) bool supportsPhoneCalls;
@property(retain,readonly) NSArray * identities;
@property(retain,readonly) NSData * pushToken;


- (int)openSocketForDomain:(id)arg1;
- (void)cleanupStreamPairWithInputStream:(id)arg1 outputStream:(id)arg2;
- (void)establishStreamPairWithOptions:(id)arg1 completionHandler:(id)arg2 onQueue:(id)arg3;
- (int)openSocketForDomain:(id)arg1 transportType:(long long)arg2;
- (void)closeSocketForDomain:(id)arg1;
- (void)openSocketWithOptions:(id)arg1 completionHandler:(id)arg2 onQueue:(id)arg3;
- (int)socketForDomain:(id)arg1;
- (void)setNSUUID:(id)arg1;
- (void)closeSocket:(int)arg1;
- (bool)supportsHandoff;
- (bool)supportsTethering;
- (bool)locallyPresent;
- (id)enclosureColor;
- (id)deviceColor;
- (bool)supportsPhoneCalls;
- (bool)supportsMMSRelay;
- (bool)supportsSMSRelay;
- (id)modelIdentifier;
- (void)_addIdentity:(id)arg1;
- (void)_updateNSUUID:(id)arg1;
- (bool)isNearby;
- (void)_setAccount:(id)arg1;
- (bool)supportsiCloudPairing;
- (bool)isDefaultLocalDevice;
- (id)identities;
- (id)pushToken;
- (bool)isDefaultPairedDevice;
- (id)nsuuid;
- (id)_internal;
- (id)productBuildVersion;
- (id)productVersion;
- (id)productName;
- (id)initWithDictionary:(id)arg1;
- (id)uniqueID;
- (id)service;
- (id)name;
- (void)dealloc;
- (id)description;
- (id)_initWithDictionary:(id)arg1;

@end
