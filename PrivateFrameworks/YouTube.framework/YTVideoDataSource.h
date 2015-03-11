/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

@class NSError, NSMutableArray, YTSearchRequest;

@interface YTVideoDataSource : NSObject {
    BOOL _hasLoaded;
    NSError *_lastError;
    YTSearchRequest *_searchRequest;
    unsigned int _startIndex;
    NSMutableArray *_videos;
    unsigned int _videosRemaining;
}

+ (void)saveDataSources;
+ (void)setShouldRemoveOldDefaults;
+ (id)sharedDataSource;
+ (BOOL)shouldRemoveOldDefaults;

- (void)_clearVideos;
- (id)_deprecatedVideosDefaultsKey;
- (void)_didChange;
- (void)_saveToDefaults;
- (void)_searchRequestLoadingStatusDidChange;
- (void)_setLastError:(id)arg1;
- (void)_setVideos:(id)arg1;
- (void)addVideos:(id)arg1 toTop:(BOOL)arg2;
- (void)dealloc;
- (BOOL)hasLoaded;
- (id)init;
- (BOOL)isLoading;
- (id)lastError;
- (void)loadFromDefaults;
- (void)loadMore;
- (unsigned int)maxVideosToSave;
- (void)reloadData;
- (void)removeAllVideos;
- (void)removeVideoAtIndex:(int)arg1;
- (void)searchRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)searchRequest:(id)arg1 receivedVideos:(id)arg2 startIndex:(unsigned int)arg3 videosRemaining:(unsigned int)arg4;
- (id)videos;
- (unsigned int)videosRemaining;

@end
