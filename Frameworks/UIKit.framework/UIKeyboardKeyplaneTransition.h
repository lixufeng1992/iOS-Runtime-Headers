/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <UIKeyboardKeyplaneTransitionDelegate>, CADisplayLink, UIKBTree, UIView;

@interface UIKeyboardKeyplaneTransition : NSObject {
    id _completionBlock;
    float _currentProgress;
    CADisplayLink *_displayLink;
    UIKBTree *_end;
    UIView *_endView;
    double _finalTransitionStartTime;
    float _finishDuration;
    float _finishProgress;
    BOOL _initiallyAtEnd;
    float _liftOffProgress;
    UIKBTree *_start;
    UIView *_startView;
    <UIKeyboardKeyplaneTransitionDelegate> *_transitionDelegate;
}

@property(copy) id completionBlock;
@property(readonly) float endHeight;
@property BOOL initiallyAtEnd;
@property(readonly) float startHeight;
@property <UIKeyboardKeyplaneTransitionDelegate> * transitionDelegate;

- (BOOL)canDisplayTransitionFromKeyplane:(id)arg1 toKeyplane:(id)arg2;
- (void)commitTransitionRebuild;
- (id)completionBlock;
- (void)dealloc;
- (float)endHeight;
- (void)finalizeTransition;
- (void)finishWithProgress:(float)arg1 completionBlock:(id)arg2;
- (BOOL)initiallyAtEnd;
- (void)rebuildWithStartKeyplane:(id)arg1 startView:(id)arg2 endKeyplane:(id)arg3 endView:(id)arg4;
- (void)removeAllAnimations;
- (void)setCompletionBlock:(id)arg1;
- (void)setInitiallyAtEnd:(BOOL)arg1;
- (void)setTransitionDelegate:(id)arg1;
- (float)startHeight;
- (id)transitionDelegate;
- (void)transitionToFinalState:(id)arg1;
- (void)updateWithProgress:(float)arg1;

@end
