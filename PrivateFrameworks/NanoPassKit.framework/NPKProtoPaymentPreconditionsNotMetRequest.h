/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@class NSMutableArray;

@interface NPKProtoPaymentPreconditionsNotMetRequest : PBRequest <NSCopying> {
    int _failedPrecondition;
    NSMutableArray *_passIDs;
}

@property int failedPrecondition;
@property(retain) NSMutableArray * passIDs;

- (void).cxx_destruct;
- (void)addPassIDs:(id)arg1;
- (void)clearPassIDs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)failedPrecondition;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)passIDs;
- (id)passIDsAtIndex:(unsigned int)arg1;
- (unsigned int)passIDsCount;
- (BOOL)readFrom:(id)arg1;
- (void)setFailedPrecondition:(int)arg1;
- (void)setPassIDs:(id)arg1;
- (void)writeTo:(id)arg1;

@end
