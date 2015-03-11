/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, _UIFlowLayoutSection;

@interface _UIFlowLayoutRow : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    float _availableSpace;
    BOOL _complete;
    BOOL _fixedItemSize;
    int _horizontalAlignement;
    int _index;
    BOOL _isValid;
    NSMutableArray *_items;
    } _rowFrame;
    } _rowSize;
    _UIFlowLayoutSection *_section;
    int _verticalAlignement;
}

@property float availableSpace;
@property BOOL complete;
@property BOOL fixedItemSize;
@property int index;
@property(readonly) NSMutableArray * items;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } rowFrame;
@property struct CGSize { float x1; float x2; } rowSize;
@property _UIFlowLayoutSection * section;

- (void)addItem:(id)arg1 atEnd:(BOOL)arg2;
- (float)availableSpace;
- (BOOL)complete;
- (id)copyFromSection:(id)arg1;
- (void)dealloc;
- (BOOL)fixedItemSize;
- (int)index;
- (int)indexOfNearestItemAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)init;
- (void)insertItem:(id)arg1 atIndex:(int)arg2;
- (void)invalidate;
- (id)items;
- (void)layoutRow;
- (void)removeItemAtIndex:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rowFrame;
- (struct CGSize { float x1; float x2; })rowSize;
- (id)section;
- (void)setAvailableSpace:(float)arg1;
- (void)setComplete:(BOOL)arg1;
- (void)setFixedItemSize:(BOOL)arg1;
- (void)setIndex:(int)arg1;
- (void)setRowFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setRowSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setSection:(id)arg1;
- (id)snapshot;

@end
