/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SAMPBasicPodcastAppSearch : SADomainCommand {
}

@property BOOL acceptPodcastCollections;
@property BOOL acceptPodcastStations;
@property int maxResults;
@property(copy) NSString * query;

+ (id)basicPodcastAppSearch;
+ (id)basicPodcastAppSearchWithDictionary:(id)arg1 context:(id)arg2;

- (BOOL)acceptPodcastCollections;
- (BOOL)acceptPodcastStations;
- (id)encodedClassName;
- (id)groupIdentifier;
- (int)maxResults;
- (id)query;
- (BOOL)requiresResponse;
- (void)setAcceptPodcastCollections:(BOOL)arg1;
- (void)setAcceptPodcastStations:(BOOL)arg1;
- (void)setMaxResults:(int)arg1;
- (void)setQuery:(id)arg1;

@end
