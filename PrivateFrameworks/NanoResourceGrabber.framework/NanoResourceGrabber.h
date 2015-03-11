/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoResourceGrabber.framework/NanoResourceGrabber
 */

@class NSObject<OS_dispatch_queue>, NSXPCConnection;

@interface NanoResourceGrabber : NSObject {
    BOOL _connectionMayBeValid;
    NSXPCConnection *_nrgdConnection;
    NSObject<OS_dispatch_queue> *_queue;
}

@property BOOL connectionMayBeValid;
@property(retain) NSXPCConnection * nrgdConnection;
@property(retain) NSObject<OS_dispatch_queue> * queue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_getCachedIconForBundleID:(id)arg1 iconVariant:(int)arg2 reply:(id)arg3;
- (void)_getIconForBundleID:(id)arg1 iconVariant:(int)arg2 block:(id)arg3 checkLocal:(BOOL)arg4 withTimeout:(double)arg5;
- (void)_getLocalIconForBundleID:(id)arg1 iconVariant:(int)arg2 block:(id)arg3 withTimeout:(double)arg4;
- (void)_getRemoteIconForBundleID:(id)arg1 iconVariant:(int)arg2 block:(id)arg3 withTimeout:(double)arg4;
- (void)connectToService;
- (BOOL)connectionMayBeValid;
- (void)dealloc;
- (void)getCachedIconForBundleID:(id)arg1 iconVariant:(int)arg2 outIconImage:(id*)arg3 outIconHash:(id*)arg4;
- (void)getCachedIconForBundleID:(id)arg1 iconVariant:(int)arg2 outIconImage:(id*)arg3;
- (void)getIconForBundleID:(id)arg1 iconVariant:(int)arg2 block:(id)arg3 timeout:(double)arg4;
- (void)getIconForBundleID:(id)arg1 iconVariant:(int)arg2 block:(id)arg3;
- (void)getIconForBundleIDThread:(id)arg1 iconVariant:(int)arg2 block:(id)arg3 timeout:(double)arg4;
- (void)getRemoteIconForBundleID:(id)arg1 iconVariant:(int)arg2 block:(id)arg3 timeout:(double)arg4;
- (void)getRemoteIconForBundleID:(id)arg1 iconVariant:(int)arg2 block:(id)arg3;
- (void)getRemoteIconForBundleIDThread:(id)arg1 iconVariant:(int)arg2 block:(id)arg3 timeout:(double)arg4;
- (void)getRemoteIconForBundleIDThread:(id)arg1 iconVariant:(int)arg2 block:(id)arg3;
- (id)init;
- (id)nrgdConnection;
- (id)queue;
- (void)setConnectionMayBeValid:(BOOL)arg1;
- (void)setIcon:(id)arg1 forIconVariant:(int)arg2 inBundleID:(id)arg3;
- (void)setNrgdConnection:(id)arg1;
- (void)setQueue:(id)arg1;

@end
