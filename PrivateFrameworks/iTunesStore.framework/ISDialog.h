/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSArray, NSString, SSAuthenticationContext, NSMutableDictionary, NSLock;

@interface ISDialog : NSObject <SSXPCCoding> {
    bool_allowsBioAuthorization;
    bool_allowDuplicates;
    SSAuthenticationContext *_authenticationContext;
    bool_authorizationIsForced;
    NSArray *_buttons;
    long long _defaultButtonIndex;
    NSString *_displayCountKey;
    bool_dismissOnHomeButton;
    bool_dismissOnLock;
    bool_expectsResponse;
    bool_groupsTextFields;
    long long _kind;
    NSLock *_lock;
    long long _maxDisplayCount;
    NSString *_message;
    bool_oneButtonPerLine;
    bool_shouldDismissAfterUnlock;
    bool_shouldDisplayAsTopMost;
    bool_shouldPendInSetupIfNotAllowed;
    NSArray *_textFields;
    NSString *_title;
    long long _unlockActionButtonIndex;
    NSMutableDictionary *_userInfo;
    struct __CFDictionary { } *_userNotificationValues;
}

@property(retain) NSArray * buttons;
@property long long defaultButtonIndex;
@property bool oneButtonPerLine;
@property long long unlockActionButtonIndex;
@property bool groupsTextFields;
@property(retain) NSArray * textFields;
@property(retain) NSString * message;
@property(retain) NSString * title;
@property bool allowDuplicates;
@property bool authorizationIsForced;
@property bool dismissOnHomeButton;
@property bool dismissOnLock;
@property bool expectsResponse;
@property bool shouldDismissAfterUnlock;
@property bool shouldDisplayAsTopMost;
@property bool shouldPendInSetupIfNotAllowed;
@property long long kind;
@property(copy) SSAuthenticationContext * authenticationContext;
@property(copy) NSString * displayCountKey;
@property long long maximumDisplayCount;
@property(getter=isDisplayable,readonly) bool displayable;
@property(readonly) bool allowsBioAuthorization;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (long long)displayCountForKey:(id)arg1;
+ (id)ITunesStoreNotAvailableDialog;

- (id)initWithTitle:(id)arg1 message:(id)arg2;
- (id)initWithDialogDictionary:(id)arg1;
- (void)setAuthenticationContext:(id)arg1;
- (id)authenticationContext;
- (void)setUnlockActionButtonIndex:(long long)arg1;
- (void)setShouldPendInSetupIfNotAllowed:(bool)arg1;
- (void)setShouldDisplayAsTopMost:(bool)arg1;
- (void)setShouldDismissAfterUnlock:(bool)arg1;
- (void)setOneButtonPerLine:(bool)arg1;
- (bool)expectsResponse;
- (void)setDismissOnLock:(bool)arg1;
- (void)setDismissOnHomeButton:(bool)arg1;
- (bool)authorizationIsForced;
- (id)valueForUserInfoKey:(id)arg1;
- (void)setValue:(void*)arg1 forCFUserNotificationKey:(struct __CFString { }*)arg2;
- (void)setValue:(id)arg1 forUserInfoKey:(id)arg2;
- (void)setMaximumDisplayCount:(long long)arg1;
- (void)setDisplayCountKey:(id)arg1;
- (long long)maximumDisplayCount;
- (id)displayCountKey;
- (void*)copyValueForCFUserNotificationKey:(struct __CFString { }*)arg1;
- (id)initWithOfferDeviceError:(id)arg1;
- (bool)shouldPendInSetupIfNotAllowed;
- (bool)shouldDismissAfterUnlock;
- (bool)shouldDisplayAsTopMost;
- (bool)oneButtonPerLine;
- (bool)dismissOnLock;
- (bool)dismissOnHomeButton;
- (long long)unlockActionButtonIndex;
- (long long)_kindForString:(id)arg1;
- (void)setAuthorizationIsForced:(bool)arg1;
- (void)setTextFields:(id)arg1;
- (void)setExpectsResponse:(bool)arg1;
- (void)setButtons:(id)arg1;
- (void)setAllowDuplicates:(bool)arg1;
- (id)initWithAuthenticationChallege:(id)arg1;
- (void)incrementDisplayCount;
- (bool)allowDuplicates;
- (id)copyUserNotification;
- (bool)isDisplayable;
- (bool)allowsBioAuthorization;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)initWithError:(id)arg1;
- (long long)kind;
- (void)setKind:(long long)arg1;
- (void)setMessage:(id)arg1;
- (id)message;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)buttons;
- (bool)groupsTextFields;
- (void)setGroupsTextFields:(bool)arg1;
- (void)setDefaultButtonIndex:(long long)arg1;
- (id)textFields;
- (long long)defaultButtonIndex;

@end
