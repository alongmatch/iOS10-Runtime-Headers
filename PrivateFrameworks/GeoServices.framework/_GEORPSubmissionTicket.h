/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString, GEORPProblemRequest, GEOMapServiceTraits, GEORPProblem, <GEOMapItemPrivate>;

@interface _GEORPSubmissionTicket : NSObject <GEOMapServiceProblemReportTicket> {
    GEORPProblem *_problem;
    <GEOMapItemPrivate> *_place;
    GEORPProblemRequest *_problemRequest;
    GEOMapServiceTraits *_traits;
    bool_canceled;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) GEOMapServiceTraits * traits;


- (id)initWithProblem:(id)arg1 placeForProblemContext:(id)arg2 traits:(id)arg3;
- (void)submitWithHandler:(id)arg1 networkActivity:(id)arg2;
- (id)traits;
- (void)cancel;
- (void)dealloc;

@end
