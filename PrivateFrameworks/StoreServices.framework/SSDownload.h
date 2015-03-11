/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSArray, NSMutableDictionary, NSNumber, NSString, SSDownloadMetadata, SSDownloadPolicy, SSDownloadStatus, SSXPCConnection;

@interface SSDownload : SSEntity <SSXPCCoding> {
    NSMutableDictionary *_localAssets;
    SSDownloadMetadata *_metadata;
    NSNumber *_prioritizeAboveDownload;
    SSDownloadStatus *_status;
}

@property(getter=_XPCConnection,readonly) SSXPCConnection * _XPCConnection;
@property(retain) NSArray * assets;
@property(getter=isCancelable,readonly) BOOL cancelable;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) id downloadIdentifier;
@property(copy) SSDownloadPolicy * downloadPolicy;
@property(readonly) long long downloadSizeLimit;
@property(getter=isExternal,readonly) BOOL external;
@property(readonly) unsigned int hash;
@property(copy) SSDownloadMetadata * metadata;
@property(readonly) long long persistentIdentifier;
@property(retain) SSDownloadStatus * status;
@property(readonly) Class superclass;

+ (long long)_existsMessage;
+ (long long)_getExternalValuesMessage;
+ (long long)_getValueMessage;
+ (long long)_setExternalValuesMessage;
+ (long long)_setValuesMessage;

- (id)_XPCConnection;
- (void)_addCachedExternalValues:(id)arg1;
- (void)_addCachedPropertyValues:(id)arg1;
- (void)_applyPhase:(id)arg1 toStatus:(id)arg2;
- (id)_errorWithData:(id)arg1;
- (id)_errorWithXPCReply:(id)arg1;
- (id)_initWithLocalPropertyValues:(id)arg1;
- (id)_newAssetWithURL:(id)arg1 assetType:(id)arg2;
- (void)_resetLocalIVars;
- (void)_resetStatus;
- (BOOL)addAsset:(id)arg1 forType:(id)arg2;
- (id)assets;
- (id)assetsForType:(id)arg1;
- (id)backgroundNetworkingJobGroupName;
- (long long)bytesDownloaded;
- (long long)bytesTotal;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)downloadIdentifier;
- (id)downloadPhaseIdentifier;
- (id)downloadPolicy;
- (long long)downloadSizeLimit;
- (double)estimatedSecondsRemaining;
- (id)failureError;
- (void)handleWithDownloadHandler:(id)arg1 completionBlock:(id)arg2;
- (id)initWithDownloadMetadata:(id)arg1;
- (id)initWithPersistentIdentifier:(long long)arg1;
- (BOOL)isBackgroundNetworkingUserInitiated;
- (BOOL)isCancelable;
- (BOOL)isEligibleForRestore:(id*)arg1;
- (BOOL)isExternal;
- (id)metadata;
- (id)networkConstraints;
- (void)pause;
- (double)percentComplete;
- (long long)persistentIdentifier;
- (void)prioritizeAboveDownload:(id)arg1 completionBlock:(id)arg2;
- (BOOL)removeAsset:(id)arg1;
- (void)resume;
- (void)setAssets:(id)arg1;
- (void)setBackgroundNetworkingJobGroupName:(id)arg1;
- (void)setBackgroundNetworkingUserInitiated:(BOOL)arg1;
- (void)setDownloadHandler:(id)arg1 completionBlock:(id)arg2;
- (void)setDownloadPolicy:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setNetworkConstraints:(id)arg1;
- (void)setStatus:(id)arg1;
- (void)setValuesWithStoreDownloadMetadata:(id)arg1;
- (id)status;

@end
