/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKAnimation, VKAnnotationTrackingCameraController, <VKTrackableAnnotation>, NSString;

@interface VKScreenCameraController : VKCameraController <VKCameraControllerDelegate> {
    VKAnimation *_zoomAnimation;
    VKAnimation *_pitchAnimation;
    VKAnimation *_rotationAnimation;
    VKAnimation *_regionAnimation;
    VKAnnotationTrackingCameraController *_annotationTrackingCameraController;
    struct VKEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _edgeInsets;
    double _beganDoublePanPitch;
    bool_isPitchIncreasing;
    double _lastRotation;
    bool_rotationLowZoomSnappingEnabled;
    bool_shouldRotationRubberband;
    struct CGPoint { 
        double x; 
        double y; 
    } _panStartScreenPoint;
    struct CGPoint { 
        double x; 
        double y; 
    } _panLastScreenPoint;
    long long _annotationTrackingZoomStyle;
    bool_staysCenteredDuringPinch;
    bool_staysCenteredDuringRotation;
    bool_isPitchable;
}

@property bool staysCenteredDuringPinch;
@property bool staysCenteredDuringRotation;
@property struct VKEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;
@property bool isPitchable;
@property long long annotationTrackingZoomStyle;
@property(getter=isAnimatingToTrackAnnotation,readonly) bool animatingToTrackAnnotation;
@property(readonly) <VKTrackableAnnotation> * trackingAnnotation;
@property(getter=isTrackingHeading,readonly) bool trackingHeading;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (double)rubberBandOffsetForOffset:(double)arg1 maxOffset:(double)arg2 minOffset:(double)arg3 range:(double)arg4;
- (void)cameraController:(id)arg1 requestsDisplayRate:(long long)arg2;
- (void)cameraController:(id)arg1 canZoomOutDidChange:(bool)arg2;
- (void)cameraController:(id)arg1 canZoomInDidChange:(bool)arg2;
- (id)cameraController:(id)arg1 presentationForAnnotation:(id)arg2;
- (void)cameraController:(id)arg1 canEnter3DModeDidChange:(bool)arg2;
- (void)cameraController:(id)arg1 didBecomePitched:(bool)arg2;
- (void)cameraController:(id)arg1 didChangeRegionAnimated:(bool)arg2;
- (void)cameraController:(id)arg1 willChangeRegionAnimated:(bool)arg2;
- (void)cameraControllerDidChangeCameraState:(id)arg1;
- (void)stopRegionAnimation;
- (void)stopSnappingAnimations;
- (bool)isAnimatingToTrackAnnotation;
- (void)runAnimation:(id)arg1;
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(bool)arg2 animated:(bool)arg3;
- (void)stopTrackingAnnotation;
- (bool)isTrackingHeading;
- (id)trackingAnnotation;
- (void)setAnnotationTrackingZoomStyle:(long long)arg1;
- (long long)annotationTrackingZoomStyle;
- (bool)isPitchable;
- (void)setIsPitchable:(bool)arg1;
- (bool)staysCenteredDuringRotation;
- (void)setStaysCenteredDuringRotation:(bool)arg1;
- (bool)staysCenteredDuringPinch;
- (void)setStaysCenteredDuringPinch:(bool)arg1;
- (void)setEdgeInsets:(struct VKEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct VKEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (void)dealloc;
- (id).cxx_construct;
- (bool)isAnimating;

@end
