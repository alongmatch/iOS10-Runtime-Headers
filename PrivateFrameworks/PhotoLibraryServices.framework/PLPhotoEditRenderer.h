/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class CIContext, CIFilter, CIImage, NSDictionary, NSObject<OS_dispatch_queue>, PLPhotoEditModel, EAGLContext;

@interface PLPhotoEditRenderer : NSObject  {
    NSObject<OS_dispatch_queue> *__renderingQueue;
    CIContext *_generatingCIContext;
    CIContext *_drawingCIContext;
    EAGLContext *_lastUsedEAGLContext;
    CIFilter *_effectFilter;
    CIFilter *_smartToneFilter;
    CIFilter *_smartColorFilter;
    CIFilter *_smartBWFilter;
    CIFilter *_redEyeFilter;
    CIImage *_cachedEditedImage;
    PLPhotoEditModel *_photoEditModelInCachedEditedImage;
    NSDictionary *__smartToneAdjustments;
    double _smartToneLevelInCachedAdjustments;
    NSDictionary *_smartToneStatisticsInCachedAdjustments;
    NSDictionary *__smartColorAdjustments;
    double _smartColorLevelInCachedAdjustments;
    NSDictionary *_smartColorStatisticsInCachedAdjustments;
    NSDictionary *__smartBWAdjustments;
    double _smartBWLevelInCachedAdjustments;
    NSDictionary *_smartBWStatisticsInCachedAdjustments;
    CIImage *_originalImage;
    PLPhotoEditModel *_photoEditModel;
    unsigned long long _renderMode;
    long long _smartFiltersCubeSize;
}

@property(retain) CIImage * originalImage;
@property(retain) PLPhotoEditModel * photoEditModel;
@property unsigned long long renderMode;
@property long long smartFiltersCubeSize;
@property(retain,readonly) CIImage * outputImage;
@property(readonly) struct CGSize { double x1; double x2; } outputImageSize;
@property(readonly) double smartToneBaseBrightness;
@property(readonly) double smartToneBaseContrast;
@property(readonly) double smartToneBaseExposure;
@property(readonly) double smartToneBaseHighlights;
@property(readonly) double smartToneBaseShadows;
@property(readonly) double smartToneBaseBlackPoint;
@property(readonly) double smartColorBaseContrast;
@property(readonly) double smartColorBaseVibrancy;
@property(readonly) double smartColorBaseCast;
@property(readonly) double smartBWBaseStrength;
@property(readonly) double smartBWBaseNeutralGamma;
@property(readonly) double smartBWBaseTone;
@property(readonly) double smartBWBaseHue;
@property(readonly) double smartBWBaseGrain;


- (long long)smartFiltersCubeSize;
- (id)photoEditModel;
- (double)smartBWBaseGrain;
- (double)smartBWBaseHue;
- (double)smartBWBaseTone;
- (double)smartBWBaseNeutralGamma;
- (double)smartBWBaseStrength;
- (double)smartColorBaseCast;
- (double)smartColorBaseVibrancy;
- (double)smartColorBaseContrast;
- (double)smartToneBaseBlackPoint;
- (double)smartToneBaseShadows;
- (double)smartToneBaseHighlights;
- (double)smartToneBaseExposure;
- (double)smartToneBaseContrast;
- (double)smartToneBaseBrightness;
- (struct CGSize { double x1; double x2; })outputImageSize;
- (void)setSmartFiltersCubeSize:(long long)arg1;
- (void)drawEditedImageInContext:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 viewportWidth:(int)arg3 viewportHeight:(int)arg4;
- (double)_smartBWBaseValueForKey:(id)arg1 defaultValue:(double)arg2;
- (id)_editedImage;
- (id)_smartBWAdjustments;
- (id)_smartColorAdjustments;
- (id)_smartToneAdjustments;
- (void)_invalidateCachedFilters;
- (void)createEditedImageWithCompletion:(id)arg1;
- (void)setPhotoEditModel:(id)arg1;
- (id)_renderingQueue;
- (void)setRenderMode:(unsigned long long)arg1;
- (unsigned long long)renderMode;
- (id)outputImage;
- (id)init;
- (void)dealloc;
- (id)originalImage;
- (void)setOriginalImage:(id)arg1;

@end
