/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class NSArray, NSMutableArray, NSString;

@interface MFBaseFilterDataConsumer : NSObject <MFDataConsumer> {
    NSMutableArray *_consumers;
    bool_serialAppend;
}

@property(getter=isSerialAppend) bool serialAppend;
@property(readonly) NSArray * consumers;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)filterWithConsumer:(id)arg1;
+ (id)filterWithConsumers:(id)arg1;

- (id)consumers;
- (void)setSerialAppend:(bool)arg1;
- (bool)isSerialAppend;
- (id)initWithConsumers:(id)arg1;
- (id)initWithConsumer:(id)arg1;
- (void)done;
- (long long)appendData:(id)arg1;
- (void)dealloc;

@end
