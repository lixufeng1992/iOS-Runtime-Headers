/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@class <RMSServiceProviderDelegate>, NSMutableDictionary, NSNetServiceBrowser, NSString;

@interface RMSBonjourServiceProvider : NSObject <RMSServiceProvider, NSNetServiceBrowserDelegate, NSNetServiceDelegate> {
    NSMutableDictionary *_cache;
    <RMSServiceProviderDelegate> *_delegate;
    NSNetServiceBrowser *_netServiceBrowser;
    NSMutableDictionary *_services;
}

@property(copy,readonly) NSString * debugDescription;
@property <RMSServiceProviderDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) NSString * searchDomain;
@property(readonly) NSString * searchScope;
@property(readonly) NSString * searchType;
@property(readonly) int serviceDiscoverySource;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (id)_identifierForNetService:(id)arg1;
- (id)_searchString;
- (void)_updateService:(id)arg1 withNetService:(id)arg2;
- (id)_valueForTXTRecordKey:(id)arg1 inTXTDictionary:(id)arg2;
- (void)beginDiscovery;
- (void)dealloc;
- (id)delegate;
- (void)endDiscovery;
- (id)init;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceDidResolveAddress:(id)arg1;
- (id)searchDomain;
- (id)searchScope;
- (id)searchType;
- (int)serviceDiscoverySource;
- (int)serviceLegacyFlagsFromTXTDictionary:(id)arg1;
- (int)serviceTypeFromTXTDictionary:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
