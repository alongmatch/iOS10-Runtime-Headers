/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDText, WDCharacterRun;

@interface WDNote : WDRun  {
    WDText *mText;
    WDCharacterRun *mReference;
    boolmAutomaticNumbering;
}


- (bool)automaticNumbering;
- (id)initWithParagraph:(id)arg1 footnote:(bool)arg2;
- (void)setAutomaticNumbering:(bool)arg1;
- (int)runType;
- (id)reference;
- (id)text;
- (void)dealloc;

@end
