/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSData, NSMutableArray;

@interface CKDPNotificationSyncResponse : PBCodable <NSCopying> {
    NSData *_changeID;
    NSMutableArray *_pushMessages;
    bool_moreAvailable;
    struct { 
        unsigned int moreAvailable : 1; 
    } _has;
}

@property(readonly) bool hasChangeID;
@property(retain) NSData * changeID;
@property(retain) NSMutableArray * pushMessages;
@property bool hasMoreAvailable;
@property bool moreAvailable;


- (void)setPushMessages:(id)arg1;
- (id)pushMessages;
- (id)changeID;
- (bool)hasMoreAvailable;
- (void)setHasMoreAvailable:(bool)arg1;
- (void)setMoreAvailable:(bool)arg1;
- (bool)hasChangeID;
- (id)pushMessageAtIndex:(unsigned long long)arg1;
- (void)clearPushMessages;
- (unsigned long long)pushMessagesCount;
- (void)setChangeID:(id)arg1;
- (void)addPushMessage:(id)arg1;
- (bool)moreAvailable;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
