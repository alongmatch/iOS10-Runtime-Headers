/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSValue;

@interface UIKBRenderGeometry : NSObject <NSCopying> {
    bool_detachedVariants;
    bool_tallPopup;
    int _roundRectCorners;
    int _popupBias;
    double _roundRectRadius;
    long long _flickDirection;
    NSValue *_splitLeftRect;
    NSValue *_splitRightRect;
    struct CGPoint { 
        double x; 
        double y; 
    } _popupSource;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _frame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _paddedFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _displayFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _symbolFrame;
}

@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } paddedFrame;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } displayFrame;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } symbolFrame;
@property struct CGPoint { double x1; double x2; } popupSource;
@property double roundRectRadius;
@property int roundRectCorners;
@property int popupBias;
@property long long flickDirection;
@property bool detachedVariants;
@property bool tallPopup;
@property(retain) NSValue * splitLeftRect;
@property(retain) NSValue * splitRightRect;
@property(readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } displayInsets;
@property(readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } paddedInsets;

+ (id)geometryWithShape:(id)arg1;
+ (id)geometryWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 paddedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)adjustForTranslucentGapsWithSize:(struct CGSize { double x1; double x2; })arg1 inFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })paddedInsets;
- (id)similarShape;
- (id)iPadVariantGeometries:(unsigned long long)arg1;
- (id)iPhoneVariantGeometries:(unsigned long long)arg1;
- (void)applyShadowInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)overlayWithGeometry:(id)arg1;
- (void)setTallPopup:(bool)arg1;
- (void)setDetachedVariants:(bool)arg1;
- (double)roundRectRadius;
- (bool)tallPopup;
- (bool)detachedVariants;
- (int)popupBias;
- (int)roundRectCorners;
- (struct CGPoint { double x1; double x2; })popupSource;
- (id)initWithShape:(id)arg1;
- (void)applyInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPopupSource:(struct CGPoint { double x1; double x2; })arg1;
- (unsigned long long)adjustForTranslucentGapsInFrameWithSize_10Key:(struct CGSize { double x1; double x2; })arg1 centerX:(double)arg2 isInBottomRow:(bool)arg3;
- (id)copyForPopupDirection:(long long)arg1 scale:(double)arg2;
- (id)copyForFlickDirection:(long long)arg1 scale:(double)arg2;
- (void)adjustToTopWithInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)makeIntegralWithScale:(double)arg1;
- (void)applyOffset:(struct CGPoint { double x1; double x2; })arg1;
- (id)_copyForDirection:(long long)arg1 positionFactor:(double)arg2 sizeFactor:(double)arg3 scale:(double)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })symbolFrame;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })displayInsets;
- (long long)flickDirection;
- (void)setFlickDirection:(long long)arg1;
- (id)splitRightRect;
- (id)splitLeftRect;
- (void)setSplitRightRect:(id)arg1;
- (void)setSplitLeftRect:(id)arg1;
- (void)setRoundRectRadius:(double)arg1;
- (void)setRoundRectCorners:(int)arg1;
- (void)setSymbolFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPopupBias:(int)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })displayFrame;
- (void)setPaddedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDisplayFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })paddedFrame;

@end
