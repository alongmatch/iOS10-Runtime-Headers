/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSData, NSMutableArray, NSString;

@interface CKDPConfigurationFieldValue : PBCodable <NSCopying> {
    double _doubleValue;
    long long _longValue;
    NSData *_bytesValue;
    NSMutableArray *_fieldValues;
    NSMutableArray *_listValues;
    NSString *_stringValue;
    int _type;
    bool_boolValue;
    struct { 
        unsigned int doubleValue : 1; 
        unsigned int longValue : 1; 
        unsigned int type : 1; 
        unsigned int boolValue : 1; 
    } _has;
}

@property bool hasType;
@property int type;
@property(readonly) bool hasBytesValue;
@property(retain) NSData * bytesValue;
@property bool hasBoolValue;
@property bool boolValue;
@property bool hasLongValue;
@property long long longValue;
@property bool hasDoubleValue;
@property double doubleValue;
@property(readonly) bool hasStringValue;
@property(retain) NSString * stringValue;
@property(retain) NSMutableArray * fieldValues;
@property(retain) NSMutableArray * listValues;


- (void)setLongValue:(long long)arg1;
- (void)setFieldValues:(id)arg1;
- (id)fieldValues;
- (bool)hasLongValue;
- (void)setHasLongValue:(bool)arg1;
- (bool)hasBoolValue;
- (void)setHasBoolValue:(bool)arg1;
- (void)setBoolValue:(bool)arg1;
- (id)listValuesAtIndex:(unsigned long long)arg1;
- (id)fieldValuesAtIndex:(unsigned long long)arg1;
- (void)clearFieldValues;
- (unsigned long long)fieldValuesCount;
- (void)addListValues:(id)arg1;
- (void)addFieldValues:(id)arg1;
- (void)setListValues:(id)arg1;
- (id)listValues;
- (id)bytesValue;
- (bool)hasDoubleValue;
- (void)setHasDoubleValue:(bool)arg1;
- (void)setDoubleValue:(double)arg1;
- (bool)hasBytesValue;
- (void)clearListValues;
- (unsigned long long)listValuesCount;
- (void)setBytesValue:(id)arg1;
- (bool)hasStringValue;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)setHasType:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)hasType;
- (void)setStringValue:(id)arg1;
- (long long)longValue;
- (id)stringValue;
- (double)doubleValue;
- (bool)boolValue;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setType:(int)arg1;
- (int)type;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
