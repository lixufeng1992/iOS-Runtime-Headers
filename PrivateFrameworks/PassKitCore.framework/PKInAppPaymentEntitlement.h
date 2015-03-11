/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSArray;

@interface PKInAppPaymentEntitlement : NSObject {
    BOOL _ignoreMerchantIdentifiers;
    NSArray *_merchantIdentifiers;
}

@property(readonly) BOOL hasMerchantIdentifiers;
@property(readonly) BOOL ignoreMerchantIdentifiers;

- (void)_probeEntitlementsWithToken:(struct { unsigned int x1[8]; })arg1;
- (void)dealloc;
- (BOOL)hasMerchantIdentifier:(id)arg1;
- (BOOL)hasMerchantIdentifiers;
- (BOOL)ignoreMerchantIdentifiers;
- (id)initWithToken:(struct { unsigned int x1[8]; })arg1;

@end
