/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@class ACAccountStore, NSDictionary, NSMutableDictionary, NSMutableSet;

@interface AXHASettings : NSObject {
    ACAccountStore *_accountStore;
    NSMutableSet *_registeredNotifications;
    NSMutableSet *_synchronizePreferences;
    NSMutableDictionary *_updateBlocks;
}

@property BOOL allowHearingAidControlOnLockScreen;
@property BOOL independentHearingAidSettings;
@property(retain) NSDictionary * pairedHearingAids;
@property(retain) NSMutableSet * registeredNotifications;
@property BOOL shouldStreamToLeftAid;
@property BOOL shouldStreamToRightAid;
@property(retain) NSMutableSet * synchronizePreferences;
@property(retain) NSMutableDictionary * updateBlocks;

+ (void)initialize;
+ (id)sharedInstance;

- (void)_handlePreferenceChanged:(id)arg1;
- (id)_notificationForPreferenceKey:(id)arg1;
- (id)_preferenceKeyForSelector:(SEL)arg1;
- (void)_registerForNotification:(id)arg1;
- (void)_setValue:(id)arg1 forPreferenceKey:(id)arg2;
- (void)_synchronizeIfNecessary:(id)arg1;
- (id)_valueForPreferenceKey:(id)arg1;
- (BOOL)allowHearingAidControlOnLockScreen;
- (void)dealloc;
- (void)iCloudAccountDidChange:(id)arg1;
- (void)icloudHearingSettingsDidChange:(id)arg1;
- (BOOL)independentHearingAidSettings;
- (id)init;
- (BOOL)isPairedWithFakeHearingAids;
- (id)pairedHearingAids;
- (void)pushLocalHearingAidsToiCloud;
- (void)registerUpdateBlock:(id)arg1 forRetrieveSelector:(SEL)arg2 withListener:(id)arg3;
- (id)registeredNotifications;
- (void)setAllowHearingAidControlOnLockScreen:(BOOL)arg1;
- (void)setIndependentHearingAidSettings:(BOOL)arg1;
- (void)setLocalHearingAidsFromiCloud:(id)arg1;
- (void)setPairedHearingAids:(id)arg1;
- (void)setRegisteredNotifications:(id)arg1;
- (void)setShouldStreamToLeftAid:(BOOL)arg1;
- (void)setShouldStreamToRightAid:(BOOL)arg1;
- (void)setSynchronizePreferences:(id)arg1;
- (void)setUpdateBlocks:(id)arg1;
- (BOOL)shouldStreamToLeftAid;
- (BOOL)shouldStreamToRightAid;
- (BOOL)shouldUseiCloud;
- (id)synchronizePreferences;
- (id)updateBlocks;

@end
