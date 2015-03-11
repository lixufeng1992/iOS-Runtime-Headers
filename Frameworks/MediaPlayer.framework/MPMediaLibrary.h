/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class <MPMediaLibraryDataProviderPrivate>, CADisplayLink, NSDate, NSHashTable, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSURL, QueryCriteriaResultsCache;

@interface MPMediaLibrary : NSObject <NSSecureCoding> {
    unsigned int _determinedHasMedia : 1;
    unsigned int _hasMedia : 1;
    unsigned int _determinedHasSongs : 1;
    unsigned int _hasSongs : 1;
    unsigned int _determinedHasGeniusMixes : 1;
    unsigned int _hasGeniusMixes : 1;
    unsigned int _determinedHasPlaylists : 1;
    unsigned int _hasPlaylists : 1;
    unsigned int _determinedHasComposers : 1;
    unsigned int _hasComposers : 1;
    unsigned int _determinedHasPodcasts : 1;
    unsigned int _hasPodcasts : 1;
    unsigned int _determinedHasUbiquitousBookmarkableItems : 1;
    unsigned int _hasUbiquitousBookmarkableContent : 1;
    unsigned int _determinedHasAudiobooks : 1;
    unsigned int _hasAudiobooks : 1;
    NSMutableArray *_additionalLibraryFilterPredicates;
    NSObject<OS_dispatch_queue> *_additionalLibraryFilterPredicatesAccessQueue;
    int _cloudFilteringType;
    QueryCriteriaResultsCache *_collectionsForCriteriaCache;
    QueryCriteriaResultsCache *_collectionsResultSetsForCriteriaCache;
    NSHashTable *_connectionAssertions;
    float _connectionProgress;
    CADisplayLink *_connectionProgressDisplayLink;
    double _connectionProgressStartTime;
    NSMutableDictionary *_countOfCollectionsDidLoadForCriteria;
    QueryCriteriaResultsCache *_countOfCollectionsForCriteriaCache;
    NSMutableDictionary *_countOfItemsDidLoadForCriteria;
    QueryCriteriaResultsCache *_countOfItemsForCriteriaCache;
    BOOL _determinedHasAudibleAudioBooks;
    BOOL _determinedHasCompilations;
    BOOL _determinedHasHomeVideos;
    BOOL _determinedHasITunesU;
    BOOL _determinedHasMovieRentals;
    BOOL _determinedHasMovies;
    BOOL _determinedHasMusicVideos;
    BOOL _determinedHasTVShows;
    BOOL _determinedHasVideoITunesU;
    BOOL _determinedHasVideoPodcasts;
    BOOL _determinedHasVideos;
    BOOL _disconnectAfterReleasingAssertions;
    NSObject<OS_dispatch_queue> *_entityCacheQueue;
    BOOL _filteringDisabled;
    NSObject<OS_dispatch_queue> *_fixedQueue;
    BOOL _hasAudibleAudioBooks;
    NSMutableDictionary *_hasCollectionsDidLoadForCriteria;
    QueryCriteriaResultsCache *_hasCollectionsForCriteriaCache;
    BOOL _hasCompilations;
    BOOL _hasHomeVideos;
    BOOL _hasITunesU;
    NSMutableDictionary *_hasItemsDidLoadForCriteria;
    QueryCriteriaResultsCache *_hasItemsForCriteriaCache;
    BOOL _hasMovieRentals;
    BOOL _hasMovies;
    BOOL _hasMusicVideos;
    BOOL _hasTVShows;
    BOOL _hasVideoITunesU;
    BOOL _hasVideoPodcasts;
    BOOL _hasVideos;
    QueryCriteriaResultsCache *_itemResultSetsForCriteriaCache;
    QueryCriteriaResultsCache *_itemsForCriteriaCache;
    int _libraryChangeObservers;
    <MPMediaLibraryDataProviderPrivate> *_libraryDataProvider;
    unsigned char _originalCellNetworkFlags;
    unsigned char _originalWiFiNetworkFlags;
    int _removalReason;
}

@property(readonly) NSString * _syncValidity;
@property(readonly) NSDate * lastModifiedDate;
@property(readonly) NSURL * protectedContentSupportStorageURL;
@property int removalReason;

