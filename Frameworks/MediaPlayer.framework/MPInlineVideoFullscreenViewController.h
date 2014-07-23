/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSString, UITapGestureRecognizer, MPSwipableView, UIPinchGestureRecognizer, MPAVItem, MPWeakTimer, MPInlineVideoController, MPVolumeController, MPVideoPlaybackOverlayView, UIActivityIndicatorView;

@interface MPInlineVideoFullscreenViewController : UIViewController <MPSwipableViewDelegate, MPVolumeControllerDelegate, MPVideoOverlayDelegate, MPTransportControlsTarget> {
    bool_disableTaps;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    MPWeakTimer *_idleTimer;
    bool_isAnimatingOverlay;
    MPAVItem *_item;
    UIActivityIndicatorView *_loadingIndicator;
    MPInlineVideoController *_masterController;
    MPVideoPlaybackOverlayView *_overlayView;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    bool_shouldForwardRotationEvents;
    MPSwipableView *_swipableView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    long long _activeOverlayUserEvents;
    bool_statusBarWasHidden;
    MPVolumeController *_volumeController;
}

@property MPInlineVideoController * masterController;
@property(retain) MPAVItem * item;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)_showOverlayDidEnd;
- (void)_overlayIdleTimerFired;
- (id)masterController;
- (void)prepareForTransitionFromFullscreen;
- (void)showOverlayAnimated:(bool)arg1;
- (void)resetOverlayIdleTimer;
- (void)_hideOverlayDidEnd;
- (void)hideLoadingIndicator;
- (void)showLoadingIndicator;
- (void)cancelOverlayIdleTimer;
- (void)updateOverlayView;
- (void)_hideOverlayAnimated:(bool)arg1;
- (void)_viewWasPinched:(id)arg1;
- (void)_viewWasTapped:(id)arg1;
- (void)setMasterController:(id)arg1;
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;
- (void)showAlternateTracks;
- (void)overlay:(id)arg1 didEndUserEvent:(long long)arg2;
- (void)overlay:(id)arg1 didCancelUserEvent:(long long)arg2;
- (void)overlay:(id)arg1 didBeginUserEvent:(long long)arg2;
- (void)overlayTappedFullscreenButton:(id)arg1;
- (void)overlayTappedBackButton:(id)arg1;
- (bool)transportControls:(id)arg1 tappedButtonPart:(unsigned long long)arg2;
- (void)swipableViewHadActivity:(id)arg1;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)item;
- (void)setItem:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)loadView;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (bool)shouldAutorotate;
- (bool)prefersStatusBarHidden;

@end
