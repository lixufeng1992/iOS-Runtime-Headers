/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@class NSString;

@interface BLTPBRemoveBulletinRequest : PBRequest <NSCopying> {
    NSString *_publisherBulletinID;
    NSString *_recordID;
    NSString *_sectionID;
}

@property(readonly) BOOL hasPublisherBulletinID;
@property(readonly) BOOL hasRecordID;
@property(readonly) BOOL hasSectionID;
@property(retain) NSString * publisherBulletinID;
@property(retain) NSString * recordID;
@property(retain) NSString * sectionID;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasPublisherBulletinID;
- (BOOL)hasRecordID;
- (BOOL)hasSectionID;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)publisherBulletinID;
- (BOOL)readFrom:(id)arg1;
- (id)recordID;
- (id)sectionID;
- (void)setPublisherBulletinID:(id)arg1;
- (void)setRecordID:(id)arg1;
- (void)setSectionID:(id)arg1;
- (void)writeTo:(id)arg1;

@end
