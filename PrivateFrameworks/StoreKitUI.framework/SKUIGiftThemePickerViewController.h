/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, NSString, SKUIGiftThemeCollectionView, UIImage, UIPageControl, UITapGestureRecognizer;

@interface SKUIGiftThemePickerViewController : SKUIGiftStepViewController <SKUIGiftConfigurationObserver, UICollectionViewDataSource, UICollectionViewDelegate> {
    BOOL _animatingScrollView;
    SKUIGiftThemeCollectionView *_collectionView;
    UIImage *_itemImage;
    UIPageControl *_pageControl;
    int _selectedThemeIndex;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSArray *_themes;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_backgroundTapAction:(id)arg1;
- (id)_collectionView;
- (void)_nextAction:(id)arg1;
- (void)_setItemImage:(id)arg1 error:(id)arg2;
- (void)_setSelectedThemeIndex:(int)arg1 animated:(BOOL)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)dealloc;
- (void)giftConfigurationController:(id)arg1 didLoadImageForTheme:(id)arg2;
- (id)initWithGift:(id)arg1 configuration:(id)arg2;
- (void)loadView;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end
