/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSDictionary, NSString, NSURL;

@interface CKDRequestHeader : NSObject <NSSecureCoding> {
    NSDictionary *_headerDict;
    NSString *_method;
    NSURL *_url;
    NSString *_sessionConfigurationIdentifier;
    unsigned long long _urlSessionTaskIdentifier;
}

@property(retain) NSDictionary * headerDict;
@property(retain) NSString * method;
@property(retain) NSURL * url;
@property(retain) NSString * sessionConfigurationIdentifier;
@property unsigned long long urlSessionTaskIdentifier;

+ (bool)supportsSecureCoding;

- (unsigned long long)urlSessionTaskIdentifier;
- (id)sessionConfigurationIdentifier;
- (id)headerDict;
- (void)setUrlSessionTaskIdentifier:(unsigned long long)arg1;
- (void)setSessionConfigurationIdentifier:(id)arg1;
- (void)setHeaderDict:(id)arg1;
- (id)url;
- (void)setMethod:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)method;

@end
