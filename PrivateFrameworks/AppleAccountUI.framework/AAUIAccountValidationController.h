/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@class AAUIRemoteUIRepairFlow, <AAUIAccountValidationControllerDelegate>, NSString, ACUIViewController, ACAccount, AAUIAccountRepairRemoteUI;

@interface AAUIAccountValidationController : NSObject <AAUIRemoteUIRepairFlowDelegate> {
    ACAccount *_account;
    AAUIAccountRepairRemoteUI *_accountRepairRemoteUI;
    ACUIViewController *_presentingViewController;
    AAUIRemoteUIRepairFlow *_flow;
    bool_isPresentedModally;
    bool_inHSAVerification;
    <AAUIAccountValidationControllerDelegate> *_delegate;
}

@property <AAUIAccountValidationControllerDelegate> * delegate;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)startHSAVerificationFlow;
- (id)initWithAccount:(id)arg1 presentingViewController:(id)arg2 modal:(bool)arg3;
- (void)repairFlowWillHideViewController:(id)arg1;
- (void)repairFlowWillShowViewController:(id)arg1;
- (void)attemptHSALoginWithCompletion:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;

@end
