/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSMutableDictionary, NSMutableSet;

@interface CKDMarkNotificationsReadOperation : CKDOperation  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _notificationMarkedRead;

    NSArray *_notificationIDs;
    NSMutableDictionary *_errorByNotificationID;
    NSMutableSet *_successfulNotificationIDs;
}

@property(copy) id notificationMarkedRead;
@property(retain) NSArray * notificationIDs;
@property(retain) NSMutableDictionary * errorByNotificationID;
@property(retain) NSMutableSet * successfulNotificationIDs;


- (void)setSuccessfulNotificationIDs:(id)arg1;
- (void)setErrorByNotificationID:(id)arg1;
- (id)notificationMarkedRead;
- (void)_handleNotificationID:(id)arg1 withResponse:(id)arg2;
- (id)errorByNotificationID;
- (id)successfulNotificationIDs;
- (void)setNotificationMarkedRead:(id)arg1;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)setNotificationIDs:(id)arg1;
- (id)notificationIDs;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)main;
- (void).cxx_destruct;

@end
