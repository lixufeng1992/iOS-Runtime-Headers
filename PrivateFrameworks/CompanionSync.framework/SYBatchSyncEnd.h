/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@class NSString, SYErrorInfo, SYMessageHeader;

@interface SYBatchSyncEnd : PBCodable <NSCopying> {
    SYErrorInfo *_error;
    SYMessageHeader *_header;
    NSString *_syncID;
}

@property(retain) SYErrorInfo * error;
@property(readonly) BOOL hasError;
@property(retain) SYMessageHeader * header;
@property(retain) NSString * syncID;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)error;
- (BOOL)hasError;
- (unsigned int)hash;
- (id)header;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setError:(id)arg1;
- (void)setHeader:(id)arg1;
- (void)setSyncID:(id)arg1;
- (id)syncID;
- (void)writeTo:(id)arg1;

@end
