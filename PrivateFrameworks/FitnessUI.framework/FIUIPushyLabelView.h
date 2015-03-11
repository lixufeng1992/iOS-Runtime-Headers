/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@class NSArray, NSAttributedString;

@interface FIUIPushyLabelView : UIView {
    double _currentAnimationFinishTime;
    NSAttributedString *_currentAttributedText;
    NSArray *_currentSnapshotCharacters;
    NSArray *_incomingSnapshotCharacters;
    id _pendingAttributedString;
    unsigned int _pendingDirection;
    BOOL _pendingPushPerCharacter;
}

- (void).cxx_destruct;
- (void)_layoutForPushStartWithDirection:(unsigned int)arg1;
- (void)_layoutViewsAtIndex:(unsigned int)arg1 forPushEndWithDirection:(unsigned int)arg2;
- (void)_processPendingStringIfNeeded;
- (void)_setCurrentSnapshotCharacters:(id)arg1;
- (void)_setIncomingSnapshotCharacters:(id)arg1;
- (id)_snapshotCharactersFromAttributedText:(id)arg1 perCharacter:(BOOL)arg2;
- (void)_swapCurrentSnapshotCharacters:(id)arg1 forIncomingCharacters:(id)arg2;
- (id)currentAttributedText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)pushToAttributedText:(id)arg1 direction:(unsigned int)arg2 perCharacter:(BOOL)arg3;
- (void)setAttributedTextUnanimated:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)sizeToFitAttributedText:(id)arg1;

@end
