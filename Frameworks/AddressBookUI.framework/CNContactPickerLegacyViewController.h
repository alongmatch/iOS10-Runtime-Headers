/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSString, ABPeoplePickerNavigationController;

@interface CNContactPickerLegacyViewController : CNContactPickerContentViewController <ABPeoplePickerNavigationControllerDelegate> {
    void *_addressBook;
    bool_clientHasContactsAccess;
    ABPeoplePickerNavigationController *_legacyPicker;
}

@property bool clientHasContactsAccess;
@property(retain) ABPeoplePickerNavigationController * legacyPicker;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (bool)clientHasContactsAccess;
- (id)legacyPicker;
- (void)setClientHasContactsAccess:(bool)arg1;
- (void)setLegacyPicker:(id)arg1;
- (bool)peoplePickerNavigationController:(id)arg1 shouldAllowSelectingPersonWithRecordID:(int)arg2;
- (void)setupWithOptions:(id)arg1 readyBlock:(id)arg2;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;

@end
