/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, NSDate, NSString, SKUIGiftTheme, SKUIItem;

@interface SKUIGift : NSObject <NSCopying> {
    int _category;
    NSDate *_deliveryDate;
    int _giftAmount;
    NSString *_giftAmountString;
    SKUIItem *_item;
    NSString *_message;
    NSArray *_recipientAddresses;
    NSString *_senderEmailAddress;
    NSString *_senderName;
    SKUIGiftTheme *_theme;
    NSString *_totalGiftAmountString;
}

@property(copy) NSDate * deliveryDate;
@property int giftAmount;
@property(copy) NSString * giftAmountString;
@property(readonly) int giftCategory;
@property(readonly) SKUIItem * item;
@property(copy) NSString * message;
@property(copy) NSArray * recipientAddresses;
@property(copy) NSString * senderEmailAddress;
@property(copy) NSString * senderName;
@property(copy) SKUIGiftTheme * theme;
@property(copy) NSString * totalGiftAmountString;

- (void).cxx_destruct;
- (id)HTTPBodyDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deliveryDate;
- (int)giftAmount;
- (id)giftAmountString;
- (int)giftCategory;
- (id)initWithGiftCategory:(int)arg1;
- (id)initWithItem:(id)arg1;
- (id)item;
- (id)message;
- (id)recipientAddresses;
- (void)reset;
- (id)senderEmailAddress;
- (id)senderName;
- (void)setDeliveryDate:(id)arg1;
- (void)setGiftAmount:(int)arg1;
- (void)setGiftAmountString:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setRecipientAddresses:(id)arg1;
- (void)setSenderEmailAddress:(id)arg1;
- (void)setSenderName:(id)arg1;
- (void)setTheme:(id)arg1;
- (void)setTotalGiftAmountString:(id)arg1;
- (id)theme;
- (id)totalGiftAmountString;

@end
