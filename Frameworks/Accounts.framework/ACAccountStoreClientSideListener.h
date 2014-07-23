/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/Accounts.framework/Accounts
 */

@class NSString;

@interface ACAccountStoreClientSideListener : NSObject <ACAccountStoreProtocol> {
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)sharedClientSideListener;

- (void)accountCredentialsDidChangeForAccountWithIdentifier:(id)arg1;

@end
