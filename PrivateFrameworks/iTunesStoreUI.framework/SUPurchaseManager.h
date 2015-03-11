/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class <SUPurchaseManagerDelegate>, NSMutableArray, NSMutableSet, NSSet, NSString, SUQueueSessionManager;

@interface SUPurchaseManager : NSObject <SSPurchaseRequestDelegatePrivate, SUContinuationDelegate, SSDownloadManagerObserver, SSPurchaseRequestDelegate> {
    <SUPurchaseManagerDelegate> *_delegate;
    NSMutableSet *_futurePurchases;
    NSMutableSet *_inflightContinuations;
    NSMutableArray *_observedDownloadManagers;
    NSMutableArray *_pendingContinuations;
    NSMutableArray *_pendingPurchases;
    NSMutableArray *_purchaseRequests;
    NSMutableSet *_purchasedIdentifiers;
    SUQueueSessionManager *_queueSessionManager;
    BOOL _showingErrorDialogs;
    int _updatesCount;
    NSString *_userAgent;
    BOOL _waitingForAuthentication;
}

@property(copy,readonly) NSString * debugDescription;
@property <SUPurchaseManagerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) NSSet * futurePurchases;
@property(readonly) unsigned int hash;
@property(readonly) int numberOfPendingPurchases;
@property(readonly) NSSet * purchasedItemIdentifiers;
@property(retain) SUQueueSessionManager * queueSessionManager;
@property(readonly) Class superclass;
@property(copy) NSString * userAgent;

- (id)_accountForPurchase:(id)arg1;
- (void)_addBatchForPurchases:(id)arg1 options:(id)arg2;
- (void)_addDownloadingIconForPurchases:(id)arg1;
- (void)_dialogDidFinish:(id)arg1;
- (id)_downloadManagerForDownloadKind:(id)arg1;
- (void)_enqueueContinuations:(id)arg1;
- (void)_enqueueExternalDownload:(id)arg1;
- (void)_enqueuePurchases:(id)arg1;
- (BOOL)_issuePurchaseRequestForPurchases:(id)arg1;
- (BOOL)_needsAuthenticationForPurchases:(id)arg1;
- (id)_newDictionaryForWebScriptValue:(id)arg1 inContext:(struct OpaqueJSContext { }*)arg2;
- (id)_newExternalDownloadWithDictionary:(id)arg1;
- (id)_newExternalDownloadWithDownloadDictionary:(id)arg1;
- (id)_newExternalDownloadWithItemDictionary:(id)arg1;
- (id)_newPurchaseBatchForPurchases:(id)arg1;
- (void)_performNextAction;
- (void)_removePlaceholdersForPurchase:(id)arg1;
- (void)_removePurchaseRequest:(id)arg1;
- (void)_schedulePurchaseCallback:(id)arg1 forPurchases:(id)arg2;
- (void)_showDialogsForErrors:(id)arg1;
- (void)_startContinuations:(id)arg1;
- (void)_startPurchases:(id)arg1;
- (void)addExternalDownloads:(id)arg1 inContext:(struct OpaqueJSContext { }*)arg2;
- (void)addExternalDownloads:(id)arg1 withOptions:(id)arg2 inContext:(struct OpaqueJSContext { }*)arg3;
- (void)addFuturePurchase:(id)arg1;
- (BOOL)addPurchaseBatch:(id)arg1;
- (void)addPurchasedItemIdentifier:(unsigned long long)arg1;
- (void)addPurchasedItemIdentifiers:(id)arg1;
- (void)beginUpdates;
- (void)cancelFuturePurchase:(id)arg1;
- (void)continuation:(id)arg1 failedWithError:(id)arg2;
- (void)continuationFinished:(id)arg1;
- (id)copyPurchaseForScriptObject:(id)arg1 inContext:(struct OpaqueJSContext { }*)arg2;
- (id)copyPurchaseForScriptObject:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)endUpdates;
- (void)enqueueScriptPurchases:(id)arg1;
- (id)futurePurchases;
- (id)init;
- (BOOL)itemIdentifierIsPurchased:(unsigned long long)arg1;
- (BOOL)itemIdentifierIsPurchasing:(unsigned long long)arg1;
- (id)newPurchaseBatchForItems:(id)arg1 offers:(id)arg2;
- (int)numberOfPendingPurchases;
- (void)purchaseRequest:(id)arg1 purchaseDidFail:(id)arg2 withError:(id)arg3;
- (void)purchaseRequest:(id)arg1 purchaseDidSucceed:(id)arg2;
- (void)purchaseRequest:(id)arg1 purchaseDidSucceedWithResponse:(id)arg2;
- (void)purchaseScriptObject:(id)arg1 withOptions:(id)arg2 inContext:(struct OpaqueJSContext { }*)arg3;
- (void)purchaseScriptObject:(id)arg1;
- (id)purchasedItemIdentifiers;
- (id)queueSessionManager;
- (void)removePurchasedItemIdentifier:(unsigned long long)arg1;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestDidFinish:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setQueueSessionManager:(id)arg1;
- (void)setUserAgent:(id)arg1;
- (id)userAgent;

@end
