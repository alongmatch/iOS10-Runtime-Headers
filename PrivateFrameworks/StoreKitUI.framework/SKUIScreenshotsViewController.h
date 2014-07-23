/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, NSArray, SKUIVideoImageDataConsumer, SKUIClientContext, NSOperationQueue, <SKUIScreenshotsDelegate>, NSMutableArray, UICollectionView, SKUIScreenshotDataConsumer;

@interface SKUIScreenshotsViewController : UIViewController <SKUISlideshowViewControllerDataSource, SKUISlideshowViewControllerDelegate, UIScrollViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource> {
    SKUIClientContext *_clientContext;
    UICollectionView *_collectionView;
    SKUIScreenshotDataConsumer *_dataConsumer;
    <SKUIScreenshotsDelegate> *_delegate;
    NSOperationQueue *_operationQueue;
    NSArray *_screenshots;
    NSMutableArray *_screenshotImages;
    NSMutableArray *_screenshotRawImages;
    struct CGSize { 
        double width; 
        double height; 
    } _screenshotMaxSize;
    SKUIVideoImageDataConsumer *_trailerConsumer;
    NSArray *_trailers;
    NSMutableArray *_trailerImages;
}

@property(readonly) SKUIClientContext * clientContext;
@property <SKUIScreenshotsDelegate> * delegate;
@property(retain) NSOperationQueue * operationQueue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)_setTrailerImage:(id)arg1 forIndex:(long long)arg2;
- (void)_setImage:(id)arg1 forIndex:(long long)arg2;
- (id)initWithTrailers:(id)arg1 screenshots:(id)arg2 clientContext:(id)arg3;
- (void)slideshowViewController:(id)arg1 scrollToImageAtIndex:(long long)arg2;
- (id)slideshowViewController:(id)arg1 poppedImageViewAtIndex:(long long)arg2;
- (id)slideshowViewController:(id)arg1 imageURLAtIndex:(long long)arg2 size:(struct CGSize { double x1; double x2; }*)arg3;
- (id)slideshowViewController:(id)arg1 imageAtIndex:(long long)arg2;
- (long long)numberOfItemsInSlideshowViewController:(id)arg1;
- (id)clientContext;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
- (id)operationQueue;
- (void)setOperationQueue:(id)arg1;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)loadView;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)reloadData;

@end
