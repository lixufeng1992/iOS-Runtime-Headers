/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, UISnapshotView, UIView, UIWindow;

@interface UIClientRotationContext : NSObject {
    struct { 
        BOOL animateContentRotation; 
        BOOL preserveHeight; 
        BOOL avoidFadingBottomOfContent; 
        BOOL skipSnapshotOfEndState; 
        BOOL preventAdditveAnimations; 
        float contentStretchRightEdgeInset; 
        int edgeClip; 
    NSArray *_backdropViews;
    UISnapshotView *_contentSnapshotViewStart;
    float _contentTopAdjustmentStart;
    UIView *_contentView;
    BOOL _contentWasHidden;
    double _duration;
    UIView *_footerEndSnapshotView;
    UISnapshotView *_footerSnapshotViewStart;
    UIView *_footerStartSnapshotView;
    UIView *_footerView;
    BOOL _footerWasHidden;
    int _fromOrientation;
    UISnapshotView *_headerSnapshotViewStart;
    UIView *_headerView;
    BOOL _headerWasHidden;
    BOOL _orderKeyboardInAfterRotating;
    id _rotatingClient;
    UIView *_rotatingSnapshotView;
    } _rotationSettings;
    BOOL _skipClientRotationCallbacks;
    BOOL _skipFooterRotation;
    BOOL _skipHeaderRotation;
    UIView *_snapshotTargetView;
    BOOL _snapshotTargetWasHidden;
    int _toOrientation;
    UIWindow *_window;
    float contentBottomInset;
}

@property(readonly) UIView * contentView;
@property(readonly) double duration;
@property(readonly) int fromOrientation;
@property(readonly) id rotatingClient;
@property BOOL skipClientRotationCallbacks;
@property(readonly) int toOrientation;

- (BOOL)_isFooterTranslucent;
- (BOOL)_isHeaderTranslucent;
- (void)_positionHeaderView:(id)arg1 andFooterView:(id)arg2 outsideContentViewForInterfaceOrientation:(int)arg3;
- (void)_slideFooterWithStartSnapshot:(id)arg1 endSnapshot:(id)arg2 duration:(double)arg3;
- (void)_slideHeaderView:(id)arg1 andFooterView:(id)arg2 offScreen:(BOOL)arg3 forInterfaceOrientation:(int)arg4;
- (id)contentView;
- (void)dealloc;
- (void)disableBackdropViewUpdates:(BOOL)arg1;
- (double)duration;
- (void)finishFirstHalfRotation;
- (void)finishFullRotateUsingOnePartAnimation:(BOOL)arg1;
- (int)fromOrientation;
- (id)initWithClient:(id)arg1 toOrientation:(int)arg2 duration:(double)arg3 andWindow:(id)arg4;
- (void)rotateSnapshots;
- (id)rotatingClient;
- (void)setSkipClientRotationCallbacks:(BOOL)arg1;
- (void)setupRotationOrderingKeyboardInAfterRotation:(BOOL)arg1;
- (BOOL)skipClientRotationCallbacks;
- (void)slideHeaderViewAndFooterViewOffScreen:(BOOL)arg1 forInterfaceOrientation:(int)arg2;
- (int)toOrientation;

@end
