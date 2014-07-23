/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSURL, GEOMapItemPhotosAttribution, GEOPlaceResult, NSDate, NSDictionary, GEOPDFlyover, GEOMapRegion, GEOMapItemPlaceAttribution, GEOFeatureStyleAttributes, NSString, GEOMapItemReviewsAttribution, GEOPlace, GEOPDPlace, NSData, NSArray, GEOMapItemClientAttributes, GEOAddress;

@interface GEOMapItemStorage : PBCodable <GEOMapItemPrivate, NSCopying> {
    GEOMapItemClientAttributes *_clientAttributes;
    GEOPlace *_place;
    GEOPDPlace *_placeData;
    GEOPlaceResult *_placeResult;
}

@property(readonly) GEOMapRegion * mapRegion;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) NSString * name;
@property(readonly) NSData * encodedData;
@property(readonly) NSData * data;
@property(getter=isDisputed,readonly) bool disputed;
@property(getter=isValid,readonly) bool valid;
@property(readonly) struct { double x1; double x2; } coordinate;
@property(readonly) struct { double x1; double x2; } centerCoordinate;
@property(readonly) GEOMapRegion * displayMapRegion;
@property(readonly) GEOMapRegion * geoFenceMapRegion;
@property(readonly) GEOAddress * geoAddress;
@property(readonly) NSDictionary * addressDictionary;
@property(readonly) NSArray * areasOfInterest;
@property(readonly) NSString * timezone;
@property(readonly) int contactAddressType;
@property(readonly) NSString * contactName;
@property(readonly) NSString * contactSpokenName;
@property(readonly) bool contactIsMe;
@property(readonly) NSString * eventName;
@property(readonly) NSDate * eventDate;
@property(readonly) bool isEventAllDay;
@property(getter=_place,readonly) GEOPlace * place;
@property(getter=_placeData,readonly) GEOPDPlace * placeData;
@property(getter=_clientAttributes,readonly) GEOMapItemClientAttributes * clientAttributes;
@property(getter=_placeAsData,readonly) NSData * placeAsData;
@property(getter=_placeDataAsData,readonly) NSData * placeDataAsData;
@property(getter=_hasResolvablePartialInformation,readonly) bool hasResolvablePartialInformation;
@property(getter=_placeType,readonly) int placeType;
@property(getter=_roadAccessPoints,readonly) NSArray * roadAccessPoints;
@property(getter=_hasSessionGUID,readonly) bool hasSessionGUID;
@property(getter=_sessionGUID,readonly) struct { unsigned long long x1; unsigned long long x2; } sessionGUID;
@property(getter=_sequenceNumber,readonly) unsigned int sequenceNumber;
@property(getter=_hasResultProviderID,readonly) bool hasResultProviderID;
@property(getter=_resultProviderID,readonly) int resultProviderID;
@property(getter=_hasFlyover,readonly) bool hasFlyover;
@property(getter=_flyover,readonly) GEOPDFlyover * flyover;
@property(getter=_hasMUID,readonly) bool hasMUID;
@property(getter=_muid,readonly) unsigned long long muid;
@property(getter=_hasAreaInMeters,readonly) bool hasAreaInMeters;
@property(getter=_areaInMeters,readonly) double areaInMeters;
@property(getter=_businessURL,readonly) NSString * businessURL;
@property(getter=_hasUserRatingScore,readonly) bool hasUserRatingScore;
@property(getter=_sampleSizeForUserRatingScore,readonly) unsigned int sampleSizeForUserRatingScore;
@property(getter=_normalizedUserRatingScore,readonly) float normalizedUserRatingScore;
@property(getter=_hasPriceRange,readonly) bool hasPriceRange;
@property(getter=_priceRange,readonly) unsigned int priceRange;
@property(getter=_categoryKeys,readonly) NSArray * categoryKeys;
@property(getter=_hasAnyAmenities,readonly) bool hasAnyAmenities;
@property(getter=_hasDeliveryAmenity,readonly) bool hasDeliveryAmenity;
@property(getter=_hasDelivery,readonly) bool hasDelivery;
@property(getter=_hasGoodForKidsAmenity,readonly) bool hasGoodForKidsAmenity;
@property(getter=_goodForKids,readonly) bool goodForKids;
@property(getter=_hasTakesReservationsAmenity,readonly) bool hasTakesReservationsAmenity;
@property(getter=_takesReservations,readonly) bool takesReservations;
@property(getter=_hasOperatingHours,readonly) bool hasOperatingHours;
@property(getter=_hasCurrentOperatingHours,readonly) bool hasCurrentOperatingHours;
@property(getter=_operatingHours,readonly) NSArray * operatingHours;
@property(getter=_hasTelephone,readonly) bool hasTelephone;
@property(getter=_telephone,readonly) NSString * telephone;
@property(getter=_openState,readonly) unsigned int openState;
@property(getter=_needsAttribution,readonly) bool needsAttribution;
@property(getter=_webURL,copy,readonly) NSURL * webURL;
@property(getter=_providerURL,copy,readonly) NSURL * providerURL;
@property(getter=_vendorID,copy,readonly) NSString * vendorID;
@property(getter=_attribution,readonly) GEOMapItemPlaceAttribution * attribution;
@property(getter=_photosAttribution,readonly) GEOMapItemPhotosAttribution * photosAttribution;
@property(getter=_reviewsAttribution,readonly) GEOMapItemReviewsAttribution * reviewsAttribution;
@property(getter=_poiSurveyURLString,readonly) NSString * poiSurveyURLString;
@property(getter=_styleAttributes,readonly) GEOFeatureStyleAttributes * styleAttributes;
@property(getter=_customIconID,readonly) unsigned long long customIconID;
@property(getter=_additionalPlaceInfos,readonly) NSArray * additionalPlaceInfos;
@property(readonly) bool hasPlaceData;
@property(retain) GEOPDPlace * placeData;
@property(readonly) bool hasPlace;
@property(retain) GEOPlace * place;
@property(readonly) bool hasClientAttributes;
@property(retain) GEOMapItemClientAttributes * clientAttributes;
@property(readonly) bool hasPlaceResult;
@property(retain) GEOPlaceResult * placeResult;

