/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUReportConcernViewController : SUTableViewController {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    BOOL _animatingKeyboard;
    unsigned long long _itemIdentifier;
    } _originalTableInsets;
}

@property(readonly) unsigned long long itemIdentifier;

- (void)_cancel:(id)arg1;
- (void)_fetchConcerns;
- (void)_hideKeyboardDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_showKeyboardDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_submit:(id)arg1;
- (BOOL)handleSelectionForIndexPath:(id)arg1 tapCount:(int)arg2;
- (id)initWithItemIdentifier:(unsigned long long)arg1;
- (unsigned long long)itemIdentifier;
- (void)keyboardWillHideWithInfo:(id)arg1;
- (void)keyboardWillShowWithInfo:(id)arg1;
- (void)loadView;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)viewDidAppear:(BOOL)arg1;

@end
