/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, SKUIPassbookLoader, NSURL, SKUIRedeemITunesPassLearnMoreView;

@interface SKUIRedeemITunesPassLearnMoreViewController : SKUIRedeemStepViewController <SKUIPassbookLoaderDelegate> {
    bool_didTapAddPassbookButton;
    SKUIRedeemITunesPassLearnMoreView *_learnMoreView;
    SKUIPassbookLoader *_passbookLoader;
    NSURL *_passbookURL;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)_didLoadPassbookURLString:(id)arg1;
- (void)_showErrorDialog;
- (void)_loadPassbookURL;
- (void)_loadPassbookPass;
- (void)_passButtonAction:(id)arg1;
- (id)_existingPass;
- (void)passbookLoaderDidFinish:(id)arg1;
- (id)presentationViewControllerForPassbookLoader:(id)arg1;
- (void)_doneButtonAction:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
