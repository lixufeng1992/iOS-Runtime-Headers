/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, SAUIColor, SAUIDecoratedText;

@interface SASTCardItem : AceObject <SASTTemplateItem> {
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) SAUIDecoratedText * footnote;
@property(readonly) unsigned int hash;
@property(retain) SAUIDecoratedText * label;
@property(readonly) Class superclass;
@property(retain) SAUIDecoratedText * title;
@property(retain) SAUIColor * titleBackgroundColor;

+ (id)cardItem;
+ (id)cardItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)footnote;
- (id)groupIdentifier;
- (id)label;
- (void)setFootnote:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleBackgroundColor:(id)arg1;
- (id)title;
- (id)titleBackgroundColor;

@end
