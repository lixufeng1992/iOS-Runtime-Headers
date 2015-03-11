/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@class NSData, NSString;

@interface _NMRCommandOptionsProtobuf : PBCodable <NSCopying> {
    struct { 
        unsigned int playbackPosition : 1; 
        unsigned int radioStationID : 1; 
        unsigned int trackID : 1; 
        unsigned int playbackRate : 1; 
        unsigned int rating : 1; 
        unsigned int repeatMode : 1; 
        unsigned int sendOptions : 1; 
        unsigned int shuffleMode : 1; 
        unsigned int skipInterval : 1; 
        unsigned int externalPlayerCommand : 1; 
        unsigned int negative : 1; 
        unsigned int requestDefermentToPlaybackQueuePosition : 1; 
    NSString *_destinationAppDisplayID;
    BOOL _externalPlayerCommand;
    } _has;
    NSString *_mediaType;
    BOOL _negative;
    double _playbackPosition;
    float _playbackRate;
    NSString *_radioStationHash;
    long long _radioStationID;
    float _rating;
    int _repeatMode;
    BOOL _requestDefermentToPlaybackQueuePosition;
    unsigned int _sendOptions;
    int _shuffleMode;
    float _skipInterval;
    NSString *_sourceID;
    NSData *_systemAppPlaybackQueueData;
    unsigned long long _trackID;
}

@property(retain) NSString * destinationAppDisplayID;
@property BOOL externalPlayerCommand;
@property(readonly) BOOL hasDestinationAppDisplayID;
@property BOOL hasExternalPlayerCommand;
@property(readonly) BOOL hasMediaType;
@property BOOL hasNegative;
@property BOOL hasPlaybackPosition;
@property BOOL hasPlaybackRate;
@property(readonly) BOOL hasRadioStationHash;
@property BOOL hasRadioStationID;
@property BOOL hasRating;
@property BOOL hasRepeatMode;
@property BOOL hasRequestDefermentToPlaybackQueuePosition;
@property BOOL hasSendOptions;
@property BOOL hasShuffleMode;
@property BOOL hasSkipInterval;
@property(readonly) BOOL hasSourceID;
@property(readonly) BOOL hasSystemAppPlaybackQueueData;
@property BOOL hasTrackID;
@property(retain) NSString * mediaType;
@property BOOL negative;
@property double playbackPosition;
@property float playbackRate;
@property(retain) NSString * radioStationHash;
@property long long radioStationID;
@property float rating;
@property int repeatMode;
@property BOOL requestDefermentToPlaybackQueuePosition;
@property unsigned int sendOptions;
@property int shuffleMode;
@property float skipInterval;
@property(retain) NSString * sourceID;
@property(retain) NSData * systemAppPlaybackQueueData;
@property unsigned long long trackID;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destinationAppDisplayID;
- (id)dictionaryRepresentation;
- (BOOL)externalPlayerCommand;
- (BOOL)hasDestinationAppDisplayID;
- (BOOL)hasExternalPlayerCommand;
- (BOOL)hasMediaType;
- (BOOL)hasNegative;
- (BOOL)hasPlaybackPosition;
- (BOOL)hasPlaybackRate;
- (BOOL)hasRadioStationHash;
- (BOOL)hasRadioStationID;
- (BOOL)hasRating;
- (BOOL)hasRepeatMode;
- (BOOL)hasRequestDefermentToPlaybackQueuePosition;
- (BOOL)hasSendOptions;
- (BOOL)hasShuffleMode;
- (BOOL)hasSkipInterval;
- (BOOL)hasSourceID;
- (BOOL)hasSystemAppPlaybackQueueData;
- (BOOL)hasTrackID;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)mediaType;
- (void)mergeFrom:(id)arg1;
- (BOOL)negative;
- (double)playbackPosition;
- (float)playbackRate;
- (id)radioStationHash;
- (long long)radioStationID;
- (float)rating;
- (BOOL)readFrom:(id)arg1;
- (int)repeatMode;
- (BOOL)requestDefermentToPlaybackQueuePosition;
- (unsigned int)sendOptions;
- (void)setDestinationAppDisplayID:(id)arg1;
- (void)setExternalPlayerCommand:(BOOL)arg1;
- (void)setHasExternalPlayerCommand:(BOOL)arg1;
- (void)setHasNegative:(BOOL)arg1;
- (void)setHasPlaybackPosition:(BOOL)arg1;
- (void)setHasPlaybackRate:(BOOL)arg1;
- (void)setHasRadioStationID:(BOOL)arg1;
- (void)setHasRating:(BOOL)arg1;
- (void)setHasRepeatMode:(BOOL)arg1;
- (void)setHasRequestDefermentToPlaybackQueuePosition:(BOOL)arg1;
- (void)setHasSendOptions:(BOOL)arg1;
- (void)setHasShuffleMode:(BOOL)arg1;
- (void)setHasSkipInterval:(BOOL)arg1;
- (void)setHasTrackID:(BOOL)arg1;
- (void)setMediaType:(id)arg1;
- (void)setNegative:(BOOL)arg1;
- (void)setPlaybackPosition:(double)arg1;
- (void)setPlaybackRate:(float)arg1;
- (void)setRadioStationHash:(id)arg1;
- (void)setRadioStationID:(long long)arg1;
- (void)setRating:(float)arg1;
- (void)setRepeatMode:(int)arg1;
- (void)setRequestDefermentToPlaybackQueuePosition:(BOOL)arg1;
- (void)setSendOptions:(unsigned int)arg1;
- (void)setShuffleMode:(int)arg1;
- (void)setSkipInterval:(float)arg1;
- (void)setSourceID:(id)arg1;
- (void)setSystemAppPlaybackQueueData:(id)arg1;
- (void)setTrackID:(unsigned long long)arg1;
- (int)shuffleMode;
- (float)skipInterval;
- (id)sourceID;
- (id)systemAppPlaybackQueueData;
- (unsigned long long)trackID;
- (void)writeTo:(id)arg1;

@end
