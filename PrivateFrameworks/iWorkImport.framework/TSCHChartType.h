/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSCHChartFeature;

@interface TSCHChartType : NSObject <TSDMixing> {
    TSCHChartFeature *mFeature;
}

+ (id)allChartTypes;
+ (id)areaChart3D;
+ (id)areaChart;
+ (id)barChart3D;
+ (id)barChart;
+ (id)bubbleChart;
+ (id)chartTypePlaceholderForDefault3DScaleProperty;
+ (id)columnChart3D;
+ (id)columnChart;
+ (id)constantDepthInfoChartScaleForInfoChartScale:(id)arg1 chartType:(id)arg2 barShape:(int)arg3;
+ (id)lineChart3D;
+ (id)lineChart;
+ (id)mixedChart;
+ (id)multiDataBarChart;
+ (id)multiDataBubbleChart;
+ (id)multiDataColumnChart;
+ (id)multiDataScatterChart;
+ (id)pieChart3D;
+ (id)pieChart;
+ (float)sageDepthFactorForExportingChartInfo:(id)arg1;
+ (id)scatterChart;
+ (id)stackedAreaChart3D;
+ (id)stackedAreaChart;
+ (id)stackedBarChart3D;
+ (id)stackedBarChart;
+ (id)stackedColumnChart3D;
+ (id)stackedColumnChart;
+ (id)twoYAxisChart;

- (id)allCDESectionLabels;
- (id)animationDeliveryStylesForFilter:(id)arg1;
- (id)animationFiltersWithDefaultFilters:(id)arg1;
- (BOOL)approximatesTitleAccommodationUsingLegendSize;
- (id)cascadeTimeSliceWithChartInfo:(id)arg1 renderSeriesProvider:(id)arg2 animationClass:(Class)arg3;
- (id)categoryAxisIDs;
- (float)categoryAxisTitleRotation;
- (int)chartBodyBoundsDefinition;
- (Class)chartLayoutClass;
- (Class)chartLayoutItemClass;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)defaultDataFileName;
- (id)defaultSeriesType:(unsigned int)arg1;
- (int)deprecated3DBevelEdgesSpecificProperty;
- (int)deprecated3DShadowSpecificProperty;
- (BOOL)drawValueLabelsForZero;
- (BOOL)explosionAffectsChartBodyBounds;
- (id)g_genericToSpecificPropertyMapArea;
- (id)g_genericToSpecificPropertyMapBar;
- (id)g_genericToSpecificPropertyMapBubble;
- (id)g_genericToSpecificPropertyMapColumn;
- (id)g_genericToSpecificPropertyMapLine;
- (id)g_genericToSpecificPropertyMapMixed;
- (id)g_genericToSpecificPropertyMapPie;
- (id)g_genericToSpecificPropertyMapScatter;
- (id)g_genericToSpecificPropertyMapStackedArea;
- (id)g_genericToSpecificPropertyMapStackedBar;
- (id)g_genericToSpecificPropertyMapStackedColumn;
- (id)g_genericToSpecificPropertyMapTwoAxis;
- (id)genericToSpecificPropertyMap;
- (id)imageWithPreset:(id)arg1 target:(int)arg2 imageSize:(struct CGSize { float x1; float x2; })arg3 imageScale:(float)arg4 swatchFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg5 documentRoot:(id)arg6 shouldCache:(BOOL*)arg7;
- (id)init;
- (id)initWithFeatureClass:(Class)arg1;
- (BOOL)isHorizontal;
- (BOOL)isMultiData;
- (BOOL)isPie;
- (Class)layoutClass;
- (BOOL)layoutFrameShouldEncloseInfoGeometry;
- (id)linearTimeSliceWithChartInfo:(id)arg1 renderSeriesProvider:(id)arg2 animationClass:(Class)arg3;
- (unsigned int)maxCellsToCheckForGridValueType;
- (struct CGSize { float x1; float x2; })minimumChartBodySize;
- (id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2;
- (int)mixingTypeWithObject:(id)arg1;
- (struct CGSize { float x1; float x2; })mungeBodySize:(struct CGSize { float x1; float x2; })arg1;
- (id)otherDimensionChartType;
- (id)p_debugDescription;
- (unsigned int)presentationDimension;
- (Class)presetImagerClass;
- (Class)repClass;
- (BOOL)requiresSeparateLabelsRenderPass;
- (BOOL)requiresYAxisOrdinal;
- (BOOL)reverseSingleColumnLegendOrder;
- (Class)sageGeometeryHelperClass;
- (int)stackingSignRule;
- (unsigned int)styleIndexForAxisID:(id)arg1;
- (id)supportedAxisScales;
- (id)supportedSeriesTypes;
- (BOOL)supportsAxisLabelsOrientation;
- (BOOL)supportsAxisLine;
- (BOOL)supportsBackgroundFill;
- (BOOL)supportsBorderFrame;
- (BOOL)supportsBubbleOptions;
- (BOOL)supportsCategoryAxisLabels;
- (BOOL)supportsCategoryAxisMinorTickmarks;
- (BOOL)supportsCategoryAxisPlotToEdgesOption;
- (BOOL)supportsCategoryAxisSeriesNames;
- (BOOL)supportsCategoryLabelsInChartRangeEditor;
- (BOOL)supportsConnectingLines;
- (BOOL)supportsEditing;
- (BOOL)supportsEditingForAxisID:(id)arg1;
- (BOOL)supportsElementChunking;
- (BOOL)supportsElementSeriesNames;
- (BOOL)supportsErrorBars;
- (BOOL)supportsErrorBarsScatterX;
- (BOOL)supportsGroupedShadows;
- (BOOL)supportsIncrementalResize;
- (BOOL)supportsIndividualShadowRendering;
- (BOOL)supportsLabelExplosion;
- (BOOL)supportsMinorGridlines;
- (BOOL)supportsMoreThanOneLiveCategory;
- (BOOL)supportsMultipleSeriesTypes;
- (BOOL)supportsMultipleValueScales;
- (BOOL)supportsPercentNumberFormatting;
- (BOOL)supportsReverseChunking;
- (BOOL)supportsSeriesFill;
- (BOOL)supportsSeriesLabels;
- (BOOL)supportsSeriesShadow;
- (BOOL)supportsSeriesStroke;
- (BOOL)supportsShadowOffset;
- (BOOL)supportsSharedAndSeparateX;
- (BOOL)supportsShowLabelsInFrontOption;
- (BOOL)supportsSymbolOverhang;
- (BOOL)supportsTickmarks;
- (BOOL)supportsTrendLines;
- (BOOL)supportsValueAxisLabelsPosition;
- (BOOL)supportsValueLabels;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })swatchImageEdgeInsetsForSize:(struct CGSize { float x1; float x2; })arg1;
- (id)timeSliceWithChartInfo:(id)arg1 renderSeriesProvider:(id)arg2 animationClass:(Class)arg3 deliveryStyle:(unsigned int)arg4;
- (id)titlePositionerWithInfo:(id)arg1 scene:(id)arg2;
- (void)updateTitlesForExportingModel:(id)arg1 info:(id)arg2;
- (id)userInterfaceName;
- (Class)valueAxisClassForID:(id)arg1 scale:(int)arg2;
- (id)valueAxisIDs;
- (float)valueAxisTitleRotation;

@end
