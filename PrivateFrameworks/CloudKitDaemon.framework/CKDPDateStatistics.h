/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPDate;

@interface CKDPDateStatistics : PBCodable <NSCopying> {
    CKDPDate *_creation;
    CKDPDate *_modification;
}

@property(readonly) bool hasCreation;
@property(retain) CKDPDate * creation;
@property(readonly) bool hasModification;
@property(retain) CKDPDate * modification;


- (id)modification;
- (id)creation;
- (bool)hasModification;
- (bool)hasCreation;
- (void)setModification:(id)arg1;
- (void)setCreation:(id)arg1;
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
