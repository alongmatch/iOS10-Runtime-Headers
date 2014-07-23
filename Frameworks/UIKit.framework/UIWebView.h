/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, <UIWebViewDelegate>, UIScrollView, UIWebViewInternal, NSURLRequest;

@interface UIWebView : UIView <NSCoding, UIScrollViewDelegate> {
    UIWebViewInternal *_internal;
}

@property <UIWebViewDelegate> * delegate;
@property(retain,readonly) UIScrollView * scrollView;
@property(retain,readonly) NSURLRequest * request;
@property(getter=canGoBack,readonly) bool canGoBack;
@property(getter=canGoForward,readonly) bool canGoForward;
@property(getter=isLoading,readonly) bool loading;
@property bool scalesPageToFit;
@property bool detectsPhoneNumbers;
@property unsigned long long dataDetectorTypes;
@property bool allowsInlineMediaPlayback;
@property bool mediaPlaybackRequiresUserAction;
@property bool mediaPlaybackAllowsAirPlay;
@property bool suppressesIncrementalRendering;
@property bool keyboardDisplayRequiresUserAction;
@property long long paginationMode;
@property long long paginationBreakingMode;
@property double pageLength;
@property double gapBetweenPages;
@property(readonly) unsigned long long pageCount;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (void)initialize;
+ (void)_fixPathsForSandboxDirectoryChange;
+ (void)_updatePersistentStoragePaths;
+ (id)_relativePathFromAbsolutePath:(id)arg1 removingPathComponents:(unsigned long long)arg2;

