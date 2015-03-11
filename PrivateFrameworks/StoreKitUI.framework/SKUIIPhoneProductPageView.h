/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIView;

@interface SKUIIPhoneProductPageView : UIView {
    float _bannerOffset;
    UIView *_bannerView;
    UIView *_view;
}

@property float bannerOffset;
@property(retain) UIView * bannerView;
@property(retain) UIView * view;

- (void).cxx_destruct;
- (void)animateYPosition:(float)arg1;
- (float)bannerOffset;
- (id)bannerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setBannerOffset:(float)arg1;
- (void)setBannerView:(id)arg1;
- (void)setView:(id)arg1;
- (id)view;

@end
