/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class CNContact, NSString;

@interface PKPaymentOptionsDefaults : NSObject <PKPassbookSettingsOptionsDelegate> {
}

@property(copy,readonly) NSString * debugDescription;
@property(retain) CNContact * defaultBillingAddress;
@property(retain) CNContact * defaultContactEmail;
@property(retain) CNContact * defaultContactPhone;
@property(retain) NSString * defaultPaymentPassIdentifier;
@property(retain) CNContact * defaultShippingAddress;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (id)defaults;

- (id)_contactForKeychainKey:(id)arg1;
- (void)_keychainData:(id*)arg1 forKey:(id)arg2;
- (void)_setContact:(id)arg1 propertyID:(int)arg2 forKeychainKey:(id)arg3;
- (void)_setKeychainData:(id)arg1 forKey:(id)arg2;
- (id)defaultBillingAddress;
- (id)defaultContactEmail;
- (id)defaultContactPhone;
- (id)defaultPaymentPassIdentifier;
- (id)defaultShippingAddress;
- (id)init;
- (void)setDefaultBillingAddress:(id)arg1;
- (void)setDefaultContactEmail:(id)arg1;
- (void)setDefaultContactPhone:(id)arg1;
- (void)setDefaultPaymentPassIdentifier:(id)arg1;
- (void)setDefaultShippingAddress:(id)arg1;

@end
