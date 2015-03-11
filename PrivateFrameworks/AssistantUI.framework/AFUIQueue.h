/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@class <AFUIQueueDelegate>, NSMutableArray;

@interface AFUIQueue : NSObject <NSFastEnumeration> {
    <AFUIQueueDelegate> *_delegate;
    NSMutableArray *_objects;
}

@property(readonly) int count;
@property <AFUIQueueDelegate> * delegate;
@property(readonly) id frontObject;
@property(getter=_objects,readonly) NSMutableArray * objects;

- (void).cxx_destruct;
- (id)_objects;
- (int)count;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (id)delegate;
- (id)dequeueAllObjects;
- (id)dequeueObject;
- (id)description;
- (void)enqueueObject:(id)arg1;
- (void)enqueueObjects:(id)arg1;
- (id)frontObject;
- (id)init;
- (id)objectAtIndex:(int)arg1;
- (void)setDelegate:(id)arg1;

@end
