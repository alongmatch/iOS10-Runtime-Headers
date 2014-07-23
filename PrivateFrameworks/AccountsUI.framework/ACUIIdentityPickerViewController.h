/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

@class NSString, NSArray, <ACUIIdentityPickerViewControllerDelegate>;

@interface ACUIIdentityPickerViewController : PSListController  {
    <ACUIIdentityPickerViewControllerDelegate> *_delegate;
    NSString *_property;
    NSArray *_identities;
    NSArray *_emailAddresses;
    bool_allowEditing;
}

@property(readonly) NSString * property;


- (id)specifiers;
- (id)_identitySpecifiers;
- (bool)_allowIdentitySelection;
- (void)_updateCell:(id)arg1 selected:(bool)arg2;
- (void)_setPropertyEnabled:(bool)arg1 identity:(struct __SecIdentity { }*)arg2;
- (struct __SecIdentity { }*)_identityToAutoselectWithEnabled:(bool)arg1;
- (id)_specifiersForIdentities:(id)arg1;
- (id)_valueForSwitchSpecifier:(id)arg1;
- (void)_setValue:(id)arg1 forSwitchSpecifier:(id)arg2;
- (bool)_isPropertyEnabled;
- (struct __SecIdentity { }*)_selectedIdentity;
- (void)_finishedFetchingIdentities:(id)arg1;
- (id)property;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;

@end
