/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@class WebBookmarksXPCConnection, NSTimer, NSString, NSObject<OS_xpc_object>;

@interface WBReadingListPrivate : NSObject <WebBookmarksXPCConnectionDelegate> {
    WebBookmarksXPCConnection *_connection;
    NSObject<OS_xpc_object> *_batchedReadingListItems;
    NSTimer *_batchTimer;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)_addReadingListItemWithURL:(id)arg1 title:(id)arg2 previewText:(id)arg3;
- (void)connection:(id)arg1 didCloseWithError:(id)arg2;
- (void)_batchTimerDidFire:(id)arg1;
- (id)init;
- (void)dealloc;

@end
