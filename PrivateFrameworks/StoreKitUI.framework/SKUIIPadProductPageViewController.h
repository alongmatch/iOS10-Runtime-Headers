/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIProductPageReviewsViewController, NSURLRequest, SKUINetworkErrorViewController, SKUIProductPage, SKUIClientContext, SKUIFacebookLikeStatus, SKUIIncompatibleAppViewController, SKUILoadProductPageOperation, NSString, SSMetricsPageEvent, SKUIMessageBanner, SKUIProductPageDetailsViewController, SKUIItem, SKUIProductPagePlaceholderViewController, NSOperationQueue, SKUISwooshArrayViewController, UIView, SKUIProductPageHeaderViewController, <SKUIIPadProductPageDelegate>, SKUIMetricsController, ACAccountStore, NSURL;

@interface SKUIIPadProductPageViewController : UIViewController <SKUIMetricsViewController, SKUINetworkErrorDelegate, SKUIProductPageHeaderViewDelegate, SKUIProductPageChildViewControllerDelegate, SKUIMessageBannerDelegate> {
    ACAccountStore *_accountStore;
    bool_askPermission;
    SKUIMessageBanner *_banner;
    NSString *_bannerText;
    SKUIClientContext *_clientContext;
    long long _defaultSelectedSectionIndex;
    <SKUIIPadProductPageDelegate> *_delegate;
    SKUIProductPageDetailsViewController *_detailsViewController;
    bool_didSendCannotOpen;
    SKUIFacebookLikeStatus *_facebookLikeStatus;
    SKUIProductPageHeaderViewController *_headerViewController;
    SKUIItem *_item;
    SKUIIncompatibleAppViewController *_incompatibleViewController;
    SSMetricsPageEvent *_lastPageEvent;
    SKUILoadProductPageOperation *_loadOperation;
    long long _lookupItemIdentifier;
    SKUIMetricsController *_metricsController;
    SKUINetworkErrorViewController *_networkErrorViewController;
    NSOperationQueue *_operationQueue;
    UIView *_overlayView;
    SKUIProductPagePlaceholderViewController *_placeholderViewController;
    SKUIProductPage *_productPage;
    SKUISwooshArrayViewController *_relatedViewController;
    SKUIProductPageReviewsViewController *_reviewsViewController;
    long long _selectedSectionIndex;
    NSURLRequest *_urlRequest;
}

@property(readonly) SKUIItem * item;
@property(readonly) SKUIProductPage * productPage;
@property(readonly) NSURL * URL;
@property(retain) SKUIClientContext * clientContext;
@property <SKUIIPadProductPageDelegate> * delegate;
@property bool askPermission;
@property(copy) NSString * bannerText;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)initWithProductPage:(id)arg1;
- (id)bannerText;
- (void)askPermissionBannerDidSelect:(id)arg1;
- (void)networkErrorViewControllerInvalidated:(id)arg1;
- (id)_relatedViewController;
- (id)_detailsViewController;
- (void)_showIncompatibleView;
- (bool)_isIncompatibleItem;
- (void)_showError:(id)arg1;
- (void)_showViewController:(id)arg1;
- (id)_viewControllerForSectionIndex:(long long)arg1;
- (void)_setFacebookLikeStatus:(id)arg1;
- (void)_reloadHeaderViewController;
- (void)_sendCannotOpen;
- (void)_reloadFacebookLikeStatus;
- (id)_reviewsViewController;
- (void)_selectSectionIndex:(long long)arg1;
- (void)_showBanner;
- (void)_setProductPage:(id)arg1 error:(id)arg2;
- (void)_setDefaultSectionIndexWithFragment:(long long)arg1;
- (id)_initSKUIIPadProductPageViewController;
- (struct CGPoint { double x1; double x2; })topContentOffset;
- (void)productPageHeaderViewDidWantAskPermissionBanner:(id)arg1;
- (void)productPageHeaderView:(id)arg1 didSelectSectionIndex:(long long)arg2;
- (id)metricsControllerForProductPageHeader:(id)arg1;
- (void)productPageHeaderView:(id)arg1 didSelectURL:(id)arg2;
- (bool)askPermission;
- (void)productPageChildViewControllerDidLoad:(id)arg1;
- (void)productPageChildViewControllerDidScroll:(id)arg1;
- (void)productPageChildOpenURL:(id)arg1 viewControllerBlock:(id)arg2;
- (void)productPageChildOpenItem:(id)arg1;
- (void)productPageChildViewControllerDidLoadScrollView:(id)arg1;
- (id)activeMetricsController;
- (void)_metricsEnterEventNotification:(id)arg1;
- (void)_setMetricsController:(id)arg1;
- (id)productPage;
- (id)_placeholderViewController;
- (void)configureMetricsWithPageEvent:(id)arg1;
- (void)setBannerText:(id)arg1;
- (void)setAskPermission:(bool)arg1;
- (void)setClientContext:(id)arg1;
- (id)clientContext;
- (void)_accountStoreDidChangeNotification:(id)arg1;
- (id)initWithItemIdentifier:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURLRequest:(id)arg1;
- (id)delegate;
- (id)URL;
- (void)dealloc;
- (void).cxx_destruct;
- (id)item;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)viewWillAppear:(bool)arg1;
- (id)initWithItem:(id)arg1;
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (void)reloadData;

@end
