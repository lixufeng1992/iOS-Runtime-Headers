/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

@class <NACIDSClientDelegate>, IDSService, NSObject<OS_dispatch_queue>, NSString;

@interface NACIDSClient : NSObject <IDSServiceDelegate> {
    <NACIDSClientDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_idsDispatchQueue;
    NSObject<OS_dispatch_queue> *_idsOutgoingQueue;
    IDSService *_idsService;
}

@property(copy,readonly) NSString * debugDescription;
@property <NACIDSClientDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleAudioRoutesDidChange:(id)arg1;
- (void)_handleEUVolumeLimitDidChange:(id)arg1;
- (void)_handleHapticIntensityDidChange:(id)arg1;
- (void)_handleMutedStateDidChange:(id)arg1;
- (void)_handleRouteObservationCancelled:(id)arg1;
- (void)_handleSystemMutedStatedDidChange:(id)arg1;
- (void)_handleVolumeControlAvailabilityDidChange:(id)arg1;
- (void)_handleVolumeObservationCancelled:(id)arg1;
- (void)_handleVolumeValueDidChange:(id)arg1;
- (void)_handleVolumeWarningDidChange:(id)arg1;
- (void)_sendMessage:(id)arg1 type:(int)arg2 timeout:(double)arg3 queueOne:(id)arg4 priority:(int)arg5;
- (void)beginObservingAudioRoutesForCategory:(id)arg1;
- (void)beginObservingVolume;
- (id)delegate;
- (void)endObservingAudioRoutesForCategory:(id)arg1;
- (void)endObservingVolume;
- (id)init;
- (void)pickAudioRouteWithIdentifier:(id)arg1 category:(id)arg2;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5;
- (void)setDelegate:(id)arg1;
- (void)setHapticIntensity:(float)arg1;
- (void)setMuted:(BOOL)arg1 category:(id)arg2;
- (void)setSystemMuted:(BOOL)arg1;
- (void)setVolumeValue:(float)arg1 category:(id)arg2;

@end
