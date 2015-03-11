/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSMutableDictionary, NSString, PUAbstractNavigationBanner, UIBarButtonItem, UIImageView, UINavigationBar, UIView;

@interface UINavigationItem : NSObject <NSCoding> {
    float __idealCustomTitleWidth;
    UINavigationBar *__owningNavigationBar;
    float __titleViewWidthForAnimations;
    NSArray *_abbreviatedBackButtonTitles;
    UIBarButtonItem *_backBarButtonItem;
    NSString *_backButtonTitle;
    UIView *_backButtonView;
    NSMutableDictionary *_backgroundImages;
    BOOL _barStyleIndependent;
    id _context;
    NSArray *_customLeftViews;
    NSArray *_customRightViews;
    UIView *_defaultTitleView;
    float _fontScaleAdjustment;
    UIImageView *_frozenTitleView;
    BOOL _hidesBackButton;
    int _independentBarStyle;
    NSArray *_leftBarButtonItems;
    unsigned int _leftFlexibleSpaceCount;
    NSArray *_leftItemSpaceList;
    BOOL _leftItemsSupplementBackButton;
    UINavigationBar *_navigationBar;
    NSString *_pendingTitle;
    NSString *_prompt;
    NSArray *_rightBarButtonItems;
    unsigned int _rightFlexibleSpaceCount;
    NSArray *_rightItemSpaceList;
    int _tag;
    NSString *_title;
    UIView *_titleView;
}

@property(setter=_setAbbreviatedBackButtonTitles:,copy) NSArray * _abbreviatedBackButtonTitles;
@property(readonly) NSMutableDictionary * _backgroundImages;
@property(getter=_isBarStyleIndependent,setter=_setBarStyleIndependent:) BOOL _barStyleIndependent;
@property(setter=_setFontScaleAdjustment:) float _fontScaleAdjustment;
@property(setter=_setIdealCustomTitleWidth:) float _idealCustomTitleWidth;
@property(setter=_setIndependentBarStyle:) int _independentBarStyle;
@property(setter=_setLeftFlexibleSpaceCount:) unsigned int _leftFlexibleSpaceCount;
@property(setter=_setLeftItemSpaceList:,copy) NSArray * _leftItemSpaceList;
@property(getter=_owningNavigationBar,setter=_setOwningNavigationBar:) UINavigationBar * _owningNavigationBar;
@property(setter=_setPendingTitle:,copy) NSString * _pendingTitle;
@property(setter=_setRightFlexibleSpaceCount:) unsigned int _rightFlexibleSpaceCount;
@property(setter=_setRightItemSpaceList:,copy) NSArray * _rightItemSpaceList;
@property float _titleViewWidthForAnimations;
@property(retain) UIBarButtonItem * backBarButtonItem;
@property BOOL hidesBackButton;
@property(retain) UIBarButtonItem * leftBarButtonItem;
@property(copy) NSArray * leftBarButtonItems;
@property BOOL leftItemsSupplementBackButton;
@property(copy) NSString * prompt;
@property(setter=pu_setBanner:,retain) PUAbstractNavigationBanner * pu_banner;
@property(retain) UIBarButtonItem * rightBarButtonItem;
@property(copy) NSArray * rightBarButtonItems;
@property(copy) NSString * title;
@property(retain) UIView * titleView;

+ (id)defaultFont;

