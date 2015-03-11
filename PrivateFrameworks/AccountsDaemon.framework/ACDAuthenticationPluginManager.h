/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@class ACDQueueDictionary, NSLock, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface ACDAuthenticationPluginManager : NSObject {
    NSObject<OS_dispatch_queue> *_authenticationPluginQueue;
    NSMutableDictionary *_authenticationPluginsByType;
    ACDQueueDictionary *_renewalHandlerQueues;
    NSLock *_renewalHandlersLock;
    ACDQueueDictionary *_verificationHandlerQueues;
    NSLock *_verificationHandlersLock;
}

- (void).cxx_destruct;
- (id)_authCapableParentAccountForAccount:(id)arg1;
- (id)_authenticationTypeForAccount:(id)arg1;
- (id)_descriptionForRenewalResult:(int)arg1;
- (void)_handleRenewalCompletionResult:(int)arg1 forAccount:(id)arg2 renewalID:(id)arg3 accountStore:(id)arg4 error:(id)arg5;
- (void)_handleVerificationCompletionForAccount:(id)arg1 verifiedAccount:(id)arg2 error:(id)arg3 store:(id)arg4 shouldSave:(BOOL)arg5;
- (id)_pluginForAuthenticationType:(id)arg1;
- (void)credentialForAccount:(id)arg1 client:(id)arg2 store:(id)arg3 handler:(id)arg4;
- (id)init;
- (BOOL)isPushSupportedForAccount:(id)arg1;
- (void)renewCredentialsForAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3 completion:(id)arg4;
- (void)verifyCredentialsForAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3 handler:(id)arg4;

@end
