/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray, NSAttributedString, NSLayoutManager, NSParagraphStyle, NSTextContainer;

@interface NSATSTypesetter : NSTypesetter {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    struct CGSize { 
        float width; 
        float height; 
    void *_atsReserved[8];
    id _private;
    NSAttributedString *attributedString;
    NSParagraphStyle *currentParagraphStyle;
    NSTextContainer *currentTextContainer;
    unsigned int currentTextContainerIndex;
    } currentTextContainerSize;
    NSLayoutManager *layoutManager;
    float lineFragmentPadding;
    } paragraphGlyphRange;
    } paragraphSeparatorGlyphRange;
    NSArray *textContainers;
}

+ (BOOL)_allowsScreenFontKerning;
+ (void)initialize;
+ (id)sharedInstance;
+ (id)sharedTypesetter;

- (struct { struct { /* ? */ } *x1; struct _NSRange { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; struct _NSRange { unsigned int x_3_1_1; unsigned int x_3_1_2; } x3; float x4; float x5; int (*x6)(); int (*x7)(); float x8; float x9; float x10; float x11; float x12; float x13; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_14_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_14_1_2; } x14; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_15_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_15_1_2; } x15; struct _NSRange { unsigned int x_16_1_1; unsigned int x_16_1_2; } x16; id x17; float x18; int x19; struct { unsigned int x_20_1_1 : 4; unsigned int x_20_1_2 : 1; unsigned int x_20_1_3 : 1; unsigned int x_20_1_4 : 1; unsigned int x_20_1_5 : 4; unsigned int x_20_1_6 : 4; unsigned int x_20_1_7 : 1; unsigned int x_20_1_8 : 1; unsigned int x_20_1_9 : 1; unsigned int x_20_1_10 : 1; unsigned int x_20_1_11 : 2; unsigned int x_20_1_12 : 1; unsigned int x_20_1_13 : 10; } x20; void *x21[0]; }*)_allocateAuxData;
- (int)_baseWritingDirection;
- (BOOL)_baselineRenderingMode;
- (const char *)_bidiLevels;
- (struct __CTTypesetter { }*)_ctTypesetter;
- (void)_doBidiProcessing;
- (void)_flushCachedObjects;
- (BOOL)_forceWordWrapping;
- (id)_getATSTypesetterGuts;
- (BOOL)_layoutLineFragmentStartingWithGlyphAtIndex:(unsigned int*)arg1 characterIndex:(unsigned int*)arg2 atPoint:(struct CGPoint { float x1; float x2; }*)arg3 renderingContext:(id*)arg4;
- (union { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; int x_1_1_4; } x1; struct { struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_2_1_1; } x2; }*)_lineFragmentRectForProposedRectArgs;
- (void)_setBaselineRenderingMode:(BOOL)arg1;
- (void)_setForceWordWrapping:(BOOL)arg1;
- (unsigned int)_sweepDirectionForGlyphAtIndex:(long)arg1;
- (BOOL)_usesScreenFonts;
- (unsigned int)actionForControlCharacterAtIndex:(unsigned int)arg1;
- (float)baselineOffsetInLayoutManager:(id)arg1 glyphIndex:(unsigned int)arg2;
- (void)beginLineWithGlyphAtIndex:(unsigned int)arg1;
- (void)beginParagraph;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingBoxForControlGlyphAtIndex:(unsigned int)arg1 forTextContainer:(id)arg2 proposedLineFragment:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 glyphPosition:(struct CGPoint { float x1; float x2; })arg4 characterIndex:(unsigned int)arg5;
- (void)dealloc;
- (float)defaultTighteningFactor;
- (void)endLineWithGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)endParagraph;
- (unsigned long)hyphenCharacterForGlyphAtIndex:(unsigned int)arg1;
- (float)hyphenationFactorForGlyphAtIndex:(unsigned int)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })layoutCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 forLayoutManager:(id)arg2 maximumNumberOfLineFragments:(unsigned int)arg3;
- (void)layoutGlyphsInLayoutManager:(id)arg1 startingAtGlyphIndex:(unsigned int)arg2 maxNumberOfLineFragments:(unsigned int)arg3 nextGlyphIndex:(unsigned int*)arg4;
- (unsigned int)layoutParagraphAtPoint:(struct CGPoint { float x1; float x2; }*)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })lineFragmentRectForProposedRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 remainingRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2;
- (void)setDefaultTighteningFactor:(float)arg1;
- (BOOL)shouldBreakLineByHyphenatingBeforeCharacterAtIndex:(unsigned int)arg1;
- (BOOL)shouldBreakLineByWordBeforeCharacterAtIndex:(unsigned int)arg1;

@end
