/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSTimer, UIView<UIAutoscrollContainer>;

@interface UIAutoscroll : NSObject {
    struct CGPoint { 
        float x; 
        float y; 
    BOOL m_active;
    unsigned int m_count;
    int m_directions;
    } m_point;
    double m_repeatInterval;
    UIView<UIAutoscrollContainer> *m_scrollContainer;
    id m_target;
    NSTimer *m_timer;
}

@property BOOL active;
@property unsigned int count;
@property int directions;
@property struct CGPoint { float x1; float x2; } point;
@property double repeatInterval;
@property(retain) UIView<UIAutoscrollContainer> * scrollContainer;
@property(retain) id target;

- (BOOL)active;
- (unsigned int)count;
- (void)dealloc;
- (int)directions;
- (void)invalidate;
- (struct CGPoint { float x1; float x2; })point;
- (double)repeatInterval;
- (id)scrollContainer;
- (void)setActive:(BOOL)arg1;
- (void)setCount:(unsigned int)arg1;
- (void)setDirections:(int)arg1;
- (void)setPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setRepeatInterval:(double)arg1;
- (void)setScrollContainer:(id)arg1;
- (void)setTarget:(id)arg1;
- (BOOL)startAutoscroll:(id)arg1 scrollContainer:(id)arg2 point:(struct CGPoint { float x1; float x2; })arg3 directions:(int)arg4 repeatInterval:(double)arg5;
- (id)target;
- (void)timerFired:(id)arg1;

@end
