/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSData, NSString, SFUCryptoKey;

@interface TSPReadOnlyMemoryDataStorage : NSObject <TSPDataStorage> {
    NSData *_NSData;
}

@property(readonly) unsigned int CRC;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) SFUCryptoKey * decryptionKey;
@property(copy,readonly) NSString * description;
@property(readonly) NSString * documentResourceLocator;
@property(readonly) unsigned long long encodedLength;
@property BOOL gilligan_isRemote;
@property(readonly) unsigned int hash;
@property(readonly) BOOL isMissingData;
@property(readonly) BOOL isReadable;
@property(readonly) BOOL needsDownload;
@property(readonly) unsigned char packageIdentifier;
@property(readonly) NSString * packageLocator;
@property(readonly) BOOL readOnly;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (id)AVAssetWithOptions:(id)arg1 contentTypeUTI:(id)arg2;
- (id)AVAssetWithOptions:(id)arg1 usingResourceLoaderWithContentTypeUTI:(id)arg2;
- (id)NSDataWithOptions:(unsigned int)arg1;
- (void)archiveInfoMessage:(struct DataInfo { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned long long x3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x8; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x9; int x10; unsigned int x11[1]; }*)arg1 archiver:(id)arg2;
- (id)bookmarkDataWithOptions:(unsigned int)arg1;
- (id)documentResourceLocator;
- (unsigned long long)encodedLength;
- (id)filenameForPreferredFilename:(id)arg1;
- (id)initWithNSData:(id)arg1;
- (BOOL)isInPackage:(id)arg1;
- (BOOL)isMissingData;
- (BOOL)isReadable;
- (struct CGDataProvider { }*)newCGDataProvider;
- (struct CGImageSource { }*)newCGImageSource;
- (unsigned char)packageIdentifier;
- (id)packageLocator;
- (void)performIOChannelReadWithAccessor:(id)arg1;
- (BOOL)readOnly;
- (BOOL)writeData:(id)arg1 toPackageWriter:(id)arg2 preferredFilename:(id)arg3 filename:(id*)arg4 didCopyDataToPackage:(BOOL*)arg5 isMissingData:(BOOL*)arg6;

@end
