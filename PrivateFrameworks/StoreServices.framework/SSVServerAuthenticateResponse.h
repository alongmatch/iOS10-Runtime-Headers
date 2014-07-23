/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSNumber, NSURL, NSString;

@interface SSVServerAuthenticateResponse : NSObject <SSXPCCoding> {
    NSNumber *_authenticatedAccountIdentifier;
    long long _performedButtonIndex;
    NSURL *_redirectURL;
    long long _selectedButtonIndex;
}

@property(copy) NSNumber * authenticatedAccountIdentifier;
@property long long performedButtonIndex;
@property(copy) NSURL * redirectURL;
@property long long selectedButtonIndex;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setSelectedButtonIndex:(long long)arg1;
- (void)setPerformedButtonIndex:(long long)arg1;
- (void)setAuthenticatedAccountIdentifier:(id)arg1;
- (long long)selectedButtonIndex;
- (long long)performedButtonIndex;
- (id)authenticatedAccountIdentifier;
- (void)setRedirectURL:(id)arg1;
- (id)redirectURL;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void).cxx_destruct;

@end
