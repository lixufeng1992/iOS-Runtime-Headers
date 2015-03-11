/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class ACAccount, NSDictionary, NSMutableDictionary, NSString;

@interface MFAccount : NSObject {
    ACAccount *_persistentAccount;
    int _persistentAccountLock;
    NSString *_sourceApplicationBundleIdentifier;
    NSMutableDictionary *_unsavedAccountProperties;
}

@property(readonly) ACAccount * accountForRenewingCredentials;
@property(retain) NSString * displayName;
@property(retain) NSString * hostname;
@property(readonly) NSString * identifier;
@property(readonly) NSString * managedTag;
@property(readonly) ACAccount * parentAccount;
@property(readonly) NSString * parentAccountIdentifier;
@property(readonly) ACAccount * persistentAccount;
@property(readonly) NSDictionary * properties;
@property(copy) NSString * sourceApplicationBundleIdentifier;
@property(readonly) NSString * syncStoreIdentifier;
@property(readonly) NSString * type;
@property(readonly) NSString * uniqueId;
@property(retain) NSString * username;

+ (id)_accountClass;
+ (id)_basicPropertyForKey:(id)arg1 persistentAccount:(id)arg2;
+ (id)_newPersistentAccount;
+ (BOOL)_setBasicProperty:(id)arg1 forKey:(id)arg2 persistentAccount:(id)arg3;
+ (id)accountPropertiesValueForKey:(id)arg1 value:(id)arg2;
+ (id)accountTypeIdentifier;
+ (id)accountTypeString;
+ (id)accountWithPersistentAccount:(id)arg1;
+ (id)accountWithProperties:(id)arg1;
+ (id)authSchemesForAccountClass;
+ (unsigned int)defaultPortNumber;
+ (unsigned int)defaultSecurePortNumber;
+ (id)displayedAccountTypeString;
+ (id)displayedShortAccountTypeString;
+ (id)existingAccountForUniqueID:(id)arg1;
+ (id)hostname;
+ (BOOL)isCommonPortNumber:(unsigned int)arg1;
+ (BOOL)isPredefinedAccountType;
+ (BOOL)isSSLEditable;
+ (void*)legacyKeychainProtocol;
+ (id)myFullName;
+ (id)newAccountWithDictionary:(id)arg1;
+ (id)predefinedValueForKey:(id)arg1;
+ (id)propertiesWhichRequireValidation;
+ (id)saslProfileName;
+ (void)setShouldHealAccounts:(BOOL)arg1;
+ (BOOL)shouldHealAccounts;
+ (id)supportedDataclasses;
+ (BOOL)usesSSL;

