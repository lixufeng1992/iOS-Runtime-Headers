/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber, NSString;

@interface SASToken : AceObject <SAAceSerializable> {
}

@property(copy) NSNumber * confidenceScore;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(copy) NSNumber * endTime;
@property(readonly) unsigned int hash;
@property(copy) NSString * originalText;
@property(copy) NSString * recognitionStability;
@property BOOL removeSpaceAfter;
@property BOOL removeSpaceBefore;
@property(copy) NSNumber * startTime;
@property(readonly) Class superclass;
@property(copy) NSString * text;

+ (id)token;
+ (id)tokenWithDictionary:(id)arg1 context:(id)arg2;

- (id)af_speechToken;
- (id)confidenceScore;
- (id)encodedClassName;
- (id)endTime;
- (id)groupIdentifier;
- (id)originalText;
- (id)recognitionStability;
- (BOOL)removeSpaceAfter;
- (BOOL)removeSpaceBefore;
- (void)setConfidenceScore:(id)arg1;
- (void)setEndTime:(id)arg1;
- (void)setOriginalText:(id)arg1;
- (void)setRecognitionStability:(id)arg1;
- (void)setRemoveSpaceAfter:(BOOL)arg1;
- (void)setRemoveSpaceBefore:(BOOL)arg1;
- (void)setStartTime:(id)arg1;
- (void)setText:(id)arg1;
- (id)startTime;
- (id)text;

@end
