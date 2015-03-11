/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@class HMMessageDispatcher, IDSService, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface HMDIDSMessageTransport : NSObject <IDSServiceDelegate, HMMessageTransport, HMIDSMessageTransport> {
    IDSService *_idsService;
    HMMessageDispatcher *_messageDispatcher;
    NSMutableSet *_peerResidentDeviceAddresses;
    NSMutableSet *_peerTransientDeviceAddresses;
    NSMutableDictionary *_pendingResponseTimers;
    NSMutableDictionary *_pendingResponses;
    NSMutableDictionary *_pendingSentMessages;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(retain) IDSService * idsService;
@property HMMessageDispatcher * messageDispatcher;
@property(retain) NSMutableSet * peerResidentDeviceAddresses;
@property(retain) NSMutableSet * peerTransientDeviceAddresses;
@property(retain) NSMutableDictionary * pendingResponseTimers;
@property(retain) NSMutableDictionary * pendingResponses;
@property(retain) NSMutableDictionary * pendingSentMessages;
@property(readonly) Class superclass;
@property(retain) NSObject<OS_dispatch_queue> * workQueue;

+ (id)dictionaryForMessageName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4 transactionID:(id)arg5 msgType:(unsigned int)arg6;
+ (id)idsMessageTypeDescription:(unsigned int)arg1;
+ (void)messageElementsFromDictionary:(id)arg1 messageName:(id*)arg2 messageIdentifier:(id*)arg3 messagePayload:(id*)arg4 target:(id*)arg5 transactionID:(id*)arg6 isRequest:(BOOL*)arg7 isResponse:(BOOL*)arg8 isNotification:(BOOL*)arg9;

- (void).cxx_destruct;
- (void)_removePendingResponseTimerForTransaction:(id)arg1;
- (void)_startPendingResponseTimer:(id)arg1 identifier:(id)arg2;
- (void)configure:(id)arg1;
- (void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4 destination:(id)arg5 responseHandler:(id)arg6;
- (void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4 destination:(id)arg5;
- (void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4 responseHandler:(id)arg5;
- (void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4;
- (id)idsService;
- (id)initWithIDSService:(id)arg1;
- (id)messageDispatcher;
- (id)peerResidentDeviceAddresses;
- (id)peerTransientDeviceAddresses;
- (id)pendingResponseTimers;
- (id)pendingResponses;
- (id)pendingSentMessages;
- (id)residentDevices;
- (id)sendMessage:(id)arg1 destinations:(id)arg2 msgType:(unsigned int)arg3 error:(id*)arg4;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)setIdsService:(id)arg1;
- (void)setMessageDispatcher:(id)arg1;
- (void)setPeerResidentDeviceAddresses:(id)arg1;
- (void)setPeerTransientDeviceAddresses:(id)arg1;
- (void)setPendingResponseTimers:(id)arg1;
- (void)setPendingResponses:(id)arg1;
- (void)setPendingSentMessages:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)start;
- (id)transientDevices;
- (void)updatePeerDeviceAddresses:(id)arg1;
- (id)workQueue;

@end
