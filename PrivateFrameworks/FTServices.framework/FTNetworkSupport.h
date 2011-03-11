/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class APSConnection, NSTimer;

@interface FTNetworkSupport : NSObject  {
    Class _APSConnectionClass;
    APSConnection *_apsConnection;
    NSTimer *_reliabilityAttemptTimer;
    BOOL _enableCriticalReliability;
    BOOL _criticalReliabilityEnabledState;
}

@property(readonly) BOOL allowAnyNetwork;
@property(readonly) BOOL validNetworkEnabled;
@property(readonly) BOOL validNetworkActive;
@property(readonly) BOOL validNetworkReachable;
@property(readonly) BOOL willSearchForNetwork;
@property BOOL enableCriticalReliability;

+ (id)sharedInstance;

- (BOOL)validNetworkEnabled;
- (BOOL)willSearchForNetwork;
- (BOOL)validNetworkReachable;
- (BOOL)validNetworkActive;
- (oneway void)release;
- (unsigned int)retainCount;
- (id)autorelease;
- (void)_createAPSConnectionIfNeeded;
- (BOOL)enableCriticalReliability;
- (void)_clearReliabilityTimeoutInterval;
- (void)_setReliabilityTimeoutInterval;
- (void)_reallySetCriticalReliability:(BOOL)arg1;
- (void)_tryToEnableReliability;
- (void)setEnableCriticalReliability:(BOOL)arg1;
- (BOOL)allowAnyNetwork;

@end