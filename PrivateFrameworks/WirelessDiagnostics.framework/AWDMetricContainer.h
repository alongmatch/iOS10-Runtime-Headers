/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/WirelessDiagnostics.framework/WirelessDiagnostics
 */

@class PBCodable;

@interface AWDMetricContainer : NSObject  {
    PBCodable *_metric;
    unsigned int _metricId;
}

@property(retain) PBCodable * metric;
@property(readonly) unsigned int metricId;


- (unsigned int)metricId;
- (id)metric;
- (id)initWithMetricId:(unsigned int)arg1;
- (void)setMetric:(id)arg1;
- (void)dealloc;

@end
