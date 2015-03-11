/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@class NSString;

@interface NNMKProtoAccountDeletion : PBCodable <NSCopying> {
    NSString *_accountId;
}

@property(retain) NSString * accountId;
@property(readonly) BOOL hasAccountId;

- (void).cxx_destruct;
- (id)accountId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAccountId;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAccountId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
