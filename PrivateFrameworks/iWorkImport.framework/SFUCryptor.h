/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface SFUCryptor : NSObject {
    unsigned long mBlockSize;
    struct _CCCryptor { } *mCryptor;
    char *mDecryptionInputBuffer;
    BOOL mFinished;
    int mOperation;
    char *mOutputBuffer;
    unsigned long mOutputBufferAvailable;
    char *mOutputBufferPos;
}

- (BOOL)cryptDataFromBuffer:(const char *)arg1 length:(unsigned long)arg2 toStream:(id)arg3 finished:(BOOL)arg4 crc32:(unsigned int*)arg5 error:(id*)arg6;
- (BOOL)cryptDataFromBuffer:(const char *)arg1 length:(unsigned long)arg2 toStream:(id)arg3 finished:(BOOL)arg4 error:(id*)arg5;
- (BOOL)cryptDataFromStream:(id)arg1 toBuffer:(char *)arg2 length:(unsigned long)arg3 bytesRead:(unsigned int*)arg4 error:(id*)arg5;
- (void)dealloc;
- (id)initWithKey:(id)arg1 operation:(int)arg2 iv:(const char *)arg3 ivLength:(unsigned long)arg4 usePKCS7Padding:(BOOL)arg5;
- (id)initWithKey:(id)arg1 operation:(int)arg2 iv:(const char *)arg3 ivLength:(unsigned long)arg4;

@end
