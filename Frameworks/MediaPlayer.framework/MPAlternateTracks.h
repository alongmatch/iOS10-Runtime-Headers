/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSString, NSArray, NSMutableDictionary, NSDictionary, MPAVItem, AVPlayerItemLegibleOutput, MPAlternateTextTrack;

@interface MPAlternateTracks : NSObject <AVPlayerItemLegibleOutputPushDelegate> {
    MPAVItem *_item;
    NSDictionary *_alternateTracks;
    NSMutableDictionary *_trackChangeDictionary;
    bool_disableAlternateTextTrackRendering;
    AVPlayerItemLegibleOutput *_legibleOutput;
    MPAlternateTextTrack *_currentTextTrack;
    NSArray *_outOfBandTextTracks;
}

@property(getter=isLoaded,readonly) bool loaded;
@property(retain) NSArray * outOfBandTextTracks;
@property bool disableAlternateTextTrackRendering;
@property(retain) MPAlternateTextTrack * selectedAlternateTextTrack;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)subtitleLanguages;

- (unsigned long long)trackCountForTypes:(unsigned long long)arg1;
- (bool)hasTracksForTypes:(unsigned long long)arg1;
- (void)setTrack:(id)arg1 forType:(unsigned long long)arg2;
- (void)setSelectedAlternateTextTrack:(id)arg1;
- (id)selectedAlternateTextTrack;
- (void)reloadDataWithChangedCaptionDisplayType:(bool)arg1;
- (void)commitTrackChanges;
- (void)beginTrackChanges;
- (id)_keyForTrackType:(unsigned long long)arg1;
- (id)currentTrackForType:(unsigned long long)arg1;
- (unsigned long long)indexOfCurrentTrackForType:(unsigned long long)arg1;
- (id)tracksForType:(unsigned long long)arg1;
- (id)_currentTextTrackAccordingToAVF;
- (void)_suppressAVFSubtitleRendering;
- (void)enableLegibleOutputIfNecessary;
- (void)setDisableAlternateTextTrackRendering:(bool)arg1;
- (bool)disableAlternateTextTrackRendering;
- (void)setOutOfBandTextTracks:(id)arg1;
- (id)outOfBandTextTracks;
- (void)legibleOutput:(id)arg1 didOutputAttributedStrings:(id)arg2 nativeSampleBuffers:(id)arg3 forItemTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (void).cxx_destruct;
- (bool)isLoaded;
- (id)initWithItem:(id)arg1;
- (void)reloadData;

@end
