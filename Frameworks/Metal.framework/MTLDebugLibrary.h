/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@class MTLCompileOptions;

@interface MTLDebugLibrary : MTLToolsLibrary {
    id _code;
    MTLCompileOptions *_compileOptions;
    unsigned int _type;
}

@property(copy) id code;
@property(copy) MTLCompileOptions * compileOptions;
@property unsigned int type;

- (void).cxx_destruct;
- (id)code;
- (id)compileOptions;
- (id)initWithLibrary:(id)arg1 parent:(id)arg2 type:(unsigned int)arg3 code:(id)arg4 options:(id)arg5;
- (id)newFunctionWithName:(id)arg1;
- (void)setCode:(id)arg1;
- (void)setCompileOptions:(id)arg1;
- (void)setType:(unsigned int)arg1;
- (unsigned int)type;

@end
