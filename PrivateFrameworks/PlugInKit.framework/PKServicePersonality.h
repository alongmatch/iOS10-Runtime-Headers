/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
 */

@class NSString, NSXPCConnection, NSURL, NSUUID, NSDictionary, NSUserDefaults;

@interface PKServicePersonality : PKPlugInCore <PKCorePlugInProtocol, PKSubsystemServicePersonality> {
    id _plugInPrincipal;
    id _hostPrincipal;
    id _embeddedPrincipal;
    NSXPCConnection *_connection;
    NSUserDefaults *_preferences;
}

@property(retain) id plugInPrincipal;
@property(retain) id hostPrincipal;
@property(retain) id embeddedPrincipal;
@property(retain) NSXPCConnection * connection;
@property(retain) NSUserDefaults * preferences;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) NSString * identifier;
@property(readonly) NSString * version;
@property(readonly) NSURL * url;
@property(readonly) NSUUID * uuid;
@property(readonly) NSDictionary * bundleInfoDictionary;
@property(readonly) NSDictionary * plugInDictionary;


- (id)connection;
- (id)hostPrincipal;
- (id)initWithConnection:(id)arg1;
- (id)preferences;
- (void)setHostPrincipal:(id)arg1;
- (id)findProtocol:(id)arg1;
- (id)defaultPrincipalObject;
- (void)setupWithIdentifier:(id)arg1;
- (void)setPreferences:(id)arg1;
- (id)embeddedPrincipal;
- (void)setEmbeddedPrincipal:(id)arg1;
- (void)setPlugInPrincipal:(id)arg1;
- (void)prefsSetObject:(id)arg1 forKey:(id)arg2 inPlugIn:(id)arg3 result:(id)arg4;
- (void)prefsObjectForKey:(id)arg1 inPlugIn:(id)arg2 result:(id)arg3;
- (void)shutdownPlugIn;
- (void)beginUsingPlugIn:(id)arg1 ready:(id)arg2;
- (void)prepareUsingPlugIn:(id)arg1 hostProtocol:(id)arg2 reply:(id)arg3;
- (id)plugInPrincipal;
- (void)setConnection:(id)arg1;
- (void).cxx_destruct;
- (id)description;

@end
