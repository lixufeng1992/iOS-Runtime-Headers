/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SAMPSearchPodcastStations : SADomainCommand {
}

@property int maxResults;
@property(copy) NSString * stationName;

+ (id)searchPodcastStations;
+ (id)searchPodcastStationsWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (int)maxResults;
- (BOOL)requiresResponse;
- (void)setMaxResults:(int)arg1;
- (void)setStationName:(id)arg1;
- (id)stationName;

@end
