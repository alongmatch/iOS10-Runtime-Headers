/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@class NSString;

@interface WebPlainWhiteView : WAKView <WebDocumentView, WebDocumentElement> {
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)elementAtPoint:(struct CGPoint { double x1; double x2; })arg1 allowShadowContent:(bool)arg2;
- (id)elementAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)viewDidMoveToHostWindow;
- (void)viewWillMoveToHostWindow:(id)arg1;
- (void)setNeedsLayout:(bool)arg1;
- (void)setDataSource:(id)arg1;
- (void)dataSourceUpdated:(id)arg1;
- (void)layout;

@end
