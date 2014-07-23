/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSString;

@interface MPMediaPersistentIDsPredicate : MPMediaPredicate <MPPProtobufferCoding> {
    long long *_persistentIDs;
    bool_shouldContain;
    unsigned long long _count;
}

@property(readonly) unsigned long long count;
@property(readonly) const long long* persistentIDs;
@property(readonly) bool shouldContain;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)predicateWithPersistentIDs:(const long long*)arg1 count:(unsigned long long)arg2 shouldContain:(bool)arg3;

- (id)_ML3PredicateForEntityClass:(Class)arg1;
- (id)ML3PredicateForTrack;
- (id)ML3PredicateForContainer;
- (const long long*)persistentIDs;
- (bool)shouldContain;
- (id)protobufferEncodableObject;
- (id)initWithProtobufferDecodableObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)count;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;

@end