+ (id)_libraryDataProviders;
+ (id)_libraryForDataProvider:(id)arg1;
+ (id)_mediaLibraries;
+ (void)addLibraryDataProvider:(id)arg1;
+ (void)beginDiscoveringMediaLibraries;
+ (id)defaultMediaLibrary;
+ (id)deviceMediaLibrary;
+ (void)endDiscoveringMediaLibraries;
+ (void)initialize;
+ (BOOL)isLibraryServerDisabled;
+ (id)libraryDataProviders;
+ (id)mediaLibraries;
+ (id)mediaLibraryWithUniqueIdentifier:(id)arg1;
+ (void)reloadDisplayValuesForLibraryDataProvider:(id)arg1;
+ (void)reloadDynamicPropertiesForLibraryDataProvider:(id)arg1;
+ (void)reloadInvisiblePropertiesForLibraryDataProvider:(id)arg1;
+ (void)reloadLibraryDataProvider:(id)arg1;
+ (void)removeLibraryDataProvider:(id)arg1 removalReason:(int)arg2;
+ (void)setDefaultMediaLibrary:(id)arg1;
+ (void)setLibraryServerDisabled:(BOOL)arg1;
+ (void)setRunLoopForNotifications:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (void)syncGenerationDidChangeForLibraryDataProvider:(id)arg1;
+ (void)uniqueIdentifierDidChangeForLibraryDataProvider:(id)arg1;

