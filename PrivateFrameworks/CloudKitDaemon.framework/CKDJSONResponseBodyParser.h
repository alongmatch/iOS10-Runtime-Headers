/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSError, NSObject<OS_dispatch_queue>, NSMutableData;

@interface CKDJSONResponseBodyParser : NSObject <CKDResponseBodyParser> {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _objectParsedBlock;

    NSError *_parserError;
    NSObject<OS_dispatch_queue> *_parseQueue;
    NSMutableData *_parserData;
}

@property(copy) id objectParsedBlock;
@property(retain) NSError * parserError;
@property(retain) NSObject<OS_dispatch_queue> * parseQueue;
@property(retain) NSMutableData * parserData;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setParseQueue:(id)arg1;
- (id)parseQueue;
- (void)setParserData:(id)arg1;
- (id)parserData;
- (void)setParserError:(id)arg1;
- (id)objectParsedBlock;
- (void)finishWithCompletion:(id)arg1;
- (void)processData:(id)arg1;
- (void)setObjectParsedBlock:(id)arg1;
- (id)init;
- (void).cxx_destruct;
- (id)parserError;

@end
