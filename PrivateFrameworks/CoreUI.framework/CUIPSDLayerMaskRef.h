/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@class CUIPSDLayerRef;

@interface CUIPSDLayerMaskRef : NSObject {
    BOOL _isVectorMask;
    CUIPSDLayerRef *_layerRef;
}

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (struct CGImage { }*)createCGImageMask;
- (void)dealloc;
- (id)initLayerMaskWithLayerRef:(id)arg1;
- (id)initVectorMaskWithLayerRef:(id)arg1;
- (BOOL)isEnabled;
- (BOOL)isInvertedWhenBlending;
- (BOOL)isLinked;
- (id)layerRef;
- (struct CGPath { }*)newBezierPath;
- (struct CGPath { }*)newBezierPathAtScale:(float)arg1;

@end
