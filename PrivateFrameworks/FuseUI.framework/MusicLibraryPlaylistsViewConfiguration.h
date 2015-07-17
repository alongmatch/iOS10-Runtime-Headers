/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicLibraryPlaylistsViewConfiguration : MusicLibraryBrowseTableViewConfiguration {
    NSMutableSet * _additionalQueryFilterPredicates;
    unsigned int  _playlistsConfigurationOptions;
    NSString * _playlistsFilter;
    BOOL  _playlistsFilterIsCuratorID;
}

@property (nonatomic, readonly, copy) NSSet *additionalQueryFilterPredicates;
@property (nonatomic) unsigned int playlistsConfigurationOptions;
@property (nonatomic, copy) NSString *playlistsFilter;

+ (void)getDetailViewController:(id*)arg1 playbackContext:(id*)arg2 forEntityValueContext:(id)arg3 sourceViewController:(id)arg4;

- (void).cxx_destruct;
- (void)_handleDeletionOfEntityValueProvider:(id)arg1;
- (void)_updatePlaylistsFilterIsCuratorIDStatus;
- (void)addQueryFilterPredicate:(id)arg1;
- (id)additionalQueryFilterPredicates;
- (void)applyEntityProviderChangeRecords:(id)arg1;
- (BOOL)canDeleteEntityValueContext:(id)arg1;
- (int)handleSelectionFromUserActivityContext:(id)arg1 containerItem:(id)arg2 entityValueContext:(id)arg3 viewController:(id)arg4;
- (int)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2;
- (id)init;
- (id)initWithPlaylistsFilter:(id)arg1 playlistsConfigurationOptions:(unsigned int)arg2;
- (id)loadEntityViewDescriptor;
- (unsigned int)playlistsConfigurationOptions;
- (id)playlistsFilter;
- (void)setPlaylistsConfigurationOptions:(unsigned int)arg1;
- (void)setPlaylistsFilter:(id)arg1;

@end