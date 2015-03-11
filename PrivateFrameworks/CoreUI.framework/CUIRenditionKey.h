/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIRenditionKey : NSObject <NSCopying, NSCoding> {
    struct _renditionkeytoken { 
        unsigned short identifier; 
        unsigned short value; 
    unsigned short _highwaterKeyCount;
    struct _renditionkeytoken { unsigned short x1; unsigned short x2; } *_key;
    } _stackKey[16];
}

+ (id)_placeHolderKey;
+ (void)initialize;
+ (id)renditionKey;
+ (id)renditionKeyWithKeyList:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;

- (void)_expandKeyIfNecessaryForCount:(int)arg1;
- (unsigned short)_systemTokenCount;
- (void)copyValuesFromKeyList:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionBasedOnKeyFormat:(const struct _renditionkeyfmt { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4[0]; }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyList:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (id)initWithThemeElement:(int)arg1 themePart:(int)arg2 themeSize:(int)arg3 themeDirection:(int)arg4 themeValue:(int)arg5 themeDimension1:(int)arg6 themeDimension2:(int)arg7 themeState:(int)arg8 themePresentationState:(int)arg9 themeLayer:(int)arg10 themeScale:(int)arg11 themeIdentifier:(int)arg12;
- (const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)keyList;
- (id)nameOfAttributeName:(int)arg1;
- (void)removeValueForKeyTokenIdentifier:(int)arg1;
- (void)setThemeDimension1:(int)arg1;
- (void)setThemeDimension2:(int)arg1;
- (void)setThemeDirection:(int)arg1;
- (void)setThemeElement:(int)arg1;
- (void)setThemeGraphicsClass:(int)arg1;
- (void)setThemeIdentifier:(int)arg1;
- (void)setThemeIdiom:(int)arg1;
- (void)setThemeLayer:(int)arg1;
- (void)setThemeMemoryClass:(int)arg1;
- (void)setThemePart:(int)arg1;
- (void)setThemePresentationState:(int)arg1;
- (void)setThemePreviousState:(int)arg1;
- (void)setThemePreviousValue:(int)arg1;
- (void)setThemeScale:(int)arg1;
- (void)setThemeSize:(int)arg1;
- (void)setThemeSizeClassHorizontal:(int)arg1;
- (void)setThemeSizeClassVertical:(int)arg1;
- (void)setThemeState:(int)arg1;
- (void)setThemeSubtype:(int)arg1;
- (void)setThemeValue:(int)arg1;
- (void)setValuesFromKeyList:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (int)themeDimension1;
- (int)themeDimension2;
- (int)themeDirection;
- (int)themeElement;
- (int)themeGraphicsClass;
- (int)themeIdentifier;
- (int)themeIdiom;
- (int)themeLayer;
- (int)themeMemoryClass;
- (int)themePart;
- (int)themePresentationState;
- (int)themePreviousState;
- (int)themePreviousValue;
- (int)themeScale;
- (int)themeSize;
- (int)themeSizeClassHorizontal;
- (int)themeSizeClassVertical;
- (int)themeState;
- (int)themeSubtype;
- (int)themeValue;

@end
