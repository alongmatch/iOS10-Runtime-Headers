/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMRecordedAccelerometerData : NSObject {
    struct { 
        double x; 
        double y; 
        double z; 
    }  _acceleration;
    unsigned long long  _identifier;
    double  _startDateValue;
    double  _timestamp;
}

@property (readonly) struct { double x1; double x2; double x3; } acceleration;
@property (readonly) unsigned long long identifier;
@property (readonly) NSDate *startDate;
@property (readonly) double timestamp;

- (struct { double x1; double x2; double x3; })acceleration;
- (void)dealloc;
- (id)description;
- (unsigned long long)identifier;
- (id)initWithData:(struct CMAccel100 { float x1; float x2; float x3; unsigned long long x4; }*)arg1 timestamp:(unsigned long long)arg2 walltime:(double)arg3 identifier:(unsigned long long)arg4;
- (void)resetWithData:(struct CMAccel100 { float x1; float x2; float x3; unsigned long long x4; }*)arg1 timestamp:(unsigned long long)arg2 walltime:(double)arg3 identifier:(unsigned long long)arg4;
- (id)startDate;
- (double)timestamp;

@end