/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@class NSString;

@interface TUProxyCall : TUCall <NSSecureCoding> {
    int _callIdentifier;
    NSString *_callerNameFromNetwork;
    NSString *_conferenceIdentifier;
    BOOL _conferenced;
    NSString *_destinationID;
    BOOL _outgoing;
    int _service;
    double _startTime;
    int _status;
    BOOL _voicemail;
}

@property int callIdentifier;
@property(copy) NSString * callerNameFromNetwork;
@property(retain) NSString * conferenceIdentifier;
@property(getter=isConferenced) BOOL conferenced;
@property(copy) NSString * destinationID;
@property(copy) NSString * displayName;
@property(getter=isOutgoing) BOOL outgoing;
@property int service;
@property double startTime;
@property int status;
@property(getter=isVoicemail) BOOL voicemail;

+ (BOOL)supportsSecureCoding;

- (void)answerWithSourceIdentifier:(id)arg1;
- (id)audioCategory;
- (id)audioMode;
- (double)callDuration;
- (int)callIdentifier;
- (id)callUUID;
- (id)callerNameFromNetwork;
- (id)conferenceIdentifier;
- (void)dealloc;
- (id)destinationID;
- (void)disconnect;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (void)hold;
- (id)initWithCall:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDestinationID:(id)arg1 service:(int)arg2 status:(int)arg3 sourceIdentifier:(id)arg4 outgoing:(BOOL)arg5 conferenceIdentifier:(id)arg6 voicemail:(BOOL)arg7 callerNameFromNetwork:(id)arg8;
- (BOOL)isConferenced;
- (BOOL)isDownlinkMuted;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isHostedOnCurrentDevice;
- (BOOL)isOutgoing;
- (BOOL)isSendingAudio;
- (BOOL)isUplinkMuted;
- (BOOL)isVoicemail;
- (void)joinConference;
- (void)leaveConference;
- (id)localFrequency;
- (BOOL)managesAudioInterruptions;
- (void)playDTMFToneForKey:(unsigned char)arg1;
- (id)remoteFrequency;
- (int)service;
- (void)setCallIdentifier:(int)arg1;
- (void)setCallerNameFromNetwork:(id)arg1;
- (void)setConferenceIdentifier:(id)arg1;
- (void)setConferenced:(BOOL)arg1;
- (void)setDestinationID:(id)arg1;
- (BOOL)setDownlinkMuted:(BOOL)arg1;
- (void)setIsSendingAudio:(BOOL)arg1;
- (void)setOutgoing:(BOOL)arg1;
- (void)setService:(int)arg1;
- (void)setStartTime:(double)arg1;
- (void)setStatus:(int)arg1;
- (BOOL)setUplinkMuted:(BOOL)arg1;
- (void)setVoicemail:(BOOL)arg1;
- (double)startTime;
- (int)status;
- (int)supportedModelType;
- (BOOL)supportsRelayingAudioOrVideo;
- (BOOL)supportsRelayingCallState;
- (void)unhold;
- (void)updateWithCall:(id)arg1;

@end
