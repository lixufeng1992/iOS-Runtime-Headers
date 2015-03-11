/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class <CAMModeDialDataSource>, CAGradientLayer, NSMutableArray, NSString, UIImageView, UIView;

@interface CAMModeDial : UIControl {
    UIView *__centeringDebugView;
    NSString *__contentSizeCategory;
    UIView *__dialContainerView;
    CAGradientLayer *__dialGradientLayer;
    UIImageView *__dotImageView;
    UIView *__dotTopMarginLayoutSpacer;
    NSMutableArray *__items;
    UIView *__itemsContainerView;
    struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } *__tapZones;
    <CAMModeDialDataSource> *_dataSource;
    int _orientation;
    unsigned int _selectedIndex;
}

@property(readonly) UIView * _centeringDebugView;
@property(copy,readonly) NSString * _contentSizeCategory;
@property(readonly) UIView * _dialContainerView;
@property(readonly) CAGradientLayer * _dialGradientLayer;
@property(readonly) UIImageView * _dotImageView;
@property(readonly) UIView * _dotTopMarginLayoutSpacer;
@property(readonly) NSMutableArray * _items;
@property(readonly) UIView * _itemsContainerView;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }* _tapZones;
@property <CAMModeDialDataSource> * dataSource;
@property(readonly) int orientation;
@property unsigned int selectedIndex;

- (void).cxx_destruct;
- (float)_approximateWidthOfLabelAtIndex:(int)arg1;
- (id)_centeringDebugView;
- (void)_commonCAMModeDialInitialization;
- (struct CGPoint { float x1; float x2; })_containerPositionFromSelectedIndex;
- (id)_contentSizeCategory;
- (id)_dialContainerView;
- (id)_dialGradientLayer;
- (id)_dotImage;
- (id)_dotImageView;
- (id)_dotTopMarginLayoutSpacer;
- (id)_fontForOrientation:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForOrientation:(int)arg1;
- (id)_horizontalDialMeshTransform;
- (id)_items;
- (id)_itemsContainerView;
- (void)_layoutForHorizontalOrientation;
- (void)_layoutForVerticalOrientation;
- (void)_layoutHorizontalTapZones;
- (void)_layoutVerticalTapZones;
- (void)_setupHorizontalDotConstraints;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)_tapZones;
- (void)_updateContainerViewPositionFromSelectedIndex;
- (id)_verticalDialMeshTransform;
- (id)dataSource;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithOrientation:(int)arg1;
- (void)layoutSubviews;
- (int)orientation;
- (void)reloadData;
- (unsigned int)selectedIndex;
- (void)setDataSource:(id)arg1;
- (void)setSelectedIndex:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)setSelectedIndex:(unsigned int)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)updateToContentSize:(id)arg1;

@end
