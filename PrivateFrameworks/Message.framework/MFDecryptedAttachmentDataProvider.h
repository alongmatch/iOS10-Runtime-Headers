/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFMailMessage, NSString;

@interface MFDecryptedAttachmentDataProvider : NSObject <MFAttachmentDataProvider> {
    MFMailMessage *_message;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)messageForAttachment:(id)arg1;
- (id)initWithDecryptedMessage:(id)arg1;
- (bool)fetchDataForAttachment:(id)arg1 withDataConsumer:(id)arg2 error:(id*)arg3;
- (void)dealloc;

@end
