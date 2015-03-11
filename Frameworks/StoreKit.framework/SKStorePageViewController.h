/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, SKInvocationQueueProxy<SKUIServiceStorePageViewController>, SKRemoteStorePageViewController, SKStoreProductViewController, _UIAsyncInvocation;

@interface SKStorePageViewController : UIViewController <SKStoreProductViewControllerDelegate> {
    _UIAsyncInvocation *_cancelRequest;
    id _loadBlock;
    SKStoreProductViewController *_productPageViewController;
    SKRemoteStorePageViewController *_remoteViewController;
    SKInvocationQueueProxy<SKUIServiceStorePageViewController> *_serviceProxy;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void)_addRemoteView;
- (void)_didFinishWithResult:(id)arg1 error:(id)arg2;
- (void)_didLoadWithResult:(BOOL)arg1 error:(id)arg2;
- (void)_dismissProductPageViewController;
- (void)_prepareToLoadWithCompletionBlock:(id)arg1;
- (void)_requestRemoteViewController;
- (void)_showProductPageWithItemIdentifier:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadPageWithURL:(id)arg1 completionBlock:(id)arg2;
- (void)loadPageWithURLBagKey:(id)arg1 completionBlock:(id)arg2;
- (void)loadView;
- (void)productViewControllerDidFinish:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;

@end
