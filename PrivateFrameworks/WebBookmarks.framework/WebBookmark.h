/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@class NSString, NSDictionary, NSData, NSDate;

@interface WebBookmark : NSObject  {
    bool_folder;
    NSString *_title;
    NSString *_url;
    NSString *_UUID;
    NSString *_serverID;
    NSString *_syncKey;
    NSData *_syncData;
    bool_editable;
    bool_deletable;
    bool_hidden;
    bool_syncable;
    bool_fetchedIconData;
    NSData *_iconData;
    bool_locallyAdded;
    int _archiveStatus;
    int _webFilterStatus;
    NSDictionary *_extraAttributes;
    NSDictionary *_localAttributes;
    unsigned int _id;
    unsigned int _parentID;
    unsigned int _specialID;
    unsigned int _orderIndex;
    bool_inserted;
    bool_needsSyncUpdate;
}

@property(retain) NSString * serverID;
@property(retain) NSString * syncKey;
@property(retain) NSData * syncData;
@property(retain) NSString * previewText;
@property bool locallyAdded;
@property int archiveStatus;
@property int webFilterStatus;
@property(retain) NSDate * dateLastArchived;
@property(retain) NSDate * dateAdded;
@property(retain) NSDate * dateLastViewed;
@property(retain) NSDate * dateLastFetched;
@property(retain) NSDictionary * nextPageURLs;
@property(retain) NSString * localPreviewText;
@property(retain) NSString * siteName;
@property(retain) NSString * sourceBundleID;
@property(retain) NSString * sourceLocalizedAppName;
@property bool needsSyncUpdate;
@property(retain) NSString * title;
@property(retain) NSString * address;
@property(readonly) unsigned int parentID;
@property(readonly) unsigned int identifier;
@property(readonly) NSString * UUID;
@property(readonly) unsigned int specialID;
@property(getter=isEditable,readonly) bool editable;
@property(getter=isDeletable,readonly) bool deletable;
@property(getter=isHidden,readonly) bool hidden;
@property(getter=isFolder,readonly) bool folder;
@property(getter=isInserted,readonly) bool inserted;
@property(getter=isSyncable,readonly) bool syncable;
@property bool fetchedIconData;
@property(retain) NSData * iconData;
@property(retain) NSDictionary * extraAttributes;
@property(retain) NSDictionary * localAttributes;

+ (id)_trimmedPreviewText:(id)arg1;
+ (id)_trimmedTitle:(id)arg1;

- (bool)isDeletable;
- (bool)shouldReattemptArchive;
- (bool)writeOfflineWebView:(id)arg1 asArchive:(bool)arg2 inReaderForm:(bool)arg3;
- (id)webarchivePathForNextPageURL:(id)arg1;
- (id)webarchivePathInReaderForm:(bool)arg1 fileExists:(bool*)arg2;
- (void)_removeDirectoryAtPath:(id)arg1;
- (unsigned long long)_sizeForFileOrDirectory:(id)arg1 withAttributes:(id)arg2;
- (id)_suggestedFileNameForWebView:(id)arg1;
- (void)setLocalPreviewText:(id)arg1;
- (void)setSiteName:(id)arg1;
- (id)siteName;
- (id)nextPageURLs;
- (void)setNextPageURLs:(id)arg1;
- (void)setTitle:(id)arg1 previewText:(id)arg2 dateLastFetched:(id)arg3;
- (void)setSourceBundleID:(id)arg1;
- (id)sourceBundleID;
- (void)setSourceLocalizedAppName:(id)arg1;
- (id)sourceLocalizedAppName;
- (void)setDateLastFetched:(id)arg1;
- (id)dateLastFetched;
- (void)setDateLastViewed:(id)arg1;
- (void)setDateAdded:(id)arg1;
- (id)dateAdded;
- (id)dateLastArchived;
- (void)setLocallyAdded:(bool)arg1;
- (void)setPreviewText:(id)arg1;
- (id)localPreviewText;
- (id)previewText;
- (void)_modifyLocalReadingListAttributes:(id)arg1;
- (void)_modifyExtraReadingListAttributes:(id)arg1;
- (id)_readingListPropertyNamed:(id)arg1;
- (id)_initWithSqliteRow:(struct sqlite3_stmt { }*)arg1 hasIcon:(bool)arg2;
- (id)initReadingListBookmarkWithTitle:(id)arg1 address:(id)arg2 previewText:(id)arg3;
- (void)_setSyncable:(bool)arg1;
- (void)_setInserted:(bool)arg1;
- (void)_setID:(unsigned int)arg1;
- (int)webFilterStatus;
- (bool)locallyAdded;
- (bool)fullArchiveAvailable;
- (void)_setOrderIndex:(unsigned int)arg1;
- (void)clearArchive;
- (id)_initWithSqliteRow:(struct sqlite3_stmt { }*)arg1;
- (void)clearArchiveSynchronously;
- (void)setDateLastArchived:(id)arg1;
- (unsigned long long)archiveSize;
- (id)dateLastViewed;
- (void)setWebFilterStatus:(int)arg1;
- (void)setArchiveStatus:(int)arg1;
- (int)archiveStatus;
- (void)setFetchedIconData:(bool)arg1;
- (bool)fetchedIconData;
- (void)setNeedsSyncUpdate:(bool)arg1;
- (bool)needsSyncUpdate;
- (bool)isSyncable;
- (bool)isFrequentlyVisitedSitesFolder;
- (bool)isWebFilterWhiteListFolder;
- (bool)isBookmarksMenuFolder;
- (bool)isBookmarksBarFolder;
- (id)initWhiteListBookmarkWithTitle:(id)arg1 address:(id)arg2;
- (id)initCarrierBookmarkWithTitle:(id)arg1 address:(id)arg2;
- (id)shortTypeDescription;
- (bool)isEqualToBookmark:(id)arg1;
- (id)initBuiltinDeviceBookmarkWithTitle:(id)arg1 address:(id)arg2;
- (void)_setParentID:(unsigned int)arg1;
- (void)setLocalAttributes:(id)arg1;
- (id)localAttributes;
- (unsigned int)_orderIndex;
- (bool)isFolder;
- (bool)isReadingListFolder;
- (bool)isReadingListItem;
- (unsigned int)specialID;
- (void)cleanupRedundantPreviewText;
- (void)setSyncData:(id)arg1;
- (id)syncData;
- (void)setSyncKey:(id)arg1;
- (unsigned int)parentID;
- (void)setServerID:(id)arg1;
- (void)_markSpecial:(unsigned int)arg1;
- (id)initFolderWithParentID:(unsigned int)arg1;
- (id)initWithTitle:(id)arg1 address:(id)arg2;
- (id)syncKey;
- (id)serverID;
- (void)setAddress:(id)arg1;
- (void)setExtraAttributes:(id)arg1;
- (bool)isInserted;
- (bool)isEditable;
- (unsigned int)identifier;
- (id)UUID;
- (id)extraAttributes;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)iconData;
- (void)setIconData:(id)arg1;
- (bool)isHidden;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (void)_setUUID:(id)arg1;
- (id)address;
- (id)localizedTitle;
- (void)_setHidden:(bool)arg1;

@end
