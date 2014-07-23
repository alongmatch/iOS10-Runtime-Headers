/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSURL, NSDate, NSDictionary, NSOrderedSet, <NSObject><NSCopying>, NSString, NSObject<PLAlbumProtocol>, NSMutableOrderedSet, PLManagedAsset, NSArray, NSNumber, UIImage;

@interface PLShuffledAlbum : NSObject <PLIndexMappingCache, PLAlbumProtocol> {
    struct __CFArray { } *_toBackingMap;
    struct __CFArray { } *_fromBackingMap;
    struct NSObject { Class x1; } *_backingAlbum;
    PLManagedAsset *_startingAsset;
    NSMutableOrderedSet *_assets;
}

@property(retain,readonly) PLManagedAsset * startingAsset;
@property(retain,readonly) NSObject<PLAlbumProtocol> * backingAlbum;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) <NSObject><NSCopying> * cachedIndexMapState;
@property(retain) NSMutableOrderedSet * _assets;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(retain,readonly) NSString * uuid;
@property(retain,readonly) NSString * title;
@property(copy,readonly) NSString * localizedTitle;
@property(retain,readonly) NSOrderedSet * assets;
@property(readonly) unsigned long long approximateCount;
@property(readonly) unsigned long long assetsCount;
@property(readonly) unsigned long long photosCount;
@property(readonly) unsigned long long videosCount;
@property(readonly) bool isEmpty;
@property(retain) PLManagedAsset * keyAsset;
@property(retain) PLManagedAsset * secondaryKeyAsset;
@property(retain) PLManagedAsset * tertiaryKeyAsset;
@property(readonly) bool canShowComments;
@property(readonly) bool canShowAvalancheStacks;
@property(copy,readonly) NSArray * localizedLocationNames;
@property(retain,readonly) NSDate * startDate;
@property(retain,readonly) NSDate * endDate;
@property(retain,readonly) NSNumber * kind;
@property(readonly) int kindValue;
@property(retain,readonly) NSMutableOrderedSet * mutableAssets;
@property bool hasUnseenContentBoolValue;
@property(copy,readonly) NSString * name;
@property(retain,readonly) UIImage * posterImage;
@property(readonly) bool isLibrary;
@property(readonly) bool isCameraAlbum;
@property(readonly) bool isPanoramasAlbum;
@property(readonly) bool isWallpaperAlbum;
@property(readonly) bool isPhotoStreamAlbum;
@property(readonly) bool isCloudSharedAlbum;
@property(readonly) bool isPendingPhotoStreamAlbum;
@property(readonly) bool isStandInAlbum;
@property(readonly) bool isFolder;
@property(readonly) bool isOwnedCloudSharedAlbum;
@property(readonly) bool isFamilyCloudSharedAlbum;
@property(readonly) bool isMultipleContributorCloudSharedAlbum;
@property(readonly) bool isRecentlyAddedAlbum;
@property(readonly) bool canContributeToCloudSharedAlbum;
@property(readonly) bool shouldDeleteWhenEmpty;
@property(retain) NSDictionary * slideshowSettings;
@property(retain) NSString * importSessionID;
@property(retain,readonly) NSURL * groupURL;
@property(copy,readonly) id sortingComparator;
@property int pendingItemsCount;
@property int pendingItemsType;

+ (struct NSObject { Class x1; }*)unshuffledAlbum:(struct NSObject { Class x1; }*)arg1;
+ (struct NSObject { Class x1; }*)shuffledAlbum:(struct NSObject { Class x1; }*)arg1 startingAsset:(id)arg2;

- (void)replaceObjectInShuffledAssetsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeObjectFromShuffledAssetsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inShuffledAssetsAtIndex:(unsigned long long)arg2;
- (id)objectInShuffledAssetsAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexInShuffledAssetsOfObject:(id)arg1;
- (unsigned long long)countOfShuffledAssets;
- (struct __CFArray { }*)fromBackingMap;
- (void)createShuffledIndexesMaps;
- (id)startingAsset;
- (void)createShuffledIndexesMapsIfNeeded;
- (id)initWithBackingAlbum:(struct NSObject { Class x1; }*)arg1 startingAsset:(id)arg2;
- (id)cachedIndexMapState;
- (Class)derivedChangeNotificationClass;
- (bool)mappedDataSourceChanged:(id)arg1 remoteNotificationData:(id)arg2;
- (id)_assets;
- (void)set_assets:(id)arg1;
- (struct NSObject { Class x1; }*)backingAlbum;
- (id)localizedLocationNames;
- (bool)canShowAvalancheStacks;
- (bool)canShowComments;
- (void)setTertiaryKeyAsset:(id)arg1;
- (id)tertiaryKeyAsset;
- (void)setSecondaryKeyAsset:(id)arg1;
- (id)secondaryKeyAsset;
- (void)setKeyAsset:(id)arg1;
- (id)keyAsset;
- (unsigned long long)videosCount;
- (unsigned long long)assetsCount;
- (unsigned long long)approximateCount;
- (bool)canPerformEditOperation:(unsigned long long)arg1;
- (void)setPendingItemsType:(int)arg1;
- (int)pendingItemsType;
- (void)setPendingItemsCount:(int)arg1;
- (int)pendingItemsCount;
- (id)sortingComparator;
- (id)groupURL;
- (void)setImportSessionID:(id)arg1;
- (id)importSessionID;
- (void)setSlideshowSettings:(id)arg1;
- (id)slideshowSettings;
- (bool)shouldDeleteWhenEmpty;
- (bool)canContributeToCloudSharedAlbum;
- (bool)isMultipleContributorCloudSharedAlbum;
- (bool)isFamilyCloudSharedAlbum;
- (bool)isOwnedCloudSharedAlbum;
- (bool)isStandInAlbum;
- (bool)isPendingPhotoStreamAlbum;
- (bool)isPhotoStreamAlbum;
- (bool)isWallpaperAlbum;
- (bool)isPanoramasAlbum;
- (bool)isLibrary;
- (void)setHasUnseenContentBoolValue:(bool)arg1;
- (bool)hasUnseenContentBoolValue;
- (id)mutableAssets;
- (void)batchFetchAssets:(id)arg1;
- (void)reducePendingItemsCountBy:(unsigned long long)arg1;
- (bool)isCloudSharedAlbum;
- (bool)isCameraAlbum;
- (int)kindValue;
- (bool)isRecentlyAddedAlbum;
- (bool)isFolder;
- (unsigned long long)photosCount;
- (id)assets;
- (id)posterImage;
- (id)kind;
- (id)uuid;
- (id)title;
- (id)init;
- (id)name;
- (bool)isEmpty;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (id)localizedTitle;

@end
