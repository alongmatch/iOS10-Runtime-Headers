/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFDAMessageStoreSetFlagsRequest : DAMailboxSetFlagsRequest <MFDAMailAccountRequest> {
}

@property(readonly) bool shouldSend;
@property(readonly) bool isUserRequested;


- (unsigned long long)generationNumber;
- (bool)shouldSend;
- (id)deferredOperation;
- (bool)isUserRequested;

@end
