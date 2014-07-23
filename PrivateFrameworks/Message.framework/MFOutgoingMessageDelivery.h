/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSString, NSArray, MFMessage, <MFDeliveryDelegate>, MFPlainTextDocument, MailAccount, DeliveryAccount, NSDictionary, MFMailDelivery, MFMutableMessageHeaders;

@interface MFOutgoingMessageDelivery : NSObject  {
    MFMessage *_message;
    MFMutableMessageHeaders *_headers;
    NSArray *_mixedContent;
    bool_textPartsAreHTML;
    NSString *_htmlBody;
    MFPlainTextDocument *_plainTextAlternative;
    NSArray *_otherHTMLAndAttachments;
    NSArray *_charsets;
    <MFDeliveryDelegate> *_delegate;
    MailAccount *_archiveAccount;
    DeliveryAccount *_deliveryAccount;
    NSDictionary *_compositionSpecification;
    MFMailDelivery *_currentDeliveryObject;
    unsigned long long _conversationFlags;
    long long _originalConversationId;
}

@property(retain) NSDictionary * compositionSpecification;
@property unsigned long long conversationFlags;
@property long long originalConversationId;

+ (id)newWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(bool)arg3;
+ (id)newWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 charsets:(id)arg5;
+ (id)newWithMessage:(id)arg1;

- (void)setOriginalConversationId:(long long)arg1;
- (long long)originalConversationId;
- (id)_deliveryAccountForInitializers;
- (id)_deliverSynchronouslyWithCurrentSettings:(bool)arg1;
- (id)_currentDeliveryObject;
- (void)setConversationFlags:(unsigned long long)arg1;
- (unsigned long long)conversationFlags;
- (void)setCompositionSpecification:(id)arg1;
- (int)deliveryStatus;
- (void)setArchiveAccount:(id)arg1;
- (id)initWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 charsets:(id)arg5;
- (id)initWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(bool)arg3;
- (id)initWithMessage:(id)arg1;
- (id)originalHeaders;
- (id)deliverSynchronously;
- (id)compositionSpecification;
- (id)message;
- (id)account;
- (void)setAccount:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;

@end
