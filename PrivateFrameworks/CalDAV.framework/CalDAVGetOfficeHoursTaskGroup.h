/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class CoreDAVPropFindTask, ICSDocument, NSURL, <CoreDAVTaskGroupDelegate>, NSString;

@interface CalDAVGetOfficeHoursTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate> {
    NSURL *_inboxURL;
    CoreDAVPropFindTask *_fetchTask;
    ICSDocument *_calendarAvailability;
}

@property <CoreDAVTaskGroupDelegate> * delegate;
@property(retain) ICSDocument * calendarAvailability;
@property(retain) NSURL * inboxURL;
@property(retain) CoreDAVPropFindTask * fetchTask;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)calendarAvailability;
- (id)initWithAccountInfoProvider:(id)arg1 inboxURL:(id)arg2 taskManager:(id)arg3;
- (void)setCalendarAvailability:(id)arg1;
- (void)setInboxURL:(id)arg1;
- (id)inboxURL;
- (void)_finishWithError:(id)arg1;
- (id)fetchTask;
- (void)setFetchTask:(id)arg1;
- (void)startTaskGroup;
- (void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)dealloc;

@end
