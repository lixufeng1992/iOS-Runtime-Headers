/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@class NSObject<OS_dispatch_queue>, NSString, PCSimpleTimer;

@interface PCPersistentTimer : NSObject <PCLoggingDelegate, CUTPowerMonitorDelegate> {
    BOOL _disableSystemWaking;
    double _fireTime;
    unsigned int _guidancePriority;
    double _minimumEarlyFireProportion;
    NSObject<OS_dispatch_queue> *_queue;
    SEL _selector;
    NSString *_serviceIdentifier;
    PCSimpleTimer *_simpleTimer;
    double _startTime;
    id _target;
    BOOL _triggerOnGMTChange;
    id _userInfo;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property BOOL disableSystemWaking;
@property(readonly) double fireTime;
@property(readonly) unsigned int hash;
@property(readonly) NSString * loggingIdentifier;
@property double minimumEarlyFireProportion;
@property(readonly) Class superclass;

+ (id)_backgroundUpdateQueue;
+ (double)_currentGuidanceTime;
+ (void)_updateTime:(double)arg1 forGuidancePriority:(unsigned int)arg2;
+ (double)currentMachTimeInterval;
+ (id)lastSystemWakeDate;

- (double)_earlyFireTime;
- (void)_fireTimerFired;
- (id)_initWithAbsoluteTime:(double)arg1 serviceIdentifier:(id)arg2 guidancePriority:(unsigned int)arg3 target:(id)arg4 selector:(SEL)arg5 userInfo:(id)arg6 triggerOnGMTChange:(BOOL)arg7;
- (double)_nextForcedAlignmentAbsoluteTime;
- (void)_updateTimers;
- (void)cutPowerMonitorBatteryConnectedStateDidChange:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (BOOL)disableSystemWaking;
- (double)fireTime;
- (BOOL)firingIsImminent;
- (id)initWithFireDate:(id)arg1 serviceIdentifier:(id)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5;
- (id)initWithTimeInterval:(double)arg1 serviceIdentifier:(id)arg2 guidancePriority:(unsigned int)arg3 target:(id)arg4 selector:(SEL)arg5 userInfo:(id)arg6;
- (id)initWithTimeInterval:(double)arg1 serviceIdentifier:(id)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5;
- (void)interfaceManagerInternetReachabilityChanged:(id)arg1;
- (void)interfaceManagerWWANInterfaceChangedPowerState:(id)arg1;
- (void)interfaceManagerWWANInterfaceStatusChanged:(id)arg1;
- (void)invalidate;
- (BOOL)isValid;
- (id)loggingIdentifier;
- (double)minimumEarlyFireProportion;
- (void)scheduleInQueue:(id)arg1;
- (void)scheduleInRunLoop:(id)arg1 inMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1;
- (void)setDisableSystemWaking:(BOOL)arg1;
- (void)setMinimumEarlyFireProportion:(double)arg1;
- (id)userInfo;

@end
