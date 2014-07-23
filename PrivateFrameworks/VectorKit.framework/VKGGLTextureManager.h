/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSObject<OS_dispatch_queue>, VKResourceManager, NSString;

@interface VKGGLTextureManager : NSObject <GEOResourceManifestTileGroupObserver> {
    unsigned int _tileGroupIdentifier;
    NSObject<OS_dispatch_queue> *_textureQueue;
    struct map<std::__1::basic_string<char>, std::__1::shared_ptr<ggl::Texture2D>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::shared_ptr<ggl::Texture2D> > > > { 
        struct __tree<std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<ggl::Texture2D> >, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<ggl::Texture2D> >, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<ggl::Texture2D> > > > { 
            struct __tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<ggl::Texture2D> >, void *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<ggl::Texture2D> >, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<ggl::Texture2D> >, std::__1::less<std::__1::basic_string<char> >, true> > { 
                unsigned long long __first_; 
            } __pair3_; 
        } __tree_; 
    } _textureDictionary;
    VKResourceManager *_resourceManager;
    struct Device { int (**x1)(); int x2; } *_device;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (struct shared_ptr<ggl::Texture2D> { struct Texture2D {} *x1; struct __shared_weak_count {} *x2; })textureWithName:(id)arg1;
- (id)dataWithName:(id)arg1 fromResourceManager:(id)arg2;
- (struct shared_ptr<ggl::Texture2D> { struct Texture2D {} *x1; struct __shared_weak_count {} *x2; })textureWithName:(id)arg1 mipmap:(bool)arg2;
- (struct shared_ptr<ggl::Texture2D> { struct Texture2D {} *x1; struct __shared_weak_count {} *x2; })textureWithName:(id)arg1 forScale:(float)arg2 mipmap:(bool)arg3;
- (struct shared_ptr<ggl::Texture2D> { struct Texture2D {} *x1; struct __shared_weak_count {} *x2; })textureWithName:(id)arg1 forScale:(float)arg2;
- (id)initWithTileGroupIdentifier:(unsigned int)arg1 resourceManager:(id)arg2 device:(struct Device { int (**x1)(); int x2; }*)arg3;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)purge;

@end
