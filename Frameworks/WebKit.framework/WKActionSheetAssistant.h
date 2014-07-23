/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/WebKit.framework/WebKit
 */

@class NSString, WKContentView;

@interface WKActionSheetAssistant : NSObject <WKActionSheetDelegate, DDDetectionControllerInteractionDelegate> {
    struct RetainPtr<WKActionSheet> { 
        void *m_ptr; 
    } _interactionSheet;
    struct RetainPtr<_WKActivatedElementInfo> { 
        void *m_ptr; 
    } _elementInfo;
    WKContentView *_view;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)showDataDetectorsSheet;
- (void)showLinkSheet;
- (void)showImageSheet;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })presentationRectInHostViewForSheet;
- (void)cleanupSheet;
- (void)updateSheetPosition;
- (id)hostViewForSheet;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialPresentationRectInHostViewForSheet;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_presentationRectForSheetGivenPoint:(struct CGPoint { double x1; double x2; })arg1 inHostView:(id)arg2;
- (bool)presentSheet;
- (void)_createSheetWithElementActions:(id)arg1 showLinkTitle:(bool)arg2;
- (id)superviewForSheet;
- (id)initWithView:(id)arg1;

@end