- (BOOL)_boolForAccountInfoKey:(id)arg1 defaultValue:(BOOL)arg2;
- (BOOL)_connectAndAuthenticate:(id)arg1;
- (id)_credential;
- (id)_credentialCreateIfNecessary:(BOOL)arg1 error:(id*)arg2;
- (id)_credentialCreateIfNecessary:(BOOL)arg1;
- (id)_newConnection;
- (id)_objectForAccountInfoKey:(id)arg1;
- (id)_password;
- (id)_passwordWithError:(id*)arg1;
- (void)_queueAccountInfoDidChange;
- (void)_setAccountProperties:(id)arg1;
- (BOOL)_shouldTryDirectSSLConnectionOnPort:(unsigned int)arg1;
- (id)accountClass;
- (id)accountForRenewingCredentials;
- (void)accountInfoDidChange;
- (id)accountPropertyForKey:(id)arg1;
- (BOOL)allowsTrustPrompt;
- (id)alternateConnectionSettings;
- (void)applySettingsAsDefault:(id)arg1;
- (id)authenticatedConnection;
- (BOOL)canGoOffline;
- (id)certUIService;
- (id)clientCertificates;
- (Class)connectionClass;
- (struct __CFString { }*)connectionServiceType;
- (id)copyDiagnosticInformation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)credentialAccessibility;
- (id)credentialItemForKey:(id)arg1 error:(id*)arg2;
- (id)credentialItemForKey:(id)arg1;
- (id)customDescriptionForError:(id)arg1 authScheme:(id)arg2 defaultDescription:(id)arg3;
- (id)customTitleForAuthenticationError:(id)arg1 authScheme:(id)arg2 defaultTitle:(id)arg3;
- (id)customTitleForError:(id)arg1 authScheme:(id)arg2 defaultTitle:(id)arg3;
- (void)dealloc;
- (id)defaultConnectionSettings;
- (unsigned int)defaultPortNumber;
- (unsigned int)defaultSecurePortNumber;
- (id)displayName;
- (id)domain;
- (BOOL)enableAccount;
- (id)enabledDataclasses;
- (BOOL)fetchTokensIfNecessary:(id*)arg1;
- (id)hostname;
- (id)identifier;
- (id)inaccessiblePasswordErrorWithTitle:(id)arg1;
- (id)init;
- (id)initWithPersistentAccount:(id)arg1;
- (id)initWithProperties:(id)arg1;
- (id)insecureConnectionSettings;
- (BOOL)isActive;
- (BOOL)isEnabledForDataclass:(id)arg1;
- (id)loginDisabledErrorWithTitle:(id)arg1;
- (id)managedTag;
- (id)missingPasswordErrorWithTitle:(id)arg1;
- (id)nameForMailboxUid:(id)arg1;
- (id)parentAccount;
- (id)parentAccountIdentifier;
- (id)password;
- (id)persistentAccount;
- (void)persistentAccountDidChange:(id)arg1 previousAccount:(id)arg2;
- (unsigned int)portNumber;
- (id)preferredAuthScheme;
- (BOOL)promptUserForPasswordWithTitle:(id)arg1 message:(id)arg2 completionHandler:(id)arg3;
- (BOOL)promptUserForWebLoginWithURL:(id)arg1 shouldConfirm:(BOOL)arg2 completionHandler:(id)arg3;
- (id)properties;
- (void)releaseAllConnections;
- (void)releaseAllForcedConnections;
- (void)removeAccountPropertyForKey:(id)arg1;
- (void)removePersistentAccount;
- (void)removeValueInAccountPropertiesForKey:(id)arg1;
- (void)reportAuthenticationError:(id)arg1 authScheme:(id)arg2;
- (BOOL)requiresAuthentication;
- (void)savePersistentAccount;
- (id)secureConnectionSettings;
- (id)secureServiceName;
- (id)serviceName;
- (void)setAccountProperty:(id)arg1 forKey:(id)arg2;
- (void)setActive:(BOOL)arg1;
- (void)setClientCertificates:(id)arg1;
- (BOOL)setCredentialItem:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (void)setCredentialItem:(id)arg1 forKey:(id)arg2;
- (void)setDisplayName:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setHostname:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setPersistentAccount:(id)arg1;
- (void)setPortNumber:(unsigned int)arg1;
- (void)setPreferredAuthScheme:(id)arg1;
- (void)setSourceApplicationBundleIdentifier:(id)arg1;
- (void)setTryDirectSSL:(BOOL)arg1;
- (void)setUsername:(id)arg1;
- (void)setUsesSSL:(BOOL)arg1;
- (void)setValueInAccountProperties:(id)arg1 forKey:(id)arg2;
- (BOOL)shouldDisplayHostnameInErrorMessages;
- (BOOL)shouldEnableAfterError:(id)arg1;
- (BOOL)shouldFetchACEDBInfoForError:(id)arg1;
- (id)sourceApplicationBundleIdentifier;
- (id)syncStoreIdentifier;
- (id)type;
- (id)uniqueId;
- (id)username;
- (BOOL)usesSSL;
- (void)validateConnections;
- (id)valueInAccountPropertiesForKey:(id)arg1;

@end
