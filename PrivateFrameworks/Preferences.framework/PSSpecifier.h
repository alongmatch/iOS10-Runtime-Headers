/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSString, NSArray, NSDictionary, NSMutableDictionary;

@interface PSSpecifier : NSObject  {
    id target;
    SEL getter;
    SEL setter;
    SEL action;
    SEL cancel;
    Class detailControllerClass;
    long long cellType;
    Class editPaneClass;
    long long keyboardType;
    long long autoCapsType;
    long long autoCorrectionType;
    unsigned long long textFieldType;
    NSString *_name;
    NSArray *_values;
    NSDictionary *_titleDict;
    NSDictionary *_shortTitleDict;
    id _userInfo;
    NSMutableDictionary *_properties;
    SEL _confirmationAction;
    SEL _confirmationCancelAction;
    SEL _buttonAction;
    SEL _controllerLoadAction;
    bool_showContentString;
}

@property(retain) NSArray * values;
@property(retain) NSString * name;
@property(retain) id userInfo;
@property(retain) NSDictionary * titleDictionary;
@property(retain) NSDictionary * shortTitleDictionary;
@property(retain) NSString * identifier;
@property id target;
@property Class detailControllerClass;
@property long long cellType;
@property Class editPaneClass;
@property SEL confirmationAction;
@property SEL confirmationCancelAction;
@property SEL buttonAction;
@property SEL controllerLoadAction;
@property bool showContentString;

+ (long long)keyboardTypeForString:(id)arg1;
+ (long long)autoCapsTypeForString:(id)arg1;
+ (long long)autoCorrectionTypeForNumber:(id)arg1;
+ (id)specifierWithSpecifier:(id)arg1;
+ (id)groupSpecifierWithID:(id)arg1;
+ (id)groupSpecifierWithID:(id)arg1 name:(id)arg2;
+ (id)preferenceSpecifierNamed:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4 detail:(Class)arg5 cell:(long long)arg6 edit:(Class)arg7;
+ (id)groupSpecifierWithName:(id)arg1;
+ (id)emptyGroupSpecifier;
+ (id)deleteButtonSpecifierWithName:(id)arg1 target:(id)arg2 action:(SEL)arg3;
+ (id)groupSpecifierWithFooterLinkButton:(id)arg1;
+ (id)groupSpecifierWithHeader:(id)arg1 footer:(id)arg2;
+ (id)groupSpecifierWithFooterText:(id)arg1 linkButtons:(id)arg2;
+ (id)groupSpecifierWithFooterText:(id)arg1 linkButton:(id)arg2;
+ (id)groupSpecifierWithHeader:(id)arg1 footer:(id)arg2 linkButtons:(id)arg3;
+ (id)acui_specifierForAppWithBundleID:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4;
+ (id)acui_linkListCellSpecifierForDataclass:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4 detail:(Class)arg5;
+ (id)acui_specifierForDataclass:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4;
+ (id)_iconForDataclass:(id)arg1;
+ (id)_dataclassIconCache;
+ (id)_bundle;

- (bool)isEqualToSpecifier:(id)arg1;
- (long long)titleCompare:(id)arg1;
- (void)setupIconImageWithBundle:(id)arg1;
- (void)setValues:(id)arg1 titles:(id)arg2 shortTitles:(id)arg3 usingLocalizedTitleSorting:(bool)arg4;
- (void)loadValuesAndTitlesFromDataSource;
- (void)setValues:(id)arg1 titles:(id)arg2 shortTitles:(id)arg3;
- (void)setShortTitleDictionary:(id)arg1;
- (id)shortTitleDictionary;
- (void)setTitleDictionary:(id)arg1;
- (id)titleDictionary;
- (void)setShowContentString:(bool)arg1;
- (void)setConfirmationCancelAction:(SEL)arg1;
- (void)setConfirmationAction:(SEL)arg1;
- (void)setEditPaneClass:(Class)arg1;
- (Class)editPaneClass;
- (void)setCellType:(long long)arg1;
- (void)setDetailControllerClass:(Class)arg1;
- (Class)detailControllerClass;
- (void)setupIconImageWithPath:(id)arg1;
- (void)setControllerLoadAction:(SEL)arg1;
- (SEL)confirmationCancelAction;
- (SEL)confirmationAction;
- (SEL)controllerLoadAction;
- (long long)cellType;
- (bool)showContentString;
- (void)setKeyboardType:(long long)arg1 autoCaps:(long long)arg2 autoCorrection:(long long)arg3;
- (void)setValues:(id)arg1 titles:(id)arg2;
- (void)removePropertyForKey:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setValues:(id)arg1;
- (id)values;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (void)setName:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setUserInfo:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)init;
- (void)setTarget:(id)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (id)name;
- (id)userInfo;
- (id)properties;
- (void)dealloc;
- (id)description;
- (id)target;
- (SEL)buttonAction;
- (void)setButtonAction:(SEL)arg1;
- (id)acui_appBundleID;
- (id)acui_dataclass;

@end
