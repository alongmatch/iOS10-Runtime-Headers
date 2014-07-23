/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class NSMutableDictionary, NSString, <BBDataProviderStoreDelegate>, NSObject<OS_dispatch_queue>, NSMutableArray;

@interface BBLocalDataProviderStore : NSObject <BBLocalDataProviderFactoryStore, BBDataProviderStore> {
    <BBDataProviderStoreDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_serverQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_dataProvidersBySectionID;
    NSMutableDictionary *_dataProvidersByUniversalSectionID;
    NSMutableArray *_localFactories;
}

@property(retain) NSMutableDictionary * dataProvidersBySectionID;
@property(retain) NSMutableDictionary * dataProvidersByUniversalSectionID;
@property(retain) NSMutableArray * localFactories;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)localDataProviderStoreWithDelegate:(id)arg1 dataProviderQueue:(id)arg2;

- (void)setLocalFactories:(id)arg1;
- (id)localFactories;
- (void)setDataProvidersByUniversalSectionID:(id)arg1;
- (id)dataProvidersByUniversalSectionID;
- (void)setDataProvidersBySectionID:(id)arg1;
- (id)dataProvidersBySectionID;
- (void)_queue_addDataProvider:(id)arg1;
- (void)_addLocalDataProviderFactoryOfClass:(Class)arg1;
- (void)_addDataProviderClass:(Class)arg1;
- (void)_loadDataProviderPluginBundle:(id)arg1;
- (id)initWithDelegate:(id)arg1 dataProviderQueue:(id)arg2;
- (void)loadAllDataProviders;
- (void)performBlockOnDataProviders:(id)arg1;
- (void)removeDataProvider:(id)arg1;
- (id)dataProviderForUniversalSectionID:(id)arg1;
- (id)dataProviderForSectionID:(id)arg1;
- (void)_queue_removeDataProvider:(id)arg1;
- (id)debugDescriptionWithChildren:(unsigned long long)arg1;
- (void)addParentSectionInfo:(id)arg1 displayName:(id)arg2 icon:(id)arg3;
- (void)addDataProvider:(id)arg1;
- (void)removeDataProviderWithSectionID:(id)arg1;
- (id)debugDescription;
- (void)dealloc;

@end
