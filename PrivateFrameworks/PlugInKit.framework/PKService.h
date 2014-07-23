/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
 */

@class NSString, NSArray, <PKServiceDelegate>, NSMutableDictionary, PKServicePersonality, NSObject<OS_dispatch_queue>, NSXPCListener;

@interface PKService : NSObject <NSXPCListenerDelegate> {
    bool_shared;
    <PKServiceDelegate> *_delegate;
    NSXPCListener *_serviceListener;
    NSMutableDictionary *_personalities;
    PKServicePersonality *_solePersonality;
    NSObject<OS_dispatch_queue> *__sync;
    NSArray *_subsystems;
}

@property(retain) <PKServiceDelegate> * delegate;
@property(retain) NSXPCListener * serviceListener;
@property(retain) NSMutableDictionary * personalities;
@property(retain) PKServicePersonality * solePersonality;
@property(retain) NSObject<OS_dispatch_queue> * _sync;
@property(retain) NSArray * subsystems;
@property bool shared;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (int)_defaultRun:(int)arg1 arguments:(const char **)arg2;
+ (id)defaultService;
+ (void)main;

- (bool)shared;
- (void)setShared:(bool)arg1;
- (void)checkEnvironment:(id)arg1;
- (id)personalityNamed:(id)arg1 forHostPid:(int)arg2;
- (id)connectionForPlugInNamed:(id)arg1;
- (id)embeddedPrincipalForPlugInNamed:(id)arg1;
- (id)hostPrincipalForPlugInNamed:(id)arg1;
- (id)plugInPrincipalForPlugInNamed:(id)arg1;
- (id)defaultsForPlugInNamed:(id)arg1;
- (void)copyAppStoreReceipt:(id)arg1;
- (void)launchContainingApplicationForPlugInNamed:(id)arg1;
- (void)setSolePersonality:(id)arg1;
- (id)personalities;
- (id)solePersonality;
- (id)_sync;
- (id)personalityNamed:(id)arg1;
- (void)mergeSubsystemList:(id)arg1 from:(id)arg2;
- (void)mergeSubsystems:(id)arg1 from:(id)arg2;
- (void)setSubsystems:(id)arg1;
- (id)discoverSubsystemNamed:(id)arg1 logMissing:(bool)arg2;
- (id)configuredSubsystemList;
- (void)discoverSubsystems;
- (void)setServiceListener:(id)arg1;
- (void)set_sync:(id)arg1;
- (void)setPersonalities:(id)arg1;
- (bool)unregisterPersonality:(id)arg1;
- (void)registerPersonality:(id)arg1;
- (id)subsystems;
- (void)run;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)serviceListener;

@end
