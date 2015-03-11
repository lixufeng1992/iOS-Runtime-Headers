/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMutableIndexSet : NSIndexSet {
    void *_reserved;
}

- (void)__ck_intersectIndexes:(id)arg1;
- (void)_addRangeToArray:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)_ensureRangeCapacity:(unsigned int)arg1;
- (void)_incrementBy:(unsigned int)arg1 startingAtIndex:(unsigned int)arg2;
- (void)_insertRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 inArrayAtIndex:(unsigned int)arg2;
- (void)_mergeOverlappingRangesStartingAtIndex:(unsigned int)arg1;
- (void)_removeAndDecrementBy:(unsigned int)arg1 startingAtIndex:(unsigned int)arg2;
- (void)_removeRangeInArrayAtIndex:(unsigned int)arg1;
- (void)_replaceRangeInArrayAtIndex:(unsigned int)arg1 withRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)addIndex:(unsigned int)arg1;
- (void)addIndexes:(const unsigned int*)arg1 count:(unsigned int)arg2;
- (void)addIndexes:(id)arg1;
- (void)addIndexesFromIndexSet:(id)arg1;
- (void)addIndexesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (Class)classForCoder;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)intersectionWithIndexSet:(id)arg1;
- (void)intersectionWithIndexSet:(id)arg1;
- (void)mf_intersectIndexes:(id)arg1;
- (void)moveIndexesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 toOffset:(unsigned int)arg2;
- (void)moveIndexesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 toOffset:(unsigned int)arg2;
- (void)pl_adjustIndexesForDeletions:(id)arg1;
- (void)pl_adjustIndexesForInsertions:(id)arg1;
- (void)removeAllIndexes;
- (void)removeIndex:(unsigned int)arg1;
- (void)removeIndexes:(id)arg1;
- (void)removeIndexesFromIndexSet:(id)arg1;
- (void)removeIndexesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 options:(unsigned int)arg2 passingTest:(id)arg3;
- (void)removeIndexesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)removeIndexesPassingTest:(id)arg1;
- (void)removeIndexesWithOptions:(unsigned int)arg1 passingTest:(id)arg2;
- (void)shiftIndexesStartingAtIndex:(unsigned int)arg1 by:(int)arg2;

@end
