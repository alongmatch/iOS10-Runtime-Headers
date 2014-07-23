/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString, GEOPDPlaceRequest;

@interface GEOPlaceDataCacheFeedback : PBCodable <NSCopying> {
    NSString *_bundleIdentifier;
    GEOPDPlaceRequest *_request;
}

@property(readonly) bool hasRequest;
@property(retain) GEOPDPlaceRequest * request;
@property(readonly) bool hasBundleIdentifier;
@property(retain) NSString * bundleIdentifier;


- (bool)hasBundleIdentifier;
- (bool)hasRequest;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setRequest:(id)arg1;
- (id)bundleIdentifier;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)request;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
