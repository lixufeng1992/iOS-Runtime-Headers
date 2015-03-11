/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface PKExtendedPhysicsBody : PKPhysicsBody {
    float _areaFactor;
    int _associations;
}

@property float normalizedDensity;

+ (id)bodyWithCircleOfRadius:(float)arg1;
+ (id)bodyWithEdgeChainFromPath:(struct CGPath { }*)arg1;
+ (id)bodyWithEdgeFromPoint:(struct CGPoint { float x1; float x2; })arg1 toPoint:(struct CGPoint { float x1; float x2; })arg2;
+ (id)bodyWithEdgeLoopFromPath:(struct CGPath { }*)arg1;
+ (id)bodyWithPolygonFromPath:(struct CGPath { }*)arg1;
+ (id)bodyWithRectangleOfSize:(struct CGSize { float x1; float x2; })arg1;

- (void)associate;
- (id)description;
- (BOOL)dissociate;
- (id)init;
- (id)initWithRectangleOfSize:(struct CGSize { float x1; float x2; })arg1;
- (float)normalizedDensity;
- (void)setNormalizedDensity:(float)arg1;

@end
