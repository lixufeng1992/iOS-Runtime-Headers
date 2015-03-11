/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@class <BLTSectionInfoListProviderDelegate>, NSDate, NSString;

@interface BLTSectionInfoListBridgeProvider : NSObject <LSApplicationWorkspaceObserverProtocol> {
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    <BLTSectionInfoListProviderDelegate> *_delegate;
    NSDate *_lastKnownBridgeSettingsChangeDate;
    } _lock;
}

@property(copy,readonly) NSString * debugDescription;
@property <BLTSectionInfoListProviderDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (id)_loadOverridesChangedSince:(id)arg1;
- (void)_reloadUpdatedOverrides;
- (void)_reloadUpdatedOverridesWithCompletion:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)reloadWithCompletion:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
