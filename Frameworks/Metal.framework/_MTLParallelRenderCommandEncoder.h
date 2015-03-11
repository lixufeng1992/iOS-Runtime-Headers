/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@class <MTLCommandQueue>, <MTLDevice>, MTLRenderPassDescriptor, NSString, _MTLCommandBuffer<MTLCommandBuffer>;

@interface _MTLParallelRenderCommandEncoder : NSObject <MTLParallelRenderCommandEncoder> {
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    _MTLCommandBuffer<MTLCommandBuffer> *_commandBuffer;
    id *_commandBuffers;
    unsigned long _commandBuffersCount;
    unsigned long _commandBuffersSize;
    <MTLDevice> *_device;
    NSString *_label;
    } _lock;
    <MTLCommandQueue> *_queue;
    MTLRenderPassDescriptor *_renderPassDescriptor;
    BOOL _retainedReferences;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) <MTLDevice> * device;
@property(readonly) unsigned int hash;
@property(copy) NSString * label;
@property(readonly) Class superclass;

- (id)_renderCommandEncoderCommon;
- (id)commandBuffer;
- (void)dealloc;
- (id)description;
- (id)device;
- (void)endEncoding;
- (id)initWithCommandBuffer:(id)arg1 renderPassDescriptor:(id)arg2;
- (void)insertDebugSignpost:(id)arg1;
- (id)label;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)arg1;
- (id)renderCommandEncoder;
- (id)sampledRenderCommandEncoderWithProgramInfoBuffer:(struct { unsigned int x1 : 8; unsigned int x2 : 24; unsigned int x3; unsigned long long x4; unsigned long long x5; }*)arg1 capacity:(unsigned int)arg2;
- (void)setLabel:(id)arg1;

@end
