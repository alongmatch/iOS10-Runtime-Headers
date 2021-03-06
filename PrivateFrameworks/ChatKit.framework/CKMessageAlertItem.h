/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKMessageAlertItem : CKAlertItem <NCInteractiveNotificationHostDelegate, SBBannerPresentingAlertItem> {
    NCInteractiveNotificationHostViewController * _audioPlaybackViewController;
    BBBulletin * _bulletin;
    CKIMDBMessage * _message;
    bool  _playedSound;
    bool  _showingImage;
    <SBBannerPresentingAlertItemDelegate> * bannerPresenterDelegate;
}

@property (nonatomic, retain) NCInteractiveNotificationHostViewController *audioPlaybackViewController;
@property (nonatomic) <SBBannerPresentingAlertItemDelegate> *bannerPresenterDelegate;
@property (nonatomic, retain) BBBulletin *bulletin;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool showingImage;
@property (readonly) Class superclass;

+ (int)lastMessageSenderID;
+ (void)playMessageReceived;
+ (void)setLastMessageSenderID:(int)arg1;
+ (void)stopPlayingCurrentAlertTone;

- (void).cxx_destruct;
- (id)_groupID;
- (id)accessoryView;
- (id)address;
- (id)alertImage;
- (bool)allowMenuButtonDismissal;
- (id)audioPlaybackViewController;
- (id)bannerPresenterDelegate;
- (id)bulletin;
- (void)configure:(bool)arg1 requirePasscodeForActions:(bool)arg2;
- (void)dealloc;
- (void)didDeactivateForReason:(int)arg1;
- (bool)dismissOnLock;
- (bool)isAudioPlaybackAlert;
- (id)messageText;
- (id)name;
- (void)performUnlockAction;
- (void)reply;
- (void)setAudioPlaybackViewController:(id)arg1;
- (void)setBannerPresenterDelegate:(id)arg1;
- (void)setBulletin:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setShowingImage:(bool)arg1;
- (bool)showingImage;
- (void)willActivate;
- (void)willRelockForButtonPress:(bool)arg1;

@end
