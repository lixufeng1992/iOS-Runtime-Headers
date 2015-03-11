/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSOrderedSet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration> {
}

@property(readonly) unsigned int count;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)newOrderedSetWithObjects:(const id*)arg1 count:(unsigned int)arg2;
+ (id)orderedSet;
+ (id)orderedSetWithArray:(id)arg1 copyItems:(BOOL)arg2;
+ (id)orderedSetWithArray:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 copyItems:(BOOL)arg3;
+ (id)orderedSetWithArray:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
+ (id)orderedSetWithArray:(id)arg1;
+ (id)orderedSetWithObject:(id)arg1;
+ (id)orderedSetWithObjects:(const id*)arg1 count:(unsigned int)arg2;
+ (id)orderedSetWithObjects:(id)arg1;
+ (id)orderedSetWithOrderedSet:(id)arg1 copyItems:(BOOL)arg2;
+ (id)orderedSetWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 copyItems:(BOOL)arg3;
+ (id)orderedSetWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
+ (id)orderedSetWithOrderedSet:(id)arg1;
+ (id)orderedSetWithSet:(id)arg1 copyItems:(BOOL)arg2;
+ (id)orderedSetWithSet:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (id)_avgForKeyPath:(id)arg1;
- (id)_countForKeyPath:(id)arg1;
- (id)_gkDistinctValuesForKeyPath:(id)arg1;
- (id)_gkFilteredOrderedSetUsingPredicate:(id)arg1;
- (id)_gkFirstObject;
- (BOOL)_gkIsEqualToOrderedSet:(id)arg1;
- (id)_gkMapDictionaryWithKeyPath:(id)arg1 valueKeyPath:(id)arg2;
- (id)_gkMapDictionaryWithKeyPath:(id)arg1;
- (id)_gkSortedOrderedSetUsingDescriptors:(id)arg1;
- (id)_gkValuesForKeyPath:(id)arg1;
- (id)_maxForKeyPath:(id)arg1;
- (id)_minForKeyPath:(id)arg1;
- (id)_mutableArrayValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned int)arg2;
- (id)_mutableOrderedSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned int)arg2;
- (id)_mutableSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned int)arg2;
- (void)_setValue:(id)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned int)arg3;
- (id)_sumForKeyPath:(id)arg1;
- (BOOL)_validateValue:(inout id*)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned int)arg3 error:(out id*)arg4;
- (id)_valueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned int)arg2;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned int)arg3 context:(void*)arg4;
- (id)allObjects;
- (id)array;
- (Class)classForCoder;
- (BOOL)containsObject:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (BOOL)containsObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (unsigned int)countForObject:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (unsigned int)countForObject:(id)arg1;
- (id)description;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned int)arg2;
- (id)descriptionWithLocale:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned int)arg2 usingBlock:(id)arg3;
- (void)enumerateObjectsUsingBlock:(id)arg1;
- (void)enumerateObjectsWithOptions:(unsigned int)arg1 usingBlock:(id)arg2;
- (id)filteredOrderedSetUsingPredicate:(id)arg1;
- (id)firstObject;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)getObjects:(id*)arg1;
- (unsigned int)hash;
- (unsigned int)indexOfObject:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (unsigned int)indexOfObject:(id)arg1 inSortedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 options:(unsigned int)arg3 usingComparator:(id)arg4;
- (unsigned int)indexOfObject:(id)arg1;
- (unsigned int)indexOfObjectAtIndexes:(id)arg1 options:(unsigned int)arg2 passingTest:(id)arg3;
- (unsigned int)indexOfObjectPassingTest:(id)arg1;
- (unsigned int)indexOfObjectWithOptions:(unsigned int)arg1 passingTest:(id)arg2;
- (id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned int)arg2 passingTest:(id)arg3;
- (id)indexesOfObjectsPassingTest:(id)arg1;
- (id)indexesOfObjectsWithOptions:(unsigned int)arg1 passingTest:(id)arg2;
- (id)initWithArray:(id)arg1 copyItems:(BOOL)arg2;
- (id)initWithArray:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 copyItems:(BOOL)arg3;
- (id)initWithArray:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)initWithArray:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObject:(id)arg1;
- (id)initWithObjects:(const id*)arg1 count:(unsigned int)arg2;
- (id)initWithObjects:(id)arg1;
- (id)initWithOrderedSet:(id)arg1 copyItems:(BOOL)arg2;
- (id)initWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 copyItems:(BOOL)arg3;
- (id)initWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)initWithOrderedSet:(id)arg1;
- (id)initWithSet:(id)arg1 copyItems:(BOOL)arg2;
- (id)initWithSet:(id)arg1;
- (BOOL)intersectsOrderedSet:(id)arg1;
- (BOOL)intersectsSet:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToOrderedSet:(id)arg1;
- (BOOL)isNSOrderedSet__;
- (BOOL)isSubsetOfOrderedSet:(id)arg1;
- (BOOL)isSubsetOfSet:(id)arg1;
- (id)lastObject;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectAtIndex:(unsigned int)arg1;
- (id)objectAtIndexedSubscript:(unsigned int)arg1;
- (id)objectAtIndexes:(id)arg1 options:(unsigned int)arg2 passingTest:(id)arg3;
- (id)objectEnumerator;
- (id)objectPassingTest:(id)arg1;
- (id)objectWithOptions:(unsigned int)arg1 passingTest:(id)arg2;
- (id)objectsAtIndexes:(id)arg1 options:(unsigned int)arg2 passingTest:(id)arg3;
- (id)objectsAtIndexes:(id)arg1;
- (id)objectsPassingTest:(id)arg1;
- (id)objectsWithOptions:(unsigned int)arg1 passingTest:(id)arg2;
- (unsigned int)pl_indexOfObjectIdenticalTo:(id)arg1;
- (BOOL)pl_isSortedUsingComparator:(id)arg1;
- (id)pl_shortDescription;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (id)reverseObjectEnumerator;
- (id)reversedOrderedSet;
- (id)set;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)sortedArrayFromRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 options:(unsigned int)arg2 usingComparator:(id)arg3;
- (id)sortedArrayUsingComparator:(id)arg1;
- (id)sortedArrayUsingDescriptors:(id)arg1;
- (id)sortedArrayWithOptions:(unsigned int)arg1 usingComparator:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;

@end
