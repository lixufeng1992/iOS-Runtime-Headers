/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray;

@interface UIAnimator : NSObject {
    NSMutableArray *_animations;
    int _heartbeatClientCount[3];
    id _heartbeat[3];
    double _lastUpdateTime;
}

+ (void)disableAnimation;
+ (void)enableAnimation;
+ (id)sharedAnimator;

- (void)_LCDHeartbeatCallback:(id)arg1;
- (void)_TVHeartbeatCallback:(id)arg1;
- (void)_TimerHeartbeatCallback:(id)arg1;
- (void)_addAnimation:(id)arg1 withDuration:(double)arg2 start:(BOOL)arg3 startTime:(double)arg4;
- (void)_advanceAnimationsOfType:(int)arg1 withTimestamp:(double)arg2;
- (BOOL)_isRunningAnimation:(id)arg1;
- (void)_startAnimation:(id)arg1 withStartTime:(double)arg2;
- (void)addAnimation:(id)arg1 withDuration:(double)arg2 start:(BOOL)arg3;
- (void)addAnimations:(id)arg1 withDuration:(double)arg2 start:(BOOL)arg3;
- (void)dealloc;
- (float)fractionForAnimation:(id)arg1;
- (void)removeAnimationsForTarget:(id)arg1 ofKind:(Class)arg2;
- (void)removeAnimationsForTarget:(id)arg1;
- (void)startAnimation:(id)arg1;
- (void)stopAnimation:(id)arg1;

@end
