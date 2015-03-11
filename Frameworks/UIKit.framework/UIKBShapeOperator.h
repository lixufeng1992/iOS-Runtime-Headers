/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBShapeOperator : NSObject {
    float _scale;
}

@property float scale;

+ (id)operatorWithScale:(float)arg1;

- (struct { float x1; float x2; })_scaleRange:(struct { float x1; float x2; })arg1 factor:(float)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_scaleRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 factor:(struct CGSize { float x1; float x2; })arg2;
- (id)geometryByScalingShapeGeometry:(id)arg1 factor:(struct CGSize { float x1; float x2; })arg2;
- (float)scale;
- (void)setScale:(float)arg1;
- (id)shapeByScalingShape:(id)arg1 factor:(struct CGSize { float x1; float x2; })arg2;
- (id)shapesByElaboratingShapes:(id)arg1 insideShape:(id)arg2 count:(int)arg3;
- (id)shapesByScalingShapes:(id)arg1 factor:(struct CGSize { float x1; float x2; })arg2;

@end
