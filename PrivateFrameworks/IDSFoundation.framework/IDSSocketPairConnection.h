/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@class IMWeakReference, NSData, NSMutableArray, NSMutableData, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSSet;

@interface IDSSocketPairConnection : NSObject {
    long _bytesReceived;
    int _connectedSocket;
    unsigned int _currentDataLength;
    NSMutableData *_currentMessageData;
    unsigned int _currentOutgoingDataIndex;
    unsigned int _currentOutgoingFragmentedMessageID;
    IMWeakReference *_delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    unsigned int _fragmentationSize;
    NSMutableData *_headerData;
    unsigned int _inFlightMessageCountLowWaterMark;
    NSMutableDictionary *_incomingDataFragments;
    BOOL _isConnected;
    double _lastDateCheck;
    NSObject<OS_dispatch_semaphore> *_lock;
    BOOL _notifyWhenConnectionReceivesBytes;
    NSData *_outgoingData;
    NSMutableArray *_outgoingMessageArray;
    double _prevBPS;
    int _priority;
    BOOL _writeSocketIsResumed;
}

@property unsigned int fragmentationSize;
@property(readonly) unsigned int inFlightMessageCount;
@property unsigned int inFlightMessageCountLowWaterMark;
@property(readonly) NSSet * inFlightMessages;
@property(readonly) BOOL isConnected;
@property(readonly) BOOL isEmpty;

- (void)_callDelegateWithBlock:(id)arg1;
- (void)_endSession;
- (void)_processBytesAvailable;
- (BOOL)_queueNextOutgoingData;
- (int)_read:(char *)arg1 maxLength:(unsigned int)arg2;
- (void)_sendToConnectedSocket;
- (void)dealloc;
- (void)endSession;
- (unsigned int)fragmentationSize;
- (unsigned int)inFlightMessageCount;
- (unsigned int)inFlightMessageCountLowWaterMark;
- (id)inFlightMessages;
- (id)initWithSocket:(int)arg1 queue:(id)arg2 delegate:(id)arg3 priority:(int)arg4;
- (BOOL)isConnected;
- (BOOL)isEmpty;
- (BOOL)sendDataMessage:(id)arg1 canFragment:(BOOL)arg2;
- (BOOL)sendDataMessage:(id)arg1;
- (void)setFragmentationSize:(unsigned int)arg1;
- (void)setInFlightMessageCountLowWaterMark:(unsigned int)arg1;
- (void)setNotifyWhenConnectionReceivesBytes:(BOOL)arg1;

@end
