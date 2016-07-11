/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface OZFxPlugTimingAPI : NSObject <FxTimingAPI, FxTimingAPI_v2, FxTimingAPI_v3, PROAPIObject> {
    struct OZFxPlugSharedBase { int (**x1)(); void *x2; id x3; void *x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; /* Warning: Unrecognized filer type: 'P' using 'void*' */ void*x12; unsigned char x13; unsigned short x14; void*x15; const int x16; in void*x17; void*x18; struct __CFString {} *x19; } * _plugin;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)conformsToProtocol:(id)arg1 version:(unsigned int)arg2;
- (void)copyFxTime:(union { double x1; struct { /* ? */ } *x2; })arg1 toFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg2;
- (double)durationForEffect:(id)arg1;
- (void)durationFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 ofImageParm:(unsigned int)arg2;
- (void)durationFxTimeForEffect:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (void)durationFxTimeOfInputAToTransition:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (void)durationFxTimeOfInputBToTransition:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (void)durationFxTimeOfInputToFilter:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (double)durationOfImageParm:(unsigned int)arg1 forEffect:(id)arg2;
- (double)durationOfInputAToTransition:(id)arg1;
- (double)durationOfInputBToTransition:(id)arg1;
- (double)durationOfInputToFilter:(id)arg1;
- (unsigned long long)fieldOrderForImageParm:(unsigned int)arg1 forEffect:(id)arg2;
- (unsigned long long)fieldOrderForInputAToTransition:(id)arg1;
- (unsigned long long)fieldOrderForInputBToTransition:(id)arg1;
- (unsigned long long)fieldOrderForInputToFilter:(id)arg1;
- (void)frameDuration:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (void)imageFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 forParmId:(unsigned int)arg2 fromTimelineTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (double)imageTimeForParmId:(unsigned int)arg1 forEffect:(id)arg2 fromTimelineTime:(double)arg3;
- (void)inPointFxTimeOfTimelineForEffect:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (double)inPointOfTimelineForEffect:(id)arg1;
- (id)initWithPlugin:(struct OZFxPlugSharedBase { int (**x1)(); void *x2; id x3; void *x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; /* Warning: Unrecognized filer type: 'P' using 'void*' */ void*x12; unsigned char x13; unsigned short x14; void*x15; const int x16; in void*x17; void*x18; struct __CFString {} *x19; }*)arg1;
- (void)inputAFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 fromTimelineTime:(union { double x1; struct { /* ? */ } *x2; })arg2;
- (double)inputATimeForTransition:(id)arg1 fromTimelineTime:(double)arg2;
- (void)inputBFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 fromTimelineTime:(union { double x1; struct { /* ? */ } *x2; })arg2;
- (double)inputBTimeForTransition:(id)arg1 fromTimelineTime:(double)arg2;
- (void)inputFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 fromTimelineTime:(union { double x1; struct { /* ? */ } *x2; })arg2;
- (double)inputTimeForFilter:(id)arg1 fromTimelineTime:(double)arg2;
- (union { double x1; struct { /* ? */ } *x2; })invalidTime;
- (void)outPointFxTimeOfTimelineForEffect:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (double)outPointOfTimelineForEffect:(id)arg1;
- (void)sampleDuration:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (struct OZScene { int (**x1)(); int (**x2)(); struct PCHash128 { unsigned int x_3_1_1[4]; } x3; struct OZSceneSettings { int (**x_4_1_1)(); int x_4_1_2; int x_4_1_3; unsigned int x_4_1_4; bool x_4_1_5; unsigned int x_4_1_6; double x_4_1_7; bool x_4_1_8; unsigned int x_4_1_9; double x_4_1_10; struct PCColor { struct ColorComponents { int x_1_3_1; double x_1_3_2[5]; } x_11_2_1; struct PCColorSpaceHandle { struct CGColorSpace {} *x_2_3_1; } x_11_2_2; } x_4_1_11; int x_4_1_12; bool x_4_1_13; unsigned int x_4_1_14; unsigned int x_4_1_15; double x_4_1_16; bool x_4_1_17; bool x_4_1_18; double x_4_1_19; int x_4_1_20; struct PCString { struct __CFString {} *x_21_2_1; } x_4_1_21; unsigned int x_4_1_22; unsigned int x_4_1_23; double x_4_1_24; unsigned int x_4_1_25; unsigned int x_4_1_26; unsigned int x_4_1_27; bool x_4_1_28; float x_4_1_29; int x_4_1_30; bool x_4_1_31; int x_4_1_32; bool x_4_1_33; int x_4_1_34; int x_4_1_35; bool x_4_1_36; struct FigTime { double x_37_2_1; } x_4_1_37; bool x_4_1_38; } x4; struct OZExportSettings { int (**x_5_1_1)(); unsigned int x_5_1_2; unsigned int x_5_1_3; unsigned int x_5_1_4; unsigned int x_5_1_5; bool x_5_1_6; int x_5_1_7; int x_5_1_8; bool x_5_1_9; bool x_5_1_10; bool x_5_1_11; unsigned int x_5_1_12; unsigned int x_5_1_13; unsigned int x_5_1_14; unsigned int x_5_1_15; unsigned int x_5_1_16; unsigned int x_5_1_17; unsigned int x_5_1_18; unsigned int x_5_1_19; } x5; struct OZPublishSettings { int (**x_6_1_1)(); struct vector<OZPublishSettings::Entry *, std::__1::allocator<OZPublishSettings::Entry *> > { struct Entry {} **x_2_2_1; struct Entry {} **x_2_2_2; struct __compressed_pair<OZPublishSettings::Entry **, std::__1::allocator<OZPublishSettings::Entry *> > { struct Entry {} **x_3_3_1; } x_2_2_3; } x_6_1_2; struct OZChannelVaryingFolder { int (**x_3_2_1)(); struct OZFactory {} *x_3_2_2; int (**x_3_2_3)(); unsigned int x_3_2_4; struct PCString { struct __CFString {} *x_5_3_1; } x_3_2_5; struct PCString {} *x_3_2_6; struct OZChannelFolder {} *x_3_2_7; unsigned long long x_3_2_8; unsigned long long x_3_2_9; void *x_3_2_10; struct __CFString {} *x_3_2_11; struct __CFString {} *x_3_2_12; struct __CFString {} *x_3_2_13; struct OZChannelTimeConverter {} *x_3_2_14; struct vector<OZChannelBase *, std::__1::allocator<OZChannelBase *> > {} *x_3_2_15; unsigned int x_3_2_16; unsigned int x_3_2_17; } x_6_1_3; struct OZScene {} *x_6_1_4; bool x_6_1_5; bool x_6_1_6; struct map<unsigned int, double, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, double> > > { struct __tree<std::__1::__value_type<unsigned int, double>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, double>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, double> > > { struct __tree_node<std::__1::__value_type<unsigned int, double>, void *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, double>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, double>, std::__1::less<unsigned int>, true> > { unsigned long long x_3_4_1; } x_1_3_3; } x_7_2_1; } x_6_1_7; } x6; struct OZChannelObjectRoot { int (**x_7_1_1)(); struct OZFactory {} *x_7_1_2; int (**x_7_1_3)(); unsigned int x_7_1_4; struct PCString { struct __CFString {} *x_5_2_1; } x_7_1_5; struct PCString {} *x_7_1_6; struct OZChannelFolder {} *x_7_1_7; unsigned long long x_7_1_8; unsigned long long x_7_1_9; void *x_7_1_10; struct __CFString {} *x_7_1_11; struct __CFString {} *x_7_1_12; struct __CFString {} *x_7_1_13; struct OZChannelTimeConverter {} *x_7_1_14; struct vector<OZChannelBase *, std::__1::allocator<OZChannelBase *> > {} *x_7_1_15; unsigned int x_7_1_16; unsigned int x_7_1_17; struct FigTime { double x_18_2_1; } x_7_1_18; struct PCTimeRange { struct FigTime { double x_1_3_1; } x_19_2_1; struct FigTime { double x_2_3_1; } x_19_2_2; } x_7_1_19; bool x_7_1_20; bool x_7_1_21; struct OZObjectManipulator {} *x_7_1_22; struct OZTimeMarkerSet {} *x_7_1_23; struct list<OZSimulationBehavior *, std::__1::allocator<OZSimulationBehavior *> > { struct __list_node_base<OZSimulationBehavior *, void *> { struct __list_node_base<OZSimulationBehavior *, void *> {} *x_1_3_1; struct __list_node_base<OZSimulationBehavior *, void *> {} *x_1_3_2; } x_24_2_1; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<OZSimulationBehavior *, void *> > > { unsigned long long x_2_3_1; } x_24_2_2; } x_7_1_24; struct PCString { struct __CFString {} *x_25_2_1; } x_7_1_25; } x7; struct FigTime { double x_8_1_1; } x8; struct list<OZSceneNode *, std::__1::allocator<OZSceneNode *> > { struct __list_node_base<OZSceneNode *, void *> { struct __list_node_base<OZSceneNode *, void *> {} *x_1_2_1; struct __list_node_base<OZSceneNode *, void *> {} *x_1_2_2; } x_9_1_1; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<OZSceneNode *, void *> > > { unsigned long long x_2_2_1; } x_9_1_2; } x9; struct OZSceneNode {} *x10; struct OZGroup {} *x11; struct set<OZElement *, std::__1::less<OZElement *>, std::__1::allocator<OZElement *> > { struct __tree<OZElement *, std::__1::less<OZElement *>, std::__1::allocator<OZElement *> > { struct __tree_node<OZElement *, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<OZElement *, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::less<OZElement *> > { unsigned long long x_3_3_1; } x_1_2_3; } x_12_1_1; } x12; struct map<unsigned int, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > *, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > *> > > { struct __tree<std::__1::__value_type<unsigned int, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > *>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > *>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > *> > > { struct __tree_node<std::__1::__value_type<unsigned int, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > *>, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > *>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > *>, std::__1::less<unsigned int>, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_13_1_1; } x13; struct OZNodeMap { unsigned int *x_14_1_1; struct OZObjectManipulator {} **x_14_1_2; int x_14_1_3; int x_14_1_4; unsigned int x_14_1_5; struct OZObjectManipulator {} *x_14_1_6; struct PCMutex { int (**x_7_2_1)(); struct _opaque_pthread_mutex_t { long long x_2_3_1; BOOL x_2_3_2[56]; } x_7_2_2; } x_14_1_7; } x14; struct PCTimeRange { struct FigTime { double x_1_2_1; } x_15_1_1; struct FigTime { double x_2_2_1; } x_15_1_2; } x15; struct PCTimeRange { struct FigTime { double x_1_2_1; } x_16_1_1; struct FigTime { double x_2_2_1; } x_16_1_2; } x16; unsigned int x17; bool x18; struct OZRenderManager {} *x19; struct OZGuideSet { int (**x_20_1_1)(); struct __tree<OZGuide, std::__1::less<OZGuide>, std::__1::allocator<OZGuide> > { struct __tree_node<OZGuide, void *> {} *x_2_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<OZGuide, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_2_2_2; struct __compressed_pair<unsigned long, std::__1::less<OZGuide> > { unsigned long long x_3_3_1; } x_2_2_3; } x_20_1_2; } x20; unsigned int x21; unsigned int x22; struct vector<OZObjectManipulator *, std::__1::allocator<OZObjectManipulator *> > { struct OZObjectManipulator {} **x_23_1_1; struct OZObjectManipulator {} **x_23_1_2; struct __compressed_pair<OZObjectManipulator **, std::__1::allocator<OZObjectManipulator *> > { struct OZObjectManipulator {} **x_3_2_1; } x_23_1_3; } x23; bool x24; bool x25; struct OZDocument {} *x26; unsigned int x27; struct PCHash128 { unsigned int x_28_1_1[4]; } x28; struct PCMutex { int (**x_29_1_1)(); struct _opaque_pthread_mutex_t { long long x_2_2_1; BOOL x_2_2_2[56]; } x_29_1_2; } x29; struct map<PCHash128, PCMutexRef, std::__1::less<PCHash128>, std::__1::allocator<std::__1::pair<const PCHash128, PCMutexRef> > > { struct __tree<std::__1::__value_type<PCHash128, PCMutexRef>, std::__1::__map_value_compare<PCHash128, std::__1::__value_type<PCHash128, PCMutexRef>, std::__1::less<PCHash128>, true>, std::__1::allocator<std::__1::__value_type<PCHash128, PCMutexRef> > > { struct __tree_node<std::__1::__value_type<PCHash128, PCMutexRef>, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<PCHash128, PCMutexRef>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<PCHash128, std::__1::__value_type<PCHash128, PCMutexRef>, std::__1::less<PCHash128>, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_30_1_1; } x30; struct PCSpinLock { int x_31_1_1; } x31; struct list<OZCPPObserver *, std::__1::allocator<OZCPPObserver *> > { struct __list_node_base<OZCPPObserver *, void *> { struct __list_node_base<OZCPPObserver *, void *> {} *x_1_2_1; struct __list_node_base<OZCPPObserver *, void *> {} *x_1_2_2; } x_32_1_1; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<OZCPPObserver *, void *> > > { unsigned long long x_2_2_1; } x_32_1_2; } x32; struct set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > { struct __tree<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > { struct __tree_node<unsigned int, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<unsigned int, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::less<unsigned int> > { unsigned long long x_3_3_1; } x_1_2_3; } x_33_1_1; } x33; bool x34; int x35; bool x36; unsigned int x37; int x38; struct vector<OZLockingGroup *, std::__1::allocator<OZLockingGroup *> > { struct OZLockingGroup {} **x_39_1_1; struct OZLockingGroup {} **x_39_1_2; struct __compressed_pair<OZLockingGroup **, std::__1::allocator<OZLockingGroup *> > { struct OZLockingGroup {} **x_3_2_1; } x_39_1_3; } x39; struct PCRenderModel { int x_40_1_1; struct PCColorSpaceHandle { struct CGColorSpace {} *x_2_2_1; } x_40_1_2; float x_40_1_3; } x40; }*)scene;
- (const struct OZSceneSettings { int (**x1)(); int x2; int x3; unsigned int x4; bool x5; unsigned int x6; double x7; bool x8; unsigned int x9; double x10; struct PCColor { struct ColorComponents { int x_1_2_1; double x_1_2_2[5]; } x_11_1_1; struct PCColorSpaceHandle { struct CGColorSpace {} *x_2_2_1; } x_11_1_2; } x11; int x12; bool x13; unsigned int x14; unsigned int x15; double x16; bool x17; bool x18; double x19; int x20; struct PCString { struct __CFString {} *x_21_1_1; } x21; unsigned int x22; unsigned int x23; double x24; unsigned int x25; unsigned int x26; unsigned int x27; bool x28; float x29; int x30; bool x31; int x32; bool x33; int x34; int x35; bool x36; struct FigTime { double x_37_1_1; } x37; bool x38; }*)sceneSettings;
- (void)startFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 ofImageParam:(unsigned int)arg2;
- (void)startFxTimeForEffect:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (void)startFxTimeOfInputAToTransition:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (void)startFxTimeOfInputBToTransition:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (void)startFxTimeOfInputToFilter:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (double)startTimeForEffect:(id)arg1;
- (double)startTimeOfImageParm:(unsigned int)arg1 forEffect:(id)arg2;
- (double)startTimeOfInputAToTransition:(id)arg1;
- (double)startTimeOfInputBToTransition:(id)arg1;
- (double)startTimeOfInputToFilter:(id)arg1;
- (double)timelineDurationForEffect:(id)arg1;
- (unsigned long long)timelineFpsDenominatorForEffect:(id)arg1;
- (unsigned long long)timelineFpsNumeratorForEffect:(id)arg1;
- (void)timelineFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 fromImageTime:(union { double x1; struct { /* ? */ } *x2; })arg2 forParmId:(unsigned int)arg3;
- (void)timelineFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 fromInputATime:(union { double x1; struct { /* ? */ } *x2; })arg2;
- (void)timelineFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 fromInputBTime:(union { double x1; struct { /* ? */ } *x2; })arg2;
- (void)timelineFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 fromInputTime:(union { double x1; struct { /* ? */ } *x2; })arg2;
- (double)timelineTimeFromImageTime:(double)arg1 forParmId:(unsigned int)arg2 forEffect:(id)arg3;
- (double)timelineTimeFromInputATime:(double)arg1 forTransition:(id)arg2;
- (double)timelineTimeFromInputBTime:(double)arg1 forTransition:(id)arg2;
- (double)timelineTimeFromInputTime:(double)arg1 forFilter:(id)arg2;
- (double)transitionTimeFractionAtTime:(double)arg1;
- (union { double x1; struct { /* ? */ } *x2; })zeroTime;

@end