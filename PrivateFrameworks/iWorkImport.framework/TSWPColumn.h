/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <TSWPStyleProvider>, NSString, TSWPStorage;

@interface TSWPColumn : NSObject <TSWPOffscreenColumn> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    struct shared_ptr<TSWPLineFragmentArray> { 
        struct TSWPLineFragmentArray {} *px; 
        struct shared_count { 
            struct sp_counted_base {} *pi_; 
        } pn; 
    unsigned int _anchoredCharCount;
    unsigned int _characterCount;
    unsigned int _columnIndex;
    float _contentBottom;
    float _erasableContentBottom;
    } _frameBounds;
    int _layoutResultFlags;
    } _lineFragmentArray;
    unsigned int _nextWidowPullsDownFromCharIndex;
    unsigned int _pageNumber;
    void *_paragraphAdornments;
    unsigned int _scaleTextPercent;
    unsigned int _startAnchoredCharIndex;
    unsigned int _startCharIndex;
    TSWPStorage *_storage;
    <TSWPStyleProvider> *_styleProvider;
    BOOL _textIsVertical;
    } _transform;
}

@property unsigned int anchoredCharCount;
@property struct _NSRange { unsigned int x1; unsigned int x2; } anchoredRange;
@property unsigned int characterCount;
@property unsigned int columnIndex;
@property float contentBottom;
@property(readonly) unsigned int countLines;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property float erasableContentBottom;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } frameBounds;
@property(readonly) unsigned int hash;
@property int layoutResultFlags;
@property unsigned int nextWidowPullsDownFromCharIndex;
@property unsigned int pageNumber;
@property struct _NSRange { unsigned int x1; unsigned int x2; } range;
@property unsigned int scaleTextPercent;
@property unsigned int startAnchoredCharIndex;
@property unsigned int startCharIndex;
@property(readonly) TSWPStorage * storage;
@property(retain) <TSWPStyleProvider> * styleProvider;
@property(readonly) Class superclass;
@property(readonly) float textBottom;
@property BOOL textIsVertical;
@property struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } transformFromWP;
@property(readonly) struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } transformToWP;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } typographicBoundsForCell;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } wpBounds;

