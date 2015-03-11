/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor, _UITabBarItemAppearanceStorage;

@interface UITabBarButtonLabel : UILabel {
    Class _appearanceGuideClass;
    _UITabBarItemAppearanceStorage *_appearanceStorage;
    float _boundsWidth;
    BOOL _isHighlighted;
    BOOL _isSelected;
    UIColor *_unselectedTintColor;
}

@property(setter=_setAppearanceGuideClass:) Class _appearanceGuideClass;
@property(getter=_unselectedTintColor,setter=_setUnselectedTintColor:,retain) UIColor * unselectedTintColor;

+ (float)_fontPointSizeForIdiom:(int)arg1;

- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset { float x1; float x2; })arg1;
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned int)arg2;
- (Class)_appearanceGuideClass;
- (void)_applyTabBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2;
- (id)_containingTabBarButton;
- (void)_didChangeFromIdiom:(int)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3;
- (id)_fontForIdiom:(int)arg1;
- (void)_setAppearanceGuideClass:(Class)arg1;
- (void)_setTitlePositionAdjustment:(struct UIOffset { float x1; float x2; })arg1;
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned int)arg2;
- (void)_setUnselectedTintColor:(id)arg1;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (BOOL)_shouldCeilSizeToViewScale;
- (id)_titleTextAttributesForState:(unsigned int)arg1;
- (id)_unselectedTintColor;
- (void)_updateForFontChangeWithIdiom:(int)arg1;
- (void)dealloc;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)sizeToFitBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)tintColorDidChange;
- (void)updateTextColorsForState;

@end
