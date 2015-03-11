/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLDebugBuffer : MTLToolsBuffer {
    unsigned int _options;
    const void *_pointer;
    unsigned int _purgeableState;
    BOOL _purgeableStateHasBeenSet;
}

@property unsigned int options;
@property(readonly) const void* pointer;
@property(readonly) unsigned int purgeableState;
@property(readonly) BOOL purgeableStateHasBeenSet;

- (id)description;
- (id)initWithBuffer:(id)arg1 device:(id)arg2 bytes:(const void*)arg3 options:(unsigned int)arg4;
- (id)initWithBuffer:(id)arg1 device:(id)arg2 options:(unsigned int)arg3;
- (id)newTextureWithDescriptor:(id)arg1 offset:(unsigned int)arg2 bytesPerRow:(unsigned int)arg3;
- (unsigned int)options;
- (const void*)pointer;
- (unsigned int)purgeableState;
- (BOOL)purgeableStateHasBeenSet;
- (void)setOptions:(unsigned int)arg1;
- (unsigned int)setPurgeableState:(unsigned int)arg1;

@end
