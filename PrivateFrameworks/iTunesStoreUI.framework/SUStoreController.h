/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class ISOperation, NSString, NSArray, NSURL, MFMailComposeViewController, UINavigationController, NSDictionary, UIWindow, SUSectionsResponse, SUClient, SUTabBarController;

@interface SUStoreController : NSObject <SUClientDelegate, SUPurchaseManagerDelegate, SUTabBarControllerDelegate, UIApplicationDelegate, MFMailComposeViewControllerDelegate> {
    SUClient *_client;
    SUSectionsResponse *_lastBackgroundSectionsResponse;
    SUSectionsResponse *_lastSectionsResponse;
    NSURL *_launchURL;
    ISOperation *_loadSectionsOperation;
    NSString *_localStoreFrontAtLastSuspend;
    id _locationObserver;
    NSArray *_overlayConfigurations;
    bool_reloadForStorefrontChangeAfterAccountSetup;
    bool_reloadSectionsOnNextLaunch;
    NSString *_synchedStoreFrontAtLastSuspend;
    SUTabBarController *_tabBarController;
    MFMailComposeViewController *_mailComposeViewController;
    NSDictionary *_storeFrontLanguages;
}

@property(readonly) NSString * defaultPNGNameForSuspend;
@property(getter=isTabBarControllerLoaded,readonly) bool tabBarControllerLoaded;
@property(readonly) SUTabBarController * tabBarController;
@property(readonly) UINavigationController * topNavigationController;
@property(retain) NSURL * launchURL;
@property(getter=isStoreEnabled,readonly) bool storeEnabled;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(retain) UIWindow * window;

+ (void)setSharedInstance:(id)arg1;
+ (id)sharedInstance;

- (id)storeContentLanguage;
- (id)defaultPNGNameForSuspend;
- (bool)showDialogForCapabilities:(id)arg1 mismatches:(id)arg2;
- (bool)reloadSectionWithIdentifier:(id)arg1 url:(id)arg2;
- (void)prepareForSuspend;
- (id)downloadQueueForClient:(id)arg1 downloadKinds:(id)arg2;
- (void)dismissMailComposeViewControllerAnimated:(bool)arg1;
- (void)presentMailComposeViewController:(id)arg1 animated:(bool)arg2;
- (bool)isComposingEmail;
- (void)presentExternalURLViewController:(id)arg1;
- (void)_reloadWithSectionsResponse:(id)arg1;
- (void)_handleSectionsLoadFailedWithError:(id)arg1;
- (void)composeEmailByRestoringAutosavedMessage;
- (id)launchURL;
- (void)_defaultHandleApplicationURLRequestProperties:(id)arg1;
- (void)_handleAccountURL:(id)arg1;
- (void)_handleSearchURL:(id)arg1;
- (void)beginPurchaseBatch;
- (void)endPurchaseBatch;
- (bool)_showWildcatAccountViewController:(id)arg1 animated:(bool)arg2;
- (void)_mainThreadStoreFrontChangedNotification:(id)arg1;
- (void)_retrySectionsAfterNetworkTransition;
- (void)_reloadOverlayConfigurations;
- (bool)_reloadForStorefrontChange;
- (id)_resumableViewController;
- (void)_saveArchivedNavigationPath;
- (bool)_isAccountViewControllerVisible;
- (void)_dialogDidFinishNotification:(id)arg1;
- (void)_cancelSuspendAfterDialogsDismissed;
- (id)topNavigationController;
- (void)_handleFinishedLoadSectionsOperation:(id)arg1;
- (void)_presentSectionFetchUI;
- (bool)_loadSectionsAllowingCache:(bool)arg1 withCompletionBlock:(id)arg2;
- (void)_handleFinishedBackgroundLoadSectionsOperation:(id)arg1;
- (void)setupUI;
- (void)setLaunchURL:(id)arg1;
- (void)_cancelLoadSectionsOperation;
- (void)_accountControllerDisappearedNotification:(id)arg1;
- (void)_selectFooterSectionNotification:(id)arg1;
- (bool)libraryContainsItemIdentifier:(unsigned long long)arg1;
- (void)exitStoreWithReason:(long long)arg1;
- (void)_restrictionsChangedNotification:(id)arg1;
- (bool)client:(id)arg1 openInternalURL:(id)arg2;
- (bool)client:(id)arg1 presentAccountViewController:(id)arg2 animated:(bool)arg3;
- (id)topViewControllerForClient:(id)arg1;
- (bool)client:(id)arg1 presentModalViewController:(id)arg2 animated:(bool)arg3;
- (void)purchaseManager:(id)arg1 didAddPurchases:(id)arg2;
- (void)purchaseManager:(id)arg1 failedToAddPurchases:(id)arg2;
- (void)purchaseManager:(id)arg1 willAddPurchases:(id)arg2;
- (void)purchaseManagerDidEndUpdates:(id)arg1;
- (void)purchaseManagerWillBeginUpdates:(id)arg1;
- (id)newScriptInterface;
- (id)overlayConfigurationForStorePage:(id)arg1;
- (bool)matchesClientApplication:(id)arg1;
- (void)_reloadForNetworkTypeChange:(id)arg1;
- (void)handleApplicationURL:(id)arg1;
- (bool)isTabBarControllerLoaded;
- (bool)selectSectionWithIdentifier:(id)arg1;
- (void)composeEmailWithSubject:(id)arg1 body:(id)arg2;
- (void)dismissOverlayBackgroundViewController;
- (bool)presentOverlayBackgroundViewController:(id)arg1;
- (id)overlayBackgroundViewController;
- (bool)isStoreEnabled;
- (void)exitStoreAfterDialogsDismiss;
- (id)copySuspendSettings;
- (void)_bagDidLoadNotification:(id)arg1;
- (void)_storeFrontChangedNotification:(id)arg1;
- (void)tearDownUI;
- (void)cancelAllOperations;
- (void)connect;
- (id)init;
- (void)dealloc;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (void)tabBarController:(id)arg1 didEndCustomizingViewControllers:(id)arg2 changed:(bool)arg3;
- (id)tabBarController;
- (double)defaultImageSnapshotExpiration;
- (bool)application:(id)arg1 handleOpenURL:(id)arg2;

@end
