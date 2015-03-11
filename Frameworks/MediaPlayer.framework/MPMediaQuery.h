/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaItemCollection, MPMediaLibrary, MPMediaPlaylist, MPMediaQueryCriteria, MPMediaQuerySectionInfo, NSArray, NSDictionary, NSSet, NSString;

@interface MPMediaQuery : NSObject <MPPProtobufferCoding, NSSecureCoding, NSCopying> {
    MPMediaQueryCriteria *_criteria;
    int _isFilteringDisabled;
    MPMediaLibrary *_mediaLibrary;
    NSArray *_staticEntities;
    unsigned int _staticEntityType;
}

@property(readonly) unsigned int _countOfCollections;
@property(readonly) unsigned int _countOfItems;
@property(readonly) BOOL _hasCollections;
@property(readonly) BOOL _hasItems;
@property(readonly) MPMediaItemCollection * collectionByJoiningCollections;
@property(readonly) NSArray * collectionPersistentIdentifiers;
@property(copy) NSSet * collectionPropertiesToFetch;
@property(readonly) NSArray * collectionPropertiesToFetchArray;
@property(readonly) MPMediaQuerySectionInfo * collectionSectionInfo;
@property(readonly) NSArray * collectionSections;
@property(readonly) NSArray * collections;
@property(readonly) MPMediaPlaylist * containingPlaylist;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) BOOL excludesEntitiesWithBlankNames;
@property(retain) NSSet * filterPredicates;
@property int groupingType;
@property(readonly) unsigned int hash;
@property BOOL ignoreSystemFilterPredicates;
@property(readonly) NSArray * itemPersistentIdentifiers;
@property(copy) NSSet * itemPropertiesToFetch;
@property(readonly) NSArray * itemPropertiesToFetchArray;
@property(readonly) MPMediaQuerySectionInfo * itemSectionInfo;
@property(readonly) NSArray * itemSections;
@property(readonly) NSArray * items;
@property(retain) MPMediaLibrary * mediaLibrary;
@property(getter=music_playlist,readonly) MPMediaPlaylist * music_playlist;
@property(getter=music_playlistTitle,readonly) NSString * music_playlistTitle;
@property(getter=_orderingDirectionMappings,setter=_setOrderingDirectionMappings:,copy) NSDictionary * orderingDirectionMappings;
@property(getter=_orderingProperties,setter=_setOrderingProperties:,copy) NSArray * orderingProperties;
@property BOOL sortItems;
@property(readonly) BOOL specifiesPlaylistItems;
@property(readonly) Class superclass;
@property BOOL useSections;
@property(readonly) BOOL willGroupEntities;

+ (id)ITunesUAudioQuery;
+ (id)ITunesUQuery;
+ (id)activeGeniusPlaylist;
+ (id)albumArtistsQuery;
+ (id)albumsQuery;
+ (id)artistsQuery;
+ (id)audibleAudiobooksQuery;
+ (id)audioPodcastsQuery;
+ (id)audiobooksQuery;
+ (id)compilationsQuery;
+ (id)composersQuery;
+ (id)currentDevicePurchasesPlaylist;
+ (id)geniusMixesQuery;
+ (id)genresQuery;
+ (id)homeVideosQuery;
+ (void)initFilteringDisabled;
+ (void)initialize;
+ (BOOL)isFilteringDisabled;
+ (id)movieRentalsQuery;
+ (id)moviesQuery;
+ (id)musicQueryWithFilterPredicates:(id)arg1;
+ (id)musicVideosQuery;
+ (id)playlistsQuery;
+ (id)podcastsQuery;
+ (void)setFilteringDisabled:(BOOL)arg1;
+ (id)songsQuery;
+ (BOOL)supportsSecureCoding;
+ (id)tvShowsQuery;
+ (id)videoITunesUQuery;
+ (id)videoPodcastsQuery;
+ (id)videosQuery;

