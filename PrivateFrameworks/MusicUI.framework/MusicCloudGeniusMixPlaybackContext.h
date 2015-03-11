/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@class MPMediaItem, MPMediaPlaylist, MPMediaQueryShuffledItems, NSString;

@interface MusicCloudGeniusMixPlaybackContext : MusicQueryPlaybackContext <MusicGeniusMixQueueFeederDataSource> {
    MPMediaQueryShuffledItems *_items;
    MPMediaPlaylist *_mixPlaylist;
    MPMediaItem *_requiredInitialMediaItem;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) MPMediaPlaylist * mixPlaylist;
@property(retain) MPMediaItem * requiredInitialMediaItem;
@property(readonly) Class superclass;

+ (Class)queueFeederClass;

- (void).cxx_destruct;
- (unsigned int)geniusMixQueueFeeder:(id)arg1 indexOfMediaItem:(id)arg2;
- (id)geniusMixQueueFeeder:(id)arg1 mediaItemAtIndex:(unsigned int)arg2;
- (id)geniusMixQueueFeeder:(id)arg1 queryForMediaItemAtIndex:(unsigned int)arg2;
- (unsigned int)geniusMixQueueFeederMediaItemCount:(id)arg1;
- (id)initWithGeniusMixPlaylist:(id)arg1 requiredInitialMediaItem:(id)arg2 error:(id*)arg3;
- (id)mixPlaylist;
- (id)requiredInitialMediaItem;
- (void)setRequiredInitialMediaItem:(id)arg1;

@end
