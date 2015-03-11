/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class NSMutableArray, NSMutableDictionary;

@interface PUCollectionViewData : NSObject {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    int _cachedPageCount;
    } _currentContentBounds;
    NSMutableArray *_itemLayoutAttributes;
    NSMutableDictionary *_itemLayoutAttributesByIndexPath;
}

@property(readonly) int cachedPageCount;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } currentContentBounds;
@property(readonly) NSMutableArray * itemLayoutAttributes;
@property(readonly) NSMutableDictionary * itemLayoutAttributesByIndexPath;

- (void).cxx_destruct;
- (int)cachedPageCount;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })currentContentBounds;
- (BOOL)hasReferenceIndexPath;
- (id)init;
- (void)invalidate;
- (id)itemLayoutAttributes;
- (id)itemLayoutAttributesByIndexPath;
- (void)setCurrentContentBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
