/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Parsec.framework/Parsec
 */

@class NSString;

@interface PRSEngagementFeedback : PRSFeedback  {
    NSString *_local_result;
    NSString *_fbr;
    NSString *_parsec_result;
}

@property(retain) NSString * local_result;
@property(retain) NSString * fbr;
@property(retain) NSString * parsec_result;

+ (bool)supportsSecureCoding;

- (void)setParsec_result:(id)arg1;
- (id)parsec_result;
- (void)setFbr:(id)arg1;
- (id)fbr;
- (void)setLocal_result:(id)arg1;
- (id)local_result;
- (id)initWithInput:(id)arg1 timestamp:(long long)arg2;
- (id)plist;
- (id)type;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (void)validate;

@end
