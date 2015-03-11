/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class ML3QueryResultSet_BackingStore;

@interface ML3ContainerQueryResultSet : ML3QueryResultSet {
    long long _containerPID;
    unsigned int _entityLimit;
    BOOL _needsReversing;
    BOOL _needsSorting;
    ML3QueryResultSet_BackingStore *_sortedBackingStore;
}

- (void).cxx_destruct;
- (BOOL)_updateToLibraryCurrentRevision;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long)entityLimit;
- (void)enumeratePersistentIDsUsingBlock:(id)arg1;
- (void)enumerateResultsUsingBlock:(id)arg1;
- (id)initWithQuery:(id)arg1;
- (void)resultAtIndex:(unsigned long)arg1 withCompletion:(id)arg2;
- (id)sortedBackingStoreForDisplayOrdering;

@end
