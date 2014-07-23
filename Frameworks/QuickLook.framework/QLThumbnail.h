/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class NSURL;

@interface QLThumbnail : NSObject  {
    NSURL *_url;
}

@property(retain) NSURL * url;

+ (id)defaultDescriptors;
+ (id)sharedQueue;

- (bool)provideImages:(id)arg1 error:(id*)arg2;
- (id)imageForUseMode:(unsigned long long)arg1 descriptor:(id)arg2 generateIfNeeded:(bool)arg3 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4 error:(id*)arg5;
- (id)thumbnailCreationOperationForUseMode:(unsigned long long)arg1 descriptor:(id)arg2;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)initWithURL:(id)arg1;

@end
