/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@class NSObject<OS_dispatch_queue>;

@interface _NMSDispatchQueue : NSObject {
    NSObject<OS_dispatch_queue> *_q;
    int _r;
}

@property(getter=isSuspended,readonly) BOOL suspended;

- (void).cxx_destruct;
- (void)async:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithName:(id)arg1 attributes:(id)arg2;
- (BOOL)isSuspended;
- (void)resume;
- (void)setTarget:(id)arg1;
- (void)suspend;
- (void)sync:(id)arg1;

@end
