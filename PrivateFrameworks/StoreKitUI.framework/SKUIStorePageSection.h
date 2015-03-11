/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, NSIndexPath, NSString, SKUIPageComponent, SKUIProductPageOverlayController, SKUIStorePageSectionContext;

@interface SKUIStorePageSection : NSObject <SKUIProductPageOverlayDelegate> {
    BOOL _bottomSection;
    SKUIPageComponent *_component;
    SKUIStorePageSectionContext *_context;
    SKUIProductPageOverlayController *_overlayController;
    int _sectionIndex;
    BOOL _topSection;
}

@property(getter=isBottomSection) BOOL bottomSection;
@property(readonly) SKUIStorePageSectionContext * context;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) int defaultItemPinningStyle;
@property(copy,readonly) NSString * description;
@property(readonly) NSIndexPath * firstAppearanceIndexPath;
@property(readonly) BOOL fitsToHeight;
@property(readonly) unsigned int hash;
@property(readonly) NSArray * indexPathsForPinningItems;
@property(readonly) int numberOfCells;
@property(readonly) SKUIPageComponent * pageComponent;
@property(readonly) struct CGSize { float x1; float x2; } preferredContentSize;
@property(readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } sectionContentInset;
@property int sectionIndex;
@property(readonly) Class superclass;
@property(getter=isTopSection) BOOL topSection;

- (void).cxx_destruct;
- (id)_clickEventWithElementName:(id)arg1 index:(int)arg2 fieldData:(id)arg3;
- (int)_itemPinningStyle;
- (void)_sendXEventWithDictionary:(id)arg1 completionBlock:(id)arg2;
- (void)_setContext:(id)arg1;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (int)applyUpdateType:(int)arg1;
- (id)backgroundColorForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize { float x1; float x2; })cellSizeForIndexPath:(id)arg1;
- (id)clickEventWithItem:(id)arg1 elementName:(id)arg2 index:(int)arg3;
- (id)clickEventWithLink:(id)arg1 elementName:(id)arg2 index:(int)arg3;
- (id)clickEventWithMedia:(id)arg1 elementName:(id)arg2 index:(int)arg3;
- (void)collectionViewDidConfirmButtonElement:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)collectionViewDidConfirmItemOfferAtIndexPath:(id)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (void)collectionViewDidTapVideoAtIndexPath:(id)arg1;
- (BOOL)collectionViewShouldHighlightItemAtIndexPath:(id)arg1;
- (BOOL)collectionViewShouldSelectItemAtIndexPath:(id)arg1;
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewWillScrollToOffset:(struct CGPoint { float x1; float x2; })arg1 visibleRange:(struct SKUIIndexPathRange { int x1; int x2; int x3; int x4; })arg2;
- (BOOL)containsElementWithIndexBarEntryID:(id)arg1;
- (float)contentInsetAdjustmentForCollectionView:(id)arg1;
- (id)context;
- (void)dealloc;
- (int)defaultItemPinningStyle;
- (void)deselectItemsAnimated:(BOOL)arg1;
- (void)didAppearInContext:(id)arg1;
- (void)expandEditorialForLabelElement:(id)arg1 indexPath:(id)arg2;
- (id)firstAppearanceIndexPath;
- (BOOL)fitsToHeight;
- (void)getModalSourceViewForViewElement:(id)arg1 completionBlock:(id)arg2;
- (id)indexPathsForPinningItems;
- (id)initWithPageComponent:(id)arg1;
- (void)invalidateCachedLayoutInformation;
- (BOOL)isBottomSection;
- (BOOL)isTopSection;
- (id)itemOfferClickEventWithItem:(id)arg1 elementName:(id)arg2 index:(int)arg3;
- (struct _NSRange { unsigned int x1; unsigned int x2; })itemRangeForIndexPathRange:(struct SKUIIndexPathRange { int x1; int x2; int x3; int x4; })arg1;
- (int)numberOfCells;
- (id)pageComponent;
- (BOOL)performDefaultActionForViewElement:(id)arg1;
- (id)performItemOfferActionForItem:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })pinningContentInsetForItemAtIndexPath:(id)arg1;
- (int)pinningStyleForItemAtIndexPath:(id)arg1;
- (int)pinningTransitionStyleForItemAtIndexPath:(id)arg1;
- (void)playVideoForElement:(id)arg1;
- (void)playVideoWithURL:(id)arg1;
- (struct CGSize { float x1; float x2; })preferredContentSize;
- (void)prefetchResourcesWithReason:(int)arg1;
- (void)productPageOverlayDidDismiss:(id)arg1;
- (void)reloadCellWithIndexPath:(id)arg1 reason:(int)arg2;
- (void)reloadVisibleCellsWithReason:(int)arg1;
- (BOOL)requestLayoutWithReloadReason:(int)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })sectionContentInset;
- (int)sectionIndex;
- (void)sendXEventWithItem:(id)arg1 completionBlock:(id)arg2;
- (void)sendXEventWithLink:(id)arg1 completionBlock:(id)arg2;
- (void)setBottomSection:(BOOL)arg1;
- (void)setSectionIndex:(int)arg1;
- (void)setTopSection:(BOOL)arg1;
- (void)showPageWithLink:(id)arg1;
- (void)showProductViewControllerWithItem:(id)arg1;
- (id)targetScrollingIndexPathForElementWithIndexBarEntryID:(id)arg1 relativeSectionIndex:(int)arg2;
- (BOOL)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(BOOL)arg3;
- (int)updateWithContext:(id)arg1 pageComponent:(id)arg2;
- (void)willAppearInContext:(id)arg1;
- (void)willHideInContext:(id)arg1;
- (void)willTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
