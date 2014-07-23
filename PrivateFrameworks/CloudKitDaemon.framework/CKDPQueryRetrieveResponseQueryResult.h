/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSString, CKDPRecordIdentifier, CKDPRecord;

@interface CKDPQueryRetrieveResponseQueryResult : PBCodable <NSCopying> {
    NSString *_etag;
    CKDPRecordIdentifier *_identifier;
    CKDPRecord *_record;
    int _type;
    struct { 
        unsigned int type : 1; 
    } _has;
}

@property(readonly) bool hasIdentifier;
@property(retain) CKDPRecordIdentifier * identifier;
@property(readonly) bool hasEtag;
@property(retain) NSString * etag;
@property bool hasType;
@property int type;
@property(readonly) bool hasRecord;
@property(retain) CKDPRecord * record;


- (bool)hasRecord;
- (bool)hasIdentifier;
- (void)setRecord:(id)arg1;
- (bool)hasEtag;
- (void)setEtag:(id)arg1;
- (id)etag;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)setHasType:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)hasType;
- (id)record;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setType:(int)arg1;
- (int)type;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
