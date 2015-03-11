/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRDirectionalPanPacketEvent : TRPacketEvent {
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    int _gestureState;
    } _location;
    } _velocity;
}

@property(readonly) int gestureState;
@property(readonly) struct CGPoint { float x1; float x2; } location;
@property(readonly) struct CGPoint { float x1; float x2; } velocity;

+ (unsigned int)_packetEventType;

- (id)_initWithVersion:(unsigned int)arg1 payloadDictionary:(id)arg2;
- (id)description;
- (int)gestureState;
- (id)initWithGestureState:(int)arg1 location:(struct CGPoint { float x1; float x2; })arg2 velocity:(struct CGPoint { float x1; float x2; })arg3;
- (struct CGPoint { float x1; float x2; })location;
- (struct CGPoint { float x1; float x2; })velocity;

@end
