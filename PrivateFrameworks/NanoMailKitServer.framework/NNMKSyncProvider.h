/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@class <NNMKSyncProviderDelegate>, BLTPingSubscriber, NNMKAccountsSyncServiceServer, NNMKDeviceSyncRegistry, NNMKFetchesSyncServiceServer, NNMKMessageContentSyncServiceServer, NNMKMessagesSyncServiceServer, NNMKPairedDeviceInfo, NSDate, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, NSURL, PSYSyncCoordinator;

@interface NNMKSyncProvider : NNMKSyncEndpoint <NNMKMessagesSyncServiceServerDelegate, NNMKMessageContentSyncServiceServerDelegate, NNMKAccountsSyncServiceServerDelegate, NNMKFetchesSyncServiceServerDelegate, PSYSyncCoordinatorDelegate> {
    NNMKAccountsSyncServiceServer *_accountsSyncService;
    NNMKMessageContentSyncServiceServer *_contentSyncService;
    <NNMKSyncProviderDelegate> *_delegate;
    NNMKFetchesSyncServiceServer *_fetchesSyncService;
    PSYSyncCoordinator *_initialSyncCoordinator;
    NSMutableSet *_initialSyncMessageIdsOfContentToAck;
    NSMutableSet *_initialSyncMessageIdsToSyncContent;
    unsigned int _initialSyncMessagesCount;
    float _initialSyncProgress;
    unsigned int _initialSyncResendInterval;
    BOOL _isFirstMessagesRequestPending;
    NSMutableSet *_messageIdsToIgnoreStatusUpdates;
    BOOL _messagesQueryAvailable;
    NNMKMessagesSyncServiceServer *_messagesSyncService;
    BOOL _messagesVerificationTriggered;
    BLTPingSubscriber *_notificationsPingSubscriber;
    NNMKDeviceSyncRegistry *_pairedDeviceRegistry;
    NSDate *_pendingMoreMessagesForConversationIdRequestBeforeDateReceived;
    NSString *_pendingMoreMessagesForConversationIdRequestConversationId;
    NSObject<OS_dispatch_queue> *_providerQueue;
    BOOL _trackingInitialSync;
}

@property(retain) NNMKAccountsSyncServiceServer * accountsSyncService;
@property(retain) NNMKMessageContentSyncServiceServer * contentSyncService;
@property(copy,readonly) NSString * debugDescription;
@property <NNMKSyncProviderDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(retain) NNMKFetchesSyncServiceServer * fetchesSyncService;
@property(readonly) unsigned int hash;
@property(retain) PSYSyncCoordinator * initialSyncCoordinator;
@property(retain) NSMutableSet * initialSyncMessageIdsOfContentToAck;
@property(retain) NSMutableSet * initialSyncMessageIdsToSyncContent;
@property unsigned int initialSyncMessagesCount;
@property float initialSyncProgress;
@property unsigned int initialSyncResendInterval;
@property BOOL isFirstMessagesRequestPending;
@property(retain) NSMutableSet * messageIdsToIgnoreStatusUpdates;
@property BOOL messagesQueryAvailable;
@property(readonly) BOOL messagesSyncActive;
@property(retain) NNMKMessagesSyncServiceServer * messagesSyncService;
@property BOOL messagesVerificationTriggered;
@property(retain) BLTPingSubscriber * notificationsPingSubscriber;
@property(readonly) BOOL organizeByThread;
@property(readonly) NNMKPairedDeviceInfo * pairedDeviceInfo;
@property(retain) NNMKDeviceSyncRegistry * pairedDeviceRegistry;
@property(retain) NSDate * pendingMoreMessagesForConversationIdRequestBeforeDateReceived;
@property(retain) NSString * pendingMoreMessagesForConversationIdRequestConversationId;
@property(retain) NSObject<OS_dispatch_queue> * providerQueue;
@property(readonly) Class superclass;
@property(readonly) NSString * syncedMailboxAccountId;
@property(readonly) NSString * syncedMailboxCustomName;
@property(readonly) unsigned int syncedMailboxType;
@property(readonly) NSURL * syncedMailboxURL;
@property BOOL trackingInitialSync;

