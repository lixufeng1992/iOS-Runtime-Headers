/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@class NSString;

@interface NPKProtoMarkPaymentPassForDeleteRequest : PBRequest <NSCopying> {
    NSString *_passID;
}

@property(retain) NSString * passID;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)passID;
- (BOOL)readFrom:(id)arg1;
- (void)setPassID:(id)arg1;
- (void)writeTo:(id)arg1;

@end
