/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, NSString, SKUIGridComponent, SKUIViewElementLayoutContext, UIColor;

@interface SKUIGridViewElementPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate> {
    int _cardVerticalSpacingStyle;
    float _cellContentWidth;
    SKUIViewElementLayoutContext *_cellLayoutContext;
    float _cellPaddingInteriorHorizontal;
    float _cellPaddingLeftEdgeHorizontal;
    float _cellPaddingRightEdgeHorizontal;
    int _lastNeedsMoreCount;
    int _lockupType;
    int _numberOfColumns;
    BOOL _rendersWithPerspective;
    UIColor *_separatorColor;
    int _separatorStyle;
    BOOL _showsEditMode;
    NSArray *_viewElements;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) SKUIGridComponent * pageComponent;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (id)_cardArtworkBoundingSizeForIndexPath:(id)arg1;
- (Class)_cardCellClassForCard:(id)arg1;
- (Class)_cellClassForViewElement:(id)arg1;
- (float)_cellContentWidth;
- (float)_cellHeightForViewElement:(id)arg1 width:(float)arg2;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_cellInsetsForIndexPath:(id)arg1;
- (float)_cellPaddingInteriorHorizontal;
- (float)_cellPaddingLeftEdgeHorizontal;
- (float)_cellPaddingRightEdgeHorizontal;
- (void)_enumerateViewElementsForRowOfIndexPath:(id)arg1 usingBlock:(id)arg2;
- (void)_enumerateVisibleViewElementsUsingBlock:(id)arg1;
- (BOOL)_isContainedWithinExploreTemplate;
- (Class)_lockupCellClassWithLockup:(id)arg1;
- (id)_lockupCellReuseIdentifierWithLockup:(id)arg1;
- (int)_lockupTypeForLockup:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_normalizedContentInsetForViewElement:(id)arg1 indexPath:(id)arg2;
- (int)_numberOfColumnsForWidth:(float)arg1;
- (int)_positionForIndexPath:(id)arg1;
- (void)_reloadCellPadding;
- (void)_reloadViewElementProperties;
- (void)_requestLayoutForCells;
- (void)_resetLayoutProperties;
- (BOOL)_useOrdinalPadding;
- (BOOL)_viewElementIsStandardCard:(id)arg1;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (int)applyUpdateType:(int)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)backgroundColorForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize { float x1; float x2; })cellSizeForIndexPath:(id)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (BOOL)collectionViewShouldHighlightItemAtIndexPath:(id)arg1;
- (BOOL)collectionViewShouldSelectItemAtIndexPath:(id)arg1;
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewWillScrollToOffset:(struct CGPoint { float x1; float x2; })arg1 visibleRange:(struct SKUIIndexPathRange { int x1; int x2; int x3; int x4; })arg2;
- (void)expandEditorialForLabelElement:(id)arg1 indexPath:(id)arg2;
- (void)getModalSourceViewForViewElement:(id)arg1 completionBlock:(id)arg2;
- (id)initWithPageComponent:(id)arg1;
- (int)numberOfCells;
- (void)prefetchResourcesWithReason:(int)arg1;
- (void)reloadCellWithIndexPath:(id)arg1 reason:(int)arg2;
- (void)reloadVisibleCellsWithReason:(int)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })sectionContentInset;
- (id)targetScrollingIndexPathForElementWithIndexBarEntryID:(id)arg1 relativeSectionIndex:(int)arg2;
- (BOOL)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(BOOL)arg3;
- (void)willAppearInContext:(id)arg1;
- (void)willTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
