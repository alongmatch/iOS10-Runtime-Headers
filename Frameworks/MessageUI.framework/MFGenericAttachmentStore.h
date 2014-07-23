/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSArray, NSObject<OS_dispatch_queue>, NSMutableArray, MFConditionLock;

@interface MFGenericAttachmentStore : MFWebAttachmentSource  {
    struct __CFDictionary { } *_attachmentSizes;
    NSMutableArray *_attachmentsOrder;
    unsigned int _size;
    NSObject<OS_dispatch_queue> *_scalingQueue;
    MFConditionLock *_scalingThrottle;
    int _pendingImageScalingOperations;
    bool_outgoing;
    bool_didCancelImageScalingOperations;
    bool_isScalingEnabled;
    bool_isScalingThrottled;
}

@property bool scalingThrottled;
@property(readonly) NSArray * attachments;

+ (void)addAttachmentUniqueIdentifierStore:(id)arg1;
+ (bool)isPreventingInlinePDFs;
+ (void)endPreventingInlinePDFs;
+ (void)beginPreventingInlinePDFs;

- (unsigned long long)sizeForScale:(unsigned long long)arg1 imagesOnly:(bool)arg2;
- (bool)scalingThrottled;
- (void)removeAttachmentsForURLs:(id)arg1;
- (bool)hasPendingImageScalingOperations;
- (id)initOutgoing;
- (void)_decrementPendingImageScalingOperations;
- (bool)didCancelImageScalingOperations;
- (void)_inrementPendingImageScalingOperations;
- (bool)addAttachment:(id)arg1 allowingOverride:(id)arg2;
- (void)_notifyAttachmentCachedSizesChanged;
- (void)_enqueueScaleAttachment:(id)arg1 withFlags:(unsigned int)arg2 originalSize:(unsigned long long)arg3;
- (void)removeAttachmentForURL:(id)arg1;
- (void)setScalingThrottled:(bool)arg1;
- (void)cancelImageScalingOperations;
- (bool)setAttachment:(id)arg1 forURL:(id)arg2;
- (bool)addAttachment:(id)arg1;
- (id)attachments;
- (void)dealloc;
- (id)description;

@end
