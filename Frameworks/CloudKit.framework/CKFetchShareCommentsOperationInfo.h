/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class CKCommentCursor, CKCommentQuery;

@interface CKFetchShareCommentsOperationInfo : CKOperationInfo {
    CKCommentCursor *_cursor;
    CKCommentQuery *_query;
    unsigned int _resultsLimit;
}

@property(retain) CKCommentCursor * cursor;
@property(retain) CKCommentQuery * query;
@property unsigned int resultsLimit;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cursor;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)query;
- (unsigned int)resultsLimit;
- (void)setCursor:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setResultsLimit:(unsigned int)arg1;

@end
