/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class <ISStoreURLOperationDelegate>, NSNumber;

@interface ISStoreURLOperation : ISURLOperation {
    NSNumber *_authenticatedDSID;
    BOOL _canSendGUIDParameter;
    BOOL _ignorePreexistingSecureToken;
    BOOL _needsAuthentication;
    BOOL _needsURLBag;
    BOOL _performsMachineDataActions;
    BOOL _shouldSendXTokenHeader;
    BOOL _urlKnownToBeTrusted;
    BOOL _useUserSpecificURLBag;
}

@property(retain) NSNumber * authenticatedDSID;
@property BOOL canSendGUIDParameter;
@property <ISStoreURLOperationDelegate> * delegate;
@property BOOL ignorePreexistingSecureToken;
@property BOOL needsAuthentication;
@property BOOL needsURLBag;
@property BOOL performsMachineDataActions;
@property BOOL shouldSendXTokenHeader;
@property BOOL urlKnownToBeTrusted;
@property BOOL useUserSpecificURLBag;

+ (void)_addITunesStoreHeadersToRequest:(id)arg1 withURLBag:(id)arg2 account:(id)arg3;
+ (void)_addITunesStoreHeadersToRequest:(id)arg1 withURLBag:(id)arg2 accountIdentifier:(id)arg3;
+ (id)_restrictionsHeaderValue;
+ (void)addITunesStoreHeadersToRequest:(id)arg1 withAccountIdentifier:(id)arg2;
+ (void)handleITunesStoreResponseHeaders:(id)arg1 withAccountIdentifier:(id)arg2;
+ (id)itemPingOperationWithIdentifier:(unsigned long long)arg1 urlBagKey:(id)arg2;
+ (id)pingOperationWithUrl:(id)arg1;
+ (id)propertyListOperationWithURLBagKey:(id)arg1;

- (id)_account;
- (void)_addStandardQueryParametersForURL:(id)arg1;
- (BOOL)_authenticateWithContext:(id)arg1 error:(id*)arg2;
- (BOOL)_canSendTokenToURL:(id)arg1;
- (id)_copyAuthenticationContext;
- (id)_copyAuthenticationContextForAttemptNumber:(int)arg1;
- (id)_copyURLBagContext;
- (BOOL)_isErrorTokenError:(id)arg1;
- (id)_resolvedURLInBagContext:(id)arg1 URLBag:(id*)arg2;
- (void)_runURLOperation;
- (void)_setStoreFrontIdentifier:(id)arg1 isTransient:(BOOL)arg2;
- (id)_urlBagForContext:(id)arg1;
- (id)authenticatedAccountDSID;
- (id)authenticatedDSID;
- (BOOL)canSendGUIDParameter;
- (void)dealloc;
- (BOOL)handleRedirectFromDataProvider:(id)arg1 error:(id*)arg2;
- (void)handleResponse:(id)arg1;
- (BOOL)ignorePreexistingSecureToken;
- (id)init;
- (BOOL)needsAuthentication;
- (BOOL)needsURLBag;
- (id)newRequestWithURL:(id)arg1;
- (BOOL)performsMachineDataActions;
- (void)run;
- (void)setAuthenticatedDSID:(id)arg1;
- (void)setCanSendGUIDParameter:(BOOL)arg1;
- (void)setIgnorePreexistingSecureToken:(BOOL)arg1;
- (void)setNeedsAuthentication:(BOOL)arg1;
- (void)setNeedsURLBag:(BOOL)arg1;
- (void)setPerformsMachineDataActions:(BOOL)arg1;
- (void)setShouldSendXTokenHeader:(BOOL)arg1;
- (void)setUrlKnownToBeTrusted:(BOOL)arg1;
- (void)setUseUserSpecificURLBag:(BOOL)arg1;
- (BOOL)shouldFollowRedirectWithRequest:(id)arg1 returningError:(id*)arg2;
- (BOOL)shouldSendXTokenHeader;
- (BOOL)urlKnownToBeTrusted;
- (BOOL)useUserSpecificURLBag;

@end
