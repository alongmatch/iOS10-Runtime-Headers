/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDLBConnectionReport : PBCodable <NSCopying> {
    struct { 
        long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _connectionReadyTimes;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _resumptionFailureErrors;
    struct { 
        long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _resumptionFailureTimes;
    struct { 
        long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _resumptionSuccessTimes;
    long long _bytesReceived;
    long long _bytesSent;
    long long _clientConnectionCount;
    long long _connectionDuration;
    unsigned long long _timestamp;
    int _connectionAttemptCount;
    int _connectionCellularFallbackCount;
    int _connectionFailureCount;
    int _connectionSuccessMptcpCount;
    int _connectionSuccessTcpCount;
    int _resumptionFailureCount;
    int _resumptionSuccessCount;
    int _suspensionCount;
    int _upgradeSuccessAndNotNeededCount;
    int _upgradeSuccessAndPrimaryCount;
    struct { 
        unsigned int bytesReceived : 1; 
        unsigned int bytesSent : 1; 
        unsigned int clientConnectionCount : 1; 
        unsigned int connectionDuration : 1; 
        unsigned int timestamp : 1; 
        unsigned int connectionAttemptCount : 1; 
        unsigned int connectionCellularFallbackCount : 1; 
        unsigned int connectionFailureCount : 1; 
        unsigned int connectionSuccessMptcpCount : 1; 
        unsigned int connectionSuccessTcpCount : 1; 
        unsigned int resumptionFailureCount : 1; 
        unsigned int resumptionSuccessCount : 1; 
        unsigned int suspensionCount : 1; 
        unsigned int upgradeSuccessAndNotNeededCount : 1; 
        unsigned int upgradeSuccessAndPrimaryCount : 1; 
    } _has;
}

@property bool hasTimestamp;
@property unsigned long long timestamp;
@property bool hasConnectionAttemptCount;
@property int connectionAttemptCount;
@property bool hasConnectionSuccessMptcpCount;
@property int connectionSuccessMptcpCount;
@property bool hasConnectionSuccessTcpCount;
@property int connectionSuccessTcpCount;
@property bool hasConnectionFailureCount;
@property int connectionFailureCount;
@property bool hasConnectionCellularFallbackCount;
@property int connectionCellularFallbackCount;
@property(readonly) unsigned long long connectionReadyTimesCount;
@property(readonly) long long* connectionReadyTimes;
@property bool hasSuspensionCount;
@property int suspensionCount;
@property bool hasResumptionSuccessCount;
@property int resumptionSuccessCount;
@property bool hasResumptionFailureCount;
@property int resumptionFailureCount;
@property(readonly) unsigned long long resumptionFailureErrorsCount;
@property(readonly) int* resumptionFailureErrors;
@property(readonly) unsigned long long resumptionSuccessTimesCount;
@property(readonly) long long* resumptionSuccessTimes;
@property(readonly) unsigned long long resumptionFailureTimesCount;
@property(readonly) long long* resumptionFailureTimes;
@property bool hasUpgradeSuccessAndPrimaryCount;
@property int upgradeSuccessAndPrimaryCount;
@property bool hasUpgradeSuccessAndNotNeededCount;
@property int upgradeSuccessAndNotNeededCount;
@property bool hasConnectionDuration;
@property long long connectionDuration;
@property bool hasBytesSent;
@property long long bytesSent;
@property bool hasBytesReceived;
@property long long bytesReceived;
@property bool hasClientConnectionCount;
@property long long clientConnectionCount;


- (long long)clientConnectionCount;
- (int)upgradeSuccessAndNotNeededCount;
- (int)upgradeSuccessAndPrimaryCount;
- (int)resumptionFailureCount;
- (int)resumptionSuccessCount;
- (int)suspensionCount;
- (int)connectionFailureCount;
- (int)connectionSuccessTcpCount;
- (int)connectionSuccessMptcpCount;
- (int)connectionAttemptCount;
- (bool)hasClientConnectionCount;
- (void)setHasClientConnectionCount:(bool)arg1;
- (void)setClientConnectionCount:(long long)arg1;
- (bool)hasUpgradeSuccessAndNotNeededCount;
- (void)setHasUpgradeSuccessAndNotNeededCount:(bool)arg1;
- (void)setUpgradeSuccessAndNotNeededCount:(int)arg1;
- (bool)hasUpgradeSuccessAndPrimaryCount;
- (void)setHasUpgradeSuccessAndPrimaryCount:(bool)arg1;
- (void)setUpgradeSuccessAndPrimaryCount:(int)arg1;
- (void)setResumptionFailureTimes:(long long*)arg1 count:(unsigned long long)arg2;
- (long long*)resumptionFailureTimes;
- (void)setResumptionSuccessTimes:(long long*)arg1 count:(unsigned long long)arg2;
- (long long*)resumptionSuccessTimes;
- (void)setResumptionFailureErrors:(int*)arg1 count:(unsigned long long)arg2;
- (int*)resumptionFailureErrors;
- (bool)hasResumptionFailureCount;
- (void)setHasResumptionFailureCount:(bool)arg1;
- (void)setResumptionFailureCount:(int)arg1;
- (bool)hasResumptionSuccessCount;
- (void)setHasResumptionSuccessCount:(bool)arg1;
- (void)setResumptionSuccessCount:(int)arg1;
- (bool)hasSuspensionCount;
- (void)setHasSuspensionCount:(bool)arg1;
- (void)setSuspensionCount:(int)arg1;
- (void)setConnectionReadyTimes:(long long*)arg1 count:(unsigned long long)arg2;
- (long long*)connectionReadyTimes;
- (bool)hasConnectionFailureCount;
- (void)setHasConnectionFailureCount:(bool)arg1;
- (void)setConnectionFailureCount:(int)arg1;
- (bool)hasConnectionSuccessTcpCount;
- (void)setHasConnectionSuccessTcpCount:(bool)arg1;
- (void)setConnectionSuccessTcpCount:(int)arg1;
- (bool)hasConnectionSuccessMptcpCount;
- (void)setHasConnectionSuccessMptcpCount:(bool)arg1;
- (void)setConnectionSuccessMptcpCount:(int)arg1;
- (bool)hasConnectionAttemptCount;
- (void)setHasConnectionAttemptCount:(bool)arg1;
- (void)setConnectionAttemptCount:(int)arg1;
- (void)addResumptionFailureTimes:(long long)arg1;
- (long long)resumptionFailureTimesAtIndex:(unsigned long long)arg1;
- (void)clearResumptionFailureTimes;
- (unsigned long long)resumptionFailureTimesCount;
- (void)addResumptionSuccessTimes:(long long)arg1;
- (long long)resumptionSuccessTimesAtIndex:(unsigned long long)arg1;
- (void)clearResumptionSuccessTimes;
- (unsigned long long)resumptionSuccessTimesCount;
- (void)addResumptionFailureErrors:(int)arg1;
- (int)resumptionFailureErrorsAtIndex:(unsigned long long)arg1;
- (void)clearResumptionFailureErrors;
- (unsigned long long)resumptionFailureErrorsCount;
- (void)addConnectionReadyTimes:(long long)arg1;
- (long long)connectionReadyTimesAtIndex:(unsigned long long)arg1;
- (void)clearConnectionReadyTimes;
- (unsigned long long)connectionReadyTimesCount;
- (long long)connectionDuration;
- (bool)hasBytesReceived;
- (void)setHasBytesReceived:(bool)arg1;
- (void)setBytesReceived:(long long)arg1;
- (bool)hasBytesSent;
- (void)setHasBytesSent:(bool)arg1;
- (bool)hasConnectionDuration;
- (void)setHasConnectionDuration:(bool)arg1;
- (void)setConnectionDuration:(long long)arg1;
- (int)connectionCellularFallbackCount;
- (bool)hasConnectionCellularFallbackCount;
- (void)setHasConnectionCellularFallbackCount:(bool)arg1;
- (void)setConnectionCellularFallbackCount:(int)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (long long)bytesReceived;
- (long long)bytesSent;
- (void)setBytesSent:(long long)arg1;
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
