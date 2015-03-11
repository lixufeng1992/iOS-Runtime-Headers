/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@class <HDHealthDaemon>, NSDate, NSDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface HDUserCharacteristicsManager : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, HDDataObserver, HDDiagnosticObject> {
    <HDHealthDaemon> *_healthDaemon;
    NSDictionary *_lastUserProfile;
    BOOL _needsUpdateAfterUnlock;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _shouldUpdateQuantityCharacteristics;
    BOOL _shouldUpdateUserProfile;
    NSDate *_userProfileLastUpdated;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property <HDHealthDaemon> * healthDaemon;
@property(copy) NSDictionary * lastUserProfile;
@property BOOL needsUpdateAfterUnlock;
@property(retain) NSObject<OS_dispatch_queue> * queue;
@property(readonly) BOOL shouldUpdateQuantityCharacteristics;
@property(readonly) BOOL shouldUpdateUserProfile;
@property(readonly) Class superclass;
@property(retain) NSDate * userProfileLastUpdated;

- (void).cxx_destruct;
- (id)_mostRecentSampleOfType:(id)arg1 error:(id*)arg2;
- (void)_queue_updateQuantityCharacteristics;
- (void)_queue_updateQuantityCharacteristicsAndUserProfileIfNeeded;
- (void)_queue_updateUserProfile;
- (BOOL)_setUserCharacteristic:(id)arg1 forType:(id)arg2 shouldInsertSample:(BOOL)arg3 error:(id*)arg4;
- (void)_updateQuantityCharacteristicsAndUserProfile;
- (id)_userCharacteristicForType:(id)arg1 entity:(id*)arg2 error:(id*)arg3;
- (void)_userCharacteristicsDidChangeShouldUpdateUserProfile:(BOOL)arg1 shouldSync:(BOOL)arg2;
- (void)daemonReady:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2;
- (void)dealloc;
- (id)diagnosticDescription;
- (id)healthDaemon;
- (id)initWithHealthDaemon:(id)arg1;
- (id)lastUserProfile;
- (BOOL)needsUpdateAfterUnlock;
- (id)queue;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesOfTypeWereRemoved:(id)arg1;
- (void)setHealthDaemon:(id)arg1;
- (void)setLastUserProfile:(id)arg1;
- (void)setNeedsUpdateAfterUnlock:(BOOL)arg1;
- (void)setQueue:(id)arg1;
- (BOOL)setUserCharacteristic:(id)arg1 forType:(id)arg2 error:(id*)arg3;
- (void)setUserProfileLastUpdated:(id)arg1;
- (BOOL)shouldUpdateQuantityCharacteristics;
- (BOOL)shouldUpdateUserProfile;
- (id)userCharacteristicForType:(id)arg1 error:(id*)arg2;
- (id)userProfileLastUpdated;

@end
