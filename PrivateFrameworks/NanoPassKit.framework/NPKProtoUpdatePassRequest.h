/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@class NPKProtoCatalog, NPKProtoHash, NPKProtoPass, NSData;

@interface NPKProtoUpdatePassRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int lastKnownResyncID : 1; 
        unsigned int resyncID : 1; 
    NPKProtoCatalog *_catalog;
    } _has;
    unsigned int _lastKnownResyncID;
    NPKProtoHash *_libraryHash;
    NPKProtoPass *_pass;
    NSData *_previousManifestHash;
    unsigned int _resyncID;
}

@property(retain) NPKProtoCatalog * catalog;
@property(readonly) BOOL hasCatalog;
@property BOOL hasLastKnownResyncID;
@property(readonly) BOOL hasLibraryHash;
@property(readonly) BOOL hasPreviousManifestHash;
@property BOOL hasResyncID;
@property unsigned int lastKnownResyncID;
@property(retain) NPKProtoHash * libraryHash;
@property(retain) NPKProtoPass * pass;
@property(retain) NSData * previousManifestHash;
@property unsigned int resyncID;

- (void).cxx_destruct;
- (id)catalog;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCatalog;
- (BOOL)hasLastKnownResyncID;
- (BOOL)hasLibraryHash;
- (BOOL)hasPreviousManifestHash;
- (BOOL)hasResyncID;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)lastKnownResyncID;
- (id)libraryHash;
- (void)mergeFrom:(id)arg1;
- (id)pass;
- (id)previousManifestHash;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)resyncID;
- (void)setCatalog:(id)arg1;
- (void)setHasLastKnownResyncID:(BOOL)arg1;
- (void)setHasResyncID:(BOOL)arg1;
- (void)setLastKnownResyncID:(unsigned int)arg1;
- (void)setLibraryHash:(id)arg1;
- (void)setPass:(id)arg1;
- (void)setPreviousManifestHash:(id)arg1;
- (void)setResyncID:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
