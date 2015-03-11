/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSMutableArray, NSString;

@interface VKRasterOverlayMapModel : VKMapTileModel <VKMapLayer> {
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { 
        struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { 
            struct RenderState {} *__first_; 
        } __ptr_; 
    struct unique_ptr<ggl::Mesh, std::__1::default_delete<ggl::Mesh> > { 
        struct __compressed_pair<ggl::Mesh *, std::__1::default_delete<ggl::Mesh> > { 
            struct Mesh {} *__first_; 
        } __ptr_; 
    struct unique_ptr<ggl::ClearItem, std::__1::default_delete<ggl::ClearItem> > { 
        struct __compressed_pair<ggl::ClearItem *, std::__1::default_delete<ggl::ClearItem> > { 
            struct ClearItem {} *__first_; 
        } __ptr_; 
    } _clearItem;
    } _gglRenderState;
    unsigned int _level;
    NSMutableArray *_sortedTiles;
    } _unitMesh;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(struct RenderQueue { int (**x1)(); struct shared_ptr<ggl::RenderQueue> { struct RenderQueue {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; }*)arg3;
- (id)initWithLevel:(unsigned int)arg1;
- (unsigned long long)mapLayerPosition;
- (void)reset;
- (BOOL)shouldLayoutWithoutStyleManager;

@end
