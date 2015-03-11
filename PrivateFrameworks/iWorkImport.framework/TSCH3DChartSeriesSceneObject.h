/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartSeriesSceneObject : TSCH3DChartElementSceneObject {
}

+ (float)chartSeriesPolygonOffset;
+ (id)createBoundsForSeries:(id)arg1;
+ (float)depthLimitFactorForSeriesCount:(int)arg1 maxLimitingSeries:(int)arg2;
+ (Class)propertiesClass;
+ (BOOL)shouldCreateMeshSeriesStorage;

- (float)chartMinZForScene:(id)arg1;
- (float)depthForScene:(id)arg1;
- (void)postrenderElement:(const struct RenderElementInfo { id x1; id x2; id x3; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_4_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_4_1_2; } x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; }*)arg1;
- (void)prerenderElement:(const struct RenderElementInfo { id x1; id x2; id x3; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_4_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_4_1_2; } x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; }*)arg1;
- (void)renderLabelsSceneObject:(id)arg1 pipeline:(id)arg2 enumerator:(id)arg3 properties:(id)arg4;
- (float)shadowCameraDepthLimitAdjustmentFactorForScene:(id)arg1;
- (BOOL)shouldRenderSeries:(id)arg1;
- (void)sortElements:(struct vector<TSCH3D::RenderElementInfo, std::__1::allocator<TSCH3D::RenderElementInfo> > { struct RenderElementInfo {} *x1; struct RenderElementInfo {} *x2; struct __compressed_pair<TSCH3D::RenderElementInfo *, std::__1::allocator<TSCH3D::RenderElementInfo> > { struct RenderElementInfo {} *x_3_1_1; } x3; }*)arg1 pipeline:(id)arg2;
- (BOOL)transparencyDepthMask;
- (void)updateElementEffectsStates:(const struct RenderElementInfo { id x1; id x2; id x3; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_4_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_4_1_2; } x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; }*)arg1 depthToWidthRatio:(float)arg2;
- (void)updateTilingEffect:(struct TexCoordTilingShaderEffectState { struct array<TSCH3D::TexCoordTilingShaderEffectState::Data, 3> { struct Data { struct tvec2<float> { union { float x_1_4_1; float x_1_4_2; float x_1_4_3; } x_1_3_1; union { float x_2_4_1; float x_2_4_2; float x_2_4_3; } x_1_3_2; } x_1_2_1; struct tvec2<float> { union { float x_1_4_1; float x_1_4_2; float x_1_4_3; } x_2_3_1; union { float x_2_4_1; float x_2_4_2; float x_2_4_3; } x_2_3_2; } x_1_2_2; } x_1_1_1[3]; } x1; }*)arg1 properties:(id)arg2 textureTiling:(id)arg3 size:(struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; }*)arg4;

@end