- (void).cxx_destruct;
- (void)_addMessages:(id)arg1 messagesAreNew:(BOOL)arg2;
- (id)_bbSubsectionIdsForMessage:(id)arg1;
- (BOOL)_currentSyncedMailboxAddsDeletesMessagesByStatusUpdates;
- (void)_executePendingContentRequests;
- (void)_executePendingRequests;
- (void)_executePendingResends;
- (id)_filterOutMessagesReceived:(id)arg1 byAlreadySynced:(BOOL)arg2 bySyncedMailboxType:(BOOL)arg3;
- (id)_filterOutMessagesReceivedByDateReceived:(id)arg1;
- (void)_handleDidFailSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(int)arg2;
- (void)_handleDidPairWithNewDevice;
- (void)_handleDidSendProtobufSuccessfullyWithIDSIdentifier:(id)arg1;
- (void)_handleDidUnpair;
- (void)_handleInitialSyncCompleted;
- (void)_handleMessageCompletelySynced:(id)arg1;
- (void)_incrementInitialSyncProgressBy:(float)arg1;
- (BOOL)_isDateReceivedOkForCurrentSyncedMailbox:(id)arg1;
- (BOOL)_isMessageOkForCurrentSyncedMailbox:(id)arg1;
- (BOOL)_isMessageStatusOkForCurrentSyncedMailbox:(unsigned int)arg1;
- (void)_markConversationWithId:(id)arg1 forNotify:(BOOL)arg2;
- (BOOL)_messageHasContentCompletelySynced:(id)arg1;
- (id)_messageProtobufForMessage:(id)arg1;
- (void)_notifyClientNotifyInitialContentSyncCompleted;
- (void)_notifyDelegateThatMessagesStatusWereUpdated:(id)arg1;
- (void)_requestDelegateForAccounts;
- (void)_requestDelegateForContentForMessageIds:(id)arg1 highPriority:(BOOL)arg2;
- (void)_requestDelegateForContentForMessageWithId:(id)arg1 highPriority:(BOOL)arg2;
- (void)_requestDelegateForFetchManualForConversationId:(id)arg1;
- (void)_requestDelegateForFetchResume;
- (void)_requestDelegateForFirstMessages;
- (void)_requestDelegateForMoreMessages;
- (void)_requestDelegateForMoreMessagesBeforeDateReceived:(id)arg1 forConversationWithId:(id)arg2;
- (void)_requestDelegateForResendingAccountWithId:(id)arg1;
- (void)_requestDelegateForResendingMessageWithId:(id)arg1;
- (void)_requestDelegateForVerificationOfMessagesAndIds:(id)arg1 afterDate:(id)arg2;
- (void)_requestDelegateToSendMessageTo:(id)arg1 cc:(id)arg2 subject:(id)arg3 body:(id)arg4;
- (void)_requestDelegateToStopDownloadingAllContentAndAttachments;
- (void)_requestDelegateToStopDownloadingContentAndAttachmentsForMessageWithId:(id)arg1;
- (void)_resendInitialSyncWithIDSIdentifier:(id)arg1 newResendInterval:(unsigned int)arg2;
- (void)_resendObjectId:(id)arg1 objectType:(id)arg2 resendInterval:(unsigned int)arg3 idsIdentifier:(id)arg4;
- (void)_resendPendingAccountWithIds:(id)arg1 forIDSIdentifier:(id)arg2 newResendInterval:(unsigned int)arg3;
- (void)_resendPendingMessageContentWithId:(id)arg1 sentBecauseUserRequested:(BOOL)arg2 idsIdentifier:(id)arg3 newResendInterval:(unsigned int)arg4;
- (void)_resendPendingMessagesWithIds:(id)arg1 forIDSIdentifier:(id)arg2 newResendInterval:(unsigned int)arg3;
- (void)_runSyncVerification;
- (void)_scheduleIdsIdentifierForResend:(id)arg1 currentResendInterval:(unsigned int)arg2 newResendInterval:(unsigned int)arg3;
- (void)_sendFirstUnsyncedAndUnrequestedContents;
- (void)_storeScreenRelatedValuesForPairedDevice:(id)arg1;
- (id)_syncedMailboxForGetters;
- (void)_triggerFullMessagesAndAccountsSync;
- (void)_triggerFullMessagesSync;
- (void)_triggerFullMessagesSyncWithAccountsSync:(BOOL)arg1;
- (BOOL)_verifyDatabaseOkForFullSyncVersion:(unsigned int)arg1;
- (void)_verifyPairingForcingSync:(BOOL)arg1;
- (void)_warnReceiverNeedsUnlock;
- (BOOL)_willPresentNotificationForMessage:(id)arg1;
- (id)accountsSyncService;
- (void)accountsSyncServiceServer:(id)arg1 didFailSendingProtobufWithIDSIdentifier:(id)arg2 errorCode:(int)arg3;
- (void)accountsSyncServiceServer:(id)arg1 didSendProtobufSuccessfullyWithIDSIdentifier:(id)arg2;
- (void)addImageAttachment:(id)arg1 forMessageId:(id)arg2 contentId:(id)arg3;
- (void)addMessageContent:(id)arg1 preview:(id)arg2;
- (void)addMessages:(id)arg1;
- (void)addUpdateOrDeleteAccounts:(id)arg1;
- (id)bulletinFlagsForMessageStatus:(unsigned int)arg1 dateReceived:(id)arg2 messageWillBeAddedToSyncProvider:(BOOL)arg3;
- (id)contentSyncService;
- (void)dealloc;
- (id)delegate;
- (void)deleteMessagesWithIds:(id)arg1;
- (id)fetchesSyncService;
- (void)fetchesSyncServiceServer:(id)arg1 didNotifyInitialSyncFinished:(id)arg2;
- (void)fetchesSyncServiceServer:(id)arg1 didRequestContent:(id)arg2;
- (void)fetchesSyncServiceServer:(id)arg1 didRequestFetch:(id)arg2;
- (void)fetchesSyncServiceServer:(id)arg1 didRequestFullSync:(id)arg2;
- (void)fetchesSyncServiceServer:(id)arg1 didRequestMoreMessages:(id)arg2;
- (void)fetchesSyncServiceServer:(id)arg1 didRequestMoreMessagesForConversation:(id)arg2;
- (id)initWithDelegate:(id)arg1;
- (id)initialSyncCoordinator;
- (id)initialSyncMessageIdsOfContentToAck;
- (id)initialSyncMessageIdsToSyncContent;
- (unsigned int)initialSyncMessagesCount;
- (float)initialSyncProgress;
- (unsigned int)initialSyncResendInterval;
- (BOOL)isFirstMessagesRequestPending;
- (void)markConversationIdForNotNotify:(id)arg1;
- (void)markConversationIdForNotify:(id)arg1 messages:(id)arg2;
- (void)messageContentSyncServiceServer:(id)arg1 didFailSendingProtobufWithIDSIdentifier:(id)arg2 errorCode:(int)arg3;
- (void)messageContentSyncServiceServer:(id)arg1 didSendProtobufSuccessfullyWithIDSIdentifier:(id)arg2;
- (id)messageIdsToIgnoreStatusUpdates;
- (BOOL)messagesQueryAvailable;
- (BOOL)messagesSyncActive;
- (id)messagesSyncService;
- (void)messagesSyncServiceServer:(id)arg1 didDeleteMessages:(id)arg2;
- (void)messagesSyncServiceServer:(id)arg1 didFailSendingProtobufWithIDSIdentifier:(id)arg2 errorCode:(int)arg3;
- (void)messagesSyncServiceServer:(id)arg1 didRequestCompactMessages:(id)arg2;
- (void)messagesSyncServiceServer:(id)arg1 didRequestSendMessage:(id)arg2;
- (void)messagesSyncServiceServer:(id)arg1 didSendProtobufSuccessfullyWithIDSIdentifier:(id)arg2;
- (void)messagesSyncServiceServer:(id)arg1 didUpdateMessagesStatus:(id)arg2;
- (void)messagesSyncServiceServer:(id)arg1 didWarnMessagesFilteredOut:(id)arg2;
- (BOOL)messagesVerificationTriggered;
- (id)notificationsPingSubscriber;
- (void)notifyFetchManualCompleted;
- (void)notifyMessagesQueryAvailable;
- (void)notifyMessagesQueryUnavailable;
- (void)notifyOrganizeByThreadChanged;
- (void)notifySyncedMailboxChanged;
- (BOOL)organizeByThread;
- (id)pairedDeviceInfo;
- (id)pairedDeviceRegistry;
- (id)pendingMoreMessagesForConversationIdRequestBeforeDateReceived;
- (id)pendingMoreMessagesForConversationIdRequestConversationId;
- (id)providerQueue;
- (void)replyWithAccountToResend:(id)arg1;
- (void)replyWithAccounts:(id)arg1;
- (void)replyWithFirstMessages:(id)arg1 syncedMailboxType:(unsigned int)arg2 syncedMailboxAccountId:(id)arg3 syncedMailboxURL:(id)arg4 syncedMailboxCustomName:(id)arg5 organizeByThread:(BOOL)arg6;
- (void)replyWithMessageToResend:(id)arg1;
- (void)replyWithMessagesFailedDueToDataProtectedForDateReceivedBefore:(id)arg1 conversationId:(id)arg2;
- (void)replyWithMoreMessages:(id)arg1 forConversationWithId:(id)arg2;
- (void)replyWithMoreMessages:(id)arg1 forDateReceivedBefore:(id)arg2;
- (void)replyWithVerificationResultsMessagesMissing:(id)arg1 messagesWithDifferentStatus:(id)arg2 extraMessageIds:(id)arg3;
- (void)reportMessageContentDownloadFailureForMessageId:(id)arg1;
- (void)resendIDSIdentifier:(id)arg1;
- (void)setAccountsSyncService:(id)arg1;
- (void)setContentSyncService:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFetchesSyncService:(id)arg1;
- (void)setInitialSyncCoordinator:(id)arg1;
- (void)setInitialSyncMessageIdsOfContentToAck:(id)arg1;
- (void)setInitialSyncMessageIdsToSyncContent:(id)arg1;
- (void)setInitialSyncMessagesCount:(unsigned int)arg1;
- (void)setInitialSyncProgress:(float)arg1;
- (void)setInitialSyncResendInterval:(unsigned int)arg1;
- (void)setIsFirstMessagesRequestPending:(BOOL)arg1;
- (void)setMessageIdsToIgnoreStatusUpdates:(id)arg1;
- (void)setMessagesQueryAvailable:(BOOL)arg1;
- (void)setMessagesSyncService:(id)arg1;
- (void)setMessagesVerificationTriggered:(BOOL)arg1;
- (void)setNotificationsPingSubscriber:(id)arg1;
- (void)setPairedDeviceRegistry:(id)arg1;
- (void)setPendingMoreMessagesForConversationIdRequestBeforeDateReceived:(id)arg1;
- (void)setPendingMoreMessagesForConversationIdRequestConversationId:(id)arg1;
- (void)setProviderQueue:(id)arg1;
- (void)setTrackingInitialSync:(BOOL)arg1;
- (void)syncCoordinatorDidReceiveStartSyncCommand:(id)arg1;
- (id)syncedMailboxAccountId;
- (id)syncedMailboxCustomName;
- (unsigned int)syncedMailboxType;
- (id)syncedMailboxURL;
- (BOOL)trackingInitialSync;
- (void)updateMessagesStatus:(id)arg1;

@end
