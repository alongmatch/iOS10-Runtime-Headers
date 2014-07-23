/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSString, NSArray, AVCaptureDeviceFormatInternal_FigRecorder;

@interface AVCaptureDeviceFormat_FigRecorder : NSObject  {
    AVCaptureDeviceFormatInternal_FigRecorder *_internal;
}

@property(readonly) NSString * mediaType;
@property(readonly) struct opaqueCMFormatDescription { }* formatDescription;
@property(readonly) NSArray * videoSupportedFrameRateRanges;
@property(readonly) float videoFieldOfView;
@property(getter=isVideoBinned,readonly) bool videoBinned;
@property(getter=isVideoStabilizationSupported,readonly) bool videoStabilizationSupported;
@property(readonly) double videoMaxZoomFactor;
@property(readonly) double videoZoomFactorUpscaleThreshold;

+ (id)deviceFormatWithDictionary:(id)arg1;
+ (void)initialize;

- (struct { int x1; int x2; })sensorDimensions;
- (struct opaqueCMFormatDescription { }*)formatDescription;
- (int)visCompanionSupportedFormatsArrayIndex;
- (int)supportedFormatsArrayIndex;
- (bool)usesPreviewSizedThumbnail;
- (bool)needsPhotoPreviewDPCC;
- (bool)needsPhotoTNR;
- (bool)isHighResPhotoFormat;
- (id)videoZoomSupportedUpscaleStages;
- (id)videoZoomSupportedDownscaleStages;
- (int)rawBitDepth;
- (bool)isVideoStabilizationModeSupported:(long long)arg1;
- (bool)supportsDynamicCrop;
- (struct CGSize { double x1; double x2; })_maxVideoDimensions;
- (bool)supportsVideoZoom;
- (struct { int x1; int x2; })outputDimensions;
- (bool)supportsLowLightBoost;
- (id)_stringForFormatDescription:(struct opaqueCMFormatDescription { }*)arg1 frameRateRanges:(id)arg2;
- (bool)isExperimental;
- (double)videoZoomFactorUpscaleThreshold;
- (int)supportedStabilizationMethod;
- (bool)isVideoBinned;
- (float)videoFieldOfView;
- (id)formatDictionary;
- (bool)supportsHighProfileH264;
- (id)vtScalingMode;
- (bool)isSISSupported;
- (bool)isDefaultActiveFormat;
- (id)videoSupportedFrameRateRanges;
- (bool)isPhotoFormat;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })defaultActiveMaxFrameDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })defaultActiveMinFrameDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })highestSupportedVideoFrameDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })lowestSupportedVideoFrameDuration;
- (bool)isVideoStabilizationSupported;
- (double)videoMaxZoomFactor;
- (id)initWithDictionary:(id)arg1;
- (id)mediaType;
- (bool)isEqual:(id)arg1;
- (bool)isKindOfClass:(Class)arg1;
- (void)dealloc;
- (id)description;

@end
