/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UITriggerVC.framework/UITriggerVC
 */

@class CSLUIPBPropertyValue, NSString;

@interface CSLUIPBProperty : PBCodable <NSCopying> {
    NSString *_name;
    CSLUIPBPropertyValue *_value;
}

@property(readonly) BOOL hasName;
@property(readonly) BOOL hasValue;
@property(retain) NSString * name;
@property(retain) CSLUIPBPropertyValue * value;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasName;
- (BOOL)hasValue;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (BOOL)readFrom:(id)arg1;
- (void)setName:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;
- (void)writeTo:(id)arg1;

@end
