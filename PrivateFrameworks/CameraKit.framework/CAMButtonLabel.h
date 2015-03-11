/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class NSString, UIColor, UILabel, _UILegibilityView;

@interface CAMButtonLabel : UIView {
    struct CGSize { 
        float width; 
        float height; 
    UILabel *__label;
    _UILegibilityView *__legibilityView;
    } _contentSize;
    BOOL _useLegibilityView;
}

@property(retain,readonly) UILabel * _label;
@property(retain,readonly) _UILegibilityView * _legibilityView;
@property(readonly) struct CGSize { float x1; float x2; } contentSize;
@property(copy) NSString * text;
@property int textAlignment;
@property(retain) UIColor * textColor;
@property(getter=isUsingLegibilityView) BOOL useLegibilityView;

- (void).cxx_destruct;
- (void)_createLegibilityView;
- (id)_label;
- (id)_legibilityView;
- (void)_updateAttributedText;
- (void)_updateInternalContentSize;
- (void)_updateViewAlphas;
- (struct CGSize { float x1; float x2; })contentSize;
- (id)highlightedTextColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (BOOL)isUsingLegibilityView;
- (void)layoutSubviews;
- (void)setHighlightedTextColor:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(int)arg1;
- (void)setTextColor:(id)arg1;
- (void)setUseLegibilityView:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)text;
- (int)textAlignment;
- (id)textColor;
- (void)updateToContentSize:(id)arg1;

@end
