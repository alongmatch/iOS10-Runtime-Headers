/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUICommonAssetStorage : NSObject  {
    struct _carheader { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; BOOL x6[128]; BOOL x7[256]; unsigned char x8[16]; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; } *_header;
    struct _renditionkeyfmt { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4[0]; } *_keyfmt;
    void *_imagedb;
    void *_colordb;
    void *_fontdb;
    void *_fontsizedb;
    void *_zcglyphdb;
    void *_zcbezeldb;
    void *_facetKeysdb;
    void *_elementDebugInfoDB;
    void *_partDebugInfoDB;
    bool_swap;
}

+ (void)initialize;

- (id)path;
- (id)uuid;
- (void)enumerateKeysAndObjectsUsingBlock:(id)arg1;
- (const char *)versionString;
- (id)displayNameForPartID:(long long)arg1;
- (id)constantNameForPartID:(long long)arg1;
- (id)displayNameForElementID:(long long)arg1;
- (id)constantNameForElementID:(long long)arg1;
- (id)_displayNameForIdentifier:(unsigned int)arg1 fromDebugTree:(void*)arg2;
- (id)_constantNameForIdentifier:(unsigned int)arg1 fromDebugTree:(void*)arg2;
- (id)_dataForIdentifier:(unsigned int)arg1 fromDebugTree:(void*)arg2;
- (float)fontSizeForFontSizeType:(id)arg1;
- (bool)getBaselineOffset:(float*)arg1 forFontType:(id)arg2;
- (bool)getFontName:(id*)arg1 baselineOffset:(float*)arg2 forFontType:(id)arg3;
- (bool)hasColorForName:(const char *)arg1;
- (bool)getColor:(struct _colordef { unsigned int x1; unsigned int x2; struct _rgbquad { unsigned int x_3_1_1 : 8; unsigned int x_3_1_2 : 8; unsigned int x_3_1_3 : 8; unsigned int x_3_1_4 : 8; } x3; }*)arg1 forName:(const char *)arg2;
- (id)zeroCodeBezelList;
- (id)renditionNameForKeyList:(struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (id)allRenditionNames;
- (const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)renditionKeyForName:(const char *)arg1 hotSpot:(struct CGPoint { double x1; double x2; }*)arg2;
- (id)allAssetKeys;
- (bool)assetExistsForKey:(id)arg1;
- (unsigned int)associatedChecksum;
- (unsigned int)renditionCount;
- (id)keyFormatData;
- (int)keySemantics;
- (long long)storageTimestamp;
- (unsigned int)schemaVersion;
- (unsigned int)coreuiVersion;
- (unsigned int)storageVersion;
- (const struct FontValue { BOOL x1[128]; float x2; }*)_fontValueForFontType:(id)arg1;
- (id)_zeroCodeListFromTree:(const void*)arg1;
- (void)_swapZeroCodeInformation:(struct { unsigned int x1; unsigned int x2; }*)arg1;
- (struct _renditionkeytoken { unsigned short x1; unsigned short x2; })_swapRenditionKeyToken:(struct _renditionkeytoken { unsigned short x1; unsigned short x2; })arg1;
- (id)assetForKey:(id)arg1;
- (void)_swapRenditionKeyArray:(unsigned short*)arg1;
- (bool)swapped;
- (id)assetKeysMatchingBlock:(id)arg1;
- (long long)_storagefileTimestamp;
- (void)_swapKeyFormat;
- (void)_bringHeaderInfoUpToDate;
- (void)_swapHeader;
- (void)_initDefaultHeaderVersion:(double)arg1 versionString:(const char *)arg2;
- (id)initWithPath:(id)arg1 forWriting:(bool)arg2;
- (id)zeroCodeGlyphList;
- (bool)usesCUISystemThemeRenditionKey;
- (long long)maximumRenditionKeyTokenCount;
- (const struct _renditionkeyfmt { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4[0]; }*)keyFormat;
- (unsigned int)colorSpaceID;
- (void)finalize;
- (void)dealloc;
- (id)description;
- (id)initWithPath:(id)arg1;

@end
