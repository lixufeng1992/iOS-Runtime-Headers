/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class GEOVoltaireRasterTileTrafficData, NSArray, NSMutableArray, VKSharedResources;

@interface VKRasterTrafficTile : VKTile {
    struct unique_ptr<vk::TrafficLayer, std::__1::default_delete<vk::TrafficLayer> > { 
        struct __compressed_pair<vk::TrafficLayer *, std::__1::default_delete<vk::TrafficLayer> > { 
            struct TrafficLayer {} *__first_; 
        } __ptr_; 
    NSMutableArray *_incidents;
    GEOVoltaireRasterTileTrafficData *_modelTile;
    VKSharedResources *_sharedResources;
    } _trafficLayer;
}

@property(readonly) /* Warning: unhandled struct encoding: '{TrafficLayer=^^?{vector<vk::TrafficBatch *' */ struct * trafficLayer; /* unknown property attribute:  std::__1::allocator<ggl::OptimizedTraffic::BaseMesh *> >=^^{BaseMesh}}}[1^{RenderState}]{shared_ptr<ggl::Tile::ViewUniformData>=^{ViewUniformData}^{__shared_weak_count}}[1{shared_ptr<ggl::RenderState>=^{RenderState}^{__shared_weak_count}}]I^{TrafficManager}@} */
@property(readonly) NSArray * incidents;

- (struct TrafficLayer { int (**x1)(); struct vector<vk::TrafficBatch *, std::__1::allocator<vk::TrafficBatch *> > { struct TrafficBatch {} **x_2_1_1; struct TrafficBatch {} **x_2_1_2; struct __compressed_pair<vk::TrafficBatch **, std::__1::allocator<vk::TrafficBatch *> > { struct TrafficBatch {} **x_3_2_1; } x_2_1_3; } x2; struct vector<ggl::OptimizedTraffic::BaseMesh *, std::__1::allocator<ggl::OptimizedTraffic::BaseMesh *> > { struct BaseMesh {} **x_3_1_1; struct BaseMesh {} **x_3_1_2; struct __compressed_pair<ggl::OptimizedTraffic::BaseMesh **, std::__1::allocator<ggl::OptimizedTraffic::BaseMesh *> > { struct BaseMesh {} **x_3_2_1; } x_3_1_3; } x3; struct RenderState {} *x4[1]; struct shared_ptr<ggl::Tile::ViewUniformData> { struct ViewUniformData {} *x_5_1_1; struct __shared_weak_count {} *x_5_1_2; } x5; struct shared_ptr<ggl::RenderState> { struct RenderState {} *x_6_1_1; struct __shared_weak_count {} *x_6_1_2; } x6[1]; unsigned int x7; struct TrafficManager {} *x8; id x9; }*)trafficLayer;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_buildGGLLayer:(struct Device { int (**x1)(); int x2; }*)arg1;
- (void)_buildIncidents;
- (void)dealloc;
- (id)incidents;
- (id)initWithKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1 downloadKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2 sharedResources:(id)arg3 trafficData:(id)arg4;

@end
