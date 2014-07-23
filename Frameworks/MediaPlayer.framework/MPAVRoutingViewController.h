/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSArray, MPAVRoutingController, <MPAVRoutingViewControllerDelegate>, MPWeakTimer, NSString, UITableView;

@interface MPAVRoutingViewController : UIViewController <MPAVRoutingControllerDelegate, MPAVRoutingTableViewCellDelegate, UITableViewDataSource, UITableViewDelegate> {
    UITableView *_tableView;
    NSArray *_cachedRoutes;
    MPWeakTimer *_updateTimer;
    MPAVRoutingController *_routingController;
    int _airPlayPasswordAlertDidAppearToken;
    int _airPlayPasswordAlertDidCancelToken;
    bool_airPlayPasswordAlertDidAppearTokenIsValid;
    bool_cachedShowAirPlayDebugButton;
    bool_hasCachedAirPlayDebugButtonStatus;
    bool_needsDisplayedRoutesUpdate;
    bool_allowMirroring;
    unsigned long long _style;
    <MPAVRoutingViewControllerDelegate> *_delegate;
    unsigned long long _avItemType;
}

@property(readonly) unsigned long long style;
@property <MPAVRoutingViewControllerDelegate> * delegate;
@property(setter=setAVItemType:) unsigned long long avItemType;
@property bool allowMirroring;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setAllowMirroring:(bool)arg1;
- (bool)allowMirroring;
- (unsigned long long)avItemType;
- (double)_tableViewHeightAccordingToDataSource;
- (void)setAVItemType:(unsigned long long)arg1;
- (void)_setupUpdateTimerIfNecessary;
- (void)_updateDisplayedRoutes;
- (double)_expandedCellHeight;
- (double)_normalCellHeight;
- (unsigned long long)_tableViewIndexForRouteIndex:(unsigned long long)arg1;
- (void)_pickRoute:(id)arg1;
- (void)_showAirPlayDebug;
- (bool)_shouldShowMirroringCellForRoute:(id)arg1;
- (unsigned long long)_debugButtonTableViewIndex;
- (unsigned long long)_routeIndexForTableViewIndex:(unsigned long long)arg1;
- (bool)_shouldShowAirPlayDebugButton;
- (id)_displayedRoutes;
- (void)_setNeedsDisplayedRoutesUpdate;
- (id)_routesWhereMirroringIsPreferred;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)routingCell:(id)arg1 mirroringSwitchValueDidChange:(bool)arg2;
- (unsigned long long)style;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void).cxx_destruct;
- (id)_tableView;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (id)initWithStyle:(unsigned long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)viewWillLayoutSubviews;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;

@end
