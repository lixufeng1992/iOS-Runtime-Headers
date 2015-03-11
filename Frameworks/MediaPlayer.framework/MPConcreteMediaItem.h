/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPConcreteMediaEntityPropertiesCache, MPMediaLibrary, NSString;

@interface MPConcreteMediaItem : MPMediaItem <NSCoding, NSCopying, MPMediaItemArrayPIDEncodableItem, MPCacheableConcreteMediaEntity> {
    MPMediaLibrary *_library;
    unsigned long long _persistentID;
    MPConcreteMediaEntityPropertiesCache *_propertiesCache;
}

@property(retain,readonly) MPConcreteMediaEntityPropertiesCache * cachedPropertyValues;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (id)concreteMediaItemWithPersistentID:(unsigned long long)arg1 prefetchedProperties:(id)arg2 library:(id)arg3;
+ (id)concreteMediaItemWithPersistentID:(unsigned long long)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithPersistentID:(unsigned long long)arg1 library:(id)arg2 propertiesCache:(id)arg3;
- (id)_nonBatchableOrCachedValueForProperty:(id)arg1 needsFetch:(BOOL*)arg2;
- (id)cachedPropertyValues;
- (id)cachedValueForProperty:(id)arg1;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)didSkipWithPlayedToTime:(double)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateValuesForProperties:(id)arg1 usingBlock:(id)arg2;
- (BOOL)existsInLibrary;
- (void)incrementPlayCountForPlayingToEnd;
- (BOOL)incrementPlayCountForStopTime:(double)arg1;
- (void)incrementSkipCount;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPersistentID:(unsigned long long)arg1 library:(id)arg2;
- (id)initWithPersistentID:(unsigned long long)arg1;
- (void)invalidateCachedProperties;
- (Class)itemArrayCoderPIDDataCodingClass;
- (void)markNominalAmountHasBeenPlayed;
- (id)mediaLibrary;
- (double)nominalHasBeenPlayedThreshold;
- (void)noteWasPlayedToTime:(double)arg1 skipped:(BOOL)arg2;
- (unsigned long long)persistentID;
- (void)reallyIncrementPlayCount;
- (void)setValue:(id)arg1 forProperty:(id)arg2 withCompletionBlock:(id)arg3;
- (BOOL)setValue:(id)arg1 forProperty:(id)arg2;
- (void)updateDateAccessedToCurrentDateWithWriteCompletionBlock:(id)arg1;
- (id)valueForProperty:(id)arg1;
- (id)valuesForProperties:(id)arg1;

@end