+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsRectForSelection:(id)arg1 columnArray:(id)arg2 includeRuby:(BOOL)arg3;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })caretRectForInsertionPoint:(id)arg1 withColumns:(id)arg2;
+ (unsigned int)charIndexForPoint:(struct CGPoint { float x1; float x2; })arg1 inColumnsArray:(id)arg2 allowPastBreak:(BOOL)arg3 allowNotFound:(BOOL)arg4 isAtEndOfLine:(BOOL*)arg5 leadingEdge:(BOOL*)arg6;
+ (unsigned int)charIndexForPoint:(struct CGPoint { float x1; float x2; })arg1 inColumnsArray:(id)arg2 allowPastBreak:(BOOL)arg3 allowNotFound:(BOOL)arg4 pastCenterGoesToNextChar:(BOOL)arg5 isAtEndOfLine:(BOOL*)arg6 leadingEdge:(BOOL*)arg7;
+ (unsigned int)charIndexForTopicDragAtPoint:(struct CGPoint { float x1; float x2; })arg1 inColumnsArray:(id)arg2;
+ (id)closestColumnInColumnsArray:(id)arg1 forPoint:(struct CGPoint { float x1; float x2; })arg2 ignoreEmptyColumns:(BOOL)arg3 ignoreDrawableOnlyColumns:(BOOL)arg4;
+ (id)columnForCharIndex:(unsigned int)arg1 eol:(BOOL)arg2 withColumns:(id)arg3;
+ (id)footnoteMarkAttachmentInColumnArray:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
+ (id)footnoteReferenceAttachmentInColumnArray:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
+ (id)pathForHighlightWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 columnArray:(id)arg2 pathStyle:(int)arg3;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForSelection:(id)arg1 withColumns:(id)arg2 useParagraphModeRects:(BOOL)arg3;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForSelection:(id)arg1 withColumns:(id)arg2;
+ (id)smartFieldWithAttributeKind:(int)arg1 inColumnArray:(id)arg2 atPoint:(struct CGPoint { float x1; float x2; })arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addAdornmentRect:(const struct TSWPAdornmentRect { int x1; id x2; id x3; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_4_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_4_1_2; } x4; }*)arg1;
- (unsigned int)anchoredCharCount;
- (struct _NSRange { unsigned int x1; unsigned int x2; })anchoredRange;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsOfLineFragmentAtIndex:(unsigned int)arg1;
- (struct _TSWPCharIndexAndPosition { unsigned int x1; int x2; float x3; int x4; float x5; })calcAttachmentPositionForDrawable:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2 inTextLayoutTarget:(id)arg3 tlBoundsInfluencingWrap:(struct CGPoint { float x1; float x2; })arg4 wrapOutset:(struct CGSize { float x1; float x2; })arg5 wrapMargin:(float)arg6 makeInline:(BOOL)arg7;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })caretRectForSelection:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })changeBarRectForLineFragment:(const struct TSWPLineFragment { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; float x5; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_6_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_6_1_2; } x6; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_7_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_7_1_2; } x7; struct { float x_8_1_1; float x_8_1_2; float x_8_1_3; float x_8_1_4; float x_8_1_5; float x_8_1_6; float x_8_1_7; } x8; struct TSWPListLabel {} *x9; id x10; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_11_1_1; struct TSWPLineRef {} *x_11_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_11_1_3; } x11; float x12; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_13_1_1; struct TSWPLineRef {} *x_13_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_13_1_3; } x13; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_14_1_1; struct TSWPLineRef {} *x_14_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_14_1_3; } x14; struct vector<TSWPAdornmentLine, std::__1::allocator<TSWPAdornmentLine> > { struct TSWPAdornmentLine {} *x_15_1_1; struct TSWPAdornmentLine {} *x_15_1_2; struct __compressed_pair<TSWPAdornmentLine *, std::__1::allocator<TSWPAdornmentLine> > { struct TSWPAdornmentLine {} *x_3_2_1; } x_15_1_3; } x15; struct vector<TSWPAdornmentLine, std::__1::allocator<TSWPAdornmentLine> > { struct TSWPAdornmentLine {} *x_16_1_1; struct TSWPAdornmentLine {} *x_16_1_2; struct __compressed_pair<TSWPAdornmentLine *, std::__1::allocator<TSWPAdornmentLine> > { struct TSWPAdornmentLine {} *x_3_2_1; } x_16_1_3; } x16; struct vector<TSWPAdornmentLine, std::__1::allocator<TSWPAdornmentLine> > { struct TSWPAdornmentLine {} *x_17_1_1; struct TSWPAdornmentLine {} *x_17_1_2; struct __compressed_pair<TSWPAdornmentLine *, std::__1::allocator<TSWPAdornmentLine> > { struct TSWPAdornmentLine {} *x_3_2_1; } x_17_1_3; } x17; struct vector<TSWPAdornmentLine, std::__1::allocator<TSWPAdornmentLine> > { struct TSWPAdornmentLine {} *x_18_1_1; struct TSWPAdornmentLine {} *x_18_1_2; struct __compressed_pair<TSWPAdornmentLine *, std::__1::allocator<TSWPAdornmentLine> > { struct TSWPAdornmentLine {} *x_3_2_1; } x_18_1_3; } x18; struct vector<TSWPUIAttachmentData, std::__1::allocator<TSWPUIAttachmentData> > { struct TSWPUIAttachmentData {} *x_19_1_1; struct TSWPUIAttachmentData {} *x_19_1_2; struct __compressed_pair<TSWPUIAttachmentData *, std::__1::allocator<TSWPUIAttachmentData> > { struct TSWPUIAttachmentData {} *x_3_2_1; } x_19_1_3; } x19; struct TSWPTypesettingState {} *x20; float x21; id x22; id x23; struct vector<TSWPAdornments, std::__1::allocator<TSWPAdornments> > { struct TSWPAdornments {} *x_24_1_1; struct TSWPAdornments {} *x_24_1_2; struct __compressed_pair<TSWPAdornments *, std::__1::allocator<TSWPAdornments> > { struct TSWPAdornments {} *x_3_2_1; } x_24_1_3; } x24; struct TSWPAdornmentLine {} *x25; id x26; unsigned int x27; struct vector<TSWPLFCharIndexData, std::__1::allocator<TSWPLFCharIndexData> > { struct { /* ? */ } *x_28_1_1; struct { /* ? */ } *x_28_1_2; struct __compressed_pair<TSWPLFCharIndexData *, std::__1::allocator<TSWPLFCharIndexData> > { struct { /* ? */ } *x_3_2_1; } x_28_1_3; } x28; id x29; float x30; }*)arg1;
- (unsigned int)charIndexForSelectionFromPoint:(struct CGPoint { float x1; float x2; })arg1 isTail:(BOOL)arg2;
- (unsigned int)charIndexFromPoint:(struct CGPoint { float x1; float x2; })arg1 allowPastBreak:(BOOL)arg2 pastCenterGoesToNextChar:(BOOL)arg3 allowNotFound:(BOOL)arg4 isAtEndOfLine:(BOOL*)arg5 leadingEdge:(BOOL*)arg6;
- (unsigned int)charIndexFromPoint:(struct CGPoint { float x1; float x2; })arg1 allowPastBreak:(BOOL)arg2 pastCenterGoesToNextChar:(BOOL)arg3 allowNotFound:(BOOL)arg4 isAtEndOfLine:(BOOL*)arg5 outFragment:(const struct TSWPLineFragment {}**)arg6 leadingEdge:(BOOL*)arg7;
- (unsigned int)charIndexFromWPPoint:(struct CGPoint { float x1; float x2; })arg1 pastCenterGoesToNextChar:(BOOL)arg2 allowNotFound:(BOOL)arg3 outFragment:(const struct TSWPLineFragment {}**)arg4 leadingEdge:(BOOL*)arg5;
- (unsigned int)characterCount;
- (void)clearAdornments;
- (unsigned int)columnIndex;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })columnRectForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (float)contentBottom;
- (unsigned int)countLines;
- (void)dealloc;
- (id)drawableIntersectionRectsForSelection:(id)arg1 inTarget:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })erasableBounds:(unsigned int)arg1;
- (float)erasableContentBottom;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })erasableRectForSelectionRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })firstRectForSelection:(id)arg1 includeSpaceAfter:(BOOL)arg2 includeSpaceBefore:(BOOL)arg3 includeLeading:(BOOL)arg4;
- (unsigned int)fontTraitsForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 includingLabel:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameBounds;
- (unsigned int)glyphCountForRubyFieldAtCharIndex:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })glyphRectForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 includingLabel:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })glyphRectForRubyFieldAtCharIndex:(unsigned int)arg1 glyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (BOOL)hasPartitionedAttachmentAtStart:(BOOL)arg1;
- (float)horizontalOffsetForCharIndex:(unsigned int)arg1 lineFragmentIndex:(unsigned int)arg2 bumpPastHyphen:(BOOL)arg3 allowPastLineBounds:(BOOL)arg4;
- (void)incrementRanges:(int)arg1;
- (id)initWithStorage:(id)arg1 frameBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (int)layoutResultFlags;
- (const struct shared_ptr<TSWPLineFragmentArray> { struct TSWPLineFragmentArray {} *x1; struct shared_count { struct sp_counted_base {} *x_2_1_1; } x2; }*)lineFragmentArray;
- (const struct TSWPLineFragment { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; float x5; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_6_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_6_1_2; } x6; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_7_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_7_1_2; } x7; struct { float x_8_1_1; float x_8_1_2; float x_8_1_3; float x_8_1_4; float x_8_1_5; float x_8_1_6; float x_8_1_7; } x8; struct TSWPListLabel {} *x9; id x10; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_11_1_1; struct TSWPLineRef {} *x_11_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_11_1_3; } x11; float x12; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_13_1_1; struct TSWPLineRef {} *x_13_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_13_1_3; } x13; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_14_1_1; struct TSWPLineRef {} *x_14_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_14_1_3; } x14; struct vector<TSWPAdornmentLine, std::__1::allocator<TSWPAdornmentLine> > { struct TSWPAdornmentLine {} *x_15_1_1; struct TSWPAdornmentLine {} *x_15_1_2; struct __compressed_pair<TSWPAdornmentLine *, std::__1::allocator<TSWPAdornmentLine> > { struct TSWPAdornmentLine {} *x_3_2_1; } x_15_1_3; } x15; struct vector<TSWPAdornmentLine, std::__1::allocator<TSWPAdornmentLine> > { struct TSWPAdornmentLine {} *x_16_1_1; struct TSWPAdornmentLine {} *x_16_1_2; struct __compressed_pair<TSWPAdornmentLine *, std::__1::allocator<TSWPAdornmentLine> > { struct TSWPAdornmentLine {} *x_3_2_1; } x_16_1_3; } x16; struct vector<TSWPAdornmentLine, std::__1::allocator<TSWPAdornmentLine> > { struct TSWPAdornmentLine {} *x_17_1_1; struct TSWPAdornmentLine {} *x_17_1_2; struct __compressed_pair<TSWPAdornmentLine *, std::__1::allocator<TSWPAdornmentLine> > { struct TSWPAdornmentLine {} *x_3_2_1; } x_17_1_3; } x17; struct vector<TSWPAdornmentLine, std::__1::allocator<TSWPAdornmentLine> > { struct TSWPAdornmentLine {} *x_18_1_1; struct TSWPAdornmentLine {} *x_18_1_2; struct __compressed_pair<TSWPAdornmentLine *, std::__1::allocator<TSWPAdornmentLine> > { struct TSWPAdornmentLine {} *x_3_2_1; } x_18_1_3; } x18; struct vector<TSWPUIAttachmentData, std::__1::allocator<TSWPUIAttachmentData> > { struct TSWPUIAttachmentData {} *x_19_1_1; struct TSWPUIAttachmentData {} *x_19_1_2; struct __compressed_pair<TSWPUIAttachmentData *, std::__1::allocator<TSWPUIAttachmentData> > { struct TSWPUIAttachmentData {} *x_3_2_1; } x_19_1_3; } x19; struct TSWPTypesettingState {} *x20; float x21; id x22; id x23; struct vector<TSWPAdornments, std::__1::allocator<TSWPAdornments> > { struct TSWPAdornments {} *x_24_1_1; struct TSWPAdornments {} *x_24_1_2; struct __compressed_pair<TSWPAdornments *, std::__1::allocator<TSWPAdornments> > { struct TSWPAdornments {} *x_3_2_1; } x_24_1_3; } x24; struct TSWPAdornmentLine {} *x25; id x26; unsigned int x27; struct vector<TSWPLFCharIndexData, std::__1::allocator<TSWPLFCharIndexData> > { struct { /* ? */ } *x_28_1_1; struct { /* ? */ } *x_28_1_2; struct __compressed_pair<TSWPLFCharIndexData *, std::__1::allocator<TSWPLFCharIndexData> > { struct { /* ? */ } *x_3_2_1; } x_28_1_3; } x28; id x29; float x30; }*)lineFragmentAtIndex:(unsigned int)arg1;
- (const struct TSWPLineFragment { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; float x5; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_6_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_6_1_2; } x6; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_7_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_7_1_2; } x7; struct { float x_8_1_1; float x_8_1_2; float x_8_1_3; float x_8_1_4; float x_8_1_5; float x_8_1_6; float x_8_1_7; } x8; struct TSWPListLabel {} *x9; id x10; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_11_1_1; struct TSWPLineRef {} *x_11_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_11_1_3; } x11; float x12; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_13_1_1; struct TSWPLineRef {} *x_13_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_13_1_3; } x13; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_14_1_1; struct TSWPLineRef {} *x_14_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_14_1_3; } x14; struct vector<TSWPAdornmentLine, std::__1::allocator<TSWPAdornmentLine> > { struct TSWPAdornmentLine {} *x_15_1_1; struct TSWPAdornmentLine {} *x_15_1_2; struct __compressed_pair<TSWPAdornmentLine *, std::__1::allocator<TSWPAdornmentLine> > { struct TSWPAdornmentLine {} *x_3_2_1; } x_15_1_3; } x15; struct vector<TSWPAdornmentLine, std::__1::allocator<TSWPAdornmentLine> > { struct TSWPAdornmentLine {} *x_16_1_1; struct TSWPAdornmentLine {} *x_16_1_2; struct __compressed_pair<TSWPAdornmentLine *, std::__1::allocator<TSWPAdornmentLine> > { struct TSWPAdornmentLine {} *x_3_2_1; } x_16_1_3; } x16; struct vector<TSWPAdornmentLine, std::__1::allocator<TSWPAdornmentLine> > { struct TSWPAdornmentLine {} *x_17_1_1; struct TSWPAdornmentLine {} *x_17_1_2; struct __compressed_pair<TSWPAdornmentLine *, std::__1::allocator<TSWPAdornmentLine> > { struct TSWPAdornmentLine {} *x_3_2_1; } x_17_1_3; } x17; struct vector<TSWPAdornmentLine, std::__1::allocator<TSWPAdornmentLine> > { struct TSWPAdornmentLine {} *x_18_1_1; struct TSWPAdornmentLine {} *x_18_1_2; struct __compressed_pair<TSWPAdornmentLine *, std::__1::allocator<TSWPAdornmentLine> > { struct TSWPAdornmentLine {} *x_3_2_1; } x_18_1_3; } x18; struct vector<TSWPUIAttachmentData, std::__1::allocator<TSWPUIAttachmentData> > { struct TSWPUIAttachmentData {} *x_19_1_1; struct TSWPUIAttachmentData {} *x_19_1_2; struct __compressed_pair<TSWPUIAttachmentData *, std::__1::allocator<TSWPUIAttachmentData> > { struct TSWPUIAttachmentData {} *x_3_2_1; } x_19_1_3; } x19; struct TSWPTypesettingState {} *x20; float x21; id x22; id x23; struct vector<TSWPAdornments, std::__1::allocator<TSWPAdornments> > { struct TSWPAdornments {} *x_24_1_1; struct TSWPAdornments {} *x_24_1_2; struct __compressed_pair<TSWPAdornments *, std::__1::allocator<TSWPAdornments> > { struct TSWPAdornments {} *x_3_2_1; } x_24_1_3; } x24; struct TSWPAdornmentLine {} *x25; id x26; unsigned int x27; struct vector<TSWPLFCharIndexData, std::__1::allocator<TSWPLFCharIndexData> > { struct { /* ? */ } *x_28_1_1; struct { /* ? */ } *x_28_1_2; struct __compressed_pair<TSWPLFCharIndexData *, std::__1::allocator<TSWPLFCharIndexData> > { struct { /* ? */ } *x_3_2_1; } x_28_1_3; } x28; id x29; float x30; }*)lineFragmentClosestToPoint:(struct CGPoint { float x1; float x2; })arg1 knobTag:(unsigned int)arg2;
- (unsigned int)lineFragmentCountForBaseline:(float)arg1;
- (const struct TSWPLineFragment { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; float x5; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_6_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_6_1_2; } x6; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_7_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_7_1_2; } x7; struct { float x_8_1_1; float x_8_1_2; float x_8_1_3; float x_8_1_4; float x_8_1_5; float x_8_1_6; float x_8_1_7; } x8; struct TSWPListLabel {} *x9; id x10; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_11_1_1; struct TSWPLineRef {} *x_11_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_11_1_3; } x11; float x12; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_13_1_1; struct TSWPLineRef {} *x_13_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_13_1_3; } x13; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_14_1_1; struct TSWPLineRef {} *x_14_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_14_1_3; } x14; struct vector<TSWPAdornmentLine, std::__1::allocator<TSWPAdornmentLine> > { struct TSWPAdornmentLine {} *x_15_1_1; struct TSWPAdornmentLine {} *x_15_1_2; struct __compressed_pair<TSWPAdornmentLine *, std::__1::allocator<TSWPAdornmentLine> > { struct TSWPAdornmentLine {} *x_3_2_1; } x_15_1_3; } x15; struct vector<TSWPAdornmentLine, std::__1::allocator<TSWPAdornmentLine> > { struct TSWPAdornmentLine {} *x_16_1_1; struct TSWPAdornmentLine {} *x_16_1_2; struct __compressed_pair<TSWPAdornmentLine *, std::__1::allocator<TSWPAdornmentLine> > { struct TSWPAdornmentLine {} *x_3_2_1; } x_16_1_3; } x16; struct vector<TSWPAdornmentLine, std::__1::allocator<TSWPAdornmentLine> > { struct TSWPAdornmentLine {} *x_17_1_1; struct TSWPAdornmentLine {} *x_17_1_2; struct __compressed_pair<TSWPAdornmentLine *, std::__1::allocator<TSWPAdornmentLine> > { struct TSWPAdornmentLine {} *x_3_2_1; } x_17_1_3; } x17; struct vector<TSWPAdornmentLine, std::__1::allocator<TSWPAdornmentLine> > { struct TSWPAdornmentLine {} *x_18_1_1; struct TSWPAdornmentLine {} *x_18_1_2; struct __compressed_pair<TSWPAdornmentLine *, std::__1::allocator<TSWPAdornmentLine> > { struct TSWPAdornmentLine {} *x_3_2_1; } x_18_1_3; } x18; struct vector<TSWPUIAttachmentData, std::__1::allocator<TSWPUIAttachmentData> > { struct TSWPUIAttachmentData {} *x_19_1_1; struct TSWPUIAttachmentData {} *x_19_1_2; struct __compressed_pair<TSWPUIAttachmentData *, std::__1::allocator<TSWPUIAttachmentData> > { struct TSWPUIAttachmentData {} *x_3_2_1; } x_19_1_3; } x19; struct TSWPTypesettingState {} *x20; float x21; id x22; id x23; struct vector<TSWPAdornments, std::__1::allocator<TSWPAdornments> > { struct TSWPAdornments {} *x_24_1_1; struct TSWPAdornments {} *x_24_1_2; struct __compressed_pair<TSWPAdornments *, std::__1::allocator<TSWPAdornments> > { struct TSWPAdornments {} *x_3_2_1; } x_24_1_3; } x24; struct TSWPAdornmentLine {} *x25; id x26; unsigned int x27; struct vector<TSWPLFCharIndexData, std::__1::allocator<TSWPLFCharIndexData> > { struct { /* ? */ } *x_28_1_1; struct { /* ? */ } *x_28_1_2; struct __compressed_pair<TSWPLFCharIndexData *, std::__1::allocator<TSWPLFCharIndexData> > { struct { /* ? */ } *x_3_2_1; } x_28_1_3; } x28; id x29; float x30; }*)lineFragmentForCharIndex:(unsigned int)arg1 knobTag:(unsigned int)arg2 selectionType:(int)arg3;
- (unsigned int)lineIndexForCharIndex:(unsigned int)arg1 eol:(BOOL)arg2;
- (struct { struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_1_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_1_1_2; } x1; float x2; float x3; float x4; float x5; })lineMetricsAtCharIndex:(unsigned int)arg1 allowEndOfLine:(BOOL)arg2;
- (id)lineSelectionsForSelection:(id)arg1;
- (float)logicalBoundsBottom;
- (float)logicalBoundsTop;
- (void)makeEmpty:(unsigned int)arg1 layoutResultFlags:(int)arg2;
- (struct CGSize { float x1; float x2; })maxSize;
- (float)minimumHeightForLayoutOnPage;
- (const struct TSWPLineFragment { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; float x5; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_6_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_6_1_2; } x6; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_7_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_7_1_2; } x7; struct { float x_8_1_1; float x_8_1_2; float x_8_1_3; float x_8_1_4; float x_8_1_5; float x_8_1_6; float x_8_1_7; } x8; struct TSWPListLabel {} *x9; id x10; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_11_1_1; struct TSWPLineRef {} *x_11_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_11_1_3; } x11; float x12; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_13_1_1; struct TSWPLineRef {} *x_13_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_13_1_3; } x13; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_14_1_1; struct TSWPLineRef {} *x_14_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_14_1_3; } x14; struct vector<TSWPAdornmentLine, std::__1::allocator<TSWPAdornmentLine> > { struct TSWPAdornmentLine {} *x_15_1_1; struct TSWPAdornmentLine {} *x_15_1_2; struct __compressed_pair<TSWPAdornmentLine *, std::__1::allocator<TSWPAdornmentLine> > { struct TSWPAdornmentLine {} *x_3_2_1; } x_15_1_3; } x15; struct vector<TSWPAdornmentLine, std::__1::allocator<TSWPAdornmentLine> > { struct TSWPAdornmentLine {} *x_16_1_1; struct TSWPAdornmentLine {} *x_16_1_2; struct __compressed_pair<TSWPAdornmentLine *, std::__1::allocator<TSWPAdornmentLine> > { struct TSWPAdornmentLine {} *x_3_2_1; } x_16_1_3; } x16; struct vector<TSWPAdornmentLine, std::__1::allocator<TSWPAdornmentLine> > { struct TSWPAdornmentLine {} *x_17_1_1; struct TSWPAdornmentLine {} *x_17_1_2; struct __compressed_pair<TSWPAdornmentLine *, std::__1::allocator<TSWPAdornmentLine> > { struct TSWPAdornmentLine {} *x_3_2_1; } x_17_1_3; } x17; struct vector<TSWPAdornmentLine, std::__1::allocator<TSWPAdornmentLine> > { struct TSWPAdornmentLine {} *x_18_1_1; struct TSWPAdornmentLine {} *x_18_1_2; struct __compressed_pair<TSWPAdornmentLine *, std::__1::allocator<TSWPAdornmentLine> > { struct TSWPAdornmentLine {} *x_3_2_1; } x_18_1_3; } x18; struct vector<TSWPUIAttachmentData, std::__1::allocator<TSWPUIAttachmentData> > { struct TSWPUIAttachmentData {} *x_19_1_1; struct TSWPUIAttachmentData {} *x_19_1_2; struct __compressed_pair<TSWPUIAttachmentData *, std::__1::allocator<TSWPUIAttachmentData> > { struct TSWPUIAttachmentData {} *x_3_2_1; } x_19_1_3; } x19; struct TSWPTypesettingState {} *x20; float x21; id x22; id x23; struct vector<TSWPAdornments, std::__1::allocator<TSWPAdornments> > { struct TSWPAdornments {} *x_24_1_1; struct TSWPAdornments {} *x_24_1_2; struct __compressed_pair<TSWPAdornments *, std::__1::allocator<TSWPAdornments> > { struct TSWPAdornments {} *x_3_2_1; } x_24_1_3; } x24; struct TSWPAdornmentLine {} *x25; id x26; unsigned int x27; struct vector<TSWPLFCharIndexData, std::__1::allocator<TSWPLFCharIndexData> > { struct { /* ? */ } *x_28_1_1; struct { /* ? */ } *x_28_1_2; struct __compressed_pair<TSWPLFCharIndexData *, std::__1::allocator<TSWPLFCharIndexData> > { struct { /* ? */ } *x_3_2_1; } x_28_1_3; } x28; id x29; float x30; }*)nearestLineFragmentWithSameVerticalPositionAs:(unsigned int)arg1 xPos:(float)arg2;
- (unsigned int)nextWidowPullsDownFromCharIndex;
- (void)normalizeLineFragmentOrigins:(struct CGPoint { float x1; float x2; })arg1;
- (void)offsetLineFragmentsByPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)onlyHasAnchoredDrawable;
- (BOOL)onlyHasPartitionedAttachments;
- (const struct TSWPLineFragment { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; float x5; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_6_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_6_1_2; } x6; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_7_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_7_1_2; } x7; struct { float x_8_1_1; float x_8_1_2; float x_8_1_3; float x_8_1_4; float x_8_1_5; float x_8_1_6; float x_8_1_7; } x8; struct TSWPListLabel {} *x9; id x10; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_11_1_1; struct TSWPLineRef {} *x_11_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_11_1_3; } x11; float x12; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_13_1_1; struct TSWPLineRef {} *x_13_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_13_1_3; } x13; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_14_1_1; struct TSWPLineRef {} *x_14_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_14_1_3; } x14; struct vector<TSWPAdornmentLine, std::__1::allocator<TSWPAdornmentLine> > { struct TSWPAdornmentLine {} *x_15_1_1; struct TSWPAdornmentLine {} *x_15_1_2; struct __compressed_pair<TSWPAdornmentLine *, std::__1::allocator<TSWPAdornmentLine> > { struct TSWPAdornmentLine {} *x_3_2_1; } x_15_1_3; } x15; struct vector<TSWPAdornmentLine, std::__1::allocator<TSWPAdornmentLine> > { struct TSWPAdornmentLine {} *x_16_1_1; struct TSWPAdornmentLine {} *x_16_1_2; struct __compressed_pair<TSWPAdornmentLine *, std::__1::allocator<TSWPAdornmentLine> > { struct TSWPAdornmentLine {} *x_3_2_1; } x_16_1_3; } x16; struct vector<TSWPAdornmentLine, std::__1::allocator<TSWPAdornmentLine> > { struct TSWPAdornmentLine {} *x_17_1_1; struct TSWPAdornmentLine {} *x_17_1_2; struct __compressed_pair<TSWPAdornmentLine *, std::__1::allocator<TSWPAdornmentLine> > { struct TSWPAdornmentLine {} *x_3_2_1; } x_17_1_3; } x17; struct vector<TSWPAdornmentLine, std::__1::allocator<TSWPAdornmentLine> > { struct TSWPAdornmentLine {} *x_18_1_1; struct TSWPAdornmentLine {} *x_18_1_2; struct __compressed_pair<TSWPAdornmentLine *, std::__1::allocator<TSWPAdornmentLine> > { struct TSWPAdornmentLine {} *x_3_2_1; } x_18_1_3; } x18; struct vector<TSWPUIAttachmentData, std::__1::allocator<TSWPUIAttachmentData> > { struct TSWPUIAttachmentData {} *x_19_1_1; struct TSWPUIAttachmentData {} *x_19_1_2; struct __compressed_pair<TSWPUIAttachmentData *, std::__1::allocator<TSWPUIAttachmentData> > { struct TSWPUIAttachmentData {} *x_3_2_1; } x_19_1_3; } x19; struct TSWPTypesettingState {} *x20; float x21; id x22; id x23; struct vector<TSWPAdornments, std::__1::allocator<TSWPAdornments> > { struct TSWPAdornments {} *x_24_1_1; struct TSWPAdornments {} *x_24_1_2; struct __compressed_pair<TSWPAdornments *, std::__1::allocator<TSWPAdornments> > { struct TSWPAdornments {} *x_3_2_1; } x_24_1_3; } x24; struct TSWPAdornmentLine {} *x25; id x26; unsigned int x27; struct vector<TSWPLFCharIndexData, std::__1::allocator<TSWPLFCharIndexData> > { struct { /* ? */ } *x_28_1_1; struct { /* ? */ } *x_28_1_2; struct __compressed_pair<TSWPLFCharIndexData *, std::__1::allocator<TSWPLFCharIndexData> > { struct { /* ? */ } *x_3_2_1; } x_28_1_3; } x28; id x29; float x30; }*)pColumnEndingPartitionedLineFragmentInSelectionRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)pMutableRectsForSelectionRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 selectionType:(int)arg2 includeSpaceAfter:(BOOL)arg3 includeSpaceBefore:(BOOL)arg4 includeLeading:(BOOL)arg5 forParagraphMode:(BOOL)arg6 includeRuby:(BOOL)arg7 inranges:(id)arg8 outranges:(id*)arg9;
- (unsigned int)pageNumber;
- (id)partitionedLayoutForInfo:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeOfLineFragmentAtIndex:(unsigned int)arg1;
- (id)rectsForSelection:(id)arg1 ranges:(id*)arg2;
- (id)rectsForSelection:(id)arg1;
- (id)rectsForSelectionRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 selectionType:(int)arg2 forParagraphMode:(BOOL)arg3 includeRuby:(BOOL)arg4;
- (id)rectsForSelectionRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 selectionType:(int)arg2 forParagraphMode:(BOOL)arg3;
- (id)rectsForSelectionRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 selectionType:(int)arg2;
- (id)rectsForSelectionRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)rectsForSelectionRanges:(id)arg1 selectionType:(int)arg2;
- (void)renderWithRenderer:(id)arg1 currentSelection:(id)arg2 limitSelection:(id)arg3 listRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4 rubyGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg5 isCanvasInteractive:(BOOL)arg6 suppressedMisspellingRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg7 blackAndWhite:(BOOL)arg8 dictationInterpretations:(const struct TSWPRangeVector { struct _NSRange {} *x1; struct _NSRange {} *x2; struct __compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > { struct _NSRange {} *x_3_1_1; } x3; }*)arg9 autocorrections:(const struct TSWPRangeVector { struct _NSRange {} *x1; struct _NSRange {} *x2; struct __compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > { struct _NSRange {} *x_3_1_1; } x3; }*)arg10 markedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg11 markedText:(id)arg12 renderMode:(int)arg13 pageCount:(unsigned int)arg14 suppressInvisibles:(BOOL)arg15 currentCanvasSelection:(id)arg16;
- (void)renderWithRenderer:(id)arg1 pageCount:(unsigned int)arg2;
- (BOOL)requiresGlyphVectorsForHeightMeasurement;
- (unsigned int)scaleTextPercent;
- (void)setAnchoredCharCount:(unsigned int)arg1;
- (void)setAnchoredRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setCharacterCount:(unsigned int)arg1;
- (void)setColumnIndex:(unsigned int)arg1;
- (void)setContentBottom:(float)arg1;
- (void)setErasableContentBottom:(float)arg1;
- (void)setLayoutResultFlags:(int)arg1;
- (void)setLineFragmentArray:(const struct shared_ptr<TSWPLineFragmentArray> { struct TSWPLineFragmentArray {} *x1; struct shared_count { struct sp_counted_base {} *x_2_1_1; } x2; }*)arg1;
- (void)setNextWidowPullsDownFromCharIndex:(unsigned int)arg1;
- (void)setPageNumber:(unsigned int)arg1;
- (void)setRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setScaleTextPercent:(unsigned int)arg1;
- (void)setStartAnchoredCharIndex:(unsigned int)arg1;
- (void)setStartCharIndex:(unsigned int)arg1;
- (void)setStyleProvider:(id)arg1;
- (void)setTextIsVertical:(BOOL)arg1;
- (void)setTransformFromWP:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)setWpBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)singleLinePartitionedInfoAtStart:(BOOL)arg1;
- (id)smartFieldAtCharIndex:(unsigned int)arg1 attributeKind:(int)arg2;
- (unsigned int)startAnchoredCharIndex;
- (unsigned int)startCharIndex;
- (id)storage;
- (id)styleProvider;
- (float)textBottom;
- (float)textHeight;
- (BOOL)textIsVertical;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformFromWP;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformToWP;
- (void)trimToCharIndex:(unsigned int)arg1 inTarget:(id)arg2 removeFootnoteLayoutCount:(unsigned int)arg3 removeAutoNumberFootnoteCount:(unsigned int)arg4;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })typographicBoundsForCell;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })wpBounds;

@end
