/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

@class NSBundle, NSMutableDictionary, UIColor, UIFont, UIImage, UIScreen;

@interface TKStyleProvider : NSObject <TKVibrationRecorderStyleProvider> {
    NSBundle *_bundle;
    NSMutableDictionary *_cachedStyleProperties;
    UIScreen *_screen;
}

@property(setter=_setBundle:,retain) NSBundle * _bundle;
@property(setter=_setCachedStyleProperties:,retain) NSMutableDictionary * _cachedStyleProperties;
@property(readonly) double defaultAnimationDuration;
@property(retain) UIScreen * screen;
@property(readonly) UIColor * vibrationRecorderBarsBackgroundColor;
@property(readonly) float vibrationRecorderControlsToolbarAdditionalHeight;
@property(readonly) float vibrationRecorderControlsToolbarItemsHorizontalOffsetFromEdge;
@property(readonly) float vibrationRecorderControlsToolbarVerticalOffset;
@property(readonly) UIColor * vibrationRecorderInstructionsLabelBackgroundColor;
@property(readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } vibrationRecorderInstructionsLabelEdgeInsets;
@property(readonly) double vibrationRecorderInstructionsLabelFadeAnimationDuration;
@property(readonly) UIFont * vibrationRecorderInstructionsLabelFont;
@property(readonly) struct UIOffset { float x1; float x2; } vibrationRecorderInstructionsLabelPositionOffset;
@property(readonly) UIColor * vibrationRecorderInstructionsLabelTextColor;
@property(readonly) float vibrationRecorderProgressToolbarAdditionalHeight;
@property(readonly) float vibrationRecorderProgressToolbarVerticalOffset;
@property(readonly) float vibrationRecorderProgressViewAccessibilityAdditionalHeight;
@property(readonly) float vibrationRecorderProgressViewDotHorizontalInset;
@property(readonly) float vibrationRecorderProgressViewHeight;
@property(readonly) float vibrationRecorderProgressViewHorizontalOffsetFromEdge;
@property(readonly) UIImage * vibrationRecorderProgressViewResizableDotImage;
@property(readonly) UIColor * vibrationRecorderProgressViewTrackColor;
@property(readonly) float vibrationRecorderRippleFinalRadius;
@property(readonly) float vibrationRecorderRippleFingerMovingSpeed;
@property(readonly) float vibrationRecorderRippleFingerStillSpeed;
@property(readonly) float vibrationRecorderRippleInitialRadius;
@property(readonly) float vibrationRecorderRippleRingLineWidth;
@property(readonly) UIColor * vibrationRecorderRippleViewBackgroundColor;

- (id)_bundle;
- (id)_cachedImageForPropertyWithSelector:(SEL)arg1 size:(struct CGSize { float x1; float x2; })arg2 opaque:(BOOL)arg3 withDrawingBlock:(id)arg4;
- (id)_cachedImageWithName:(id)arg1 forPropertyWithSelector:(SEL)arg2;
- (id)_cachedResizableImageForPropertyWithSelector:(SEL)arg1 capInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg2 size:(struct CGSize { float x1; float x2; })arg3 opaque:(BOOL)arg4 withDrawingBlock:(id)arg5;
- (id)_cachedStyleObjectForPropertyWithSelector:(SEL)arg1;
- (id)_cachedStyleProperties;
- (void)_didReceiveMemoryWarning:(id)arg1;
- (void)_setBundle:(id)arg1;
- (void)_setCachedStyleObject:(id)arg1 forPropertyWithSelector:(SEL)arg2;
- (void)_setCachedStyleProperties:(id)arg1;
- (void)dealloc;
- (double)defaultAnimationDuration;
- (id)init;
- (id)screen;
- (void)setScreen:(id)arg1;
- (id)vibrationRecorderBarsBackgroundColor;
- (float)vibrationRecorderControlsToolbarAdditionalHeight;
- (float)vibrationRecorderControlsToolbarItemsHorizontalOffsetFromEdge;
- (float)vibrationRecorderControlsToolbarVerticalOffset;
- (id)vibrationRecorderInstructionsLabelBackgroundColor;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })vibrationRecorderInstructionsLabelEdgeInsets;
- (double)vibrationRecorderInstructionsLabelFadeAnimationDuration;
- (id)vibrationRecorderInstructionsLabelFont;
- (struct UIOffset { float x1; float x2; })vibrationRecorderInstructionsLabelPositionOffset;
- (id)vibrationRecorderInstructionsLabelTextColor;
- (float)vibrationRecorderProgressToolbarAdditionalHeight;
- (float)vibrationRecorderProgressToolbarVerticalOffset;
- (float)vibrationRecorderProgressViewAccessibilityAdditionalHeight;
- (float)vibrationRecorderProgressViewDotHorizontalInset;
- (float)vibrationRecorderProgressViewHeight;
- (float)vibrationRecorderProgressViewHorizontalOffsetFromEdge;
- (id)vibrationRecorderProgressViewResizableDotImage;
- (id)vibrationRecorderProgressViewTrackColor;
- (float)vibrationRecorderRippleFinalRadius;
- (float)vibrationRecorderRippleFingerMovingSpeed;
- (float)vibrationRecorderRippleFingerStillSpeed;
- (float)vibrationRecorderRippleInitialRadius;
- (float)vibrationRecorderRippleRingLineWidth;
- (id)vibrationRecorderRippleViewBackgroundColor;

@end