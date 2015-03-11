/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@class BLTPBDateComponents, NSString;

@interface BLTPBBehaviorOverrideEffectiveInterval : PBCodable <NSCopying> {
    struct { 
        unsigned int repeatInterval : 1; 
    NSString *_calendarIdentifier;
    BLTPBDateComponents *_endComponents;
    } _has;
    int _repeatInterval;
    BLTPBDateComponents *_startComponents;
}

@property(retain) NSString * calendarIdentifier;
@property(retain) BLTPBDateComponents * endComponents;
@property(readonly) BOOL hasCalendarIdentifier;
@property(readonly) BOOL hasEndComponents;
@property BOOL hasRepeatInterval;
@property(readonly) BOOL hasStartComponents;
@property int repeatInterval;
@property(retain) BLTPBDateComponents * startComponents;

- (void).cxx_destruct;
- (id)calendarIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)endComponents;
- (BOOL)hasCalendarIdentifier;
- (BOOL)hasEndComponents;
- (BOOL)hasRepeatInterval;
- (BOOL)hasStartComponents;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)repeatInterval;
- (void)setCalendarIdentifier:(id)arg1;
- (void)setEndComponents:(id)arg1;
- (void)setHasRepeatInterval:(BOOL)arg1;
- (void)setRepeatInterval:(int)arg1;
- (void)setStartComponents:(id)arg1;
- (id)startComponents;
- (void)writeTo:(id)arg1;

@end
