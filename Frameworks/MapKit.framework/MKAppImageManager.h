/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSMapTable, NSMutableDictionary, NSString, NSCache;

@interface MKAppImageManager : NSObject <NSURLConnectionDataDelegate> {
    NSCache *_iconCache;
    NSMapTable *_containers;
    NSMutableDictionary *_urlConnections;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)sharedImageManager;

- (void)cancelLoadAppImageAtURL:(id)arg1;
- (void)loadAppImageAtURL:(id)arg1 completionHandler:(id)arg2;
- (void)clearImageCache;
- (id)init;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void).cxx_destruct;

@end
