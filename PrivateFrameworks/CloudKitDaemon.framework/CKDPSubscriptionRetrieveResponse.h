/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSMutableArray;

@interface CKDPSubscriptionRetrieveResponse : PBCodable <NSCopying> {
    NSMutableArray *_subscriptions;
}

@property(retain) NSMutableArray * subscriptions;

- (void).cxx_destruct;
- (void)addSubscriptions:(id)arg1;
- (void)clearSubscriptions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setSubscriptions:(id)arg1;
- (id)subscriptions;
- (id)subscriptionsAtIndex:(unsigned int)arg1;
- (unsigned int)subscriptionsCount;
- (void)writeTo:(id)arg1;

@end
