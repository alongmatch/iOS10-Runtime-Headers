/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@class TUTelephonyCallModel, TUProxyCallModel, TUFaceTimeAudioCallModel;

@interface TUCallCenterCallModelState : TUCallModelState  {
}

@property(retain,readonly) TUTelephonyCallModel * telephonyCallModel;
@property(retain,readonly) TUFaceTimeAudioCallModel * faceTimeAudioCallModel;
@property(retain,readonly) TUProxyCallModel * proxyCallModel;


- (bool)isAmbiguous;
- (bool)_anyCallsSupportCallModelType:(int)arg1;
- (bool)_displayedCallSupportsCallModelType:(int)arg1;
- (bool)_allCallsSupportCallModelType:(int)arg1;
- (id)faceTimeAudioCallModel;
- (id)telephonyCallModel;
- (bool)_updateTakingCallsPrivateAllowed;
- (bool)_updateSwappable;
- (bool)_updateSendToVoicemailAllowed;
- (bool)_updateMergeable;
- (bool)_updateHoldAndAnswerAllowed;
- (bool)_updateHoldAllowed;
- (bool)_updateHardPauseAvailable;
- (bool)_updateEndAndAnswerAllowed;
- (bool)_updateAmbiguityState;
- (bool)_updateAddCallAllowed;
- (bool)updateInternalState;
- (bool)_onlySupportsCallModelType:(int)arg1;
- (bool)_supportsCallModelType:(int)arg1;
- (id)proxyCallModel;
- (void)handlePossibleStateChange;
- (void)faceTimeAudioCallModelDidChange:(id)arg1;
- (void)telephonyCallModelDidChange:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)description;

@end
