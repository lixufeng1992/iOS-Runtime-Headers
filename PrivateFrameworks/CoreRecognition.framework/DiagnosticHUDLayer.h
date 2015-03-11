/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
 */

@class AVCaptureVideoPreviewLayer, CAShapeLayer, CRColor, NSMutableArray;

@interface DiagnosticHUDLayer : CALayer {
    CAShapeLayer *_cameraAreaLayer;
    CAShapeLayer *_focusIndicatorLayer;
    CAShapeLayer *_focusPointLayer;
    CAShapeLayer *_frameIndicator;
    CRColor *_freshPointColor;
    NSMutableArray *_pointLayers;
    AVCaptureVideoPreviewLayer *_previewLayer;
    CRColor *_stalePointColor;
}

@property(retain) CAShapeLayer * cameraAreaLayer;
@property(retain) CAShapeLayer * focusIndicatorLayer;
@property(retain) CAShapeLayer * focusPointLayer;
@property(retain) CAShapeLayer * frameIndicator;
@property(retain) CRColor * freshPointColor;
@property(retain) NSMutableArray * pointLayers;
@property(retain) AVCaptureVideoPreviewLayer * previewLayer;
@property(retain) CRColor * stalePointColor;

+ (id)layer;

- (void).cxx_destruct;
- (id)cameraAreaLayer;
- (id)focusIndicatorLayer;
- (id)focusPointLayer;
- (id)frameIndicator;
- (id)freshPointColor;
- (id)init;
- (void)layoutSublayers;
- (id)pointLayers;
- (id)previewLayer;
- (void)refreshFrameIndicator;
- (void)setAdjustingFocus:(BOOL)arg1 pointOfInterestSupported:(BOOL)arg2 focusPoint:(struct CGPoint { float x1; float x2; })arg3;
- (void)setBoxPoints:(id)arg1;
- (void)setCameraAreaLayer:(id)arg1;
- (void)setFocusIndicatorLayer:(id)arg1;
- (void)setFocusPointLayer:(id)arg1;
- (void)setFrameIndicator:(id)arg1;
- (void)setFreshPointColor:(id)arg1;
- (void)setPointLayers:(id)arg1;
- (void)setPreviewLayer:(id)arg1;
- (void)setStalePointColor:(id)arg1;
- (void)setVisibleCameraArea:(id)arg1;
- (id)stalePointColor;

@end
