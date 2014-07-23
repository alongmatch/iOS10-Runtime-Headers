/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@class UIView, NSString, NSArray, UIControl<SBUIPasscodeNumberPadButton>, <SBUIPasscodeLockNumberPadDelegate>, SBUIButton, SBNumberPadWithDelegate, UIColor;

@interface SBUIPasscodeLockNumberPad : UIView <SBNumberPadDelegate> {
    SBNumberPadWithDelegate *_numberPad;
    <SBUIPasscodeLockNumberPadDelegate> *_delegate;
    UIView *_leftPaddingView;
    UIView *_rightPaddingView;
    UIView *_bottomPaddingView;
    SBUIButton *_emergencyCallButton;
    SBUIButton *_backspaceButton;
    SBUIButton *_cancelButton;
    UIControl<SBUIPasscodeNumberPadButton> *_downButton;
    bool_showsBackspaceButton;
    bool_showsEmergencyCallButton;
    bool_showsCancelButton;
    UIColor *_customBackgroundColor;
    bool_useLightStyle;
}

@property <SBUIPasscodeLockNumberPadDelegate> * delegate;
@property bool showsBackspaceButton;
@property bool showsEmergencyCallButton;
@property bool showsCancelButton;
@property(readonly) NSArray * buttons;
@property(retain) UIControl<SBUIPasscodeNumberPadButton> * downButton;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_inputButtonCircleSpacing;
+ (struct CGSize { double x1; double x2; })_inputButtonCircleSize;
+ (id)_buttonForCharacter:(unsigned int)arg1 withLightStyle:(bool)arg2;

- (id)downButton;
- (bool)showsBackspaceButton;
- (double)_distanceToTopOfFirstButton;
- (void)setShowsBackspaceButton:(bool)arg1;
- (void)setDownButton:(id)arg1;
- (void)_numberPadTouchDrag:(id)arg1 forEvent:(id)arg2;
- (void)_numberPadTouchCancelled:(id)arg1 forEvent:(id)arg2;
- (void)_numberPadTouchUp:(id)arg1 forEvent:(id)arg2;
- (void)_numberPadTouchDown:(id)arg1 forEvent:(id)arg2;
- (void)_configureAdditionalButtons;
- (void)_emergencyCallButtonHit;
- (void)_backspaceButtonHit;
- (void)_cancelButtonHit;
- (id)_fontForAncillaryButton;
- (id)initWithDefaultSizeAndLightStyle:(bool)arg1;
- (void)setCustomBackgroundColor:(id)arg1;
- (bool)showsEmergencyCallButton;
- (void)_setLuminosityBoost:(double)arg1;
- (void)setShowsEmergencyCallButton:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)buttons;
- (void)setBackgroundAlpha:(double)arg1;
- (bool)showsCancelButton;
- (void)setShowsCancelButton:(bool)arg1;

@end
