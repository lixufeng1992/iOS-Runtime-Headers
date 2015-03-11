/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKPhysicsGrid : NSObject {
    float _height;
    float _width;
}

@property(readonly) float height;
@property(readonly) float width;

+ (id)gridFromOccupancyArray:(const char *)arg1 width:(int)arg2 height:(int)arg3;
+ (id)gridFromTexture:(id)arg1 alphaThreshold:(float)arg2 accuracy:(float)arg3;
+ (id)vectorGridFromTexture:(id)arg1 accuracy:(float)arg2;

- (float)height;
- (void)spritesFromGrid:(id)arg1 gridSize:(struct CGSize { float x1; float x2; })arg2 zPosition:(float)arg3 edgeColor:(id)arg4 interiorColor:(id)arg5 spriteSize:(struct CGSize { float x1; float x2; })arg6 physicsBody:(id)arg7;
- (void)spritesFromGrid:(id)arg1 xDivisions:(int)arg2 zPosition:(float)arg3 spriteSize:(struct CGSize { float x1; float x2; })arg4 texture:(id)arg5 physicsBody:(id)arg6;
- (float)width;

@end
