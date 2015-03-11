/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPDate, CKDPIdentifier;

@interface CKDPPulseData : PBCodable <NSCopying> {
    struct { 
        unsigned int customState : 1; 
        unsigned int stateTTLMillis : 1; 
        unsigned int state : 1; 
    long long _customState;
    } _has;
    CKDPDate *_lastCustom;
    CKDPDate *_lastEdited;
    CKDPDate *_lastInvisible;
    CKDPDate *_lastViewed;
    int _state;
    long long _stateTTLMillis;
    CKDPIdentifier *_user;
}

@property long long customState;
@property BOOL hasCustomState;
@property(readonly) BOOL hasLastCustom;
@property(readonly) BOOL hasLastEdited;
@property(readonly) BOOL hasLastInvisible;
@property(readonly) BOOL hasLastViewed;
@property BOOL hasState;
@property BOOL hasStateTTLMillis;
@property(readonly) BOOL hasUser;
@property(retain) CKDPDate * lastCustom;
@property(retain) CKDPDate * lastEdited;
@property(retain) CKDPDate * lastInvisible;
@property(retain) CKDPDate * lastViewed;
@property int state;
@property long long stateTTLMillis;
@property(retain) CKDPIdentifier * user;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)customState;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCustomState;
- (BOOL)hasLastCustom;
- (BOOL)hasLastEdited;
- (BOOL)hasLastInvisible;
- (BOOL)hasLastViewed;
- (BOOL)hasState;
- (BOOL)hasStateTTLMillis;
- (BOOL)hasUser;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)lastCustom;
- (id)lastEdited;
- (id)lastInvisible;
- (id)lastViewed;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setCustomState:(long long)arg1;
- (void)setHasCustomState:(BOOL)arg1;
- (void)setHasState:(BOOL)arg1;
- (void)setHasStateTTLMillis:(BOOL)arg1;
- (void)setLastCustom:(id)arg1;
- (void)setLastEdited:(id)arg1;
- (void)setLastInvisible:(id)arg1;
- (void)setLastViewed:(id)arg1;
- (void)setState:(int)arg1;
- (void)setStateTTLMillis:(long long)arg1;
- (void)setUser:(id)arg1;
- (int)state;
- (long long)stateTTLMillis;
- (id)user;
- (void)writeTo:(id)arg1;

@end
