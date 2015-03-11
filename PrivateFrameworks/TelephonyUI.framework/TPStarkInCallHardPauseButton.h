/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class <TPStarkHardPauseButtonDelegate>;

@interface TPStarkInCallHardPauseButton : UIButton {
    <TPStarkHardPauseButtonDelegate> *_delegate;
}

@property <TPStarkHardPauseButtonDelegate> * delegate;

- (void)dealloc;
- (id)delegate;
- (void)hardPauseControllerChangedNotification:(id)arg1;
- (void)hardPausePressed;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)updateHardPauseButtonState;

@end
