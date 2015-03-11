/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSDictionary, NSString;

@interface KNAnimationAttributes : NSObject <NSCopying> {
    NSDictionary *mAttributes;
    NSString *mEffect;
}

@property(readonly) NSDictionary * attributes;
@property(readonly) NSString * effect;

+ (id)attributesWithEffect:(id)arg1 attributes:(id)arg2;
+ (BOOL)customAttributeKeyIsValid:(id)arg1;
+ (id)supportedCustomAttributes;

- (id)attributes;
- (id)attributesByAddingAttributesFromDictionary:(id)arg1;
- (id)attributesByAddingMissingAttributesFromDictionary:(id)arg1;
- (id)attributesByChangingEffectToEffect:(id)arg1;
- (id)attributesByRemovingAttributeForKey:(id)arg1;
- (id)attributesBySettingValue:(id)arg1 forAttributeKey:(id)arg2;
- (BOOL)containsAttributeForKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)effect;
- (id)initWithEffect:(id)arg1 attributes:(id)arg2;
- (id)valueForAttributeKey:(id)arg1;

@end
