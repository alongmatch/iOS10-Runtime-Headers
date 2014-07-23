/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVWeakReference, NSString, NSArray, NSDictionary, AVCaptureDeviceFormat_FigRecorder, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface AVCaptureFigVideoDevice_FigRecorder : AVCaptureDevice_FigRecorder <MCProfileConnectionObserver> {
    NSDictionary *_deviceProperties;
    NSDictionary *_sensorProperties;
    AVCaptureDeviceFormat_FigRecorder *_activeFormat;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _activeMinFrameDuration;
    bool_activeMinFrameDurationSetByClient;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _activeMaxFrameDuration;
    bool_activeMaxFrameDurationSetByClient;
    long long _focusMode;
    struct CGPoint { 
        double x; 
        double y; 
    } _focusPointOfInterest;
    float _focusPosition;
    bool_manualFocusSupportEnabled;
    int _focusInFlightCount;
    bool_adjustingFocus;
    long long _autoFocusRangeRestriction;
    bool_smoothAutoFocusEnabled;
    long long _exposureMode;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _exposureDuration;
    float _exposureGain;
    bool_manualExposureSupportEnabled;
    float _autoExposureBias;
    struct CGPoint { 
        double x; 
        double y; 
    } _exposurePointOfInterest;
    bool_adjustingExposure;
    long long _wbMode;
    float _whiteBalanceTemperature;
    bool_adjustingWB;
    bool_automaticallyAdjustsImageControlMode;
    long long _imageControlMode;
    long long _pendingImageControlMode;
    long long _flashMode;
    bool_flashActive;
    bool_flashAvailable;
    long long _torchMode;
    bool_torchActive;
    float _torchLevel;
    bool_torchAvailable;
    NSObject<OS_dispatch_queue> *_torchAppsSerialQueue;
    NSObject<OS_dispatch_source> *_torchAppsKillTimer;
    struct OpaqueCMBaseObject { } *_recorderForTorchApps;
    bool_isConnected;
    bool_subjectMonitoringEnabled;
    bool_faceDetectionDrivenImageProcessingEnabled;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _faceRectangle;
    int _faceRectangleAngle;
    bool_faceDetectionMetadataEnabled;
    bool_automaticallyEnablesLowLightBoostWhenAvailable;
    bool_lowLightBoostEnabled;
    bool_highDynamicRangeSceneDetectionEnabled;
    bool_sceneIsHighDynamicRange;
    float _saturation;
    float _contrast;
    long long _videoZoomDownscaleStageHint;
    long long _videoZoomUpscaleStageHint;
    float _videoZoomFactor;
    float _videoZoomRampTarget;
    int _videoZoomRampCounter;
    float _videoZoomRampAcceleration;
    bool_videoZoomDrawOverlay;
    NSArray *_formats;
    struct OpaqueCMClock { } *_deviceClock;
    AVWeakReference *_weakReference;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (bool)_cameraAccessIsEnabled;
+ (id)_devices;
+ (void)initialize;

- (void)setAutomaticallyEnablesLowLightBoostWhenAvailable:(bool)arg1;
- (void)setImageControlMode:(long long)arg1;
- (void)setVideoZoomRampAcceleration:(float)arg1;
- (bool)automaticallyEnablesLowLightBoostWhenAvailable;
- (long long)imageControlMode;
- (float)videoZoomRampAcceleration;
- (bool)_setBoolValue:(bool)arg1 forRecorderProperty:(struct __CFString { }*)arg2;
- (bool)_setFloatValue:(float)arg1 forRecorderProperty:(struct __CFString { }*)arg2;
- (float)_floatValueForRecorderProperty:(struct __CFString { }*)arg1;
- (struct OpaqueCMBaseObject { }*)_createFigRecorderForTorchApps;
- (id)_createTorchAppsKillTimer;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)_setAutomaticallyEnablesLowLightBoostWhenAvailable:(bool)arg1;
- (bool)_setContrast:(float)arg1;
- (bool)_setSaturation:(float)arg1;
- (bool)_setNumber:(id)arg1 forRecorderProperty:(struct __CFString { }*)arg2;
- (id)_numberForRecorderProperty:(struct __CFString { }*)arg1;
- (void)_teardownTorchAppsKillTimer;
- (void)_applyPendingPropertiesToRecorder;
- (void)finishPendingAdjustmentsKVO;
- (void)_updateFlashAndTorchAvailability;
- (void)_updateImageControlMode;
- (bool)_setHighDynamicRangeSceneDetectionEnabled:(bool)arg1;
- (bool)_faceDetectionDebugMetadataReportingEnabled;
- (bool)_setFaceDetectionDebugMetadataReportingEnabled:(bool)arg1;
- (bool)_setFaceDetectionDrivenImageProcessingEnabled:(bool)arg1;
- (bool)_subjectAreaChangeMonitoringEnabled;
- (bool)_setSubjectAreaChangeMonitoringEnabled:(bool)arg1;
- (bool)_setFlashMode:(long long)arg1;
- (long long)_whiteBalanceMode;
- (bool)_setWhiteBalanceMode:(long long)arg1;
- (bool)_setWhiteBalanceTemperature:(float)arg1;
- (bool)_setExposureWithMode:(long long)arg1 pointOfInterest:(id)arg2;
- (bool)_setAutoExposureBias:(float)arg1;
- (bool)_setFocusWithMode:(long long)arg1 pointOfInterest:(id)arg2;
- (void)_restoreColorProperties;
- (void)_teardownFigRecorderForTorchApps;
- (id)initWithProperties:(id)arg1 sensorProperties:(id)arg2;
- (id)devicePropertiesDictionary;
- (bool)doesHandleNotification:(id)arg1;
- (bool)HDRUsesPreBracketedFrameAsEV0;
- (void)setWhiteBalanceTemperature:(float)arg1;
- (float)whiteBalanceTemperature;
- (void)setAutoExposureBias:(float)arg1;
- (float)autoExposureBias;
- (void)setManualExposureSupportEnabled:(bool)arg1;
- (bool)isManualExposureSupportEnabled;
- (void)setExposureGain:(float)arg1;
- (float)exposureGain;
- (void)setExposureDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setManualFocusSupportEnabled:(bool)arg1;
- (bool)isManualFocusSupportEnabled;
- (void)setFocusPosition:(float)arg1;
- (float)focusPosition;
- (void)_setActiveFormatAndFrameRatesForResolvedOptions:(id)arg1 sendingFrameRatesToFig:(bool)arg2;
- (void)setFaceDetectionDebugMetadataReportingEnabled:(bool)arg1;
- (bool)isFaceDetectionDebugMetadataReportingEnabled;
- (void)_sessionDidStart;
- (void)_sessionWillStart;
- (void)setActiveInput:(id)arg1;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (bool)_faceDetectionDrivenImageProcessingEnabled;
- (long long)_torchMode;
- (long long)_flashMode;
- (bool)isSISSupported;
- (void)setVideoZoomUpscaleStageHint:(long long)arg1;
- (long long)videoZoomUpscaleStageHint;
- (void)setVideoZoomDownscaleStageHint:(long long)arg1;
- (long long)videoZoomDownscaleStageHint;
- (void)setVideoZoomDrawOverlay:(bool)arg1;
- (bool)videoZoomDrawOverlay;
- (void)_setHighDynamicRangeScene:(bool)arg1;
- (bool)_setImageControlMode:(long long)arg1;
- (void)_setTorchActive:(bool)arg1;
- (void)_setAdjustingWhiteBalance:(bool)arg1;
- (void)_setAdjustingExposure:(bool)arg1;
- (void)_setAdjustingFocus:(bool)arg1;
- (int)_setTorchMode:(long long)arg1 withLevel:(float)arg2;
- (void)_setFlashActive:(bool)arg1;
- (bool)isLowLightBoostEnabled;
- (bool)isLowLightBoostSupported;
- (bool)isHDRSupported;
- (void)setSaturation:(float)arg1;
- (float)saturation;
- (void)setAutomaticallyAdjustsImageControlMode:(bool)arg1;
- (bool)automaticallyAdjustsImageControlMode;
- (bool)isImageControlModeSupported:(long long)arg1;
- (bool)isAdjustingWhiteBalance;
- (void)setWhiteBalanceMode:(long long)arg1;
- (long long)whiteBalanceMode;
- (bool)isWhiteBalanceModeSupported:(long long)arg1;
- (bool)isAdjustingExposure;
- (void)setExposureTargetBias:(float)arg1 completionHandler:(id)arg2;
- (float)exposureTargetBias;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })exposureDuration;
- (void)setExposurePointOfInterest:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })exposurePointOfInterest;
- (bool)isExposurePointOfInterestSupported;
- (void)setExposureMode:(long long)arg1;
- (long long)exposureMode;
- (bool)isExposureModeSupported:(long long)arg1;
- (void)setSmoothAutoFocusEnabled:(bool)arg1;
- (bool)isSmoothAutoFocusEnabled;
- (bool)isSmoothAutoFocusSupported;
- (void)setAutoFocusRangeRestriction:(long long)arg1;
- (long long)autoFocusRangeRestriction;
- (bool)isAutoFocusRangeRestrictionSupported;
- (void)setFocusPointOfInterest:(struct CGPoint { double x1; double x2; })arg1;
- (bool)isAdjustingFocus;
- (struct CGPoint { double x1; double x2; })focusPointOfInterest;
- (bool)isFocusPointOfInterestSupported;
- (void)setFocusMode:(long long)arg1;
- (long long)focusMode;
- (bool)isFocusModeSupported:(long long)arg1;
- (bool)setTorchModeOnWithLevel:(float)arg1 error:(id*)arg2;
- (void)setTorchMode:(long long)arg1;
- (long long)torchMode;
- (bool)isTorchActive;
- (bool)isTorchAvailable;
- (bool)isTorchModeSupported:(long long)arg1;
- (float)torchLevel;
- (bool)hasTorch;
- (void)setFlashMode:(long long)arg1;
- (long long)flashMode;
- (bool)isFlashModeSupported:(long long)arg1;
- (bool)isFlashActive;
- (bool)isFlashAvailable;
- (bool)hasFlash;
- (struct OpaqueCMClock { }*)deviceClock;
- (bool)isActiveVideoMaxFrameDurationSet;
- (void)setActiveVideoMaxFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setActiveVideoMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setActiveFormat:(id)arg1;
- (id)formats;
- (bool)isInUseByAnotherApplication;
- (bool)isMachineReadableCodeDetectionSupported;
- (bool)isHighDynamicRangeScene;
- (void)setHighDynamicRangeSceneDetectionEnabled:(bool)arg1;
- (bool)isHighDynamicRangeSceneDetectionEnabled;
- (bool)isHighDynamicRangeSceneDetectionSupported;
- (int)faceRectangleAngle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })faceRectangle;
- (void)setFaceDetectionDrivenImageProcessingEnabled:(bool)arg1;
- (bool)isFaceDetectionDrivenImageProcessingEnabled;
- (bool)isFaceDetectionDuringVideoPreviewSupported;
- (bool)isFaceDetectionSupported;
- (void)setSubjectAreaChangeMonitoringEnabled:(bool)arg1;
- (bool)isSubjectAreaChangeMonitoringEnabled;
- (bool)supportsAVCaptureSessionPreset:(id)arg1;
- (bool)hasMediaType:(id)arg1;
- (id)modelID;
- (void)stopUsingDevice;
- (bool)startUsingDevice:(id*)arg1;
- (bool)isActiveVideoMinFrameDurationSet;
- (void)_setActiveVideoMaxFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })activeVideoMaxFrameDuration;
- (void)_setActiveVideoMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })activeVideoMinFrameDuration;
- (id)activeFormat;
- (void)_applyOverridesToCaptureOptions:(id)arg1;
- (id)localizedName;
- (id)uniqueID;
- (bool)isConnected;
- (id)init;
- (bool)isKindOfClass:(Class)arg1;
- (void)dealloc;
- (long long)position;
- (float)contrast;
- (void)setContrast:(float)arg1;

@end
