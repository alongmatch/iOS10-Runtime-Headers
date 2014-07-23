/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class VKTrafficTile;

@interface VKRoadTile : VKVectorTile  {
    VKTrafficTile *_trafficTile;
    struct unique_ptr<vk::RoadLayer, std::__1::default_delete<vk::RoadLayer> > { 
        struct __compressed_pair<vk::RoadLayer *, std::__1::default_delete<vk::RoadLayer> > { 
            struct RoadLayer {} *__first_; 
        } __ptr_; 
    } _roadLayer;
    struct unique_ptr<vk::PatternedLayer, std::__1::default_delete<vk::PatternedLayer> > { 
        struct __compressed_pair<vk::PatternedLayer *, std::__1::default_delete<vk::PatternedLayer> > { 
            struct PatternedLayer {} *__first_; 
        } __ptr_; 
    } _patternedRibbonLayer;
}

@property(retain) VKTrafficTile * trafficTile;
@property(readonly) /* Warning: unhandled struct encoding: '{RoadLayer=^^?{vector<vk::RoadBatch *' */ struct * roadLayer; /* unknown property attribute:  std::__1::allocator<ggl::Ribbon::BaseMesh *> >=^^{BaseMesh}}}[4^{RenderState}]{shared_ptr<ggl::Tile::ViewUniformData>=^{ViewUniformData}^{__shared_weak_count}}[4{shared_ptr<ggl::RenderState>=^{RenderState}^{__shared_weak_count}}]Q^{RoadManager}@} */
@property(readonly) struct * patternedRibbonLayer; /* unknown property attribute:  std::__1::allocator<ggl::PatternedRibbon::BaseMesh *> >=^^{BaseMesh}}}[2^{RenderState}]{shared_ptr<ggl::Tile::ViewUniformData>=^{ViewUniformData}^{__shared_weak_count}}[2{shared_ptr<ggl::RenderState>=^{RenderState}^{__shared_weak_count}}]Q^{PatternedManager}@} */


