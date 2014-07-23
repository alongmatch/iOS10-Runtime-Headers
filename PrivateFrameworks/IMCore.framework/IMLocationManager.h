/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSDate, NSString, NSTimer, CLLocationManager, NSError, NSMutableArray, CLLocation;

@interface IMLocationManager : IMChat <CLLocationManagerDelegate, IMLocationManager> {
    CLLocationManager *_locationManager;
    NSMutableArray *_handlers;
    NSTimer *_timeoutHandler;
    CLLocation *_location;
    NSError *_error;
    NSDate *_locateStartTime;
    NSTimer *_locationUpdateTimer;
}

@property(retain) CLLocation * location;
@property(retain) NSError * error;
@property(retain) NSTimer * locationUpdateTimer;
@property(retain) CLLocationManager * locationManager;
@property(retain) NSMutableArray * handlers;
@property(retain) NSDate * locateStartTime;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) bool locationAuthorizationDenied;

+ (Class)__CLLocationManagerClass;
+ (id)sharedInstance;

- (void)_locationUpdateTimerFired:(id)arg1;
- (void)setLocationUpdateTimer:(id)arg1;
- (id)locationUpdateTimer;
- (void)setLocateStartTime:(id)arg1;
- (void)_locationManagerTimedOut;
- (id)locateStartTime;
- (id)locationManager;
- (void)_fireCompletionHandlers;
- (void)setHandlers:(id)arg1;
- (void)setLocationManager:(id)arg1;
- (bool)locationAuthorizationDenied;
- (void)startUpdatingCurrentLocationWithHandler:(id)arg1;
- (id)handlers;
- (id)location;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)setLocation:(id)arg1;
- (id)init;
- (void)setError:(id)arg1;
- (id)error;
- (void)dealloc;

@end
