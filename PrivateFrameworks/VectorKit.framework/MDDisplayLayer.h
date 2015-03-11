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

@class <GGLRenderQueueSource>, GGLLayer, NSString;

@interface MDDisplayLayer : NSObject <GGLRenderQueueSource, MDRenderTarget> {
    struct shared_ptr<ggl::GLDevice> { 
        struct GLDevice {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    struct shared_ptr<ggl::GLRenderer> { 
        struct GLRenderer {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long __sig; 
            BOOL __opaque[40]; 
        } __m_; 
    struct unique_ptr<md::DebugConsoleManager, std::__1::default_delete<md::DebugConsoleManager> > { 
        struct __compressed_pair<md::DebugConsoleManager *, std::__1::default_delete<md::DebugConsoleManager> > { 
            struct DebugConsoleManager {} *__first_; 
        } __ptr_; 
    struct unique_ptr<ggl::RenderQueue, std::__1::default_delete<ggl::RenderQueue> > { 
        struct __compressed_pair<ggl::RenderQueue *, std::__1::default_delete<ggl::RenderQueue> > { 
            struct RenderQueue {} *__first_; 
        } __ptr_; 
    struct unique_ptr<ggl::RenderTarget, std::__1::default_delete<ggl::RenderTarget> > { 
        struct __compressed_pair<ggl::RenderTarget *, std::__1::default_delete<ggl::RenderTarget> > { 
            struct RenderTarget {} *__first_; 
        } __ptr_; 
    struct unique_ptr<ggl::RenderTargetOperation, std::__1::default_delete<ggl::RenderTargetOperation> > { 
        struct __compressed_pair<ggl::RenderTargetOperation *, std::__1::default_delete<ggl::RenderTargetOperation> > { 
            struct RenderTargetOperation {} *__first_; 
        } __ptr_; 
    struct unique_ptr<ggl::RenderBuffer, std::__1::default_delete<ggl::RenderBuffer> > { 
        struct __compressed_pair<ggl::RenderBuffer *, std::__1::default_delete<ggl::RenderBuffer> > { 
            struct RenderBuffer {} *__first_; 
        } __ptr_; 
    struct unique_ptr<ggl::RenderBuffer, std::__1::default_delete<ggl::RenderBuffer> > { 
        struct __compressed_pair<ggl::RenderBuffer *, std::__1::default_delete<ggl::RenderBuffer> > { 
            struct RenderBuffer {} *__first_; 
        } __ptr_; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _bounds;
    float _contentsScale;
    } _debugConsoleManager;
    } _debugConsoleManagerCreationLock;
    } _device;
    BOOL _forceMSAATarget;
    GGLLayer *_layer;
    } _msaaBlitOperation;
    } _msaaColorBuffer;
    } _msaaDepthStencilBuffer;
    } _msaaRenderTarget;
    } _renderQueueOuter;
    <GGLRenderQueueSource> *_renderSource;
    } _renderer;
    BOOL _requiresMultisampling;
    struct CGContext { } *_snapshotContext;
    BOOL _useMultisampling;
}

@property(readonly) struct GLRenderer { int (**x1)(); struct Device {} *x2; unsigned int x3; unsigned int x4; boolx5; float x6; boolx7; id x8; struct RenderState {} *x9; /* Warning: unhandled struct encoding: '{unique_ptr<ggl::OESContext' */ struct x10; void*x11; void*x12; void*x13; void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; void*x20; void*x21; void*x22; void*x23; void*x24; void*x25; void*x26; void*x27; void*x28; void*x29; void*x30; void*x31; void*x32; void*x33; void*x34; void*x35; void*x36; void*x37; void*x38; void*x39; void*x40; void*x41; void*x42; void*x43; void*x44; void*x45; void*x46; void*x47; void*x48; void*x49; void*x50; void*x51; void*x52; void*x53; void*x54; void*x55; void*x56; void*x57; void*x58; void*x59; void*x60; void*x61; void*x62; void*x63; void*x64; void*x65; void*x66; void*x67; void*x68; void*x69; void*x70; void*x71; void*x72; void*x73; void*x74; void*x75; void*x76; void*x77; void*x78; void*x79; void*x80; void*x81; void*x82; short x83; void*x84; void*x85; void*x86; void*x87; void*x88; void*x89; void*x90; void*x91; }* renderer; /* unknown property attribute:  std::__1::default_delete<ggl::CommandBuffer> >=^{CommandBuffer}}}} */
@property(readonly) float averageFPS;
@property(readonly) float contentScale;
@property(copy,readonly) NSString * debugDescription;
@property BOOL debugEnableMultisampling;
@property(copy,readonly) NSString * description;
@property(readonly) struct shared_ptr<ggl::Device> { struct Device {} *x1; struct __shared_weak_count {} *x2; } device;
@property(readonly) unsigned int hash;
@property(readonly) GGLLayer * layer;
@property <GGLRenderQueueSource> * renderSource;
@property(readonly) struct CGSize { float x1; float x2; } size;
@property(readonly) struct CGSize { float x1; float x2; } sizeInPixels;
@property(readonly) Class superclass;
@property BOOL useMultisampling;

