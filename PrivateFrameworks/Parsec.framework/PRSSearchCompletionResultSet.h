/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Parsec.framework/Parsec
 */

@class NSString, NSArray, <PRSSimpleResult>, PRSDecoder;

@interface PRSSearchCompletionResultSet : NSObject <PRSDecoderDelegate> {
    PRSDecoder *_decoder;
    <PRSSimpleResult> *_fakeMapsMoreResult;
    bool_cacheable;
    float _completionScore;
    NSString *_prefix;
    NSString *_completionString;
    NSString *_feedbackQueryIdentifier;
    NSArray *_results;
}

@property(readonly) NSString * prefix;
@property(readonly) NSString * completionString;
@property(readonly) float completionScore;
@property(readonly) NSString * feedbackQueryIdentifier;
@property(getter=isCacheable,readonly) bool cacheable;
@property(readonly) NSArray * results;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (Class)classForObjectsAtPropertyPath:(id)arg1 ofObject:(id)arg2 withValue:(id)arg3 protocol:(id*)arg4;
- (Class)classForObjectsAtPropertyPath:(id)arg1 ofObject:(id)arg2 protocol:(id*)arg3;
- (id)convertedValue:(id)arg1 forPropertyPath:(id)arg2 ofObject:(id)arg3;
- (id)serverKeysForKey:(id)arg1 ofObject:(id)arg2;
- (id)resultForFactory:(id)arg1 resourceProvider:(id)arg2 dictionary:(id)arg3;
- (id)initWithFactory:(id)arg1 resourceProvider:(id)arg2 prefix:(id)arg3 completionString:(id)arg4 score:(float)arg5 resultStatusString:(id)arg6 feedbackQueryIdentifier:(id)arg7 resultDictionaries:(id)arg8;
- (float)completionScore;
- (bool)isCacheable;
- (id)completionString;
- (id)feedbackQueryIdentifier;
- (id)prefix;
- (void).cxx_destruct;
- (id)description;
- (id)results;

@end
