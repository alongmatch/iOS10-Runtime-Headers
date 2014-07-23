/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSObject<OS_dispatch_queue>, NSURL, NSString;

@interface NSFileProviderExtension : NSObject <NSExtensionRequestHandling> {
    NSObject<OS_dispatch_queue> *_extensionDispatchQueue;
    NSObject<OS_dispatch_queue> *_memberQueue;
    NSURL *_memberQueueDocumentStorageURL;
    NSString *_memberQueueProviderIdentifier;
}

@property(retain) NSObject<OS_dispatch_queue> * memberQueue;
@property(retain) NSURL * memberQueueDocumentStorageURL;
@property(copy) NSString * memberQueueProviderIdentifier;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)placeholderURLForURL:(id)arg1;
+ (bool)writePlaceholderAtURL:(id)arg1 withMetadata:(id)arg2 error:(id*)arg3;

- (void)beginRequestWithExtensionContext:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)setMemberQueueProviderIdentifier:(id)arg1;
- (id)memberQueueProviderIdentifier;
- (void)setMemberQueueDocumentStorageURL:(id)arg1;
- (void)setMemberQueue:(id)arg1;
- (void)stopProvidingItemAtURL:(id)arg1;
- (void)itemChangedAtURL:(id)arg1;
- (void)startProvidingItemAtURL:(id)arg1 completionHandler:(id)arg2;
- (void)providePlaceholderAtURL:(id)arg1 completionHandler:(id)arg2;
- (id)persistentIdentifierForItemAtURL:(id)arg1;
- (id)URLForItemWithPersistentIdentifier:(id)arg1;
- (id)memberQueueDocumentStorageURL;
- (id)memberQueue;
- (id)providerIdentifier;
- (id)documentStorageURL;

@end
