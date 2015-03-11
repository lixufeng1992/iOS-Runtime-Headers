/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSString;

@interface _EditScriptDataArray : NSObject <_EditScriptData> {
    NSString *_cachedStringValue;
    NSArray *_data;
}

@property(retain) NSString * cachedStringValue;
@property(retain) NSArray * data;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (id)EditScriptDataWithArray:(id)arg1;
+ (id)EditScriptDataWithString:(id)arg1 chunkSize:(int)arg2;

- (id)cachedStringValue;
- (int)characterIndexForItem:(int)arg1;
- (id)data;
- (void)dealloc;
- (id)description;
- (int)indexOfFirstDifferenceWithOtherData:(id)arg1 shouldReverseIterate:(BOOL)arg2;
- (id)initWithArray:(id)arg1;
- (id)initWithString:(id)arg1 chunkSize:(int)arg2;
- (int)length;
- (int)lengthOfItem:(int)arg1;
- (void)setCachedStringValue:(id)arg1;
- (void)setData:(id)arg1;
- (id)stringAtIndex:(int)arg1;
- (id)stringValue;

@end
