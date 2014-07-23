/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class <PLImageAdjustmentViewDelegate>, NSString, UIImage, PLCropModel, NSTimer, UIImageView, PLCropOverlayLayer;

@interface PLImageAdjustmentView : UIView <UIGestureRecognizerDelegate> {
    PLCropModel *_cropModel;
    UIImageView *_imageView;
    PLCropOverlayLayer *_overlayLayer;
    <PLImageAdjustmentViewDelegate> *_delegate;
    UIImage *_editedImage;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _cropInsets;
    int _gestureCount;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    } _originalTransform;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _imageCropRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _previousImageCropRect;
    double _cropAngle;
    double _previousCropAngle;
    double _photoViewScale;
    double _sourceAspectRatio;
    unsigned int _currentCropAction;
    NSTimer *_manualCropTimer;
    double _autoCropScale;
    double _animationDuration;
    unsigned int _isCropMode : 1;
    unsigned int _isAdjustingCropRect : 1;
    unsigned int _isAnimating : 1;
    unsigned int _canRotate : 1;
    unsigned int _needsRecenterImage : 1;
    unsigned int _delegateWillCropImage : 1;
    unsigned int _delegateDidCropImage : 1;
    unsigned int _delegateDidTouchImage : 1;
}

@property(retain) UIImage * editedImage;
@property <PLImageAdjustmentViewDelegate> * delegate;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } cropInsets;
@property(getter=isCropMode) bool cropMode;
@property struct CGSize { double x1; double x2; } aspectRatio;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)overlayLayer;
- (double)_minimumImageScale;
- (double)_imageScale;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })cropInsets;
- (double)computeScaleToFillRelativeToPointInImage:(struct CGPoint { double x1; double x2; })arg1;
- (void)setNeedsRecenterImage;
- (struct CGPoint { double x1; double x2; })convertPointFromImage:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_updateCropRect;
- (bool)_updateCropAngle;
- (void)_cropTimer:(id)arg1;
- (void)_performCropAction:(int)arg1 location:(struct CGPoint { double x1; double x2; })arg2;
- (int)cropActionForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_endCropGesture:(id)arg1;
- (void)_beginCropGesture:(id)arg1;
- (void)crop:(id)arg1;
- (void)scale:(id)arg1;
- (void)rotate:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_maxOverlayCropRect;
- (void)_updateOverlayCropRect;
- (bool)_isInCropGesture;
- (id)editedImage;
- (void)showIndicatorAtPointInImage:(struct CGPoint { double x1; double x2; })arg1 duration:(double)arg2;
- (void)removeProgressIndicatorAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)displayProgressIndicatorAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertPointToImage:(struct CGPoint { double x1; double x2; })arg1;
- (double)previousCropAngle;
- (double)cropAngle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })previousCropRect;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cropAngle:(double)arg2;
- (void)replaceEditedImage:(id)arg1;
- (void)setEditedImage:(id)arg1;
- (void)removeProgressIndicators;
- (bool)isDisplayingProgressIndicators;
- (void)setCropInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (bool)isCropMode;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })overlayCropRect;
- (void)setCropMode:(bool)arg1;
- (void)beginAnimation:(double)arg1;
- (void)_updateGestureRecognizers;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRect;
- (void)setRotationAngle:(double)arg1;
- (double)rotationAngle;
- (void)pan:(id)arg1;
- (struct CGSize { double x1; double x2; })aspectRatio;
- (void)setAspectRatio:(struct CGSize { double x1; double x2; })arg1;
- (void)touch:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)reset;
- (void)_updateImageView;
- (id)imageView;
- (void)commitAnimations;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)layoutSubviews;

@end
