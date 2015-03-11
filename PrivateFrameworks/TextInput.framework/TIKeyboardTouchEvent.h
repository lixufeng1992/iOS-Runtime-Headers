/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIKeyboardTouchEvent : NSObject <NSSecureCoding> {
    struct CGPoint { 
        float x; 
        float y; 
    int _forcedKeyCode;
    } _location;
    int _pathIndex;
    float _radius;
    int _stage;
    double _timestamp;
}

@property(readonly) int forcedKeyCode;
@property(readonly) struct CGPoint { float x1; float x2; } location;
@property(readonly) int pathIndex;
@property(readonly) float radius;
@property(readonly) int stage;
@property(readonly) double timestamp;

+ (BOOL)supportsSecureCoding;
+ (id)touchEventWithStage:(int)arg1 location:(struct CGPoint { float x1; float x2; })arg2 radius:(float)arg3 timestamp:(double)arg4 pathIndex:(int)arg5 forcedKeyCode:(int)arg6;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (int)forcedKeyCode;
- (id)initWithCoder:(id)arg1;
- (id)initWithStage:(int)arg1 location:(struct CGPoint { float x1; float x2; })arg2 radius:(float)arg3 timestamp:(double)arg4 pathIndex:(int)arg5 forcedKeyCode:(int)arg6;
- (struct CGPoint { float x1; float x2; })location;
- (int)pathIndex;
- (float)radius;
- (int)stage;
- (double)timestamp;

@end
