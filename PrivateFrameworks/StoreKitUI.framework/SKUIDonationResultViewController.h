/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, SKUIDonationResultView, SKUIGiftAmount;

@interface SKUIDonationResultViewController : SKUIDonationStepViewController <SKUIDonationConfigurationObserver> {
    SKUIGiftAmount *_donationAmount;
    SKUIDonationResultView *_resultView;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(copy) SKUIGiftAmount * donationAmount;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_doneButtonAction:(id)arg1;
- (id)donationAmount;
- (void)donationConfigurationController:(id)arg1 didLoadLogoForCharity:(id)arg2;
- (id)initWithCharity:(id)arg1 configuration:(id)arg2;
- (void)loadView;
- (void)setDonationAmount:(id)arg1;

@end
