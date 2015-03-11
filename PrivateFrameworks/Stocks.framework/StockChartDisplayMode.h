/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@class NSString, UIColor;

@interface StockChartDisplayMode : NSObject <NSCopying> {
    struct CGSize { 
        float width; 
        float height; 
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    BOOL _HUDEnabled;
    UIColor *_axisLabelsColor;
    struct CGGradient { } *_backgroundGradient;
    UIColor *_backgroundLinesColor;
    } _chartSize;
    BOOL _graphOverlapsYAxisLabels;
    NSString *_hash;
    unsigned int _horizontalGridlineCount;
    float _intervalRowHeight;
    UIColor *_lineColor;
    } _lineGraphInsets;
    float _lineWidth;
    int _maxInterval;
    BOOL _showsPriceLabelForPreviousClose;
    float _showsTitle;
    BOOL _showsVolume;
    BOOL _usesDetailedAxisLabels;
    float _volumeHeight;
    UIColor *_xAxisKeylineColor;
    unsigned int _yAxisLabelCount;
}

@property BOOL HUDEnabled;
@property(retain) UIColor * axisLabelsColor;
@property struct CGGradient { }* backgroundGradient;
@property(retain) UIColor * backgroundLinesColor;
@property struct CGSize { float x1; float x2; } chartSize;
@property BOOL graphOverlapsYAxisLabels;
@property(readonly) float gutterHeight;
@property unsigned int horizontalGridlineCount;
@property float intervalRowHeight;
@property(retain) UIColor * lineColor;
@property(readonly) float lineGraphBottomPadding;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } lineGraphInsets;
@property float lineWidth;
@property int maxInterval;
@property BOOL showsPriceLabelForPreviousClose;
@property float showsTitle;
@property BOOL showsVolume;
@property BOOL usesDetailedAxisLabels;
@property float volumeHeight;
@property(retain) UIColor * xAxisKeylineColor;
@property unsigned int yAxisLabelCount;

+ (id)defaultDisplayMode;

- (void).cxx_destruct;
- (BOOL)HUDEnabled;
- (id)axisLabelsColor;
- (struct CGGradient { }*)backgroundGradient;
- (id)backgroundLinesColor;
- (struct CGSize { float x1; float x2; })chartSize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)graphOverlapsYAxisLabels;
- (float)gutterHeight;
- (unsigned int)hash;
- (unsigned int)horizontalGridlineCount;
- (id)init;
- (float)intervalRowHeight;
- (BOOL)isEqual:(id)arg1;
- (id)lineColor;
- (float)lineGraphBottomPadding;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })lineGraphInsets;
- (float)lineWidth;
- (int)maxInterval;
- (void)setAxisLabelsColor:(id)arg1;
- (void)setBackgroundGradient:(struct CGGradient { }*)arg1;
- (void)setBackgroundLinesColor:(id)arg1;
- (void)setChartSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setGraphOverlapsYAxisLabels:(BOOL)arg1;
- (void)setHUDEnabled:(BOOL)arg1;
- (void)setHorizontalGridlineCount:(unsigned int)arg1;
- (void)setIntervalRowHeight:(float)arg1;
- (void)setLineColor:(id)arg1;
- (void)setLineGraphInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setLineWidth:(float)arg1;
- (void)setMaxInterval:(int)arg1;
- (void)setShowsPriceLabelForPreviousClose:(BOOL)arg1;
- (void)setShowsTitle:(float)arg1;
- (void)setShowsVolume:(BOOL)arg1;
- (void)setUsesDetailedAxisLabels:(BOOL)arg1;
- (void)setVolumeHeight:(float)arg1;
- (void)setXAxisKeylineColor:(id)arg1;
- (void)setYAxisLabelCount:(unsigned int)arg1;
- (BOOL)showsPriceLabelForPreviousClose;
- (float)showsTitle;
- (BOOL)showsVolume;
- (BOOL)usesDetailedAxisLabels;
- (float)volumeHeight;
- (id)xAxisKeylineColor;
- (unsigned int)yAxisLabelCount;

@end
