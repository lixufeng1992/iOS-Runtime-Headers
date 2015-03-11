/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSIndexPath, NSMutableDictionary, NSString, PHAsset, PHAssetCollection, PHCachingImageManager, PHFetchResult, PLDeletePhotosActionController, PUActivityViewController, PUAlbumListTransitionContext, PUAlbumPickerViewController, PUPhotoBrowserController, PUPhotoPinchGestureRecognizer, PUPhotoSelectionManager, PUPhotosDataSource, PUPhotosGridViewController, PUPhotosGridViewControllerSpec, PUPhotosSinglePickerViewController, PUPopoverController, PUScrollViewSpeedometer, PUSearchButtonItem, PUSearchViewController, PUSessionInfo, UIActionSheet, UIBarButtonItem, UICollectionViewLayout, UICollectionViewLayout<PUGridLayoutProtocol>, UILongPressGestureRecognizer, UINavigationButton, UIView;

@interface PUPhotosGridViewController : UICollectionViewController <UIPopoverControllerDelegate, UIPopoverPresentationControllerDelegate, PUCollectionViewReorderDelegate, PUSessionInfoObserver, PHAssetCollectionDataSource, _UISettingsKeyObserver, UISearchBarDelegate, PUSearchViewControllerDelegate, PUPhotosDataSourceChangeObserver, UIGestureRecognizerDelegate, PLNavigableAssetContainerViewController, PLDismissableViewController, PUStackedAlbumControllerTransition, PUScrollViewSpeedometerDelegate> {
    struct CGPoint { 
        float x; 
        float y; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    PUActivityViewController *__activityViewController;
    UICollectionViewLayout *__albumListTransitionLayout;
    PUAlbumPickerViewController *__albumPickerViewController;
    int __batchPreheatingCount;
    PHCachingImageManager *__cachingImageManager;
    PUScrollViewSpeedometer *__collectionViewSpeedometer;
    PLDeletePhotosActionController *__deleteActionController;
    UIView *__emptyPlaceholderView;
    BOOL __hasEditSessionReorderedItems;
    id __lockScreenSharingObserver;
    int __maximumNumberOfRowsToPreheat;
    PUPhotosGridViewController *__modalSearchResultsViewController;
    PUSearchViewController *__modalSearchViewController;
    unsigned int __previousCollectionsCount;
    } __previousPreheatContentOffset;
    } __previousPreheatRect;
    PUPopoverController *__puPopoverController;
    PUPhotoBrowserController *__pushedPhotoBrowserController;
    UIActionSheet *__removeActionSheet;
    PUPhotosSinglePickerViewController *__sharingPhotosPickerViewController;
    BOOL __shouldConsolidateFetchesForPreheating;
    UIBarButtonItem *_addToolbarButton;
    PUAlbumListTransitionContext *_albumListTransitionContext;
    unsigned int _allowedActions;
    UIView *_alternateContentView;
    BOOL _alwaysHideTabBar;
    UIBarButtonItem *_cancelButtonItem;
    BOOL _contentViewInSyncWithModel;
    UIBarButtonItem *_customDoneButtonItem;
    BOOL _deletesDuplicatesWhenNecessary;
    BOOL _didScrollToInitialPosition;
    PUPhotosGridViewControllerSpec *_gridSpec;
    BOOL _initiallyScrolledToBottom;
    BOOL _isDisplayingSearchResults;
    BOOL _isMenuIndexPathExact;
    float _lastTransitionWidth;
    float _lastUpdateLayoutMetricsCollectionViewWidth;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UICollectionViewLayout<PUGridLayoutProtocol> *_mainGridLayout;
    NSIndexPath *_menuIndexPath;
    id _onViewDidAppearCompletion;
    id _onViewDidLayoutSubviewsBlock;
    PUSearchViewController *_passdownSearchViewController;
    PUPhotoPinchGestureRecognizer *_photoOrStackPinchGestureRecognizer;
    PUPhotoSelectionManager *_photoSelectionManager;
    PUPhotosDataSource *_photosDataSource;
    NSMutableDictionary *_progressInfosByCachedIndexPath;
    NSMutableDictionary *_progressInfosByIdentifier;
    UIBarButtonItem *_removeToolbarButton;
    UIBarButtonItem *_restoreToolbarButton;
    PUSearchButtonItem *_searchButton;
    UIBarButtonItem *_selectSessionDoneBarButtonItem;
    UINavigationButton *_selectionButton;
    PUSessionInfo *_sessionInfo;
    UIBarButtonItem *_shareToolbarButton;
    BOOL _showsCustomDoneButtonItemOnLeft;
    UIBarButtonItem *_slideshowButton;
    UIBarButtonItem *_slideshowButtonSpacer;
    unsigned int _suppressesColorSettingsCount;
    PHAsset *_visibleReferenceAssetBeforeChange;
    PHAssetCollection *_visibleReferenceAssetContainerBeforeChange;
    float _visibleReferenceAssetRelativeYBeforeChange;
}

