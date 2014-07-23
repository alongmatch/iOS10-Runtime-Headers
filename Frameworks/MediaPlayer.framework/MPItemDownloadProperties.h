/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class SSDownload, NSString, NSArray, NSURL, NSMutableSet;

@interface MPItemDownloadProperties : NSObject <MPStoreDownloadManagerObserver, NSCopying> {
    long long _assetFileSize;
    NSURL *_destinationURL;
    SSDownload *_download;
    bool_downloadExists;
    NSString *_downloadIdentifier;
    long long _downloadSizeLimit;
    unsigned long long _downloadToken;
    NSMutableSet *_downloadTokenCompletionHandlers;
    NSArray *_sinfs;
    NSURL *_sourceURL;
}

@property(readonly) long long assetFileSize;
@property(readonly) NSURL * destinationURL;
@property(readonly) bool downloadExists;
@property(readonly) NSString * downloadIdentifier;
@property unsigned long long downloadToken;
@property(readonly) long long downloadSizeLimit;
@property(readonly) NSURL * sourceURL;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setDownloadToken:(unsigned long long)arg1;
- (long long)downloadSizeLimit;
- (id)downloadIdentifier;
- (bool)downloadExists;
- (id)newAVAssetOptionsWithDownloadStyle:(long long)arg1;
- (void)acquireDownloadTokenWithCompletionHandler:(id)arg1;
- (void)downloadManager:(id)arg1 downloadDidProgress:(id)arg2;
- (void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3;
- (void)_attemptToFindDownloadTokenForPossibleDownloads:(id)arg1;
- (id)initWithDownloadIdentifier:(long long)arg1;
- (id)initWithDownload:(id)arg1;
- (void)_reloadNetworkConstraints;
- (long long)assetFileSize;
- (unsigned long long)downloadToken;
- (id)initWithContext:(id)arg1;
- (id)sourceURL;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)destinationURL;
- (void)dealloc;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
