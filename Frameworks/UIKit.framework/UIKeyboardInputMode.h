/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, NSArray, NSBundle, NSExtension;

@interface UIKeyboardInputMode : UITextInputMode <NSCopying> {
    boolisDisplayed;
    NSString *primaryLanguage;
    NSString *languageWithRegion;
    NSString *identifier;
    NSString *normalizedIdentifier;
    NSString *softwareLayout;
    NSString *hardwareLayout;
}

@property(retain) NSString * identifier;
@property(readonly) NSString * identifierWithLayouts;
@property(retain) NSString * normalizedIdentifier;
@property(retain) NSString * primaryLanguage;
@property(retain) NSString * languageWithRegion;
@property(retain) NSString * softwareLayout;
@property(retain) NSString * hardwareLayout;
@property(retain,readonly) NSArray * normalizedIdentifierLevels;
@property(readonly) NSString * displayName;
@property(readonly) bool isDefaultRightToLeft;
@property(readonly) bool defaultLayoutIsASCIICapable;
@property(readonly) bool isExtensionInputMode;
@property(readonly) NSExtension * extension;
@property(readonly) NSBundle * containingBundle;
@property bool isDisplayed;

+ (id)hardwareLayoutFromIdentifier:(id)arg1;
+ (id)softwareLayoutFromIdentifier:(id)arg1;
+ (id)canonicalLanguageIdentifierFromIdentifier:(id)arg1;
+ (id)intlInputMode;
+ (id)dictationInputMode;
+ (id)keyboardInputModeWithIdentifier:(id)arg1;

- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)containingBundle;
- (id)initWithIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayName;
- (void)setIsDisplayed:(bool)arg1;
- (id)softwareLayout;
- (id)normalizedIdentifierLevels;
- (void)setHardwareLayout:(id)arg1;
- (void)setSoftwareLayout:(id)arg1;
- (void)setLanguageWithRegion:(id)arg1;
- (void)setNormalizedIdentifier:(id)arg1;
- (id)normalizedIdentifier;
- (id)languageWithRegion;
- (bool)isDesiredForTraits:(id)arg1 forceASCIICapable:(bool)arg2;
- (void)setPrimaryLanguage:(id)arg1;
- (id)primaryLanguage;
- (bool)defaultLayoutIsASCIICapable;
- (bool)isAllowedForTraits:(id)arg1;
- (bool)isDefaultRightToLeft;
- (bool)isExtensionInputMode;
- (bool)isDisplayed;
- (id)identifierWithLayouts;
- (id)extension;
- (id)hardwareLayout;

@end
