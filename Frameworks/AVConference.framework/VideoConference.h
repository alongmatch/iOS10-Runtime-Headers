/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@class NSMutableDictionary, VideoConferenceManager, NSDictionary, GKNATObserver, NSObject<VideoConferenceChannelQualityDelegate>, NSObject<VideoConferenceDelegate>, NSString, VCCallSession, VCVideoRule, NSObject<VideoConferenceSpeakingDelegate>, NSObject<VideoConferenceRealTimeChannel>, NSObject<OS_dispatch_queue>, NSArray, FFTMeter, AVAudioManager;

@interface VideoConference : NSObject <VCCallSessionDelegate, GKNATObserverDelegate> {
    NSObject<VideoConferenceDelegate> *delegate;
    VideoConferenceManager *manager;
    AVAudioManager *audioManager;
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    } stateLock;
    NSMutableDictionary *sessionDict;
    NSArray *sessionArray;
    booloutputMeteringEnabled;
    boolinputMeteringEnabled;
    boolinputFrequencyMeteringEnabled;
    booloutputFrequencyMeteringEnabled;
    FFTMeter *_inputFFTMeter;
    FFTMeter *_outputFFTMeter;
    float outputMeterLevel;
    float inputMeterLevel;
    boolmicrophoneMuted;
    NSObject<VideoConferenceRealTimeChannel> *rtChannel;
    NSObject<OS_dispatch_queue> *audioManagerQueue;
    struct tagHANDLE { int x1; } *hVR;
    struct tagHANDLE { int x1; } *hVT;
    boolisRecvVideo;
    double dAudioHostTime;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    } xRemoteLayer;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    } xAudioTS;
    unsigned int dwAudioTS;
    boolforceNoICE;
    booluseViceroyBlobFormat;
    int chatMode;
    boolisFocus;
    NSString *currentFocus;
    VCCallSession *currentFocusSession;
    boolhasMic;
    float conferenceVolume;
    NSArray *mutedPeers;
    NSArray *connectedPeers;
    unsigned int talkingPeersLimit;
    unsigned char speakingArray[16];
    NSObject<VideoConferenceSpeakingDelegate> *speakingDelegate;
    NSObject<VideoConferenceChannelQualityDelegate> *qualityDelegate;
    float longTerm;
    float shortTerm;
    boolisTalking;
    unsigned int talkTime;
    int packetsPerBundle;
    unsigned int recvRTPTimeStamp;
    booldisableVAD;
    boolisAttemptingRelay;
    boolrequiresWifi;
    unsigned int preferredCodec;
    int upstreamBandwidth;
    int downstreamBandwidth;
    booluseAFRC;
    boolisGKVoiceChat;
    boolisUsingSuppression;
    boolshouldTimeoutPackets;
    unsigned char requestedCameraType;
    booluseCompressedConnectionData;
    NSDictionary *natTypeDictionary;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    } natMutex;
    struct _opaque_pthread_cond_t { 
        long long __sig; 
        BOOL __opaque[40]; 
    } natCond;
    unsigned int lastSentAudioSampleTime;
    double lastReceivedAudioTimestamp;
    int audioTimeStampDelta;
    GKNATObserver *natObserver;
    unsigned int mostRecentStartedCall;
    unsigned int lastActiveCall;
    boolbweOperatingModeInitialized;
    booluseNewBWEMode;
    booluseActiveProbingSenderLog;
    booluseFakeLargeFrameMode;
    boolshouldPrioritizeParticipantIDForSIPInvite;
    boolshouldResumeAudio;
    boolshouldResumeVideo;
    unsigned int timeStampUpdateCounter;
    NSObject<OS_dispatch_queue> *delegateNotificationQueue;
    int conferenceOperatingMode;
    boolisValid;
    int localFrameWidth;
    int localFrameHeight;
    VCVideoRule *conferenceCaptureRule;
}

