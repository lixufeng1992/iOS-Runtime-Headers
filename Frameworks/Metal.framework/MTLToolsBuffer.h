/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@class <MTLDevice>, MTLToolsPointerArray, NSString;

@interface MTLToolsBuffer : MTLToolsResource <MTLBuffer> {
    MTLToolsPointerArray *_textures;
}

@property(readonly) unsigned int cpuCacheMode;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) <MTLDevice> * device;
@property(readonly) unsigned int hash;
@property(copy) NSString * label;
@property(readonly) unsigned int length;
@property(readonly) Class superclass;
@property(readonly) MTLToolsPointerArray * textures;

- (void).cxx_destruct;
- (void)acceptVisitor:(id)arg1;
- (void*)contents;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (unsigned int)length;
- (id)newTextureWithDescriptor:(id)arg1 offset:(unsigned int)arg2 bytesPerRow:(unsigned int)arg3;
- (id)textures;

@end
