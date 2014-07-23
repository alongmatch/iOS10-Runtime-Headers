/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <RemoteUIWebViewControllerDelegate>, _UIBackdropView, UIWebView, UIToolbar, NSString;

@interface RemoteUIWebViewController : UIViewController <UIWebViewDelegate> {
    UIWebView *_webView;
    UIToolbar *_toolbar;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _loadCompletion;

    _UIBackdropView *_statusBarBackdrop;
    bool_scalesPageToFit;
    <RemoteUIWebViewControllerDelegate> *_delegate;
}

@property <RemoteUIWebViewControllerDelegate> * delegate;
@property(readonly) UIToolbar * toolbar;
@property(readonly) UIWebView * webView;
@property bool scalesPageToFit;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)loadURL:(id)arg1;
- (void)donePressed:(id)arg1;
- (void)loadURL:(id)arg1 completion:(id)arg2;
- (id)webView;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void).cxx_destruct;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)setScalesPageToFit:(bool)arg1;
- (bool)scalesPageToFit;
- (id)toolbar;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;

@end
