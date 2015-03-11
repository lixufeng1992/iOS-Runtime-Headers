/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, NSMutableDictionary, NSString;

@interface UIKBTree : NSObject <NSCopying> {
    NSMutableDictionary *cache;
    NSString *layoutTag;
    NSString *name;
    NSMutableDictionary *properties;
    NSMutableArray *subtrees;
    int type;
}

@property(retain) NSMutableDictionary * cache;
@property(retain) NSString * layoutTag;
@property(retain) NSString * name;
@property(retain) NSMutableDictionary * properties;
@property(retain) NSMutableArray * subtrees;
@property int type;

+ (int)extraIPhoneIdiom:(int)arg1 width:(float)arg2 landscape:(BOOL)arg3;
+ (id)key;
+ (id)keyboard;
+ (id)mergeStringForKeyName:(id)arg1;
+ (id)shapesForControlKeyShapes:(id)arg1 options:(int)arg2;
+ (BOOL)shouldSkipCacheString:(id)arg1;
+ (id)stringForType:(int)arg1;
+ (id)treeOfType:(int)arg1;
+ (id)uniqueName;

- (void)_addKeylayoutKeys:(id)arg1;
- (id)_cacheRootNameForKey:(id)arg1;
- (int)_keyCountOnNamedRow:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_keyplaneFrame;
- (BOOL)_needsScaling;
- (BOOL)_renderAsStringKey;
- (int)_variantType;
- (id)activeGeometriesList;
- (id)activeShapesFromOutputShapes:(id)arg1 inputShapes:(id)arg2;
- (id)alternateKeyplaneName;
- (id)attributeSet:(BOOL)arg1;
- (id)autolocalizedKeyCacheIterator;
- (BOOL)avoidAutoDeactivation;
- (BOOL)avoidsLanguageIndicator;
- (BOOL)behavesAsShiftKey;
- (BOOL)boolForProperty:(id)arg1;
- (id)cache;
- (id)cacheDisplayString;
- (void)cacheKey:(id)arg1;
- (id)cachedKeysByKeyName:(id)arg1;
- (BOOL)canFadeOutFromState:(int)arg1 toState:(int)arg2;
- (void)clearTransientCaches;
- (int)clipCorners;
- (id)componentName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)disabled;
- (BOOL)disablesEdgeSwipe;
- (int)displayRowHint;
- (id)displayString;
- (int)displayType;
- (int)displayTypeHint;
- (int)dragThreshold;
- (BOOL)dynamicDisplayTypeHint;
- (void)elaborateLayoutWithSize:(struct CGSize { float x1; float x2; })arg1 scale:(float)arg2;
- (float)fadeOutDuration;
- (id)findLeftMoreKey;
- (id)firstCachedKeyWithName:(id)arg1;
- (int)flickDirection;
- (BOOL)forceMultitap;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForKeylayoutName:(id)arg1;
- (id)fullRepresentedString;
- (id)geometries;
- (id)geometriesList;
- (id)geometriesOrderedByPosition;
- (id)geometry;
- (id)geometrySet:(BOOL)arg1;
- (BOOL)ghost;
- (int)handBias;
- (BOOL)hasLayoutTag:(id)arg1;
- (int)highlightedVariantIndex;
- (int)indexOfSubtree:(id)arg1;
- (id)initWithType:(int)arg1 withName:(id)arg2 withProperties:(id)arg3 withSubtrees:(id)arg4 withCache:(id)arg5;
- (id)initWithType:(int)arg1;
- (int)intForProperty:(id)arg1;
- (int)interactionType;
- (BOOL)isAlphabeticPlane;
- (BOOL)isDuplicateOfTree:(id)arg1;
- (BOOL)isEqualToTree:(id)arg1;
- (BOOL)isExemptFromInputManagerHitTesting;
- (BOOL)isExemptFromInputManagerLayout;
- (BOOL)isGenerated;
- (BOOL)isHashed;
- (BOOL)isLeafType;
- (BOOL)isLetters;
- (BOOL)isSameAsTree:(id)arg1;
- (BOOL)isShiftKeyPlaneChooser;
- (BOOL)isShiftKeyplane;
- (BOOL)isSplit;
- (id)keyAttributes;
- (id)keyForString:(id)arg1;
- (id)keySet;
- (id)keyplaneForKey:(id)arg1;
- (id)keys;
- (id)keysByKeyName:(id)arg1;
- (id)keysForMergeConditions;
- (id)keysOrderedByPosition;
- (id)keysOrderedByPositionWithoutZip;
- (id)keysWithString:(id)arg1;
- (id)layoutName;
- (id)layoutTag;
- (id)listShapes;
- (id)localizationKey;
- (BOOL)looksLike:(id)arg1;
- (BOOL)looksLikeShiftAlternate;
- (id)mergeKeyNames:(id)arg1;
- (BOOL)modifiesKeyplane;
- (id)name;
- (id)nameFromAttributes;
- (BOOL)noLanguageIndicator;
- (BOOL)notUseCandidateSelection;
- (id)numberForProperty:(id)arg1;
- (void)orderVariantKeys:(BOOL)arg1;
- (id)overrideDisplayString;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })paddedFrame;
- (void)precacheLayoutName:(id)arg1;
- (float)primaryKeylayoutOffset;
- (float)primaryKeylayoutWidthRatio;
- (id)properties;
- (id)recursiveDescription;
- (BOOL)renderKeyInKeyplane:(id)arg1;
- (int)rendering;
- (id)representedString;
- (void)setActiveGeometriesList:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void)setCache:(id)arg1;
- (void)setClipCorners:(int)arg1;
- (void)setDisabled:(BOOL)arg1;
- (void)setDisplayRowHint:(int)arg1;
- (void)setDisplayString:(id)arg1;
- (void)setDisplayType:(int)arg1;
- (void)setDisplayTypeHint:(int)arg1;
- (void)setFlickDirection:(int)arg1;
- (void)setForceMultitap:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrameOnly:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setGeometriesList:(id)arg1;
- (void)setGeometry:(id)arg1;
- (void)setGhost:(BOOL)arg1;
- (void)setHighlightedVariantIndex:(int)arg1;
- (void)setInteractionType:(int)arg1;
- (void)setIsGenerated:(BOOL)arg1;
- (void)setLayoutTag:(id)arg1;
- (void)setName:(id)arg1;
- (BOOL)setObject:(id)arg1 forProperty:(id)arg2;
- (void)setOverrideDisplayString:(id)arg1;
- (void)setPaddedFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setProperties:(id)arg1;
- (void)setRendering:(int)arg1;
- (void)setRepresentedString:(id)arg1;
- (void)setShape:(id)arg1;
- (void)setSplitMode:(int)arg1;
- (void)setState:(int)arg1;
- (void)setSubtrees:(id)arg1;
- (void)setTextAlignment:(int)arg1;
- (void)setType:(int)arg1;
- (void)setVariantPopupBias:(id)arg1;
- (void)setVariantType:(int)arg1;
- (void)setVisible:(BOOL)arg1;
- (void)setVisualStyle:(int)arg1;
- (void)setVisualStyling:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })arg1;
- (id)shape;
- (id)shiftAlternateKeyplaneName;
- (BOOL)shouldCacheKey;
- (BOOL)shouldSkipCandidateSelection;
- (BOOL)shouldSkipCandidateSelectionForVariants;
- (int)splitMode;
- (int)state;
- (id)stringForProperty:(id)arg1;
- (struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })stylingFromVisualStyle;
- (void)subsumeDisappearingKeyName:(id)arg1 intoKeyName:(id)arg2 factors:(id)arg3;
- (id)subtreeWithName:(id)arg1 rows:(id)arg2;
- (id)subtreeWithName:(id)arg1;
- (id)subtreeWithType:(int)arg1;
- (id)subtrees;
- (BOOL)subtreesAreOrdered;
- (id)subtreesWithProperty:(id)arg1 value:(id)arg2;
- (BOOL)supportsType:(int)arg1;
- (int)textAlignment;
- (int)type;
- (id)unhashedName;
- (void)updateDictationKeyOnNumberPads:(BOOL)arg1;
- (void)updateMoreAndInternationalKeysWithOptions:(int)arg1;
- (void)updateVariantTypeForActions:(unsigned int)arg1;
- (BOOL)usesAdaptiveKeys;
- (BOOL)usesAutoShift;
- (BOOL)usesKeyCharging;
- (id)variantDisplayString;
- (id)variantPopupBias;
- (int)variantType;
- (BOOL)visible;
- (int)visualStyle;
- (struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })visualStyling;
- (void)zipAttributes;
- (void)zipGeometries:(BOOL)arg1 attributes:(BOOL)arg2;
- (void)zipGeometrySet;

@end
