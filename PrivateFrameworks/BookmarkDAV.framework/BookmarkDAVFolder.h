/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
 */

@class NSData, NSString, CoreDAVErrorItem, NSArray, NSURL, NSDictionary, NSMutableArray;

@interface BookmarkDAVFolder : CoreDAVContainer <CoreDAVModifiedContainer, CoreDAVAddedContainer, CoreDAVLeafDataPayload> {
    NSDictionary *_appleAttributes;
    NSMutableArray *_childrenOrder;
    NSString *_bulkParsedCTag;
    NSString *_bulkParsedPTag;
    CoreDAVErrorItem *_bulkUploadErrorItem;
}

@property bool isBookmarkFolder;
@property bool isBookmarkBarFolder;
@property bool isBookmarkMenuFolder;
@property(readonly) NSDictionary * appleAttributes;
@property(retain) NSString * bulkParsedCTag;
@property(retain) NSString * bulkParsedPTag;
@property(readonly) NSArray * childrenOrder;
@property(retain) CoreDAVErrorItem * bulkUploadErrorItem;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(retain) NSURL * serverID;
@property(readonly) NSData * dataPayload;
@property(readonly) NSString * syncKey;

+ (id)copyPropertyMappingsForParser;

- (id)bulkParsedPTag;
- (id)bulkParsedCTag;
- (void)setIsBookmarkMenuFolder:(bool)arg1;
- (void)setIsBookmarkBarFolder:(bool)arg1;
- (void)setIsBookmarkFolder:(bool)arg1;
- (bool)isBookmarkMenuFolder;
- (bool)isBookmarkBarFolder;
- (bool)isBookmarkFolder;
- (id)_appleAttributesString;
- (void)_faultResourceType;
- (void)setBulkParsedPTag:(id)arg1;
- (void)setBulkParsedCTag:(id)arg1;
- (id)initWithServerID:(id)arg1 containerName:(id)arg2 appleAttributes:(id)arg3;
- (void)setBulkUploadErrorItem:(id)arg1;
- (id)bulkUploadErrorItem;
- (id)appleAttributes;
- (void)setServerID:(id)arg1;
- (id)copyPropPatchTask;
- (id)copyMkcolTask;
- (id)childrenOrder;
- (id)syncKey;
- (id)serverID;
- (id)dataPayload;
- (id)initWithURL:(id)arg1 eTag:(id)arg2 dataPayload:(id)arg3 inContainerWithURL:(id)arg4 withAccountInfoProvider:(id)arg5;
- (void)applyParsedProperties:(id)arg1;
- (void)dealloc;

@end
