/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

@class <ACUIAccountOperationsDelegate>, ACAccountStore, NSObject<OS_dispatch_queue>;

@interface ACUIAccountOperationsHelper : NSObject {
    NSObject<OS_dispatch_queue> *_accountOperationsQueue;
    ACAccountStore *_accountStore;
    <ACUIAccountOperationsDelegate> *_delegate;
    BOOL _isRemovingAccount;
    BOOL _isSavingAccount;
}

@property <ACUIAccountOperationsDelegate> * delegate;
@property BOOL isRemovingAccount;
@property BOOL isSavingAccount;

- (void).cxx_destruct;
- (id)_desiredDataclassActionsFromPossibleActions:(id)arg1 forAccount:(id)arg2;
- (id)delegate;
- (id)initWithAccountStore:(id)arg1;
- (BOOL)isRemovingAccount;
- (BOOL)isSavingAccount;
- (void)removeAccount:(id)arg1;
- (void)saveAccount:(id)arg1 requireVerification:(BOOL)arg2;
- (void)saveAccount:(id)arg1 withDataclassActions:(id)arg2 requireVerification:(BOOL)arg3;
- (void)saveAccount:(id)arg1 withDataclassActions:(id)arg2;
- (void)saveAccount:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsRemovingAccount:(BOOL)arg1;
- (void)setIsSavingAccount:(BOOL)arg1;

@end
