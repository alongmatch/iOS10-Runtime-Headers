/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class BKSApplicationStateMonitor;

@interface MKApplicationStateMonitor : NSObject  {
    BKSApplicationStateMonitor *_appStateMonitor;
    bool_inBackground;
    bool_active;
    unsigned long long _observerCount;
}

@property(getter=isInBackground,readonly) bool inBackground;
@property(getter=isActive,readonly) bool active;

+ (id)sharedInstance;

- (void)_becomeActive;
- (void)_exitBackground;
- (void)_enterBackground;
- (void)stopObserving;
- (void)startObserving;
- (void)_resignActive;
- (bool)isInBackground;
- (bool)isActive;
- (void)dealloc;
- (void).cxx_destruct;

@end
