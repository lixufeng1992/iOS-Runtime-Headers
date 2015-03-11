/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

@class NSString;

@interface NACVolumeControlAvailabilityMessage : PBCodable <NSCopying> {
    struct { 
        unsigned int volumeControlAvailable : 1; 
    NSString *_category;
    } _has;
    BOOL _volumeControlAvailable;
}

@property(retain) NSString * category;
@property(readonly) BOOL hasCategory;
@property BOOL hasVolumeControlAvailable;
@property BOOL volumeControlAvailable;

- (void).cxx_destruct;
- (id)category;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCategory;
- (BOOL)hasVolumeControlAvailable;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setHasVolumeControlAvailable:(BOOL)arg1;
- (void)setVolumeControlAvailable:(BOOL)arg1;
- (BOOL)volumeControlAvailable;
- (void)writeTo:(id)arg1;

@end
