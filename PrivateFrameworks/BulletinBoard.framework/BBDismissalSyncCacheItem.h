/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class NSMutableArray, NSMutableDictionary;

@interface BBDismissalSyncCacheItem : NSObject {
    NSMutableArray *_dismissalDictionariesAndFeeds;
    NSMutableDictionary *_dismissalIDToFeeds;
}

@property(retain,readonly) NSMutableArray * dismissalDictionariesAndFeeds;
@property(retain,readonly) NSMutableDictionary * dismissalIDToFeeds;

- (void)cacheDismissalDictionaries:(id)arg1 dismissalIDs:(id)arg2 forFeeds:(unsigned int)arg3;
- (void)dealloc;
- (id)description;
- (id)dismissalDictionariesAndFeeds;
- (id)dismissalIDToFeeds;
- (id)findBulletinMatch:(id)arg1;
- (id)init;
- (id)purgeExpired;
- (void)removeBulletinMatch:(id)arg1;

@end