@property bool useCompressedConnectionData;
@property(getter=isSpeakerPhoneEnabled) bool enableSpeakerPhone;
@property bool requiresWifi;
@property bool shouldPrioritizeParticipantIDForSIPInvite;
@property NSObject<VideoConferenceDelegate> * delegate;
@property bool useViceroyBlobFormat;
@property(getter=isMicrophoneMuted) bool microphoneMuted;
@property(getter=isOutputMeteringEnabled) bool outputMeteringEnabled;
@property(getter=isInputMeteringEnabled) bool inputMeteringEnabled;
@property(getter=isInputFrequencyMeteringEnabled) bool inputFrequencyMeteringEnabled;
@property(getter=isOutputFrequencyMeteringEnabled) bool outputFrequencyMeteringEnabled;
@property(readonly) float outputMeterLevel;
@property(readonly) float inputMeterLevel;
@property(setter=setRTChannel:) NSObject<VideoConferenceRealTimeChannel> * rtChannel;
@property int chatMode;
@property bool isFocus;
@property(copy) NSString * currentFocus;
@property int packetsPerBundle;
@property bool hasMic;
@property float conferenceVolume;
@property NSObject<VideoConferenceSpeakingDelegate> * speakingDelegate;
@property NSObject<VideoConferenceChannelQualityDelegate> * qualityDelegate;
@property unsigned int talkingPeersLimit;
@property bool disableVAD;
@property bool shouldTimeoutPackets;
@property int upstreamBandwidth;
@property int downstreamBandwidth;
@property(readonly) int localFrameHeight;
@property(readonly) int localFrameWidth;
@property unsigned int preferredCodec;
@property bool isUsingSuppression;
@property bool isGKVoiceChat;
@property(readonly) VCVideoRule * conferenceCaptureRule;
@property unsigned int lastActiveCall;
@property bool isValid;


