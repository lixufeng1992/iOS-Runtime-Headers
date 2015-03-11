/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@class BLTPBSectionIcon, NSString;

@interface BLTPBSetSectionSubtypeParametersIconRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int subtypeID : 1; 
        unsigned int defaultSubtype : 1; 
    BOOL _defaultSubtype;
    } _has;
    BLTPBSectionIcon *_icon;
    NSString *_sectionID;
    unsigned long long _subtypeID;
}

@property BOOL defaultSubtype;
@property BOOL hasDefaultSubtype;
@property(readonly) BOOL hasIcon;
@property(readonly) BOOL hasSectionID;
@property BOOL hasSubtypeID;
@property(retain) BLTPBSectionIcon * icon;
@property(retain) NSString * sectionID;
@property unsigned long long subtypeID;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)defaultSubtype;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasDefaultSubtype;
- (BOOL)hasIcon;
- (BOOL)hasSectionID;
- (BOOL)hasSubtypeID;
- (unsigned int)hash;
- (id)icon;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)sectionID;
- (void)setDefaultSubtype:(BOOL)arg1;
- (void)setHasDefaultSubtype:(BOOL)arg1;
- (void)setHasSubtypeID:(BOOL)arg1;
- (void)setIcon:(id)arg1;
- (void)setSectionID:(id)arg1;
- (void)setSubtypeID:(unsigned long long)arg1;
- (unsigned long long)subtypeID;
- (void)writeTo:(id)arg1;

@end
