/* Generated by RuntimeBrowser.
 */

@protocol _SFPBNowPlayingCardSection <NSObject>

@required

- (void)addMovies:(_SFPBMediaItem *)arg1;
- (void)addPunchoutOptions:(_SFPBPunchout *)arg1;
- (_SFPBColor *)backgroundColor;
- (bool)canBeHidden;
- (void)clearMovies;
- (void)clearPunchoutOptions;
- (bool)hasBackgroundColor;
- (bool)hasBottomPadding;
- (bool)hasCanBeHidden;
- (bool)hasHasBottomPadding;
- (bool)hasHasTopPadding;
- (bool)hasPunchoutPickerDismissText;
- (bool)hasPunchoutPickerTitle;
- (bool)hasSeparatorStyle;
- (bool)hasSubtitle;
- (bool)hasTitle;
- (bool)hasTopPadding;
- (bool)hasType;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSArray *)movies;
- (_SFPBMediaItem *)moviesAtIndex:(unsigned long long)arg1;
- (unsigned long long)moviesCount;
- (NSArray *)punchoutOptions;
- (_SFPBPunchout *)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (NSString *)punchoutPickerDismissText;
- (NSString *)punchoutPickerTitle;
- (int)separatorStyle;
- (void)setBackgroundColor:(_SFPBColor *)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setMovies:(NSArray *)arg1;
- (void)setPunchoutOptions:(NSArray *)arg1;
- (void)setPunchoutPickerDismissText:(NSString *)arg1;
- (void)setPunchoutPickerTitle:(NSString *)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setSubtitle:(NSString *)arg1;
- (void)setTitle:(NSString *)arg1;
- (void)setType:(NSString *)arg1;
- (NSString *)subtitle;
- (NSString *)title;
- (NSString *)type;

@end