/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString;

@interface NSVariableExpression : NSExpression {
    NSString *_variable;
}

+ (BOOL)supportsSecureCoding;

- (id)CKExpressionValue;
- (id)_expressionWithSubstitutionVariables:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithObject:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)predicateFormat;
- (id)variable;

@end
