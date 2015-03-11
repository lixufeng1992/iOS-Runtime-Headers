/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDHealthEntity : HDSQLiteEntity {
}

+ (BOOL)_performWriteTransaction:(BOOL)arg1 withHealthDatabase:(id)arg2 error:(id*)arg3 usingBlock:(id)arg4 inaccessibilityHandler:(id)arg5;
+ (id)_syncQueryDescriptorWithPredicate:(id)arg1 orderingProperties:(id)arg2 orderingDirections:(id)arg3 limit:(unsigned int)arg4 anchorProperty:(id)arg5;
+ (id)_syncQueryWithDatabase:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3 orderingDirections:(id)arg4 limit:(unsigned int)arg5 anchorProperty:(id)arg6;
+ (id)anyWithPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;
+ (int)countOfObjectsWithPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;
+ (id)createNonUniqueIndicesForColumns;
+ (id)createTableSQL;
+ (id)databaseName;
+ (BOOL)deleteEntitiesWithPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;
+ (id)entityWithPropertyValues:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;
+ (BOOL)enumerateEntitiesForSyncWithPredicate:(id)arg1 excludedSyncStore:(id)arg2 syncAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg3 limit:(unsigned int)arg4 lastSyncAnchor:(long long*)arg5 healthDatabase:(id)arg6 error:(id*)arg7 block:(id)arg8;
+ (BOOL)enumerateEntitiesForSyncWithProperties:(id)arg1 predicate:(id)arg2 excludedSyncStore:(id)arg3 syncAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg4 limit:(unsigned int)arg5 lastSyncAnchor:(long long*)arg6 healthDatabase:(id)arg7 error:(id*)arg8 block:(id)arg9;
+ (BOOL)enumerateEntitiesForSyncWithProperties:(id)arg1 predicate:(id)arg2 excludedSyncStore:(id)arg3 syncAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg4 orderingProperties:(id)arg5 orderingDirections:(id)arg6 limit:(unsigned int)arg7 lastSyncAnchor:(long long*)arg8 healthDatabase:(id)arg9 error:(id*)arg10 block:(id)arg11;
+ (BOOL)enumerateProperties:(id)arg1 withPredicate:(id)arg2 healthDatabase:(id)arg3 error:(id*)arg4 usingBlock:(id)arg5;
+ (id)maxRowIDForPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;
+ (long long)nextSyncAnchorWithStartAnchor:(long long)arg1 predicate:(id)arg2 excludedSyncStore:(id)arg3 healthDatabase:(id)arg4 error:(id*)arg5;
+ (long long)nextSyncAnchorWithStartAnchor:(long long)arg1 predicate:(id)arg2 excludedSyncStore:(id)arg3 orderingProperties:(id)arg4 orderingDirections:(id)arg5 limit:(unsigned int)arg6 healthDatabase:(id)arg7 error:(id*)arg8;
+ (BOOL)performReadTransactionWithHealthDatabase:(id)arg1 error:(id*)arg2 usingBlock:(id)arg3 inaccessibilityHandler:(id)arg4;
+ (BOOL)performReadTransactionWithHealthDatabase:(id)arg1 error:(id*)arg2 usingBlock:(id)arg3;
+ (BOOL)performReadTransactionWithHealthDatabase:(id)arg1 usingBlock:(id)arg2;
+ (BOOL)performWriteTransactionWithHealthDatabase:(id)arg1 error:(id*)arg2 usingBlock:(id)arg3 inaccessibilityHandler:(id)arg4;
+ (BOOL)performWriteTransactionWithHealthDatabase:(id)arg1 error:(id*)arg2 usingBlock:(id)arg3;
+ (id)predicateForSyncWithPredicate:(id)arg1 excludedSyncStore:(id)arg2 syncAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg3;
+ (id)propertyForSyncAnchor;
+ (id)propertyForSyncProvenance;
+ (id)propertyValueForAnyWithProperty:(id)arg1 predicate:(id)arg2 healthDatabase:(id)arg3 error:(id*)arg4;
+ (id)propertyValueForAnyWithProperty:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3 orderingDirections:(id)arg4 healthDatabase:(id)arg5 error:(id*)arg6;
+ (id)propertyValuesForAnyWithProperties:(id)arg1 predicate:(id)arg2 healthDatabase:(id)arg3 error:(id*)arg4;
+ (id)protectedDatabaseName;
+ (int)protectionClass;
+ (BOOL)setValuesWithDictionary:(id)arg1 predicate:(id)arg2 healthDatabase:(id)arg3 error:(id*)arg4;

- (BOOL)setValue:(id)arg1 forProperty:(id)arg2 healthDatabase:(id)arg3 error:(id*)arg4;
- (id)valueForProperty:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;

@end
