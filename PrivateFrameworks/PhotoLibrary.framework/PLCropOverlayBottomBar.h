/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class CAMBottomBar, PLCropOverlayPreviewBottomBar, PLCropOverlayWallpaperBottomBar;

@interface PLCropOverlayBottomBar : UIView {
    CAMBottomBar *_cameraBottomBar;
    BOOL _inPopover;
    BOOL _playingVideo;
    PLCropOverlayPreviewBottomBar *_previewBottomBar;
    int _style;
    PLCropOverlayWallpaperBottomBar *_wallpaperBottomBar;
}

@property(retain) CAMBottomBar * cameraBottomBar;
@property(getter=isInPopover) BOOL inPopover;
@property(getter=isPlayingVideo) BOOL playingVideo;
@property(retain) PLCropOverlayPreviewBottomBar * previewBottomBar;
@property int style;
@property(retain) PLCropOverlayWallpaperBottomBar * wallpaperBottomBar;

- (void)_commonPLCropOverlayBottomBarInitialization;
- (BOOL)_isEditingStyle:(int)arg1;
- (void)_updateBottomBars;
- (void)_updatePreviewBottomBarForPlaybackState;
- (void)_updateStyle;
- (id)cameraBottomBar;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isInPopover;
- (BOOL)isPlayingVideo;
- (void)layoutSubviews;
- (id)previewBottomBar;
- (void)setCameraBottomBar:(id)arg1;
- (void)setInPopover:(BOOL)arg1;
- (void)setPlayingVideo:(BOOL)arg1;
- (void)setPreviewBottomBar:(id)arg1;
- (void)setStyle:(int)arg1 animated:(BOOL)arg2;
- (void)setStyle:(int)arg1;
- (void)setWallpaperBottomBar:(id)arg1;
- (int)style;
- (void)togglePlaybackState;
- (id)wallpaperBottomBar;

@end
