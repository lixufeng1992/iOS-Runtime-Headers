/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSDate, NSMutableArray, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString, TSCENamedReferenceManager, TSKAccessController, TSKChangeGroup, TSKChangeNotifier;

@interface TSCECalculationEngine : TSPObject {
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    struct __CFUUID { } *_transposingTableID;
    TSKAccessController *mAccessController;
    unsigned int mBatchingGroupCellDirtyingLevel;
    BOOL mBlockingUntilRecalcIsComplete;
    unsigned int mCalculationPauseCount;
    NSMutableArray *mCalculationStateObservers;
    TSKChangeNotifier *mChangeNotifier;
    NSDate *mCurrentDate;
    struct TSCEDependencyTracker { struct _opaque_pthread_mutex_t { long x_1_1_1; BOOL x_1_1_2[40]; } x1; id x2; struct hash_map<const __CFUUID *, TSCEDependencyTrackerFormulaOwnerInfo, TSCEFormulaOwnerIDHash, TSCEFormulaOwnerIDEqual, std::__1::allocator<std::__1::pair<const __CFUUID *const, TSCEDependencyTrackerFormulaOwnerInfo> > > { struct __hash_table<std::__1::pair<const __CFUUID *, TSCEDependencyTrackerFormulaOwnerInfo>, __gnu_cxx::__hash_map_hasher<std::__1::pair<const __CFUUID *, TSCEDependencyTrackerFormulaOwnerInfo>, TSCEFormulaOwnerIDHash, true>, __gnu_cxx::__hash_map_equal<std::__1::pair<const __CFUUID *, TSCEDependencyTrackerFormulaOwnerInfo>, TSCEFormulaOwnerIDEqual, true>, std::__1::allocator<std::__1::pair<const __CFUUID *, TSCEDependencyTrackerFormulaOwnerInfo> > > { struct unique_ptr<std::__1::__hash_node<std::__1::pair<const __CFUUID *, TSCEDependencyTrackerFormulaOwnerInfo>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<const __CFUUID *, TSCEDependencyTrackerFormulaOwnerInfo>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::pair<const __CFUUID *, TSCEDependencyTrackerFormulaOwnerInfo>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<const __CFUUID *, TSCEDependencyTrackerFormulaOwnerInfo>, void *> *> > > { struct __hash_node<std::__1::pair<const __CFUUID *, TSCEDependencyTrackerFormulaOwnerInfo>, void *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<const __CFUUID *, TSCEDependencyTrackerFormulaOwnerInfo>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::pair<const __CFUUID *, TSCEDependencyTrackerFormulaOwnerInfo>, void *> *> > { unsigned long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<const __CFUUID *, TSCEDependencyTrackerFormulaOwnerInfo>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::pair<const __CFUUID *, TSCEDependencyTrackerFormulaOwnerInfo>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::pair<const __CFUUID *, TSCEDependencyTrackerFormulaOwnerInfo>, void *> *> { struct __hash_node<std::__1::pair<const __CFUUID *, TSCEDependencyTrackerFormulaOwnerInfo>, void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, __gnu_cxx::__hash_map_hasher<std::__1::pair<const __CFUUID *, TSCEDependencyTrackerFormulaOwnerInfo>, TSCEFormulaOwnerIDHash, true> > { unsigned long x_3_3_1; } x_1_2_3; struct __compressed_pair<float, __gnu_cxx::__hash_map_equal<std::__1::pair<const __CFUUID *, TSCEDependencyTrackerFormulaOwnerInfo>, TSCEFormulaOwnerIDEqual, true> > { float x_4_3_1; } x_1_2_4; } x_3_1_1; } x3; struct TSCEIDMap { struct TSCEIDAllocator<unsigned short> { unsigned short x_1_2_1; struct set<unsigned short, std::__1::less<unsigned short>, std::__1::allocator<unsigned short> > { struct __tree<unsigned short, std::__1::less<unsigned short>, std::__1::allocator<unsigned short> > { struct __tree_node<unsigned short, void *> {} *x_1_4_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<unsigned short, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_6_1; } x_2_5_1; } x_1_4_2; struct __compressed_pair<unsigned long, std::__1::less<unsigned short> > { unsigned long x_3_5_1; } x_1_4_3; } x_2_3_1; } x_1_2_2; } x_4_1_1; struct hash_map<unsigned short, const __CFUUID *, __gnu_cxx::hash<unsigned short>, std::__1::equal_to<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, const __CFUUID *> > > { struct __hash_table<std::__1::pair<unsigned short, const __CFUUID *>, __gnu_cxx::__hash_map_hasher<std::__1::pair<unsigned short, const __CFUUID *>, __gnu_cxx::hash<unsigned short>, true>, __gnu_cxx::__hash_map_equal<std::__1::pair<unsigned short, const __CFUUID *>, std::__1::equal_to<unsigned short>, true>, std::__1::allocator<std::__1::pair<unsigned short, const __CFUUID *> > > { struct unique_ptr<std::__1::__hash_node<std::__1::pair<unsigned short, const __CFUUID *>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<unsigned short, const __CFUUID *>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::pair<unsigned short, const __CFUUID *>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<unsigned short, const __CFUUID *>, void *> *> > > { struct __hash_node<std::__1::pair<unsigned short, const __CFUUID *>, void *> {} **x_1_5_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<unsigned short, const __CFUUID *>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::pair<unsigned short, const __CFUUID *>, void *> *> > { unsigned long x_1_7_1; } x_2_6_1; } x_1_5_2; } x_1_4_1; } x_1_3_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<unsigned short, const __CFUUID *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::pair<unsigned short, const __CFUUID *>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::pair<unsigned short, const __CFUUID *>, void *> *> { struct __hash_node<std::__1::pair<unsigned short, const __CFUUID *>, void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, __gnu_cxx::__hash_map_hasher<std::__1::pair<unsigned short, const __CFUUID *>, __gnu_cxx::hash<unsigned short>, true> > { unsigned long x_3_4_1; } x_1_3_3; struct __compressed_pair<float, __gnu_cxx::__hash_map_equal<std::__1::pair<unsigned short, const __CFUUID *>, std::__1::equal_to<unsigned short>, true> > { float x_4_4_1; } x_1_3_4; } x_2_2_1; } x_4_1_2; struct hash_map<const __CFUUID *, unsigned short, TSCEFormulaOwnerIDHash, TSCEFormulaOwnerIDEqual, std::__1::allocator<std::__1::pair<const __CFUUID *const, unsigned short> > > { struct __hash_table<std::__1::pair<const __CFUUID *, unsigned short>, __gnu_cxx::__hash_map_hasher<std::__1::pair<const __CFUUID *, unsigned short>, TSCEFormulaOwnerIDHash, true>, __gnu_cxx::__hash_map_equal<std::__1::pair<const __CFUUID *, unsigned short>, TSCEFormulaOwnerIDEqual, true>, std::__1::allocator<std::__1::pair<const __CFUUID *, unsigned short> > > { struct unique_ptr<std::__1::__hash_node<std::__1::pair<const __CFUUID *, unsigned short>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<const __CFUUID *, unsigned short>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::pair<const __CFUUID *, unsigned short>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<const __CFUUID *, unsigned short>, void *> *> > > { struct __hash_node<std::__1::pair<const __CFUUID *, unsigned short>, void *> {} **x_1_5_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<const __CFUUID *, unsigned short>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::pair<const __CFUUID *, unsigned short>, void *> *> > { unsigned long x_1_7_1; } x_2_6_1; } x_1_5_2; } x_1_4_1; } x_1_3_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<const __CFUUID *, unsigned short>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::pair<const __CFUUID *, unsigned short>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::pair<const __CFUUID *, unsigned short>, void *> *> { struct __hash_node<std::__1::pair<const __CFUUID *, unsigned short>, void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, __gnu_cxx::__hash_map_hasher<std::__1::pair<const __CFUUID *, unsigned short>, TSCEFormulaOwnerIDHash, true> > { unsigned long x_3_4_1; } x_1_3_3; struct __compressed_pair<float, __gnu_cxx::__hash_map_equal<std::__1::pair<const __CFUUID *, unsigned short>, TSCEFormulaOwnerIDEqual, true> > { float x_4_4_1; } x_1_3_4; } x_3_2_1; } x_4_1_3; } x4; boolx5; struct _opaque_pthread_mutex_t { long x_6_1_1; BOOL x_6_1_2[40]; } x6; struct vector<TSCERetainedCellReference, std::__1::allocator<TSCERetainedCellReference> > { struct TSCERetainedCellReference {} *x_7_1_1; struct TSCERetainedCellReference {} *x_7_1_2; struct __compressed_pair<TSCERetainedCellReference *, std::__1::allocator<TSCERetainedCellReference> > { struct TSCERetainedCellReference {} *x_3_2_1; } x_7_1_3; } x7; struct vector<TSCERetainedCellReference, std::__1::allocator<TSCERetainedCellReference> > { struct TSCERetainedCellReference {} *x_8_1_1; struct TSCERetainedCellReference {} *x_8_1_2; struct __compressed_pair<TSCERetainedCellReference *, std::__1::allocator<TSCERetainedCellReference> > { struct TSCERetainedCellReference {} *x_3_2_1; } x_8_1_3; } x8; struct hash_set<TSCECellReference, TSCECellReferenceHash, TSCECellReferenceEqual, std::__1::allocator<TSCECellReference> > { struct __hash_table<TSCECellReference, TSCECellReferenceHash, TSCECellReferenceEqual, std::__1::allocator<TSCECellReference> > { struct unique_ptr<std::__1::__hash_node<TSCECellReference, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<TSCECellReference, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<TSCECellReference, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<TSCECellReference, void *> *> > > { struct __hash_node<TSCECellReference, void *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<TSCECellReference, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<TSCECellReference, void *> *> > { unsigned long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TSCECellReference, void *> *>, std::__1::allocator<std::__1::__hash_node<TSCECellReference, void *> > > { struct __hash_node_base<std::__1::__hash_node<TSCECellReference, void *> *> { struct __hash_node<TSCECellReference, void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, TSCECellReferenceHash> { unsigned long x_3_3_1; } x_1_2_3; struct __compressed_pair<float, TSCECellReferenceEqual> { float x_4_3_1; } x_1_2_4; } x_9_1_1; } x9; struct vector<TSCERetainedCellReference, std::__1::allocator<TSCERetainedCellReference> > { struct TSCERetainedCellReference {} *x_10_1_1; struct TSCERetainedCellReference {} *x_10_1_2; struct __compressed_pair<TSCERetainedCellReference *, std::__1::allocator<TSCERetainedCellReference> > { struct TSCERetainedCellReference {} *x_3_2_1; } x_10_1_3; } x10; struct vector<TSCERetainedCellReference, std::__1::allocator<TSCERetainedCellReference> > { struct TSCERetainedCellReference {} *x_11_1_1; struct TSCERetainedCellReference {} *x_11_1_2; struct __compressed_pair<TSCERetainedCellReference *, std::__1::allocator<TSCERetainedCellReference> > { struct TSCERetainedCellReference {} *x_3_2_1; } x_11_1_3; } x11; struct { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_12_1_1; struct __CFUUID {} *x_12_1_2; } x12; } *mDependencyTracker;
    BOOL mDirtyAllFormulasInDocumentDidLoad;
    BOOL mDirtyRandomVolatileFunctionsAtEndOfDirtyBatching;
    struct __CFDictionary { } *mLegacyGlobalIDStringToOwnerIDDictionary;
    struct __CFSet { } *mModifiedOwnersInThisRecalcCycle;
    NSObject<OS_dispatch_semaphore> *mModifiedOwnersSem;
    TSCENamedReferenceManager *mNamedReferenceManager;
    unsigned int mNumberOfFormulas;
    TSKChangeGroup *mPendingChangesForAsyncNotification;
    NSString *mPreviousLocaleIdentifier;
    NSObject<OS_dispatch_queue> *mReaclcLowPriorityQueue;
    NSObject<OS_dispatch_group> *mRecalcDispatchGroup;
    int mRecalcDispatchGroupSize;
    NSObject<OS_dispatch_queue> *mRecalcHighPriorityQueue;
    NSObject<OS_dispatch_group> *mRecalcLoopGroup;
    int mRecalculationThreadState;
    } mRecalculationThreadStateMutex;
    struct __CFDictionary { } *mReferenceResolvers;
    BOOL mShouldCancelRecalculationTask;
    BOOL mShouldRefillRecalcQueue;
    unsigned int mSuppressWillModifyCallsLevel;
    NSObject<OS_dispatch_queue> *mWriteMutualExclusionQueue;
    int mXLImportDateMode;
}

@property struct __CFUUID { }* transposingTableID;

+ (id)allLocalizedFunctions;
+ (id)functionLocalizationDictionary;
+ (id)functionNameForLocalizedString:(id)arg1;
+ (void)loadLocalizedStrings;
+ (id)localizedCategoryArray;
+ (id)localizedCategoryForFunction:(id)arg1;
+ (id)localizedFalseString;
+ (id)localizedFalseStrings;
+ (id)localizedFunctionCategoryDictionary;
+ (id)localizedFunctionNameForMenuTag:(int)arg1;
+ (id)localizedModeNameForArgument:(short)arg1 modeIndex:(short)arg2 ofFunction:(id)arg3;
+ (id)localizedModeToolTipForArgument:(short)arg1 modeIndex:(short)arg2 ofFunction:(id)arg3;
+ (id)localizedNameForArgument:(short)arg1 ofFunction:(id)arg2;
+ (id)localizedNameForFunction:(id)arg1;
+ (id)localizedNamesForFunctions:(id)arg1;
+ (BOOL)localizedStringIsFalse:(id)arg1;
+ (BOOL)localizedStringIsTrue:(id)arg1;
+ (id)localizedToolTipForArgument:(short)arg1 ofFunction:(id)arg2;
+ (id)localizedToolTipForFunction:(id)arg1;
+ (id)localizedTrueString;
+ (id)localizedTrueStrings;
+ (id)localizedTypeStringForArgumentType:(int)arg1;
+ (void)setTableReferenceInterfaceObject:(struct TSCETableReferenceInterface { int (**x1)(); }*)arg1;
+ (id)supportedFunctions;

- (id).cxx_construct;
- (id)accessController;
- (void)addCalculationStateObserver:(id)arg1;
- (void)addFormula:(struct { unsigned int x1 : 24; unsigned int x2 : 8; })arg1 inOwner:(struct __CFUUID { }*)arg2 precedentIterator:(int (*)())arg3 userData:(void*)arg4 hasRandomVolatileFunctions:(BOOL*)arg5;
- (id)allCellDependenciesAsString;
- (BOOL)allCellsAreClean;
- (void)allFunctionsAreDirty;
- (id)allOwnerIDs;
- (BOOL)allOwnersRegistered;
- (id)allSpanningDependenciesAsString;
- (id)allWholeOwnerDependenciesAsString;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)assertAllDirtyCellsAreOnLeafStack;
- (void)assertDirtyPrecedentsCountConsistency;
- (void)beginBatchingGroupCellDirtying;
- (void)beginSuppressingWillModifyCalls;
- (void)blockUntilRecalcIsCompleteWithTimeout:(double)arg1;
- (BOOL)cellContainsAFormula:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct __CFUUID {} *x2; }*)arg1;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })cellCoordForCellHandle:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1 inTable:(struct __CFUUID { }*)arg2;
- (struct hash_set<TSUColumnRowCoordinate, TSCECellCoordinateHash, TSCECellCoordinateEqual, std::__1::allocator<TSUColumnRowCoordinate> > { struct __hash_table<TSUColumnRowCoordinate, TSCECellCoordinateHash, TSCECellCoordinateEqual, std::__1::allocator<TSUColumnRowCoordinate> > { struct unique_ptr<std::__1::__hash_node<TSUColumnRowCoordinate, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<TSUColumnRowCoordinate, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<TSUColumnRowCoordinate, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<TSUColumnRowCoordinate, void *> *> > > { struct __hash_node<TSUColumnRowCoordinate, void *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<TSUColumnRowCoordinate, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<TSUColumnRowCoordinate, void *> *> > { unsigned long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TSUColumnRowCoordinate, void *> *>, std::__1::allocator<std::__1::__hash_node<TSUColumnRowCoordinate, void *> > > { struct __hash_node_base<std::__1::__hash_node<TSUColumnRowCoordinate, void *> *> { struct __hash_node<TSUColumnRowCoordinate, void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, TSCECellCoordinateHash> { unsigned long x_3_2_1; } x_1_1_3; struct __compressed_pair<float, TSCECellCoordinateEqual> { float x_4_2_1; } x_1_1_4; } x1; })cellCoordinatesNeedingExcelImportForTable:(struct __CFUUID { }*)arg1;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })cellHandleForCellCoord:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1 inTable:(struct __CFUUID { }*)arg2;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })cellHandleRangeForRangeCoord:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })arg1 inTable:(struct __CFUUID { }*)arg2;
- (BOOL)cellIsInACycle:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct __CFUUID {} *x2; }*)arg1;
- (void)cellReferenceIsDirty:(const struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct __CFUUID {} *x2; }*)arg1;
- (id)changeNotifier;
- (BOOL)clearCellIsDirtyAfterRecalc:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct __CFUUID {} *x2; })arg1;
- (void)clearLegacyGlobalIDs;
- (void)compassVolatileFunctionsAreDirty;
- (id)currentDate;
- (void)dealloc;
- (unsigned int)delayedArchivingPriority;
- (void)detectAndRepairConsistencyViolations;
- (unsigned int)dirtyCellCount;
- (unsigned int)dirtyCellCountInOwner:(struct __CFUUID { }*)arg1;
- (void)documentDidLoad;
- (id)documentRoot;
- (void)endBatchingGroupCellDirtying;
- (void)endSuppressingWillModifyCalls;
- (id)escapedStringForRangeReference:(struct { struct { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; })arg1 contextSheetName:(id)arg2 stickyBits:(unsigned char)arg3 isRangeWithFunction:(BOOL)arg4 forceEscaping:(BOOL)arg5;
- (id)escapedStringForRangeReference:(struct { struct { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; })arg1 hostTableID:(struct __CFUUID { }*)arg2 stickyBits:(unsigned char)arg3 isRangeWithFunction:(BOOL)arg4 forceEscaping:(BOOL)arg5;
- (void)executeBlockWhileCalculationEngineIsNotWriting:(id)arg1;
- (int)forwardRegisterOwnerWithOwnerID:(struct __CFUUID { }*)arg1 legacyGlobalID:(id)arg2;
- (void)geometryVolatileFunctionsAreDirtyInOwner:(struct __CFUUID { }*)arg1;
- (void)headerStateOfTableChanged:(struct __CFUUID { }*)arg1 changeIsForColumns:(BOOL)arg2;
- (void)headerStateOfTableChanged:(struct __CFUUID { }*)arg1;
- (void)indirectCallsAreDirty;
- (id)init;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;
- (void)initializeDispatchObjects;
- (void)invalidateAfterRecalc;
- (BOOL)isCellReferenceDirty:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct __CFUUID {} *x2; }*)arg1;
- (void)localeVolatileFunctionsAreDirty;
- (void)locationVolatileFunctionsAreDirty;
- (void)markOnlyDependentsDirty:(const struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct __CFUUID {} *x2; }*)arg1;
- (id)namedReferenceManager;
- (void)notifyObserversOfRecalcProgress;
- (unsigned int)numberOfCellsWithFormulas;
- (struct __CFUUID { }*)ownerIDForLegacyGlobalID:(id)arg1 registeringIfNeeded:(BOOL)arg2;
- (void)ownerIsDirty:(struct __CFUUID { }*)arg1;
- (BOOL)ownerIsRegistered:(struct __CFUUID { }*)arg1;
- (void)p_addApplicationNotification;
- (void)p_blockUntilRecalcIsCompleteOnNewThreadWithTimeout:(id)arg1;
- (void)p_blockUntilRecalcTaskExitedWithTimeout:(double)arg1;
- (void)p_enqueueTaskForCell:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct __CFUUID {} *x2; })arg1;
- (void)p_recalcOneCellHoldingReadLock:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct __CFUUID {} *x2; })arg1 formulaOwner:(id)arg2 hasExistingCalculatedPrecedents:(BOOL)arg3 isInACycle:(BOOL)arg4;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct __CFUUID {} *x2; })p_refillRecalcQueue;
- (void)p_removeApplicationNotification;
- (void)p_startRecalculationTask;
- (id)p_stringForRangeReference:(struct { struct { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; })arg1 hostTableID:(struct __CFUUID { }*)arg2 contextSheetName:(id)arg3 stickyBits:(unsigned char)arg4 isRangeWithFunction:(BOOL)arg5 quoteComponents:(BOOL)arg6 forceEscaping:(BOOL)arg7;
- (id)packageLocator;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })parseStringAsGeometricReferenceComponent:(id)arg1 inResolver:(id)arg2 outStickyBits:(char *)arg3 gettingReferencesMatchingInputAsPrefix:(id*)arg4;
- (struct { struct { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; })parseStringAsReference:(id)arg1 contextResolver:(id)arg2 contextSheetName:(id)arg3 gettingSpecifiedSheetName:(id*)arg4 gettingSpecifiedTableName:(id*)arg5 gettingRest:(id*)arg6 gettingReferencesMatchingInputAsPrefix:(id*)arg7 gettingStickyBits:(char *)arg8 filterColons:(BOOL)arg9 referenceIsComplete:(BOOL)arg10 outNamesUsed:(BOOL*)arg11;
- (struct { struct { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; })parseStringAsReference:(id)arg1 tableName:(id)arg2 rest:(id)arg3 contextResolver:(id)arg4 contextSheetName:(id)arg5 gettingReferencesMatchingInputAsPrefix:(id*)arg6 gettingStickyBits:(char *)arg7 filterColons:(BOOL)arg8 referenceIsComplete:(BOOL)arg9 outNamesUsed:(BOOL*)arg10;
- (struct { struct { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; })parseStringAsReferenceComponentIntersection:(id)arg1 inResolver:(id)arg2 inTableNamed:(id)arg3 preferredGeometricResolver:(id)arg4 defaultResolver:(id)arg5 outStickyBits:(char *)arg6 gettingReferencesMatchingInputAsPrefix:(id*)arg7 requireFullMatches:(BOOL)arg8 filterColons:(BOOL)arg9 outNamesUsed:(BOOL*)arg10;
- (void)pauseRecalculation;
- (struct hash_set<TSCECReference, TSCECReferenceHash, TSCECReferenceEqual, std::__1::allocator<TSCECReference> > { struct __hash_table<TSCECReference, TSCECReferenceHash, TSCECReferenceEqual, std::__1::allocator<TSCECReference> > { struct unique_ptr<std::__1::__hash_node<TSCECReference, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<TSCECReference, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<TSCECReference, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<TSCECReference, void *> *> > > { struct __hash_node<TSCECReference, void *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<TSCECReference, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<TSCECReference, void *> *> > { unsigned long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TSCECReference, void *> *>, std::__1::allocator<std::__1::__hash_node<TSCECReference, void *> > > { struct __hash_node_base<std::__1::__hash_node<TSCECReference, void *> *> { struct __hash_node<TSCECReference, void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, TSCECReferenceHash> { unsigned long x_3_2_1; } x_1_1_3; struct __compressed_pair<float, TSCECReferenceEqual> { float x_4_2_1; } x_1_1_4; } x1; })precedentsOfCell:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct __CFUUID {} *x2; })arg1;
- (int)preferredDispatchQueueSize;
- (id)previousLocaleIdentifier;
- (void)randomVolatileFunctionsAreDirty;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })rangeCoordForCellHandleRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })arg1 inTable:(struct __CFUUID { }*)arg2;
- (BOOL)rangeIsWithinTable:(struct { struct { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; })arg1;
- (void)rangeReferenceIsDirty:(struct { struct { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; }*)arg1;
- (BOOL)recalcHoldingReadLock;
- (void)recalcHoldingWriteLock;
- (void)recalculateWithTimeout:(double)arg1;
- (BOOL)recalculationIsPaused;
- (BOOL)referenceIsValid:(struct { struct { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; })arg1;
- (BOOL)referenceWasGuaranteedCleanAtRecalcCycleStart:(struct { int x1; union { struct { struct { unsigned short x_1_3_1; unsigned char x_1_3_2; unsigned char x_1_3_3; } x_1_2_1; struct __CFUUID {} *x_1_2_2; } x_2_1_1; struct { struct { struct { unsigned short x_1_4_1; unsigned char x_1_4_2; unsigned char x_1_4_3; } x_1_3_1; struct { unsigned short x_2_4_1; unsigned char x_2_4_2; unsigned char x_2_4_3; } x_1_3_2; } x_2_2_1; struct __CFUUID {} *x_2_2_2; } x_2_1_2; struct { struct { struct { struct { unsigned short x_1_5_1; unsigned char x_1_5_2; unsigned char x_1_5_3; } x_1_4_1; struct { unsigned short x_2_5_1; unsigned char x_2_5_2; unsigned char x_2_5_3; } x_1_4_2; } x_1_3_1; struct __CFUUID {} *x_1_3_2; } x_3_2_1; int x_3_2_2; } x_2_1_3; struct __CFUUID {} *x_2_1_4; } x2; })arg1;
- (int)registerOwnerWithOwnerID:(struct __CFUUID { }*)arg1 owner:(id)arg2 referenceResolver:(id)arg3;
- (void)removeAllFormulasFromOwner:(struct __CFUUID { }*)arg1;
- (void)removeCalculationStateObserver:(id)arg1;
- (void)removeFormula:(struct { unsigned int x1 : 24; unsigned int x2 : 8; })arg1 inOwner:(struct __CFUUID { }*)arg2;
- (void)removeFormulasFromRange:(struct { struct { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; })arg1;
- (void)replaceFormula:(struct { unsigned int x1 : 24; unsigned int x2 : 8; })arg1 inOwner:(struct __CFUUID { }*)arg2 precedentIterator:(int (*)())arg3 userData:(void*)arg4 hasRandomVolatileFunctions:(BOOL*)arg5 clearCycle:(BOOL)arg6;
- (void)replaceFormula:(struct { unsigned int x1 : 24; unsigned int x2 : 8; })arg1 inOwner:(struct __CFUUID { }*)arg2 precedentIterator:(int (*)())arg3 userData:(void*)arg4 hasRandomVolatileFunctions:(BOOL*)arg5;
- (id)resolverForTableID:(struct __CFUUID { }*)arg1;
- (void)resumeRecalculation;
- (id)retain;
- (id)rewriteFormulasWithSpec:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)setAccessController:(id)arg1;
- (void)setChangeNotifier:(id)arg1;
- (void)setOwnerIDForLegacyGlobalID:(id)arg1 ownerID:(struct __CFUUID { }*)arg2;
- (void)setTransposingTableID:(struct __CFUUID { }*)arg1;
- (void)setXLImportDateMode:(int)arg1;
- (BOOL)shouldDelayArchiving;
- (void)startRecalcTaskIfNecessary;
- (id)stringForRangeReference:(struct { struct { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; })arg1 contextSheetName:(id)arg2 stickyBits:(unsigned char)arg3 isRangeWithFunction:(BOOL)arg4;
- (id)stringForRangeReference:(struct { struct { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; })arg1 hostTableID:(struct __CFUUID { }*)arg2 stickyBits:(unsigned char)arg3 isRangeWithFunction:(BOOL)arg4;
- (void)timeVolatileFunctionsAreDirty;
- (struct __CFUUID { }*)transposingTableID;
- (void)unregisterOwner:(struct __CFUUID { }*)arg1;
- (void)updateCurrentDate;
- (void)updateDirtyPrecedentCountsForRemovedIndex:(int)arg1 inTable:(struct __CFUUID { }*)arg2 forColumns:(BOOL)arg3;
- (int)xlImportDateMode;

@end
