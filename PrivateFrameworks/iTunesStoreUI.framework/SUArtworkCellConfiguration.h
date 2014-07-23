/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, NSMutableDictionary, NSMutableArray;

@interface SUArtworkCellConfiguration : SUArrayCellConfiguration <ISStoreURLOperationDelegate> {
    NSMutableDictionary *_artworkByURL;
    NSMutableArray *_artworkLoadOperations;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)copyDefaultContext;

- (id)artworkImageForURL:(id)arg1;
- (id)artworkImageForItemImage:(id)arg1;
- (void)reloadAfterArtworkLoad;
- (id)_artworkImageForURL:(id)arg1 dataProvider:(id)arg2;
- (id)copyImageDataProvider;
- (void)cancelArtworkRequests;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)dealloc;
- (void)setRepresentedObject:(id)arg1;

@end