- (void)shouldSendBlackFrame:(bool)arg1 callID:(id)arg2;
- (void)avConferencePreviewError:(id)arg1;
- (bool)onCaptureFrame:(struct __CVBuffer { }*)arg1 frameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 cameraStatusBits:(unsigned char)arg3;
- (bool)initiateResolutionChangeToWidth:(int)arg1 height:(int)arg2 rate:(int)arg3;
- (void)session:(id)arg1 changeVideoRulesToCaptureRule:(id)arg2 encodeRule:(id)arg3 featuresListString:(id)arg4;
- (bool)session:(id)arg1 didStopVideoIO:(bool)arg2 error:(id*)arg3;
- (bool)session:(id)arg1 startVideoIO:(id*)arg2 captureRule:(id)arg3 isUnpausing:(bool)arg4;
- (bool)session:(id)arg1 receivedRemoteFrame:(struct __CVBuffer { }*)arg2 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 withScreenAttributes:(id)arg4 videoAttributes:(id)arg5 isFirstFrame:(bool)arg6 isVideoPaused:(bool)arg7;
- (void)session:(id)arg1 didChangeVideoRule:(id)arg2;
- (bool)setPauseVideo:(bool)arg1;
- (bool)setPauseAudio:(bool)arg1;
- (void)defaultCleanupSession:(id)arg1;
- (unsigned int)connectionResultCallbackForCallID:(unsigned int)arg1 result:(struct tagCONNRESULT { unsigned int x1; int x2; int x3; unsigned int x4; int x5; int x6; unsigned short x7; unsigned short x8; struct tagIPPORT { int x_9_1_1; BOOL x_9_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_9_1_3; unsigned short x_9_1_4; } x9; struct tagIPPORT { int x_10_1_1; BOOL x_10_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_10_1_3; unsigned short x_10_1_4; } x10; struct tagIPPORT { int x_11_1_1; BOOL x_11_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_11_1_3; unsigned short x_11_1_4; } x11; struct tagIPPORT { int x_12_1_1; BOOL x_12_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_12_1_3; unsigned short x_12_1_4; } x12; struct tagIPPORT { int x_13_1_1; BOOL x_13_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_13_1_3; unsigned short x_13_1_4; } x13; struct tagIPPORT { int x_14_1_1; BOOL x_14_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_14_1_3; unsigned short x_14_1_4; } x14; unsigned int x15; int x16; int x17; int x18; int x19; unsigned int x20; unsigned short x21; int x22; int x23; int x24; struct tagCONNRESULT {} *x25; }*)arg2 didReceiveICEPacket:(bool)arg3 didUseRelay:(bool)arg4 secretKey:(struct __CFData { }*)arg5 skeResult:(int)arg6;
- (void)cleanupSession:(id)arg1 didRemoteCancel:(bool)arg2;
- (void)cleanupSession:(id)arg1 withDelay:(unsigned long long)arg2;
- (void)threadSafeCleanupSession:(id)arg1;
- (void)cleanupProc:(id)arg1;
- (void)markUnfinishedSessions;
- (bool)matchesIncomingConnectionResult:(struct tagCONNRESULT { unsigned int x1; int x2; int x3; unsigned int x4; int x5; int x6; unsigned short x7; unsigned short x8; struct tagIPPORT { int x_9_1_1; BOOL x_9_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_9_1_3; unsigned short x_9_1_4; } x9; struct tagIPPORT { int x_10_1_1; BOOL x_10_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_10_1_3; unsigned short x_10_1_4; } x10; struct tagIPPORT { int x_11_1_1; BOOL x_11_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_11_1_3; unsigned short x_11_1_4; } x11; struct tagIPPORT { int x_12_1_1; BOOL x_12_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_12_1_3; unsigned short x_12_1_4; } x12; struct tagIPPORT { int x_13_1_1; BOOL x_13_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_13_1_3; unsigned short x_13_1_4; } x13; struct tagIPPORT { int x_14_1_1; BOOL x_14_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_14_1_3; unsigned short x_14_1_4; } x14; unsigned int x15; int x16; int x17; int x18; int x19; unsigned int x20; unsigned short x21; int x22; int x23; int x24; struct tagCONNRESULT {} *x25; }*)arg1;
- (bool)hasSessionWaitingForSIPInvite;
- (bool)matchesParticipantID:(id)arg1;
- (unsigned int)callIDForOpenSessionWithParticipantID:(id)arg1;
- (bool)matchesCallID:(unsigned int)arg1;
- (int)sipCallbackNotification:(int)arg1 callID:(unsigned int)arg2 msgIn:(const char *)arg3 msgOut:(char *)arg4 optional:(void*)arg5 confIndex:(int*)arg6;
- (id)loopbackSessionWaitingForSIPInvite;
- (id)sessionForIncomingConnectionResult:(struct tagCONNRESULT { unsigned int x1; int x2; int x3; unsigned int x4; int x5; int x6; unsigned short x7; unsigned short x8; struct tagIPPORT { int x_9_1_1; BOOL x_9_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_9_1_3; unsigned short x_9_1_4; } x9; struct tagIPPORT { int x_10_1_1; BOOL x_10_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_10_1_3; unsigned short x_10_1_4; } x10; struct tagIPPORT { int x_11_1_1; BOOL x_11_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_11_1_3; unsigned short x_11_1_4; } x11; struct tagIPPORT { int x_12_1_1; BOOL x_12_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_12_1_3; unsigned short x_12_1_4; } x12; struct tagIPPORT { int x_13_1_1; BOOL x_13_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_13_1_3; unsigned short x_13_1_4; } x13; struct tagIPPORT { int x_14_1_1; BOOL x_14_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_14_1_3; unsigned short x_14_1_4; } x14; unsigned int x15; int x16; int x17; int x18; int x19; unsigned int x20; unsigned short x21; int x22; int x23; int x24; struct tagCONNRESULT {} *x25; }*)arg1;
- (id)sessionForIncomingParticipantID:(id)arg1;
- (bool)onPlaySound:(char *)arg1 numBytes:(int)arg2 numSamples:(int)arg3 timeStamp:(unsigned int)arg4 averagePower:(float)arg5;
- (bool)onCaptureSound:(char *)arg1 numBytes:(int)arg2 numSamples:(int)arg3 timeStamp:(unsigned int)arg4 timeStampDelta:(int)arg5 bufferedSamples:(int)arg6 hostTime:(double)arg7 averagePower:(float)arg8 voiceActivity:(unsigned int)arg9;
- (float)powerIntToFloat:(unsigned char)arg1;
- (void)updateMeters:(unsigned short)arg1;
- (void)updateMeter:(unsigned char)arg1 forParticipant:(id)arg2 atIndex:(unsigned int)arg3;
- (int)pullDecodedMeshMode:(char *)arg1 timestamp:(unsigned int)arg2 numBytes:(int)arg3 numSamples:(int)arg4;
- (int)pullDecodedAsFocusClient:(char *)arg1 timestamp:(unsigned int)arg2 numBytes:(int)arg3 numSamples:(int)arg4;
- (int)pullDecodedAsFocus:(char *)arg1 timestamp:(unsigned int)arg2 numBytes:(int)arg3 numSamples:(int)arg4;
- (void)calculateMixingArrays:(unsigned int*)arg1 talkingMask:(unsigned int)arg2;
- (unsigned int)calculateTalkingMaskAtTimeStamp:(unsigned int)arg1 samples:(char *)arg2 numBytes:(int)arg3 numSamples:(int)arg4;
- (unsigned int)pruneQuietestPeers:(unsigned int)arg1 talking:(unsigned int)arg2 mask:(unsigned int)arg3 meters:(char *)arg4;
- (bool)recvSamplesForSession:(id)arg1 samples:(char *)arg2 numBytes:(int)arg3 numSamples:(int)arg4 storeTimestamp:(unsigned int)arg5;
- (int)captureMeshMode:(char *)arg1 numBytes:(int)arg2 numSamples:(int)arg3 timeStamp:(unsigned int)arg4 bufferedSamples:(int)arg5 hostTime:(double)arg6;
- (int)captureAsFocusClient:(char *)arg1 numBytes:(int)arg2 numSamples:(int)arg3 timeStamp:(unsigned int)arg4 averagePower:(unsigned char)arg5;
- (int)captureAsFocus:(char *)arg1 numBytes:(int)arg2 numSamples:(int)arg3 timeStamp:(unsigned int)arg4 timeStampDelta:(int)arg5 averagePower:(unsigned char)arg6;
- (unsigned char)powerFloatToInt:(float)arg1;
- (bool)updateSpeaking:(unsigned int)arg1 timeStamp:(unsigned int)arg2;
- (int)tryrdlock;
- (void)setIsValid:(bool)arg1;
- (id)conferenceCaptureRule;
- (bool)shouldPrioritizeParticipantIDForSIPInvite;
- (void)setDisableVAD:(bool)arg1;
- (bool)disableVAD;
- (bool)isUsingSuppression;
- (id)speakingDelegate;
- (void)setDownstreamBandwidth:(int)arg1;
- (int)downstreamBandwidth;
- (void)setUpstreamBandwidth:(int)arg1;
- (int)upstreamBandwidth;
- (unsigned int)preferredCodec;
- (int)chatMode;
- (bool)hasMic;
- (void)setHasMic:(bool)arg1;
- (void)setCallReportProtobuf:(unsigned int)arg1 withProtobufData:(id)arg2 forMetricID:(long long)arg3;
- (int)conferenceOperatingMode;
- (bool)shouldReinitializeCallWithDuration:(double)arg1 forCallID:(unsigned int)arg2;
- (void)connectionBlobForParticipantID:(id)arg1 callID:(unsigned int)arg2 block:(id)arg3 queue:(id)arg4 caller:(id)arg5;
- (double)packetLossRateForCallID:(unsigned int)arg1;
- (id)openSessionForParticipant:(id)arg1;
- (void)stopCallID:(unsigned int)arg1 didRemoteCancel:(bool)arg2 error:(id)arg3;
- (id)sessionForParticipantID:(id)arg1;
- (bool)startConnectionWithParticipantID:(id)arg1 callID:(unsigned int)arg2 usingInviteData:(id)arg3 isCaller:(bool)arg4 relayResponseDict:(id)arg5 didOriginateRelayRequest:(bool)arg6 capabilities:(id)arg7 idsSocket:(int)arg8 error:(id*)arg9;
- (void)setConferenceOperatingMode:(int)arg1;
- (void)notifyDelegateOfLocalVariablesChange;
- (void)setIsUsingSuppression:(bool)arg1;
- (void)rdlock;
- (void)wrlock;
- (int)natTypeForCallSessions:(const char *)arg1;
- (id)newSessionWithDeviceRole:(int)arg1;
- (void)cleanupQueues;
- (void)session:(id)arg1 didReceiveARPLData:(id)arg2 fromCallID:(unsigned int)arg3;
- (void)session:(id)arg1 sendIPChangeRequest:(id)arg2 withCallID:(unsigned int)arg3;
- (void)session:(id)arg1 remoteAudioEnabled:(bool)arg2 withCallID:(unsigned int)arg3;
- (void)setBWEOptions:(bool)arg1 UseNewBWEMode:(bool)arg2 FakeLargeFrameMode:(bool)arg3 ProbingSenderLog:(bool)arg4;
- (bool)didDetectBandwidth:(bool)arg1 upstreamBandwidth:(int)arg2 downstreamBandwidth:(int)arg3;
- (void)session:(id)arg1 localAudioEnabled:(bool)arg2 withCallID:(unsigned int)arg3 error:(id)arg4;
- (void)remoteAudioDidPause:(bool)arg1 callID:(unsigned int)arg2;
- (void)remoteVideoDidPause:(bool)arg1 callID:(unsigned int)arg2;
- (void)session:(id)arg1 didStopWithDelay:(long long)arg2 error:(id)arg3;
- (void)session:(id)arg1 didStopWithError:(id)arg2;
- (void)session:(id)arg1 didStart:(bool)arg2 connectionType:(unsigned int)arg3 localUseCell:(unsigned int)arg4 remoteUseCell:(unsigned int)arg5 error:(id)arg6;
- (void)session:(id)arg1 withCallID:(unsigned int)arg2 networkHint:(bool)arg3;
- (void)session:(id)arg1 cancelRelayRequest:(id)arg2;
- (void)closeConnectionForSession:(id)arg1 withCallID:(unsigned int)arg2;
- (void)session:(id)arg1 didReceiveData:(id)arg2 withCallID:(unsigned int)arg3;
- (void)setShouldTimeoutPackets:(bool)arg1;
- (bool)shouldTimeoutPackets;
- (void)setUseCompressedConnectionData:(bool)arg1;
- (bool)useCompressedConnectionData;
- (id)rtChannel;
- (bool)isGKVoiceChat;
- (void)setIsGKVoiceChat:(bool)arg1;
- (void)setPacketsPerBundle:(int)arg1;
- (id)inviteDataForParticipantID:(id)arg1 callID:(unsigned int*)arg2 remoteInviteData:(id)arg3 nonCellularCandidateTimeout:(double)arg4 error:(id*)arg5;
- (bool)startConnectionWithParticipantID:(id)arg1 callID:(unsigned int)arg2 usingInviteData:(id)arg3 isCaller:(bool)arg4 capabilities:(id)arg5 idsSocket:(int)arg6 error:(id*)arg7;
- (id)qualityDelegate;
- (void)setQualityDelegate:(id)arg1;
- (void)handlePrimaryConnChange:(struct tagCONNRESULT { unsigned int x1; int x2; int x3; unsigned int x4; int x5; int x6; unsigned short x7; unsigned short x8; struct tagIPPORT { int x_9_1_1; BOOL x_9_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_9_1_3; unsigned short x_9_1_4; } x9; struct tagIPPORT { int x_10_1_1; BOOL x_10_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_10_1_3; unsigned short x_10_1_4; } x10; struct tagIPPORT { int x_11_1_1; BOOL x_11_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_11_1_3; unsigned short x_11_1_4; } x11; struct tagIPPORT { int x_12_1_1; BOOL x_12_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_12_1_3; unsigned short x_12_1_4; } x12; struct tagIPPORT { int x_13_1_1; BOOL x_13_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_13_1_3; unsigned short x_13_1_4; } x13; struct tagIPPORT { int x_14_1_1; BOOL x_14_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_14_1_3; unsigned short x_14_1_4; } x14; unsigned int x15; int x16; int x17; int x18; int x19; unsigned int x20; unsigned short x21; int x22; int x23; int x24; struct tagCONNRESULT {} *x25; }*)arg1 oldResult:(struct tagCONNRESULT { unsigned int x1; int x2; int x3; unsigned int x4; int x5; int x6; unsigned short x7; unsigned short x8; struct tagIPPORT { int x_9_1_1; BOOL x_9_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_9_1_3; unsigned short x_9_1_4; } x9; struct tagIPPORT { int x_10_1_1; BOOL x_10_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_10_1_3; unsigned short x_10_1_4; } x10; struct tagIPPORT { int x_11_1_1; BOOL x_11_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_11_1_3; unsigned short x_11_1_4; } x11; struct tagIPPORT { int x_12_1_1; BOOL x_12_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_12_1_3; unsigned short x_12_1_4; } x12; struct tagIPPORT { int x_13_1_1; BOOL x_13_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_13_1_3; unsigned short x_13_1_4; } x13; struct tagIPPORT { int x_14_1_1; BOOL x_14_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_14_1_3; unsigned short x_14_1_4; } x14; unsigned int x15; int x16; int x17; int x18; int x19; unsigned int x20; unsigned short x21; int x22; int x23; int x24; struct tagCONNRESULT {} *x25; }*)arg2;
- (void)handleCellTechChange:(int)arg1 cellularMaxPktLen:(unsigned short)arg2;
- (void)session:(id)arg1 inititiateRelayRequest:(id)arg2;
- (int)packetsPerBundle;
- (void)session:(id)arg1 sendRelayResponse:(id)arg2;
- (void)didChangeLocalVariablesForSession:(id)arg1;
- (void)session:(id)arg1 packMeters:(char *)arg2 withLength:(char *)arg3;
- (void)session:(id)arg1 receivedNoPacketsForSeconds:(double)arg2;
- (void)session:(id)arg1 remoteMediaStalled:(bool)arg2;
- (void)session:(id)arg1 didChangeRemoteScreenAttributes:(id)arg2;
- (void)session:(id)arg1 withCallID:(unsigned int)arg2 videoIsDegraded:(bool)arg3 isRemote:(bool)arg4;
- (void)getNSError:(id*)arg1 code:(long long)arg2 detailedCode:(long long)arg3 filePath:(id)arg4 description:(id)arg5 reason:(id)arg6;
- (void)getNSError:(id*)arg1 code:(long long)arg2 detailedCode:(long long)arg3 returnCode:(long long)arg4 filePath:(id)arg5 description:(id)arg6 reason:(id)arg7;
- (void)NATTypeDictionaryUpdated:(id)arg1;
- (void)sendARPLData:(id)arg1 toCallID:(unsigned int)arg2;
- (void)processRelayUpdate:(unsigned int)arg1 updateDict:(id)arg2 didOriginateRequest:(bool)arg3;
- (void)processRelayRequestResponse:(unsigned int)arg1 responseDict:(id)arg2 didOriginateRequest:(bool)arg3;
- (void)updateCapabilities:(id)arg1 forCallID:(unsigned int)arg2;
- (bool)setPauseVideo:(bool)arg1 callID:(unsigned int)arg2 error:(id*)arg3;
- (bool)setPauseAudio:(bool)arg1 callID:(unsigned int)arg2 error:(id*)arg3;
- (int)natType;
- (bool)isSpeakerPhoneEnabled;
- (void)setEnableSpeakerPhone:(bool)arg1;
- (id)statsForCallID:(unsigned int)arg1;
- (double)roundTripTimeForCallID:(unsigned int)arg1;
- (double)localPacketLossRateForCallID:(unsigned int)arg1;
- (double)remotePacketLossRateForCallID:(unsigned int)arg1;
- (struct CGSize { double x1; double x2; })remoteFrameSizeForCallID:(unsigned int)arg1;
- (int)localFrameWidth;
- (int)localFrameHeight;
- (double)remoteBitrateForCallID:(unsigned int)arg1;
- (double)remoteFramerateForCallID:(unsigned int)arg1;
- (double)localBitrateForCallID:(unsigned int)arg1;
- (double)localFramerateForCallID:(unsigned int)arg1;
- (unsigned int)setRemoteVideoDestination:(void*)arg1 facing:(bool)arg2;
- (float)inputMeterLevel;
- (bool)getIsVideoPaused:(bool*)arg1 callID:(unsigned int)arg2 error:(id*)arg3;
- (bool)getIsAudioPaused:(bool*)arg1 callID:(unsigned int)arg2 error:(id*)arg3;
- (float)outputMeterLevel;
- (void)setOutputFrequencyMeteringEnabled:(bool)arg1;
- (bool)isOutputFrequencyMeteringEnabled;
- (void)setInputFrequencyMeteringEnabled:(bool)arg1;
- (bool)isInputFrequencyMeteringEnabled;
- (void)setInputMeteringEnabled:(bool)arg1;
- (bool)isInputMeteringEnabled;
- (void)setOutputMeteringEnabled:(bool)arg1;
- (bool)isOutputMeteringEnabled;
- (void)processRemoteIPChange:(id)arg1 callID:(unsigned int)arg2;
- (void)receivedRealTimeData:(id)arg1 fromParticipantID:(id)arg2;
- (void)setLastActiveCall:(unsigned int)arg1;
- (unsigned int)lastActiveCall;
- (void)setCallReport:(unsigned int)arg1 withReport:(id)arg2;
- (void)remoteCancelledCallID:(unsigned int)arg1;
- (bool)startConnectionWithParticipantID:(id)arg1 callID:(unsigned int)arg2 oldCallID:(unsigned int)arg3 usingInviteData:(id)arg4 isCaller:(bool)arg5 relayResponseDict:(id)arg6 didOriginateRelayRequest:(bool)arg7 capabilities:(id)arg8 idsSocket:(int)arg9 error:(id*)arg10;
- (void)setRequiresWifi:(bool)arg1;
- (bool)requiresWifi;
- (double)networkQualityForCallID:(unsigned int)arg1;
- (void)setSessionID:(id)arg1 callID:(unsigned int)arg2;
- (void)setPeerCN:(id)arg1 callID:(unsigned int)arg2;
- (id)callMetadataForCallID:(unsigned int)arg1;
- (void)inviteDataForParticipantID:(id)arg1 callID:(unsigned int)arg2 remoteInviteData:(id)arg3 nonCellularCandidateTimeout:(unsigned long long)arg4 block:(id)arg5 queue:(id)arg6 caller:(id)arg7;
- (void)sendData:(id)arg1 toCallID:(unsigned int)arg2 encrypted:(bool)arg3;
- (void)setUseViceroyBlobFormat:(bool)arg1;
- (bool)useViceroyBlobFormat;
- (void)cleanupManager;
- (void)stopAllCalls:(id)arg1;
- (void)warmupForCall:(int)arg1 deviceRole:(int)arg2;
- (unsigned int)talkingPeersLimit;
- (void)forceNoICE:(bool)arg1;
- (void)setConferenceVolume:(float)arg1;
- (float)conferenceVolume;
- (id)connectionBlobForParticipantID:(id)arg1 callID:(unsigned int*)arg2 error:(id*)arg3;
- (void)setRTChannel:(id)arg1;
- (void)setShouldPrioritizeParticipantIDForSIPInvite:(bool)arg1;
- (void)setPreferredCodec:(unsigned int)arg1;
- (void)setSendAudio:(bool)arg1 forCallID:(unsigned int)arg2;
- (bool)shouldSendAudioForCallID:(unsigned int)arg1;
- (void)setTalkingPeersLimit:(unsigned int)arg1;
- (void)setSpeakingDelegate:(id)arg1;
- (void)updatedConnectedPeers:(id)arg1;
- (void)updatedMutedPeers:(id)arg1 forParticipantID:(id)arg2;
- (void)setIsFocus:(bool)arg1;
- (id)currentFocus;
- (void)setChatMode:(int)arg1;
- (void)setCurrentFocus:(id)arg1;
- (int)stateForCallID:(unsigned int)arg1;
- (bool)matchesOpenSessionForParticipantID:(id)arg1;
- (bool)isFocus;
- (void)stopCallID:(unsigned int)arg1;
- (unsigned int)initializeNewCallWithDeviceRole:(int)arg1;
- (void)setMicrophoneMuted:(bool)arg1;
- (bool)isMicrophoneMuted;
- (id)init;
- (void)setDelegate:(id)arg1;
- (bool)isValid;
- (void)unlock;
- (id)delegate;
- (void)dealloc;
- (bool)setActive:(bool)arg1;

@end
