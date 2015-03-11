/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKBalloonView, NSAttributedString, UILabel;

@interface CKTranscriptBalloonCell : CKTranscriptMessageCell {
    struct CGSize { 
        float width; 
        float height; 
    CKBalloonView *_balloonView;
    UILabel *_drawerLabel;
    NSAttributedString *_drawerText;
    BOOL _drawerTextChanged;
    } _drawerTextSize;
    BOOL _drawerWasVisible;
}

@property(retain) CKBalloonView * balloonView;
@property(retain) UILabel * drawerLabel;
@property(copy) NSAttributedString * drawerText;
@property BOOL drawerTextChanged;
@property struct CGSize { float x1; float x2; } drawerTextSize;
@property BOOL drawerWasVisible;

- (id)balloonView;
- (void)configureForChatItem:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)drawerLabel;
- (id)drawerText;
- (BOOL)drawerTextChanged;
- (struct CGSize { float x1; float x2; })drawerTextSize;
- (BOOL)drawerWasVisible;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviewsForAlignmentContents;
- (void)layoutSubviewsForDrawer;
- (void)setBalloonView:(id)arg1;
- (void)setDrawerLabel:(id)arg1;
- (void)setDrawerText:(id)arg1;
- (void)setDrawerTextChanged:(BOOL)arg1;
- (void)setDrawerTextSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setDrawerWasVisible:(BOOL)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;

@end
