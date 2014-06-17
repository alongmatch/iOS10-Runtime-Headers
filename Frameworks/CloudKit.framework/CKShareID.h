/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class NSString;

@interface CKShareID : NSObject <NSSecureCoding, NSCopying> {
    NSString *_shareName;
    NSString *_ownerName;
}

@property(retain) NSString * shareName;
@property(retain) NSString * ownerName;

+ (bool)supportsSecureCoding;

- (id)initWithShareName:(id)arg1 ownerName:(id)arg2;
- (void)setShareName:(id)arg1;
- (id)shareName;
- (id)CKPropertiesDescription;
- (void)setOwnerName:(id)arg1;
- (id)ckShortDescription;
- (id)ownerName;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end