@property(setter=_setActivityViewController:,retain) PUActivityViewController * _activityViewController;
@property(setter=setAlbumListTransitionLayout:,retain) UICollectionViewLayout * _albumListTransitionLayout;
@property(setter=_setAlbumPickerViewController:,retain) PUAlbumPickerViewController * _albumPickerViewController;
@property(setter=_setBatchPreheatingCount:) int _batchPreheatingCount;
@property(readonly) PHCachingImageManager * _cachingImageManager;
@property(setter=_setCollectionViewSpeedometer:,retain) PUScrollViewSpeedometer * _collectionViewSpeedometer;
@property(setter=_setDeleteActionController:,retain) PLDeletePhotosActionController * _deleteActionController;
@property(setter=_setEmptyPlaceholderView:,retain) UIView * _emptyPlaceholderView;
@property(setter=_setHasEditSessionReorderedItems:) BOOL _hasEditSessionReorderedItems;
@property(setter=_setLockScreenSharingObserver:,retain) id _lockScreenSharingObserver;
@property(setter=_setMaximumNumberOfRowsToPreheat:) int _maximumNumberOfRowsToPreheat;
@property(setter=_setModalSearchResultsViewController:,retain) PUPhotosGridViewController * _modalSearchResultsViewController;
@property(setter=_setModalSearchViewController:,retain) PUSearchViewController * _modalSearchViewController;
@property(setter=_setPreviousCollectionsCount:) unsigned int _previousCollectionsCount;
@property(setter=_setPreviousPreheatContentOffset:) struct CGPoint { float x1; float x2; } _previousPreheatContentOffset;
@property(setter=_setPreviousPreheatRect:) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } _previousPreheatRect;
@property(setter=_puSetPopoverController:,retain) PUPopoverController * _puPopoverController;
@property(setter=_setPushedPhotoBrowserController:,retain) PUPhotoBrowserController * _pushedPhotoBrowserController;
@property(setter=_setRemoveActionSheet:,retain) UIActionSheet * _removeActionSheet;
@property(setter=_setSharingPhotosPickerViewController:,retain) PUPhotosSinglePickerViewController * _sharingPhotosPickerViewController;
@property(setter=_setShouldConsolidateFetchesForPreheating:) BOOL _shouldConsolidateFetchesForPreheating;
@property(retain) PUAlbumListTransitionContext * albumListTransitionContext;
@property unsigned int allowedActions;
@property BOOL alwaysHideTabBar;
@property(readonly) PHFetchResult * assetCollectionsFetchResult;
@property(readonly) PHFetchResult * collectionListFetchResult;
@property(retain) UIBarButtonItem * customDoneButtonItem;
@property(copy,readonly) NSString * debugDescription;
@property BOOL deletesDuplicatesWhenNecessary;
@property(copy,readonly) NSString * description;
@property(retain) PUPhotosGridViewControllerSpec * gridSpec;
@property(readonly) unsigned int hash;
@property BOOL initiallyScrolledToBottom;
@property(setter=setDisplayingSearchResults:) BOOL isDisplayingSearchResults;
@property(retain) UICollectionViewLayout<PUGridLayoutProtocol> * mainGridLayout;
@property(copy) id onViewDidAppearCompletion;
@property(retain) PUSearchViewController * passdownSearchViewController;
@property(setter=_setPhotoOrStackPinchGestureRecognizer:,retain) PUPhotoPinchGestureRecognizer * photoOrStackPinchGestureRecognizer;
@property(setter=_setPhotoSelectionManager:,retain) PUPhotoSelectionManager * photoSelectionManager;
@property(retain) PUPhotosDataSource * photosDataSource;
@property(retain) PUSessionInfo * sessionInfo;
@property BOOL showsCustomDoneButtonItemOnLeft;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activityViewController;
- (void)_addButtonPressed:(id)arg1;
- (id)_albumListTransitionLayout;
- (id)_albumPickerViewController;
- (id)_allAssetsInCollections;
- (BOOL)_allowsActions:(unsigned int)arg1;
- (BOOL)_areAllAssetsSelected;
- (id)_assetsAllowingDelete:(BOOL)arg1 orRemove:(BOOL)arg2 fromAssets:(id)arg3;
- (id)_assetsAllowingEditOperation:(int)arg1 fromAssets:(id)arg2;
- (id)_avalancheStackImageForAsset:(id)arg1 partialStack:(BOOL)arg2;
- (id)_barButtonSpacerWithWidth:(float)arg1;
- (int)_batchPreheatingCount;
- (void)_beginInteractiveNavigationForItemAtIndexPath:(id)arg1;
- (void)_beginInteractiveStackCollapse:(id)arg1;
- (id)_cachingImageManager;
- (BOOL)_canAddContent;
- (BOOL)_canAllContainersPerformEditOperation:(int)arg1;
- (BOOL)_canPasteboardCopyAssetAtIndexPath:(id)arg1;
- (BOOL)_canRemoveContent;
- (BOOL)_canShareAsset:(id)arg1;
- (BOOL)_canShareContent;
- (id)_cancelButtonItem;
- (void)_cancelImageRequestForCell:(id)arg1;
- (void)_clearAutomaticContentOffsetSnapshot;
- (BOOL)_collectionView:(id)arg1 shouldApplyTransitionContentOffset:(struct CGPoint { float x1; float x2; })arg2 contentSize:(struct CGSize { float x1; float x2; })arg3;
- (id)_collectionViewSpeedometer;
- (void)_configureAddPlaceholderCell:(id)arg1 animated:(BOOL)arg2;
- (void)_configureDecorationsForCell:(id)arg1 withAsset:(id)arg2 thumbnailIsPlaceholder:(BOOL)arg3 assetMayHaveChanged:(BOOL)arg4;
- (id)_deleteActionController;
- (void)_didDismissSearchResultsViewController;
- (void)_didDismissSearchViewController;
- (void)_dismissSearchViewControllerAnimated:(BOOL)arg1;
- (id)_emptyPlaceholderView;
- (void)_getFirstAsset:(id*)arg1 collection:(id*)arg2;
- (void)_handleCancelButton:(id)arg1;
- (void)_handleHideMenuItem:(id)arg1;
- (void)_handlePhotoOrStackPinchGestureRecognizer:(id)arg1;
- (void)_handleSelectSessionDoneButton:(id)arg1;
- (void)_handleSelectionButton:(id)arg1;
- (BOOL)_hasAtLeastOneContainer;
- (BOOL)_hasEditSessionReorderedItems;
- (unsigned int)_indexForPhotoCollection:(id)arg1;
- (void)_invalidateAllAssetIndexes;
- (void)_invalidateAllProgressInfoIndexPaths;
- (BOOL)_isAddPlaceholderAtIndexPath:(id)arg1;
- (id)_localizedBannerTextForAsset:(id)arg1 isDestructive:(BOOL*)arg2;
- (id)_lockScreenSharingObserver;
- (int)_maximumNumberOfRowsToPreheat;
- (void)_menuControllerDidHideMenu:(id)arg1;
- (id)_modalSearchResultsViewController;
- (id)_modalSearchViewController;
- (void)_navigateToPhotoAtIndexPath:(id)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3;
- (id)_newEditActionItemsWithWideSpacing:(BOOL)arg1;
- (void)_performAutomaticContentOffsetAdjustment;
- (id)_pickerBannerView;
- (void)_prepareForAutomaticContentOffsetAdjustment;
- (unsigned int)_previousCollectionsCount;
- (struct CGPoint { float x1; float x2; })_previousPreheatContentOffset;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_previousPreheatRect;
- (id)_puPopoverController;
- (void)_puSetPopoverController:(id)arg1;
- (id)_pushedPhotoBrowserController;
- (id)_removeActionSheet;
- (void)_removeButtonPressed:(id)arg1;
- (void)_removeSelectedAssetsWithCompletion:(id)arg1;
- (void)_searchButtonPressed:(id)arg1;
- (void)_searchResultsViewControllerDidFinish:(id)arg1;
- (id)_selectSessionDoneBarButtonItem;
- (id)_selectionButton;
- (void)_sender:(id)arg1 shareAssets:(id)arg2 aggregateKey:(struct __CFString { }*)arg3 completion:(id)arg4;
- (void)_setActivityViewController:(id)arg1;
- (void)_setAlbumPickerViewController:(id)arg1;
- (void)_setBatchPreheatingCount:(int)arg1;
- (void)_setCollectionViewSpeedometer:(id)arg1;
- (void)_setDeleteActionController:(id)arg1;
- (void)_setEmptyPlaceholderView:(id)arg1;
- (void)_setHasEditSessionReorderedItems:(BOOL)arg1;
- (void)_setLockScreenSharingObserver:(id)arg1;
- (void)_setMaximumNumberOfRowsToPreheat:(int)arg1;
- (void)_setModalSearchResultsViewController:(id)arg1;
- (void)_setModalSearchViewController:(id)arg1;
- (void)_setPhotoOrStackPinchGestureRecognizer:(id)arg1;
- (void)_setPhotoSelectionManager:(id)arg1;
- (void)_setPreviousCollectionsCount:(unsigned int)arg1;
- (void)_setPreviousPreheatContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)_setPreviousPreheatRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_setPushedPhotoBrowserController:(id)arg1;
- (void)_setRemoveActionSheet:(id)arg1;
- (void)_setSharingPhotosPickerViewController:(id)arg1;
- (void)_setShouldConsolidateFetchesForPreheating:(BOOL)arg1;
- (void)_shareButtonPressed:(id)arg1;
- (id)_shareableAssetsFromAssets:(id)arg1;
- (id)_sharingPhotosPickerViewController;
- (BOOL)_shouldConsolidateFetchesForPreheating;
- (void)_slideshowButtonPressed:(id)arg1;
- (void)_startSlideshowWithSettings:(id)arg1;
- (void)_updateAfterSizeChangeIfNecessary;
- (void)_updateAllProgressInfoIndexPaths;
- (void)_updateBackButtonTitle;
- (void)_updateCollectionViewMultipleSelection;
- (void)_updateEmptyPlaceholderAnimated:(BOOL)arg1;
- (void)_updateGlobalHeaderVisibility;
- (void)_updateIndexPathForProgressInfo:(id)arg1;
- (void)_updateLayoutMetricsIfNeeded;
- (void)_updateNavigationBannerAnimated:(BOOL)arg1;
- (void)_updatePhotoDecorationForCell:(id)arg1 animated:(BOOL)arg2;
- (void)_updatePhotoSelectionManager;
- (void)_updateProgressForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)_updateProgressForCellAtIndexPath:(id)arg1;
- (void)_updateSearchButtonTextForActiveSearchField:(BOOL)arg1;
- (void)_updateSelectionForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)_updateSubviewsOrderingAndVisibility;
- (void)_updateToolbarContentsAnimated:(BOOL)arg1;
- (void)_willDismissSearchResultsViewControllerAnimated:(BOOL)arg1;
- (void)_willDismissSearchViewControllerAnimated:(BOOL)arg1;
- (void)activityViewController:(id)arg1 displayVideoRemakerProgressView:(id)arg2;
- (id)albumListTransitionContext;
- (BOOL)allowSlideshowButton;
- (unsigned int)allowedActions;
- (id)alternateContentView;
- (BOOL)alwaysHideTabBar;
- (id)assetAtIndexPath:(id)arg1;
- (id)assetAtIndexPathIfSafe:(id)arg1;
- (id)assetCollectionsFetchResult;
- (id)assetIndexPathForPhotoToken:(id)arg1;
- (id)assetsInAssetCollection:(id)arg1;
- (void)beginBatchPreheating;
- (id)beginShowingProgressForAsset:(id)arg1 inCollection:(id)arg2;
- (void)beginSuppressingColorSettingsUpdate;
- (id)bestReferenceItemIndexPath;
- (BOOL)canAddToOtherAlbumContent;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canBeginStackCollapseTransition;
- (BOOL)canDeleteContent;
- (BOOL)canDisplayEditButton;
- (BOOL)canNavigateToPhotoInteractively:(BOOL)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (double)cellAspectRatioHint;
- (int)cellFillMode;
- (id)collectionListFetchResult;
- (BOOL)collectionView:(id)arg1 canReorderItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3 completionHandler:(id)arg4;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 targetIndexPathForMoveFromIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 transitionLayoutForOldLayout:(id)arg2 newLayout:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)configureGlobalFooterView:(id)arg1;
- (void)configureGlobalHeaderView:(id)arg1;
- (void)configureGridCell:(id)arg1 forItemAtIndexPath:(id)arg2 assetMayHaveChanged:(BOOL)arg3;
- (void)configureGridCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3 animated:(BOOL)arg4;
- (struct CGPoint { float x1; float x2; })contentOffsetForPreheating;
- (id)contentScrollView;
- (struct CGSize { float x1; float x2; })contentSizeForPreheating;
- (void)copy:(id)arg1;
- (id)customDoneButtonItem;
- (void)dealloc;
- (BOOL)deletesDuplicatesWhenNecessary;
- (void)didReceiveMemoryWarning;
- (void)didSelectAddPlaceholderInSection:(int)arg1;
- (id)emptyPlaceholderView;
- (void)endBatchPreheating;
- (void)endShowingProgressWithIdentifier:(id)arg1;
- (void)endSuppressingColorSettingsUpdate;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)getTitle:(out id*)arg1 prompt:(out id*)arg2 shouldHideBackButton:(out BOOL*)arg3 leftBarButtonItems:(out id*)arg4 rightBarButtonItems:(out id*)arg5;
- (float)globalHeaderHeight;
- (id)gridLayout;
- (id)gridSpec;
- (void)handleAddFromAction;
- (void)handleAddToAction;
- (void)handleLongPressGesture:(id)arg1;
- (void)handleNavigateToAsset:(id)arg1 inContainer:(id)arg2;
- (void)handleToggleSelectionOfItemAtIndexPath:(id)arg1;
- (void)handleTransitionFade:(BOOL)arg1 animate:(BOOL)arg2;
- (BOOL)hasScrollableContent;
- (int)imageDeliveryMode;
- (id)imageForAsset:(id)arg1 outIsPlaceholder:(BOOL*)arg2;
- (id)imageRequestOptionsForAsset:(id)arg1 pixelSize:(inout struct CGSize { float x1; float x2; }*)arg2;
- (id)indexPathForAsset:(id)arg1 hintCollection:(id)arg2 hintIndexPath:(id)arg3;
- (id)indexPathForAsset:(id)arg1 inCollection:(id)arg2;
- (id)indexPathsForPreheatingInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithSpec:(id)arg1;
- (BOOL)initiallyScrolledToBottom;
- (void)installGestureRecognizers;
- (BOOL)isAnyAssetSelected;
- (BOOL)isContentViewInSyncWithModel;
- (BOOL)isCurrentCollectionViewDataSource;
- (BOOL)isDisplayingSearchResults;
- (BOOL)isEmpty;
- (BOOL)isPreheatingEnabled;
- (BOOL)isTrashBinViewController;
- (id)itemIndexPathAtPoint:(struct CGPoint { float x1; float x2; })arg1 outClosestMatch:(id*)arg2;
- (void)loadView;
- (id)localizedSelectionTitle;
- (id)localizedTitleForAssets:(id)arg1;
- (id)longPressGestureRecognizer;
- (id)mainGridLayout;
- (void)navigateToPhoto:(id)arg1 inAssetContainer:(id)arg2 animated:(BOOL)arg3;
- (void)navigateToRevealPhoto:(id)arg1 inAssetContainer:(id)arg2 animated:(BOOL)arg3;
- (id)newGridLayout;
- (id)newToolbarItems;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (id)onViewDidAppearCompletion;
- (id)passdownSearchViewController;
- (void)paste:(id)arg1;
- (id)photoCollectionAtIndex:(unsigned int)arg1;
- (id)photoOrStackPinchGestureRecognizer;
- (id)photoSelectionManager;
- (void)photosDataSource:(id)arg1 didChange:(id)arg2;
- (id)photosDataSource;
- (void)photosDataSourceWillChange:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (BOOL)popoverControllerShouldDismissPopover:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (BOOL)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (void)preheatAssets;
- (void)preheatAssetsConsolidatingFetches:(BOOL)arg1;
- (BOOL)prepareForDismissingForced:(BOOL)arg1;
- (void)processDataSourceChange:(id)arg1;
- (id)pu_debugRows;
- (BOOL)pu_handleSecondTabTap;
- (BOOL)pu_wantsTabBarVisible;
- (BOOL)pu_wantsToolbarVisible;
- (void)resetPreheating;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewSpeedometer:(id)arg1 regimeDidChange:(int)arg2 from:(int)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillScrollToTop:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (BOOL)searchBarShouldBeginEditing:(id)arg1;
- (id)searchButtonItem;
- (void)searchViewController:(id)arg1 displaySearchResults:(id)arg2 orAlbum:(struct NSObject { Class x1; }*)arg3 withTitle:(id)arg4 completion:(id)arg5;
- (void)searchViewController:(id)arg1 presentFromResultsViewController:(id)arg2 animated:(BOOL)arg3;
- (void)searchViewControllerDidCancel:(id)arg1;
- (void)sectionedGridLayout:(id)arg1 didPrepareTransitionIsAppearing:(BOOL)arg2;
- (id)sectionedGridLayoutAnchorItemForAdjustingContentOffset:(id)arg1;
- (BOOL)sectionedGridLayoutTransitionAutoAdjustContentOffsetEnabled:(id)arg1;
- (id)selectedAssets;
- (void)sender:(id)arg1 shareAssetsInFetchResult:(id)arg2 withCompletion:(id)arg3;
- (void)sender:(id)arg1 shareSelectedAssetsWithAggregateKey:(struct __CFString { }*)arg2 completion:(id)arg3;
- (id)sessionInfo;
- (id)sessionInfoForTransferredAssets:(id)arg1;
- (void)sessionInfoPhotoSelectionDidChange:(id)arg1;
- (void)setAlbumListTransitionContext:(id)arg1;
- (void)setAlbumListTransitionLayout:(id)arg1 animated:(BOOL)arg2;
- (void)setAlbumListTransitionLayout:(id)arg1;
- (void)setAllowedActions:(unsigned int)arg1;
- (void)setAlternateContentView:(id)arg1;
- (void)setAlwaysHideTabBar:(BOOL)arg1;
- (void)setContentViewInSyncWithModel:(BOOL)arg1;
- (void)setCustomDoneButtonItem:(id)arg1;
- (void)setDeletesDuplicatesWhenNecessary:(BOOL)arg1;
- (void)setDisplayingSearchResults:(BOOL)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setGridSpec:(id)arg1;
- (void)setInitiallyScrolledToBottom:(BOOL)arg1;
- (void)setLongPressGestureRecognizer:(id)arg1;
- (void)setMainGridLayout:(id)arg1;
- (void)setOnViewDidAppearCompletion:(id)arg1;
- (void)setPassdownSearchViewController:(id)arg1;
- (void)setPhotosDataSource:(id)arg1;
- (void)setSelected:(BOOL)arg1 itemsAtIndexes:(id)arg2 inSection:(int)arg3 animated:(BOOL)arg4;
- (void)setSessionInfo:(id)arg1;
- (void)setShowsCustomDoneButtonItemOnLeft:(BOOL)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)shouldPerformAutomaticContentOffsetAdjustment;
- (BOOL)shouldPerformFullReloadForIncrementalDataSourceChange:(id)arg1;
- (BOOL)shouldShowMenu;
- (BOOL)shouldShowTabBar;
- (BOOL)shouldShowToolbar;
- (BOOL)showsCustomDoneButtonItemOnLeft;
- (struct CGPoint { float x1; float x2; })stableUpdatesContentOffsetForProposedContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)uninstallGestureRecognizers;
- (void)updateGlobalFooter;
- (void)updateInterfaceForIncrementalDataSourceChanges:(id)arg1;
- (void)updateInterfaceForModelReloadAnimated:(BOOL)arg1;
- (void)updateInterfaceLayoutIfNecessary;
- (void)updateLayoutMetrics;
- (void)updateNavigationBarAnimated:(BOOL)arg1;
- (void)updatePeripheralInterfaceAnimated:(BOOL)arg1;
- (void)updateProgressWithIdentifier:(id)arg1 withValue:(float)arg2;
- (BOOL)updateSpec;
- (void)updateTitle;
- (void)updateVisibleSectionHeadersAtIndexes:(id)arg1;
- (void)updateVisibleSupplementaryViewsOfKind:(id)arg1 animated:(BOOL)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;
- (BOOL)wantsAddContentInToolbar;
- (BOOL)wantsAddPlaceholderAtEndOfSection:(int)arg1;
- (BOOL)wantsAssetCounts;
- (BOOL)wantsGlobalFooter;
- (void)zoomTransition:(id)arg1 didFinishForOperation:(int)arg2 animated:(BOOL)arg3 interactive:(BOOL)arg4;
- (BOOL)zoomTransition:(id)arg1 getFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 contentMode:(int*)arg3 forPhotoToken:(id)arg4 operation:(int)arg5;
- (id)zoomTransition:(id)arg1 photoTokenForPhoto:(id)arg2 inCollection:(id)arg3;
- (void)zoomTransition:(id)arg1 setVisibility:(BOOL)arg2 forPhotoToken:(id)arg3;
- (void)zoomTransition:(id)arg1 willBeginForOperation:(int)arg2 animated:(BOOL)arg3 interactive:(BOOL)arg4;

@end
