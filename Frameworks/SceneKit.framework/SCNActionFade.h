/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/SceneKit.framework/SceneKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface SCNActionFade : SCNAction  {

  /* Error parsing encoded ivar type info: ^{SCNCActionFade=^^?f@?@BdddddBB@?^{__CFString}qddddfffB} */
    struct SCNCActionFade { int (**x1)(); float x2; id x3; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x4; id x5; boolx6; double x7; double x8; double x9; double x10; double x11; boolx12; boolx13; id x14; void*x15; struct __CFString {} *x16; long long x17; double x18; double x19; double x20; double x21; float x22; float x23; float x24; boolx25; } *_mycaction;

}

+ (id)fadeOpacityTo:(double)arg1 duration:(double)arg2;
+ (id)fadeOpacityBy:(double)arg1 duration:(double)arg2;
+ (bool)supportsSecureCoding;
+ (id)fadeInWithDuration:(double)arg1;
+ (id)fadeOutWithDuration:(double)arg1;

- (id)reversedAction;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
