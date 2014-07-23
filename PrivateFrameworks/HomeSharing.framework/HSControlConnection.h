/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@class <HSControlConnectionDelegate>, NSString, NSOutputStream;

@interface HSControlConnection : NSObject <NSStreamDelegate> {
    unsigned int _key;
    NSOutputStream *_outputStream;
    double _timestamp;
    unsigned int _protocolVersion;
    <HSControlConnectionDelegate> *_delegate;
}

@property <HSControlConnectionDelegate> * delegate;
@property unsigned int protocolVersion;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)sendTouchesMoved:(const unsigned int*)arg1 count:(unsigned long long)arg2 velocity:(struct { float x1; float x2; })arg3;
- (void)sendTouchesEnded:(const unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)sendTouchesBegan:(const unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)sendShowItemDetailWithDictionary:(id)arg1;
- (void)sendEvent:(long long)arg1 value:(unsigned int)arg2;
- (id)initWithHost:(id)arg1 port:(unsigned int)arg2 key:(unsigned int)arg3;
- (id)_newDataForControlTouchEventMessage_v1_1:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; float x8; float x9; unsigned int *x10; })arg1;
- (id)_newDataForControlTouchEventMessage_v1:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int *x8; })arg1;
- (void)_sendTouchEvent:(long long)arg1 locations:(const unsigned int*)arg2 count:(unsigned long long)arg3 velocity:(struct { float x1; float x2; })arg4;
- (id)_newDataForControlExtendedMessage:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1 withData:(id)arg2;
- (id)_newDataForControlEventMessage:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1;
- (unsigned int)protocolVersion;
- (void)setProtocolVersion:(unsigned int)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)setDelegate:(id)arg1;
- (void)close;
- (void)open;
- (id)delegate;
- (void)dealloc;
- (void).cxx_destruct;

@end
