/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableCategoryDomainDictionary : PBCodable <HDSyncCodable, NSCopying> {
    long long  _category;
    NSString * _domain;
    struct { 
        unsigned int category : 1; 
    }  _has;
    NSMutableArray * _keyValuePairs;
}

@property (nonatomic) long long category;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *domain;
@property (nonatomic) BOOL hasCategory;
@property (nonatomic, readonly) BOOL hasDomain;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSMutableArray *keyValuePairs;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_validateForInsertionWithError:(id*)arg1;
- (void)addKeyValuePairs:(id)arg1;
- (long long)category;
- (void)clearKeyValuePairs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)decodedCategory;
- (id)description;
- (id)dictionaryRepresentation;
- (id)domain;
- (BOOL)hasCategory;
- (BOOL)hasDomain;
- (unsigned int)hash;
- (id)initWithCategory:(int)arg1 domain:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)keyValuePairs;
- (id)keyValuePairsAtIndex:(unsigned int)arg1;
- (unsigned int)keyValuePairsCount;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setCategory:(long long)arg1;
- (void)setDomain:(id)arg1;
- (void)setHasCategory:(BOOL)arg1;
- (void)setKeyValuePairs:(id)arg1;
- (void)writeTo:(id)arg1;

@end