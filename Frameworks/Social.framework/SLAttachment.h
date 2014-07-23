/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/Social.framework/Social
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSItemProvider, UIImage, NSURL;

@interface SLAttachment : NSObject <NSSecureCoding> {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _previewUpdateObserver;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _payloadUpdateObserver;

    NSString *_identifier;
    bool_startedPayloadLoad;
    bool_needsAnotherPreviewGeneration;
    long long _previewType;
    UIImage *_previewImage;
    long long _type;
    id _payload;
    NSURL *_payloadSourceFileURL;
    NSItemProvider *_itemProvider;
    NSString *_typeIdentifier;
    long long _itemProviderPreviewType;
    long long _downsampleStatus;
}

@property long long previewType;
@property(retain) UIImage * previewImage;
@property(readonly) NSString * identifier;
@property long long type;
@property(copy) id payload;
@property(copy) NSURL * payloadSourceFileURL;
@property(retain) NSItemProvider * itemProvider;
@property(copy) NSString * typeIdentifier;
@property(readonly) long long itemProviderPreviewType;
@property long long downsampleStatus;
@property bool startedPayloadLoad;
@property bool needsAnotherPreviewGeneration;

+ (bool)attachmentTypeRepresentsAnImage:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void)setNeedsAnotherPreviewGeneration:(bool)arg1;
- (bool)needsAnotherPreviewGeneration;
- (void)setStartedPayloadLoad:(bool)arg1;
- (bool)startedPayloadLoad;
- (long long)itemProviderPreviewType;
- (void)setPayloadSourceFileURL:(id)arg1;
- (void)setPayloadUpdateObserverWithBlock:(id)arg1;
- (void)setPreviewUpdateObserverWithBlock:(id)arg1;
- (id)payloadSourceFileURL;
- (long long)downsampleStatus;
- (long long)previewType;
- (void)setDownsampleStatus:(long long)arg1;
- (void)setPreviewType:(long long)arg1;
- (void)setPreviewImage:(id)arg1;
- (id)initWithPayload:(id)arg1 type:(long long)arg2 previewImage:(id)arg3;
- (id)previewImage;
- (id)itemProvider;
- (void)setItemProvider:(id)arg1;
- (id)identifier;
- (void)setTypeIdentifier:(id)arg1;
- (id)typeIdentifier;
- (id)init;
- (void)setType:(long long)arg1;
- (id)_uniqueIdentifier;
- (long long)type;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (void)setPayload:(id)arg1;
- (id)payload;

@end