- (struct GLRenderer { int (**x1)(); struct Device {} *x2; unsigned int x3; unsigned int x4; boolx5; float x6; boolx7; id x8; struct RenderState {} *x9; struct unique_ptr<ggl::OESContext, std::__1::default_delete<ggl::OESContext> > { struct __compressed_pair<ggl::OESContext *, std::__1::default_delete<ggl::OESContext> > { struct OESContext {} *x_1_2_1; } x_10_1_1; } x10; struct RenderTarget {} *x11; struct TransactionBuffer { struct deque<std::__1::shared_ptr<ggl::RenderTransaction>, std::__1::allocator<std::__1::shared_ptr<ggl::RenderTransaction> > > { struct __split_buffer<std::__1::shared_ptr<ggl::RenderTransaction> *, std::__1::allocator<std::__1::shared_ptr<ggl::RenderTransaction> *> > { struct shared_ptr<ggl::RenderTransaction> {} **x_1_3_1; struct shared_ptr<ggl::RenderTransaction> {} **x_1_3_2; struct shared_ptr<ggl::RenderTransaction> {} **x_1_3_3; struct __compressed_pair<std::__1::shared_ptr<ggl::RenderTransaction> **, std::__1::allocator<std::__1::shared_ptr<ggl::RenderTransaction> *> > { struct shared_ptr<ggl::RenderTransaction> {} **x_4_4_1; } x_1_3_4; } x_1_2_1; unsigned int x_1_2_2; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::shared_ptr<ggl::RenderTransaction> > > { unsigned long x_3_3_1; } x_1_2_3; } x_12_1_1; } x12; struct unique_ptr<ggl::PerformanceHUD, std::__1::default_delete<ggl::PerformanceHUD> > { struct __compressed_pair<ggl::PerformanceHUD *, std::__1::default_delete<ggl::PerformanceHUD> > { struct PerformanceHUD {} *x_1_2_1; } x_13_1_1; } x13; struct vector<std::__1::shared_ptr<ggl::DebugRenderer>, std::__1::allocator<std::__1::shared_ptr<ggl::DebugRenderer> > > { struct shared_ptr<ggl::DebugRenderer> {} *x_14_1_1; struct shared_ptr<ggl::DebugRenderer> {} *x_14_1_2; struct __compressed_pair<std::__1::shared_ptr<ggl::DebugRenderer> *, std::__1::allocator<std::__1::shared_ptr<ggl::DebugRenderer> > > { struct shared_ptr<ggl::DebugRenderer> {} *x_3_2_1; } x_14_1_3; } x14; struct deque<std::__1::pair<unsigned long, void *>, std::__1::allocator<std::__1::pair<unsigned long, void *> > > { struct __split_buffer<std::__1::pair<unsigned long, void *> *, std::__1::allocator<std::__1::pair<unsigned long, void *> *> > { struct pair<unsigned long, void *> {} **x_1_2_1; struct pair<unsigned long, void *> {} **x_1_2_2; struct pair<unsigned long, void *> {} **x_1_2_3; struct __compressed_pair<std::__1::pair<unsigned long, void *> **, std::__1::allocator<std::__1::pair<unsigned long, void *> *> > { struct pair<unsigned long, void *> {} **x_4_3_1; } x_1_2_4; } x_15_1_1; unsigned int x_15_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::pair<unsigned long, void *> > > { unsigned long x_3_2_1; } x_15_1_3; } x15; struct unique_ptr<ggl::RenderQueue, std::__1::default_delete<ggl::RenderQueue> > { struct __compressed_pair<ggl::RenderQueue *, std::__1::default_delete<ggl::RenderQueue> > { struct RenderQueue {} *x_1_2_1; } x_16_1_1; } x16; struct vector<ggl::BufferLoadItem, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_17_1_1; struct BufferLoadItem {} *x_17_1_2; struct __compressed_pair<ggl::BufferLoadItem *, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_3_2_1; } x_17_1_3; } x17; struct vector<ggl::Texture2DLoadItem, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_18_1_1; struct Texture2DLoadItem {} *x_18_1_2; struct __compressed_pair<ggl::Texture2DLoadItem *, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_3_2_1; } x_18_1_3; } x18; unsigned int x19; struct unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> > { struct __compressed_pair<ggl::CommandBuffer *, std::__1::default_delete<ggl::CommandBuffer> > { struct CommandBuffer {} *x_1_2_1; } x_20_1_1; } x20; }*)renderer;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_createGLLayer;
- (void)_createMSAARenderTarget;
- (void)_destroyMSAARenderTarget;
- (float)averageFPS;
- (float)contentScale;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 toLayer:(id)arg2;
- (void)dealloc;
- (struct DebugConsole { struct Matrix<float, 2, 1> { float x_1_1_1[2]; } x1; struct Matrix<float, 2, 1> { float x_2_1_1[2]; } x2; struct Matrix<float, 2, 1> { float x_3_1_1[2]; } x3; struct Matrix<float, 2, 1> { float x_4_1_1[2]; } x4; unsigned int x5; struct RenderItem {} *x6; struct unique_ptr<ggl::DataWrite<ggl::ColoredText::MyVertexElement>, std::__1::default_delete<ggl::DataWrite<ggl::ColoredText::MyVertexElement> > > { struct __compressed_pair<ggl::DataWrite<ggl::ColoredText::MyVertexElement> *, std::__1::default_delete<ggl::DataWrite<ggl::ColoredText::MyVertexElement> > > { struct DataWrite<ggl::ColoredText::MyVertexElement> {} *x_1_2_1; } x_7_1_1; } x7; unsigned int x8; struct Matrix<float, 2, 1> {} *x9; struct Matrix<unsigned char, 4, 1> { unsigned char x_10_1_1[4]; } x10; struct Matrix<unsigned char, 4, 1> { unsigned char x_11_1_1[4]; } x11; float x12; }*)debugConsoleForId:(int)arg1;
- (BOOL)debugEnableMultisampling;
- (void)destroyLayer;
- (struct shared_ptr<ggl::Device> { struct Device {} *x1; struct __shared_weak_count {} *x2; })device;
- (void)didEnterBackground;
- (void)didReadPixels:(struct shared_ptr<ggl::BitmapData> { struct BitmapData {} *x1; struct __shared_weak_count {} *x2; }*)arg1;
- (void)didReceiveMemoryWarning;
- (void)disablePerformanceHUD:(id)arg1;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)drawWithTimestamp:(double)arg1;
- (void)enablePerformanceHUD:(id)arg1;
- (void)expandedPerformanceHUD:(id)arg1;
- (void)forceLayout;
- (id)init;
- (id)layer;
- (void)recreateLayer;
- (struct RenderQueue { struct vector<ggl::RenderQueue::Pass, std::__1::allocator<ggl::RenderQueue::Pass> > { struct Pass {} *x_1_1_1; struct Pass {} *x_1_1_2; struct __compressed_pair<ggl::RenderQueue::Pass *, std::__1::allocator<ggl::RenderQueue::Pass> > { struct Pass {} *x_3_2_1; } x_1_1_3; } x1; struct vector<ggl::CommandBuffer *, std::__1::allocator<ggl::CommandBuffer *> > { struct CommandBuffer {} **x_2_1_1; struct CommandBuffer {} **x_2_1_2; struct __compressed_pair<ggl::CommandBuffer **, std::__1::allocator<ggl::CommandBuffer *> > { struct CommandBuffer {} **x_3_2_1; } x_2_1_3; } x2; struct shared_ptr<ggl::RenderTransaction> { struct RenderTransaction {} *x_3_1_1; struct __shared_weak_count {} *x_3_1_2; } x3; }*)renderQueue;
- (id)renderSource;
- (void)resetRenderQueue;
- (void)setBackgroundColor:(struct CGColor { }*)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setContentsGravity:(id)arg1;
- (void)setContentsScale:(float)arg1;
- (void)setDebugEnableMultisampling:(BOOL)arg1;
- (void)setNeedsDisplayOnBoundsChange:(BOOL)arg1;
- (void)setOpaque:(BOOL)arg1;
- (void)setRenderSource:(id)arg1;
- (void)setUseMultisampling:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })size;
- (struct CGSize { float x1; float x2; })sizeInPixels;
- (BOOL)useMultisampling;

@end
