/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@class NSMapTable, NSRecursiveLock, NSString, NSTimer, PCSimpleTimer;

@interface PCPersistentInterfaceManager : NSObject <PCInterfaceMonitorDelegate> {
    long _WWANContextIdentifier;
    NSString *_WWANInterfaceName;
    struct __CFSet { } *_WiFiAutoAssociationDelegates;
    PCSimpleTimer *_WiFiAutoAssociationDisableTimer;
    BOOL _ctIsWWANInHomeCountry;
    void *_ctServerConnection;
    NSMapTable *_delegatesAndQueues;
    BOOL _hasWWANStatusIndicator;
    NSTimer *_inCallWWANOverrideTimer;
    void *_interfaceAssertion;
    BOOL _isInCall;
    BOOL _isPowerStateDetectionSupported;
    BOOL _isWWANInterfaceActivationPermitted;
    BOOL _isWWANInterfaceDataActive;
    BOOL _isWWANInterfaceInProlongedHighPowerState;
    BOOL _isWWANInterfaceUp;
    BOOL _isWakeOnWiFiEnabled;
    BOOL _isWakeOnWiFiSupported;
    double _lastActivationTime;
    NSRecursiveLock *_lock;
    BOOL _shouldOverrideOnCallBehavior;
    struct __CFSet { } *_wakeOnWiFiDelegates;
    PCSimpleTimer *_wakeOnWiFiDisableTimer;
    int _wwanRSSI;
}

@property(readonly) NSString * WWANInterfaceName;
@property(readonly) BOOL areAllNetworkInterfacesDisabled;
@property(retain,readonly) NSString * currentLinkQualityString;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) BOOL doesWWANInterfaceExist;
@property(readonly) unsigned int hash;
@property(readonly) BOOL isInCall;
@property(readonly) BOOL isInternetReachable;
@property(readonly) BOOL isInternetReachableViaWiFi;
@property(readonly) BOOL isPowerStateDetectionSupported;
@property(readonly) BOOL isWWANBetterThanWiFi;
@property(readonly) BOOL isWWANInHomeCountry;
@property(readonly) BOOL isWWANInterfaceActivationPermitted;
@property(readonly) BOOL isWWANInterfaceInProlongedHighPowerState;
@property(readonly) BOOL isWWANInterfaceUp;
@property(readonly) BOOL isWakeOnWiFiSupported;
@property(readonly) Class superclass;

+ (id)sharedInstance;

- (id)WWANInterfaceName;
- (void)_adjustWakeOnWiFi;
- (void)_adjustWakeOnWiFiLocked;
- (void)_adjustWiFiAutoAssociation;
- (void)_adjustWiFiAutoAssociationLocked;
- (BOOL)_allowBindingToWWAN;
- (void)_clearInCallWWANOverrideTimerLocked;
- (void)_createCTConnection;
- (void)_ctConnectionAttempt;
- (void)_inCallWWANOverrideTimerFired;
- (BOOL)_isInternetReachableLocked;
- (BOOL)_isWWANInHomeCountryLocked;
- (BOOL)_isWiFiUsable;
- (void)_mainThreadCTConnectionAttempt;
- (void)_scheduleCalloutsForSelector:(SEL)arg1;
- (void)_serverCallback:(id)arg1 info:(id)arg2;
- (void)_serverCallbackLocked:(id)arg1 info:(id)arg2;
- (void)_updateCTIsWWANInHomeCountry:(BOOL)arg1 isWWANInterfaceDataActive:(BOOL)arg2;
- (void)_updateWWANInterfaceAssertions;
- (void)_updateWWANInterfaceAssertionsLocked;
- (void)_updateWWANInterfaceUpState;
- (void)_updateWWANInterfaceUpStateLocked;
- (BOOL)_wantsWWANInterfaceAssertion;
- (BOOL)_wantsWakeOnWiFiEnabled;
- (BOOL)_wifiIsPoorLinkQuality;
- (BOOL)_wwanIsPoorLinkQuality;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (BOOL)areAllNetworkInterfacesDisabled;
- (void)bindCFStream:(struct __CFReadStream { }*)arg1 toWWANInterface:(BOOL)arg2;
- (void)bindCFStreamToWWANInterface:(struct __CFReadStream { }*)arg1;
- (id)currentLinkQualityString;
- (void)cutWiFiManagerDeviceAttached:(id)arg1;
- (void)dealloc;
- (BOOL)doesWWANInterfaceExist;
- (void)enableWakeOnWiFi:(BOOL)arg1 forDelegate:(id)arg2;
- (void)enableWiFiAutoAssociation:(BOOL)arg1 forDelegate:(id)arg2;
- (void)handleMachMessage:(void*)arg1;
- (id)init;
- (void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2;
- (void)interfaceReachabilityChanged:(id)arg1;
- (BOOL)isInCall;
- (BOOL)isInternetReachable;
- (BOOL)isInternetReachableViaWiFi;
- (BOOL)isPowerStateDetectionSupported;
- (BOOL)isWWANBetterThanWiFi;
- (BOOL)isWWANInHomeCountry;
- (BOOL)isWWANInterfaceActivationPermitted;
- (BOOL)isWWANInterfaceInProlongedHighPowerState;
- (BOOL)isWWANInterfaceUp;
- (BOOL)isWakeOnWiFiSupported;
- (void)removeDelegate:(id)arg1;
- (id)urlConnectionBoundToWWANInterface:(BOOL)arg1 withRequest:(id)arg2 delegate:(id)arg3 usesCache:(BOOL)arg4 maxContentLength:(long long)arg5 startImmediately:(BOOL)arg6 connectionProperties:(id)arg7;
- (id)urlConnectionBoundToWWANInterfaceWithRequest:(id)arg1 delegate:(id)arg2 usesCache:(BOOL)arg3 maxContentLength:(long long)arg4 startImmediately:(BOOL)arg5 connectionProperties:(id)arg6;

@end
