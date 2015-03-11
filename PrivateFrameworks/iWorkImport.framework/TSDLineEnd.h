/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface TSDLineEnd : NSObject <NSCopying, TSDMixing> {
    struct CGPoint { 
        float x; 
        float y; 
    } mEndPoint;
    NSString *mIdentifier;
    BOOL mIsFilled;
    int mLineJoin;
    struct CGPath { } *mPath;
    struct CGPath { } *mWrapPath;
}

@property(readonly) struct CGPoint { float x1; float x2; } endPoint;
@property(readonly) NSString * identifier;
@property(readonly) BOOL isFilled;
@property(readonly) BOOL isNone;
@property(readonly) int lineJoin;
@property(readonly) struct CGPath { }* path;
@property(readonly) struct CGPath { }* wrapPath;

+ (id)filledArrow;
+ (id)filledCircle;
+ (id)filledDiamond;
+ (id)filledSquare;
+ (id)instanceWithArchive:(const struct LineEndArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Path {} *x3; struct Point {} *x4; int x5; boolx6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; int x8; unsigned int x9[1]; }*)arg1 unarchiver:(id)arg2;
+ (id)invertedArrow;
+ (id)line;
+ (id)lineEndWithIdentifier:(id)arg1;
+ (id)lineEndWithPath:(struct CGPath { }*)arg1 endPoint:(struct CGPoint { float x1; float x2; })arg2 isFilled:(BOOL)arg3 identifier:(id)arg4;
+ (id)lineEndWithPath:(struct CGPath { }*)arg1 wrapPath:(struct CGPath { }*)arg2 endPoint:(struct CGPoint { float x1; float x2; })arg3 isFilled:(BOOL)arg4 identifier:(id)arg5;
+ (id)lineEndWithType:(int)arg1;
+ (id)none;
+ (id)openArrow;
+ (id)openCircle;
+ (id)openSquare;
+ (id)simpleArrow;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (struct CGPoint { float x1; float x2; })endPoint;
- (unsigned int)hash;
- (id)identifier;
- (id)initWithArchive:(const struct LineEndArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Path {} *x3; struct Point {} *x4; int x5; boolx6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; int x8; unsigned int x9[1]; }*)arg1 unarchiver:(id)arg2;
- (id)initWithPath:(struct CGPath { }*)arg1 endPoint:(struct CGPoint { float x1; float x2; })arg2 isFilled:(BOOL)arg3 identifier:(id)arg4;
- (id)initWithPath:(struct CGPath { }*)arg1 wrapPath:(struct CGPath { }*)arg2 endPoint:(struct CGPoint { float x1; float x2; })arg3 isFilled:(BOOL)arg4 identifier:(id)arg5 lineJoin:(int)arg6;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFilled;
- (BOOL)isNone;
- (int)lineJoin;
- (id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2;
- (int)mixingTypeWithObject:(id)arg1;
- (struct CGImage { }*)newLineEndImageOnRight:(BOOL)arg1 forContentsScale:(float)arg2 withSize:(struct CGSize { float x1; float x2; })arg3;
- (struct CGPath { }*)path;
- (void)saveToArchive:(struct LineEndArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Path {} *x3; struct Point {} *x4; int x5; boolx6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; int x8; unsigned int x9[1]; }*)arg1 archiver:(id)arg2;
- (struct CGPath { }*)wrapPath;

@end
