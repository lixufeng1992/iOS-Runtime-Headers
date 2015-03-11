/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@class GKFriendsSplittingDataSource, GKGameRecentPlayersDataSource, GKNearbyPlayersDataSource, NSSet;

@interface GKInvitePickerDataSource : GKSegmentedSectionDataSource {
    GKFriendsSplittingDataSource *_friendsSplittingDataSource;
    NSSet *_hiddenPlayers;
    GKNearbyPlayersDataSource *_nearbyPlayersDataSource;
    GKGameRecentPlayersDataSource *_recentPlayersDataSource;
}

@property(retain) GKFriendsSplittingDataSource * friendsSplittingDataSource;
@property(retain) NSSet * hiddenPlayers;
@property(retain) GKNearbyPlayersDataSource * nearbyPlayersDataSource;
@property(retain) GKGameRecentPlayersDataSource * recentPlayersDataSource;

- (BOOL)canSelectIndexPath:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionViewWillBecomeActive:(id)arg1;
- (void)dealloc;
- (id)friendsSplittingDataSource;
- (BOOL)hasPlayer:(id)arg1;
- (id)hiddenPlayers;
- (id)indexPathsForPlayer:(id)arg1;
- (id)init;
- (id)itemAtIndexPath:(id)arg1;
- (id)nearbyPlayersDataSource;
- (void)notifyPickerItemsChanged:(id)arg1;
- (id)recentPlayersDataSource;
- (void)refreshSelectionState;
- (void)setFriendsSplittingDataSource:(id)arg1;
- (void)setHiddenPlayers:(id)arg1;
- (void)setNearbyPlayersDataSource:(id)arg1;
- (void)setRecentPlayersDataSource:(id)arg1;
- (void)toggleSelectionAtIndexPath:(id)arg1;
- (void)toggleSelectionForPlayer:(id)arg1;

@end
