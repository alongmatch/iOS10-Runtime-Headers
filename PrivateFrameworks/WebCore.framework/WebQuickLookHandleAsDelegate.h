/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface WebQuickLookHandleAsDelegate : NSObject <NSURLConnectionDelegate> {
    struct RefPtr<WebCore::SynchronousResourceHandleCFURLConnectionDelegate> { 
        struct SynchronousResourceHandleCFURLConnectionDelegate {} *m_ptr; 
    } m_connectionDelegate;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)clearHandle;
- (id)initWithConnectionDelegate:(struct SynchronousResourceHandleCFURLConnectionDelegate { int (**x1)(); struct atomic<int> { /* Warning: Unrecognized filer type: 'A' using 'void*' */ void*x_2_1_1; int x_2_1_2; } x2; struct ResourceHandle {} *x3; struct RetainPtr<const __CFString *> { void *x_4_1_1; } x4; }*)arg1;
     /* Encoded args for previous method: @24@0:8^{SynchronousResourceHandleCFURLConnectionDelegate=^^?{atomic<int>=Ai}^{ResourceHandle}{RetainPtr<const __CFString *>=^v}}16 */

- (void)connection:(id)arg1 didReceiveDataArray:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2 lengthReceived:(long long)arg3;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
