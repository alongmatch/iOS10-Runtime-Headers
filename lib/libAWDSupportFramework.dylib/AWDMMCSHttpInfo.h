/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/usr/lib/libAWDSupportFramework.dylib
 */

@class NSString, NSMutableArray;

@interface AWDMMCSHttpInfo : PBCodable <NSCopying> {
    long long _duration;
    long long _responseReceivedDuration;
    long long _startTime;
    int _errorCode;
    NSString *_errorDomain;
    NSMutableArray *_httpErrors;
    int _httpStatus;
    NSString *_interfaceIdentifier;
    NSString *_locatorHostname;
    NSString *_locatorPeerAddress;
    unsigned int _locatorPort;
    NSString *_locatorScheme;
    int _requestSize;
    int _responseSize;
    NSMutableArray *_tcpInfos;
    bool_cancelled;
    bool_connectionReused;
    bool_timedOut;
    bool_transactionComplete;
    struct { 
        unsigned int duration : 1; 
        unsigned int responseReceivedDuration : 1; 
        unsigned int startTime : 1; 
        unsigned int errorCode : 1; 
        unsigned int httpStatus : 1; 
        unsigned int locatorPort : 1; 
        unsigned int requestSize : 1; 
        unsigned int responseSize : 1; 
        unsigned int cancelled : 1; 
        unsigned int connectionReused : 1; 
        unsigned int timedOut : 1; 
        unsigned int transactionComplete : 1; 
    } _has;
}

@property(readonly) bool hasLocatorScheme;
@property(retain) NSString * locatorScheme;
@property(readonly) bool hasLocatorHostname;
@property(retain) NSString * locatorHostname;
@property bool hasLocatorPort;
@property unsigned int locatorPort;
@property bool hasConnectionReused;
@property bool connectionReused;
@property bool hasStartTime;
@property long long startTime;
@property bool hasResponseReceivedDuration;
@property long long responseReceivedDuration;
@property bool hasDuration;
@property long long duration;
@property bool hasHttpStatus;
@property int httpStatus;
@property(readonly) bool hasErrorDomain;
@property(retain) NSString * errorDomain;
@property bool hasErrorCode;
@property int errorCode;
@property bool hasRequestSize;
@property int requestSize;
@property bool hasResponseSize;
@property int responseSize;
@property bool hasTransactionComplete;
@property bool transactionComplete;
@property bool hasTimedOut;
@property bool timedOut;
@property bool hasCancelled;
@property bool cancelled;
@property(retain) NSMutableArray * tcpInfos;
@property(retain) NSMutableArray * httpErrors;
@property(readonly) bool hasInterfaceIdentifier;
@property(retain) NSString * interfaceIdentifier;
@property(readonly) bool hasLocatorPeerAddress;
@property(retain) NSString * locatorPeerAddress;


- (bool)hasDuration;
- (id)locatorPeerAddress;
- (id)httpErrors;
- (id)tcpInfos;
- (bool)transactionComplete;
- (int)responseSize;
- (int)requestSize;
- (int)httpStatus;
- (long long)responseReceivedDuration;
- (bool)connectionReused;
- (unsigned int)locatorPort;
- (id)locatorHostname;
- (id)locatorScheme;
- (bool)hasLocatorPeerAddress;
- (bool)hasInterfaceIdentifier;
- (bool)hasCancelled;
- (void)setHasCancelled:(bool)arg1;
- (void)setHasTimedOut:(bool)arg1;
- (bool)hasTransactionComplete;
- (void)setHasTransactionComplete:(bool)arg1;
- (void)setTransactionComplete:(bool)arg1;
- (bool)hasResponseSize;
- (void)setHasResponseSize:(bool)arg1;
- (void)setResponseSize:(int)arg1;
- (bool)hasRequestSize;
- (void)setHasRequestSize:(bool)arg1;
- (void)setRequestSize:(int)arg1;
- (bool)hasHttpStatus;
- (void)setHasHttpStatus:(bool)arg1;
- (void)setHttpStatus:(int)arg1;
- (bool)hasResponseReceivedDuration;
- (void)setHasResponseReceivedDuration:(bool)arg1;
- (void)setResponseReceivedDuration:(long long)arg1;
- (bool)hasConnectionReused;
- (void)setHasConnectionReused:(bool)arg1;
- (void)setConnectionReused:(bool)arg1;
- (bool)hasLocatorPort;
- (void)setHasLocatorPort:(bool)arg1;
- (void)setLocatorPort:(unsigned int)arg1;
- (bool)hasLocatorHostname;
- (bool)hasLocatorScheme;
- (id)httpErrorAtIndex:(unsigned long long)arg1;
- (void)clearHttpErrors;
- (unsigned long long)httpErrorsCount;
- (id)tcpInfoAtIndex:(unsigned long long)arg1;
- (void)clearTcpInfos;
- (unsigned long long)tcpInfosCount;
- (void)addHttpError:(id)arg1;
- (void)addTcpInfo:(id)arg1;
- (void)setLocatorPeerAddress:(id)arg1;
- (void)setInterfaceIdentifier:(id)arg1;
- (void)setHttpErrors:(id)arg1;
- (void)setTcpInfos:(id)arg1;
- (void)setLocatorHostname:(id)arg1;
- (void)setLocatorScheme:(id)arg1;
- (bool)hasStartTime;
- (bool)hasErrorCode;
- (void)setHasErrorCode:(bool)arg1;
- (bool)hasErrorDomain;
- (void)setErrorDomain:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)setTimedOut:(bool)arg1;
- (bool)hasTimedOut;
- (id)interfaceIdentifier;
- (void)setHasDuration:(bool)arg1;
- (void)setHasStartTime:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)errorDomain;
- (bool)timedOut;
- (void)setErrorCode:(int)arg1;
- (int)errorCode;
- (void)setDuration:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setStartTime:(long long)arg1;
- (long long)startTime;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)cancelled;
- (long long)duration;
- (id)dictionaryRepresentation;
- (void)setCancelled:(bool)arg1;

@end
