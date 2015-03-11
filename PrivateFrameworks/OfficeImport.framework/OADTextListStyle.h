/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray;

@interface OADTextListStyle : NSObject {
    NSMutableArray *mParagraphProperties;
}

- (void)dealloc;
- (id)defaultProperties;
- (void)flatten;
- (id)init;
- (id)initWithDefaults;
- (void)overrideWithTextStyle:(id)arg1;
- (id)propertiesForListLevel:(unsigned int)arg1;
- (void)removeUnnecessaryOverrides;
- (void)setParentTextListStyle:(id)arg1;
- (void)setPropertiesForListLevel:(unsigned int)arg1 properties:(id)arg2;

@end
