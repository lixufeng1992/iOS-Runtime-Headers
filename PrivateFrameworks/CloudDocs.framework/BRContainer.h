/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@class NSData, NSDate, NSMultiReadUniWriteLock, NSMutableDictionary, NSSet, NSString, NSURL;

@interface BRContainer : NSObject <NSSecureCoding> {
    unsigned int _currentStatus;
    long _currentStatusOnceToken;
    NSString *_identifier;
    BOOL _isCloudSyncTCCDisabled;
    BOOL _isInInitialState;
    BOOL _isOverQuota;
    NSDate *_lastServerUpdate;
    long _lastServerUpdateOnceToken;
    NSMutableDictionary *_propertiesByBundleID;
    NSMultiReadUniWriteLock *_readWriteLock;
}

@property(copy,readonly) NSSet * bundleIdentifiers;
@property unsigned int currentStatus;
@property(readonly) unsigned int currentStatus;
@property(readonly) NSSet * documentsTypes;
@property(readonly) NSURL * documentsURL;
@property(readonly) NSSet * exportedTypes;
@property(readonly) NSString * identifier;
@property(readonly) NSSet * importedTypes;
@property BOOL isCloudSyncTCCDisabled;
@property(readonly) BOOL isDocumentScopePublic;
@property BOOL isInInitialState;
@property(retain) NSDate * lastServerUpdate;
@property(retain,readonly) NSDate * lastServerUpdate;
@property(readonly) NSString * localizedName;
@property(getter=isOverQuota) BOOL overQuota;
@property(getter=isOverQuota,readonly) BOOL overQuota;
@property(readonly) NSData * propertiesData;
@property(readonly) NSString * supportedFolderLevels;

+ (void)_generateiOSIconsIntoDict:(id)arg1 usingBundle:(id)arg2;
+ (id)allContainers;
+ (id)allContainersByContainerID;
+ (id)classesForDecoding;
+ (id)containerForContainerID:(id)arg1;
+ (id)containerForItemAtURL:(id)arg1 error:(id*)arg2;
+ (id)containerInRepositoryURL:(id)arg1 createIfMissing:(BOOL)arg2 error:(id*)arg3;
+ (id)containerInRepositoryURL:(id)arg1 error:(id*)arg2;
+ (id)containersRepositoryURL;
+ (id)documentContainers;
+ (id)mangleContainerID:(id)arg1;
+ (void)postContainerListUpdateNotification;
+ (void)postContainerStatusChangeNotificationWithID:(id)arg1 key:(id)arg2 value:(id)arg3;
+ (id)propertiesForContainerID:(id)arg1 usingBundle:(id)arg2 minimumBundleVersion:(id)arg3 bundleIcons:(id*)arg4;
+ (id)readMetadataForContainerID:(id)arg1 fromPlistAtPath:(id)arg2 createIfMissing:(BOOL)arg3 error:(id*)arg4;
+ (BOOL)supportsSecureCoding;
+ (id)unmangleContainerID:(id)arg1;
+ (BOOL)validateContainerID:(id)arg1;
+ (BOOL)versionOfBundle:(id)arg1 changedFromVersion:(id)arg2;

- (id)bundleIdentifiers;
- (id)bundleIdentifiersEnumerator;
- (unsigned int)currentStatus;
- (void)dealloc;
- (id)description;
- (id)documentsTypes;
- (id)documentsURL;
- (void)encodeWithCoder:(id)arg1;
- (id)enumeratorOfBundleProperty:(id)arg1 valuesOfClass:(Class)arg2;
- (id)exportedTypes;
- (BOOL)hasIconWithName:(id)arg1;
- (BOOL)hasMostRecentMetadataForBundleID:(id)arg1;
- (id)iconURLs;
- (id)identifier;
- (id)imageDataForSize:(struct CGSize { float x1; float x2; })arg1 scale:(int)arg2;
- (id)imageRepresentationsAvailable;
- (id)importedTypes;
- (id)initWithCoder:(id)arg1;
- (id)initWithContainerID:(id)arg1 propertiesByBundleID:(id)arg2;
- (BOOL)isCloudSyncTCCDisabled;
- (BOOL)isDocumentScopePublic;
- (BOOL)isInInitialState;
- (BOOL)isOverQuota;
- (id)lastServerUpdate;
- (id)localizedName;
- (id)localizedNameForLocale:(id)arg1;
- (id)mangledID;
- (id)propertiesData;
- (void)setCurrentStatus:(unsigned int)arg1;
- (void)setIsCloudSyncTCCDisabled:(BOOL)arg1;
- (void)setIsInInitialState:(BOOL)arg1;
- (void)setLastServerUpdate:(id)arg1;
- (BOOL)setProperties:(id)arg1 stagedBundleIconPaths:(id)arg2 forBundleIdentifier:(id)arg3 salt:(id)arg4;
- (BOOL)setPropertiesData:(id)arg1 stagedBundleIconPaths:(id)arg2 salt:(id)arg3 refresh:(BOOL)arg4;
- (id)supportedFolderLevels;
- (id)versionNumberForBundleIdentifier:(id)arg1;

@end
