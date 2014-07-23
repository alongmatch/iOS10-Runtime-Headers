/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIImageView, UIColor, UIImage;

@interface _UISiriTrackingItem : NSObject  {
    bool_deleted;
    bool_isABigReplacement;
    bool_isASmallReplacement;
    bool_isAnIntroduction;
    UIImageView *_animatedView;
    UIColor *_textColor;
    double _offscreenXLocation;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _animationCompletionHandler;

    UIImage *_capturedGlyphImage;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _textRange;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _glyphRange;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _targetFrame;
}

@property(retain) UIImageView * animatedView;
@property(retain) UIColor * textColor;
@property struct _NSRange { unsigned long long x1; unsigned long long x2; } textRange;
@property struct _NSRange { unsigned long long x1; unsigned long long x2; } glyphRange;
@property double offscreenXLocation;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } targetFrame;
@property(copy) id animationCompletionHandler;
@property bool isABigReplacement;
@property bool isASmallReplacement;
@property bool isAnIntroduction;
@property(retain) UIImage * capturedGlyphImage;


- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })glyphRange;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)capturedGlyphImage;
- (void)setIsAnIntroduction:(bool)arg1;
- (bool)isAnIntroduction;
- (void)setIsASmallReplacement:(bool)arg1;
- (bool)isASmallReplacement;
- (void)setIsABigReplacement:(bool)arg1;
- (bool)isABigReplacement;
- (void)setAnimationCompletionHandler:(id)arg1;
- (id)animationCompletionHandler;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetFrame;
- (void)setOffscreenXLocation:(double)arg1;
- (double)offscreenXLocation;
- (void)setGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })textRange;
- (void)setAnimatedView:(id)arg1;
- (id)animatedView;
- (void)captureGlyphsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 containerOrigin:(struct CGPoint { double x1; double x2; })arg2 fromLayoutManager:(id)arg3;
- (void)animateOut;
- (void)setTargetFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCapturedGlyphImage:(id)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;

@end
