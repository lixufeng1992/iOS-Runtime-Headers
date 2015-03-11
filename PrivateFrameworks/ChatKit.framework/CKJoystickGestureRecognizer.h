/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKJoystickGestureVelocitySample;

@interface CKJoystickGestureRecognizer : UILongPressGestureRecognizer {
    struct CGPoint { 
        float x; 
        float y; 
    } _lastScreenLocation;
    double _lastTouchTime;
    CKJoystickGestureVelocitySample *_previousVelocitySample;
    CKJoystickGestureVelocitySample *_velocitySample;
}

+ (id)joystickGestureRecognizer;

- (struct CGPoint { float x1; float x2; })_convertVelocitySample:(id)arg1 fromScreenCoordinatesToView:(id)arg2;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)reset;
- (void)setAllowableMovement:(float)arg1;
- (void)setNumberOfTouchesRequired:(unsigned int)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint { float x1; float x2; })velocityInView:(id)arg1;

@end
