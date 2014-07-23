/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSString, <CoreDAVTaskGroupDelegate>, NSURL, ICSDocument;

@interface CalDAVSetOfficeHoursTaskGroup : CoreDAVTaskGroup <CoreDAVPropPatchTaskDelegate> {
    NSURL *_inboxURL;
    ICSDocument *_calendarAvailability;
}

@property <CoreDAVTaskGroupDelegate> * delegate;
@property(retain) NSURL * inboxURL;
@property(retain) ICSDocument * calendarAvailability;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)initWithAccountInfoProvider:(id)arg1 inboxURL:(id)arg2 calendarAvailability:(id)arg3 taskManager:(id)arg4;
- (id)calendarAvailability;
- (void)setCalendarAvailability:(id)arg1;
- (void)setInboxURL:(id)arg1;
- (id)inboxURL;
- (void)propPatchTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)startTaskGroup;
- (void)dealloc;

@end
