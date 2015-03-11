/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPShareIdentifier, NSMutableArray, NSString;

@interface CKDPShareParticipantCreateRequest : PBRequest <NSCopying> {
    NSString *_invitationImageUrl;
    NSString *_invitationMessage;
    NSMutableArray *_participants;
    CKDPShareIdentifier *_shareId;
}

@property(readonly) BOOL hasInvitationImageUrl;
@property(readonly) BOOL hasInvitationMessage;
@property(readonly) BOOL hasShareId;
@property(retain) NSString * invitationImageUrl;
@property(retain) NSString * invitationMessage;
@property(retain) NSMutableArray * participants;
@property(retain) CKDPShareIdentifier * shareId;

+ (id)options;

- (void).cxx_destruct;
- (void)addParticipant:(id)arg1;
- (void)clearParticipants;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasInvitationImageUrl;
- (BOOL)hasInvitationMessage;
- (BOOL)hasShareId;
- (unsigned int)hash;
- (id)invitationImageUrl;
- (id)invitationMessage;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)participantAtIndex:(unsigned int)arg1;
- (id)participants;
- (unsigned int)participantsCount;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setInvitationImageUrl:(id)arg1;
- (void)setInvitationMessage:(id)arg1;
- (void)setParticipants:(id)arg1;
- (void)setShareId:(id)arg1;
- (id)shareId;
- (void)writeTo:(id)arg1;

@end
