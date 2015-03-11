/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@class NSString, UIFontDescriptor;

@interface _UIFontCacheKey : NSObject <NSCopying> {
    NSString *_contentSizeCategory;
    UIFontDescriptor *_fontDescriptor;
    NSString *_fontName;
    float _pointSize;
    NSString *_textStyle;
    int _traits;
}

@property(copy) NSString * contentSizeCategory;
@property(copy) UIFontDescriptor * fontDescriptor;
@property(copy) NSString * fontName;
@property float pointSize;
@property(copy) NSString * textStyle;
@property int traits;

+ (id)fontCacheKeyWithFontDescriptor:(id)arg1 pointSize:(float)arg2;
+ (id)fontCacheKeyWithFontName:(id)arg1 traits:(int)arg2 pointSize:(float)arg3;
+ (id)fontCacheKeyWithTextStyle:(id)arg1 contentSizeCategory:(id)arg2;
+ (id)systemFontCacheKeyWithTraits:(int)arg1 pointSize:(float)arg2;

- (id)contentSizeCategory;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)fontDescriptor;
- (id)fontName;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (float)pointSize;
- (void)setContentSizeCategory:(id)arg1;
- (void)setFontDescriptor:(id)arg1;
- (void)setFontName:(id)arg1;
- (void)setPointSize:(float)arg1;
- (void)setTextStyle:(id)arg1;
- (void)setTraits:(int)arg1;
- (id)textStyle;
- (int)traits;

@end
