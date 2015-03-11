/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSError, NSObject<OS_dispatch_queue>, NSString, TSUFileIOChannel;

@interface TSPComponentWriteChannelAdapter : NSObject <TSPComponentWriteChannel> {
    TSUFileIOChannel *_channel;
    NSError *_error;
    id _handler;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)close;
- (id)initWithQueue:(id)arg1 channel:(id)arg2 handler:(id)arg3;
- (void)setError:(id)arg1;
- (void)writeData:(id)arg1;

@end
