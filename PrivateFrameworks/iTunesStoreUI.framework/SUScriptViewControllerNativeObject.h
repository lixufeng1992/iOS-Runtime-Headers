/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, SKUIPassbookLoader;

@interface SUScriptViewControllerNativeObject : SUScriptNativeObject <SKUIPassbookLoaderDelegate> {
    SKUIPassbookLoader *_passbookLoader;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void)_loadPassbookPassWithURL:(id)arg1;
- (void)_parentViewControllerChangeNotification:(id)arg1;
- (void)_reloadVisibility;
- (void)dealloc;
- (void)destroyNativeObject;
- (void)passbookLoaderDidFinish:(id)arg1;
- (id)presentationViewControllerForPassbookLoader:(id)arg1;
- (void)setScriptObject:(id)arg1;
- (void)setupNativeObject;

@end
