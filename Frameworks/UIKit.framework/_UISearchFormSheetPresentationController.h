/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UIPresentationController<_UISearchControllerPresenting>, UIView, _UISearchPresentationAssistant;

@interface _UISearchFormSheetPresentationController : UIPresentationController <_UISearchControllerPresenting> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    _UISearchPresentationAssistant *_assistant;
    UIView *_wrapperView;
    } finalFrameForContainerView;
}

@property(readonly) UIPresentationController<_UISearchControllerPresenting> * adaptivePresentationController;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } finalFrameForContainerView;
@property(readonly) unsigned int hash;
@property(readonly) float resultsControllerContentOffset;
@property(retain,readonly) UIView * searchBarContainerView;
@property(readonly) BOOL searchBarToBecomeTopAttached;
@property(readonly) BOOL shouldAccountForStatusBar;
@property(readonly) float statusBarAdjustment;
@property(readonly) Class superclass;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameOfPresentedViewControllerViewInSuperview;
- (id)_presentationControllerForSizeClassPair:(struct { int x1; int x2; })arg1;
- (void)_presentedView:(id)arg1 enableFormSheetAccoutrements:(BOOL)arg2;
- (id)_presentedViewControllerForSizeClassPair:(struct { int x1; int x2; })arg1;
- (BOOL)_shouldKeepCurrentFirstResponder;
- (BOOL)_shouldRespectDefinesPresentationContext;
- (BOOL)_shouldSubscribeToKeyboardNotifications;
- (void)_transitionFromDidEnd;
- (void)_transitionFromWillBegin;
- (void)_transitionToDidEnd;
- (void)_transitionToPresentationController:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)_transitionToWillBegin;
- (id)adaptivePresentationController;
- (int)adaptivePresentationStyle;
- (void)dealloc;
- (void)dismissalTransitionDidEnd:(BOOL)arg1;
- (void)dismissalTransitionWillBegin;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })finalFrameForContainerView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameOfPresentedViewInContainerView;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (void)presentationTransitionDidEnd:(BOOL)arg1;
- (void)presentationTransitionWillBegin;
- (id)presentedView;
- (float)resultsControllerContentOffset;
- (id)searchBarContainerView;
- (BOOL)searchBarToBecomeTopAttached;
- (void)setContentVisible:(BOOL)arg1;
- (BOOL)shouldAccountForStatusBar;
- (BOOL)shouldRemovePresentersView;
- (float)statusBarAdjustment;
- (void)traitCollectionDidChange:(id)arg1;

@end
