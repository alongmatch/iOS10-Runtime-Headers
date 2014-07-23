/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class UIView, NSString, CADisplayLink, CAMPanoramaLevelView, UIImageView, CALayer, <PLCameraPanoramaViewDelegate>, CMMotionManager, NSOperationQueue, CAMPanoramaArrowView, CAMPanoramaLabel;

@interface CAMPanoramaView : UIView <UIAccelerometerDelegate> {
    <PLCameraPanoramaViewDelegate> *_delegate;
    float _previewScale;
    bool_isCapturing;
    bool_isProcessing;
    int _direction;
    double _currentSpeed;
    UIImageView *_previewBackgroundImageView;
    UIView *_previewContainer;
    UIView *_previewMaskingContainer;
    CALayer *_previewLayer;
    UIImageView *_previewGhostImageView;
    CAMPanoramaLabel *_instructionalText;
    UIView *_instructionalTextBackground;
    CAMPanoramaArrowView *_arrowView;
    CAMPanoramaLevelView *_levelView;
    struct CGPoint { 
        double x; 
        double y; 
    } _arrowViewBeginCenter;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _initialArrowFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _currentArrowFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _initialMaskFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _currentMaskFrame;
    bool_isAnimatingTextIn;
    bool_isAnimatingTextOut;
    bool_showingFastText;
    bool_isAnimatingDirection;
    bool_showingMoveText;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _visiblePreviewRect;
    bool_ignorePreviewUpdates;
    CADisplayLink *_displayLink;
    long long _frameCounter;
    CMMotionManager *_motionManager;
    NSOperationQueue *_accelerometerQueue;
    float _initialAcceleration;
    float _currentAcceleration;
    long long _deviceOrientation;
    long long _deferredDeviceOrientation;
}

@property <PLCameraPanoramaViewDelegate> * delegate;
@property(readonly) CALayer * panoramaPreviewLayer;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)panoramaPreviewLayer;
- (void)updateWithParameters:(id)arg1;
- (void)panoramaWillStart;
- (void)showSavingHUD:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visiblePreviewRect;
- (void)viewWillDisappear;
- (void)viewWillAppear;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 centerYOffset:(double)arg2 panoramaPreviewScale:(float)arg3;
- (void)hideInstructionalText;
- (void)showMoveDownTextAfterDelay;
- (void)showMoveUpTextAfterDelay;
- (void)showMoveDownText;
- (void)showMoveUpText;
- (void)_showMoveDownText;
- (void)_showMoveUpText;
- (void)_cancelDelayedShowMoveText;
- (void)_hideText;
- (void)hideFastMovementTextAfterDelay;
- (void)showFastMovementText;
- (void)hideArrowTextAfterDelay;
- (void)updateUI;
- (void)setCaptureDirection:(int)arg1;
- (void)_arrowWasTapped:(id)arg1;
- (void)_createMotionManagerAndDisplayLink;
- (void)setMaskingContainerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 direction:(int)arg2;
- (void)_updateInstructionalTextBackground;
- (void)_updateInstructionalText:(id)arg1;
- (double)_ghostWidth;
- (double)_previewContainerHorizontalInset;
- (struct CGSize { double x1; double x2; })_previewSize;
- (void)updateToContentSize:(id)arg1;
- (void)setDeviceOrientation:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;

@end
