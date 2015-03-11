/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class <PUSuggestedSearchResultsDelegate>, NSArray, NSObject<OS_dispatch_queue>, NSString, PLPhotoLibrary, PSIDatabase;

@interface PUSuggestedSearchResultsDataSource : NSObject <PUSuggestedSearchDelegate> {
    <PUSuggestedSearchResultsDelegate> *_delegate;
    PLPhotoLibrary *_photoLibrary;
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_recentSearches;
    PSIDatabase *_searchIndex;
    BOOL _shouldReloadRecentSearchChanges;
    NSArray *_suggestedSearches;
}

@property(copy,readonly) NSString * debugDescription;
@property <PUSuggestedSearchResultsDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(retain) PSIDatabase * searchIndex;
@property(readonly) Class superclass;

+ (void)_clearRecentSearches;
+ (id)_recentSearchObjects;
+ (id)_recentSearches;
+ (BOOL)_saveRecentSearchWithSearchString:(id)arg1 displayTitle:(id)arg2 uuids:(id)arg3 albumUUID:(id)arg4;

- (void).cxx_destruct;
- (void)_reloadRecentSearches;
- (void)cancel;
- (void)clearRecentSearches;
- (void)dealloc;
- (id)delegate;
- (id)initWithSearchIndex:(id)arg1;
- (void)mergePendingChanges;
- (id)nonemptySuggestedSearchAtIndex:(unsigned int)arg1;
- (id)nonemptySuggestedSearches;
- (unsigned int)numberOfRecentSearches;
- (unsigned int)numberOfSuggestedSearches;
- (id)recentSearchAtIndex:(unsigned int)arg1;
- (id)recentSearches;
- (void)saveRecentSearchWithSearchString:(id)arg1 displayTitle:(id)arg2 uuids:(id)arg3 albumUUID:(id)arg4;
- (id)searchIndex;
- (void)setDelegate:(id)arg1;
- (void)setSearchIndex:(id)arg1;
- (id)suggestedSearchAtIndex:(unsigned int)arg1;
- (void)suggestedSearchHasPendingChanges:(id)arg1;
- (id)suggestedSearchIndex:(id)arg1;
- (id)suggestedSearchPhotoLibrary:(id)arg1;

@end
