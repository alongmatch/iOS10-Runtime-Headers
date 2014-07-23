/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSString, CKDPDateStatistics, CKDPShareIdentifier, NSMutableArray, CKDPProtectionInfo, CKDPIdentifier, CKDPRecordType, CKDPRecordIdentifier;

@interface CKDPRecord : PBCodable <NSCopying> {
    NSMutableArray *_conflictLoserEtags;
    CKDPIdentifier *_createdBy;
    NSString *_etag;
    NSMutableArray *_fields;
    CKDPIdentifier *_modifiedBy;
    NSString *_modifiedByDevice;
    NSMutableArray *_pluginFields;
    CKDPProtectionInfo *_protectionInfo;
    NSString *_protectionInfoTag;
    CKDPRecordIdentifier *_recordIdentifier;
    CKDPShareIdentifier *_shareId;
    CKDPDateStatistics *_timeStatistics;
    CKDPRecordType *_type;
}

@property(readonly) bool hasEtag;
@property(retain) NSString * etag;
@property(readonly) bool hasRecordIdentifier;
@property(retain) CKDPRecordIdentifier * recordIdentifier;
@property(readonly) bool hasType;
@property(retain) CKDPRecordType * type;
@property(readonly) bool hasCreatedBy;
@property(retain) CKDPIdentifier * createdBy;
@property(readonly) bool hasTimeStatistics;
@property(retain) CKDPDateStatistics * timeStatistics;
@property(retain) NSMutableArray * fields;
@property(readonly) bool hasShareId;
@property(retain) CKDPShareIdentifier * shareId;
@property(readonly) bool hasModifiedBy;
@property(retain) CKDPIdentifier * modifiedBy;
@property(retain) NSMutableArray * conflictLoserEtags;
@property(readonly) bool hasModifiedByDevice;
@property(retain) NSString * modifiedByDevice;
@property(retain) NSMutableArray * pluginFields;
@property(readonly) bool hasProtectionInfo;
@property(retain) CKDPProtectionInfo * protectionInfo;
@property(readonly) bool hasProtectionInfoTag;
@property(retain) NSString * protectionInfoTag;

+ (id)recordFromData:(id)arg1;

- (id)modifiedBy;
- (void)setFields:(id)arg1;
- (id)createdBy;
- (bool)hasModifiedByDevice;
- (bool)hasModifiedBy;
- (bool)hasCreatedBy;
- (id)pluginFieldsAtIndex:(unsigned long long)arg1;
- (void)clearPluginFields;
- (unsigned long long)pluginFieldsCount;
- (id)conflictLoserEtagsAtIndex:(unsigned long long)arg1;
- (void)clearConflictLoserEtags;
- (unsigned long long)conflictLoserEtagsCount;
- (void)setModifiedBy:(id)arg1;
- (id)fieldsAtIndex:(unsigned long long)arg1;
- (unsigned long long)fieldsCount;
- (void)addPluginFields:(id)arg1;
- (void)addConflictLoserEtags:(id)arg1;
- (id)timeStatistics;
- (bool)hasTimeStatistics;
- (void)setTimeStatistics:(id)arg1;
- (id)fieldForKey:(id)arg1;
- (id)fieldData;
- (void)_inflateFieldsFromData:(id)arg1;
- (void)clearFields;
- (void)addFields:(id)arg1;
- (id)recordIdentifier;
- (bool)hasRecordIdentifier;
- (void)setRecordIdentifier:(id)arg1;
- (id)protectionInfoTag;
- (id)protectionInfo;
- (bool)hasProtectionInfoTag;
- (bool)hasProtectionInfo;
- (void)setProtectionInfoTag:(id)arg1;
- (void)setProtectionInfo:(id)arg1;
- (id)shareId;
- (bool)hasShareId;
- (void)setShareId:(id)arg1;
- (void)setCreatedBy:(id)arg1;
- (bool)hasEtag;
- (void)setEtag:(id)arg1;
- (id)etag;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)setPluginFields:(id)arg1;
- (id)pluginFields;
- (void)setModifiedByDevice:(id)arg1;
- (id)modifiedByDevice;
- (void)setConflictLoserEtags:(id)arg1;
- (id)conflictLoserEtags;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)hasType;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setType:(id)arg1;
- (id)type;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataRepresentation;
- (id)dictionaryRepresentation;
- (id)fields;

@end
