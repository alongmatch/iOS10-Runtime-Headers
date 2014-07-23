/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, BRCOperationMultiplexer, BRCBatch;

@interface BRCMultiplexableOperation : BRCOperation <BRCOperationSubclass> {
    BRCOperationMultiplexer *_multiplexer;
    bool_autoRetry;
    bool_hasSentCompletion;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _progressBlock;

    BRCBatch *_batch;
    unsigned long long _size;
    double _progress;
}

@property(copy) id progressBlock;
@property unsigned long long size;
@property double progress;
@property bool autoRetry;
@property(retain) BRCBatch * batch;
@property bool hasSentCompletion;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setHasSentCompletion:(bool)arg1;
- (bool)hasSentCompletion;
- (void)setAutoRetry:(bool)arg1;
- (id)initWithName:(id)arg1 multiplexer:(id)arg2;
- (void)setBatch:(id)arg1;
- (bool)autoRetry;
- (bool)shouldRetryForError:(id)arg1;
- (id)batch;
- (id)progressBlock;
- (void)setProgressBlock:(id)arg1;
- (void)main;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)setSize:(unsigned long long)arg1;
- (void)cancel;
- (void).cxx_destruct;
- (id)description;
- (void)setProgress:(double)arg1;
- (double)progress;
- (unsigned long long)size;

@end
