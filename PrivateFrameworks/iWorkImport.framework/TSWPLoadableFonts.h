/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPLoadableFonts : NSObject {
    BOOL _allFontsLoaded;
    unsigned int _loadableFontCount;
    struct TSWPLoadableFontInfo { id x1; id x2; id x3; BOOL x4; } *_loadableFonts;
}

+ (id)_singletonAlloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedInstance;

- (id)autorelease;
- (void)backgroundLoadAll;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)loadAll;
- (void)loadFontWithName:(id)arg1;
- (void)p_loadFontWithInfo:(struct TSWPLoadableFontInfo { id x1; id x2; id x3; BOOL x4; }*)arg1;
- (oneway void)release;
- (id)retain;
- (unsigned int)retainCount;

@end
