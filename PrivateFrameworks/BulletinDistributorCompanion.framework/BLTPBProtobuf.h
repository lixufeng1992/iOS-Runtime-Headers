/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@class IDSProtobuf, PBCodable;

@interface BLTPBProtobuf : IDSProtobuf {
    BOOL _hasSequenceNumber;
    IDSProtobuf *_idsProtobuf;
    BOOL _isInitialSequenceNumber;
    PBCodable *_protobuf;
    unsigned long long _sequenceNumber;
}

@property BOOL hasSequenceNumber;
@property(retain) IDSProtobuf * idsProtobuf;
@property(readonly) BOOL isInitialSequenceNumber;
@property(retain) PBCodable * protobuf;
@property unsigned long long sequenceNumber;

- (void).cxx_destruct;
- (BOOL)hasSequenceNumber;
- (id)idsProtobuf;
- (id)initWithIDSProtobuf:(id)arg1;
- (id)initWithProtobuf:(id)arg1 type:(unsigned short)arg2 isResponse:(BOOL)arg3 sequenceNumber:(unsigned long long)arg4 isInitialSequenceNumber:(BOOL)arg5;
- (BOOL)isInitialSequenceNumber;
- (id)protobuf;
- (unsigned long long)sequenceNumber;
- (void)setHasSequenceNumber:(BOOL)arg1;
- (void)setIdsProtobuf:(id)arg1;
- (void)setProtobuf:(id)arg1;
- (void)setSequenceNumber:(unsigned long long)arg1;

@end
