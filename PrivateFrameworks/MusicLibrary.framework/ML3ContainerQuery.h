/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class ML3Container, ML3Predicate, NSArray;

@interface ML3ContainerQuery : ML3Query {
    ML3Container *_container;
    ML3Predicate *_containerPredicate;
    NSArray *_limitedPersistentIDs;
}

@property(readonly) ML3Container * container;
@property(readonly) NSArray * limitedPersistentIDs;
@property(readonly) BOOL requiresSmartLimiting;

- (void).cxx_destruct;
- (id)container;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)countOfDistinctRowsForColumn:(id)arg1;
- (unsigned int)countOfEntities;
- (void)encodeWithCoder:(id)arg1;
- (id)enumerationDatabaseResultForSQL:(id)arg1 onConnection:(id)arg2 withParameters:(id)arg3;
- (BOOL)hasEntities;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntityClass:(Class)arg1 container:(id)arg2 predicate:(id)arg3 orderingTerms:(id)arg4;
- (id)limitedPersistentIDs;
- (BOOL)requiresSmartLimiting;
- (id)selectPersistentIDsSQLAndProperties:(id)arg1 ordered:(BOOL)arg2;
- (id)selectPersistentIDsSQLAndPropertiesForResultSet:(id)arg1 ordered:(BOOL)arg2;
- (id)valueForAggregateFunction:(id)arg1 onEntitiesForProperty:(id)arg2;

@end
