/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSURL, NSURLRequest, MKMapItemMetadata;

@interface MKMapItemMetadataRequest : NSObject  {
    MKMapItemMetadata *_businessMetadata;
}

@property(retain) MKMapItemMetadata * businessMetadata;
@property(readonly) NSURL * url;
@property(readonly) NSURLRequest * urlRequest;


- (id)urlRequest;
- (void)setBusinessMetadata:(id)arg1;
- (id)businessMetadata;
- (void)handleData:(id)arg1;
- (void)handleError:(id)arg1;
- (id)url;
- (void).cxx_destruct;

@end
