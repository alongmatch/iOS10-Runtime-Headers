/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

@class NSString, TKTonePickerController;

@interface TKTonePickerSectionItem : TKPickerSectionItem <TKPickerContainerItem> {
    TKTonePickerController *_parentTonePickerController;
    long long _numberOfChildren;
    unsigned long long _sectionHeader;
    unsigned long long _regularToneSectionIndex;
}

@property unsigned long long sectionHeader;
@property unsigned long long regularToneSectionIndex;
@property(setter=_setParentTonePickerController:) TKTonePickerController * _parentTonePickerController;
@property long long numberOfChildren;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)_appendDescriptionOfAttributesToString:(id)arg1;
- (id)_parentTonePickerController;
- (long long)numberOfChildren;
- (unsigned long long)regularToneSectionIndex;
- (id)childItemAtIndex:(long long)arg1;
- (void)_setParentTonePickerController:(id)arg1;
- (void)_setRegularToneSectionIndex:(unsigned long long)arg1;
- (void)_setSectionHeader:(unsigned long long)arg1;
- (void)_setNumberOfChildren:(long long)arg1;
- (unsigned long long)sectionHeader;

@end
