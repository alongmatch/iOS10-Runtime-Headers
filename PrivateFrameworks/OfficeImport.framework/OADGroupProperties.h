/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSArray, NSString, OADFill, OADScene3D, OADShape3D;

@interface OADGroupProperties : OADDrawableProperties <OADEffectsParent, OADProperties3DParent> {
    OADFill *mFill;
    NSArray *mEffects;
    OADScene3D *mScene3D;
    OADShape3D *mShape3D;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)defaultProperties;

- (bool)hasEffects;
- (id)initWithDefaults;
- (id)shape3D;
- (id)scene3D;
- (bool)hasShape3D;
- (bool)hasScene3D;
- (void)setShape3D:(id)arg1;
- (void)setScene3D:(id)arg1;
- (void)setEffects:(id)arg1;
- (id)effects;
- (void)setFill:(id)arg1;
- (bool)hasFill;
- (void)dealloc;
- (id)fill;

@end
