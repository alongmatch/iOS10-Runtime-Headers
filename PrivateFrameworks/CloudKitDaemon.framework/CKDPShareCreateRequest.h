/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSString, CKDPShare;

@interface CKDPShareCreateRequest : PBRequest <NSCopying> {
    NSString *_invitationImageUrl;
    NSString *_invitationMessage;
    CKDPShare *_share;
}

@property(readonly) bool hasShare;
@property(retain) CKDPShare * share;
@property(readonly) bool hasInvitationMessage;
@property(retain) NSString * invitationMessage;
@property(readonly) bool hasInvitationImageUrl;
@property(retain) NSString * invitationImageUrl;

+ (id)options;

- (bool)hasShare;
- (void)setShare:(id)arg1;
- (id)invitationImageUrl;
- (bool)hasInvitationImageUrl;
- (bool)hasInvitationMessage;
- (void)setInvitationImageUrl:(id)arg1;
- (id)share;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)setInvitationMessage:(id)arg1;
- (id)invitationMessage;
- (bool)readFrom:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
