/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString, WKConnection;

@interface WKWebProcessPlugInController : NSObject <WKObject> {
    struct ObjectStorage<WebKit::InjectedBundle> { 
        struct type { 
            unsigned char __lx[104]; 
        } data; 
    } _bundle;
    struct RetainPtr<id<WKWebProcessPlugIn> > { 
        void *m_ptr; 
    } _principalClassInstance;
}

@property(readonly) struct OpaqueWKBundle { }* _bundleRef;
@property(readonly) WKConnection * connection;
@property(readonly) id parameters;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) struct Object { int (**x1)(); id x2; }* _apiObject;


- (struct OpaqueWKBundle { }*)_bundleRef;
- (void)_setPrincipalClassInstance:(id)arg1;
- (struct Object { int (**x1)(); id x2; }*)_apiObject;
- (id)parameters;
- (id)connection;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
