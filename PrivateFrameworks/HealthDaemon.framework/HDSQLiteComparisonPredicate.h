/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSQLiteComparisonPredicate : HDSQLitePropertyPredicate <NSCopying> {
    int _comparisonType;
    id _value;
}

@property(readonly) int comparisonType;
@property(readonly) id value;

+ (id)predicateWithProperty:(id)arg1 equalToValue:(id)arg2;
+ (id)predicateWithProperty:(id)arg1 greaterThanOrEqualToValue:(id)arg2;
+ (id)predicateWithProperty:(id)arg1 greaterThanValue:(id)arg2;
+ (id)predicateWithProperty:(id)arg1 lessThanOrEqualToValue:(id)arg2;
+ (id)predicateWithProperty:(id)arg1 lessThanValue:(id)arg2;
+ (id)predicateWithProperty:(id)arg1 notEqualToValue:(id)arg2;
+ (id)predicateWithProperty:(id)arg1 value:(id)arg2 comparisonType:(int)arg3;

- (void).cxx_destruct;
- (id)SQLForEntityClass:(Class)arg1;
- (id)_comparisonTypeString;
- (void)bindToStatement:(struct sqlite3_stmt { }*)arg1 bindingIndex:(inout int*)arg2;
- (int)comparisonType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isCompatibleWithPredicate:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)value;

@end
