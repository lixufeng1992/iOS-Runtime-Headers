/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class TPLCDSubImageView, TPLCDTextView, UIView;

@interface TPLCDView : TPLCDBar {
    unsigned int _layoutAsLabelled : 1;
    UIView *_contentView;
    TPLCDSubImageView *_imageView;
    TPLCDTextView *_labelView;
    TPLCDTextView *_textView;
    BOOL _verticallyCenterTextViewIfLabelless;
}

@property BOOL verticallyCenterTextViewIfLabelless;

+ (float)defaultLabelFontSize;
+ (float)defaultTextFontSize;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_imageViewFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_labelFrame;
- (float)_labelVInset;
- (void)_resetContentViewFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_text1Frame;
- (float)_textVInset;
- (void)blinkLabel;
- (void)dealloc;
- (void)didFinishAnimatingLCDLabelFadeOut:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)didMoveToWindow;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })fullSizedContentViewFrame;
- (id)initWithDefaultSizeForOrientation:(int)arg1;
- (id)label;
- (void)layoutSubviews;
- (id)secondLineText;
- (void)setContentsAlpha:(float)arg1;
- (void)setLabel:(id)arg1 animate:(BOOL)arg2;
- (void)setLabel:(id)arg1;
- (void)setLabelFontSize:(float)arg1;
- (void)setLayoutAsLabelled:(BOOL)arg1;
- (void)setSecondLineText:(id)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setSubImage:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextFontSize:(float)arg1;
- (void)setVerticallyCenterTextViewIfLabelless:(BOOL)arg1;
- (BOOL)shouldCenterContentView;
- (BOOL)shouldCenterText;
- (id)subImage;
- (id)text;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })textFrame;
- (BOOL)verticallyCenterTextViewIfLabelless;

@end
