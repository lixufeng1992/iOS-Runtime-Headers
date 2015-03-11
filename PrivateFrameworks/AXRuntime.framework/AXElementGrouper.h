/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
 */

@interface AXElementGrouper : NSObject {
    unsigned int _maximumGroupSize;
    unsigned int _minimumGroupSize;
    unsigned int _preferredGroupSize;
    float _thresholdForDeterminingEqualSize;
}

@property unsigned int maximumGroupSize;
@property unsigned int minimumGroupSize;
@property unsigned int preferredGroupSize;
@property float thresholdForDeterminingEqualSize;

- (id)_buildHierarchyForGroup:(id)arg1 indexOfKeyboard:(unsigned int*)arg2;
- (id)_flattenHierarchyForGroup:(id)arg1 rootLevel:(BOOL)arg2;
- (BOOL)_frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 isApproximatelySameSizeAsFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)_groupRemovingImpossibleGroups:(id)arg1 isRootLevel:(BOOL)arg2;
- (id)_groupablesForItems:(id)arg1;
- (id)groupElementsInRootGroup:(id)arg1;
- (id)initWithPadInterfaceHeuristics:(BOOL)arg1;
- (unsigned int)maximumGroupSize;
- (unsigned int)minimumGroupSize;
- (unsigned int)preferredGroupSize;
- (void)setMaximumGroupSize:(unsigned int)arg1;
- (void)setMinimumGroupSize:(unsigned int)arg1;
- (void)setPreferredGroupSize:(unsigned int)arg1;
- (void)setThresholdForDeterminingEqualSize:(float)arg1;
- (float)thresholdForDeterminingEqualSize;

@end
