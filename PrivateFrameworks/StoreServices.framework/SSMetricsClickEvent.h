/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSString, NSNumber;

@interface SSMetricsClickEvent : SSMetricsBaseEvent  {
}

@property(retain) id actionDetails;
@property(retain) NSString * actionType;
@property(retain) id impressions;
@property(retain) NSString * locationDescription;
@property(retain) NSNumber * positionX;
@property(retain) NSNumber * positionY;
@property(retain) NSString * targetIdentifier;
@property(retain) NSString * targetType;
@property(retain) NSString * targetURL;


- (void)setPositionY:(id)arg1;
- (void)setPositionX:(id)arg1;
- (void)setImpressions:(id)arg1;
- (void)setLocationWithEventLocations:(id)arg1;
- (void)setTargetURL:(id)arg1;
- (void)setActionDetails:(id)arg1;
- (void)setTargetType:(id)arg1;
- (void)setLocationDescription:(id)arg1;
- (id)locationDescription;
- (id)actionDetails;
- (id)impressions;
- (id)positionY;
- (id)positionX;
- (id)targetIdentifier;
- (id)targetType;
- (void)setTargetIdentifier:(id)arg1;
- (void)setActionType:(id)arg1;
- (id)actionType;
- (id)targetURL;
- (id)init;
- (id)description;

@end
