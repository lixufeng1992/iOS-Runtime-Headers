/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@class NSString, UIFont, UIImage;

@interface CertInfoGradientLabel : UIView {
    UIFont *_font;
    UIImage *_gradient;
    struct CGColor { } *_patternColor;
    NSString *_text;
}

@property(retain) UIFont * font;
@property(retain) UIImage * gradient;
@property(retain) NSString * text;

- (void).cxx_destruct;
- (struct CGColor { }*)_patternColor;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)font;
- (id)gradient;
- (void)setFont:(id)arg1;
- (void)setGradient:(id)arg1;
- (void)setText:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)text;

@end
