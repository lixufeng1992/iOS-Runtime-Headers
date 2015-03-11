/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, NSString, UIImage, UIKeyboardEmojiCategoryController;

@interface UIKeyboardEmojiCategoryBar : UIKBKeyView <UIKeyboardEmojiCategoryControl> {
    UIKeyboardEmojiCategoryController *_categoryController;
    UIImage *_darkDivider;
    int _dividerTotal;
    NSMutableArray *_dividerViews;
    UIImage *_plainDivider;
    NSMutableArray *_segmentViews;
    int _selected;
    UIImage *_selectedDivider;
    int _total;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property int selectedIndex;
@property(readonly) Class superclass;

- (void)dealloc;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForDivider:(int)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 keyplane:(id)arg2 key:(id)arg3;
- (void)releaseImagesAndViews;
- (int)selectedIndex;
- (void)sendActionsForControlEvents:(unsigned int)arg1;
- (void)setCategory:(id)arg1;
- (void)setSelectedIndex:(int)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end
