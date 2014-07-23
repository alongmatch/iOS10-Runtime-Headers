/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class UIColor, NSArray;

@interface MKOverlayPathView : MKOverlayView  {
    UIColor *_fillColor;
    UIColor *_strokeColor;
    double _lineWidth;
    int _lineJoin;
    int _lineCap;
    double _miterLimit;
    double _lineDashPhase;
    NSArray *_lineDashPattern;
    struct CGPath { } *_path;
}

@property(retain) UIColor * fillColor;
@property(retain) UIColor * strokeColor;
@property double lineWidth;
@property int lineJoin;
@property int lineCap;
@property double miterLimit;
@property double lineDashPhase;
@property(copy) NSArray * lineDashPattern;
@property struct CGPath { }* path;


- (id)initWithOverlay:(id)arg1;
- (void)drawMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(double)arg2 inContext:(struct CGContext { }*)arg3;
- (void)invalidatePath;
- (void)strokePath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;
- (void)applyStrokePropertiesToContext:(struct CGContext { }*)arg1 atZoomScale:(double)arg2;
- (void)fillPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;
- (void)applyFillPropertiesToContext:(struct CGContext { }*)arg1 atZoomScale:(double)arg2;
- (void)createPath;
- (struct CGPath { }*)path;
- (void)setFillColor:(id)arg1;
- (void)setLineDashPhase:(double)arg1;
- (double)lineDashPhase;
- (id)lineDashPattern;
- (double)miterLimit;
- (int)lineJoin;
- (int)lineCap;
- (id)strokeColor;
- (id)fillColor;
- (double)lineWidth;
- (void)setPath:(struct CGPath { }*)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setLineDashPattern:(id)arg1;
- (void)setLineJoin:(int)arg1;
- (void)setLineCap:(int)arg1;
- (void)setStrokeColor:(id)arg1;
- (void)setMiterLimit:(double)arg1;
- (void)setLineWidth:(double)arg1;

@end
