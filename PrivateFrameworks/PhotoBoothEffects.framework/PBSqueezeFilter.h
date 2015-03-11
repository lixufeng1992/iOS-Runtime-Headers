/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
 */

@interface PBSqueezeFilter : PBFilter {
    struct CGPoint { 
        float x; 
        float y; 
    float _inputAmount;
    boolfirstTime;
    } inputPoint;
    float lastInputRadius;
    float lastInputScale;
    float lastInputX;
    float lastInputY;
}

@property float inputAmount;
@property struct CGPoint { float x1; float x2; } inputPoint;

- (void)applyParametersToCIFilter:(BOOL)arg1 extent:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)ciFilterName;
- (float)inputAmount;
- (struct CGPoint { float x1; float x2; })inputPoint;
- (BOOL)needsWrapMirror;
- (void)setDefaults;
- (void)setInputAmount:(float)arg1;
- (void)setInputPoint:(struct CGPoint { float x1; float x2; })arg1;

@end
