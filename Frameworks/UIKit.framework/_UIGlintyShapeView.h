/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIBezierPath, UIColor, CAShapeLayer;

@interface _UIGlintyShapeView : UIView  {
    UIBezierPath *_path;
    UIColor *_fillColor;
    UIColor *_strokeColor;
}

@property(readonly) CAShapeLayer * shapeLayer;
@property(readonly) UIBezierPath * path;
@property(readonly) UIColor * fillColor;
@property(readonly) UIColor * strokeColor;

+ (Class)layerClass;

- (id)path;
- (void)setFillColor:(id)arg1;
- (id)strokeColor;
- (id)fillColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPath:(id)arg1;
- (id)shapeLayer;
- (void)setStrokeColor:(id)arg1;

@end
