/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString, NSNumber;

@interface NSNumber : NSValue <CKRecordValue, PQLBindable, PQLResultSetInitializer> {
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) bool brc_isFolderID;
@property(readonly) bool brc_isDocumentID;
@property(readonly) NSNumber * brc_folderID;
@property(readonly) NSNumber * brc_documentID;
@property(readonly) unsigned long long brc_rawID;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) struct { unsigned int x1 : 8; unsigned int x2 : 4; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 18; unsigned short x6[8]; } decimalValue;
@property(readonly) BOOL charValue;
@property(readonly) unsigned char unsignedCharValue;
@property(readonly) short shortValue;
@property(readonly) unsigned short unsignedShortValue;
@property(readonly) int intValue;
@property(readonly) unsigned int unsignedIntValue;
@property(readonly) long long longValue;
@property(readonly) unsigned long long unsignedLongValue;
@property(readonly) long long longLongValue;
@property(readonly) unsigned long long unsignedLongLongValue;
@property(readonly) float floatValue;
@property(readonly) double doubleValue;
@property(readonly) bool boolValue;
@property(readonly) long long integerValue;
@property(readonly) unsigned long long unsignedIntegerValue;
@property(copy,readonly) NSString * stringValue;

+ (id)numberWithUnsignedChar:(unsigned char)arg1;
+ (id)numberWithUnsignedLong:(unsigned long long)arg1;
+ (id)numberWithUnsignedInteger:(unsigned long long)arg1;
+ (id)numberWithBool:(bool)arg1;
+ (id)numberWithInteger:(long long)arg1;
+ (id)numberWithLongLong:(long long)arg1;
+ (id)numberWithInt:(int)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;
+ (id)numberWithLong:(long long)arg1;
+ (id)numberWithUnsignedInt:(unsigned int)arg1;
+ (id)numberWithUnsignedShort:(unsigned short)arg1;
+ (id)numberWithShort:(short)arg1;
+ (id)numberWithChar:(BOOL)arg1;
+ (id)numberWithDouble:(double)arg1;
+ (id)numberWithFloat:(float)arg1;
+ (id)numberWithUnsignedLongLong:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;
+ (bool)parseString:(id)arg1 intoNSUInteger:(unsigned long long*)arg2;
+ (bool)parseString:(id)arg1 intoNSInteger:(long long*)arg2;
+ (bool)parseString:(id)arg1 intoSInt64:(long long*)arg2;
+ (bool)parseString:(id)arg1 intoUInt64:(unsigned long long*)arg2;
+ (id)numberWithItemIdentifier:(unsigned long long)arg1;
+ (id)boolFromICSString:(id)arg1;
+ (id)numberWithCGFloat:(double)arg1;
+ (id)cr_numberWithCRContactGroupKind:(unsigned long long)arg1;
+ (id)cr_numberWithCRContactID:(long long)arg1;
+ (id)cr_numberWithCRRecentID:(long long)arg1;
+ (id)_gkServerTimeInterval:(double)arg1;
+ (id)brc_fileObjectIDWithFolderID:(unsigned long long)arg1;
+ (id)brc_fileObjectIDWithDocumentID:(unsigned int)arg1;
+ (id)brc_fileObjectIDForURL:(id)arg1 allocateDocID:(bool)arg2;
+ (id)numberWithCGFloat:(double)arg1;

- (id)initWithUnsignedLongLong:(unsigned long long)arg1;
- (unsigned long long)_cfTypeID;
- (unsigned long long)unsignedIntegerValue;
- (unsigned long long)unsignedLongLongValue;
- (float)floatValue;
- (long long)longLongValue;
- (int)intValue;
- (short)shortValue;
- (BOOL)charValue;
- (unsigned int)unsignedIntValue;
- (unsigned long long)unsignedLongValue;
- (long long)longValue;
- (id)stringValue;
- (id)descriptionWithLocale:(id)arg1;
- (bool)isEqualToNumber:(id)arg1;
- (bool)isNSNumber__;
- (bool)_getCString:(char *)arg1 length:(int)arg2 multiplier:(double)arg3;
- (double)doubleValue;
- (long long)_reverseCompare:(id)arg1;
- (long long)compare:(id)arg1;
- (unsigned char)_getValue:(void*)arg1 forType:(long long)arg2;
- (long long)_cfNumberType;
- (bool)boolValue;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (long long)integerValue;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithUnsignedInteger:(unsigned long long)arg1;
- (id)initWithInteger:(long long)arg1;
- (struct { unsigned int x1 : 8; unsigned int x2 : 4; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 18; unsigned short x6[8]; })decimalValue;
- (id)initWithBool:(bool)arg1;
- (id)initWithChar:(BOOL)arg1;
- (id)initWithUnsignedChar:(unsigned char)arg1;
- (id)initWithDouble:(double)arg1;
- (id)initWithFloat:(float)arg1;
- (id)initWithInt:(int)arg1;
- (id)initWithUnsignedInt:(unsigned int)arg1;
- (id)initWithLong:(long long)arg1;
- (id)initWithUnsignedLong:(unsigned long long)arg1;
- (id)initWithLongLong:(long long)arg1;
- (id)initWithShort:(short)arg1;
- (id)initWithUnsignedShort:(unsigned short)arg1;
- (unsigned char)unsignedCharValue;
- (unsigned short)unsignedShortValue;
- (bool)_allowsDirectEncoding;
- (Class)classForCoder;
- (id)localizedString;
- (struct Object { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; }*)CA_copyRenderValue;
- (id)CA_interpolateValues:(id)arg1 :(id)arg2 :(id)arg3 interpolator:(const struct ValueInterpolator { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; boolx10; }*)arg4;
- (double)CA_distanceToValue:(id)arg1;
- (id)CA_roundToIntegerFromValue:(id)arg1;
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;
- (id)CA_addValue:(id)arg1 multipliedBy:(int)arg2;
- (id)CAMLType;
- (void)encodeWithCAMLWriter:(id)arg1;
- (id)initWithItemIdentifier:(unsigned long long)arg1;
- (unsigned long long)itemIdentifierValue;
- (void)ml_bindToSQLiteStatement:(struct sqlite3_stmt { }*)arg1 atPosition:(int)arg2;
- (id)ml_stringValueForSQL;
- (id)MPMediaLibraryDataProviderSystemML3CoercedString;
- (void)_ICSFBTypeAppendingToString:(id)arg1;
- (void)_ICSUTCOffsetAppendingToString:(id)arg1;
- (void)_ICSBoolAppendingToString:(id)arg1;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (id)initWithCGFloat:(double)arg1;
- (double)cgFloatValue;
- (unsigned long long)cr_CRContactGroupKindValue;
- (long long)cr_CRContactIDValue;
- (long long)cr_CRRecentIDValue;
- (id)initWithCPLArchiver:(id)arg1;
- (id)plistArchiveWithCPLArchiver:(id)arg1;
- (id)brc_documentID;
- (id)brc_folderID;
- (bool)brc_isDocumentID;
- (bool)brc_isFolderID;
- (unsigned long long)brc_rawID;
- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;
- (id)initFromPQLResultSet:(id)arg1 error:(id*)arg2;
- (bool)isFloatingPointType;
- (double)CGFloatValue;
- (void)appendJsonStringToString:(id)arg1;
- (bool)WF_isEqualToNumber:(id)arg1 withPrecision:(float)arg2;

@end
