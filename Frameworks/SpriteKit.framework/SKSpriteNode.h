/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@class UIColor, SKTexture, SKLightNode, SKShader;

@interface SKSpriteNode : SKNode  {
    SKLightNode *_light;
    bool_shouldRepeatTexture;
}

@property(retain) SKTexture * texture;
@property(retain) SKTexture * normalTexture;
@property unsigned int lightingBitMask;
@property unsigned int shadowCastBitMask;
@property unsigned int shadowedBitMask;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } centerRect;
@property double colorBlendFactor;
@property(retain) UIColor * color;
@property long long blendMode;
@property struct CGPoint { double x1; double x2; } anchorPoint;
@property struct CGSize { double x1; double x2; } size;
@property(retain) SKShader * shader;
@property bool shouldRepeatTexture;
@property struct CGSize { double x1; double x2; } repeatTextureSize;

+ (id)spriteNodeWithTexture:(id)arg1 normalMap:(id)arg2;
+ (id)spriteNodeWithImageNamed:(id)arg1 normalMapped:(bool)arg2;
+ (id)spriteNodeWithImageNamed:(id)arg1;
+ (id)spriteNodeWithTexture:(id)arg1;
+ (id)spriteNodeWithTexture:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (id)spriteNodeWithColor:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;

- (void)setShouldRepeatTexture:(bool)arg1;
- (bool)shouldRepeatTexture;
- (void)setRepeatTextureSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })repeatTextureSize;
- (void)setRepeatTexture:(bool)arg1;
- (bool)repeatTexture;
- (void)setCenterRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })centerRect;
- (id)initWithColor:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (unsigned int)shadowedBitMask;
- (unsigned int)shadowCastBitMask;
- (unsigned int)lightingBitMask;
- (id)normalTexture;
- (id)initWithTexture:(id)arg1;
- (void)setNormalTexture:(id)arg1;
- (id)initWithTexture:(id)arg1 color:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3;
- (void)setShadowedBitMask:(unsigned int)arg1;
- (void)setShadowCastBitMask:(unsigned int)arg1;
- (void)setLightingBitMask:(unsigned int)arg1;
- (id)shader;
- (void)setShader:(id)arg1;
- (id)initWithImageNamed:(id)arg1;
- (id)_copyImageData;
- (void)setColorBlendFactor:(double)arg1;
- (double)colorBlendFactor;
- (void)setTexture:(id)arg1;
- (id)texture;
- (void)setAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)color;
- (struct CGPoint { double x1; double x2; })anchorPoint;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setColor:(id)arg1;
- (void)setBlendMode:(long long)arg1;
- (long long)blendMode;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copy;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGSize { double x1; double x2; })size;

@end
