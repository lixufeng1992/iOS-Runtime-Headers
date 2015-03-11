/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class KNSlideNode, NSArray, NSMutableArray, NSMutableDictionary, TSUPointerKeyDictionary;

@interface KNSlideTree : TSPContainedObject {
    NSMutableArray *mDisplayedSlideNodeCache;
    TSUPointerKeyDictionary *mFormulaReferenceNamesForSlideNodesCache;
    KNSlideNode *mRootSlideNode;
    NSMutableArray *mSlideNodeCache;
    NSMutableDictionary *mSlideNodesForFormulaReferenceNamesCache;
    NSMutableDictionary *mSlideNodesForUniqueIdentifiersCache;
}

@property(retain) NSArray * displayedSlideNodes;
@property(retain) KNSlideNode * rootSlideNode;
@property(readonly) NSArray * slideNodes;
@property(readonly) NSArray * visibleSlideNodes;

- (void)addSlideNode:(id)arg1 atDepth:(int)arg2 dolcContext:(id)arg3;
- (unsigned int)byBuildPageIndexForSlideIndex:(unsigned int)arg1 andEventIndex:(unsigned int)arg2;
- (void)dealloc;
- (id)displayedSlideNodes;
- (id)formulaReferenceNameForSlideNode:(id)arg1;
- (unsigned int)indexOfSlideNode:(id)arg1;
- (id)initWithArchive:(const struct SlideTreeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Reference {} *x3; int x4; unsigned int x5[1]; }*)arg1 unarchiver:(id)arg2 owner:(id)arg3;
- (id)initWithOwner:(id)arg1;
- (void)insertSlideNode:(id)arg1 intoSlideNode:(id)arg2 atIndex:(unsigned int)arg3 dolcContext:(id)arg4;
- (void)invalidateSlideNameCache;
- (void)moveSlideNode:(id)arg1 inSlideNode:(id)arg2 toIndex:(unsigned int)arg3;
- (unsigned int)numberOfSlidesUsingMasterSlide:(id)arg1;
- (id)orderedSlideNodesInSelection:(id)arg1;
- (void)p_addSlideNodeAndDescendantsOfSlideNode:(id)arg1 toArray:(id)arg2 slideNodesForUniqueIdentifiersDictionary:(id)arg3 slideNodesForFormulaReferencesDictionary:(id)arg4 formulaReferenceNamesForSlideNodesDictionary:(id)arg5 visibleSlidesSoFar:(unsigned int*)arg6 hiddenSlidesSoFar:(unsigned int*)arg7;
- (void)p_addSlideNodeAndDescendantsOfSlideNode:(id)arg1 toArray:(id)arg2 slideNodesForUniqueIdentifiersDictionary:(id)arg3 slideNodesForFormulaReferencesDictionary:(id)arg4 formulaReferenceNamesForSlideNodesDictionary:(id)arg5;
- (void)p_cacheSlideNodes;
- (void)p_clearSlideNodeCache;
- (void)reloadDisplayedNodes;
- (void)removeAll;
- (void)removeSlideNode:(id)arg1 fromSlideNode:(id)arg2;
- (id)rootSlideNode;
- (void)saveToArchive:(struct SlideTreeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Reference {} *x3; int x4; unsigned int x5[1]; }*)arg1 archiver:(id)arg2;
- (void)setDisplayedSlideNodes:(id)arg1;
- (void)setRootSlideNode:(id)arg1;
- (void)slideIndex:(unsigned int*)arg1 andEventIndex:(unsigned int*)arg2 forByBuildPageIndex:(unsigned int)arg3;
- (id)slideNamesMatchingPrefix:(id)arg1;
- (id)slideNodeAtIndex:(unsigned int)arg1 ignoreHiddenNodes:(BOOL)arg2;
- (id)slideNodeForFormulaReferenceName:(id)arg1 caseSensitive:(BOOL)arg2;
- (id)slideNodeWithUniqueIdentifier:(id)arg1;
- (id)slideNodes;
- (unsigned int)slideNumberForSlideNode:(id)arg1;
- (id)slidesUsingMasterSlide:(id)arg1;
- (id)unhiddenSlideNodeAtIndex:(unsigned int)arg1;
- (unsigned int)visiblePageCountIsSeparatedByBuilds:(BOOL)arg1;
- (id)visibleSlideNodes;

@end
