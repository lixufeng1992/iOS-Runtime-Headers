/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class KNAnimParameterGroup, NSString;

@interface KNActionBlink : KNAnimationEffect <KNActionEffectBuildAnimator> {
    KNAnimParameterGroup *_parameterGroup;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (id)actionEffectStyle;
+ (int)animationCategory;
+ (id)animationFilter;
+ (id)animationName;
+ (id)applyActionEffect:(id)arg1 toAttributes:(id)arg2;
+ (id)customAttributes;
+ (id)defaultAttributes;
+ (unsigned int)directionType;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;
+ (BOOL)isEmphasisBuildAnimation;
+ (id)localizedMenuString:(int)arg1;
+ (id)supportedTypes;
+ (id)thumbnailImageNameForType:(int)arg1;

- (id)animationsForTextureSet:(id)arg1 finalTextureSet:(id)arg2 duration:(double)arg3 attributes:(id)arg4 previousAttributes:(id)arg5;
- (void)dealloc;
- (id)initWithAnimationContext:(id)arg1;
- (void)p_addAnimationToLayer:(id)arg1 blinkCount:(float)arg2 duration:(double)arg3 minOpacity:(float)arg4 decreaseOpacityTiming:(id)arg5 increaseOpacityTiming:(id)arg6 result:(id)arg7;

@end
