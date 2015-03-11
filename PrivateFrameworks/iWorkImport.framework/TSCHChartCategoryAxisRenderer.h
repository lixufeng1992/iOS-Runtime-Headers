/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartCategoryAxisRenderer : TSCHChartAxisRenderer {
}

- (void)addSelection:(id)arg1 toCGPath:(struct CGPath { }*)arg2;
- (BOOL)canEditTextForSelectionPath:(id)arg1;
- (BOOL)canRenderSelectionPath:(id)arg1;
- (id)categoryAxisLayoutItem;
- (void)drawIntoLayer:(int)arg1 inContext:(struct CGContext { }*)arg2 visible:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForEditingTextForSelectionPath:(id)arg1;
- (unsigned int)p_categoryIndexForSelectionPath:(id)arg1;
- (BOOL)p_doesSelectionPathReferToAxisLabel:(id)arg1;
- (BOOL)p_doesSelectionPathReferToAxisSeriesLabel:(id)arg1;
- (void)p_drawIntoLayer:(int)arg1 inContext:(struct CGContext { }*)arg2 visible:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 limitRenderLabels:(int)arg4 limitLabelIndex:(unsigned int)arg5 rangePtr:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg6;
- (unsigned int)p_seriesIndexForSelectionPath:(id)arg1;
- (void)renderIntoContext:(struct CGContext { }*)arg1 selection:(id)arg2;
- (id)transparencyLayers;

@end
