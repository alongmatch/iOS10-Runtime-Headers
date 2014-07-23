/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSURL, RUIElement, NSMutableDictionary, RUIStyle, NSDictionary, RUIPage, NSMutableArray, NSString, <RUIObjectModelDelegate>, NSTimer, NSArray, RUIAlertView;

@interface RUIObjectModel : NSObject <RemoteUIWebViewControllerDelegate, UIWebViewDelegate, RUITableViewDelegate, RUIPasscodeViewDelegate, RUIPageDelegate, RUIAlertViewDelegate> {
    NSString *_name;
    NSURL *_sourceURL;
    NSURL *_scriptURL;
    NSString *_inlineScript;
    NSString *_validationFunction;
    NSMutableArray *_defaultPages;
    NSMutableDictionary *_namedPages;
    NSMutableArray *_displayedPages;
    int _currentPage;
    struct OpaqueJSContext { } *_ctx;
    NSDictionary *_clientInfo;
    NSDictionary *_serverInfo;
    NSDictionary *_updateInfo;
    int _refreshDelay;
    NSString *_refreshURL;
    NSTimer *_refreshTimer;
    long long _nextButtonStyle;
    NSDictionary *_confirmationAttributes;
    NSString *_confirmationURLString;
    RUIElement *_confirmationElement;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _confirmationCompletion;

    RUIAlertView *_alertElement;
    <RUIObjectModelDelegate> *_delegate;
    RUIStyle *_style;
    NSDictionary *_alert;
}

@property <RUIObjectModelDelegate> * delegate;
@property(readonly) NSArray * displayedPages;
@property(readonly) NSArray * defaultPages;
@property(readonly) NSDictionary * namedPages;
@property(readonly) NSArray * allPages;
@property(readonly) RUIPage * visiblePage;
@property(retain) NSString * name;
@property(retain) NSURL * sourceURL;
@property(retain) NSURL * scriptURL;
@property(retain) NSString * inlineScript;
@property(retain) NSString * validationFunction;
@property(retain) NSDictionary * clientInfo;
@property(retain) NSDictionary * serverInfo;
@property(retain) NSDictionary * updateInfo;
@property int refreshDelay;
@property(retain) NSString * refreshURL;
@property long long nextButtonStyle;
@property(retain) RUIStyle * style;
@property(readonly) RUIAlertView * alertElement;
@property(readonly) NSArray * pages;
@property(retain) NSDictionary * alert;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)objectModelForXMLNamed:(id)arg1;

