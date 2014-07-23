/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@class PKRegion;

@interface SKRegion : NSObject <NSCopying, NSCoding> {
    PKRegion *_region;
}

@property(readonly) struct CGPath { }* path;

+ (id)infiniteRegion;

- (struct CGPath { }*)path;
- (void)containsPoints:(const float*)arg1 locationStride:(long long)arg2 results:(char *)arg3 resultsStride:(long long)arg4 count:(int)arg5;
- (id)regionByIntersectionWithRegion:(id)arg1;
- (id)regionByDifferenceFromRegion:(id)arg1;
- (id)regionByUnionWithRegion:(id)arg1;
- (id)inverseRegion;
- (id)initWithRadius:(float)arg1;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithPath:(struct CGPath { }*)arg1;

@end
