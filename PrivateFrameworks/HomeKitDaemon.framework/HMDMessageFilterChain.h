/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@class NSArray, NSMutableArray, NSObject<OS_dispatch_queue>;

@interface HMDMessageFilterChain : NSObject {
    NSMutableArray *_messageFilters;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property(copy,readonly) NSArray * filters;
@property(retain) NSMutableArray * messageFilters;
@property(retain) NSObject<OS_dispatch_queue> * workQueue;

- (void).cxx_destruct;
- (void)_executeChainForMessage:(id)arg1 queue:(id)arg2 target:(id)arg3 completionHandler:(id)arg4;
- (void)addMessageFilter:(id)arg1;
- (void)executeChainForMessage:(id)arg1 queue:(id)arg2 target:(id)arg3 completionHandler:(id)arg4;
- (id)filters;
- (id)init;
- (id)messageFilters;
- (void)removeMessageFilter:(id)arg1;
- (void)resetConfiguration;
- (void)setMessageFilters:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (BOOL)shouldCloudSyncData;
- (id)workQueue;

@end
