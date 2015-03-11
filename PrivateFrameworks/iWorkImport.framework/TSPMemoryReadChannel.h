/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSObject<OS_dispatch_data>, NSObject<OS_dispatch_queue>, NSString;

@interface TSPMemoryReadChannel : NSObject <TSUReadChannel> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_data> *_dispatchData;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) BOOL isValid;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)addBarrier:(id)arg1;
- (void)close;
- (id)init;
- (id)initWithDispatchData:(id)arg1;
- (id)initWithNSData:(id)arg1;
- (BOOL)isValid;
- (void)readFromOffset:(long long)arg1 length:(unsigned long)arg2 queue:(id)arg3 handler:(id)arg4;
- (void)readWithQueue:(id)arg1 handler:(id)arg2;
- (void)setLowWater:(unsigned long)arg1;

@end
