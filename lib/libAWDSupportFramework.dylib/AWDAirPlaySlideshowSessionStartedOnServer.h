/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDAirPlaySlideshowSessionStartedOnServer : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    NSString *_clientModel;
    NSString *_clientVersion;
    unsigned int _repeat;
    NSString *_sessionUUID;
    unsigned int _slideMs;
    int _status;
    NSString *_theme;
    NSString *_transition;
    unsigned int _transportType;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int repeat : 1; 
        unsigned int slideMs : 1; 
        unsigned int status : 1; 
        unsigned int transportType : 1; 
    } _has;
}

@property(readonly) bool hasSessionUUID;
@property(retain) NSString * sessionUUID;
@property bool hasTimestamp;
@property unsigned long long timestamp;
@property bool hasStatus;
@property int status;
@property bool hasTransportType;
@property unsigned int transportType;
@property(readonly) bool hasClientModel;
@property(retain) NSString * clientModel;
@property(readonly) bool hasClientVersion;
@property(retain) NSString * clientVersion;
@property(readonly) bool hasTheme;
@property(retain) NSString * theme;
@property(readonly) bool hasTransition;
@property(retain) NSString * transition;
@property bool hasRepeat;
@property unsigned int repeat;
@property bool hasSlideMs;
@property unsigned int slideMs;


- (bool)hasStatus;
- (unsigned int)slideMs;
- (unsigned int)repeat;
- (bool)hasSlideMs;
- (void)setHasSlideMs:(bool)arg1;
- (void)setSlideMs:(unsigned int)arg1;
- (bool)hasRepeat;
- (void)setHasRepeat:(bool)arg1;
- (void)setRepeat:(unsigned int)arg1;
- (bool)hasTransition;
- (bool)hasTheme;
- (id)clientModel;
- (bool)hasClientVersion;
- (bool)hasClientModel;
- (void)setClientVersion:(id)arg1;
- (void)setClientModel:(id)arg1;
- (id)sessionUUID;
- (bool)hasSessionUUID;
- (void)setSessionUUID:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (id)clientVersion;
- (void)setTheme:(id)arg1;
- (id)theme;
- (void)setHasStatus:(bool)arg1;
- (void)setHasTransportType:(bool)arg1;
- (bool)hasTimestamp;
- (bool)hasTransportType;
- (void)setTransportType:(unsigned int)arg1;
- (unsigned int)transportType;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)setStatus:(int)arg1;
- (int)status;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)transition;
- (void)setTransition:(id)arg1;

@end
