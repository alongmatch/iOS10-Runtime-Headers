/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@class NSString, NSNumber;

@interface SFRemoteHotspotInfo : NSObject <NSSecureCoding> {
    NSString *_name;
    NSString *_password;
    NSNumber *_channel;
}

@property(copy) NSString * name;
@property(copy) NSString * password;
@property(retain) NSNumber * channel;

+ (bool)supportsSecureCoding;

- (id)initWithName:(id)arg1 password:(id)arg2 channel:(id)arg3;
- (id)channel;
- (void)setChannel:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setName:(id)arg1;
- (id)password;
- (id)name;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;

@end
