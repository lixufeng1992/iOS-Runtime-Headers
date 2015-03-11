/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@class <SFActivityAdvertiserDelegate>, <SFActivityAdvertiserProtocol>, NSString, SFInternalAdvertisement;

@interface SFActivityAdvertiser : NSObject <SFCompanionXPCManagerObserver, SFActivityAdvertiserClient> {
    <SFActivityAdvertiserProtocol> *_connectionProxy;
    SFInternalAdvertisement *_currentAdvertisement;
    <SFActivityAdvertiserDelegate> *_delegate;
}

@property(retain) <SFActivityAdvertiserProtocol> * connectionProxy;
@property(retain) SFInternalAdvertisement * currentAdvertisement;
@property(copy,readonly) NSString * debugDescription;
@property <SFActivityAdvertiserDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (id)sharedAdvertiser;

- (void)activityPayloadForAdvertisementPayload:(id)arg1 requestedByDeviceIdentifier:(id)arg2 withCompletionHandler:(id)arg3;
- (void)advertiseAdvertisementPayload:(id)arg1 options:(id)arg2;
- (id)connectionProxy;
- (id)currentAdvertisement;
- (void)dealloc;
- (id)delegate;
- (void)didSendPayloadForActivityIdentifier:(id)arg1 toDeviceIdentifier:(id)arg2 error:(id)arg3;
- (id)init;
- (void)setConnectionProxy:(id)arg1;
- (void)setCurrentAdvertisement:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setupXPCConnection;
- (void)xpcManagerConnectionInterrupted;

@end
