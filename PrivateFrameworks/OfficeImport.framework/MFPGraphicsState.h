/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPGraphicsState : NSObject {
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } mPageTransform;
    } mWorldTransform;
}

- (id).cxx_construct;
- (void)dealloc;
- (id)initWithDefaults;
- (id)initWithGraphicsState:(id)arg1;
- (void)multiplyWorldTransformBy:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1 order:(int)arg2;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })pageTransform;
- (void)removeTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)setPageTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)setWorldTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })worldTransform;

@end
