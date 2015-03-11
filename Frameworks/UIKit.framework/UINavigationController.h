/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <UINavigationControllerDelegate>, <UIViewControllerAnimatedTransitioning>, <UIViewControllerInteractiveTransitioning>, NSArray, NSString, NSUUID, UIGestureRecognizer, UINavigationBar, UINavigationTransitionView, UIPanGestureRecognizer, UITapGestureRecognizer, UIToolbar, UIView, UIViewController, _UIAnimationCoordinator, _UIBarPanGestureRecognizer, _UIBarTapGestureRecognizer, _UINavigationControllerPalette, _UINavigationInteractiveTransition, _UINavigationParallaxTransition;

@interface UINavigationController : UIViewController <UIGestureRecognizerDelegatePrivate, UINavigationBarDelegate, GKContentRefresh, GKURLHandling> {
    struct { 
        unsigned int isAppearingAnimated : 1; 
        unsigned int isAlreadyPoppingNavigationItem : 1; 
        unsigned int isNavigationBarHidden : 1; 
        unsigned int isToolbarShown : 1; 
        unsigned int needsDeferredTransition : 1; 
        unsigned int isTransitioning : 1; 
        unsigned int paletteTransitionPending : 1; 
        unsigned int lastOperation : 4; 
        unsigned int lastOperationAnimated : 1; 
        unsigned int deferredTransition : 8; 
        unsigned int didPreloadKeyboardAnimation : 1; 
        unsigned int didHideBottomBar : 1; 
        unsigned int didExplicitlyHideTabBar : 1; 
        unsigned int isChangingOrientationForPop : 1; 
        unsigned int pretendNavBarHidden : 1; 
        unsigned int avoidMovingNavBarOffscreenBeforeUnhiding : 1; 
        unsigned int searchBarHidNavBar : 1; 
        unsigned int useSystemPopoverBarAppearance : 1; 
        unsigned int isCustomTransition : 1; 
        unsigned int isBuiltinTransition : 1; 
        unsigned int resetDidHideOnCancel : 1; 
        unsigned int delegateWillShowViewController : 1; 
        unsigned int delegateDidShowViewController : 1; 
        unsigned int delegateTransitionController : 1; 
        unsigned int delegateTransitionControllerEx : 1; 
        unsigned int delegateInteractionController : 1; 
        unsigned int delegateInteractionControllerEx : 1; 
        unsigned int delegateShouldCrossFadeNavigationBar : 1; 
        unsigned int delegateShouldCrossFadeBottomBars : 1; 
        unsigned int delegateShouldUseBuiltinInteractionController : 1; 
        unsigned int delegateSupportedInterfaceOrientations : 1; 
        unsigned int delegatePreferredInterfaceOrientationForPresentation : 1; 
        unsigned int delegateLayoutTransitioningClass : 1; 
        unsigned int navigationBarHidesCompletelyOffscreen : 1; 
        unsigned int clipUnderlapWhileTransitioning : 1; 
        unsigned int isCrossfadingOutTabBar : 1; 
        unsigned int isCrossfadingInTabBar : 1; 
        unsigned int skipContentInsetCalculation : 1; 
        unsigned int neverInWindow : 1; 
        unsigned int useStandardStatusBarHeight : 1; 
        unsigned int allowUserInteractionDuringTransition : 1; 
        unsigned int enableBackButtonDuringTransition : 1; 
        unsigned int allowsGroupBlending : 1; 
        unsigned int allowNestedNavigationControllers : 1; 
        unsigned int nestedNavigationBarWasHidden : 1; 
        unsigned int nestedToolbarWasHidden : 1; 
        unsigned int isNested : 1; 
        unsigned int searchHidNavigationBar : 1; 
        unsigned int suppressMixedOrientationPop : 1; 
        unsigned int isLayingOutBars : 1; 
    NSString *__backdropGroupName;
    BOOL __barAnimationWasCancelled;
    _UIAnimationCoordinator *__barInteractiveAnimationCoordinator;
    _UIBarPanGestureRecognizer *__barSwipeHideGesture;
    _UIBarTapGestureRecognizer *__barTapHideGesture;
    _UINavigationInteractiveTransition *__cachedInteractionController;
    _UINavigationParallaxTransition *__cachedTransitionController;
    <UIViewControllerInteractiveTransitioning> *__interactionController;
    id __keyboardAppearedNotificationToken;
    NSUUID *__navbarAnimationId;
    NSUUID *__toolbarAnimationId;
    <UIViewControllerAnimatedTransitioning> *__transitionController;
    id __updateNavigationBarHandler;
    BOOL __usingBuiltinAnimator;
    UITapGestureRecognizer *_backGestureRecognizer;
    float _bottomInsetDelta;
    float _builtinTransitionGap;
    int _builtinTransitionStyle;
    UIView *_containerView;
    float _customNavigationTransitionDuration;
    <UINavigationControllerDelegate> *_delegate;
    UIViewController *_disappearingViewController;
    _UINavigationControllerPalette *_freePalette;
    BOOL _hidesBarsOnSwipe;
    BOOL _hidesBarsOnTap;
    BOOL _hidesBarsWhenKeyboardAppears;
    BOOL _hidesBarsWhenVerticallyCompact;
    BOOL _interactiveTransition;
    UINavigationBar *_navigationBar;
    Class _navigationBarClass;
    } _navigationControllerFlags;
    UIView *_navigationTransitionView;
    int _savedNavBarStyleBeforeSheet;
    int _savedToolBarStyleBeforeSheet;
    float _statusBarHeightForHideShow;
    UIToolbar *_toolbar;
    Class _toolbarClass;
    _UINavigationControllerPalette *_topPalette;
    _UINavigationControllerPalette *_transitioningTopPalette;
}

