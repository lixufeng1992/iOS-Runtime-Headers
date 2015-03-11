/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSCHChartValueAxisLabelsLayoutItem;

@interface TSCHChartValueAxisLayoutItem : TSCHChartAxisLayoutItem {
    TSCHChartValueAxisLabelsLayoutItem *mValueLabels;
}

@property(readonly) TSCHChartValueAxisLabelsLayoutItem * axisValueLabelsLayoutItem;

+ (id)selectionPathType;

- (id)axisValueLabelsLayoutItem;
- (void)buildSubTree;
- (void)dealloc;
- (void)p_layoutLabelsNow;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })protected_layoutSpaceRectForAllLabels;
- (id)renderersWithRep:(id)arg1;

@end
