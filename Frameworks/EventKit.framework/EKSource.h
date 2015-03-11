/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class EKAvailabilityCache, EKSourceConstraints, NSDate, NSNumber, NSSet, NSString;

@interface EKSource : EKObject {
    EKAvailabilityCache *_availabilityCache;
    NSString *_cachedHost;
    NSSet *_cachedOwnerAddresses;
    int _cachedPort;
    NSDate *_timeOfLastExternalIdentificationCache;
}

@property(readonly) NSSet * allCalendars;
@property(readonly) EKAvailabilityCache * availabilityCache;
@property(retain) NSString * cachedHost;
@property(retain) NSSet * cachedOwnerAddresses;
@property int cachedPort;
@property(readonly) NSSet * calendars;
@property(readonly) EKSourceConstraints * constraints;
@property(copy) NSNumber * defaultAlarmOffset;
@property(readonly) int displayOrderForNewCalendar;
@property(getter=isEnabled,readonly) BOOL enabled;
@property(copy) NSString * externalID;
@property(copy) NSString * externalModificationTag;
@property(readonly) BOOL isFacebookSource;
@property BOOL onlyCreatorCanModify;
@property(readonly) NSSet * ownerAddresses;
@property(readonly) int preferredEventPrivateValue;
@property(readonly) NSString * serverHost;
@property(readonly) int serverPort;
@property(readonly) NSString * sourceIdentifier;
@property(readonly) int sourceType;
@property(readonly) int strictestEventPrivateValue;
@property(retain) NSDate * timeOfLastExternalIdentificationCache;
@property(copy) NSString * title;
@property(readonly) BOOL wantsCommentPromptWhenDeclining;

+ (id)sourceWithEventStore:(id)arg1;

- (void)_cacheExternalIdentificationIfNeeded;
- (id)_persistentItem;
- (id)allCalendars;
- (id)availabilityCache;
- (id)cachedHost;
- (id)cachedOwnerAddresses;
- (int)cachedPort;
- (id)calendars;
- (id)calendarsForEntityType:(unsigned int)arg1;
- (BOOL)commit:(id*)arg1;
- (id)constraints;
- (void)dealloc;
- (id)defaultAlarmOffset;
- (id)description;
- (int)displayOrderForNewCalendar;
- (id)externalID;
- (id)externalModificationTag;
- (id)init;
- (BOOL)isEnabled;
- (BOOL)isFacebookSource;
- (BOOL)onlyCreatorCanModify;
- (id)ownerAddresses;
- (int)preferredEventPrivateValue;
- (id)readWriteCalendarsForEntityType:(unsigned int)arg1;
- (BOOL)remove:(id*)arg1;
- (id)serverHost;
- (int)serverPort;
- (void)setCachedHost:(id)arg1;
- (void)setCachedOwnerAddresses:(id)arg1;
- (void)setCachedPort:(int)arg1;
- (void)setDefaultAlarmOffset:(id)arg1;
- (void)setExternalID:(id)arg1;
- (void)setExternalModificationTag:(id)arg1;
- (void)setOnlyCreatorCanModify:(BOOL)arg1;
- (void)setTimeOfLastExternalIdentificationCache:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)sourceIdentifier;
- (int)sourceType;
- (int)strictestEventPrivateValue;
- (id)timeOfLastExternalIdentificationCache;
- (id)title;
- (BOOL)wantsCommentPromptWhenDeclining;

@end
