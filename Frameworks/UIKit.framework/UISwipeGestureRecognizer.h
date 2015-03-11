/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray;

@interface UISwipeGestureRecognizer : UIGestureRecognizer {
    struct CGPoint { 
        float x; 
        float y; 
    unsigned int _failed : 1;
    unsigned int _direction;
    double _maximumDuration;
    float _maximumPrimaryMovement;
    float _maximumSecondaryMovement;
    float _minimumPrimaryMovement;
    float _minimumSecondaryMovement;
    unsigned int _numberOfTouchesRequired;
    float _rateOfMaximumMovementDecay;
    float _rateOfMinimumMovementDecay;
    } _startLocation;
    struct CGPoint { float x1; float x2; } *_startLocations;
    double _startTime;
    NSMutableArray *_touches;
}

@property unsigned int direction;
@property double maximumDuration;
@property float maximumPrimaryMovement;
@property float maximumSecondaryMovement;
@property float minimumPrimaryMovement;
@property float minimumSecondaryMovement;
@property unsigned int numberOfTouchesRequired;
@property float rateOfMaximumMovementDecay;
@property float rateOfMinimumMovementDecay;
@property(readonly) struct CGPoint { float x1; float x2; } startPoint;

- (void)_appendSubclassDescription:(id)arg1;
- (BOOL)_checkForSwipeWithDelta:(struct CGPoint { float x1; float x2; })arg1 time:(double)arg2;
- (void)_resetGestureRecognizer;
- (void)dealloc;
- (unsigned int)direction;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (struct CGPoint { float x1; float x2; })locationInView:(id)arg1;
- (struct CGPoint { float x1; float x2; })locationOfTouch:(unsigned int)arg1 inView:(id)arg2;
- (double)maximumDuration;
- (float)maximumPrimaryMovement;
- (float)maximumSecondaryMovement;
- (float)minimumPrimaryMovement;
- (float)minimumSecondaryMovement;
- (unsigned int)numberOfTouches;
- (unsigned int)numberOfTouchesRequired;
- (float)rateOfMaximumMovementDecay;
- (float)rateOfMinimumMovementDecay;
- (void)setDirection:(unsigned int)arg1;
- (void)setMaximumDuration:(double)arg1;
- (void)setMaximumPrimaryMovement:(float)arg1;
- (void)setMaximumSecondaryMovement:(float)arg1;
- (void)setMinimumPrimaryMovement:(float)arg1;
- (void)setMinimumSecondaryMovement:(float)arg1;
- (void)setNumberOfTouchesRequired:(unsigned int)arg1;
- (void)setRateOfMaximumMovementDecay:(float)arg1;
- (void)setRateOfMinimumMovementDecay:(float)arg1;
- (struct CGPoint { float x1; float x2; })startPoint;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
