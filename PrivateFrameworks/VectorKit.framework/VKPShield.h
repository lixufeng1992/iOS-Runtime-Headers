/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSMutableArray, NSString, VKPGenericShieldStyleInfo;

@interface VKPShield : PBCodable <NSCopying> {
    VKPGenericShieldStyleInfo *_genericShieldStyleInfo;
    NSString *_identifier;
    NSMutableArray *_variants;
}

@property(retain) VKPGenericShieldStyleInfo * genericShieldStyleInfo;
@property(readonly) BOOL hasGenericShieldStyleInfo;
@property(retain) NSString * identifier;
@property(retain) NSMutableArray * variants;

- (void)addVariants:(id)arg1;
- (void)clearVariants;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)genericShieldStyleInfo;
- (BOOL)hasGenericShieldStyleInfo;
- (unsigned int)hash;
- (id)identifier;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setGenericShieldStyleInfo:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setVariants:(id)arg1;
- (id)variants;
- (id)variantsAtIndex:(unsigned int)arg1;
- (unsigned int)variantsCount;
- (void)writeTo:(id)arg1;

@end
