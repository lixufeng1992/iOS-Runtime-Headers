/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSMutableDictionary, NSString;

@interface CKFetchRecordVersionsOperation : CKDatabaseOperation {
    NSArray *_desiredKeys;
    id _fetchRecordVersionsCompletionBlock;
    id _fetchRecordVersionsProgressBlock;
    BOOL _isDeleted;
    NSString *_minimumVersionETag;
    NSMutableDictionary *_recordErrors;
    NSArray *_recordIDs;
}

@property(copy) NSArray * desiredKeys;
@property(copy) id fetchRecordVersionsCompletionBlock;
@property(copy) id fetchRecordVersionsProgressBlock;
@property BOOL isDeleted;
@property(copy) NSString * minimumVersionETag;
@property(retain) NSMutableDictionary * recordErrors;
@property(copy) NSArray * recordIDs;

- (void).cxx_destruct;
- (BOOL)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id)desiredKeys;
- (id)fetchRecordVersionsCompletionBlock;
- (id)fetchRecordVersionsProgressBlock;
- (void)fillOutOperationInfo:(id)arg1;
- (id)initWithRecordIDs:(id)arg1;
- (BOOL)isDeleted;
- (id)minimumVersionETag;
- (void)performCKOperation;
- (id)recordErrors;
- (id)recordIDs;
- (void)setDesiredKeys:(id)arg1;
- (void)setFetchRecordVersionsCompletionBlock:(id)arg1;
- (void)setFetchRecordVersionsProgressBlock:(id)arg1;
- (void)setIsDeleted:(BOOL)arg1;
- (void)setMinimumVersionETag:(id)arg1;
- (void)setRecordErrors:(id)arg1;
- (void)setRecordIDs:(id)arg1;

@end
