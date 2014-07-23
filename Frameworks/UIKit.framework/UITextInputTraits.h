/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor, UIImage, NSString;

@interface UITextInputTraits : NSObject <UITextInputTraits, UITextInputTraits_Private, NSCopying> {
    long long autocapitalizationType;
    long long autocorrectionType;
    long long spellCheckingType;
    unsigned int keyboardType : 8;
    unsigned int keyboardAppearance : 8;
    long long returnKeyType;
    boolenablesReturnKeyAutomatically;
    boolsecureTextEntry;
    struct __CFCharacterSet { } *textTrimmingSet;
    UIColor *insertionPointColor;
    UIColor *selectionBarColor;
    UIColor *selectionHighlightColor;
    UIImage *selectionDragDotImage;
    unsigned long long insertionPointWidth;
    int textLoupeVisibility;
    int textSelectionBehavior;
    id textSuggestionDelegate;
    boolisSingleLineDocument;
    boolcontentsIsSingleValue;
    boolacceptsEmoji;
    boolforceEnableDictation;
    boolreturnKeyGoesToNextResponder;
    boolacceptsFloatingKeyboard;
    boolacceptsSplitKeyboard;
    booldisplaySecureTextUsingPlainText;
    boollearnsCorrections;
    int emptyContentReturnKeyType;
    int shortcutConversionType;
    boolsuppressReturnKeyStyling;
    booluseInterfaceLanguageForLocalization;
    booldeferBecomingResponder;
    boolenablesReturnKeyOnNonWhiteSpaceContent;
    NSString *autocorrectionContext;
    NSString *responseContext;
    booldisablePrediction;
}

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
@property struct __CFCharacterSet { }* textTrimmingSet;
@property(retain) UIColor * insertionPointColor;
@property(retain) UIColor * selectionBarColor;
@property(retain) UIColor * selectionHighlightColor;
@property(retain) UIImage * selectionDragDotImage;
@property unsigned long long insertionPointWidth;
@property int textLoupeVisibility;
@property int textSelectionBehavior;
@property id textSuggestionDelegate;
@property bool isSingleLineDocument;
@property bool contentsIsSingleValue;
@property bool acceptsEmoji;
@property bool forceEnableDictation;
@property int emptyContentReturnKeyType;
@property bool returnKeyGoesToNextResponder;
@property bool acceptsFloatingKeyboard;
@property bool acceptsSplitKeyboard;
@property bool displaySecureTextUsingPlainText;
@property bool learnsCorrections;
@property int shortcutConversionType;
@property bool suppressReturnKeyStyling;
@property bool useInterfaceLanguageForLocalization;
@property bool deferBecomingResponder;
@property bool enablesReturnKeyOnNonWhiteSpaceContent;
@property(copy) NSString * autocorrectionContext;
@property(copy) NSString * responseContext;
@property bool disablePrediction;

+ (bool)keyboardTypeRequiresASCIICapable:(long long)arg1;
+ (long long)accessibleAppearanceForAppearance:(long long)arg1;
+ (id)defaultTextInputTraits;
+ (id)traitsByAdoptingTraits:(id)arg1;

- (bool)enablesReturnKeyAutomatically;
- (long long)returnKeyType;
- (long long)keyboardAppearance;
- (long long)spellCheckingType;
- (long long)autocorrectionType;
- (id)responseContext;
- (void)setSecureTextEntry:(bool)arg1;
- (void)setKeyboardType:(long long)arg1;
- (void)setAutocapitalizationType:(long long)arg1;
- (long long)autocapitalizationType;
- (long long)keyboardType;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)_setColorsToMatchTintColor:(id)arg1;
- (bool)publicTraitsMatchTraits:(id)arg1;
- (void)setToSecureValues;
- (void)setDisablePrediction:(bool)arg1;
- (void)setAutocorrectionContext:(id)arg1;
- (void)setEnablesReturnKeyOnNonWhiteSpaceContent:(bool)arg1;
- (bool)enablesReturnKeyOnNonWhiteSpaceContent;
- (void)setDeferBecomingResponder:(bool)arg1;
- (bool)deferBecomingResponder;
- (void)setUseInterfaceLanguageForLocalization:(bool)arg1;
- (bool)useInterfaceLanguageForLocalization;
- (void)setSuppressReturnKeyStyling:(bool)arg1;
- (bool)suppressReturnKeyStyling;
- (void)setShortcutConversionType:(int)arg1;
- (void)setDisplaySecureTextUsingPlainText:(bool)arg1;
- (void)setAcceptsSplitKeyboard:(bool)arg1;
- (void)setAcceptsFloatingKeyboard:(bool)arg1;
- (void)setReturnKeyGoesToNextResponder:(bool)arg1;
- (bool)returnKeyGoesToNextResponder;
- (void)setEmptyContentReturnKeyType:(int)arg1;
- (int)emptyContentReturnKeyType;
- (void)setForceEnableDictation:(bool)arg1;
- (bool)forceEnableDictation;
- (void)setAcceptsEmoji:(bool)arg1;
- (bool)acceptsEmoji;
- (void)setContentsIsSingleValue:(bool)arg1;
- (bool)contentsIsSingleValue;
- (void)setIsSingleLineDocument:(bool)arg1;
- (bool)isSingleLineDocument;
- (void)setTextSuggestionDelegate:(id)arg1;
- (id)textSuggestionDelegate;
- (void)setTextSelectionBehavior:(int)arg1;
- (void)setTextLoupeVisibility:(int)arg1;
- (int)textLoupeVisibility;
- (void)setInsertionPointWidth:(unsigned long long)arg1;
- (unsigned long long)insertionPointWidth;
- (void)setSelectionDragDotImage:(id)arg1;
- (id)selectionDragDotImage;
- (void)setSelectionHighlightColor:(id)arg1;
- (id)selectionHighlightColor;
- (void)setSelectionBarColor:(id)arg1;
- (id)selectionBarColor;
- (void)setInsertionPointColor:(id)arg1;
- (id)insertionPointColor;
- (void)setTextTrimmingSet:(struct __CFCharacterSet { }*)arg1;
- (void)setResponseContext:(id)arg1;
- (id)autocorrectionContext;
- (void)setLearnsCorrections:(bool)arg1;
- (bool)learnsCorrections;
- (bool)disablePrediction;
- (bool)acceptsFloatingKeyboard;
- (int)shortcutConversionType;
- (bool)acceptsSplitKeyboard;
- (struct __CFCharacterSet { }*)textTrimmingSet;
- (void)setEnablesReturnKeyAutomatically:(bool)arg1;
- (void)setReturnKeyType:(long long)arg1;
- (void)setKeyboardAppearance:(long long)arg1;
- (void)setSpellCheckingType:(long long)arg1;
- (void)setAutocorrectionType:(long long)arg1;
- (bool)displaySecureTextUsingPlainText;
- (bool)isSecureTextEntry;
- (int)textSelectionBehavior;
- (void)takeTraitsFrom:(id)arg1;
- (void)setToDefaultValues;

@end