- (id)_abbreviatedBackButtonTitles;
- (BOOL)_accumulateViewsFromItems:(id)arg1 isLeft:(BOOL)arg2 refreshViews:(BOOL)arg3;
- (void)_addDefaultTitleViewToNavigationBarIfNecessary;
- (id)_automationID;
- (id)_backgroundImages;
- (id)_buttonForBackButtonIndicator;
- (void)_cleanupFrozenTitleView;
- (id)_customLeftView;
- (id)_customLeftViewCreating:(BOOL)arg1;
- (id)_customLeftViews;
- (id)_customLeftViewsCreating:(BOOL)arg1;
- (id)_customRightView;
- (id)_customRightViewCreating:(BOOL)arg1;
- (id)_customRightViews;
- (id)_customRightViewsCreating:(BOOL)arg1;
- (id)_defaultTitleView;
- (id)_firstNonSpaceItemInList:(id)arg1;
- (id)_firstNonSpaceLeftItem;
- (id)_firstNonSpaceRightItem;
- (float)_fontScaleAdjustment;
- (void)_freezeCurrentTitleView;
- (float)_idealCustomTitleWidth;
- (id)_independentBackgroundImageForBarMetrics:(int)arg1;
- (int)_independentBarStyle;
- (id)_independentShadowImage;
- (BOOL)_isBarStyleIndependent;
- (id)_leftBarButtonItem;
- (id)_leftBarButtonItems;
- (unsigned int)_leftFlexibleSpaceCount;
- (id)_leftItemSpaceList;
- (BOOL)_leftItemsWantBackButton;
- (id)_owningNavigationBar;
- (id)_pendingTitle;
- (void)_removeBackButtonView;
- (void)_removeBarButtonItemViews;
- (void)_removeTitleAndButtonViews;
- (void)_replaceCustomLeftRightViewAtIndex:(unsigned int)arg1 withView:(id)arg2 left:(BOOL)arg3;
- (id)_rightBarButtonItem;
- (id)_rightBarButtonItems;
- (unsigned int)_rightFlexibleSpaceCount;
- (id)_rightItemSpaceList;
- (void)_setAbbreviatedBackButtonTitles:(id)arg1;
- (void)_setBackButtonPressed:(BOOL)arg1;
- (void)_setBackButtonTitle:(id)arg1 lineBreakMode:(int)arg2;
- (void)_setBarStyleIndependent:(BOOL)arg1;
- (void)_setCustomLeftRightView:(id)arg1 left:(BOOL)arg2;
- (void)_setCustomLeftView:(id)arg1;
- (void)_setCustomLeftViews:(id)arg1;
- (void)_setCustomRightView:(id)arg1;
- (void)_setCustomRightViews:(id)arg1;
- (void)_setFontScaleAdjustment:(float)arg1;
- (void)_setIdealCustomTitleWidth:(float)arg1;
- (void)_setIndependentBackgroundImage:(id)arg1 shadowImage:(id)arg2 forBarMetrics:(int)arg3;
- (void)_setIndependentBarStyle:(int)arg1;
- (void)_setLeftBarButtonItem:(id)arg1;
- (void)_setLeftBarButtonItems:(id)arg1;
- (void)_setLeftFlexibleSpaceCount:(unsigned int)arg1;
- (void)_setLeftItemSpaceList:(id)arg1;
- (void)_setOwningNavigationBar:(id)arg1;
- (void)_setPendingTitle:(id)arg1;
- (void)_setRightBarButtonItem:(id)arg1;
- (void)_setRightBarButtonItems:(id)arg1;
- (void)_setRightFlexibleSpaceCount:(unsigned int)arg1;
- (void)_setRightItemSpaceList:(id)arg1;
- (void)_setTitle:(id)arg1 animated:(BOOL)arg2 matchBarButtonItemAnimationDuration:(BOOL)arg3;
- (void)_setTitle:(id)arg1 animated:(BOOL)arg2;
- (void)_setTitleAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (id)_titleView;
- (float)_titleViewWidthForAnimations;
- (void)_updateBarItemOwnersTo:(id)arg1;
- (void)_updateItemsForLetterpressImagesVisualStateIfNecessary;
- (void)_updateViewsForBarSizeChangeAndApply:(BOOL)arg1;
- (BOOL)_wantsBackButtonIndicator;
- (id)backBarButtonItem;
- (id)backButtonTitle;
- (id)backButtonView;
- (id)context;
- (id)currentBackButtonTitle;
- (id)customLeftItem;
- (id)customLeftView;
- (id)customRightItem;
- (id)customRightView;
- (id)customTitleView;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)existingBackButtonView;
- (void)fadeInTitleView;
- (void)fadeOutTitleView;
- (BOOL)hidesBackButton;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1;
- (id)leftBarButtonItem;
- (id)leftBarButtonItems;
- (BOOL)leftItemsSupplementBackButton;
- (void)mergeValuesFromItem:(id)arg1;
- (id)navigationBar;
- (id)prompt;
- (id)pu_banner;
- (void)pu_setBanner:(id)arg1;
- (void)rc_copyPropertiesFromItem:(id)arg1 animated:(BOOL)arg2;
- (void)rc_copyPropertiesFromItem:(id)arg1;
- (void)resetAllValues;
- (id)rightBarButtonItem;
- (id)rightBarButtonItems;
- (void)setBackBarButtonItem:(id)arg1;
- (void)setBackButtonTitle:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setCustomLeftItem:(id)arg1 animated:(BOOL)arg2;
- (void)setCustomLeftItem:(id)arg1;
- (void)setCustomLeftView:(id)arg1 animated:(BOOL)arg2;
- (void)setCustomLeftView:(id)arg1;
- (void)setCustomRightItem:(id)arg1 animated:(BOOL)arg2;
- (void)setCustomRightItem:(id)arg1;
- (void)setCustomRightView:(id)arg1 animated:(BOOL)arg2;
- (void)setCustomRightView:(id)arg1;
- (void)setCustomTitleView:(id)arg1;
- (void)setHidesBackButton:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHidesBackButton:(BOOL)arg1;
- (void)setLeftBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (void)setLeftBarButtonItem:(id)arg1;
- (void)setLeftBarButtonItems:(id)arg1 animated:(BOOL)arg2;
- (void)setLeftBarButtonItems:(id)arg1;
- (void)setLeftItemsSupplementBackButton:(BOOL)arg1;
- (void)setNavigationBar:(id)arg1;
- (void)setObject:(id)arg1 forLeftRightKeyPath:(id)arg2 animated:(BOOL)arg3;
- (void)setPrompt:(id)arg1;
- (void)setRightBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (void)setRightBarButtonItem:(id)arg1;
- (void)setRightBarButtonItems:(id)arg1 animated:(BOOL)arg2;
- (void)setRightBarButtonItems:(id)arg1;
- (void)setTag:(int)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleView:(id)arg1 animated:(BOOL)arg2;
- (void)setTitleView:(id)arg1;
- (void)set_customLeftView:(id)arg1;
- (void)set_customLeftViews:(id)arg1;
- (void)set_customRightView:(id)arg1;
- (void)set_customRightViews:(id)arg1;
- (void)set_leftBarButtonItem:(id)arg1;
- (void)set_leftBarButtonItems:(id)arg1;
- (void)set_rightBarButtonItem:(id)arg1;
- (void)set_rightBarButtonItems:(id)arg1;
- (void)set_titleViewWidthForAnimations:(float)arg1;
- (int)tag;
- (id)title;
- (id)titleView;
- (void)updateNavigationBarButtonsAnimated:(BOOL)arg1;

@end
