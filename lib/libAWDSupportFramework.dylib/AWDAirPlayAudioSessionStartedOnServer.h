/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDAirPlayAudioSessionStartedOnServer : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _audioCompressionType;
    unsigned int _clientAnnounceMs;
    unsigned int _clientAuthMs;
    unsigned int _clientBonjourMs;
    unsigned int _clientConnectMs;
    NSString *_clientModel;
    unsigned int _clientSetupAudioMs;
    unsigned int _clientSetupScreenMs;
    NSString *_clientVersion;
    unsigned int _latencyMs;
    unsigned int _serverRecordMs;
    NSString *_sessionUUID;
    int _status;
    unsigned int _transportType;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int audioCompressionType : 1; 
        unsigned int clientAnnounceMs : 1; 
        unsigned int clientAuthMs : 1; 
        unsigned int clientBonjourMs : 1; 
        unsigned int clientConnectMs : 1; 
        unsigned int clientSetupAudioMs : 1; 
        unsigned int clientSetupScreenMs : 1; 
        unsigned int latencyMs : 1; 
        unsigned int serverRecordMs : 1; 
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
@property bool hasAudioCompressionType;
@property unsigned int audioCompressionType;
@property bool hasLatencyMs;
@property unsigned int latencyMs;
@property bool hasClientBonjourMs;
@property unsigned int clientBonjourMs;
@property bool hasClientConnectMs;
@property unsigned int clientConnectMs;
@property bool hasClientAuthMs;
@property unsigned int clientAuthMs;
@property bool hasClientAnnounceMs;
@property unsigned int clientAnnounceMs;
@property bool hasClientSetupAudioMs;
@property unsigned int clientSetupAudioMs;
@property bool hasClientSetupScreenMs;
@property unsigned int clientSetupScreenMs;
@property bool hasServerRecordMs;
@property unsigned int serverRecordMs;


- (bool)hasStatus;
- (unsigned int)serverRecordMs;
- (unsigned int)clientSetupScreenMs;
- (unsigned int)clientSetupAudioMs;
- (unsigned int)clientAnnounceMs;
- (unsigned int)clientAuthMs;
- (unsigned int)clientConnectMs;
- (unsigned int)clientBonjourMs;
- (unsigned int)latencyMs;
- (unsigned int)audioCompressionType;
- (id)clientModel;
- (bool)hasServerRecordMs;
- (void)setHasServerRecordMs:(bool)arg1;
- (void)setServerRecordMs:(unsigned int)arg1;
- (bool)hasClientSetupScreenMs;
- (void)setHasClientSetupScreenMs:(bool)arg1;
- (void)setClientSetupScreenMs:(unsigned int)arg1;
- (bool)hasClientSetupAudioMs;
- (void)setHasClientSetupAudioMs:(bool)arg1;
- (void)setClientSetupAudioMs:(unsigned int)arg1;
- (bool)hasClientAnnounceMs;
- (void)setHasClientAnnounceMs:(bool)arg1;
- (void)setClientAnnounceMs:(unsigned int)arg1;
- (bool)hasClientAuthMs;
- (void)setHasClientAuthMs:(bool)arg1;
- (void)setClientAuthMs:(unsigned int)arg1;
- (bool)hasClientConnectMs;
- (void)setHasClientConnectMs:(bool)arg1;
- (void)setClientConnectMs:(unsigned int)arg1;
- (bool)hasClientBonjourMs;
- (void)setHasClientBonjourMs:(bool)arg1;
- (void)setClientBonjourMs:(unsigned int)arg1;
- (bool)hasLatencyMs;
- (void)setHasLatencyMs:(bool)arg1;
- (void)setLatencyMs:(unsigned int)arg1;
- (bool)hasAudioCompressionType;
- (void)setHasAudioCompressionType:(bool)arg1;
- (void)setAudioCompressionType:(unsigned int)arg1;
- (bool)hasClientVersion;
- (bool)hasClientModel;
- (void)setClientVersion:(id)arg1;
- (void)setClientModel:(id)arg1;
- (id)sessionUUID;
- (bool)hasSessionUUID;
- (void)setSessionUUID:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (id)clientVersion;
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

@end
