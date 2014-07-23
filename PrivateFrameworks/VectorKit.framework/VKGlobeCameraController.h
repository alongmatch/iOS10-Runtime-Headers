/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString, GEOMapRegion;

@interface VKGlobeCameraController : VKScreenCameraController <VKInteractiveCameraController> {
    struct GlobeView { int (**x1)(); } *_globeView;
    struct CameraManager { 
        int (**_vptr$CameraManager)(); 
        bool_panBegin; 
        bool_panInProgress; 
        bool_panEnd; 
        struct Vector2i { 
            int _x; 
            int _y; 
        } _panCurrentCursor; 
        struct Vector2i { 
            int _x; 
            int _y; 
        } _panPreviousCursor; 
        struct Vector2i { 
            int _x; 
            int _y; 
        } _panStartCursor; 
        struct Position3d { 
            double _latitude; 
            double _longitude; 
            double _height; 
        } _panStartPosition; 
        double _panDistance; 
        bool_panAtStartPosition; 
        bool_rotateBegin; 
        bool_rotateInProgress; 
        bool_rotateEnd; 
        struct Position3d { 
            double _latitude; 
            double _longitude; 
            double _height; 
        } _rotateStartPosition; 
        struct Vector2i { 
            int _x; 
            int _y; 
        } _rotateCurrentCursor; 
        double _rotateAngle; 
        bool_tiltBegin; 
        bool_tiltInProgress; 
        bool_tiltEnd; 
        struct Position3d { 
            double _latitude; 
            double _longitude; 
            double _height; 
        } _tiltStartPosition; 
        struct Vector2i { 
            int _x; 
            int _y; 
        } _tiltCurrentCursor; 
        double _tiltAngle; 
        bool_zoomBegin; 
        bool_zoomInProgress; 
        bool_zoomEnd; 
        struct Position3d { 
            double _latitude; 
            double _longitude; 
            double _height; 
        } _zoomStartPosition; 
        struct Vector2i { 
            int _x; 
            int _y; 
        } _zoomCurrentCursor; 
        double _zoomFactor; 
        bool_zoomRotateToNorth; 
        bool_useTiltLimit; 
        int _tiltLimitMode; 
        bool_tiltLimitPushDownEnabled; 
        bool_tiltLimitTransferInProgress; 
        bool_tiltLimitPushDown; 
        double _startPushDownTilt; 
        double _tiltLimitTransferFraction; 
        double _startTiltLimitTilt; 
        struct PositionGeo3d { 
            double _x; 
            double _y; 
            double _z; 
        } _startTiltLimitPosition; 
        struct Vector3d { 
            double _x; 
            double _y; 
            double _z; 
        } _startTiltLimitDirection; 
        double _fullZoomTiltLimitFactor; 
    } _cameraManager;
    double _currentDoublePanPitch;
    bool_isPitching;
    bool_isRotating;
    bool_wasPitched;
    bool_couldEnter3DMode;
}

@property struct GlobeView { int (**x1)(); }* globeView;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) struct { double x1; double x2; double x3; } centerCoordinate;
@property(readonly) double yaw;
@property(readonly) double presentationYaw;
@property(readonly) double pitch;
@property(readonly) GEOMapRegion * mapRegion;
@property(readonly) GEOMapRegion * mapRegionOfInterest;


- (void)rotateTo:(double)arg1 animated:(bool)arg2;
- (struct GlobeView { int (**x1)(); }*)globeView;
- (void)_rotateAroundTargetWithDuration:(double)arg1 rotations:(double)arg2 completion:(id)arg3;
- (bool)isFlyoverTourStarted;
- (void)moveTo:(struct { double x1; double x2; })arg1 height:(double)arg2 useHeight:(bool)arg3 zoom:(double)arg4 rotation:(double)arg5 tilt:(double)arg6 duration:(double)arg7 timingCurve:(id)arg8 completion:(id)arg9;
- (void)tiltTo:(double)arg1 animated:(bool)arg2 exaggerate:(bool)arg3;
- (void)_update3DState;
- (struct Vector2i { int x1; int x2; })_cursorFromScreenPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateGlobeFromCamera;
- (void)updateCameraManager;
- (void)stopSearchResultAnimation;
- (void)stopFlyoverTourAnimation;
- (void)flyoverTourAnimation:(id)arg1 animateToStart:(bool)arg2 labelChanged:(id)arg3 stateChange:(id)arg4;
- (void)showSearchResultAnimationAtCoordinate:(struct { double x1; double x2; })arg1 withZoom:(double)arg2;
- (double)zoomForMapRegion:(id)arg1;
- (void)moveTo:(struct { double x1; double x2; })arg1 zoom:(double)arg2 rotation:(double)arg3 tilt:(double)arg4 duration:(double)arg5 timingCurve:(id)arg6 completion:(id)arg7;
- (void)stopGlobeAnimations;
- (void)setGlobeView:(struct GlobeView { int (**x1)(); }*)arg1;
- (long long)minimumNormalizedZoomLevel;
- (long long)maximumNormalizedZoomLevel;
- (void)pitch:(struct CGPoint { double x1; double x2; })arg1 translation:(double)arg2;
- (void)rotate:(double)arg1 atScreenPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)tapZoom:(struct CGPoint { double x1; double x2; })arg1 levels:(double)arg2 completionHandler:(id)arg3;
- (struct CGPoint { double x1; double x2; })_scaledScreenPointForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)snapMapIfNecessary:(const struct VKPoint { double x1; double x2; double x3; }*)arg1 animated:(bool)arg2;
- (struct CGPoint { double x1; double x2; })_centerScreenPoint;
- (void)stopPitchingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)updatePitchWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1 translation:(double)arg2;
- (void)startPitchingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)stopRotatingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateRotationWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1 newValue:(double)arg2;
- (void)startRotatingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)stopPanningAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)updatePanWithTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (void)startPanningAtPoint:(struct CGPoint { double x1; double x2; })arg1 panAtStartPoint:(bool)arg2;
- (void)stopPinchingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)updatePinchWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)startPinchingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint { double x1; double x2; })arg2 completionHandler:(id)arg3;
- (bool)restoreViewportFromInfo:(id)arg1;
- (id)viewportInfo;
- (void)panWithOffset:(struct CGPoint { double x1; double x2; })arg1 relativeToScreenPoint:(struct CGPoint { double x1; double x2; })arg2 animated:(bool)arg3 duration:(double)arg4 completionHandler:(id)arg5;
- (bool)isFullyPitched;
- (void)exit3DMode;
- (void)enter3DMode;
- (void)resumeFlyoverTourAnimation;
- (void)pauseFlyoverTourAnimation;
- (double)durationToAnimateToMapRegion:(id)arg1;
- (void)animateToMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 completion:(id)arg5;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 animated:(bool)arg4 completion:(id)arg5;
- (void)setYaw:(double)arg1 animated:(bool)arg2;
- (void)setCenterCoordinate:(struct { double x1; double x2; })arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 timingCurve:(id)arg6 completion:(id)arg7;
- (void)setCenterCoordinate:(struct { double x1; double x2; double x3; })arg1 animated:(bool)arg2;
- (id)mapRegionOfInterest;
- (double)presentationYaw;
- (bool)isPitched;
- (bool)canEnter3DMode;
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(bool)arg2 animated:(bool)arg3;
- (void)setGesturing:(bool)arg1;
- (bool)currentZoomLevelAllowsRotation;
- (struct { double x1; double x2; double x3; })centerCoordinate;
- (id)mapRegion;
- (double)yaw;
- (double)pitch;
- (double)altitude;
- (long long)tileSize;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
