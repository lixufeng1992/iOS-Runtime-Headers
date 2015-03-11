/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
 */

@class <PSYConnectionDelegate>, NSXPCConnection, PSYOptions;

@interface PSYConnection : NSObject {
    NSXPCConnection *_connection;
    <PSYConnectionDelegate> *_delegate;
    PSYOptions *_options;
    BOOL _valid;
}

@property(retain) NSXPCConnection * connection;
@property <PSYConnectionDelegate> * delegate;
@property(retain) PSYOptions * options;
@property(getter=isValid,readonly) BOOL valid;

- (void).cxx_destruct;
- (void)_handleConnectionInterruption;
- (void)_handleConnectionInvalidation;
- (void)_resumeConnectionIfPossible;
- (id)connection;
- (id)delegate;
- (id)init;
- (BOOL)isValid;
- (id)options;
- (id)remoteConnection;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)startSync;
- (void)startSyncWithOptions:(id)arg1;

@end
