/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDReferenceCollection, NSMutableArray;

@interface EDConditionalFormatting : NSObject {
    boolmApplyToDate;
    EDReferenceCollection *mRanges;
    NSMutableArray *mRules;
}

+ (id)conditionalFormatting;

- (void)addRange:(id)arg1;
- (void)addRule:(id)arg1;
- (void)dealloc;
- (id)init;
- (bool)isApplyToDate;
- (id)rangeAtIndex:(unsigned int)arg1;
- (unsigned int)rangeCount;
- (id)ruleAtIndex:(unsigned int)arg1;
- (unsigned int)ruleCount;
- (id)rules;

@end
