/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class <BWSourceNodeErrorDelegate>;

@interface BWSourceNode : BWNode {
    <BWSourceNodeErrorDelegate> *_errorDelegate;
}

@property(readonly) struct OpaqueCMClock { }* clock;
@property <BWSourceNodeErrorDelegate> * errorDelegate;

- (struct OpaqueCMClock { }*)clock;
- (id)errorDelegate;
- (id)nodeType;
- (void)setErrorDelegate:(id)arg1;
- (BOOL)start:(id*)arg1;
- (BOOL)stop:(id*)arg1;

@end
