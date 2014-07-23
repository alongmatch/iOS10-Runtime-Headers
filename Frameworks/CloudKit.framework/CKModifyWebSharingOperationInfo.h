/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class NSArray;

@interface CKModifyWebSharingOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    NSArray *_recordIDsToShare;
    NSArray *_recordIDsToUnshare;
    NSArray *_recordIDsToShareReadWrite;
}

@property(retain) NSArray * recordIDsToShare;
@property(retain) NSArray * recordIDsToUnshare;
@property(retain) NSArray * recordIDsToShareReadWrite;

+ (bool)supportsSecureCoding;

- (void)setRecordIDsToShareReadWrite:(id)arg1;
- (id)recordIDsToShareReadWrite;
- (void)setRecordIDsToUnshare:(id)arg1;
- (id)recordIDsToUnshare;
- (void)setRecordIDsToShare:(id)arg1;
- (id)recordIDsToShare;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;

@end
