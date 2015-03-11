/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

@class ATDeviceService, ATIDSService, NSObject<OS_dispatch_queue>, NSString, PSYProgressObserver;

@interface ATDevicePairedSyncManager : NSObject <PSYProgressObserverDelegate, ATMessageLinkObserver, ATIDSServiceListener, ATSessionObserver> {
    ATDeviceService *_deviceService;
    ATIDSService *_idsService;
    BOOL _initialSyncPhaseCompleted;
    NSObject<OS_dispatch_queue> *_queue;
    PSYProgressObserver *_syncProgressObserver;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property BOOL initialSyncPhaseCompleted;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)handleDevicePairedNotification;
- (void)handleDeviceUnPairedNotification;
- (BOOL)hasRestriction;
- (void)idsServiceDevicesDidChange:(id)arg1;
- (id)initWithIDSService:(id)arg1;
- (BOOL)initialSyncPhaseCompleted;
- (void)progressObserver:(id)arg1 didFinishActivity:(id)arg2 withError:(id)arg3;
- (void)progressObserverDidChangeProgress:(id)arg1;
- (void)progressObserverDidChangeState:(id)arg1;
- (void)setInitialSyncPhaseCompleted:(BOOL)arg1;
- (void)start;

@end
