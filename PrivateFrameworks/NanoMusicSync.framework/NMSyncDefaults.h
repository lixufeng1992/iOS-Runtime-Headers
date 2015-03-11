/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

@class NSDate, NSNumber;

@interface NMSyncDefaults : NSObject {
    BOOL _assetSyncEnabled;
    NSNumber *_assetSyncLimit;
    unsigned int _assetSyncLimitType;
    NSNumber *_assetSyncPlaylistPersistentID;
    NSNumber *_lastFullySentAssetSyncPlaylistPersistentID;
    NSNumber *_lastFullySentAssetSyncPlaylistVersion;
    NSDate *_modificationDate;
    BOOL _needsSync;
    int _notifyToken;
    NSNumber *_numberOfSyncedAssetSyncPlaylistSongs;
}

@property(getter=isAssetSyncEnabled) BOOL assetSyncEnabled;
@property(copy) NSNumber * assetSyncLimit;
@property unsigned int assetSyncLimitType;
@property(copy) NSNumber * assetSyncPlaylistPersistentID;
@property(copy) NSNumber * lastFullySentAssetSyncPlaylistPersistentID;
@property(copy) NSNumber * lastFullySentAssetSyncPlaylistVersion;
@property(readonly) NSDate * modificationDate;
@property(copy) NSNumber * numberOfSyncedAssetSyncPlaylistSongs;

+ (id)sharedDefaults;

- (void).cxx_destruct;
- (void)_handleRemoteChangeIgnoringSenderPID:(BOOL)arg1;
- (void)_perDeviceSettingsDidResetNotification:(id)arg1;
- (void)_readDefaults;
- (void)_setNeedsSynchronize;
- (void)_writeChanges;
- (id)assetSyncLimit;
- (unsigned int)assetSyncLimitType;
- (id)assetSyncPlaylistPersistentID;
- (void)dealloc;
- (id)description;
- (id)init;
- (BOOL)isAssetSyncEnabled;
- (id)lastFullySentAssetSyncPlaylistPersistentID;
- (id)lastFullySentAssetSyncPlaylistVersion;
- (id)modificationDate;
- (id)numberOfSyncedAssetSyncPlaylistSongs;
- (void)setAssetSyncEnabled:(BOOL)arg1;
- (void)setAssetSyncLimit:(id)arg1;
- (void)setAssetSyncLimitType:(unsigned int)arg1;
- (void)setAssetSyncPlaylistPersistentID:(id)arg1;
- (void)setLastFullySentAssetSyncPlaylistPersistentID:(id)arg1;
- (void)setLastFullySentAssetSyncPlaylistVersion:(id)arg1;
- (void)setNumberOfSyncedAssetSyncPlaylistSongs:(id)arg1;

@end
