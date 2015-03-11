/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <TSKModel>, NSDate, NSString, TSDCommentStorage, TSKAnnotationAuthor;

@interface TSWPHighlight : TSPObject <TSDAnnotationHosting, TSPCopying, TSKDocumentObject, TSDCommentStorageDelegate> {
    TSDCommentStorage *_commentStorage;
    <TSKModel> *hostingModel;
}

@property(readonly) int annotationDisplayStringType;
@property(readonly) int annotationType;
@property(readonly) TSKAnnotationAuthor * author;
@property(readonly) NSString * changeTrackingContentFormatString;
@property(readonly) NSString * changeTrackingContentString;
@property(readonly) NSString * changeTrackingTitleString;
@property(retain) TSDCommentStorage * commentStorage;
@property(readonly) NSDate * date;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property <TSKModel> * hostingModel;
@property(copy) TSDCommentStorage * storage;
@property(readonly) Class superclass;

+ (id)defaultHighlightWithContext:(id)arg1 includeCommentWithAuthor:(id)arg2;

- (int)annotationDisplayStringType;
- (int)annotationType;
- (id)author;
- (id)commandForDeletingComment;
- (id)commentStorage;
- (void)commentStorageTextDidChange:(id)arg1;
- (void)commitText:(id)arg1;
- (id)copyWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (void)dealloc;
- (id)description;
- (id)hostingModel;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 commentStorage:(id)arg2;
- (BOOL)isCommentEmpty;
- (BOOL)isEqual:(id)arg1;
- (void)loadFromArchive:(const struct HighlightArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Reference {} *x3; int x4; unsigned int x5[1]; }*)arg1 unarchiver:(id)arg2;
- (void)p_invalidateAnnotationResultsForDocumentRoot:(id)arg1 key:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setAuthor:(id)arg1;
- (void)setCommentStorage:(id)arg1;
- (void)setHostingModel:(id)arg1;
- (void)setStorage:(id)arg1;
- (id)storage;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

@end
