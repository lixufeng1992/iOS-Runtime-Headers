/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface TSWPRubyField : TSWPSmartField {
    NSString *_rubyText;
}

@property(readonly) NSString * baseText;
@property(readonly) int baseTextScript;
@property(copy) NSString * rubyText;

- (BOOL)allowsEditing;
- (int)attributeArrayKind;
- (id)baseText;
- (int)baseTextScript;
- (BOOL)canCopy:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 rubyText:(id)arg2;
- (void)loadFromArchive:(const struct RubyFieldArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct SmartFieldArchive {} *x3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x4; int x5; unsigned int x6[1]; }*)arg1 unarchiver:(id)arg2;
- (id)rubyText;
- (void)saveToArchive:(struct RubyFieldArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct SmartFieldArchive {} *x3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x4; int x5; unsigned int x6[1]; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setRubyText:(id)arg1;
- (int)smartFieldKind;
- (int)styleAttributeArrayKind;
- (id)text;

@end