+ (id)mapItemStorageForSerializedPlaceData:(id)arg1;
+ (id)mapItemStorageForPlaceResult:(id)arg1;
+ (id)mapItemStorageForPlace:(id)arg1 clientAttributes:(id)arg2;
+ (id)mapItemStorageForSerializedMapItemStorage:(id)arg1;
+ (id)mapItemStorageToShareForGEOMapItem:(id)arg1;
+ (id)mapItemStorageForGEOMapItem:(id)arg1 clientAttributes:(id)arg2;
+ (id)mapItemStorageForPlace:(id)arg1;
+ (id)mapItemStorageForPlaceData:(id)arg1;
+ (id)mapItemStorageForGEOMapItemPrivate:(id)arg1;
+ (id)mapItemStorageForGEOMapItem:(id)arg1;

- (id)clientAttributes;
- (bool)hasClientAttributes;
- (bool)hasPlaceData;
- (void)setPlaceData:(id)arg1;
- (void)setPlaceResult:(id)arg1;
- (id)_geoMapItem;
- (id)initWithPlaceResult:(id)arg1;
- (id)placeData;
- (void)setClientAttributes:(id)arg1;
- (id)initWithPlace:(id)arg1 clientAttributes:(id)arg2;
- (id)initWithPlaceData:(id)arg1 clientAttributes:(id)arg2;
- (id)placeResult;
- (bool)hasPlaceResult;
- (bool)isEventAllDay;
- (id)eventDate;
- (id)eventName;
- (bool)contactIsMe;
- (id)contactSpokenName;
- (id)contactName;
- (int)contactAddressType;
- (id)areasOfInterest;
- (id)geoAddress;
- (id)geoFenceMapRegion;
- (struct { double x1; double x2; })centerCoordinate;
- (id)spokenNameForLocale:(id)arg1;
- (id)_additionalPlaceInfos;
- (unsigned long long)_customIconID;
- (id)_styleAttributes;
- (id)_poiSurveyURLString;
- (id)_reviewsAttribution;
- (id)_photosAttribution;
- (id)_attribution;
- (id)_vendorID;
- (id)_providerURL;
- (bool)_needsAttribution;
- (unsigned int)_openState;
- (bool)_hasTelephone;
- (id)_operatingHours;
- (bool)_hasCurrentOperatingHours;
- (id)_businessURL;
- (double)_areaInMeters;
- (bool)_hasAreaInMeters;
- (id)_flyover;
- (bool)_hasFlyover;
- (int)_resultProviderID;
- (bool)_hasResultProviderID;
- (bool)_hasSessionGUID;
- (int)_placeType;
- (bool)_hasResolvablePartialInformation;
- (id)_placeDataAsData;
- (id)_placeAsData;
- (id)_clientAttributes;
- (id)_placeData;
- (id)_mapItemByStrippingOptionalData;
- (id)_urlForWritingAReview;
- (id)_urlForReviewWithUID:(id)arg1;
- (id)_arrivalMapRegionForTransportType:(int)arg1;
- (unsigned int)_travelDistanceForTransportType:(int)arg1;
- (unsigned int)_travelTimeForTransportType:(int)arg1;
- (int)_recommendedTransportType;
- (id)_spokenAddressForLocale:(id)arg1;
- (id)_webURL;
- (id)_urlForPhotoWithUID:(id)arg1;
- (bool)_hasOperatingHours;
- (bool)_takesReservations;
- (bool)_hasTakesReservationsAmenity;
- (bool)_goodForKids;
- (bool)_hasGoodForKidsAmenity;
- (bool)_hasDelivery;
- (bool)_hasDeliveryAmenity;
- (bool)_hasAnyAmenities;
- (bool)_hasLocalizedCategoryNamesForType:(unsigned int)arg1;
- (id)_localizedCategoryNamesForType:(unsigned int)arg1;
- (id)_categoryKeys;
- (unsigned int)_priceRange;
- (bool)_hasPriceRange;
- (float)_normalizedUserRatingScore;
- (unsigned int)_sampleSizeForUserRatingScore;
- (bool)_hasUserRatingScore;
- (unsigned long long)_muid;
- (bool)_hasMUID;
- (id)encodedData;
- (struct { unsigned long long x1; unsigned long long x2; })_sessionGUID;
- (bool)hasPlace;
- (id)_place;
- (id)place;
- (void)setPlace:(id)arg1;
- (bool)isDisputed;
- (unsigned int)_sequenceNumber;
- (id)_telephone;
- (id)displayMapRegion;
- (id)timezone;
- (id)addressDictionary;
- (id)mapRegion;
- (id)_roadAccessPoints;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (struct { double x1; double x2; })coordinate;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)name;
- (bool)isValid;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
