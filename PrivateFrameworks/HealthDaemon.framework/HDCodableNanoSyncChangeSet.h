/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@class NSMutableArray, NSString;

@interface HDCodableNanoSyncChangeSet : PBCodable <HDNanoSyncDescription, HDNanoSyncPersistentUserInfoCopying, NSCopying> {
    NSMutableArray *_changes;
}

@property(retain) NSMutableArray * changes;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(readonly) Class superclass;

+ (id)changeSetWithChanges:(id)arg1;
+ (id)persistentUserInfoKey;
+ (id)retreiveFromPersistentUserInfo:(id)arg1;

- (void).cxx_destruct;
- (void)addChanges:(id)arg1;
- (void)addToPersistentUserInfo:(id)arg1;
- (id)changes;
- (id)changesAtIndex:(unsigned int)arg1;
- (unsigned int)changesCount;
- (void)clearChanges;
- (id)copyForPersistentUserInfo;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)nanoSyncDescription;
- (BOOL)readFrom:(id)arg1;
- (void)setChanges:(id)arg1;
- (void)writeTo:(id)arg1;

@end
