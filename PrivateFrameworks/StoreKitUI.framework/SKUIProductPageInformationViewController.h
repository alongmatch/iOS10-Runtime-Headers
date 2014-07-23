/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIContentRatingArtworkResourceLoader, NSString, SKUIProductPageProductInfo, SKUIProductInformationView, SKUIProductPageItem, SKUIClientContext, NSOperationQueue;

@interface SKUIProductPageInformationViewController : UIViewController <SKUIContentRatingArtworkLoaderObserver> {
    SKUIClientContext *_clientContext;
    SKUIContentRatingArtworkResourceLoader *_contentRatingArtworkLoader;
    SKUIProductInformationView *_informationView;
    SKUIProductPageItem *_item;
    SKUIProductPageProductInfo *_productInfo;
    NSOperationQueue *_operationQueue;
}

@property(readonly) SKUIClientContext * clientContext;
@property(readonly) SKUIProductPageItem * item;
@property(retain) NSOperationQueue * operationQueue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)_informationLinesWithItem:(id)arg1 ratingImage:(id)arg2;
- (id)_informationLinesWithProductInfo:(id)arg1;
- (void)_updateLinesWithRatingImage:(id)arg1;
- (id)_contentRatingResourceLoader;
- (id)initWithProductInformation:(id)arg1 clientContext:(id)arg2;
- (id)initWithItem:(id)arg1 clientContext:(id)arg2;
- (void)contentRatingArtworkLoader:(id)arg1 didLoadImage:(id)arg2 forContentRating:(id)arg3;
- (id)clientContext;
- (void)dealloc;
- (void).cxx_destruct;
- (id)item;
- (id)operationQueue;
- (void)setOperationQueue:(id)arg1;
- (void)loadView;

@end
