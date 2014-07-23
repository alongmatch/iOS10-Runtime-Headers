/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSString, NSTimeZone, NSDate;

@interface EKEventPredicate : EKPredicate <EKDefaultPropertiesLoading, NSSecureCoding> {
    NSDate *_startDate;
    NSDate *_endDate;
    NSString *_uuid;
    NSTimeZone *_timeZone;
    NSString *_title;
    bool_shouldLoadDefaultProperties;
}

@property(readonly) NSDate * startDate;
@property(readonly) NSDate * endDate;
@property(readonly) NSString * eventUUID;
@property(readonly) NSTimeZone * timeZone;
@property(readonly) NSString * title;
@property(readonly) bool shouldLoadDefaultProperties;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)predicateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4;
+ (id)predicateWithStartDate:(id)arg1 title:(id)arg2 calendars:(id)arg3;
+ (id)predicateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 eventUUID:(id)arg4 calendars:(id)arg5;
+ (id)predicateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4 loadDefaultProperties:(bool)arg5;
+ (bool)supportsSecureCoding;

- (bool)shouldLoadDefaultProperties;
- (id)eventUUID;
- (id)initWithStartDate:(id)arg1 title:(id)arg2 calendars:(id)arg3;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 eventUUID:(id)arg4 calendars:(id)arg5;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4 loadDefaultProperties:(bool)arg5;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4;
- (id)defaultPropertiesToLoad;
- (id)endDate;
- (id)startDate;
- (bool)evaluateWithObject:(id)arg1;
- (id)title;
- (id)timeZone;
- (bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)predicateFormat;

@end