- (void)addRoadRibbonTo:(struct unordered_map<vk::RoadBatchKey, std::__1::vector<std::__1::unique_ptr<vk::RoadRibbon, std::__1::default_delete<vk::RoadRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::RoadRibbon, std::__1::default_delete<vk::RoadRibbon> > > >, std::__1::hash<vk::RoadBatchKey>, std::__1::equal_to<vk::RoadBatchKey>, std::__1::allocator<std::__1::pair<const vk::RoadBatchKey, std::__1::vector<std::__1::unique_ptr<vk::RoadRibbon, std::__1::default_delete<vk::RoadRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::RoadRibbon, std::__1::default_delete<vk::RoadRibbon> > > > > > > { struct __hash_table<std::__1::__hash_value_type<vk::RoadBatchKey, std::__1::vector<std::__1::unique_ptr<vk::RoadRibbon, std::__1::default_delete<vk::RoadRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::RoadRibbon, std::__1::default_delete<vk::RoadRibbon> > > > >, std::__1::__unordered_map_hasher<vk::RoadBatchKey, std::__1::__hash_value_type<vk::RoadBatchKey, std::__1::vector<std::__1::unique_ptr<vk::RoadRibbon, std::__1::default_delete<vk::RoadRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::RoadRibbon, std::__1::default_delete<vk::RoadRibbon> > > > >, std::__1::hash<vk::RoadBatchKey>, true>, std::__1::__unordered_map_equal<vk::RoadBatchKey, std::__1::__hash_value_type<vk::RoadBatchKey, std::__1::vector<std::__1::unique_ptr<vk::RoadRibbon, std::__1::default_delete<vk::RoadRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::RoadRibbon, std::__1::default_delete<vk::RoadRibbon> > > > >, std::__1::equal_to<vk::RoadBatchKey>, true>, std::__1::allocator<std::__1::__hash_value_type<vk::RoadBatchKey, std::__1::vector<std::__1::unique_ptr<vk::RoadRibbon, std::__1::default_delete<vk::RoadRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::RoadRibbon, std::__1::default_delete<vk::RoadRibbon> > > > > > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<vk::RoadBatchKey, std::__1::vector<std::__1::unique_ptr<vk::RoadRibbon, std::__1::default_delete<vk::RoadRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::RoadRibbon, std::__1::default_delete<vk::RoadRibbon> > > > >, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<vk::RoadBatchKey, std::__1::vector<std::__1::unique_ptr<vk::RoadRibbon, std::__1::default_delete<vk::RoadRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::RoadRibbon, std::__1::default_delete<vk::RoadRibbon> > > > >, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<vk::RoadBatchKey, std::__1::vector<std::__1::unique_ptr<vk::RoadRibbon, std::__1::default_delete<vk::RoadRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::RoadRibbon, std::__1::default_delete<vk::RoadRibbon> > > > >, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<vk::RoadBatchKey, std::__1::vector<std::__1::unique_ptr<vk::RoadRibbon, std::__1::default_delete<vk::RoadRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::RoadRibbon, std::__1::default_delete<vk::RoadRibbon> > > > >, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<vk::RoadBatchKey, std::__1::vector<std::__1::unique_ptr<vk::RoadRibbon, std::__1::default_delete<vk::RoadRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::RoadRibbon, std::__1::default_delete<vk::RoadRibbon> > > > >, void *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<vk::RoadBatchKey, std::__1::vector<std::__1::unique_ptr<vk::RoadRibbon, std::__1::default_delete<vk::RoadRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::RoadRibbon, std::__1::default_delete<vk::RoadRibbon> > > > >, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<vk::RoadBatchKey, std::__1::vector<std::__1::unique_ptr<vk::RoadRibbon, std::__1::default_delete<vk::RoadRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::RoadRibbon, std::__1::default_delete<vk::RoadRibbon> > > > >, void *> *> > { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<vk::RoadBatchKey, std::__1::vector<std::__1::unique_ptr<vk::RoadRibbon, std::__1::default_delete<vk::RoadRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::RoadRibbon, std::__1::default_delete<vk::RoadRibbon> > > > >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<vk::RoadBatchKey, std::__1::vector<std::__1::unique_ptr<vk::RoadRibbon, std::__1::default_delete<vk::RoadRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::RoadRibbon, std::__1::default_delete<vk::RoadRibbon> > > > >, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<vk::RoadBatchKey, std::__1::vector<std::__1::unique_ptr<vk::RoadRibbon, std::__1::default_delete<vk::RoadRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::RoadRibbon, std::__1::default_delete<vk::RoadRibbon> > > > >, void *> *> { struct __hash_node<std::__1::__hash_value_type<vk::RoadBatchKey, std::__1::vector<std::__1::unique_ptr<vk::RoadRibbon, std::__1::default_delete<vk::RoadRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::RoadRibbon, std::__1::default_delete<vk::RoadRibbon> > > > >, void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<vk::RoadBatchKey, std::__1::__hash_value_type<vk::RoadBatchKey, std::__1::vector<std::__1::unique_ptr<vk::RoadRibbon, std::__1::default_delete<vk::RoadRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::RoadRibbon, std::__1::default_delete<vk::RoadRibbon> > > > >, std::__1::hash<vk::RoadBatchKey>, true> > { unsigned long long x_3_2_1; } x_1_1_3; struct __compressed_pair<float, std::__1::__unordered_map_equal<vk::RoadBatchKey, std::__1::__hash_value_type<vk::RoadBatchKey, std::__1::vector<std::__1::unique_ptr<vk::RoadRibbon, std::__1::default_delete<vk::RoadRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::RoadRibbon, std::__1::default_delete<vk::RoadRibbon> > > > >, std::__1::equal_to<vk::RoadBatchKey>, true> > { float x_4_2_1; } x_1_1_4; } x1; }*)arg1 styleQuery:(struct shared_ptr<md::StyleQuery> { struct StyleQuery {} *x1; struct __shared_weak_count {} *x2; })arg2 painterZ:(unsigned int)arg3 numPoints:(unsigned long long)arg4 points:(struct Matrix<float, 2, 1> { float x1[2]; }*)arg5 startCap:(bool)arg6 endCap:(bool)arg7;
- (void)addPatternedRibbonTo:(struct unordered_map<vk::PatternedBatchKey, std::__1::vector<std::__1::unique_ptr<vk::PatternedRibbon, std::__1::default_delete<vk::PatternedRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::PatternedRibbon, std::__1::default_delete<vk::PatternedRibbon> > > >, std::__1::hash<vk::PatternedBatchKey>, std::__1::equal_to<vk::PatternedBatchKey>, std::__1::allocator<std::__1::pair<const vk::PatternedBatchKey, std::__1::vector<std::__1::unique_ptr<vk::PatternedRibbon, std::__1::default_delete<vk::PatternedRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::PatternedRibbon, std::__1::default_delete<vk::PatternedRibbon> > > > > > > { struct __hash_table<std::__1::__hash_value_type<vk::PatternedBatchKey, std::__1::vector<std::__1::unique_ptr<vk::PatternedRibbon, std::__1::default_delete<vk::PatternedRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::PatternedRibbon, std::__1::default_delete<vk::PatternedRibbon> > > > >, std::__1::__unordered_map_hasher<vk::PatternedBatchKey, std::__1::__hash_value_type<vk::PatternedBatchKey, std::__1::vector<std::__1::unique_ptr<vk::PatternedRibbon, std::__1::default_delete<vk::PatternedRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::PatternedRibbon, std::__1::default_delete<vk::PatternedRibbon> > > > >, std::__1::hash<vk::PatternedBatchKey>, true>, std::__1::__unordered_map_equal<vk::PatternedBatchKey, std::__1::__hash_value_type<vk::PatternedBatchKey, std::__1::vector<std::__1::unique_ptr<vk::PatternedRibbon, std::__1::default_delete<vk::PatternedRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::PatternedRibbon, std::__1::default_delete<vk::PatternedRibbon> > > > >, std::__1::equal_to<vk::PatternedBatchKey>, true>, std::__1::allocator<std::__1::__hash_value_type<vk::PatternedBatchKey, std::__1::vector<std::__1::unique_ptr<vk::PatternedRibbon, std::__1::default_delete<vk::PatternedRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::PatternedRibbon, std::__1::default_delete<vk::PatternedRibbon> > > > > > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<vk::PatternedBatchKey, std::__1::vector<std::__1::unique_ptr<vk::PatternedRibbon, std::__1::default_delete<vk::PatternedRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::PatternedRibbon, std::__1::default_delete<vk::PatternedRibbon> > > > >, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<vk::PatternedBatchKey, std::__1::vector<std::__1::unique_ptr<vk::PatternedRibbon, std::__1::default_delete<vk::PatternedRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::PatternedRibbon, std::__1::default_delete<vk::PatternedRibbon> > > > >, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<vk::PatternedBatchKey, std::__1::vector<std::__1::unique_ptr<vk::PatternedRibbon, std::__1::default_delete<vk::PatternedRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::PatternedRibbon, std::__1::default_delete<vk::PatternedRibbon> > > > >, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<vk::PatternedBatchKey, std::__1::vector<std::__1::unique_ptr<vk::PatternedRibbon, std::__1::default_delete<vk::PatternedRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::PatternedRibbon, std::__1::default_delete<vk::PatternedRibbon> > > > >, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<vk::PatternedBatchKey, std::__1::vector<std::__1::unique_ptr<vk::PatternedRibbon, std::__1::default_delete<vk::PatternedRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::PatternedRibbon, std::__1::default_delete<vk::PatternedRibbon> > > > >, void *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<vk::PatternedBatchKey, std::__1::vector<std::__1::unique_ptr<vk::PatternedRibbon, std::__1::default_delete<vk::PatternedRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::PatternedRibbon, std::__1::default_delete<vk::PatternedRibbon> > > > >, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<vk::PatternedBatchKey, std::__1::vector<std::__1::unique_ptr<vk::PatternedRibbon, std::__1::default_delete<vk::PatternedRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::PatternedRibbon, std::__1::default_delete<vk::PatternedRibbon> > > > >, void *> *> > { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<vk::PatternedBatchKey, std::__1::vector<std::__1::unique_ptr<vk::PatternedRibbon, std::__1::default_delete<vk::PatternedRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::PatternedRibbon, std::__1::default_delete<vk::PatternedRibbon> > > > >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<vk::PatternedBatchKey, std::__1::vector<std::__1::unique_ptr<vk::PatternedRibbon, std::__1::default_delete<vk::PatternedRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::PatternedRibbon, std::__1::default_delete<vk::PatternedRibbon> > > > >, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<vk::PatternedBatchKey, std::__1::vector<std::__1::unique_ptr<vk::PatternedRibbon, std::__1::default_delete<vk::PatternedRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::PatternedRibbon, std::__1::default_delete<vk::PatternedRibbon> > > > >, void *> *> { struct __hash_node<std::__1::__hash_value_type<vk::PatternedBatchKey, std::__1::vector<std::__1::unique_ptr<vk::PatternedRibbon, std::__1::default_delete<vk::PatternedRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::PatternedRibbon, std::__1::default_delete<vk::PatternedRibbon> > > > >, void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<vk::PatternedBatchKey, std::__1::__hash_value_type<vk::PatternedBatchKey, std::__1::vector<std::__1::unique_ptr<vk::PatternedRibbon, std::__1::default_delete<vk::PatternedRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::PatternedRibbon, std::__1::default_delete<vk::PatternedRibbon> > > > >, std::__1::hash<vk::PatternedBatchKey>, true> > { unsigned long long x_3_2_1; } x_1_1_3; struct __compressed_pair<float, std::__1::__unordered_map_equal<vk::PatternedBatchKey, std::__1::__hash_value_type<vk::PatternedBatchKey, std::__1::vector<std::__1::unique_ptr<vk::PatternedRibbon, std::__1::default_delete<vk::PatternedRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::PatternedRibbon, std::__1::default_delete<vk::PatternedRibbon> > > > >, std::__1::equal_to<vk::PatternedBatchKey>, true> > { float x_4_2_1; } x_1_1_4; } x1; }*)arg1 styleQuery:(struct shared_ptr<md::StyleQuery> { struct StyleQuery {} *x1; struct __shared_weak_count {} *x2; })arg2 painterZ:(unsigned int)arg3 numPoints:(unsigned long long)arg4 points:(struct Matrix<float, 2, 1> { float x1[2]; }*)arg5;
- (void)buildGglMeshesWithDevice:(struct Device { int (**x1)(); int x2; }*)arg1;
- (void)setTrafficTile:(id)arg1;
- (id)trafficTile;
- (struct PatternedLayer { int (**x1)(); struct vector<vk::PatternedBatch *, std::__1::allocator<vk::PatternedBatch *> > { struct PatternedBatch {} **x_2_1_1; struct PatternedBatch {} **x_2_1_2; struct __compressed_pair<vk::PatternedBatch **, std::__1::allocator<vk::PatternedBatch *> > { struct PatternedBatch {} **x_3_2_1; } x_2_1_3; } x2; struct vector<ggl::PatternedRibbon::BaseMesh *, std::__1::allocator<ggl::PatternedRibbon::BaseMesh *> > { struct BaseMesh {} **x_3_1_1; struct BaseMesh {} **x_3_1_2; struct __compressed_pair<ggl::PatternedRibbon::BaseMesh **, std::__1::allocator<ggl::PatternedRibbon::BaseMesh *> > { struct BaseMesh {} **x_3_2_1; } x_3_1_3; } x3; struct RenderState {} *x4[2]; struct shared_ptr<ggl::Tile::ViewUniformData> { struct ViewUniformData {} *x_5_1_1; struct __shared_weak_count {} *x_5_1_2; } x5; struct shared_ptr<ggl::RenderState> { struct RenderState {} *x_6_1_1; struct __shared_weak_count {} *x_6_1_2; } x6[2]; unsigned long long x7; struct PatternedManager {} *x8; id x9; }*)patternedRibbonLayer;
- (struct RoadLayer { int (**x1)(); struct vector<vk::RoadBatch *, std::__1::allocator<vk::RoadBatch *> > { struct RoadBatch {} **x_2_1_1; struct RoadBatch {} **x_2_1_2; struct __compressed_pair<vk::RoadBatch **, std::__1::allocator<vk::RoadBatch *> > { struct RoadBatch {} **x_3_2_1; } x_2_1_3; } x2; struct vector<ggl::Ribbon::BaseMesh *, std::__1::allocator<ggl::Ribbon::BaseMesh *> > { struct BaseMesh {} **x_3_1_1; struct BaseMesh {} **x_3_1_2; struct __compressed_pair<ggl::Ribbon::BaseMesh **, std::__1::allocator<ggl::Ribbon::BaseMesh *> > { struct BaseMesh {} **x_3_2_1; } x_3_1_3; } x3; struct RenderState {} *x4[4]; struct shared_ptr<ggl::Tile::ViewUniformData> { struct ViewUniformData {} *x_5_1_1; struct __shared_weak_count {} *x_5_1_2; } x5; struct shared_ptr<ggl::RenderState> { struct RenderState {} *x_6_1_1; struct __shared_weak_count {} *x_6_1_2; } x6[4]; unsigned long long x7; struct RoadManager {} *x8; id x9; }*)roadLayer;
- (id)initWithKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1 modelTile:(id)arg2 styleManager:(id)arg3 sharedResources:(id)arg4 contentScale:(double)arg5 device:(struct Device { int (**x1)(); int x2; }*)arg6;
- (void)updateViewDependentStateIfNecessaryWithContext:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
