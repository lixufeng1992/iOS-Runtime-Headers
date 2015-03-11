/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVQueuePlayerInternal;

@interface AVQueuePlayer : AVPlayer {
    AVQueuePlayerInternal *_queuePlayer;
}

+ (void)initialize;
+ (id)playerWithPlayerItem:(id)arg1;
+ (id)playerWithURL:(id)arg1;
+ (id)queuePlayerWithItems:(id)arg1;

- (int)_defaultActionAtItemEnd;
- (void)_enqueueModification:(id)arg1;
- (BOOL)_shouldEnqueueModifications;
- (void)advanceToNextItem;
- (void)beginModifications;
- (BOOL)canInsertItem:(id)arg1 afterItem:(id)arg2;
- (void)commitModifications;
- (void)dealloc;
- (id)init;
- (id)initWithItems:(id)arg1;
- (void)insertItem:(id)arg1 afterItem:(id)arg2;
- (id)items;
- (void)removeAllItems;
- (void)removeItem:(id)arg1;
- (void)setActionAtItemEnd:(int)arg1;

@end
