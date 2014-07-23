/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDPowerCameraMetrics : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _cameraBackOnDuration;
    unsigned int _cameraFrontOnDuration;
    unsigned int _cameraTorchOnDuration;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int cameraBackOnDuration : 1; 
        unsigned int cameraFrontOnDuration : 1; 
        unsigned int cameraTorchOnDuration : 1; 
    } _has;
}

@property bool hasTimestamp;
@property unsigned long long timestamp;
@property bool hasCameraFrontOnDuration;
@property unsigned int cameraFrontOnDuration;
@property bool hasCameraBackOnDuration;
@property unsigned int cameraBackOnDuration;
@property bool hasCameraTorchOnDuration;
@property unsigned int cameraTorchOnDuration;


- (unsigned int)cameraTorchOnDuration;
- (unsigned int)cameraBackOnDuration;
- (unsigned int)cameraFrontOnDuration;
- (bool)hasCameraTorchOnDuration;
- (void)setHasCameraTorchOnDuration:(bool)arg1;
- (void)setCameraTorchOnDuration:(unsigned int)arg1;
- (bool)hasCameraBackOnDuration;
- (void)setHasCameraBackOnDuration:(bool)arg1;
- (void)setCameraBackOnDuration:(unsigned int)arg1;
- (bool)hasCameraFrontOnDuration;
- (void)setHasCameraFrontOnDuration:(bool)arg1;
- (void)setCameraFrontOnDuration:(unsigned int)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (bool)hasTimestamp;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
