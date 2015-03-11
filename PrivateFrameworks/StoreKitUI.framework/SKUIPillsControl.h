/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, NSString, SKUIColorScheme, SKUISegmentedControl;

@interface SKUIPillsControl : UIControl {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    SKUIColorScheme *_colorScheme;
    } _contentInset;
    int _maximumNumberOfVisiblePills;
    NSString *_moreListTitle;
    SKUISegmentedControl *_segmentedControl;
    NSArray *_titles;
}

@property(copy) SKUIColorScheme * colorScheme;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentInset;
@property int maximumNumberOfVisiblePills;
@property(copy) NSString * moreListTitle;
@property int selectedIndex;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } selectedPillFrame;
@property(copy) NSArray * titles;

- (void).cxx_destruct;
- (void)_segmentedControlAction:(id)arg1;
- (id)colorScheme;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInset;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (int)maximumNumberOfVisiblePills;
- (id)moreListTitle;
- (void)reloadPills;
- (int)selectedIndex;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })selectedPillFrame;
- (void)setColorScheme:(id)arg1;
- (void)setContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setMaximumNumberOfVisiblePills:(int)arg1;
- (void)setMoreListTitle:(id)arg1;
- (void)setSelectedIndex:(int)arg1;
- (void)setTitles:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)titles;

@end
