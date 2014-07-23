/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSObject<OS_dispatch_queue>, NSMutableArray, NSString;

@interface SSOperationProgress : NSObject <SSXPCCoding, NSCopying> {
    bool_canPause;
    double _changeRate;
    long long _currentValue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    double _estimatedTimeRemaining;
    long long _maxValue;
    long long _normalizedCurrentValue;
    long long _normalizedMaxValue;
    long long _operationType;
    NSMutableArray *_snapshotTimes;
    NSMutableArray *_snapshotValues;
    long long _units;
}

@property bool canPause;
@property long long operationType;
@property double changeRate;
@property long long currentValue;
@property double estimatedTimeRemaining;
@property long long maxValue;
@property long long units;
@property long long normalizedCurrentValue;
@property long long normalizedMaxValue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setChangeRate:(double)arg1;
- (void)_updateStatisticsFromSnapshots;
- (long long)maxValue;
- (double)changeRate;
- (double)estimatedTimeRemaining;
- (long long)normalizedMaxValue;
- (long long)normalizedCurrentValue;
- (void)setOperationType:(long long)arg1;
- (void)setNormalizedMaxValue:(long long)arg1;
- (void)setNormalizedCurrentValue:(long long)arg1;
- (void)resetSnapshots;
- (void)setEstimatedTimeRemaining:(double)arg1;
- (void)setCurrentValue:(long long)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (long long)units;
- (void)setUnits:(long long)arg1;
- (void)setCanPause:(bool)arg1;
- (bool)canPause;
- (long long)currentValue;
- (long long)operationType;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setMaxValue:(long long)arg1;
- (void)snapshot;

@end
