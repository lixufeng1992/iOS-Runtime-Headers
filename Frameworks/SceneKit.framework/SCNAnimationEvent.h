/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface SCNAnimationEvent : NSObject {
    id _eventBlock;
    double _eventTime;
    id _reserved;
}

+ (id)SCNJSExportProtocol;
+ (id)animationEventWithKeyTime:(float)arg1 block:(id)arg2;

- (void)dealloc;
- (id)eventBlock;
- (id)init;
- (void)setEventBlock:(id)arg1;
- (void)setTime:(double)arg1;
- (double)time;

@end
