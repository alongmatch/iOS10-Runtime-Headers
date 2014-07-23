/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSString, NSData;

@interface CKDPTokenRegistrationBody : PBCodable <NSCopying> {
    int _apnsEnv;
    NSString *_bundleIdentifier;
    NSData *_token;
    struct { 
        unsigned int apnsEnv : 1; 
    } _has;
}

@property(readonly) bool hasToken;
@property(retain) NSData * token;
@property(readonly) bool hasBundleIdentifier;
@property(retain) NSString * bundleIdentifier;
@property bool hasApnsEnv;
@property int apnsEnv;


- (int)apnsEnv;
- (bool)hasApnsEnv;
- (void)setHasApnsEnv:(bool)arg1;
- (void)setApnsEnv:(int)arg1;
- (bool)hasToken;
- (bool)hasBundleIdentifier;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setToken:(id)arg1;
- (id)token;
- (id)bundleIdentifier;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
