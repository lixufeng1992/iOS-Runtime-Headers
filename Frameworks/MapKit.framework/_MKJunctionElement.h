/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKJunctionElement : NSObject {
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    float _angle;
    } _leftBasePoint;
    } _rightBasePoint;
}

@property float angle;
@property struct CGPoint { float x1; float x2; } leftBasePoint;
@property struct CGPoint { float x1; float x2; } rightBasePoint;

- (float)angle;
- (struct CGPoint { float x1; float x2; })leftBasePoint;
- (struct CGPoint { float x1; float x2; })leftEdgePointAtDistanceFromBase:(float)arg1;
- (struct CGPoint { float x1; float x2; })rightBasePoint;
- (struct CGPoint { float x1; float x2; })rightEdgePointAtDistanceFromBase:(float)arg1;
- (void)setAngle:(float)arg1;
- (void)setLeftBasePoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setRightBasePoint:(struct CGPoint { float x1; float x2; })arg1;

@end
