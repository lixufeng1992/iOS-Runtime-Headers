/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSCH3DShaderVariable;

@interface TSCH3DShaderArrayElementVariable : TSCH3DShaderVariable <TSCHUnretainedParent> {
    unsigned int mIndex;
    TSCH3DShaderVariable *mParent;
}

+ (id)variableWithParentVariable:(id)arg1 index:(unsigned int)arg2;

- (void)clearParent;
- (void)dealloc;
- (id)initWithParentVariable:(id)arg1 index:(unsigned int)arg2;

@end
