/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
 */

@class NSString;

@interface BKSProcessAssertionCreateEvent : BKSProcessAssertionUpdateEvent <BSXPCCoding> {
    unsigned int _reason;
    NSString *_targetBundleIdentifier;
    int _targetPID;
}

@property unsigned int reason;
@property int targetPID;
@property(copy) NSString * targetBundleIdentifier;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (int)targetPID;
- (id)targetBundleIdentifier;
- (void)setReason:(unsigned int)arg1;
- (void)setTargetPID:(int)arg1;
- (void)setTargetBundleIdentifier:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned int)reason;
- (void)dealloc;
- (id)description;

@end
