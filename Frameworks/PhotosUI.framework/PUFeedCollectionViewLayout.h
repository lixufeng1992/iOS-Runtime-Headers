/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class NSMutableArray;

@interface PUFeedCollectionViewLayout : UICollectionViewLayout {
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _captionPadding;
    } _contentSize;
    } _floatPadding;
    float _floatingBottomDecorationHeight;
    int _flowDirection;
    } _interTileSpacing;
    } _noCaptionSpacing;
    float _sectionHeaderBackgroundHeight;
    NSMutableArray *_sectionLayoutInfos;
    } _sectionReferenceSize;
    BOOL _shouldDisplayCaptionsBelowBatches;
    BOOL _shouldDisplaySectionHeadersBelowSections;
    BOOL _shouldFloatOverShortDistances;
    BOOL _shouldFloatSectionHeaders;
    BOOL _shouldFloatThumbnails;
    BOOL _shouldFloatWithEase;
    float _thumbnailSpacing;
}

@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } captionPadding;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } floatPadding;
@property float floatingBottomDecorationHeight;
@property int flowDirection;
@property(readonly) unsigned int flowDirectionEdge;
@property struct CGSize { float x1; float x2; } interTileSpacing;
@property struct CGSize { float x1; float x2; } noCaptionSpacing;
@property float sectionHeaderBackgroundHeight;
@property struct CGSize { float x1; float x2; } sectionReferenceSize;
@property BOOL shouldDisplayCaptionsBelowBatches;
@property BOOL shouldDisplaySectionHeadersBelowSections;
@property BOOL shouldFloatOverShortDistances;
@property BOOL shouldFloatSectionHeaders;
@property BOOL shouldFloatThumbnails;
@property BOOL shouldFloatWithEase;
@property float thumbnailSpacing;

- (void).cxx_destruct;
- (void)_adjustFloatingLayoutAttributes:(id)arg1 inSection:(int)arg2;
- (id)_delegate;
- (void)_enumerateSectionsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withBlock:(id)arg2;
- (void)_getSize:(out struct CGSize { float x1; float x2; }*)arg1 headerSize:(out struct CGSize { float x1; float x2; }*)arg2 footerSize:(out struct CGSize { float x1; float x2; }*)arg3 fixedLayoutAttributes:(id)arg4 tileLayoutAttributes:(id)arg5 floatingLayoutAttributes:(id)arg6 type:(out int*)arg7 forSection:(int)arg8 isJoined:(BOOL)arg9;
- (void)_getSizeForHorizontalFlowDirection:(out struct CGSize { float x1; float x2; }*)arg1 headerSize:(out struct CGSize { float x1; float x2; }*)arg2 footerSize:(out struct CGSize { float x1; float x2; }*)arg3 fixedLayoutAttributes:(id)arg4 tileLayoutAttributes:(id)arg5 floatingLayoutAttributes:(id)arg6 type:(out int*)arg7 forSection:(int)arg8 isJoined:(BOOL)arg9;
- (void)_getSizeForVerticalFlowDirection:(out struct CGSize { float x1; float x2; }*)arg1 headerSize:(out struct CGSize { float x1; float x2; }*)arg2 footerSize:(out struct CGSize { float x1; float x2; }*)arg3 fixedLayoutAttributes:(id)arg4 tileLayoutAttributes:(id)arg5 floatingLayoutAttributes:(id)arg6 type:(out int*)arg7 forSection:(int)arg8 isJoined:(BOOL)arg9;
- (void)_sectionAtIndex:(int)arg1 sizeDidChangeFrom:(struct CGSize { float x1; float x2; })arg2 to:(struct CGSize { float x1; float x2; })arg3;
- (void)_updateGlobalLayoutInfoWithOptions:(int)arg1 sectionsWithUpdatedGroupIDs:(out id*)arg2;
- (void)_updateLayoutInfoForSection:(int)arg1 ignoreSizeChange:(BOOL)arg2;
- (void)_updateSectionLayoutInfosIfNecessary;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })captionPadding;
- (struct CGSize { float x1; float x2; })collectionViewContentSize;
- (void)enumerateImageElementsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 usingBlock:(id)arg2;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })floatPadding;
- (float)floatingBottomDecorationHeight;
- (int)flowDirection;
- (unsigned int)flowDirectionEdge;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForSection:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForTileAtIndexPath:(id)arg1;
- (id)indexPathForImageElementAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })interTileSpacing;
- (void)invalidateLayoutAndCache;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (struct CGSize { float x1; float x2; })noCaptionSpacing;
- (int)numberOfTilesOmittedInSection:(int)arg1;
- (void)prepareLayout;
- (float)sectionHeaderBackgroundHeight;
- (struct CGSize { float x1; float x2; })sectionReferenceSize;
- (id)sectionsJoinedWithSection:(int)arg1;
- (void)setCaptionPadding:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setFloatPadding:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setFloatingBottomDecorationHeight:(float)arg1;
- (void)setFlowDirection:(int)arg1;
- (void)setInterTileSpacing:(struct CGSize { float x1; float x2; })arg1;
- (void)setNoCaptionSpacing:(struct CGSize { float x1; float x2; })arg1;
- (void)setSectionHeaderBackgroundHeight:(float)arg1;
- (void)setSectionReferenceSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setShouldDisplayCaptionsBelowBatches:(BOOL)arg1;
- (void)setShouldDisplaySectionHeadersBelowSections:(BOOL)arg1;
- (void)setShouldFloatOverShortDistances:(BOOL)arg1;
- (void)setShouldFloatSectionHeaders:(BOOL)arg1;
- (void)setShouldFloatThumbnails:(BOOL)arg1;
- (void)setShouldFloatWithEase:(BOOL)arg1;
- (void)setThumbnailSpacing:(float)arg1;
- (BOOL)shouldDisplayCaptionsBelowBatches;
- (BOOL)shouldDisplaySectionHeadersBelowSections;
- (BOOL)shouldFloatOverShortDistances;
- (BOOL)shouldFloatSectionHeaders;
- (BOOL)shouldFloatThumbnails;
- (BOOL)shouldFloatWithEase;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)thumbnailSpacing;
- (void)updateCollectionViewWithDeletedSections:(id)arg1 insertedSections:(id)arg2 updatedSections:(id)arg3;

@end
