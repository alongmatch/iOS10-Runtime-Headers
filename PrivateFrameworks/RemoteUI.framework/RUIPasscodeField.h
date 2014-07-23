/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@class NSString, NSMutableString, <RUIPasscodeFieldDelegate>, NSMutableArray;

@interface RUIPasscodeField : UIView <UIKeyInput> {
    NSMutableArray *_dashViews;
    NSMutableArray *_dotViews;
    NSMutableArray *_digitViews;
    NSMutableString *_stringValue;
    bool_securePasscodeEntry;
    <RUIPasscodeFieldDelegate> *_delegate;
    unsigned long long _numberOfEntryFields;
}

@property <RUIPasscodeFieldDelegate> * delegate;
@property(readonly) unsigned long long numberOfEntryFields;
@property bool securePasscodeEntry;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property long long autocapitalizationType;
@property long long autocorrectionType;
@property long long spellCheckingType;
@property long long keyboardType;
@property long long keyboardAppearance;
@property long long returnKeyType;
@property bool enablesReturnKeyAutomatically;
@property(getter=isSecureTextEntry) bool secureTextEntry;


- (id)initWithNumberOfEntryFields:(unsigned long long)arg1;
- (void)setSecurePasscodeEntry:(bool)arg1;
- (bool)securePasscodeEntry;
- (void)setStringValue:(id)arg1;
- (bool)becomeFirstResponder;
- (void)insertText:(id)arg1;
- (void)setSecureTextEntry:(bool)arg1;
- (long long)keyboardType;
- (void)setDelegate:(id)arg1;
- (id)stringValue;
- (id)delegate;
- (void).cxx_destruct;
- (unsigned long long)numberOfEntryFields;
- (bool)isSecureTextEntry;
- (void)deleteBackward;
- (bool)hasText;
- (bool)canBecomeFirstResponder;
- (void)layoutSubviews;

@end
