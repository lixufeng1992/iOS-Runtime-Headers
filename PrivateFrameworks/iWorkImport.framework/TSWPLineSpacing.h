/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface TSWPLineSpacing : NSObject <NSCopying> {
    float _amount;
    float _baselineRule;
    int _mode;
}

+ (id)lineSpacing;

- (float)amount;
- (float)baselineRule;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithArchive:(const struct LineSpacingArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; int x3; float x4; float x5; int x6; unsigned int x7[1]; }*)arg1 unarchiver:(id)arg2;
- (id)initWithMode:(int)arg1 amount:(float)arg2 baselineRule:(float)arg3;
- (id)initWithMode:(int)arg1 amount:(float)arg2;
- (BOOL)isEqual:(id)arg1;
- (int)mode;
- (void)saveToArchive:(struct LineSpacingArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; int x3; float x4; float x5; int x6; unsigned int x7[1]; }*)arg1 archiver:(id)arg2;

@end
