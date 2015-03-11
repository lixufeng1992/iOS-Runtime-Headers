/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class <PUPhotosSectionHeaderViewDelegate>, NSArray, NSDate, NSString, PUPhotosSectionHeaderContentView, UIButton, UIImageView, UILabel, UIView, _UIBackdropView;

@interface PUPhotosSectionHeaderView : UICollectionReusableView {
    struct CGSize { 
        float width; 
        float height; 
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    UIButton *_actionButton;
    } _actionButtonInitialContentInsets;
    } _actionButtonInitialSize;
    float _actionButtonLabelInitialMaxY;
    NSString *_actionButtonTitle;
    BOOL _allowsLocationInteraction;
    _UIBackdropView *_backdropView;
    NSString *_backdropViewGroupName;
    unsigned int _backgroundStyle;
    } _contentInsets;
    PUPhotosSectionHeaderContentView *_contentView;
    UILabel *_dateLabel;
    <PUPhotosSectionHeaderViewDelegate> *_delegate;
    BOOL _generateDefaultTitleFromDates;
    } _highlightInsets;
    UIView *_highlightView;
    BOOL _highlightViewVisible;
    BOOL _inLayoutTransition;
    UIImageView *_locationsIconView;
    UILabel *_locationsLabel;
    BOOL _performingBatchDateDependentUpdate;
    NSDate *_sectionEndDate;
    int _sectionIndex;
    NSArray *_sectionLocations;
    NSDate *_sectionStartDate;
    NSString *_sectionTitle;
    BOOL _showsActionButton;
    int _style;
    UILabel *_titleLabel;
    BOOL _useYearOnlyForDefaultTitle;
    BOOL _usingBackgroundBlur;
}

@property(copy) NSString * actionButtonTitle;
@property BOOL allowsLocationInteraction;
@property(copy) NSString * backdropViewGroupName;
@property unsigned int backgroundStyle;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentInsets;
@property <PUPhotosSectionHeaderViewDelegate> * delegate;
@property(readonly) BOOL generateDefaultTitleFromDates;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } highlightInsets;
@property(readonly) NSDate * sectionEndDate;
@property int sectionIndex;
@property(retain) NSArray * sectionLocations;
@property(readonly) NSDate * sectionStartDate;
@property(retain) NSString * sectionTitle;
@property BOOL showsActionButton;
@property int style;
@property(readonly) NSString * synthesizedSectionTitle;
@property(readonly) BOOL useYearOnlyForDefaultTitle;

+ (void)_updateLabelGlobalCachedSizes;
+ (void)initialize;

- (void).cxx_destruct;
- (id)_dateRangeCompactFormatter;
- (void)_dateRangeFormatterChanged:(id)arg1;
- (id)_dateRangeLongFormatter;
- (id)_dateRangeYearFormatter;
- (BOOL)_disableRasterizeInAnimations;
- (void)_handleActionButton:(id)arg1;
- (void)_handleSignificantDateChange:(id)arg1;
- (void)_hideHighlightView;
- (void)_layoutSubviewsStyleFullDetail;
- (void)_layoutSubviewsStyleOnelineDetail;
- (void)_layoutSubviewsStyleOnelineMinimal;
- (struct CGSize { float x1; float x2; })_preferredSizeForLabel:(id)arg1;
- (struct CGSize { float x1; float x2; })_preferredSizeForText:(id)arg1 withFont:(id)arg2;
- (void)_setHighlightViewVisible:(BOOL)arg1;
- (void)_setUsingBackgroundBlur:(BOOL)arg1;
- (void)_updateActionButton;
- (void)_updateBackdropViewGroupName;
- (void)_updateBackground;
- (void)_updateDateDependentLabels;
- (void)_updateDateLabel;
- (void)_updateHighlightView;
- (void)_updateLocationsIconVisibility;
- (void)_updateLocationsLabelVisibility;
- (void)_updateTitleLabel;
- (BOOL)_usingDateAsTitle;
- (id)actionButtonTitle;
- (BOOL)allowLocationTapForTouch:(id)arg1;
- (BOOL)allowsLocationInteraction;
- (void)applyLayoutAttributes:(id)arg1;
- (id)backdropViewGroupName;
- (unsigned int)backgroundStyle;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInsets;
- (void)dealloc;
- (id)delegate;
- (void)didEndDisplaying;
- (void)didTransitionFromLayout:(id)arg1 toLayout:(id)arg2;
- (BOOL)generateDefaultTitleFromDates;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })highlightInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)performBatchUpdateOfDateDependentPropertiesWithBlock:(id)arg1;
- (void)prepareForReuse;
- (id)sectionEndDate;
- (int)sectionIndex;
- (id)sectionLocations;
- (id)sectionStartDate;
- (id)sectionTitle;
- (void)setActionButtonTitle:(id)arg1;
- (void)setAllowsLocationInteraction:(BOOL)arg1;
- (void)setBackdropViewGroupName:(id)arg1;
- (void)setBackgroundStyle:(unsigned int)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setGenerateDefaultTitleFromDates:(BOOL)arg1 yearOnly:(BOOL)arg2;
- (void)setHighlightInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setSectionIndex:(int)arg1;
- (void)setSectionLocations:(id)arg1;
- (void)setSectionStartDate:(id)arg1 endDate:(id)arg2;
- (void)setSectionTitle:(id)arg1;
- (void)setShowsActionButton:(BOOL)arg1;
- (void)setStyle:(int)arg1;
- (BOOL)showsActionButton;
- (int)style;
- (id)synthesizedSectionTitle;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (BOOL)useYearOnlyForDefaultTitle;
- (void)willTransitionFromLayout:(id)arg1 toLayout:(id)arg2;

@end
