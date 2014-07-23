/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@class WebDeviceOrientationProviderMockInternal, NSString;

@interface WebDeviceOrientationProviderMock : NSObject <WebDeviceOrientationProvider> {
    WebDeviceOrientationProviderMockInternal *m_internal;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)shared;

- (void)setController:(struct DeviceOrientationController { }*)arg1;
- (id)lastOrientation;
- (void)stopUpdating;
- (void)startUpdating;
- (void)setOrientation:(id)arg1;
- (id)init;
- (void)dealloc;

@end
