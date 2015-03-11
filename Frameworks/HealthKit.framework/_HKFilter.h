/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKFilter : NSObject <NSSecureCoding, NSCopying> {
}

+ (BOOL)filter:(id)arg1 acceptsDataObject:(id)arg2;
+ (id)filterByCombiningFilters:(id)arg1 compoundType:(unsigned int)arg2;
+ (id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned int)arg2 value:(id)arg3 dataTypes:(id)arg4;
+ (BOOL)supportsSecureCoding;

- (BOOL)acceptsDataObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)predicateWithHealthDaemon:(id)arg1;

@end
