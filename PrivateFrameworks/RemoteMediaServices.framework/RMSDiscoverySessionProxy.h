/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@class <RMSDiscoverySessionDelegate>, NSArray, NSString, RMSIDSClient;

@interface RMSDiscoverySessionProxy : RMSSessionProxy <RMSDiscoverySession> {
    NSArray *_availableServices;
    <RMSDiscoverySessionDelegate> *_delegate;
    BOOL _discovering;
    int _discoveryTypes;
    RMSIDSClient *_idsClient;
    BOOL _networkAvailable;
    int _retryRate;
    BOOL _wifiAvailable;
}

@property(readonly) NSArray * availableServices;
@property(copy,readonly) NSString * debugDescription;
@property <RMSDiscoverySessionDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property int discoveryTypes;
@property(readonly) unsigned int hash;
@property(getter=isNetworkAvailable,readonly) BOOL networkAvailable;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_availableServicesDidUpdateNotification:(id)arg1;
- (void)_companionAvailabilityDidChange:(id)arg1;
- (void)_handleSessionDidEndNotification:(id)arg1;
- (void)_updateNetworkAvailability;
- (void)_wifiAvailabilityDidChange:(id)arg1;
- (id)availableServices;
- (void)beginDiscovery;
- (void)dealloc;
- (id)delegate;
- (int)discoveryTypes;
- (void)endDiscovery;
- (void)heartbeatDidFail;
- (id)init;
- (BOOL)isNetworkAvailable;
- (void)setDelegate:(id)arg1;
- (void)setDiscoveryTypes:(int)arg1;

@end
