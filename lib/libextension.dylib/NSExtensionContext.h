/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/usr/lib/libextension.dylib
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSUUID, NSXPCConnection, NSArray, <_NSExtensionContextHosting>, NSString, <_NSExtensionContextVending>, NSXPCListener;

@interface NSExtensionContext : NSObject <NSSecureCoding, NSCopying, NSXPCListenerDelegate, _NSExtensionAuxHostingBase> {
    NSArray *_inputItems;
    NSUUID *__UUID;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id __requestCleanUpBlock;

    <_NSExtensionContextHosting> *__extensionHostProxy;
    <_NSExtensionContextVending> *__extensionVendorProxy;
    NSXPCConnection *__auxiliaryConnection;
    NSXPCListener *__auxiliaryListener;
    id __principalObject;
}

@property(copy) NSArray * inputItems;
@property(copy) NSUUID * _UUID;
@property(setter=_setRequestCleanUpBlock:,copy) id _requestCleanUpBlock;
@property(setter=_setExtensionHostProxy:,retain) <_NSExtensionContextHosting> * _extensionHostProxy;
@property(setter=_setExtensionVendorProxy:,retain) <_NSExtensionContextVending> * _extensionVendorProxy;
@property(setter=_setAuxiliaryConnection:,retain) NSXPCConnection * _auxiliaryConnection;
@property(setter=_setAuxiliaryListener:,retain) NSXPCListener * _auxiliaryListener;
@property(setter=_setPrincipalObject:) id _principalObject;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionContextHostProtocolAllowedClassesForItems;
+ (id)_extensionContextForIdentifier:(id)arg1;
+ (id)_extensionContextVendorProtocol;
+ (id)_extensionContextHostProtocol;
+ (void)initialize;
+ (bool)supportsSecureCoding;

- (id)_principalObject;
- (void)_setAuxiliaryListener:(id)arg1;
- (id)_auxiliaryListener;
- (void)_setAuxiliaryConnection:(id)arg1;
- (void)_setExtensionVendorProxy:(id)arg1;
- (id)_extensionVendorProxy;
- (id)_extensionHostProxy;
- (id)_requestCleanUpBlock;
- (void)set_UUID:(id)arg1;
- (id)_UUID;
- (void)_setInputItems:(id)arg1;
- (id)inputItems;
- (void)_loadPreviewImageForPayload:(id)arg1 completionHandler:(id)arg2;
- (void)_loadItemForPayload:(id)arg1 completionHandler:(id)arg2;
- (void)openURL:(id)arg1 completion:(id)arg2;
- (void)cancelRequestWithError:(id)arg1;
- (void)completeRequestReturningItems:(id)arg1;
- (void)didConnectToVendor:(id)arg1;
- (bool)_isHost;
- (void)openURL:(id)arg1 completionHandler:(id)arg2;
- (void)completeRequestReturningItems:(id)arg1 expirationHandler:(id)arg2 completion:(id)arg3;
- (void)_completeRequestReturningItemsSecondHalf:(id)arg1;
- (void)completeRequestReturningItems:(id)arg1 completionHandler:(id)arg2;
- (id)initWithInputItems:(id)arg1;
- (id)initWithInputItems:(id)arg1 contextUUID:(id)arg2;
- (id)_derivedExtensionAuxiliaryHostProtocol;
- (void)___nsx_pingHost:(id)arg1;
- (void)_openURL:(id)arg1 completion:(id)arg2;
- (void)_setPrincipalObject:(id)arg1;
- (void)_willPerformHostCallback:(id)arg1;
- (void)_setExtensionHostProxy:(id)arg1;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;
- (id)init;
- (void)invalidate;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)_auxiliaryConnection;
- (void)_setRequestCleanUpBlock:(id)arg1;

@end
