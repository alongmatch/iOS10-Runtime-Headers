/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSString, EKAvailabilityCache, NSSet, NSDate, NSNumber, EKSourceConstraints;

@interface EKSource : EKObject  {
    EKAvailabilityCache *_availabilityCache;
    NSDate *_timeOfLastExternalIdentificationCache;
    NSString *_cachedHost;
    long long _cachedPort;
    NSSet *_cachedOwnerAddresses;
}

@property(readonly) NSString * sourceIdentifier;
@property(readonly) int sourceType;
@property(copy) NSString * title;
@property(readonly) NSSet * calendars;
@property(copy) NSNumber * defaultAlarmOffset;
@property(copy) NSString * externalID;
@property(copy) NSString * externalModificationTag;
@property(getter=isEnabled,readonly) bool enabled;
@property(readonly) bool isFacebookSource;
@property(readonly) EKSourceConstraints * constraints;
@property(readonly) int displayOrderForNewCalendar;
@property bool onlyCreatorCanModify;
@property(readonly) bool wantsCommentPromptWhenDeclining;
@property(readonly) long long preferredEventPrivateValue;
@property(readonly) long long strictestEventPrivateValue;
@property(readonly) NSString * serverHost;
@property(readonly) long long serverPort;
@property(readonly) NSSet * ownerAddresses;
@property(readonly) EKAvailabilityCache * availabilityCache;
@property(readonly) NSSet * allCalendars;
@property(retain) NSDate * timeOfLastExternalIdentificationCache;
@property(retain) NSString * cachedHost;
@property long long cachedPort;
@property(retain) NSSet * cachedOwnerAddresses;

+ (id)sourceWithEventStore:(id)arg1;

- (id)ownerAddresses;
- (id)serverHost;
- (id)externalID;
- (void)setExternalID:(id)arg1;
- (id)availabilityCache;
- (bool)wantsCommentPromptWhenDeclining;
- (int)displayOrderForNewCalendar;
- (void)setOnlyCreatorCanModify:(bool)arg1;
- (void)setDefaultAlarmOffset:(id)arg1;
- (id)defaultAlarmOffset;
- (id)cachedOwnerAddresses;
- (long long)cachedPort;
- (id)cachedHost;
- (void)_cacheExternalIdentificationIfNeeded;
- (void)setTimeOfLastExternalIdentificationCache:(id)arg1;
- (void)setCachedOwnerAddresses:(id)arg1;
- (void)setCachedPort:(long long)arg1;
- (void)setCachedHost:(id)arg1;
- (id)timeOfLastExternalIdentificationCache;
- (id)allCalendars;
- (bool)onlyCreatorCanModify;
- (bool)isFacebookSource;
- (long long)strictestEventPrivateValue;
- (long long)preferredEventPrivateValue;
- (id)_persistentItem;
- (void)setExternalModificationTag:(id)arg1;
- (id)externalModificationTag;
- (id)readWriteCalendarsForEntityType:(unsigned long long)arg1;
- (id)calendars;
- (id)calendarsForEntityType:(unsigned long long)arg1;
- (bool)commit:(id*)arg1;
- (int)sourceType;
- (bool)isEnabled;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)sourceIdentifier;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)constraints;
- (bool)remove:(id*)arg1;
- (long long)serverPort;

@end
