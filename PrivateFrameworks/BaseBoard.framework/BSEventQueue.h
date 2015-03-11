/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@class BSEventQueueEvent, NSArray, NSHashTable, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface BSEventQueue : NSObject {
    NSMutableArray *_eventQueue;
    NSHashTable *_eventQueueLocks;
    BSEventQueueEvent *_executingEvent;
    NSString *_name;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain) BSEventQueueEvent * executingEvent;
@property(copy) NSString * name;
@property(copy,readonly) NSArray * pendingEvents;
@property(retain) NSObject<OS_dispatch_queue> * queue;

- (void)_addEventQueueLock:(id)arg1;
- (void)_executeOrPendEvents:(id)arg1 position:(int)arg2;
- (void)_noteQueueDidLock;
- (void)_noteQueueDidUnlock;
- (void)_noteWillCancelEventsWithName:(id)arg1 count:(unsigned int)arg2;
- (void)_noteWillExecuteEvent:(id)arg1;
- (void)_noteWillPendEvents:(id)arg1 atPosition:(int)arg2;
- (void)_processNextEvent;
- (void)_removeEventQueueLock:(id)arg1;
- (BOOL)_shouldProcessEvent:(id)arg1 enqueuedDuringExecutionOfEvent:(id)arg2;
- (id)acquireLockForReason:(id)arg1;
- (void)cancelEventsWithName:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)executeOrInsertEvent:(id)arg1 atPosition:(int)arg2;
- (void)executeOrInsertEvents:(id)arg1 atPosition:(int)arg2;
- (id)executingEvent;
- (void)flushAllEvents;
- (void)flushEvents:(id)arg1;
- (void)flushPendingEvents;
- (BOOL)hasEventWithName:(id)arg1;
- (BOOL)hasEventWithPrefix:(id)arg1;
- (id)init;
- (id)initWithName:(id)arg1 onQueue:(id)arg2;
- (BOOL)isLocked;
- (id)name;
- (id)pendingEvents;
- (id)queue;
- (void)relinquishLock:(id)arg1;
- (void)setExecutingEvent:(id)arg1;
- (void)setName:(id)arg1;
- (void)setQueue:(id)arg1;

@end
