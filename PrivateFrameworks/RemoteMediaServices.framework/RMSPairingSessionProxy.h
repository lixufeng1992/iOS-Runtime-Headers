/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@class <RMSPairingSessionDelegate>, NSString, RMSIDSClient;

@interface RMSPairingSessionProxy : RMSSessionProxy <RMSPairingSession> {
    NSString *_advertisedAppName;
    NSString *_advertisedDeviceModel;
    NSString *_advertisedDeviceName;
    <RMSPairingSessionDelegate> *_delegate;
    RMSIDSClient *_idsClient;
    BOOL _pairing;
    NSString *_passcode;
}

@property(retain) NSString * advertisedAppName;
@property(retain) NSString * advertisedDeviceModel;
@property(retain) NSString * advertisedDeviceName;
@property(copy,readonly) NSString * debugDescription;
@property <RMSPairingSessionDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(retain) NSString * passcode;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleDidPairWithServiceNotification:(id)arg1;
- (void)_handlePairingDidFailNotification:(id)arg1;
- (void)_handleSessionDidEndNotification:(id)arg1;
- (void)_notifyDelegatePairingFailed;
- (id)advertisedAppName;
- (id)advertisedDeviceModel;
- (id)advertisedDeviceName;
- (void)beginPairing;
- (void)dealloc;
- (id)delegate;
- (void)endPairing;
- (void)heartbeatDidFail;
- (id)init;
- (id)passcode;
- (void)setAdvertisedAppName:(id)arg1;
- (void)setAdvertisedDeviceModel:(id)arg1;
- (void)setAdvertisedDeviceName:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPasscode:(id)arg1;

@end
