/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@class NSData;

@interface IDSSocketPairOTREncryptedMessage : IDSSocketPairMessage {
    NSData *_data;
    BOOL _encrypted;
    BOOL _fileXfer;
    unsigned int _offset;
    unsigned short _priority;
    unsigned int _sequenceNumber;
    unsigned short _streamID;
    unsigned char _versionNumber;
}

@property(retain,readonly) NSData * data;
@property(readonly) BOOL encrypted;
@property(readonly) BOOL fileXfer;
@property(readonly) unsigned short priority;
@property(readonly) unsigned int sequenceNumber;
@property(readonly) unsigned short streamID;
@property(readonly) unsigned char versionNumber;

- (id)_nonHeaderData;
- (unsigned char)command;
- (id)data;
- (void)dealloc;
- (BOOL)encrypted;
- (BOOL)fileXfer;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;
- (id)initWithVersion:(unsigned char)arg1 encrypted:(BOOL)arg2 streamID:(unsigned short)arg3 priority:(unsigned short)arg4 sequenceNumber:(unsigned int)arg5 fileXfer:(BOOL)arg6 data:(id)arg7;
- (unsigned short)priority;
- (unsigned int)sequenceNumber;
- (unsigned short)streamID;
- (unsigned char)versionNumber;

@end
