/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSampleEntity : HDDataEntity {
}

+ (Class)_associatedDataObjectClass;
+ (void)_columnNamesAndSortOrderingsForDataType:(id)arg1 sortDescriptors:(id)arg2 withBlock:(id)arg3;
+ (id)_columnsSQL;
+ (id)_databaseTable;
+ (id)_predicateWithSampleType:(id)arg1 predicate:(id)arg2;
+ (id)_predicateWithSampleType:(id)arg1 sourceIdentifier:(id)arg2 predicate:(id)arg3;
+ (id)_propertySettersForDataObject;
+ (id)_tableValuesFromDataObject:(id)arg1;
+ (id)anySampleOfType:(id)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 error:(id*)arg4;
+ (id)columnNameForSortIdentifier:(id)arg1;
+ (int)countOfSamplesWithType:(id)arg1 healthDaemon:(id)arg2 matchingFilter:(id)arg3 withError:(id*)arg4;
+ (int)countOfSamplesWithType:(id)arg1 healthDaemon:(id)arg2 matchingPredicate:(id)arg3 withError:(id*)arg4;
+ (BOOL)deleteSamplesWithPredicate:(id)arg1 limit:(unsigned int)arg2 deletedSampleCount:(unsigned int*)arg3 deletedSampleTypes:(id)arg4 healthDaemon:(id)arg5 error:(id*)arg6;
+ (BOOL)deleteSamplesWithTypes:(id)arg1 sourceIdentifier:(id)arg2 deletedSampleTypes:(id)arg3 healthDaemon:(id)arg4 error:(id*)arg5;
+ (void)enumerateDatesOfSamplesWithType:(id)arg1 healthDaemon:(id)arg2 matchingPredicate:(id)arg3 limit:(unsigned int)arg4 withHandler:(id)arg5;
+ (void)enumerateSamplesWithType:(id)arg1 healthDaemon:(id)arg2 filter:(id)arg3 sourceIdentifier:(id)arg4 authorizationFilter:(id)arg5 sortDescriptors:(id)arg6 limit:(unsigned int)arg7 handler:(id)arg8;
+ (void)enumerateSamplesWithType:(id)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 sourceIdentifier:(id)arg4 authorizationFilter:(id)arg5 limit:(unsigned int)arg6 anchor:(id*)arg7 withHandler:(id)arg8;
+ (void)enumerateSamplesWithType:(id)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 sourceIdentifier:(id)arg4 authorizationFilter:(id)arg5 orderBy:(id)arg6 directions:(id)arg7 limit:(unsigned int)arg8 handler:(id)arg9;
+ (void)enumerateUUIDsOfSamplesWithType:(id)arg1 healthDaemon:(id)arg2 matchingFilter:(id)arg3 limit:(unsigned int)arg4 withHandler:(id)arg5;
+ (id)mostRecentSampleWithType:(id)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 error:(id*)arg4;
+ (int)preferredEntityType;
+ (id)sampleCountAndDatesOfType:(id)arg1 healthDaemon:(id)arg2 matchingPredicate:(id)arg3 cancellationBlock:(id)arg4;
+ (id)samplesTypesForSamplesMatchingPredicate:(id)arg1 healthDaemon:(id)arg2 error:(id*)arg3;
+ (id)samplesWithType:(id)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 limit:(unsigned int)arg4 anchor:(id*)arg5 error:(id*)arg6;
+ (id)sourceIDsForSamplesWithType:(id)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 error:(id*)arg4;

- (id)_sampleTypeInDatabase:(id)arg1;

@end
