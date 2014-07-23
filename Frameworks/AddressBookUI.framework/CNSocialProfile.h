/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSString, NSMutableDictionary;

@interface CNSocialProfile : NSObject <NSCopying, NSMutableCopying> {
    NSMutableDictionary *_profileDictionary;
}

@property(copy,readonly) NSString * urlString;
@property(copy,readonly) NSString * username;
@property(copy,readonly) NSString * userIdentifier;
@property(copy,readonly) NSString * service;
@property(copy,readonly) NSString * displayname;
@property(retain) NSMutableDictionary * profileDictionary;

+ (id)socialProfile;
+ (id)socialProfileWithUrlString:(id)arg1 username:(id)arg2 service:(id)arg3;
+ (id)socialProfileWithUrlString:(id)arg1 username:(id)arg2 userIdentifier:(id)arg3 service:(id)arg4 displayname:(id)arg5;
+ (id)socialProfileWithDictionary:(id)arg1;
+ (id)socialProfileWithUsername:(id)arg1 service:(id)arg2;

- (id)urlString;
- (void)setProfileDictionary:(id)arg1;
- (id)profileDictionary;
- (id)displayname;
- (id)username;
- (id)initWithDictionary:(id)arg1;
- (id)service;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)userIdentifier;
- (void)dealloc;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
