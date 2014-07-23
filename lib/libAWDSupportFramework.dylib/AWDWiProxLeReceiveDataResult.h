/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDWiProxLeReceiveDataResult : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _dataLength;
    NSString *_peerId;
    NSString *_sessionId;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int dataLength : 1; 
    } _has;
}

@property bool hasTimestamp;
@property unsigned long long timestamp;
@property(readonly) bool hasSessionId;
@property(retain) NSString * sessionId;
@property(readonly) bool hasPeerId;
@property(retain) NSString * peerId;
@property bool hasDataLength;
@property unsigned int dataLength;


- (void)setDataLength:(unsigned int)arg1;
- (id)peerId;
- (bool)hasPeerId;
- (void)setPeerId:(id)arg1;
- (bool)hasDataLength;
- (void)setHasDataLength:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (unsigned int)dataLength;
- (void)setSessionId:(id)arg1;
- (id)sessionId;
- (bool)hasSessionId;
- (bool)hasTimestamp;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
