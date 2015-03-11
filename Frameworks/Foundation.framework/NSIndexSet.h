/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface NSIndexSet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    struct { 
        unsigned int _isEmpty : 1; 
        unsigned int _hasSingleRange : 1; 
        unsigned int _cacheValid : 1; 
        unsigned int _reservedArrayBinderController : 29; 
    union { 
        struct { 
            struct _NSRange { 
                unsigned int location; 
                unsigned int length; 
            } _range; 
        } _singleRange; 
        struct { 
            void *_data; 
            void *_reserved; 
        } _multipleRanges; 
    } _indexSetFlags;
    } _internal;
}

@property(readonly) unsigned int count;
@property(readonly) unsigned int firstIndex;
@property(readonly) BOOL isSingleContiguousRange;
@property(readonly) BOOL isSingleContiguousRange;
@property(readonly) unsigned int lastIndex;

+ (id)_gkIndexSetWithArray:(id)arg1;
+ (id)indexSet;
+ (id)indexSetWithIndex:(unsigned int)arg1;
+ (id)indexSetWithIndexes:(const unsigned int*)arg1 count:(unsigned int)arg2;
+ (id)indexSetWithIndexes:(unsigned int)arg1;
+ (id)indexSetWithIndexesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
+ (id)indexSetWithIndices:(unsigned int*)arg1 count:(unsigned int)arg2;
+ (id)indexSetWithIndices:(unsigned int*)arg1 count:(unsigned int)arg2;
+ (BOOL)supportsSecureCoding;

- (void)__ck_enumerateIndexesByProximityToIndex:(unsigned int)arg1 usingBlock:(id)arg2;
- (id)__ck_indexPathItemsInSection:(int)arg1;
- (id)__ck_indexPathRowsInSection:(int)arg1;
- (id)__ck_indexSetShiftedForInsertedIndexes:(id)arg1 removedIndexes:(id)arg2;
- (unsigned int)__getContainmentVector:(out BOOL*)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)_gkIndexSetByAddingIndex:(int)arg1;
- (id)_gkIndexSetByRemovingIndex:(int)arg1;
- (unsigned int)_indexAtIndex:(unsigned int)arg1;
- (unsigned int)_indexClosestToIndex:(unsigned int)arg1 equalAllowed:(BOOL)arg2 following:(BOOL)arg3;
- (unsigned int)_indexOfRangeAfterOrContainingIndex:(unsigned int)arg1;
- (unsigned int)_indexOfRangeBeforeOrContainingIndex:(unsigned int)arg1;
- (unsigned int)_indexOfRangeContainingIndex:(unsigned int)arg1;
- (id)_init;
- (id)_numberEnumerator;
- (id)_pl_indexSetByUpdatingWithChangedIndexes:(id)arg1 asInserts:(BOOL)arg2;
- (void)_setContentToContentFromIndexSet:(id)arg1;
- (Class)classForCoder;
- (BOOL)containsIndex:(unsigned int)arg1;
- (BOOL)containsIndexes:(id)arg1;
- (BOOL)containsIndexesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (unsigned int)count;
- (unsigned int)countOfIndexesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateIndexesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 options:(unsigned int)arg2 usingBlock:(id)arg3;
- (void)enumerateIndexesUsingBlock:(id)arg1;
- (void)enumerateIndexesWithOptions:(unsigned int)arg1 usingBlock:(id)arg2;
- (void)enumerateRangesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 options:(unsigned int)arg2 usingBlock:(id)arg3;
- (void)enumerateRangesUsingBlock:(id)arg1;
- (void)enumerateRangesWithOptions:(unsigned int)arg1 usingBlock:(id)arg2;
- (unsigned int)firstIndex;
- (unsigned int)getIndexes:(unsigned int*)arg1 maxCount:(unsigned int)arg2 inIndexRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3;
- (unsigned int)hash;
- (unsigned int)indexGreaterThanIndex:(unsigned int)arg1;
- (unsigned int)indexGreaterThanOrEqualToIndex:(unsigned int)arg1;
- (unsigned int)indexInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 options:(unsigned int)arg2 passingTest:(id)arg3;
- (unsigned int)indexLessThanIndex:(unsigned int)arg1;
- (unsigned int)indexLessThanOrEqualToIndex:(unsigned int)arg1;
- (unsigned int)indexPassingTest:(id)arg1;
- (id)indexSetByAddingIndexes:(id)arg1;
- (id)indexSetByAddingIndexes:(id)arg1;
- (id)indexSetByInsertingIndexes:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)indexSetByInsertingIndexes:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (unsigned int)indexWithOptions:(unsigned int)arg1 passingTest:(id)arg2;
- (id)indexesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 options:(unsigned int)arg2 passingTest:(id)arg3;
- (id)indexesPassingTest:(id)arg1;
- (id)indexesWithOptions:(unsigned int)arg1 passingTest:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIndex:(unsigned int)arg1;
- (id)initWithIndexSet:(id)arg1;
- (id)initWithIndexes:(const unsigned int*)arg1 count:(unsigned int)arg2;
- (id)initWithIndexesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)initWithIndices:(unsigned int*)arg1 count:(unsigned int)arg2;
- (id)initWithIndices:(unsigned int*)arg1 count:(unsigned int)arg2;
- (id)initWithMessage:(const struct IndexSet { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct RepeatedPtrField<TSP::Range> { void **x_3_1_1; int x_3_1_2; int x_3_1_3; int x_3_1_4; } x3; int x4; unsigned int x5[1]; }*)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (BOOL)intersectsIndexesInIndexSet:(id)arg1;
- (BOOL)intersectsIndexesInIndexSet:(id)arg1;
- (BOOL)intersectsIndexesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToIndexSet:(id)arg1;
- (BOOL)isSingleContiguousRange;
- (BOOL)isSingleContiguousRange;
- (unsigned int)lastIndex;
- (id)mf_commaSeparatedString;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)pl_indexSetAdjustedForDeletions:(id)arg1;
- (id)pl_indexSetAdjustedForInsertions:(id)arg1;
- (id)pl_shortDescription;
- (unsigned int)pu_indexAtIndex:(unsigned int)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeAtIndex:(unsigned int)arg1;
- (unsigned int)rangeCount;
- (id)replacementObjectForPortCoder:(id)arg1;
- (void)saveToMessage:(struct IndexSet { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct RepeatedPtrField<TSP::Range> { void **x_3_1_1; int x_3_1_2; int x_3_1_3; int x_3_1_4; } x3; int x4; unsigned int x5[1]; }*)arg1;
- (unsigned int)tsu_indexAtPosition:(unsigned int)arg1;
- (unsigned int)tsu_positionOfIndex:(unsigned int)arg1;

@end
