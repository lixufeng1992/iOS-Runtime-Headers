/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAssociationEntity : HDHealthEntity {
}

+ (BOOL)_enumerateAssociationsWithPredicate:(id)arg1 excludedSyncStore:(id)arg2 syncAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg3 lastSyncAnchor:(long long*)arg4 healthDatabase:(id)arg5 error:(id*)arg6 block:(id)arg7;
+ (void)_enumerateObjectIDsWithPredicate:(id)arg1 database:(id)arg2 callback:(id)arg3;
+ (id)_insertAssociationEntryWithAssociation:(id)arg1 object:(id)arg2 provenance:(int)arg3 database:(id)arg4 error:(id*)arg5;
+ (BOOL)_insertEntriesWithAssociationUUID:(id)arg1 objectUUIDsData:(id)arg2 provenance:(int)arg3 healthDaemon:(id)arg4 error:(id*)arg5;
+ (id)_propertyForForeignProperty:(id)arg1 joinProperty:(id)arg2;
+ (id)_propertySettersForDataObject;
+ (BOOL)_shouldJoinWithProperty:(id)arg1 joinProperty:(id)arg2;
+ (id)associationPropertyForEntityClass:(Class)arg1;
+ (id)createNonUniqueIndicesForColumns;
+ (id)createTableSQL;
+ (id)databaseTable;
+ (id)deleteStatementForAssociationWithDatabase:(id)arg1;
+ (id)deleteStatementForObjectAssociationsWithDatabase:(id)arg1;
+ (BOOL)insertEntriesWithAssociation:(id)arg1 objects:(id)arg2 enforceSameSource:(BOOL)arg3 database:(id)arg4 error:(id*)arg5;
+ (BOOL)insertEntriesWithAssociation:(id)arg1 objects:(id)arg2 enforceSameSource:(BOOL)arg3 healthDaemon:(id)arg4 error:(id*)arg5;
+ (BOOL)insertEntriesWithAssociationUUID:(id)arg1 objectUUIDsData:(id)arg2 healthDaemon:(id)arg3 error:(id*)arg4;
+ (id)joinClauseForProperty:(id)arg1;
+ (id)journalEntryForAssociation:(id)arg1 objects:(id)arg2;
+ (id)objectIDsForAssociationEntity:(id)arg1 healthDaemon:(id)arg2 error:(id*)arg3;
+ (id)propertyForSyncProvenance;
+ (int)protectionClass;

@end
