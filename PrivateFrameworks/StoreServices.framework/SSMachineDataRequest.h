/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSData, NSNumber, NSString;

@interface SSMachineDataRequest : SSRequest <SSXPCCoding> {
    NSNumber *_accountID;
    NSData *_actionData;
    NSString *_actionName;
    BOOL _allowsBootstrapCellularData;
    BOOL _waitsForPurchaseOperations;
}

@property(copy) NSNumber * accountIdentifier;
@property(copy) NSData * actionData;
@property(copy) NSString * actionName;
@property BOOL allowsBootstrapCellularData;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property BOOL waitsForPurchaseOperations;

- (id)accountIdentifier;
- (id)actionData;
- (id)actionName;
- (BOOL)allowsBootstrapCellularData;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)initWithURLResponse:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (void)setAccountIdentifier:(id)arg1;
- (void)setActionData:(id)arg1;
- (void)setActionName:(id)arg1;
- (void)setAllowsBootstrapCellularData:(BOOL)arg1;
- (void)setWaitsForPurchaseOperations:(BOOL)arg1;
- (void)startWithCompletionBlock:(id)arg1;
- (BOOL)waitsForPurchaseOperations;

@end
