/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray, NSString;

@interface TSTListNode : TSTExpressionNode {
    NSArray *mWhitespaceAfterDelimiters;
    NSString *mWhitespaceAfterLeftParen;
}

@property(retain) NSArray * whitespaceAfterDelimiters;
@property(retain) NSString * whitespaceAfterLeftParen;

- (id)argumentSpec;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray { char *x1; unsigned int x2; unsigned int x3; id x4; }*)arg1 hostCell:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (void)dealloc;
- (id)description;
- (id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3;
- (id)initFromArchive:(const struct ListNodeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct ExpressionNodeArchive {} *x3; int x4; unsigned int x5[1]; }*)arg1 unarchiver:(id)arg2;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned int)arg3 lastIndex:(unsigned int)arg4;
- (id)initWithContext:(id)arg1 firstIndex:(unsigned int)arg2 lastIndex:(unsigned int)arg3;
- (void)saveToArchive:(struct ListNodeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct ExpressionNodeArchive {} *x3; int x4; unsigned int x5[1]; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setWhitespaceAfterDelimiters:(id)arg1;
- (void)setWhitespaceAfterLeftParen:(id)arg1;
- (id)string;
- (int)tokenType;
- (id)whitespaceAfterDelimiters;
- (id)whitespaceAfterLeftParen;

@end
