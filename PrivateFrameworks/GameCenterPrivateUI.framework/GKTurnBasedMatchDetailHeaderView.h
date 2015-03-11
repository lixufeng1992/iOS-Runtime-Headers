/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@class GKLabel, GKTextBubbleControl, GKTurnBasedMatch, NSLayoutConstraint, NSString;

@interface GKTurnBasedMatchDetailHeaderView : UICollectionReusableView {
    GKTextBubbleControl *_actionBubble;
    SEL _bubbleAction;
    id _bubbleTarget;
    NSLayoutConstraint *_bubbleToLastConstraint;
    BOOL _compactHeight;
    GKLabel *_infoLabel;
    NSString *_infoText;
    GKLabel *_lastTurnLabel;
    GKTurnBasedMatch *_match;
    NSLayoutConstraint *_playingToTopConstraint;
    GKLabel *_playingWithLabel;
    GKLabel *_startedLabel;
}

@property(retain) GKTextBubbleControl * actionBubble;
@property SEL bubbleAction;
@property id bubbleTarget;
@property(retain) NSString * bubbleText;
@property NSLayoutConstraint * bubbleToLastConstraint;
@property int bubbleType;
@property BOOL compactHeight;
@property(retain) GKLabel * infoLabel;
@property(retain) NSString * infoText;
@property(retain) GKLabel * lastTurnLabel;
@property(retain) GKTurnBasedMatch * match;
@property NSLayoutConstraint * playingToTopConstraint;
@property(retain) GKLabel * playingWithLabel;
@property(readonly) NSString * playingWithString;
@property(retain) GKLabel * startedLabel;

+ (BOOL)requiresConstraintBasedLayout;

- (id)actionBubble;
- (SEL)bubbleAction;
- (void)bubblePressed:(id)arg1;
- (id)bubbleTarget;
- (id)bubbleText;
- (id)bubbleToLastConstraint;
- (int)bubbleType;
- (BOOL)compactHeight;
- (void)dealloc;
- (void)didUpdateModel;
- (void)establishConstraints;
- (id)infoLabel;
- (id)infoText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)lastTurnLabel;
- (id)match;
- (id)playingToTopConstraint;
- (id)playingWithLabel;
- (id)playingWithString;
- (void)setActionBubble:(id)arg1;
- (void)setBubbleAction:(SEL)arg1;
- (void)setBubbleTarget:(id)arg1;
- (void)setBubbleText:(id)arg1;
- (void)setBubbleToLastConstraint:(id)arg1;
- (void)setBubbleType:(int)arg1;
- (void)setCompactHeight:(BOOL)arg1;
- (void)setInfoLabel:(id)arg1;
- (void)setInfoText:(id)arg1;
- (void)setLabelAlpha:(float)arg1;
- (void)setLastTurnLabel:(id)arg1;
- (void)setMatch:(id)arg1;
- (void)setPlayingToTopConstraint:(id)arg1;
- (void)setPlayingWithLabel:(id)arg1;
- (void)setStartedLabel:(id)arg1;
- (id)startedLabel;

@end
