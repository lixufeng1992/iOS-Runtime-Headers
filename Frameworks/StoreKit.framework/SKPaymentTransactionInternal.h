/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@class NSArray, NSData, NSDate, NSError, NSString, SKPayment, SKPaymentTransaction;

@interface SKPaymentTransactionInternal : NSObject {
    NSArray *_downloads;
    NSError *_error;
    SKPaymentTransaction *_originalTransaction;
    SKPayment *_payment;
    NSString *_temporaryIdentifier;
    NSDate *_transactionDate;
    NSString *_transactionIdentifier;
    NSData *_transactionReceipt;
    int _transactionState;
}

- (void)dealloc;

@end
