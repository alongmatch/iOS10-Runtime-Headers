/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSArray, NSString, GEOMapServiceTraits, GEOMapRegion;

@interface _GEOPhoneNumbersTicket : NSObject <GEOMapServiceTicket> {
    NSArray *_phoneNumbers;
    GEOMapServiceTraits *_traits;
    bool_canceled;
    bool_allowCellularDataForLookup;
}

@property(getter=isCanceled,readonly) bool canceled;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) GEOMapServiceTraits * traits;
@property(readonly) GEOMapRegion * resultBoundingRegion;


- (id)resultBoundingRegion;
- (void)applyToCorrectedSearch:(id)arg1;
- (id)initWithPhoneNumbers:(id)arg1 allowCellularDataForLookup:(bool)arg2 traits:(id)arg3;
- (void)submitWithRefinedHandler:(id)arg1 networkActivity:(id)arg2;
- (void)submitWithHandler:(id)arg1 networkActivity:(id)arg2;
- (void)submitWithRefinedHandler:(id)arg1 timeout:(long long)arg2 networkActivity:(id)arg3;
- (void)submitWithHandler:(id)arg1 timeout:(long long)arg2 networkActivity:(id)arg3;
- (bool)isCanceled;
- (id)traits;
- (void)cancel;
- (void)dealloc;
- (id)description;

@end
