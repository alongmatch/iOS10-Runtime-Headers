/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@class GEOMapItemStorage, PBUnknownFields;

@interface MSPPlaceBookmark : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOMapItemStorage *_mapItemStorage;
}

@property(readonly) bool hasMapItemStorage;
@property(retain) GEOMapItemStorage * mapItemStorage;
@property(readonly) PBUnknownFields * unknownFields;


- (id)unknownFields;
- (bool)hasMapItemStorage;
- (void)setMapItemStorage:(id)arg1;
- (id)mapItemStorage;
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
