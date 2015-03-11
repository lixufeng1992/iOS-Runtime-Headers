/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class CAEAGLLayer;

@interface TSCH3DGLESEAGLLayerBufferStorage : TSCH3DRenderBufferStorage {
    struct tvec2<int> { 
        union { 
            int x; 
            int r; 
            int s; 
        } ; 
        union { 
            int y; 
            int g; 
            int t; 
        } ; 
    CAEAGLLayer *mLayer;
    } mSize;
}

+ (id)storageWithLayer:(id)arg1;

- (id).cxx_construct;
- (void)allocateStorageWithFramebufferAttributes:(const struct FramebufferAttributes { int x1; int x2; int x3; int x4; int x5; BOOL x6; BOOL x7; }*)arg1 size:(struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg2 internalFormat:(unsigned int)arg3;
- (void)dealloc;
- (id)initWithLayer:(id)arg1;
- (void)updateSize;

@end