@property(getter=_backdropGroupName,setter=_setBackdropGroupName:,retain) NSString * _backdropGroupName;
@property(setter=_setBarAnimationWasCancelled:) BOOL _barAnimationWasCancelled;
@property(setter=_setInteractiveAnimationCoordinator:,retain) _UIAnimationCoordinator * _barInteractiveAnimationCoordinator;
@property(setter=_setBarSwipeHideGesture:,retain) _UIBarPanGestureRecognizer * _barSwipeHideGesture;
@property(setter=_setBarTapHideGesture:,retain) _UIBarTapGestureRecognizer * _barTapHideGesture;
@property(setter=_setCachedInteractionController:,retain) _UINavigationInteractiveTransition * _cachedInteractionController;
@property(setter=_setCachedTransitionController:,retain) _UINavigationParallaxTransition * _cachedTransitionController;
@property(setter=_setInteractionController:,retain) <UIViewControllerInteractiveTransitioning> * _interactionController;
@property(setter=_setKeyboardAppearedNotificationToken:,retain) id _keyboardAppearedNotificationToken;
@property(setter=_setNavbarAnimationId:,retain) NSUUID * _navbarAnimationId;
@property(setter=_setToolbarAnimationId:,retain) NSUUID * _toolbarAnimationId;
@property(setter=_setToolbarClass:) Class _toolbarClass;
@property(setter=_setTransitionController:,retain) <UIViewControllerAnimatedTransitioning> * _transitionController;
@property(setter=_setUpdateNavigationBarHandler:,copy) id _updateNavigationBarHandler;
@property(getter=_isUsingBuiltinAnimator,setter=_setUsingBuiltinAnimator:) BOOL _usingBuiltinAnimator;
@property(getter=_allowNestedNavigationControllers,setter=_setAllowNestedNavigationControllers:) BOOL allowNestedNavigationControllers;
@property BOOL avoidMovingNavBarOffscreenBeforeUnhiding;
@property(retain,readonly) UIPanGestureRecognizer * barHideOnSwipeGestureRecognizer;
@property(readonly) UITapGestureRecognizer * barHideOnTapGestureRecognizer;
@property(readonly) UIViewController * bottomViewController;
@property(getter=_builtinTransitionGap,setter=_setBuiltinTransitionGap:) float builtinTransitionGap;
@property(getter=_builtinTransitionStyle,setter=_setBuiltinTransitionStyle:) int builtinTransitionStyle;
@property(getter=_isCrossfadingInTabBar,setter=_setCrossfadingInTabBar:) BOOL crossfadingInTabBar;
@property(getter=_isCrossfadingOutTabBar,setter=_setCrossfadingOutTabBar:) BOOL crossfadingOutTabBar;
@property float customNavigationTransitionDuration;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * debugDescription;
@property <UINavigationControllerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * description;
@property(retain) UIViewController * detailViewController;
@property(getter=_didExplicitlyHideTabBar,setter=_setDidExplicitlyHideTabBar:) BOOL didHideTabBar;
@property(retain) UIViewController * disappearingViewController;
@property(readonly) unsigned int hash;
@property(readonly) unsigned int hash;
@property BOOL hidesBarsOnSwipe;
@property BOOL hidesBarsOnTap;
@property BOOL hidesBarsWhenKeyboardAppears;
@property BOOL hidesBarsWhenVerticallyCompact;
@property(readonly) UIGestureRecognizer * interactivePopGestureRecognizer;
@property(getter=isInteractiveTransition) BOOL interactiveTransition;
@property BOOL isExpanded;
@property(getter=_isNestedNavigationController,setter=_setIsNestedNavigationController:) BOOL isNestedNavigationController;
@property(readonly) UINavigationBar * navigationBar;
@property(getter=isNavigationBarHidden) BOOL navigationBarHidden;
@property(readonly) UINavigationTransitionView * navigationTransitionView;
@property BOOL needsDeferredTransition;
@property BOOL pretendNavBarHidden;
@property(readonly) UIViewController * previousViewController;
@property(readonly) Class superclass;
@property(readonly) Class superclass;
@property(readonly) UIToolbar * toolbar;
@property(getter=isToolbarHidden) BOOL toolbarHidden;
@property(retain,readonly) UIViewController * topViewController;
@property(copy) NSArray * viewControllers;
@property(retain,readonly) UIViewController * visibleViewController;

