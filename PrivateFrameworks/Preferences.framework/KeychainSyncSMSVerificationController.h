/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSString, PSKeychainSyncManager, UIAlertView, UIButton;

@interface KeychainSyncSMSVerificationController : KeychainSyncTextEntryController <UIAlertViewDelegate> {
    NSString *_countryCode;
    NSString *_dialingPrefix;
    UIButton *_footerButton;
    PSKeychainSyncManager *_keychainSyncManager;
    NSString *_phoneNumber;
    UIAlertView *_supportVerificationAlert;
    unsigned int _verificationCodeLength;
}

@property(retain) NSString * countryCode;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) NSString * dialingPrefix;
@property(readonly) unsigned int hash;
@property PSKeychainSyncManager * keychainSyncManager;
@property(retain) NSString * phoneNumber;
@property(readonly) Class superclass;
@property unsigned int verificationCodeLength;

- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (id)countryCode;
- (void)dealloc;
- (id)dialingPrefix;
- (void)dismissAlerts;
- (id)init;
- (id)keychainSyncManager;
- (void)loadView;
- (unsigned int)numberOfPasscodeFields;
- (id)phoneNumber;
- (void)setCountryCode:(id)arg1;
- (void)setDialingPrefix:(id)arg1;
- (void)setKeychainSyncManager:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setVerificationCodeLength:(unsigned int)arg1;
- (void)showSupportVerification;
- (id)specifiers;
- (unsigned int)verificationCodeLength;
- (void)viewDidLayoutSubviews;

@end
