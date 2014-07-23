/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@class UIView, AAFamilyEligibilityResponse, UIScrollView, AAUIFamilySharingFeaturesView, NSString, UIImageView, UIButton, <AAUIFamilySetupPageDelegate>, ACAccount, UILabel, ACAccountStore;

@interface AAUIFamilySetupGetStartedViewController : UIViewController <AAUIFamilySetupPage> {
    ACAccount *_account;
    ACAccountStore *_accountStore;
    AAFamilyEligibilityResponse *_familyEligibilityResponse;
    UIScrollView *_scrollView;
    UIView *_contentView;
    UILabel *_titleLabel;
    UIImageView *_familySharingLogo;
    UILabel *_descriptionLabel;
    UIButton *_getStartedButton;
    AAUIFamilySharingFeaturesView *_familyFeaturesView;
    <AAUIFamilySetupPageDelegate> *_delegate;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property <AAUIFamilySetupPageDelegate> * delegate;


- (void)_getStartedButtonWasTapped:(id)arg1;
- (id)_createDescriptionLabelForText:(id)arg1;
- (id)initWithAccount:(id)arg1 store:(id)arg2 familyEligibilityResponse:(id)arg3;
- (double)_heightForText:(id)arg1 constrainedToWidth:(double)arg2;
- (id)initWithAccount:(id)arg1 store:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillLayoutSubviews;

@end
