/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPIdentifier, NSData;

@interface CKDPInvitationAcceptRequest : PBRequest <NSCopying> {
    CKDPIdentifier *_invitationId;
    NSData *_parameters;
}

@property(readonly) bool hasInvitationId;
@property(retain) CKDPIdentifier * invitationId;
@property(readonly) bool hasParameters;
@property(retain) NSData * parameters;

+ (id)options;

- (bool)hasParameters;
- (id)invitationId;
- (bool)hasInvitationId;
- (void)setInvitationId:(id)arg1;
- (void)setParameters:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)parameters;
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
