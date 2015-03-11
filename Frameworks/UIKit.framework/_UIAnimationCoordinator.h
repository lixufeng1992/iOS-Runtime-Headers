/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableDictionary, NSString, UIPercentDrivenInteractiveTransition, UIView, UIViewController, _UIViewControllerOneToOneTransitionContext;

@interface _UIAnimationCoordinator : NSObject <UIViewControllerAnimatedTransitioning> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    id _animator;
    id _completion;
    UIView *_containerView;
    double _duration;
    } _endFrame;
    UIPercentDrivenInteractiveTransition *_interactiveTransition;
    id _preperation;
    } _startFrame;
    NSMutableDictionary *_stash;
    _UIViewControllerOneToOneTransitionContext *_transitionContext;
    UIViewController *_viewController;
}

@property(copy) id animator;
@property(copy) id completion;
@property(retain) UIView * containerView;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property double duration;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } endFrame;
@property(readonly) unsigned int hash;
@property(copy) id preperation;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } startFrame;
@property(retain,readonly) NSMutableDictionary * stash;
@property(readonly) Class superclass;
@property(retain,readonly) _UIViewControllerOneToOneTransitionContext * transitionContext;
@property(retain) UIViewController * viewController;

- (void)_updateTransitionContext;
- (void)animate;
- (void)animateInteractively;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(BOOL)arg1;
- (id)animator;
- (void)cancelInteractiveAnimation;
- (id)completion;
- (id)containerView;
- (void)dealloc;
- (double)duration;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })endFrame;
- (void)finishInteractiveAnimation;
- (id)preperation;
- (void)setAnimator:(id)arg1;
- (void)setCompletion:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setEndFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setPreperation:(id)arg1;
- (void)setStartFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setViewController:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })startFrame;
- (id)stash;
- (id)transitionContext;
- (double)transitionDuration:(id)arg1;
- (void)updateInteractiveProgress:(float)arg1;
- (id)viewController;

@end
