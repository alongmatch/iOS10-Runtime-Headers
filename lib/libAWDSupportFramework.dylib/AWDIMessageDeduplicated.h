/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDIMessageDeduplicated : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _deduplicationInterval;
    NSString *_guid;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int deduplicationInterval : 1; 
    } _has;
}

@property(readonly) bool hasGuid;
@property(retain) NSString * guid;
@property bool hasTimestamp;
@property unsigned long long timestamp;
@property bool hasDeduplicationInterval;
@property unsigned int deduplicationInterval;


- (unsigned int)deduplicationInterval;
- (bool)hasDeduplicationInterval;
- (void)setHasDeduplicationInterval:(bool)arg1;
- (void)setDeduplicationInterval:(unsigned int)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (bool)hasGuid;
- (bool)hasTimestamp;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)setGuid:(id)arg1;
- (id)guid;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
