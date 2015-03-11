/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class MIPAlbum, MIPArtist, MIPGenre, MIPPlaybackInfo, NSString;

@interface MIPSong : PBCodable <NSCopying> {
    struct { 
        unsigned int geniusId : 1; 
        unsigned int audioFormat : 1; 
        unsigned int discNumber : 1; 
        unsigned int trackNumber : 1; 
        unsigned int userRating : 1; 
        unsigned int excludeFromShuffle : 1; 
        unsigned int hasVideo : 1; 
    MIPAlbum *_album;
    MIPArtist *_artist;
    int _audioFormat;
    MIPArtist *_composer;
    int _discNumber;
    BOOL _excludeFromShuffle;
    long long _geniusId;
    MIPGenre *_genre;
    } _has;
    BOOL _hasVideo;
    NSString *_lyrics;
    MIPPlaybackInfo *_playbackInfo;
    int _trackNumber;
    int _userRating;
}

@property(retain) MIPAlbum * album;
@property(retain) MIPArtist * artist;
@property int audioFormat;
@property(retain) MIPArtist * composer;
@property int discNumber;
@property BOOL excludeFromShuffle;
@property long long geniusId;
@property(retain) MIPGenre * genre;
@property(readonly) BOOL hasAlbum;
@property(readonly) BOOL hasArtist;
@property BOOL hasAudioFormat;
@property(readonly) BOOL hasComposer;
@property BOOL hasDiscNumber;
@property BOOL hasExcludeFromShuffle;
@property BOOL hasGeniusId;
@property(readonly) BOOL hasGenre;
@property BOOL hasHasVideo;
@property(readonly) BOOL hasLyrics;
@property(readonly) BOOL hasPlaybackInfo;
@property BOOL hasTrackNumber;
@property BOOL hasUserRating;
@property BOOL hasVideo;
@property(retain) NSString * lyrics;
@property(retain) MIPPlaybackInfo * playbackInfo;
@property int trackNumber;
@property int userRating;

- (void).cxx_destruct;
- (id)album;
- (id)artist;
- (int)audioFormat;
- (id)composer;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)discNumber;
- (BOOL)excludeFromShuffle;
- (long long)geniusId;
- (id)genre;
- (BOOL)hasAlbum;
- (BOOL)hasArtist;
- (BOOL)hasAudioFormat;
- (BOOL)hasComposer;
- (BOOL)hasDiscNumber;
- (BOOL)hasExcludeFromShuffle;
- (BOOL)hasGeniusId;
- (BOOL)hasGenre;
- (BOOL)hasHasVideo;
- (BOOL)hasLyrics;
- (BOOL)hasPlaybackInfo;
- (BOOL)hasTrackNumber;
- (BOOL)hasUserRating;
- (BOOL)hasVideo;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)lyrics;
- (void)mergeFrom:(id)arg1;
- (id)playbackInfo;
- (BOOL)readFrom:(id)arg1;
- (void)setAlbum:(id)arg1;
- (void)setArtist:(id)arg1;
- (void)setAudioFormat:(int)arg1;
- (void)setComposer:(id)arg1;
- (void)setDiscNumber:(int)arg1;
- (void)setExcludeFromShuffle:(BOOL)arg1;
- (void)setGeniusId:(long long)arg1;
- (void)setGenre:(id)arg1;
- (void)setHasAudioFormat:(BOOL)arg1;
- (void)setHasDiscNumber:(BOOL)arg1;
- (void)setHasExcludeFromShuffle:(BOOL)arg1;
- (void)setHasGeniusId:(BOOL)arg1;
- (void)setHasHasVideo:(BOOL)arg1;
- (void)setHasTrackNumber:(BOOL)arg1;
- (void)setHasUserRating:(BOOL)arg1;
- (void)setHasVideo:(BOOL)arg1;
- (void)setLyrics:(id)arg1;
- (void)setPlaybackInfo:(id)arg1;
- (void)setTrackNumber:(int)arg1;
- (void)setUserRating:(int)arg1;
- (int)trackNumber;
- (int)userRating;
- (void)writeTo:(id)arg1;

@end
