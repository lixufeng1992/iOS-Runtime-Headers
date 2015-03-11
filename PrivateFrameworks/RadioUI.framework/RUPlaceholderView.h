/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class MPUVignetteBackgroundView, UIAlertView, _UIContentUnavailableView;

@interface RUPlaceholderView : UIView {
    MPUVignetteBackgroundView *_backgroundView;
    BOOL _cellularNetworkingAllowed;
    _UIContentUnavailableView *_contentUnavailableView;
    int _style;
    UIAlertView *_useCellularAlertView;
}

@property BOOL cellularNetworkingAllowed;
@property int style;

- (void).cxx_destruct;
- (void)_useCellularAction:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (BOOL)cellularNetworkingAllowed;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setCellularNetworkingAllowed:(BOOL)arg1;
- (void)setStyle:(int)arg1;
- (int)style;

@end
