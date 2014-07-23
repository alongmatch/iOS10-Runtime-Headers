/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@class MSPDirectionsSearch, NSString, MSPQuerySearch, PBUnknownFields;

@interface MSPSearchRequestStorage : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    double _position;
    double _timestamp;
    MSPDirectionsSearch *_directionsSearch;
    NSString *_identifier;
    MSPQuerySearch *_querySearch;
    int _searchType;
    struct { 
        unsigned int position : 1; 
        unsigned int timestamp : 1; 
        unsigned int searchType : 1; 
    } _has;
}

@property bool hasSearchType;
@property int searchType;
@property(readonly) bool hasIdentifier;
@property(retain) NSString * identifier;
@property bool hasTimestamp;
@property double timestamp;
@property bool hasPosition;
@property double position;
@property(readonly) bool hasQuerySearch;
@property(retain) MSPQuerySearch * querySearch;
@property(readonly) bool hasDirectionsSearch;
@property(retain) MSPDirectionsSearch * directionsSearch;
@property(readonly) PBUnknownFields * unknownFields;


- (id)directionsSearch;
- (id)querySearch;
- (int)searchType;
- (bool)hasDirectionsSearch;
- (bool)hasQuerySearch;
- (bool)hasSearchType;
- (void)setHasSearchType:(bool)arg1;
- (void)setSearchType:(int)arg1;
- (void)setDirectionsSearch:(id)arg1;
- (void)setQuerySearch:(id)arg1;
- (void)setHasPosition:(bool)arg1;
- (id)unknownFields;
- (bool)hasIdentifier;
- (void)setHasTimestamp:(bool)arg1;
- (bool)hasPosition;
- (bool)hasTimestamp;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (void)setPosition:(double)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)position;
- (id)dictionaryRepresentation;

@end
