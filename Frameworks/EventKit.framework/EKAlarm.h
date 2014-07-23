/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSDate, NSString, NSArray, EKAlarm, EKObjectToOneRelation, EKCalendarItem, EKStructuredLocation;

@interface EKAlarm : EKObject <NSCopying> {
    EKObjectToOneRelation *_locationRelation;
}

@property double relativeOffset;
@property(copy) NSDate * absoluteDate;
@property(copy) EKStructuredLocation * structuredLocation;
@property long long proximity;
@property(readonly) bool isAbsolute;
@property(readonly) NSString * UUID;
@property(retain) EKCalendarItem * owner;
@property(copy) NSDate * acknowledgedDate;
@property(readonly) NSString * externalID;
@property(getter=isDefaultAlarm) bool defaultAlarm;
@property(retain) EKAlarm * originalAlarm;
@property(copy) NSArray * snoozedAlarms;
@property(readonly) bool isSnoozedAlarm;
@property(retain) EKObjectToOneRelation * locationRelation;

+ (double)defaultGeofencedReminderRadius;
+ (bool)areLocationsCurrentlyEnabled;
+ (bool)areLocationsAllowed;
+ (id)alarmWithAbsoluteDate:(id)arg1;
+ (bool)areLocationsAvailable;
+ (bool)areLocationsAllowedWithAuthorizationStatus:(int)arg1;
+ (int)_currentAuthorizationStatus;
+ (id)alarmWithRelativeOffset:(double)arg1;

- (id)externalID;
- (void)setStructuredLocation:(id)arg1;
- (void)setProximity:(long long)arg1;
- (bool)validate:(id*)arg1;
- (void)setLocationRelation:(id)arg1;
- (id)locationRelation;
- (bool)isSnoozedAlarm;
- (void)removeSnoozedAlarm:(id)arg1;
- (void)addSnoozedAlarm:(id)arg1;
- (void)setSnoozedAlarms:(id)arg1;
- (id)snoozedAlarms;
- (void)setDefaultAlarm:(bool)arg1;
- (bool)isDefaultAlarm;
- (id)ownerUUID;
- (id)acknowledgedDate;
- (id)originalAlarm;
- (id)_snoozedAlarmsRelation;
- (id)_originalAlarmRelation;
- (id)_locationRelation;
- (id)absoluteDate;
- (void)setAbsoluteDate:(id)arg1;
- (id)initWithRelativeOffset:(double)arg1;
- (id)initWithAbsoluteDate:(id)arg1;
- (bool)rebase;
- (double)relativeOffset;
- (bool)isAbsolute;
- (void)setOriginalAlarm:(id)arg1;
- (void)setRelativeOffset:(double)arg1;
- (void)setAcknowledgedDate:(id)arg1;
- (id)structuredLocation;
- (id)lazyLoadRelationForKey:(id)arg1;
- (long long)proximity;
- (id)owner;
- (id)UUID;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
