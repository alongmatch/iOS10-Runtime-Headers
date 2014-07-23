/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOGeocodeRequest : GEOPlaceSearchRequest  {
}


- (id)initWithCoordinate:(struct { double x1; double x2; })arg1 includeEntryPoints:(bool)arg2 traits:(id)arg3;
- (id)initWithAddress:(id)arg1 maxResults:(int)arg2 traits:(id)arg3;
- (id)initForwardGeocodeWithAddressString:(id)arg1;
- (id)initForwardGeocodeWithAddressDictionary:(id)arg1;
- (id)initReverseGeocodeWithCoordinate:(struct { double x1; double x2; })arg1 includeBusinessOptions:(bool)arg2;
- (id)initForwardGeocodeWithAddress:(id)arg1;
- (id)initReverseGeocodeWithCoordinate:(struct { double x1; double x2; })arg1;

@end
