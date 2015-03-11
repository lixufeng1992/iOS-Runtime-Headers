/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSOperationQueue, NSString, NSURL, PFUbiquityLocation;

@interface PFUbiquityMetadataFactoryFilePresenter : NSObject <NSFilePresenter> {
    PFUbiquityLocation *_presentedItemLocation;
    NSURL *_presentedItemURL;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) PFUbiquityLocation * presentedItemLocation;
@property(retain,readonly) NSOperationQueue * presentedItemOperationQueue;
@property(readonly) NSURL * presentedItemURL;
@property(copy,readonly) NSURL * primaryPresentedItemURL;
@property(readonly) Class superclass;

+ (void)initialize;

- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithMetadataStoreFileLocation:(id)arg1;
- (id)presentedItemLocation;
- (id)presentedItemOperationQueue;
- (id)presentedItemURL;
- (void)relinquishPresentedItemToReader:(id)arg1;
- (void)relinquishPresentedItemToWriter:(id)arg1;
- (void)savePresentedItemChangesWithCompletionHandler:(id)arg1;

@end
