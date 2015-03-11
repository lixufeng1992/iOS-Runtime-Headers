/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSMutableArray;

@interface CKAttachmentSaver : NSObject {
    NSMutableArray *_attachments;
    unsigned int _errorCount;
}

- (void)_done;
- (void)_pop;
- (void)_saveCompletion:(id)arg1;
- (void)_saveCompletionForImage:(id)arg1 error:(id)arg2 context:(void*)arg3;
- (void)_saveCompletionForVideoWithPath:(id)arg1 error:(id)arg2 context:(void*)arg3;
- (void)_saveNextAttachment;
- (void)dealloc;
- (id)initWithAttachments:(id)arg1;
- (void)runToCompletion;

@end
