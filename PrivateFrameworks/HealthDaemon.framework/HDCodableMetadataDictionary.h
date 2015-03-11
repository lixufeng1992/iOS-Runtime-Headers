/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@class NSMutableArray;

@interface HDCodableMetadataDictionary : PBCodable <NSCopying> {
    NSMutableArray *_keyValuePairs;
}

@property(retain) NSMutableArray * keyValuePairs;

- (void).cxx_destruct;
- (void)addKeyValuePairs:(id)arg1;
- (void)clearKeyValuePairs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)keyValuePairs;
- (id)keyValuePairsAtIndex:(unsigned int)arg1;
- (unsigned int)keyValuePairsCount;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setKeyValuePairs:(id)arg1;
- (void)writeTo:(id)arg1;

@end
