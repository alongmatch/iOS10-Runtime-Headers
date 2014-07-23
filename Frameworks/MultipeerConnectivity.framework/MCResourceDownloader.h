/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class MCSession, NSURLSession, NSString, NSURLSessionDataTask, MCPeerID;

@interface MCResourceDownloader : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate> {
    NSURLSession *_urlSession;
    NSURLSessionDataTask *_urlTask;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _urlResponseHandler;

    MCSession *_session;
    NSString *_resourceName;
    MCPeerID *_peerID;
}

@property(retain) NSURLSession * urlSession;
@property(retain) NSURLSessionDataTask * urlTask;
@property id urlResponseHandler;
@property MCSession * session;
@property(copy) NSString * resourceName;
@property(retain) MCPeerID * peerID;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)urlSession;
- (void)setUrlResponseHandler:(id)arg1;
- (id)urlResponseHandler;
- (id)urlTask;
- (id)initWithSession:(id)arg1 resourceUrl:(id)arg2 name:(id)arg3 peerID:(id)arg4;
- (void)sendData:(id)arg1 fromByteOffset:(unsigned long long)arg2;
- (void)syncCloseStreamForSession:(id)arg1 withError:(id)arg2;
- (void)setUrlTask:(id)arg1;
- (void)setUrlSession:(id)arg1;
- (void)setResourceName:(id)arg1;
- (id)resourceName;
- (void)setPeerID:(id)arg1;
- (id)peerID;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)setSession:(id)arg1;
- (id)session;
- (void)dealloc;

@end
