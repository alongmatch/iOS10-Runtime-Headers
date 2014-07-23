/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFMailMessageLibrary, NSString, MFBufferedDataConsumer, MFLibraryMessage;

@interface _MFDataCollector : NSObject <MFGuaranteedCollectingDataConsumer> {
    MFMailMessageLibrary *_library;
    MFLibraryMessage *_message;
    MFBufferedDataConsumer *_consumer;
    NSString *_part;
    bool_partial;
    bool_incomplete;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)pathForStorage;
- (id)initWithLibrary:(id)arg1 message:(id)arg2 part:(id)arg3 partial:(bool)arg4 incomplete:(bool)arg5;
- (void)done;
- (id)data;
- (long long)appendData:(id)arg1;
- (void)dealloc;

@end
