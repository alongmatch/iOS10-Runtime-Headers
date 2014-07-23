/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDSMSSentMessage : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    int _ctError;
    int _fzError;
    NSString *_guid;
    unsigned int _hasAttachments;
    unsigned int _isGroupMessage;
    unsigned int _isToEmail;
    unsigned int _isToPhoneNumber;
    unsigned int _sendDuration;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int ctError : 1; 
        unsigned int fzError : 1; 
        unsigned int hasAttachments : 1; 
        unsigned int isGroupMessage : 1; 
        unsigned int isToEmail : 1; 
        unsigned int isToPhoneNumber : 1; 
        unsigned int sendDuration : 1; 
    } _has;
}

@property(readonly) bool hasGuid;
@property(retain) NSString * guid;
@property bool hasTimestamp;
@property unsigned long long timestamp;
@property bool hasFzError;
@property int fzError;
@property bool hasCtError;
@property int ctError;
@property bool hasIsGroupMessage;
@property unsigned int isGroupMessage;
@property bool hasIsToPhoneNumber;
@property unsigned int isToPhoneNumber;
@property bool hasIsToEmail;
@property unsigned int isToEmail;
@property bool hasHasAttachments;
@property unsigned int hasAttachments;
@property bool hasSendDuration;
@property unsigned int sendDuration;


- (int)ctError;
- (bool)hasCtError;
- (void)setHasCtError:(bool)arg1;
- (void)setCtError:(int)arg1;
- (unsigned int)isToEmail;
- (unsigned int)isToPhoneNumber;
- (unsigned int)isGroupMessage;
- (int)fzError;
- (bool)hasHasAttachments;
- (void)setHasHasAttachments:(bool)arg1;
- (void)setHasAttachments:(unsigned int)arg1;
- (bool)hasIsToEmail;
- (void)setHasIsToEmail:(bool)arg1;
- (void)setIsToEmail:(unsigned int)arg1;
- (bool)hasIsToPhoneNumber;
- (void)setHasIsToPhoneNumber:(bool)arg1;
- (void)setIsToPhoneNumber:(unsigned int)arg1;
- (bool)hasIsGroupMessage;
- (void)setHasIsGroupMessage:(bool)arg1;
- (void)setIsGroupMessage:(unsigned int)arg1;
- (bool)hasFzError;
- (void)setHasFzError:(bool)arg1;
- (void)setFzError:(int)arg1;
- (unsigned int)sendDuration;
- (bool)hasSendDuration;
- (void)setHasSendDuration:(bool)arg1;
- (void)setSendDuration:(unsigned int)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (bool)hasGuid;
- (unsigned int)hasAttachments;
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
