/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@class NSString;

@interface GKMacGameIconBrush : GKImageBrush <GKBrushIdentification> {
    struct CGSize { 
        double width; 
        double height; 
    } _outputSize;
}

@property struct CGSize { double x1; double x2; } outputSize;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setOutputSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })outputSize;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withContext:(struct CGContext { }*)arg2 input:(id)arg3;
- (id)renderedImageIdentifier;
- (struct CGSize { double x1; double x2; })sizeForInput:(id)arg1;

@end
