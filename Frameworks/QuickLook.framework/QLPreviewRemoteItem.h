/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSURL, QLPreviewItemProxy, QLServicePreviewContentController;

@interface QLPreviewRemoteItem : NSObject <QLPreviewItem> {
    id _completionBlock;
    QLServicePreviewContentController *_contentController;
    int _index;
    QLPreviewItemProxy *_proxy;
    BOOL _resolving;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) NSString * previewItemTitle;
@property(readonly) NSURL * previewItemURL;
@property(readonly) QLPreviewItemProxy * proxy;
@property(readonly) Class superclass;

- (void)_clearCompletionBlock;
- (double)autoPlaybackPosition;
- (id)backgroundColorOverride;
- (void)dealloc;
- (id)description;
- (id)initWithContentController:(id)arg1 index:(int)arg2;
- (void)invalidate;
- (BOOL)isPromisedItem;
- (id)previewItemContentType;
- (id)previewItemTitle;
- (id)previewItemURL;
- (id)previewItemURLForDisplay;
- (id)proxy;
- (void)resolveWithCompletionBlock:(id)arg1;

@end
