/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSSet, NSString, NSMutableSet, GEOMapRegion, VKPolylineOverlay;

@interface VKPolylineGroupOverlay : NSObject <VKOverlay> {
    NSMutableSet *_polylines;
    GEOMapRegion *_boundingMapRegion;
    struct __CFSet { } *_observers;
    VKPolylineOverlay *_selectedPolyline;
}

@property(readonly) NSSet * polylines;
@property(retain) VKPolylineOverlay * selectedPolyline;
@property(readonly) GEOMapRegion * boundingMapRegion;
@property(readonly) struct { double x1; double x2; } coordinate;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)selectedPolyline;
- (void)setSelectedPolyline:(id)arg1;
- (void)removePolyline:(id)arg1;
- (void)addPolyline:(id)arg1;
- (void)_updateBoundingMapRegion;
- (id)boundingMapRegion;
- (id)polylines;
- (struct { double x1; double x2; })coordinate;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)dealloc;

@end
