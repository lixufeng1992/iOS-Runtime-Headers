/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureInput, AVCaptureInputPortInternal, NSString;

@interface AVCaptureInputPort : NSObject {
    AVCaptureInputPortInternal *_internal;
}

@property(readonly) struct OpaqueCMClock { }* clock;
@property(getter=isEnabled) BOOL enabled;
@property(readonly) struct opaqueCMFormatDescription { }* formatDescription;
@property(readonly) AVCaptureInput * input;
@property(readonly) NSString * mediaType;

+ (id)alloc;
+ (BOOL)automaticallyNotifiesObserversOfClock;
+ (id)portWithInput:(id)arg1 mediaType:(id)arg2 formatDescription:(struct opaqueCMFormatDescription { }*)arg3 enabled:(BOOL)arg4;

- (void)_setClock:(struct OpaqueCMClock { }*)arg1;
- (void)_setFormatDescription:(struct opaqueCMFormatDescription { }*)arg1;
- (void)bumpChangeSeed;
- (int)changeSeed;
- (struct OpaqueCMClock { }*)clock;
- (void)dealloc;
- (id)description;
- (id)figCaptureSourceConfigurationForSessionPreset:(id)arg1;
- (struct opaqueCMFormatDescription { }*)formatDescription;
- (id)init;
- (id)initWithInput:(id)arg1 mediaType:(id)arg2 formatDescription:(struct opaqueCMFormatDescription { }*)arg3 enabled:(BOOL)arg4;
- (id)input;
- (BOOL)isEnabled;
- (id)mediaType;
- (void)setEnabled:(BOOL)arg1;
- (void)setOwner:(id)arg1;
- (id)sourceID;
- (id)valueForUndefinedKey:(id)arg1;

@end
