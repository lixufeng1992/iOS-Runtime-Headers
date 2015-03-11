/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class <CKBalloonViewDelegate>, CKBalloonImageView, CKManualUpdater, NSString, UIColor, UILongPressGestureRecognizer, UITapGestureRecognizer;

@interface CKBalloonView : CKBalloonImageView <UIGestureRecognizerDelegate> {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    unsigned int _balloonCorners;
    BOOL _canUseOpaqueMask;
    <CKBalloonViewDelegate> *_delegate;
    CKManualUpdater *_displayUpdater;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    BOOL _filled;
    BOOL _hasOverlay;
    BOOL _hasTail;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    BOOL _orientation;
    CKBalloonImageView *_overlay;
    BOOL _showingMenu;
    } _textAlignmentInsets;
    BOOL _wantsSkinnyMask;
}

@property unsigned int balloonCorners;
@property BOOL canUseOpaqueMask;
@property(copy,readonly) NSString * debugDescription;
@property <CKBalloonViewDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(retain) CKManualUpdater * displayUpdater;
@property(retain) UITapGestureRecognizer * doubleTapGestureRecognizer;
@property(getter=isFilled) BOOL filled;
@property BOOL hasOverlay;
@property BOOL hasTail;
@property(readonly) unsigned int hash;
@property(retain) UILongPressGestureRecognizer * longPressGestureRecognizer;
@property(readonly) BOOL needsGroupOpacity;
@property BOOL orientation;
@property(retain) CKBalloonImageView * overlay;
@property(readonly) UIColor * overlayColor;
@property(getter=isShowingMenu) BOOL showingMenu;
@property(readonly) Class superclass;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } textAlignmentInsets;
@property BOOL wantsSkinnyMask;

- (void)_dismissOverlay;
- (void)_performAction:(SEL)arg1 sender:(id)arg2;
- (unsigned int)balloonCorners;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)canUseOpaqueMask;
- (void)configureForMediaObject:(id)arg1 previewWidth:(float)arg2 orientation:(BOOL)arg3;
- (void)configureForMessagePart:(id)arg1;
- (void)copy:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)displayUpdater;
- (void)doubleTapGestureRecognized:(id)arg1;
- (id)doubleTapGestureRecognizer;
- (void)export:(id)arg1;
- (BOOL)hasOverlay;
- (BOOL)hasTail;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isFilled;
- (BOOL)isShowingMenu;
- (void)layoutSubviews;
- (void)longPressGestureRecognized:(id)arg1;
- (id)longPressGestureRecognizer;
- (void)more:(id)arg1;
- (BOOL)needsGroupOpacity;
- (BOOL)orientation;
- (id)overlay;
- (id)overlayColor;
- (void)prepareForDisplay;
- (void)prepareForDisplayIfNeeded;
- (void)prepareForReuse;
- (BOOL)resignFirstResponder;
- (void)sendAsTextMessage:(id)arg1;
- (void)setBalloonCorners:(unsigned int)arg1;
- (void)setCanUseOpaqueMask:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayUpdater:(id)arg1;
- (void)setDoubleTapGestureRecognizer:(id)arg1;
- (void)setFilled:(BOOL)arg1;
- (void)setHasOverlay:(BOOL)arg1 autoDismiss:(BOOL)arg2;
- (void)setHasOverlay:(BOOL)arg1;
- (void)setHasTail:(BOOL)arg1;
- (void)setLongPressGestureRecognizer:(id)arg1;
- (void)setNeedsPrepareForDisplay;
- (void)setOrientation:(BOOL)arg1;
- (void)setOverlay:(id)arg1;
- (void)setShowingMenu:(BOOL)arg1;
- (void)setTextAlignmentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setWantsSkinnyMask:(BOOL)arg1;
- (void)showMenu;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1 textAlignmentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; }*)arg2;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)tapGestureRecognized:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })textAlignmentInsets;
- (BOOL)wantsSkinnyMask;
- (void)willHideMenu:(id)arg1;
- (void)willShowMenu:(id)arg1;

@end
