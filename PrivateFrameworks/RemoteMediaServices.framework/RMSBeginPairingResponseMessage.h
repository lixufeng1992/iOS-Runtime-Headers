/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSBeginPairingResponseMessage : PBCodable <NSCopying> {
    struct { 
        unsigned int responseCode : 1; 
        unsigned int sessionIdentifier : 1; 
    } _has;
    int _responseCode;
    int _sessionIdentifier;
}

@property BOOL hasResponseCode;
@property BOOL hasSessionIdentifier;
@property int responseCode;
@property int sessionIdentifier;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasResponseCode;
- (BOOL)hasSessionIdentifier;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)responseCode;
- (int)sessionIdentifier;
- (void)setHasResponseCode:(BOOL)arg1;
- (void)setHasSessionIdentifier:(BOOL)arg1;
- (void)setResponseCode:(int)arg1;
- (void)setSessionIdentifier:(int)arg1;
- (void)writeTo:(id)arg1;

@end
