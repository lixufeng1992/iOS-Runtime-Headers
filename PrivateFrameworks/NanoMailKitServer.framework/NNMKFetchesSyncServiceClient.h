/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@class <NNMKFetchesSyncServiceClientDelegate>;

@interface NNMKFetchesSyncServiceClient : NNMKSyncServiceEndpoint {
    <NNMKFetchesSyncServiceClientDelegate> *_delegate;
}

@property <NNMKFetchesSyncServiceClientDelegate> * delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(int)arg2;
- (id)initWithQueue:(id)arg1;
- (id)notifyInitialSyncFinished:(id)arg1;
- (void)readProtobufData:(id)arg1 type:(unsigned int)arg2;
- (void)requestContent:(id)arg1 highPriority:(BOOL)arg2;
- (id)requestFetch:(id)arg1;
- (id)requestFullSync:(id)arg1;
- (id)requestMoreMessages:(id)arg1;
- (void)requestMoreMessagesForConversation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)successfullySentProtobufWithIDSIdentifier:(id)arg1;

@end
