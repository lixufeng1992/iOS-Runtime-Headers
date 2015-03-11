/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <TSUStreamReadChannel>, NSObject<OS_dispatch_queue>, NSString;

@interface TSUZipInflateReadChannel : NSObject <TSUStreamReadChannel> {
    struct z_stream_s { 
        char *next_in; 
        unsigned int avail_in; 
        unsigned int total_in; 
        char *next_out; 
        unsigned int avail_out; 
        unsigned int total_out; 
        char *msg; 
        struct internal_state {} *state; 
        int (*zalloc)(); 
        int (*zfree)(); 
        void *opaque; 
        int data_type; 
        unsigned int adler; 
        unsigned int reserved; 
    unsigned int _CRC;
    char *_outBuffer;
    unsigned long _outBufferSize;
    <TSUStreamReadChannel> *_readChannel;
    NSObject<OS_dispatch_queue> *_readQueue;
    unsigned long _remainingUncompressedSize;
    } _stream;
    BOOL _validateCRC;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)close;
- (void)dealloc;
- (void)handleFailureWithQueue:(id)arg1 handler:(id)arg2 error:(id)arg3;
- (id)initWithReadChannel:(id)arg1 uncompressedSize:(unsigned long)arg2 CRC:(unsigned int)arg3 validateCRC:(BOOL)arg4;
- (void)prepareBuffer;
- (BOOL)processData:(id)arg1 inflateResult:(int*)arg2 CRC:(unsigned int*)arg3 isDone:(BOOL)arg4 handlerQueue:(id)arg5 handler:(id)arg6;
- (void)readWithQueue:(id)arg1 handler:(id)arg2;

@end
