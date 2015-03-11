/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class <MPDetailSliderDelegate>, MPDetailScrubController, NSString, NSTimer, UIImageView, UILabel, UIView;

@interface MPDetailSlider : UISlider <MPDetailedScrubbing, MPDetailScrubControllerDelegate> {
    struct CGPoint { 
        float x; 
        float y; 
    BOOL _allowsScrubbing;
    BOOL _autoscrubActive;
    NSTimer *_autoscrubTimer;
    double _availableDuration;
    BOOL _canCommit;
    double _currentTime;
    UILabel *_currentTimeInverseLabel;
    UILabel *_currentTimeLabel;
    <MPDetailSliderDelegate> *_delegate;
    float _detailScrubbingVerticalRange;
    UIView *_downloadingTrackOverlay;
    double _duration;
    UIImageView *_glowDetailScrubImageView;
    BOOL _isTracking;
    float _maxTrackWidth;
    float _minTimeLabelWidth;
    } _previousLocationInView;
    MPDetailScrubController *_scrubController;
    int _style;
    UIImageView *_thumbImageView;
    int _timeLabelStyle;
    float _trackInset;
}

@property BOOL allowsDetailScrubbing;
@property BOOL allowsScrubbing;
@property double availableDuration;
@property(copy,readonly) NSString * debugDescription;
@property <MPDetailSliderDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) BOOL detailScrubbingAvailableForCurrentDuration;
@property float detailScrubbingVerticalRange;
@property double duration;
@property(readonly) unsigned int hash;
@property(readonly) NSString * localizedScrubSpeedText;
@property float minTimeLabelWidth;
@property(readonly) Class superclass;
@property int timeLabelStyle;

+ (Class)labelClass;

- (void).cxx_destruct;
- (void)_autoscrubTick:(id)arg1;
- (id)_colorSliceImageWithColor:(id)arg1 height:(float)arg2;
- (void)_commitValue;
- (id)_modernThumbImageWithColor:(id)arg1 height:(float)arg2 includeShadow:(BOOL)arg3;
- (void)_resetScrubInfo;
- (void)_setValueWhileTracking:(float)arg1 duration:(double)arg2;
- (void)_setupControlsForStyle;
- (id)_stringForCurrentTime:(double)arg1;
- (id)_stringForInverseCurrentTime:(double)arg1;
- (id)_stringForTime:(double)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_thumbHitEdgeInsets;
- (void)_updateForAvailableDuraton;
- (void)_updateTimeDisplayForTime:(double)arg1 force:(BOOL)arg2;
- (void)_updateTimeDisplayForTime:(double)arg1;
- (void)_updateTrackInset;
- (BOOL)allowsDetailScrubbing;
- (BOOL)allowsScrubbing;
- (double)availableDuration;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTracking;
- (void)cancelTrackingWithEvent:(id)arg1;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)createThumbView;
- (id)currentThumbImage;
- (void)dealloc;
- (id)delegate;
- (void)detailScrubController:(id)arg1 didChangeScrubSpeed:(int)arg2;
- (void)detailScrubController:(id)arg1 didChangeValue:(float)arg2;
- (BOOL)detailScrubbingAvailableForCurrentDuration;
- (float)detailScrubbingVerticalRange;
- (double)duration;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(int)arg2 maxTrackWidth:(float)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(int)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isTracking;
- (void)layoutSubviews;
- (id)localizedScrubSpeedText;
- (float)minTimeLabelWidth;
- (void)setAllowsDetailScrubbing:(BOOL)arg1;
- (void)setAllowsScrubbing:(BOOL)arg1;
- (void)setAvailableDuration:(double)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setDetailScrubbingVerticalRange:(float)arg1;
- (void)setDuration:(double)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setMinTimeLabelWidth:(float)arg1;
- (void)setTimeLabelStyle:(int)arg1;
- (void)setValue:(float)arg1 animated:(BOOL)arg2;
- (void)setValue:(float)arg1 duration:(double)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })thumbHitRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })thumbRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 trackRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 value:(float)arg3;
- (id)timeLabelFontForStyle:(int)arg1;
- (int)timeLabelStyle;
- (id)timeLabelTextColorForStyle:(int)arg1;
- (void)tintColorDidChange;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })trackRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)viewForBaselineLayout;

@end