- (void)reload;
- (void)setBackgroundColor:(id)arg1;
- (void)setOpaque:(bool)arg1;
- (bool)mediaPlaybackAllowsAirPlay;
- (bool)suppressesIncrementalRendering;
- (void)webView:(id)arg1 decidePolicyForGeolocationRequestFromOrigin:(id)arg2 frame:(id)arg3 listener:(id)arg4;
- (void)webView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4;
- (void)webView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3;
- (void)webView:(id)arg1 resource:(id)arg2 didCancelAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4;
- (id)webView:(id)arg1 connectionPropertiesForResource:(id)arg2 dataSource:(id)arg3;
- (bool)webView:(id)arg1 resource:(id)arg2 canAuthenticateAgainstProtectionSpace:(id)arg3 forDataSource:(id)arg4;
- (void)webView:(id)arg1 resource:(id)arg2 didReceiveAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4;
- (id)webView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (id)webView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3;
- (void)loadRequest:(id)arg1;
- (id)_scrollView;
- (void)webView:(id)arg1 didFirstLayoutInFrame:(id)arg2;
- (void)webView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didChangeLocationWithinPageForFrame:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didReceiveTitle:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didReceiveServerRedirectForProvisionalLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (void)webViewSupportedOrientationsUpdated:(id)arg1;
- (void)webViewClose:(id)arg1;
- (void)webView:(id)arg1 decidePolicyForNewWindowAction:(id)arg2 request:(id)arg3 newFrameName:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 decidePolicyForMIMEType:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 unableToImplementPolicyWithError:(id)arg2 frame:(id)arg3;
- (bool)isLoading;
- (void)webView:(id)arg1 exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)arg2 totalSpaceNeeded:(unsigned long long)arg3;
- (void)webView:(id)arg1 frame:(id)arg2 exceededDatabaseQuotaForSecurityOrigin:(id)arg3 database:(id)arg4;
- (void)webView:(id)arg1 printFrameView:(id)arg2;
- (id)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4;
- (bool)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
- (void)goForward;
- (void)goBack;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)request;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)stopLoading;
- (void)dealloc;
- (bool)isElementAccessibilityExposedToInterfaceBuilder;
- (void)configureWithSettings:(id)arg1;
- (id)_networkInterfaceName;
- (void)_setNetworkInterfaceName:(id)arg1;
- (unsigned long long)_audioSessionCategoryOverride;
- (void)_setAudioSessionCategoryOverride:(unsigned long long)arg1;
- (bool)_alwaysDispatchesScrollEvents;
- (void)_setAlwaysDispatchesScrollEvents:(bool)arg1;
- (void)_setWebSelectionEnabled:(bool)arg1;
- (void)_setDrawsCheckeredPattern:(bool)arg1;
- (void)_setOverridesOrientationChangeEventHandling:(bool)arg1;
- (id)_pdfViewHandler;
- (id)_initWithWebView:(id)arg1;
- (void)webViewMainFrameDidFirstVisuallyNonEmptyLayoutInFrame:(id)arg1;
- (void)_finishRotation;
- (void)_beginRotation;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 enableReachability:(bool)arg2;
- (void)setKeyboardDisplayRequiresUserAction:(bool)arg1;
- (bool)keyboardDisplayRequiresUserAction;
- (unsigned long long)_pageCount;
- (void)_setGapBetweenPages:(double)arg1;
- (void)setGapBetweenPages:(double)arg1;
- (double)_gapBetweenPages;
- (double)gapBetweenPages;
- (void)_setPageLength:(double)arg1;
- (void)setPageLength:(double)arg1;
- (double)_pageLength;
- (double)pageLength;
- (void)_setPaginationBehavesLikeColumns:(bool)arg1;
- (void)setPaginationBreakingMode:(long long)arg1;
- (bool)_paginationBehavesLikeColumns;
- (long long)paginationBreakingMode;
- (void)_setPaginationMode:(long long)arg1;
- (void)setPaginationMode:(long long)arg1;
- (long long)_paginationMode;
- (long long)paginationMode;
- (id)_makeAlertView;
- (void)_updateRequest;
- (void)_reportError:(id)arg1;
- (void)_didCompleteScrolling;
- (void)_updateScrollerViewForInputView:(id)arg1;
- (void)_frameOrBoundsChanged;
- (void)_rescaleDocument;
- (bool)canGoForward;
- (bool)canGoBack;
- (bool)mediaPlaybackRequiresUserAction;
- (void)setMediaPlaybackRequiresUserAction:(bool)arg1;
- (bool)allowsInlineMediaPlayback;
- (void)setAllowsInlineMediaPlayback:(bool)arg1;
- (id)stringByEvaluatingJavaScriptFromString:(id)arg1;
- (void)_webViewCommonInitWithWebView:(id)arg1 scalesPageToFit:(bool)arg2;
- (void)setScalesPageToFit:(bool)arg1;
- (void)_didRotate:(id)arg1;
- (void)_updateOpaqueAndBackgroundColor;
- (void)_setDrawInWebThread:(bool)arg1;
- (void)_updateCheckeredPattern;
- (void)_updateBrowserViewExposedScrollViewRect;
- (void)_setRichTextReaderViewportSettings;
- (void)_setScalesPageToFitViewportSettings;
- (id)_browserView;
- (void)_updateViewSettings;
- (bool)scalesPageToFit;
- (void)scrollViewWasRemoved:(id)arg1;
- (id)_documentView;
- (unsigned long long)pageCount;
- (void)setSuppressesIncrementalRendering:(bool)arg1;
- (bool)detectsPhoneNumbers;
- (void)setDetectsPhoneNumbers:(bool)arg1;
- (void)setMediaPlaybackAllowsAirPlay:(bool)arg1;
- (void)restoreStateFromHistoryItem:(id)arg1 forWebView:(id)arg2;
- (void)saveStateToHistoryItem:(id)arg1 forWebView:(id)arg2;
- (void)webViewMainFrameDidCommitLoad:(id)arg1;
- (void)webViewMainFrameDidFailLoad:(id)arg1 withError:(id)arg2;
- (void)webViewMainFrameDidFinishLoad:(id)arg1;
- (void)view:(id)arg1 didSetFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 oldFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (Class)_printFormatterClass;
- (void)select:(id)arg1;
- (void)_addShortcut:(id)arg1;
- (void)_define:(id)arg1;
- (void)copy:(id)arg1;
- (void)selectAll:(id)arg1;
- (unsigned long long)dataDetectorTypes;
- (void)setDataDetectorTypes:(unsigned long long)arg1;
- (id)scrollView;
- (bool)_appliesExclusiveTouchToSubviewTree;
- (struct CGImage { }*)createSnapshotWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGImage { }*)newSnapshotWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;

@end
