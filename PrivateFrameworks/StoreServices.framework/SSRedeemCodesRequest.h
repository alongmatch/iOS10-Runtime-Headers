/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSAuthenticationContext, NSArray, NSString;

@interface SSRedeemCodesRequest : SSRequest <SSXPCCoding> {
    SSAuthenticationContext *_authenticationContext;
    NSArray *_redeemCodes;
    bool_headless;
    bool_cameraRecognized;
}

@property(readonly) NSArray * redeemCodes;
@property(copy) SSAuthenticationContext * authenticationContext;
@property bool headless;
@property bool cameraRecognized;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setHeadless:(bool)arg1;
- (id)initWithRedeemCodes:(id)arg1;
- (void)setCameraRecognized:(bool)arg1;
- (bool)cameraRecognized;
- (bool)headless;
- (id)redeemCodes;
- (void)startWithRedeemResponseBlock:(id)arg1;
- (void)setAuthenticationContext:(id)arg1;
- (id)authenticationContext;
- (void)startWithCompletionBlock:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)dealloc;

@end
