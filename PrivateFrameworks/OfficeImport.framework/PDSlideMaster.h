/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray, OADColorMap, OADTextListStyle, OADTheme;

@interface PDSlideMaster : PDSlideBase {
    OADTextListStyle *mBodyTextStyle;
    OADColorMap *mColorMap;
    BOOL mDateTimePlaceholderIsVisible;
    BOOL mFooterPlaceholderIsVisible;
    BOOL mHeaderPlaceholderIsVisible;
    OADTextListStyle *mOtherTextStyle;
    NSMutableArray *mSlideLayouts;
    BOOL mSlideNumberPlaceholderIsVisible;
    OADTheme *mTheme;
    OADTextListStyle *mTitleTextStyle;
}

@property BOOL dateTimePlaceholderIsVisible;
@property BOOL footerPlaceholderIsVisible;
@property BOOL headerPlaceholderIsVisible;
@property(retain) NSMutableArray * slideLayouts;
@property BOOL slideNumberPlaceholderIsVisible;

- (void)addSlideLayout:(id)arg1;
- (id)addSlideLayout;
- (id)bodyTextStyle;
- (id)colorMap;
- (id)colorScheme;
- (BOOL)dateTimePlaceholderIsVisible;
- (void)dealloc;
- (id)defaultTheme;
- (void)doneWithContent;
- (id)drawingTheme;
- (id)fontScheme;
- (BOOL)footerPlaceholderIsVisible;
- (BOOL)hasMappableSlideNumberShape;
- (BOOL)headerPlaceholderIsVisible;
- (id)init;
- (id)initWithDefaultsAndTheme:(id)arg1;
- (id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)otherTextStyle;
- (id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)parentSlideBase;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(BOOL)arg4;
- (id)parentTextStyleForTables;
- (id)placeholderWithType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (void)setBodyTextStyle:(id)arg1;
- (void)setDateTimePlaceholderIsVisible:(BOOL)arg1;
- (void)setFooterPlaceholderIsVisible:(BOOL)arg1;
- (void)setHeaderPlaceholderIsVisible:(BOOL)arg1;
- (void)setOtherTextStyle:(id)arg1;
- (void)setSlideLayouts:(id)arg1;
- (void)setSlideNumberPlaceholderIsVisible:(BOOL)arg1;
- (void)setTheme:(id)arg1;
- (void)setTitleTextStyle:(id)arg1;
- (id)slideLayoutAtIndex:(unsigned int)arg1;
- (unsigned int)slideLayoutCount;
- (id)slideLayoutOfType:(int)arg1;
- (id)slideLayouts;
- (BOOL)slideNumberPlaceholderIsVisible;
- (id)styleMatrix;
- (id)theme;
- (id)titleTextStyle;

@end
