/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class <TPDialerKeypadDelegate>, NSString, TPDialerSoundController;

@interface TPDialerNumberPad : TPNumberPad <TPDialerKeypadProtocol> {
    <TPDialerKeypadDelegate> *_delegate;
    BOOL _playsSounds;
    TPDialerSoundController *_soundController;
}

@property(copy,readonly) NSString * debugDescription;
@property <TPDialerKeypadDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property BOOL playsSounds;
@property(retain) TPDialerSoundController * soundController;
@property(readonly) Class superclass;

+ (id)dialerNumberPadFullCharacters;
+ (id)dialerNumberPadNumericCharacters;

- (void)buttonDown:(id)arg1;
- (void)buttonLongPressed:(id)arg1;
- (void)buttonTapped:(id)arg1;
- (void)buttonUp:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)highlightKeyAtIndex:(int)arg1;
- (int)indexForHighlightedKey;
- (BOOL)playsSounds;
- (void)setDelegate:(id)arg1;
- (void)setPlaysSounds:(BOOL)arg1;
- (void)setSoundController:(id)arg1;
- (void)setSupportsHardPause:(BOOL)arg1;
- (id)soundController;
- (BOOL)supportsHardPause;

@end
