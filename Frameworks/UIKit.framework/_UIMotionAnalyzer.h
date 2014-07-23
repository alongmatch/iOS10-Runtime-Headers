/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIWindow, _UIViewerRelativeDevicePose, NSString, UILabel, _UIMotionAnalyzerSettings, UIView;

@interface _UIMotionAnalyzer : NSObject <_UISettingsKeyObserver> {
    _UIMotionAnalyzerSettings *_settings;
    double _smoothingDegree;
    double _referenceShiftSpeed;
    double _distanceMultiplier;
    bool_hasReferenceQuaternion;
    union _GLKQuaternion { 
        struct { 
            union _GLKVector3 { 
                struct { 
                    float x; 
                    float y; 
                    float z; 
                } ; 
                struct { 
                    float r; 
                    float g; 
                    float b; 
                } ; 
                struct { 
                    float s; 
                    float t; 
                    float p; 
                } ; 
                float v[3]; 
            } v; 
            float s; 
        } ; 
        struct { 
            float x; 
            float y; 
            float z; 
            float w; 
        } ; 
        float q[4]; 
    } _referenceQuaternion;
    union _GLKQuaternion { 
        struct { 
            union _GLKVector3 { 
                struct { 
                    float x; 
                    float y; 
                    float z; 
                } ; 
                struct { 
                    float r; 
                    float g; 
                    float b; 
                } ; 
                struct { 
                    float s; 
                    float t; 
                    float p; 
                } ; 
                float v[3]; 
            } v; 
            float s; 
        } ; 
        struct { 
            float x; 
            float y; 
            float z; 
            float w; 
        } ; 
        float q[4]; 
    } _absoluteQuaternion;
    double _lastUpdate;
    double _idleStartTime;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    } _idleStartOffset;
    double _jumpThreshold;
    double _idleLeeway;
    double _secondsBeforeIdle;
    double _lockValue;
    double _lockStrength;
    UIWindow *_diagnosticsWindow;
    UILabel *_idleIndicator;
    UIView *_horizontalLockIndicator;
    UIView *_verticalLockIndicator;
    _UIViewerRelativeDevicePose *_viewerRelativeDevicePose;
}

@property(readonly) _UIViewerRelativeDevicePose * viewerRelativeDevicePose;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)initWithSettings:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)description;
- (void)reset;
- (double)_directionLockStrength;
- (void)_createDiagnosticsWindow;
- (void)_createDirectionLockIndicators;
- (void)_createIdleIndicator;
- (void)_showIdleUI:(bool)arg1;
- (float)_referenceShiftRadiansPerSecondForAngle:(float)arg1;
- (bool)isIdleGivenTimestamp:(double)arg1;
- (long long)_directionLockStatus;
- (void)_updateAcceleratedOutputRangeFixingOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)_updateDirectionalLockIndicators;
- (void)_resetDirectionalLockWithViewerOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)_updateReferenceAttitude:(union _GLKQuaternion { struct { union _GLKVector3 { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; struct { float x_3_3_1; float x_3_3_2; float x_3_3_3; } x_1_2_3; float x_1_2_4[3]; } x_1_1_1; float x_1_1_2; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; float x3[4]; })arg1 timestamp:(double)arg2;
- (void)_updateIdleStateForRawOffset:(struct UIOffset { double x1; double x2; })arg1 timestamp:(double)arg2;
- (void)_updateSmoothedOffsetForRawOffset:(struct UIOffset { double x1; double x2; })arg1;
- (struct UIOffset { double x1; double x2; })_currentRawOffset:(union _GLKQuaternion { struct { union _GLKVector3 { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; struct { float x_3_3_1; float x_3_3_2; float x_3_3_3; } x_1_2_3; float x_1_2_4[3]; } x_1_1_1; float x_1_1_2; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; float x3[4]; })arg1;
- (void)_tearDownIdleIndicator;
- (void)_tearDownDirectionLockIndicators;
- (void)_tearDownDiagnosticsWindow;
- (void)_updateSettings;
- (void)updateWithDeviceMotion:(id)arg1;
- (union _GLKQuaternion { struct { union _GLKVector3 { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; struct { float x_3_3_1; float x_3_3_2; float x_3_3_3; } x_1_2_3; float x_1_2_4[3]; } x_1_1_1; float x_1_1_2; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; float x3[4]; })_relativeQuaternion;
- (void)_shiftReferenceToYieldRelativeQuaternion:(union _GLKQuaternion { struct { union _GLKVector3 { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; struct { float x_3_3_1; float x_3_3_2; float x_3_3_3; } x_1_2_3; float x_1_2_4[3]; } x_1_1_1; float x_1_1_2; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; float x3[4]; })arg1;
- (id)viewerRelativeDevicePose;
- (void)updateWithDeviceMotionStruct:(const struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; struct { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; int x5; boolx6; boolx7; boolx8; }*)arg1 timestamp:(double)arg2;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;

@end
