/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@class NSData, NSMutableArray, NSString;

@interface NNMKProtoMessage : PBCodable <NSCopying> {
    struct { 
        unsigned int status : 1; 
    NSString *_accountId;
    NSMutableArray *_ccs;
    NSString *_conversationId;
    NSData *_dateReceived;
    NSData *_dateSent;
    NSString *_from;
    } _has;
    NSString *_messageId;
    NSString *_messageIdHeader;
    unsigned int _status;
    NSString *_subject;
    NSMutableArray *_tos;
}

@property(retain) NSString * accountId;
@property(retain) NSMutableArray * ccs;
@property(retain) NSString * conversationId;
@property(retain) NSData * dateReceived;
@property(retain) NSData * dateSent;
@property(retain) NSString * from;
@property(readonly) BOOL hasAccountId;
@property(readonly) BOOL hasConversationId;
@property(readonly) BOOL hasDateReceived;
@property(readonly) BOOL hasDateSent;
@property(readonly) BOOL hasFrom;
@property(readonly) BOOL hasMessageId;
@property(readonly) BOOL hasMessageIdHeader;
@property BOOL hasStatus;
@property(readonly) BOOL hasSubject;
@property(retain) NSString * messageId;
@property(retain) NSString * messageIdHeader;
@property unsigned int status;
@property(retain) NSString * subject;
@property(retain) NSMutableArray * tos;

- (void).cxx_destruct;
- (id)accountId;
- (void)addCc:(id)arg1;
- (void)addTo:(id)arg1;
- (id)ccAtIndex:(unsigned int)arg1;
- (id)ccs;
- (unsigned int)ccsCount;
- (void)clearCcs;
- (void)clearTos;
- (id)conversationId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateReceived;
- (id)dateSent;
- (id)description;
- (id)dictionaryRepresentation;
- (id)from;
- (BOOL)hasAccountId;
- (BOOL)hasConversationId;
- (BOOL)hasDateReceived;
- (BOOL)hasDateSent;
- (BOOL)hasFrom;
- (BOOL)hasMessageId;
- (BOOL)hasMessageIdHeader;
- (BOOL)hasStatus;
- (BOOL)hasSubject;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)messageId;
- (id)messageIdHeader;
- (BOOL)readFrom:(id)arg1;
- (void)setAccountId:(id)arg1;
- (void)setCcs:(id)arg1;
- (void)setConversationId:(id)arg1;
- (void)setDateReceived:(id)arg1;
- (void)setDateSent:(id)arg1;
- (void)setFrom:(id)arg1;
- (void)setHasStatus:(BOOL)arg1;
- (void)setMessageId:(id)arg1;
- (void)setMessageIdHeader:(id)arg1;
- (void)setStatus:(unsigned int)arg1;
- (void)setSubject:(id)arg1;
- (void)setTos:(id)arg1;
- (unsigned int)status;
- (id)subject;
- (id)toAtIndex:(unsigned int)arg1;
- (id)tos;
- (unsigned int)tosCount;
- (void)writeTo:(id)arg1;

@end
