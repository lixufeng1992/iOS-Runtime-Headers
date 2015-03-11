/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@class NSDictionary, NSString;

@interface IDSSocketPairResourceTransferReceiver : NSObject {
    BOOL _compressed;
    BOOL _done;
    BOOL _expectsPeerResponse;
    int _fileDescriptor;
    NSString *_messageUUID;
    NSDictionary *_metadata;
    NSString *_peerResponseIdentifier;
    NSString *_resourcePath;
    unsigned int _sequenceNumber;
    unsigned short _streamID;
    unsigned long long _totalBytesExpected;
    unsigned long long _totalBytesReceived;
    BOOL _wantsAppAck;
}

@property(readonly) unsigned long long totalBytesReceived;

- (void)abortTransfer;
- (BOOL)appendMessage:(id)arg1;
- (void)dealloc;
- (id)finalizedMessageDictionaryIfDone;
- (id)initWithMessage:(id)arg1;
- (unsigned long long)totalBytesReceived;
- (BOOL)writeResourceData:(id)arg1;

@end