- (void)setAlert:(id)arg1;
- (id)alert;
- (id)objectForJSValue:(struct OpaqueJSValue { }*)arg1;
- (bool)prepareScriptContext;
- (void)runScript;
- (long long)nextButtonStyle;
- (void)setRefreshURL:(id)arg1;
- (id)refreshURL;
- (void)setRefreshDelay:(int)arg1;
- (int)refreshDelay;
- (void)setInlineScript:(id)arg1;
- (id)inlineScript;
- (void)setScriptURL:(id)arg1;
- (id)scriptURL;
- (id)tableFooterViewForAttributes:(id)arg1;
- (id)tableHeaderViewForAttributes:(id)arg1;
- (Class)customTableCellClassForTableViewRow:(id)arg1;
- (Class)customFooterClassForSection:(id)arg1;
- (Class)customHeaderClassForSection:(id)arg1;
- (void)configureSection:(id)arg1;
- (void)configureRow:(id)arg1;
- (void)configureTableView:(id)arg1;
- (void)setAlertElement:(id)arg1;
- (void)setPages:(id)arg1;
- (id)pages;
- (id)postbackData;
- (void)_displaySupplementalPage:(id)arg1;
- (id)newNavigationControllerForPresentation;
- (void)presentInParentViewController:(id)arg1 animated:(bool)arg2;
- (void)presentWithBlock:(id)arg1;
- (void)alertView:(id)arg1 pressedLink:(id)arg2 attributes:(id)arg3 completion:(id)arg4;
- (void)alertView:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3 completion:(id)arg4;
- (void)passcodeViewOM:(id)arg1 pressedLink:(id)arg2 attributes:(id)arg3 completion:(id)arg4;
- (void)tableViewOM:(id)arg1 pressedLink:(id)arg2 attributes:(id)arg3;
- (void)tableViewOM:(id)arg1 elementDidChange:(id)arg2;
- (void)tableViewOMSubmitForm:(id)arg1;
- (bool)tableViewOM:(id)arg1 deleteRowAtIndexPath:(id)arg2;
- (void)remoteUIWebViewControllerDonePressed:(id)arg1;
- (void)_handleElementChange:(id)arg1;
- (id)_pageContainingTableView:(id)arg1;
- (void)tableViewOM:(id)arg1 pressedLink:(id)arg2 attributes:(id)arg3 completion:(id)arg4;
- (bool)validateWithFunction:(id)arg1;
- (void)_stopNavigationBarSpinnerIfNeededForAttributes:(id)arg1;
- (void)_startNavigationBarSpinnerIfNeededForAttributes:(id)arg1;
- (id)relativeURLWithString:(id)arg1;
- (void)_presentConfirmationWithAttributes:(id)arg1;
- (bool)hasConfirmationAttributes:(id)arg1;
- (void)_handleElementChangeConfirmed:(id)arg1;
- (void)_handleLinkPressConfirmed:(id)arg1 attributes:(id)arg2 completion:(id)arg3;
- (void)_presentSecondConfirmationWithAttributes:(id)arg1;
- (bool)hasSecondConfirmationAttributes:(id)arg1;
- (void)_cleanupConfirmation;
- (id)stringForAttributeName:(id)arg1 withAttributes:(id)arg2;
- (bool)hasAttributeOrAttributeFunctionNamed:(id)arg1 withAttributes:(id)arg2;
- (id)invokeScriptFunction:(id)arg1 withArguments:(id)arg2;
- (id)namedPages;
- (id)defaultPages;
- (id)displayedPages;
- (id)_viewControllerFromNavigatingBackWithinDisplayedPages;
- (id)visiblePage;
- (id)_firstPageForPresentation;
- (void)refreshTimeout;
- (void)_populatePageNavItem:(id)arg1 withNextButton:(bool)arg2;
- (void)_handleLinkPress:(id)arg1 attributes:(id)arg2 completion:(id)arg3;
- (void)back:(id)arg1;
- (void)_nextPage;
- (void)setJSGlobalContext:(struct OpaqueJSContext { }*)arg1;
- (id)alertElement;
- (id)postbackDictionary;
- (id)rowForFormField:(id)arg1;
- (void)setUpdateInfo:(id)arg1;
- (id)updateInfo;
- (void)setValidationFunction:(id)arg1;
- (id)validationFunction;
- (id)elementsWithName:(id)arg1;
- (unsigned long long)supportedInterfaceOrientationsForRUIPage:(id)arg1;
- (void)pageDidDisappear:(id)arg1;
- (void)cleanupRefreshTimer;
- (void)populatePostbackDictionary:(id)arg1;
- (void)tableViewOMDidChange:(id)arg1;
- (void)RUIPage:(id)arg1 pressedNavBarButton:(id)arg2;
- (void)RUIPage:(id)arg1 toggledEditing:(bool)arg2;
- (id)allPages;
- (void)setNextButtonStyle:(long long)arg1;
- (id)serverInfo;
- (id)clientInfo;
- (void)setClientInfo:(id)arg1;
- (void)setServerInfo:(id)arg1;
- (void)setSourceURL:(id)arg1;
- (id)sourceURL;
- (void)setName:(id)arg1;
- (void)setStyle:(id)arg1;
- (bool)goBack;
- (id)style;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)name;
- (id)delegate;
- (void)dealloc;
- (void).cxx_destruct;
- (id)description;
- (id)alertController;
- (bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (id)_parentViewController;

@end
