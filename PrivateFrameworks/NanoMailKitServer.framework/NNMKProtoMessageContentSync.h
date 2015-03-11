/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@class NSData, NSMutableArray, NSString;

@interface NNMKProtoMessageContentSync : PBCodable <NSCopying> {
    struct { 
        unsigned int fullSyncVersion : 1; 
        unsigned int mainAlternativeValid : 1; 
        unsigned int partiallyLoaded : 1; 
    NSMutableArray *_attachments;
    NSData *_dateSynced;
    unsigned int _fullSyncVersion;
    } _has;
    BOOL _mainAlternativeValid;
    NSString *_messageId;
    BOOL _partiallyLoaded;
    NSData *_preview;
    NSData *_text;
}

@property(retain) NSMutableArray * attachments;
@property(retain) NSData * dateSynced;
@property unsigned int fullSyncVersion;
@property(readonly) BOOL hasDateSynced;
@property BOOL hasFullSyncVersion;
@property BOOL hasMainAlternativeValid;
@property(readonly) BOOL hasMessageId;
@property BOOL hasPartiallyLoaded;
@property(readonly) BOOL hasPreview;
@property(readonly) BOOL hasText;
@property BOOL mainAlternativeValid;
@property(retain) NSString * messageId;
@property BOOL partiallyLoaded;
@property(retain) NSData * preview;
@property(retain) NSData * text;

- (void).cxx_destruct;
- (void)addAttachment:(id)arg1;
- (id)attachmentAtIndex:(unsigned int)arg1;
- (id)attachments;
- (unsigned int)attachmentsCount;
- (void)clearAttachments;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateSynced;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)fullSyncVersion;
- (BOOL)hasDateSynced;
- (BOOL)hasFullSyncVersion;
- (BOOL)hasMainAlternativeValid;
- (BOOL)hasMessageId;
- (BOOL)hasPartiallyLoaded;
- (BOOL)hasPreview;
- (BOOL)hasText;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)mainAlternativeValid;
- (void)mergeFrom:(id)arg1;
- (id)messageId;
- (BOOL)partiallyLoaded;
- (id)preview;
- (BOOL)readFrom:(id)arg1;
- (void)setAttachments:(id)arg1;
- (void)setDateSynced:(id)arg1;
- (void)setFullSyncVersion:(unsigned int)arg1;
- (void)setHasFullSyncVersion:(BOOL)arg1;
- (void)setHasMainAlternativeValid:(BOOL)arg1;
- (void)setHasPartiallyLoaded:(BOOL)arg1;
- (void)setMainAlternativeValid:(BOOL)arg1;
- (void)setMessageId:(id)arg1;
- (void)setPartiallyLoaded:(BOOL)arg1;
- (void)setPreview:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;
- (void)writeTo:(id)arg1;

@end