- (void).cxx_destruct;
- (BOOL)MPSD_hasDownloadableEntities;
- (BOOL)MPSD_hasDownloadingEntities;
- (id)MPSD_mediaQueryForDownloadableEntities;
- (id)MPSD_mediaQueryForDownloadingEntities;
- (id)_MPUSDS_searchPredicate;
- (unsigned int)_countOfCollections;
- (unsigned int)_countOfItems;
- (void)_enumerateCollectionsInOrder:(BOOL)arg1 usingBlock:(id)arg2;
- (void)_enumerateCollectionsUsingBlock:(id)arg1;
- (void)_enumerateItemsInOrder:(BOOL)arg1 usingBlock:(id)arg2;
- (void)_enumerateItemsUsingBlock:(id)arg1;
- (void)_enumerateUnorderedCollectionsUsingBlock:(id)arg1;
- (void)_enumerateUnorderedItemsUsingBlock:(id)arg1;
- (BOOL)_hasCollections;
- (BOOL)_hasItems;
- (BOOL)_isFilteringDisabled;
- (id)_music_nowPlayingComparableQuery;
- (id)_orderingDirectionMappings;
- (id)_orderingProperties;
- (void)_setOrderingDirectionMappings:(id)arg1;
- (void)_setOrderingProperties:(id)arg1;
- (BOOL)_updatePredicateForProperty:(id)arg1 withPropertyPredicate:(id)arg2;
- (id)_valueForAggregateFunction:(id)arg1 onProperty:(id)arg2 entityType:(unsigned int)arg3;
- (void)addFilterPredicate:(id)arg1;
- (id)collectionByJoiningCollections;
- (id)collectionPersistentIdentifiers;
- (id)collectionPropertiesToFetch;
- (id)collectionPropertiesToFetchArray;
- (id)collectionSectionInfo;
- (id)collectionSections;
- (id)collections;
- (id)containingPlaylist;
- (id)copyByRemovingStaticEntities;
- (id)copyBySanitizingStaticEntities;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)criteria;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)excludesEntitiesWithBlankNames;
- (id)filterPredicates;
- (unsigned int)groupingThreshold;
- (int)groupingType;
- (unsigned int)hash;
- (BOOL)ignoreSystemFilterPredicates;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithCriteria:(id)arg1 library:(id)arg2;
- (id)initWithEntities:(id)arg1 entityType:(unsigned int)arg2;
- (id)initWithFilterPredicates:(id)arg1;
- (id)initWithProtobufferDecodableObject:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)itemPersistentIdentifiers;
- (id)itemPropertiesToFetch;
- (id)itemPropertiesToFetchArray;
- (id)itemSectionInfo;
- (id)itemSections;
- (id)items;
- (id)mediaLibrary;
- (void)music_getListingCountFormatString:(id*)arg1 isFallbackFormatString:(BOOL*)arg2;
- (BOOL)music_isEqualToNowPlayingQuery:(id)arg1;
- (id)music_playlist;
- (id)music_playlistTitle;
- (id)predicateForProperty:(id)arg1;
- (id)protobufferEncodableObject;
- (void)removeFilterPredicate:(id)arg1;
- (void)removePredicatesForProperty:(id)arg1;
- (void)setCollectionPropertiesToFetch:(id)arg1;
- (void)setCriteria:(id)arg1;
- (void)setFilterPredicate:(id)arg1 forProperty:(id)arg2;
- (void)setFilterPredicates:(id)arg1;
- (void)setFilterPropertyPredicate:(id)arg1;
- (void)setGroupingType:(int)arg1;
- (void)setIgnoreSystemFilterPredicates:(BOOL)arg1;
- (void)setItemPropertiesToFetch:(id)arg1;
- (void)setMediaLibrary:(id)arg1;
- (void)setSortItems:(BOOL)arg1;
- (void)setStaticEntities:(id)arg1 entityType:(unsigned int)arg2;
- (void)setUseSections:(BOOL)arg1;
- (BOOL)sortItems;
- (BOOL)specifiesPlaylistItems;
- (BOOL)useSections;
- (id)valueForAggregateFunction:(id)arg1 onCollectionsForProperty:(id)arg2;
- (id)valueForAggregateFunction:(id)arg1 onItemsForProperty:(id)arg2;
- (BOOL)willGroupEntities;

@end
