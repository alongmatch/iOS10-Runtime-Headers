/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDActionSetEvent : HMDLogEvent <HMDAWDLogEvent> {
    NSUUID * _actionSetUUID;
    NSString * _bundleId;
    NSUUID * _transactionId;
    unsigned long long  _triggerSource;
}

@property (nonatomic, readonly) NSUUID *actionSetUUID;
@property (nonatomic, readonly) NSString *bundleId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *transactionId;
@property (nonatomic, readonly) unsigned long long triggerSource;

+ (id)actionSetTriggered:(id)arg1 source:(unsigned long long)arg2 bundleId:(id)arg3 transactionId:(id)arg4;
+ (void)initialize;
+ (id)stringForSource:(unsigned long long)arg1;
+ (id)uuid;

- (void).cxx_destruct;
- (unsigned int)AWDMessageType;
- (id)actionSetUUID;
- (id)bundleId;
- (id)initWithActionSet:(id)arg1 source:(unsigned long long)arg2 bundleId:(id)arg3 transactionId:(id)arg4;
- (id)metricForAWD;
- (id)transactionId;
- (unsigned long long)triggerSource;

@end