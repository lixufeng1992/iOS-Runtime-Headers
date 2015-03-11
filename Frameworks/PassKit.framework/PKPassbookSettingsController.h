/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class <PKPassLibraryDataProvider>, <PKPassbookSettingsDataSource>, <PKPassbookSettingsDelegate>, <PKPassbookSettingsOptionsDelegate>, NSArray, NSString, PKPaymentSetupAboutViewController, PSSpecifier;

@interface PKPassbookSettingsController : NSObject <PKPaymentServiceDelegate> {
    PSSpecifier *_addCardButtonSpecifier;
    PSSpecifier *_cardsGroupSpecifier;
    int _context;
    <PKPassbookSettingsDataSource> *_dataSource;
    PSSpecifier *_defaultBillingAddressSpecifier;
    PSSpecifier *_defaultContactEmailSpecifier;
    PSSpecifier *_defaultContactPhoneSpecifier;
    PSSpecifier *_defaultPaymentSpecifier;
    PSSpecifier *_defaultShippingAddressSpecifier;
    <PKPassbookSettingsDelegate> *_delegate;
    <PKPassbookSettingsOptionsDelegate> *_optionsDelegate;
    <PKPassLibraryDataProvider> *_passLibraryDataProvider;
    NSArray *_passes;
    PKPaymentSetupAboutViewController *_privacyController;
}

@property(copy,readonly) NSString * debugDescription;
@property <PKPassbookSettingsDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (id)_addCardButtonSpecifier;
- (void)_addPaymentCard;
- (id)_cardListSpecifiers;
- (id)_defaultBillingAddressSpecifier;
- (id)_defaultContactEmailSpecifier;
- (id)_defaultContactPhoneSpecifier;
- (id)_defaultPaymentSpecifier;
- (id)_defaultShippingAddressSpecifier;
- (id)_defaultsGroupSpecifiers;
- (id)_displayableStringForLabeledValue:(id)arg1;
- (id)_getDefaultBillingAddress;
- (id)_getDefaultContactEmail;
- (id)_getDefaultContactPhone;
- (id)_getDefaultPaymentCard;
- (id)_getDefaultShippingAddress;
- (void)_openPrivacyLink;
- (void)_showCardDetails:(id)arg1;
- (void)_showDefaultBillingAddressOptions:(id)arg1;
- (void)_showDefaultContactEmailOptions:(id)arg1;
- (void)_showDefaultContactPhoneOptions:(id)arg1;
- (void)_showDefaultPaymentOptions:(id)arg1;
- (void)_showDefaultShippingAddressOptions:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)done:(id)arg1;
- (id)initWithDelegate:(id)arg1 dataSource:(id)arg2 context:(int)arg3;
- (void)refreshDefaultCard;
- (void)refreshPasses;
- (void)setDelegate:(id)arg1;
- (id)specifiers;

@end
