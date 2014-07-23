/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSString, NSData, MFMimePart, MFMailMessage;

@interface MFRFC822AttachmentDataProvider : NSObject <MFAttachmentDataProvider> {
    NSData *_messageData;
    MFMimePart *_parentPart;
    MFMailMessage *_message;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)messageForAttachment:(id)arg1;
- (id)initWithMessageData:(id)arg1 parentPart:(id)arg2;
- (bool)fetchDataForAttachment:(id)arg1 withDataConsumer:(id)arg2 error:(id*)arg3;
- (void)dealloc;

@end
