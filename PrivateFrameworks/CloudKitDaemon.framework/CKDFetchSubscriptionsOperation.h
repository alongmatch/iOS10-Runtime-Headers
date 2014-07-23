/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray;

@interface CKDFetchSubscriptionsOperation : CKDDatabaseOperation  {
    bool_isFetchAllSubscriptionsOperation;
    NSArray *_subscriptions;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _subscriptionFetchedProgressBlock;

    NSArray *_subscriptionIDs;
}

@property(retain) NSArray * subscriptions;
@property(copy) id subscriptionFetchedProgressBlock;
@property(retain) NSArray * subscriptionIDs;
@property bool isFetchAllSubscriptionsOperation;


- (void)_handleSubscriptionFetched:(id)arg1 withID:(id)arg2 responseCode:(id)arg3;
- (id)subscriptionFetchedProgressBlock;
- (void)setSubscriptionFetchedProgressBlock:(id)arg1;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (id)subscriptions;
- (void)setSubscriptions:(id)arg1;
- (bool)isFetchAllSubscriptionsOperation;
- (void)setSubscriptionIDs:(id)arg1;
- (id)subscriptionIDs;
- (void)setIsFetchAllSubscriptionsOperation:(bool)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)main;
- (void).cxx_destruct;

@end
