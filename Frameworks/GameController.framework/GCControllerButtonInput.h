/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface GCControllerButtonInput : GCControllerElement {
}

@property(getter=isPressed,readonly) BOOL pressed;
@property(copy) id pressedChangedHandler;
@property(readonly) float value;
@property(copy) id valueChangedHandler;

- (BOOL)_setValue:(float)arg1;
- (BOOL)isPressed;
- (id)pressedChangedHandler;
- (BOOL)setHIDValue:(struct __IOHIDValue { }*)arg1;
- (void)setPressedChangedHandler:(id)arg1;
- (void)setValueChangedHandler:(id)arg1;
- (float)value;
- (id)valueChangedHandler;

@end
