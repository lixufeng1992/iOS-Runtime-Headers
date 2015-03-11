/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class CMOutlineState, NSMutableDictionary, WDText;

@interface WMState : CMState {
    CMOutlineState *currentListState;
    NSMutableDictionary *listStates;
    unsigned int mBlockIndex;
    unsigned int mCurrentPage;
    BOOL mIsFrame;
    BOOL mIsFrameEnd;
    BOOL mIsFrameStart;
    BOOL mIsHeaderOrFooter;
    WDText *mLastFooter;
    WDText *mLastHeader;
    float mLeftMargin;
    float mPageHeight;
    unsigned int mRunIndex;
    float mTopMargin;
    float mTotalPageHeight;
    CMOutlineState *outlineState;
}

- (unsigned int)blockIndex;
- (void)clearCurrentListState;
- (id)currentListState;
- (unsigned int)currentPage;
- (void)dealloc;
- (id)init;
- (BOOL)isCurrentListId:(unsigned int)arg1;
- (BOOL)isCurrentListStateOverridden;
- (BOOL)isFrame;
- (BOOL)isFrameEnd;
- (BOOL)isFrameStart;
- (BOOL)isHeaderOrFooter;
- (id)lastFooter;
- (id)lastHeader;
- (float)leftMargin;
- (id)listStateForListId:(unsigned int)arg1;
- (id)listStateForListWithId:(long)arg1 settingUpStateIfNeededWithDocument:(id)arg2;
- (id)outlineState;
- (float)pageHeight;
- (float)pageOffset;
- (unsigned int)runIndex;
- (void)setBlockIndex:(unsigned int)arg1;
- (void)setCurrentListState:(id)arg1;
- (void)setCurrentPage:(unsigned int)arg1;
- (void)setIsFrame:(BOOL)arg1;
- (void)setIsFrameEnd:(BOOL)arg1;
- (void)setIsFrameStart:(BOOL)arg1;
- (void)setIsHeaderOrFooter:(BOOL)arg1;
- (void)setLastFooter:(id)arg1;
- (void)setLastHeader:(id)arg1;
- (void)setLeftMargin:(float)arg1;
- (void)setListState:(id)arg1 forListId:(unsigned int)arg2;
- (void)setPageHeight:(float)arg1;
- (void)setRunIndex:(unsigned int)arg1;
- (void)setTopMargin:(float)arg1;
- (void)setTotalPageHeight:(float)arg1;
- (float)topMargin;
- (float)totalPageHeight;

@end
