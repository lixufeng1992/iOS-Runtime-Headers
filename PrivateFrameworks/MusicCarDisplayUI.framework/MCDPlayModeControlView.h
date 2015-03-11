/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@class MCDButton;

@interface MCDPlayModeControlView : UIView {
    BOOL _creatingGenius;
    MCDButton *_geniusButton;
    MCDButton *_repeatButton;
    MCDButton *_shuffleButton;
}

@property BOOL creatingGenius;
@property(readonly) MCDButton * geniusButton;
@property(readonly) MCDButton * repeatButton;
@property(readonly) MCDButton * shuffleButton;

- (void).cxx_destruct;
- (BOOL)creatingGenius;
- (id)geniusButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)repeatButton;
- (void)setCreatingGenius:(BOOL)arg1;
- (id)shuffleButton;

@end
