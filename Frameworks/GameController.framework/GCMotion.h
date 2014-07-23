/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/GameController.framework/GameController
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GCController, CMMotionManager;

@interface GCMotion : NSObject  {
    struct { 
        double x; 
        double y; 
        double z; 
    } _gravity;
    struct { 
        double x; 
        double y; 
        double z; 
    } _userAcceleration;
    struct GCQuaternion { 
        double x; 
        double y; 
        double z; 
        double w; 
    } _attitude;
    struct { 
        double x; 
        double y; 
        double z; 
    } _rotationRate;
    CMMotionManager *_motionMgr;
    GCController *_controller;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _valueChangedHandler;

}

@property(readonly) GCController * controller;
@property(copy) id valueChangedHandler;
@property(readonly) struct { double x1; double x2; double x3; } gravity;
@property(readonly) struct { double x1; double x2; double x3; } userAcceleration;
@property(readonly) struct GCQuaternion { double x1; double x2; double x3; double x4; } attitude;
@property(readonly) struct { double x1; double x2; double x3; } rotationRate;


- (void)_stopDeviceMotionUpdates;
- (void)_startDeviceMotionUpdates;
- (id)initWithController:(id)arg1;
- (void)setValueChangedHandler:(id)arg1;
- (id)valueChangedHandler;
- (struct { double x1; double x2; double x3; })gravity;
- (struct GCQuaternion { double x1; double x2; double x3; double x4; })attitude;
- (struct { double x1; double x2; double x3; })rotationRate;
- (struct { double x1; double x2; double x3; })userAcceleration;
- (void).cxx_destruct;
- (id)controller;

@end
