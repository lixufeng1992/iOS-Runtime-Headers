/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSSQLWhereIntermediate;

@interface NSSQLHavingIntermediate : NSSQLIntermediate {
    NSSQLWhereIntermediate *_whereClause;
}

- (void)dealloc;
- (id)generateSQLStringInContext:(id)arg1;
- (id)initWithPredicate:(id)arg1 inScope:(id)arg2 inContext:(id)arg3;
- (BOOL)isHavingScoped;

@end