- (void).cxx_destruct;
- (void)_canShowCloudTracksDidChangeNotification:(id)arg1;
- (BOOL)_checkHasContent:(BOOL*)arg1 determined:(BOOL*)arg2 mediaType:(unsigned int)arg3 queryHasEntitiesBlock:(id)arg4;
- (BOOL)_checkHasContent:(BOOL*)arg1 determined:(BOOL*)arg2 queryHasEntitiesBlock:(id)arg3;
- (void)_clearCachedContentDataAndResultSets:(BOOL)arg1;
- (void)_clearCachedEntitiesIncludingResultSets:(BOOL)arg1;
- (void)_clearPendingDisconnection;
- (id)_collectionPersistentIdentifiersForQueryCriteria:(id)arg1;
- (id)_collectionsForQueryCriteria:(id)arg1;
- (void)_connectionProgressDisplayLinkCallback:(id)arg1;
- (unsigned int)_countOfCollectionsForQueryCriteria:(id)arg1;
- (unsigned int)_countOfItemsForQueryCriteria:(id)arg1;
- (void)_didReceiveMemoryWarning:(id)arg1;
- (void)_displayValuesDidChangeNotification:(id)arg1;
- (id)_getCachedValueForQueryCritiera:(id)arg1 valueCriteriaCache:(id)arg2 entitiesForCriteriaCache:(id)arg3 didLoadBlocksByQueryCriteria:(id)arg4 valueLoadedFromEntitiesArrayBlock:(id)arg5 loadValueFromDataProviderBlock:(id)arg6;
- (BOOL)_hasCollectionsForQueryCriteria:(id)arg1;
- (BOOL)_hasItemsForQueryCriteria:(id)arg1;
- (id)_initWithLibraryDataProvider:(id)arg1;
- (id)_itemPersistentIdentifiersForQueryCriteria:(id)arg1;
- (id)_itemsForQueryCriteria:(id)arg1;
- (unsigned long long)_persistentIDForAssetURL:(id)arg1;
- (void)_reloadLibraryForContentsChangeWithNotificationInfo:(id)arg1;
- (void)_reloadLibraryForDynamicPropertyChangeWithNotificationInfo:(id)arg1;
- (void)_reloadLibraryForInvisiblePropertyChangeWithNotificationInfo:(id)arg1;
- (void)_reloadLibraryForRestrictionsChange;
- (void)_removeConnectionAssertion:(id)arg1;
- (void)_scheduleLibraryChangeNotificationPostingBlock:(id)arg1;
- (void)_stopConnectionProgressDisplayLink;
- (id)_syncValidity;
- (void)addLibraryFilterPredicate:(id)arg1;
- (id)addPlaylistWithName:(id)arg1 activeGeniusPlaylist:(BOOL)arg2;
- (id)addPlaylistWithName:(id)arg1;
- (id)additionalLibraryFilterPredicates;
- (id)artworkDataSource;
- (void)beginGeneratingLibraryChangeNotifications;
- (int)cloudFilteringType;
- (BOOL)collectionExistsContainedWithinPersistentIDs:(const unsigned long long*)arg1 count:(unsigned long)arg2 groupingType:(int)arg3 existentPID:(unsigned long long*)arg4;
- (BOOL)collectionExistsWithName:(id)arg1 groupingType:(int)arg2 existentPID:(unsigned long long*)arg3;
- (BOOL)collectionExistsWithPersistentID:(unsigned long long)arg1 groupingType:(int)arg2;
- (BOOL)collectionExistsWithStoreID:(long long)arg1 groupingType:(int)arg2 existentPID:(unsigned long long*)arg3;
- (BOOL)companionDeviceActiveStoreAccountIsDynamiteEligible;
- (id)completeMyCollectionArtworkDataSource;
- (void)connectWithAuthenticationData:(id)arg1 completionBlock:(id)arg2;
- (void)connectWithCompletionHandler:(id)arg1;
- (id)connectionAssertionWithIdentifier:(id)arg1;
- (float)connectionProgress;
- (unsigned long long)currentEntityRevision;
- (id)databasePath;
- (void)dealloc;
- (id)description;
- (void)disconnect;
- (void)downloadAsset:(id)arg1 completionHandler:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)endGeneratingLibraryChangeNotifications;
- (id)entityCache;
- (id)entityWithMultiverseIdentifier:(id)arg1;
- (void)enumerateEntityChangesAfterSyncAnchor:(id)arg1 maximumRevisionType:(int)arg2 usingBlock:(id)arg3;
- (void)enumerateEntityChangesAfterSyncAnchor:(id)arg1 usingBlock:(id)arg2;
- (id)errorResolverForMediaItem:(id)arg1;
- (BOOL)hasAlbums;
- (BOOL)hasArtists;
- (BOOL)hasAudibleAudioBooks;
- (BOOL)hasAudioITunesUContent;
- (BOOL)hasAudiobooks;
- (BOOL)hasCompilations;
- (BOOL)hasComposers;
- (BOOL)hasGeniusMixes;
- (BOOL)hasGenres;
- (BOOL)hasHomeVideos;
- (BOOL)hasITunesUContent;
- (BOOL)hasMedia;
- (BOOL)hasMediaOfType:(unsigned int)arg1;
- (BOOL)hasMovieRentals;
- (BOOL)hasMovies;
- (BOOL)hasMusicVideos;
- (BOOL)hasPlaylists;
- (BOOL)hasPodcasts;
- (BOOL)hasSongs;
- (BOOL)hasTVShows;
- (BOOL)hasUbiquitousBookmarkableItems;
- (BOOL)hasVideoITunesUContent;
- (BOOL)hasVideoPodcasts;
- (BOOL)hasVideos;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isCurrentThreadInTransaction;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isGeniusEnabled;
- (BOOL)isValidAssetURL:(id)arg1;
- (BOOL)itemExistsWithPersistentID:(unsigned long long)arg1;
- (id)itemWithPersistentID:(unsigned long long)arg1 verifyExistence:(BOOL)arg2;
- (id)itemWithPersistentID:(unsigned long long)arg1;
- (id)itemWithStoreID:(unsigned long long)arg1;
- (id)lastModifiedDate;
- (id)libraryDataProvider;
- (BOOL)libraryHasBeenModifiedWithToken:(id)arg1;
- (id)localizedSectionHeaderForSectionIndex:(unsigned int)arg1;
- (id)localizedSectionIndexTitles;
- (id)modificationToken;
- (id)multiverseIdentifierForCollectionWithPersistentID:(long long)arg1 groupingType:(int)arg2;
- (id)multiverseIdentifierForTrackWithPersistentID:(long long)arg1;
- (int)music_compareMediaLibrary:(id)arg1;
- (id)name;
- (id)newPlaylistWithPersistentID:(unsigned long long)arg1;
- (id)pathForAssetURL:(id)arg1;
- (void)performReadTransactionWithBlock:(id)arg1;
- (BOOL)performTransactionWithBlock:(id)arg1;
- (BOOL)playlistExistsWithPersistentID:(unsigned long long)arg1;
- (long long)playlistGeneration;
- (id)playlistWithPersistentID:(unsigned long long)arg1;
- (void)populateLocationPropertiesOfItem:(id)arg1 withPath:(id)arg2;
- (id)preferredAudioLanguages;
- (id)preferredSubtitleLanguages;
- (id)protectedContentSupportStorageURL;
- (int)removalReason;
- (BOOL)removeItems:(id)arg1 hideFromPurchaseHistory:(BOOL)arg2;
- (BOOL)removeItems:(id)arg1;
- (void)removeLibraryFilterPredicate:(id)arg1;
- (BOOL)removePlaylist:(id)arg1;
- (BOOL)requiresAuthentication;
- (void)setCloudFilteringType:(int)arg1;
- (void)setLibraryFilterPredicates;
- (void)setRemovalReason:(int)arg1;
- (void)setSyncPlaylistId:(unsigned long long)arg1;
- (BOOL)setValue:(id)arg1 forDatabaseProperty:(id)arg2;
- (int)status;
- (unsigned long long)syncGenerationID;
- (unsigned long long)syncPlaylistId;
- (id)syncValidity;
- (id)uniqueIdentifier;
- (id)valueForDatabaseProperty:(id)arg1;
- (BOOL)writable;

@end
