/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class NSData, NSString, NSArray, GKTurnBasedMatchInternal, NSDate, GKTurnBasedParticipant, GKGame, GKPlayer;

@interface GKTurnBasedMatch : NSObject <GKSessionDelegate> {
    unsigned int _state;
    GKTurnBasedMatchInternal *_internal;
    NSArray *_participants;
    NSArray *_exchanges;
}

@property(retain,readonly) NSString * matchID;
@property(retain,readonly) NSDate * creationDate;
@property(retain,readonly) NSArray * participants;
@property(readonly) long long status;
@property(retain) GKTurnBasedParticipant * currentParticipant;
@property(retain,readonly) NSData * matchData;
@property(copy) NSString * message;
@property unsigned long long matchDataMaximumSize;
@property(retain,readonly) NSArray * exchanges;
@property(retain,readonly) NSArray * activeExchanges;
@property(retain,readonly) NSArray * completedExchanges;
@property(readonly) unsigned long long exchangeDataMaximumSize;
@property(readonly) unsigned long long exchangeMaxInitiatedExchangesPerPlayer;
@property(retain) GKTurnBasedMatchInternal * internal;
@property(copy) NSDate * lastTurnDate;
@property(readonly) long long turnNumber;
@property(readonly) NSDate * dateSortKey;
@property(readonly) GKTurnBasedParticipant * previousParticipant;
@property(readonly) GKTurnBasedParticipant * previousParticipantOrFirstKnownPlayer;
@property(readonly) GKTurnBasedParticipant * playingWithParticipantOrFirstKnownPlayer;
@property(readonly) GKTurnBasedParticipant * localPlayerParticipant;
@property(readonly) GKPlayer * showcasePlayer;
@property(readonly) GKTurnBasedParticipant * firstWinnerOrTiedOrLastLoser;
@property(readonly) GKPlayer * currentPlayer;
@property(retain) NSString * bundleID;
@property(retain) NSString * bundleVersion;
@property unsigned int state;
@property(readonly) bool isMyTurn;
@property(readonly) bool localPlayerHasRecentTurn;
@property(readonly) GKGame * game;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (void)findMatchForRequest:(id)arg1 withCompletionHandler:(id)arg2;
+ (void)loadMatchWithID:(id)arg1 withCompletionHandler:(id)arg2;
+ (void)loadTurnBasedMatchSummaries:(id)arg1;
+ (void)loadMatchesWithCompletionHandler:(id)arg1;
+ (id)_localizableMessageWithKey:(id)arg1 arguments:(id)arg2 defaultMessage:(id)arg3;
+ (void)loadTurnBasedMatchDetailsForMatchIDs:(id)arg1 loadGameData:(bool)arg2 withCompletionHandler:(id)arg3;
+ (id)matchesWithInternalRepresentations:(id)arg1;
+ (void)loadTurnBasedMatchSummariesIncludingCompatibleBundleID:(bool)arg1 withCompletionHandler:(id)arg2;
+ (void)loadMatchesIncludingCompatibleBundleID:(bool)arg1 withCompletionHandler:(id)arg2;
+ (void)getTurnBasedBadgeCountWithHandler:(id)arg1;
+ (void)loadTurnBasedMatchWithDetailsForMatchID:(id)arg1 withCompletionHandler:(id)arg2;
+ (id)keyPathsForValuesAffectingStatus;
+ (bool)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;

- (id)participants;
- (void)sendReminderToParticipants:(id)arg1 localizableMessageKey:(id)arg2 arguments:(id)arg3 completionHandler:(id)arg4;
- (void)sendExchangeToParticipants:(id)arg1 data:(id)arg2 localizableMessageKey:(id)arg3 arguments:(id)arg4 timeout:(double)arg5 completionHandler:(id)arg6;
- (void)saveMergedMatchData:(id)arg1 withResolvedExchanges:(id)arg2 completionHandler:(id)arg3;
- (void)saveCurrentTurnWithMatchData:(id)arg1 completionHandler:(id)arg2;
- (void)endMatchInTurnWithMatchData:(id)arg1 completionHandler:(id)arg2;
- (void)participantQuitOutOfTurnWithOutcome:(long long)arg1 withCompletionHandler:(id)arg2;
- (void)participantQuitInTurnWithOutcome:(long long)arg1 nextParticipant:(id)arg2 matchData:(id)arg3 completionHandler:(id)arg4;
- (void)endTurnWithNextParticipant:(id)arg1 matchData:(id)arg2 completionHandler:(id)arg3;
- (void)loadMatchDataWithCompletionHandler:(id)arg1;
- (void)removeWithCompletionHandler:(id)arg1;
- (id)completedExchanges;
- (id)showcasePlayer;
- (bool)localPlayerHasRecentTurn;
- (bool)isMyTurn;
- (void)endMatchInTurnWithMatchData:(id)arg1 scores:(id)arg2 achievements:(id)arg3 completionHandler:(id)arg4;
- (void)participantQuitInTurnWithOutcome:(long long)arg1 nextParticipants:(id)arg2 turnTimeout:(double)arg3 matchData:(id)arg4 completionHandler:(id)arg5;
- (id)indexesForParticipants:(id)arg1;
- (void)endTurnWithNextParticipants:(id)arg1 turnTimeout:(double)arg2 matchData:(id)arg3 completionHandler:(id)arg4;
- (void)declineInviteWithCompletionHandler:(id)arg1;
- (id)playingWithParticipantOrFirstKnownPlayer;
- (id)previousParticipantOrFirstKnownPlayer;
- (id)firstWinnerOrTiedOrLastLoser;
- (id)previousParticipant;
- (void)setCurrentParticipant:(id)arg1;
- (id)dateSortKey;
- (unsigned long long)matchDataMaximumSize;
- (id)localPlayerParticipant;
- (id)currentParticipant;
- (id)activeExchanges;
- (void)setLocalizableMessageWithKey:(id)arg1 arguments:(id)arg2;
- (id)currentPlayer;
- (id)exchanges;
- (id)_exchangesForInternalRepresentation:(id)arg1 participants:(id)arg2;
- (id)_participantsForInternalRepresentation:(id)arg1;
- (void)_updateWithInternal:(id)arg1;
- (id)exchangeForID:(id)arg1;
- (void)acceptInviteWithCompletionHandler:(id)arg1;
- (void)rematchWithCompletionHandler:(id)arg1;
- (unsigned long long)exchangeMaxInitiatedExchangesPerPlayer;
- (unsigned long long)exchangeDataMaximumSize;
- (id)game;
- (id)internal;
- (void)setInternal:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (void)setMessage:(id)arg1;
- (id)message;
- (long long)status;
- (id)init;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (long long)compare:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setState:(unsigned int)arg1;
- (unsigned int)state;
- (void)dealloc;
- (id)description;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;

@end