+ (BOOL)_directlySetsContentOverlayInsetsForChildren;
+ (BOOL)_shouldForwardViewWillTransitionToSize;
+ (BOOL)_shouldSendLegacyMethodsFromViewWillTransitionToSize;
+ (BOOL)doesOverridePreferredInterfaceOrientationForPresentation;
+ (BOOL)doesOverrideSupportedInterfaceOrientations;

- (void)MPU_popToRootViewControllerAnimated:(BOOL)arg1;
- (void)MPU_popToViewController:(id)arg1 animated:(BOOL)arg2 popRequestSentCompletion:(id)arg3;
- (void)MPU_popToViewControllerBeforeViewController:(id)arg1 animated:(BOOL)arg2;
- (void)MPU_pushNowPlayingViewControllerOfClass:(Class)arg1 player:(id)arg2 animated:(BOOL)arg3;
- (void)MPU_pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_MPUExtras_replaceViewController:(id)arg1 withViewController:(id)arg2 animated:(BOOL)arg3;
- (void)__ck_callDelegateBlocks;
- (void)__ck_enqueueCompletionBlock:(id)arg1;
- (id)__ck_popToRootViewControllerAnimated:(BOOL)arg1 completion:(id)arg2;
- (id)__ck_popToViewController:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3;
- (id)__ck_popViewControllerAnimated:(BOOL)arg1 completion:(id)arg2;
- (void)__ck_pushViewController:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3;
- (void)__viewWillLayoutSubviews;
- (id)_additionalViewControllersToCheckForUserActivity;
- (struct CGSize { float x1; float x2; })_adjustedContentSizeForPopover:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)_allowNestedNavigationControllers;
- (BOOL)_allowsAutorotation;
- (BOOL)_animationParametersForHidingNavigationBar:(BOOL)arg1 lastOperation:(int)arg2 edge:(unsigned int*)arg3 duration:(double*)arg4;
- (id)_backdropBarGroupName;
- (id)_backdropGroupName;
- (BOOL)_barAnimationWasCancelled;
- (id)_barInteractiveAnimationCoordinator;
- (id)_barSwipeHideGesture;
- (id)_barTapHideGesture;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_boundsForPalette:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2;
- (id)_builtinInteractionController;
- (id)_builtinTransitionController;
- (float)_builtinTransitionGap;
- (int)_builtinTransitionStyle;
- (id)_cachedInteractionController;
- (id)_cachedTransitionController;
- (void)_cancelInteractiveTransition:(float)arg1 transitionContext:(id)arg2;
- (void)_clearLastOperation;
- (BOOL)_clipUnderlapWhileTransitioning;
- (void)_computeAndApplyScrollContentInsetDeltaForViewController:(id)arg1;
- (struct CGPoint { float x1; float x2; })_computeTopBarCenter:(id)arg1 hidden:(BOOL)arg2 edge:(unsigned int)arg3 center:(struct CGPoint { float x1; float x2; })arg4 offset:(float)arg5;
- (void)_configureBarSwipeGesture;
- (void)_configureBarTapGesture;
- (void)_configureBarsAutomaticActions;
- (void)_configureKeyboardBarHiding;
- (void)_configureToolbar;
- (void)_confirmBarAccessMethods;
- (id)_customInteractionController:(id)arg1;
- (float)_customNavigationTransitionDuration;
- (id)_customTransitionController:(BOOL)arg1;
- (id)_deepestUnambiguousResponder;
- (int)_deferredTransition;
- (void)_detachPalette:(id)arg1;
- (void)_didBecomeContentViewControllerOfPopover:(id)arg1;
- (BOOL)_didExplicitlyHideTabBar;
- (void)_didGainChildScrollView:(id)arg1;
- (void)_didResignContentViewControllerOfPopover:(id)arg1;
- (BOOL)_doesTopViewControllerSupportInterfaceOrientation:(int)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL*)arg2;
- (void)_executeNavigationHandler:(id)arg1 deferred:(BOOL)arg2;
- (id)_existingNavigationBar;
- (id)_existingToolbar;
- (id)_existingToolbarWithItems;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_expectedContentInsetDeltaForViewController:(id)arg1;
- (id)_findViewControllerToPopTo;
- (id)_findViewControllerToPopToForNavigationItem:(id)arg1;
- (void)_finishInteractiveTransition:(float)arg1 transitionContext:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForContainerViewInSheetForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 displayingTopView:(BOOL)arg2 andBottomView:(BOOL)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForPalette:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForViewController:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForWrapperViewForViewController:(id)arg1;
- (void)_gestureRecognizedInteractiveHide:(id)arg1;
- (void)_gestureRecognizedToggleVisibility:(id)arg1;
- (BOOL)_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)_gestureRecognizerShouldBegin:(id)arg1;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; float x6; int x7; }*)arg1;
- (void)_gkForceNextContentUpdate;
- (void)_gkHandleURLPathComponents:(id)arg1 query:(id)arg2;
- (void)_gkRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (void)_gkReplaceTopViewControllerWithViewController:(id)arg1 transition:(id)arg2;
- (void)_gkResetContents;
- (void)_gkSetContentsNeedUpdateWithHandler:(id)arg1;
- (void)_gkSetViewControllers:(id)arg1 transition:(id)arg2;
- (BOOL)_gkShouldRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (void)_gkUpdateContentsWithCompletionHandlerAndError:(id)arg1;
- (BOOL)_hasNestedNavigationController;
- (BOOL)_hasTranslucentNavigationBarIncludingViewController:(id)arg1;
- (void)_hideForKeyboardAppearance;
- (void)_hideOrShowBottomBarIfNeededWithTransition:(int)arg1;
- (void)_hideShowNavigationBarDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_hideShowToolbarDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (id)_interactionController;
- (BOOL)_isCrossfadingInTabBar;
- (BOOL)_isCrossfadingOutTabBar;
- (BOOL)_isInteractiveCustomNavigationTransition;
- (BOOL)_isLayingOutBarsDuringStatusBarUpdate;
- (BOOL)_isNavigationBarEffectivelyVisible;
- (BOOL)_isNavigationBarVisible;
- (BOOL)_isNestedNavigationController;
- (BOOL)_isPerformingLayoutToLayoutTransition;
- (BOOL)_isPresentationContextByDefault;
- (BOOL)_isSupportedInterfaceOrientation:(int)arg1;
- (BOOL)_isTransitioning;
- (BOOL)_isUsingBuiltinAnimator;
- (id)_keyboardAnimationStyle;
- (id)_keyboardAppearedNotificationToken;
- (int)_keyboardDirectionForTransition:(int)arg1;
- (id)_lastNavigationItems;
- (void)_layoutTopViewController;
- (void)_layoutTopViewControllerInSheet;
- (void)_layoutTopViewControllerInSheetWithPopoverView:(id)arg1;
- (void)_layoutTopViewControllerOutOfSheet;
- (void)_layoutViewController:(id)arg1;
- (void)_makeBarHideGestureIfNecessary;
- (void)_makeBarSwipeGestureIfNecessary;
- (id)_moreListTitle;
- (id)_navbarAnimationId;
- (BOOL)_navbarIsAppearingInteractively;
- (void)_navigationBarDidChangeStyle:(id)arg1;
- (id)_navigationBarForNestedNavigationController;
- (id)_navigationBarHiddenByDefault:(BOOL)arg1;
- (id)_navigationItems;
- (int)_navigationTransitionForUITransition:(int)arg1;
- (void)_navigationTransitionView:(id)arg1 didCancelTransition:(int)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 wrapperView:(id)arg5;
- (id)_nthChildViewControllerFromTop:(unsigned int)arg1;
- (id)_outermostNavigationController;
- (void)_performBackGesture:(id)arg1;
- (id)_pinningBarForPalette:(id)arg1;
- (void)_popViewControllerAndUpdateInterfaceOrientationAnimated:(BOOL)arg1;
- (id)_popViewControllerWithTransition:(int)arg1 allowPoppingLast:(BOOL)arg2;
- (int)_positionForBar:(id)arg1;
- (void)_positionNavigationBarHidden:(BOOL)arg1 edge:(unsigned int)arg2 initialOffset:(float)arg3;
- (void)_positionNavigationBarHidden:(BOOL)arg1 edge:(unsigned int)arg2;
- (void)_positionNavigationBarHidden:(BOOL)arg1;
- (void)_positionPaletteHidden:(BOOL)arg1 edge:(unsigned int)arg2 initialOffset:(float)arg3;
- (void)_positionPaletteHidden:(BOOL)arg1 edge:(unsigned int)arg2;
- (void)_positionToolbarHidden:(BOOL)arg1 edge:(unsigned int)arg2 crossFade:(BOOL)arg3;
- (void)_positionToolbarHidden:(BOOL)arg1 edge:(unsigned int)arg2;
- (void)_positionToolbarHidden:(BOOL)arg1;
- (void)_positionTopBar:(id)arg1 hidden:(BOOL)arg2 edge:(unsigned int)arg3 center:(struct CGPoint { float x1; float x2; })arg4 offset:(float)arg5;
- (void)_prepareCollectionViewController:(id)arg1 forSharingWithCollectionViewController:(id)arg2;
- (void)_prepareCollectionViewControllerForSharing:(id)arg1;
- (void)_prepareCollectionViewControllers:(id)arg1 forSharingInRange:(id)arg2;
- (void)_prepareForDismissalInPopover:(id)arg1;
- (void)_prepareForNestedDisplayWithNavigationController:(id)arg1;
- (void)_prepareForNormalDisplayWithNavigationController:(id)arg1;
- (void)_prepareForPresentationInPopover:(id)arg1;
- (void)_presentationTransitionUnwrapViewController:(id)arg1;
- (void)_presentationTransitionWrapViewController:(id)arg1 forTransitionContext:(id)arg2;
- (void)_propagateContentAdjustmentsForControllersWithSharedViews;
- (BOOL)_reallyWantsFullScreenLayout;
- (void)_releaseContainerViews;
- (void)_repositionPaletteWithNavigationBarHidden:(BOOL)arg1 duration:(double)arg2;
- (void)_resetBottomBarHiddenState;
- (id)_screenEdgePanGestureRecognizer;
- (float)_scrollViewBottomContentInsetForViewController:(id)arg1;
- (float)_scrollViewTopContentInsetForViewController:(id)arg1;
- (BOOL)_searchHidNavigationBar;
- (void)_sendNavigationBarToBack;
- (void)_setAllowNestedNavigationControllers:(BOOL)arg1;
- (void)_setBackdropGroupName:(id)arg1;
- (void)_setBarAnimationWasCancelled:(BOOL)arg1;
- (void)_setBarSwipeHideGesture:(id)arg1;
- (void)_setBarTapHideGesture:(id)arg1;
- (void)_setBarsHidden:(BOOL)arg1 allowAnimation:(BOOL)arg2;
- (void)_setBarsHidden:(BOOL)arg1;
- (void)_setBuiltinTransitionGap:(float)arg1;
- (void)_setBuiltinTransitionStyle:(int)arg1;
- (void)_setCachedInteractionController:(id)arg1;
- (void)_setCachedTransitionController:(id)arg1;
- (void)_setClipUnderlapWhileTransitioning:(BOOL)arg1;
- (void)_setClipsToBounds:(BOOL)arg1;
- (void)_setContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)_setCrossfadingInTabBar:(BOOL)arg1;
- (void)_setCrossfadingOutTabBar:(BOOL)arg1;
- (void)_setCustomTransition:(BOOL)arg1;
- (void)_setDidExplicitlyHideTabBar:(BOOL)arg1;
- (void)_setInteractionController:(id)arg1;
- (void)_setInteractiveAnimationCoordinator:(id)arg1;
- (void)_setIsNestedNavigationController:(BOOL)arg1;
- (void)_setKeyboardAppearedNotificationToken:(id)arg1;
- (void)_setKeyboardNotificationToken:(id)arg1;
- (void)_setNavbarAnimationId:(id)arg1;
- (void)_setNavigationBarHidden:(BOOL)arg1 edge:(unsigned int)arg2 duration:(double)arg3;
- (void)_setNavigationBarHidden:(BOOL)arg1 edgeIfNotNavigating:(unsigned int)arg2 duration:(double)arg3;
- (void)_setNavigationBarHidesCompletelyOffscreen:(BOOL)arg1;
- (void)_setNeedsStatusBarAppearanceUpdateWithoutBarLayout;
- (void)_setPreferredContentSizeFromChildContentContainer:(id)arg1;
- (void)_setSearchHidNavigationBar:(BOOL)arg1;
- (void)_setStoreBarStyle:(int)arg1 clientInterface:(id)arg2;
- (void)_setToolbarAnimationId:(id)arg1;
- (void)_setToolbarClass:(Class)arg1;
- (void)_setToolbarHidden:(BOOL)arg1 edge:(unsigned int)arg2 duration:(double)arg3;
- (void)_setTransitionController:(id)arg1;
- (void)_setUpdateNavigationBarHandler:(id)arg1;
- (void)_setUseCurrentStatusBarHeight:(BOOL)arg1;
- (void)_setUseStandardStatusBarHeight:(BOOL)arg1;
- (void)_setUsingBuiltinAnimator:(BOOL)arg1;
- (void)_setViewControllers:(id)arg1 transition:(int)arg2 animated:(BOOL)arg3 operation:(int)arg4;
- (void)_setViewControllers:(id)arg1 transition:(int)arg2 animated:(BOOL)arg3;
- (void)_setViewControllers:(id)arg1 transition:(int)arg2;
- (void)_setViewControllers_7_0:(id)arg1 transition:(int)arg2 animated:(BOOL)arg3 operation:(int)arg4;
- (void)_setViewControllers_7_0:(id)arg1 transition:(int)arg2 animated:(BOOL)arg3;
- (void)_setVisualAltitudeForBar:(id)arg1;
- (BOOL)_shouldBottomBarBeHidden;
- (BOOL)_shouldChildViewControllerUseFullScreenLayout:(id)arg1;
- (BOOL)_shouldCrossFadeBottomBars;
- (BOOL)_shouldCrossFadeNavigationBar;
- (BOOL)_shouldHideBarsForTraits:(id)arg1;
- (BOOL)_shouldLayoutViewControllerForTransparentStatusBar:(id)arg1;
- (BOOL)_shouldNavigationBarInsetViewController:(id)arg1 orOverlayContent:(BOOL*)arg2;
- (BOOL)_shouldNavigationBarInsetViewController:(id)arg1;
- (BOOL)_shouldNavigationBarInsetViewControllerPreInnsbruck:(id)arg1;
- (BOOL)_shouldPersistViewWhenCoding;
- (BOOL)_shouldPopFromLandscapeToPortraitOrientation;
- (BOOL)_shouldStatusBarInsetViewController:(id)arg1;
- (BOOL)_shouldSynthesizeSupportedOrientations;
- (BOOL)_shouldTabBar:(id)arg1 insetViewController:(id)arg2 orOverlayContent:(BOOL*)arg3;
- (BOOL)_shouldTabBar:(id)arg1 insetViewController:(id)arg2;
- (BOOL)_shouldToolBar:(id)arg1 insetViewController:(id)arg2 orOverlayContent:(BOOL*)arg3;
- (BOOL)_shouldToolBar:(id)arg1 insetViewController:(id)arg2;
- (BOOL)_shouldUseBuiltinInteractionController;
- (BOOL)_shouldUseOnePartRotation;
- (id)_snapshotView;
- (void)_startCustomTransition:(id)arg1;
- (void)_startDeferredTransitionIfNeeded:(id)arg1;
- (void)_startDeferredTransitionIfNeeded;
- (id)_startInteractiveBarTransition:(id)arg1;
- (void)_startInteractiveNavbarTransition;
- (void)_startInteractiveToolbarTransition;
- (void)_startPaletteTransitionIfNecessary:(id)arg1 animated:(BOOL)arg2;
- (void)_startToolbarTransitionIfNecessary:(id)arg1 animated:(BOOL)arg2;
- (void)_startTransition:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;
- (void)_tabBarControllerDidFinishShowingTabBar:(id)arg1 isHidden:(BOOL)arg2;
- (id)_toolbarAnimationId;
- (Class)_toolbarClass;
- (BOOL)_toolbarIsAnimatingInteractively;
- (float)_topBarHeight;
- (id)_topPalette;
- (id)_transitionAnimationContext;
- (BOOL)_transitionConflictsWithNavigationTransitions:(id)arg1;
- (id)_transitionController;
- (id)_transitionCoordinator;
- (int)_transitionForOldViewControllers:(id)arg1 newViewControllers:(id)arg2;
- (void)_updateBarsForCurrentInterfaceOrientation;
- (void)_updateBottomBarHiddenState;
- (void)_updateChildContentMargins;
- (void)_updateInteractiveBarTransition:(id)arg1 withUUID:(id)arg2 percent:(float)arg3 isFinished:(BOOL)arg4 didComplete:(BOOL)arg5 completionSpeed:(float)arg6 completionCurve:(int)arg7;
- (void)_updateInteractivePopGestureEnabledState;
- (void)_updateInteractiveTransition:(float)arg1;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (id)_updateNavigationBarHandler;
- (void)_updatePaletteBackground;
- (void)_updatePaletteConstraints;
- (void)_updateScrollViewFromViewController:(id)arg1 toViewController:(id)arg2;
- (void)_updateToolbarItemsFromViewController:(id)arg1 animated:(BOOL)arg2;
- (BOOL)_useCrossFadeForGestureHiding;
- (BOOL)_useCurrentStatusBarHeight;
- (BOOL)_useStandardStatusBarHeight;
- (BOOL)_usesTransitionController;
- (id)_viewControllerForDisappearCallback;
- (BOOL)_viewControllerWasSelected;
- (id)_viewForContentInPopover;
- (id)_viewsWithDisabledInteractionGivenTransitionContext:(id)arg1;
- (void)_willBecomeContentViewControllerOfPopover:(id)arg1;
- (void)_willChangeToIdiom:(int)arg1 onScreen:(id)arg2;
- (BOOL)_willPerformCustomNavigationTransitionForPop;
- (BOOL)_willPerformCustomNavigationTransitionForPush;
- (BOOL)allowUserInteractionDuringTransition;
- (void)attachPalette:(id)arg1 isPinned:(BOOL)arg2;
- (BOOL)avoidMovingNavBarOffscreenBeforeUnhiding;
- (id)barHideOnSwipeGestureRecognizer;
- (id)barHideOnTapGestureRecognizer;
- (BOOL)becomeFirstResponder;
- (id)bottomViewController;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (BOOL)ckCanDismissWhenSuspending;
- (void)collapseSecondaryViewController:(id)arg1 forSplitViewController:(id)arg2;
- (BOOL)condensesBarsOnSwipe;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopover;
- (float)customNavigationTransitionDuration;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (id)defaultPNGName;
- (id)delegate;
- (void)detachPalette:(id)arg1 isInPaletteTransition:(BOOL)arg2;
- (void)detachPalette:(id)arg1;
- (id)detailViewController;
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(int)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)didShowViewController:(id)arg1 animated:(BOOL)arg2;
- (id)disappearingViewController;
- (double)durationForTransition:(int)arg1;
- (BOOL)editing;
- (BOOL)enableBackButtonDuringTransition;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)existingPaletteForEdge:(unsigned int)arg1;
- (id)firstViewController;
- (BOOL)hidesBarsOnSwipe;
- (BOOL)hidesBarsOnTap;
- (BOOL)hidesBarsWhenKeyboardAppears;
- (BOOL)hidesBarsWhenVerticallyCompact;
- (unsigned int)indexOfViewController:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRootViewController:(id)arg1;
- (id)interactivePopGestureRecognizer;
- (void)invalidate;
- (BOOL)isAlreadyPoppingNavItem;
- (BOOL)isBuiltinTransition;
- (BOOL)isCustomTransition;
- (BOOL)isExpanded;
- (BOOL)isInteractiveTransition;
- (BOOL)isModalInPopover;
- (BOOL)isNavigationBarHidden;
- (BOOL)isShown;
- (BOOL)isToolbarHidden;
- (int)lastOperation;
- (void)loadView;
- (void)makeModalViewControllerTopViewController;
- (id)mf_keyPathsMapForUICustomization;
- (int)modalTransitionStyle;
- (id)moreListImage;
- (id)moreListSelectedImage;
- (id)moreListTableCell;
- (void)music_pushNowPlayingViewControllerAnimated:(BOOL)arg1;
- (void)navigationBar:(id)arg1 buttonClicked:(int)arg2;
- (BOOL)navigationBar:(id)arg1 shouldPopItem:(id)arg2;
- (id)navigationBar;
- (Class)navigationBarClass;
- (void)navigationBarDidChangeOpacity:(id)arg1;
- (void)navigationBarDidResizeForPrompt:(id)arg1;
- (id)navigationItem;
- (void)navigationTransitionView:(id)arg1 didEndTransition:(int)arg2 fromView:(id)arg3 toView:(id)arg4;
- (void)navigationTransitionView:(id)arg1 didStartTransition:(int)arg2;
- (double)navigationTransitionView:(id)arg1 durationForTransition:(int)arg2;
- (id)navigationTransitionView;
- (BOOL)needsDeferredTransition;
- (id)paletteForEdge:(unsigned int)arg1 size:(struct CGSize { float x1; float x2; })arg2;
- (void)popRecursivelyToRootController;
- (id)popToRootViewControllerAnimated:(BOOL)arg1;
- (id)popToRootViewControllerWithTransition:(int)arg1;
- (void)popToSigninControllerAnimated:(BOOL)arg1;
- (id)popToViewController:(id)arg1 animated:(BOOL)arg2;
- (id)popToViewController:(id)arg1 transition:(int)arg2;
- (id)popToViewControllerWithSnapbackIdentifier:(id)arg1 animated:(BOOL)arg2;
- (id)popViewControllerAnimated:(BOOL)arg1;
- (id)popViewControllerWithAnimationTransition:(int)arg1 duration:(double)arg2 curve:(int)arg3;
- (id)popViewControllerWithTransition:(int)arg1;
- (struct CGSize { float x1; float x2; })preferredContentSize;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (int)preferredInterfaceOrientationForPresentation;
- (int)preferredStatusBarStyle;
- (BOOL)pretendNavBarHidden;
- (id)previousViewController;
- (id)pu_currentInteractiveTransition;
- (id)pu_currentNavigationTransition;
- (void)pu_popToViewController:(id)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3;
- (void)pu_popViewControllerAnimated:(BOOL)arg1 interactive:(BOOL)arg2;
- (void)pu_pushViewController:(id)arg1 withTransition:(id)arg2 animated:(BOOL)arg3 isInteractive:(BOOL)arg4;
- (void)purgeMemoryForReason:(int)arg1;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)pushViewController:(id)arg1 transition:(int)arg2 forceImmediate:(BOOL)arg3;
- (void)pushViewController:(id)arg1 transition:(int)arg2;
- (void)rc_changeTopNavigationItemPropertiesToPropertiesInNavigationItem:(id)arg1 animated:(BOOL)arg2;
- (id)rotatingFooterView;
- (id)rotatingHeaderView;
- (id)rotatingSnapshotViewForWindow:(id)arg1;
- (BOOL)searchBarHidNavBar;
- (id)segueForUnwindingToViewController:(id)arg1 fromViewController:(id)arg2 identifier:(id)arg3;
- (id)separateSecondaryViewControllerForSplitViewController:(id)arg1;
- (void)setAllowUserInteractionDuringTransition:(BOOL)arg1;
- (void)setAvoidMovingNavBarOffscreenBeforeUnhiding:(BOOL)arg1;
- (void)setCondensesBarsOnSwipe:(BOOL)arg1;
- (void)setContentSizeForViewInPopover:(struct CGSize { float x1; float x2; })arg1;
- (void)setCustomNavigationTransitionDuration:(float)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDetailViewController:(id)arg1;
- (void)setDisappearingViewController:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setEnableBackButtonDuringTransition:(BOOL)arg1;
- (void)setHidesBarsOnSwipe:(BOOL)arg1;
- (void)setHidesBarsOnTap:(BOOL)arg1;
- (void)setHidesBarsWhenKeyboardAppears:(BOOL)arg1;
- (void)setHidesBarsWhenVerticallyCompact:(BOOL)arg1;
- (void)setInteractiveTransition:(BOOL)arg1;
- (void)setIsExpanded:(BOOL)arg1;
- (void)setNavigationBar:(id)arg1;
- (void)setNavigationBarClass:(Class)arg1;
- (void)setNavigationBarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setNavigationBarHidden:(BOOL)arg1;
- (void)setNeedsDeferredTransition:(BOOL)arg1;
- (void)setNeedsDeferredTransition;
- (void)setPreferredContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setPretendNavBarHidden:(BOOL)arg1;
- (void)setSearchBarHidNavBar:(BOOL)arg1;
- (void)setToolbar:(id)arg1;
- (void)setToolbarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setToolbarHidden:(BOOL)arg1;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (void)setViewControllers:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)showViewController:(id)arg1 sender:(id)arg2;
- (id)signInControllerInHierarchy;
- (struct CGSize { float x1; float x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { float x1; float x2; })arg2;
- (unsigned int)supportedInterfaceOrientations;
- (void)tabBarControllerDidLongPressTabBarItem:(id)arg1;
- (void)tabBarControllerDidReselectTabBarItem:(id)arg1;
- (id)tabBarItem;
- (id)toolbar;
- (id)topViewController;
- (BOOL)transcriptControllerIsVisible;
- (void)updateTabBarItemForViewController:(id)arg1;
- (void)updateTitleForViewController:(id)arg1;
- (id)viewControllerForUnwindSegueAction:(SEL)arg1 fromViewController:(id)arg2 withSender:(id)arg3;
- (id)viewControllers;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)visibleViewController;
- (BOOL)wasLastOperationAnimated;
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willShowViewController:(id)arg1 animated:(BOOL)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
