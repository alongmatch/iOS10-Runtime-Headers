/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString, <OISFUBufferedInputStream>;

@interface OISFUZipInflateInputStream : NSObject <SFUInputStream> {
    struct z_stream_s { 
        char *next_in; 
        unsigned int avail_in; 
        unsigned long long total_in; 
        char *next_out; 
        unsigned int avail_out; 
        unsigned long long total_out; 
        char *msg; 
        struct internal_state {} *state; 
        int (*zalloc)(); 
        int (*zfree)(); 
        void *opaque; 
        int data_type; 
        unsigned long long adler; 
        unsigned long long reserved; 
    } mStream;
    long long mOffset;
    <OISFUBufferedInputStream> *mInput;
    char *mOutBuffer;
    unsigned long long mOutBufferSize;
    boolmReachedEnd;
    boolmIsFromZip;
    unsigned long long mCalculatedCrc;
    unsigned long long mCheckCrc;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (long long)totalCompressedBytesConsumed;
- (void)setupInflateStream;
- (unsigned long long)readToOwnBuffer:(const char **)arg1 size:(unsigned long long)arg2;
- (id)initWithOffset:(long long)arg1 end:(long long)arg2 uncompressedSize:(unsigned long long)arg3 crc:(unsigned long long)arg4 dataRepresentation:(id)arg5;
- (id)initWithInput:(id)arg1;
- (id)closeLocalStream;
- (void)enableSystemCaching;
- (void)disableSystemCaching;
- (unsigned long long)readToBuffer:(char *)arg1 size:(unsigned long long)arg2;
- (void)seekToOffset:(long long)arg1;
- (bool)canSeek;
- (long long)offset;
- (void)close;
- (void)dealloc;

@end
