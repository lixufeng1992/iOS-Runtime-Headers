/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class CAKeyframeAnimation;

@interface CAMFocusLockView : CAMFocusView {
    CAKeyframeAnimation *_lockBoundsAnimation;
}

- (void).cxx_destruct;
- (id)_createBoundsAnimation;
- (id)_createLockBoundsAnimation;
- (void)animateLock;
- (void)animateScaleDownWithCompletion:(id)arg1;
- (double)fadeInDuration;
- (void)startAnimatingContents:(BOOL)arg1 bounds:(BOOL)arg2 fadeIn:(BOOL)arg3;

@end
