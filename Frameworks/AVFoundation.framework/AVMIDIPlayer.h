/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface AVMIDIPlayer : NSObject {
     /* Encoded args for previous method: ^{MIDIPlayerImpl=^{OpaqueMusicPlayer}^{OpaqueMusicSequence}d@?@}8@0:4 */
    void *_impl;
}

@property double currentPosition;
@property(readonly) double duration;
@property(getter=isPlaying,readonly) BOOL playing;
@property float rate;

- (double)beatsForHostTime:(unsigned long long)arg1;
- (double)currentPosition;
- (void)dealloc;
- (void)destroyBase;
- (double)duration;
- (void)finalize;
- (unsigned long long)hostTimeForBeats:(double)arg1;
- (struct MIDIPlayerImpl { struct OpaqueMusicPlayer {} *x1; struct OpaqueMusicSequence {} *x2; double x3; id x4; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x5; id x6; }*)impl;
- (id)initBase;
- (id)initWithContentsOfURL:(id)arg1 soundBankURL:(id)arg2 error:(id*)arg3;
- (id)initWithData:(id)arg1 soundBankURL:(id)arg2 error:(id*)arg3;
- (BOOL)isPlaying;
- (void)play:(id)arg1;
- (void)prepareToPlay;
- (float)rate;
- (void)setCurrentPosition:(double)arg1;
- (void)setRate:(float)arg1;
- (void)stop;

@end
