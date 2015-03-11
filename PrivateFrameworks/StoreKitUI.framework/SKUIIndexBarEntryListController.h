/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class <SKUIIndexBarEntryListControllerDelegate>, NSString, SKUIViewElement;

@interface SKUIIndexBarEntryListController : NSObject {
    <SKUIIndexBarEntryListControllerDelegate> *_delegate;
    BOOL _hidesIndexBar;
    BOOL _needsRootTargetViewElement;
    int _numberOfEntryDescriptors;
    NSString *_rootTargetIndexBarEntryID;
    SKUIViewElement *_rootTargetViewElement;
}

@property <SKUIIndexBarEntryListControllerDelegate> * delegate;
@property(readonly) BOOL hidesIndexBar;
@property(readonly) BOOL needsRootTargetViewElement;
@property(readonly) int numberOfEntryDescriptors;
@property(readonly) NSString * rootTargetIndexBarEntryID;
@property(retain) SKUIViewElement * rootTargetViewElement;

+ (id)entryListControllerForEntryListViewElement:(id)arg1;
+ (id)entryListControllerForEntryViewElement:(id)arg1;

- (void).cxx_destruct;
- (void)_didInvalidate;
- (id)delegate;
- (id)entryDescriptorAtIndex:(int)arg1;
- (BOOL)hidesIndexBar;
- (BOOL)needsRootTargetViewElement;
- (int)numberOfEntryDescriptors;
- (void)reloadViewElementData;
- (id)rootTargetIndexBarEntryID;
- (id)rootTargetViewElement;
- (void)setDelegate:(id)arg1;
- (void)setRootTargetViewElement:(id)arg1;
- (id)targetIndexBarEntryIDForEntryDescriptorAtIndex:(int)arg1 returningRelativeSectionIndex:(out int*)arg2;

@end
