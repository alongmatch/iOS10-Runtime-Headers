/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class CPLNetworkWatcher, CPLEngineLibrary, NSURL, NSObject<OS_dispatch_queue>, NSString;

@interface CPLEngineSystemMonitor : NSObject <CPLNetworkWatcherDelegate, CPLEngineComponent> {
    NSURL *_volumeURL;
    NSObject<OS_dispatch_queue> *_queue;
    CPLNetworkWatcher *_watcher;
    CPLEngineLibrary *_engineLibrary;
}

@property(readonly) CPLEngineLibrary * engineLibrary;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (bool)isNetworkConnected;
- (unsigned long long)diskPressureState;
- (void)networkStateDidChangeForNetworkWatched:(id)arg1;
- (id)initWithEngineLibrary:(id)arg1;
- (void)getStatusWithCompletionHandler:(id)arg1;
- (void)closeAndDeactivate:(bool)arg1 completionHandler:(id)arg2;
- (id)engineLibrary;
- (void).cxx_destruct;
- (void)openWithCompletionHandler:(id)arg1;
- (id)componentName;

@end
