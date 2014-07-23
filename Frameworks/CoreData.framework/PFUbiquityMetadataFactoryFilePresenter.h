/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSString, PFUbiquityLocation, NSURL, NSOperationQueue;

@interface PFUbiquityMetadataFactoryFilePresenter : NSObject <NSFilePresenter> {
    NSURL *_presentedItemURL;
    PFUbiquityLocation *_presentedItemLocation;
}

@property(readonly) NSURL * presentedItemURL;
@property(readonly) PFUbiquityLocation * presentedItemLocation;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(retain,readonly) NSOperationQueue * presentedItemOperationQueue;
@property(copy,readonly) NSURL * primaryPresentedItemURL;

+ (void)initialize;

- (id)presentedItemLocation;
- (id)initWithMetadataStoreFileLocation:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)presentedItemOperationQueue;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id)arg1;
- (void)savePresentedItemChangesWithCompletionHandler:(id)arg1;
- (void)relinquishPresentedItemToWriter:(id)arg1;
- (void)relinquishPresentedItemToReader:(id)arg1;
- (id)presentedItemURL;

@end
