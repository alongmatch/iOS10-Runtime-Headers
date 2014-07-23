/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSString, CommerceRemoteUIDelegate, <PSCloudStorageOffersManagerDelegate>;

@interface PSCloudStorageOffersManager : NSObject <CommerceRemoteUIDelegateDelegate> {
    CommerceRemoteUIDelegate *_commerceDelegate;
    <PSCloudStorageOffersManagerDelegate> *_delegate;
    unsigned long long _requiredStorageThreshold;
}

@property <PSCloudStorageOffersManagerDelegate> * delegate;
@property unsigned long long requiredStorageThreshold;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setRequiredStorageThreshold:(unsigned long long)arg1;
- (void)beginFlowWithNavigationController:(id)arg1 modally:(bool)arg2;
- (void)commerceDelegateDidCancel:(id)arg1;
- (void)commerceDelegate:(id)arg1 loadDidFailWithError:(id)arg2;
- (void)commerceDelegate:(id)arg1 willPresentObjectModel:(id)arg2 page:(id)arg3;
- (unsigned long long)requiredStorageThreshold;
- (void)cancelLoad;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;

@end
