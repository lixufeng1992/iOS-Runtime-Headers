/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureDeviceFormat_FigRecorder, AVWeakReference, NSArray, NSDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface AVCaptureFigVideoDevice_FigRecorder : AVCaptureDevice_FigRecorder <MCProfileConnectionObserver> {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    struct CGPoint { 
        float x; 
        float y; 
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    AVCaptureDeviceFormat_FigRecorder *_activeFormat;
    } _activeMaxFrameDuration;
    BOOL _activeMaxFrameDurationSetByClient;
    } _activeMinFrameDuration;
    BOOL _activeMinFrameDurationSetByClient;
    BOOL _adjustingExposure;
    BOOL _adjustingFocus;
    BOOL _adjustingWB;
    float _autoExposureBias;
    int _autoFocusRangeRestriction;
    BOOL _automaticallyAdjustsImageControlMode;
    BOOL _automaticallyEnablesLowLightBoostWhenAvailable;
    float _contrast;
    struct OpaqueCMClock { } *_deviceClock;
    NSDictionary *_deviceProperties;
    } _exposureDuration;
    float _exposureGain;
    int _exposureMode;
    } _exposurePointOfInterest;
    BOOL _faceDetectionDrivenImageProcessingEnabled;
    BOOL _faceDetectionMetadataEnabled;
    } _faceRectangle;
    int _faceRectangleAngle;
    BOOL _flashActive;
    BOOL _flashAvailable;
    int _flashMode;
    int _focusInFlightCount;
    int _focusMode;
    } _focusPointOfInterest;
    float _focusPosition;
    NSArray *_formats;
    BOOL _highDynamicRangeSceneDetectionEnabled;
    int _imageControlMode;
    BOOL _isConnected;
    BOOL _lowLightBoostEnabled;
    BOOL _manualExposureSupportEnabled;
    BOOL _manualFocusSupportEnabled;
    int _pendingImageControlMode;
    struct OpaqueFigRecorder { } *_recorderForTorchApps;
    float _saturation;
    BOOL _sceneIsHighDynamicRange;
    NSDictionary *_sensorProperties;
    BOOL _smoothAutoFocusEnabled;
    BOOL _subjectMonitoringEnabled;
    BOOL _torchActive;
    NSObject<OS_dispatch_source> *_torchAppsKillTimer;
    NSObject<OS_dispatch_queue> *_torchAppsSerialQueue;
    BOOL _torchAvailable;
    float _torchLevel;
    int _torchMode;
    int _videoZoomDownscaleStageHint;
    BOOL _videoZoomDrawOverlay;
    float _videoZoomFactor;
    float _videoZoomRampAcceleration;
    int _videoZoomRampCounter;
    float _videoZoomRampTarget;
    int _videoZoomUpscaleStageHint;
    int _wbMode;
    AVWeakReference *_weakReference;
    float _whiteBalanceTemperature;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (BOOL)_cameraAccessIsEnabled;
+ (id)_devices;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (void)initialize;

- (BOOL)HDRUsesPreBracketedFrameAsEV0;
- (void)_applyOverridesToCaptureOptions:(id)arg1;
- (void)_applyPendingPropertiesToRecorder;
- (struct OpaqueFigRecorder { }*)_createFigRecorderForTorchApps;
- (id)_createTorchAppsKillTimer;
- (BOOL)_faceDetectionDebugMetadataReportingEnabled;
- (BOOL)_faceDetectionDrivenImageProcessingEnabled;
- (int)_flashMode;
- (float)_floatValueForRecorderProperty:(struct __CFString { }*)arg1;
- (id)_numberForRecorderProperty:(struct __CFString { }*)arg1;
- (void)_restoreColorProperties;
- (void)_sessionDidStart;
- (void)_sessionWillStart;
- (void)_setActiveFormatAndFrameRatesForResolvedOptions:(id)arg1 sendingFrameRatesToFig:(BOOL)arg2;
- (void)_setActiveVideoMaxFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_setActiveVideoMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_setAdjustingExposure:(BOOL)arg1;
- (void)_setAdjustingFocus:(BOOL)arg1;
- (void)_setAdjustingWhiteBalance:(BOOL)arg1;
- (BOOL)_setAutoExposureBias:(float)arg1;
- (void)_setAutomaticallyEnablesLowLightBoostWhenAvailable:(BOOL)arg1;
- (BOOL)_setBoolValue:(BOOL)arg1 forRecorderProperty:(struct __CFString { }*)arg2;
- (BOOL)_setContrast:(float)arg1;
- (BOOL)_setExposureWithMode:(int)arg1 pointOfInterest:(id)arg2;
- (BOOL)_setFaceDetectionDebugMetadataReportingEnabled:(BOOL)arg1;
- (BOOL)_setFaceDetectionDrivenImageProcessingEnabled:(BOOL)arg1;
- (void)_setFlashActive:(BOOL)arg1;
- (BOOL)_setFlashMode:(int)arg1;
- (BOOL)_setFloatValue:(float)arg1 forRecorderProperty:(struct __CFString { }*)arg2;
- (BOOL)_setFocusWithMode:(int)arg1 pointOfInterest:(id)arg2;
- (void)_setHighDynamicRangeScene:(BOOL)arg1;
- (BOOL)_setHighDynamicRangeSceneDetectionEnabled:(BOOL)arg1;
- (BOOL)_setImageControlMode:(int)arg1;
- (BOOL)_setNumber:(id)arg1 forRecorderProperty:(struct __CFString { }*)arg2;
- (BOOL)_setSaturation:(float)arg1;
- (BOOL)_setSubjectAreaChangeMonitoringEnabled:(BOOL)arg1;
- (void)_setTorchActive:(BOOL)arg1;
- (long)_setTorchMode:(int)arg1 withLevel:(float)arg2;
- (BOOL)_setWhiteBalanceMode:(int)arg1;
- (BOOL)_setWhiteBalanceTemperature:(float)arg1;
- (BOOL)_subjectAreaChangeMonitoringEnabled;
- (void)_teardownFigRecorderForTorchApps;
- (void)_teardownTorchAppsKillTimer;
- (int)_torchMode;
- (void)_updateFlashAndTorchAvailability;
- (void)_updateImageControlMode;
- (int)_whiteBalanceMode;
- (id)activeFormat;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })activeVideoMaxFrameDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })activeVideoMinFrameDuration;
- (float)autoExposureBias;
- (int)autoFocusRangeRestriction;
- (BOOL)automaticallyAdjustsImageControlMode;
- (BOOL)automaticallyEnablesLowLightBoostWhenAvailable;
- (void)cancelVideoZoomRamp;
- (float)contrast;
- (void)dealloc;
- (struct OpaqueCMClock { }*)deviceClock;
- (id)devicePropertiesDictionary;
- (BOOL)doesHandleNotification:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })exposureDuration;
- (float)exposureGain;
- (int)exposureMode;
- (struct CGPoint { float x1; float x2; })exposurePointOfInterest;
- (float)exposureTargetBias;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })faceRectangle;
- (int)faceRectangleAngle;
- (void)finishPendingAdjustmentsKVO;
- (int)flashMode;
- (int)focusMode;
- (struct CGPoint { float x1; float x2; })focusPointOfInterest;
- (float)focusPosition;
- (id)formats;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (BOOL)hasFlash;
- (BOOL)hasMediaType:(id)arg1;
- (BOOL)hasTorch;
- (int)imageControlMode;
- (id)init;
- (id)initWithProperties:(id)arg1 sensorProperties:(id)arg2;
- (BOOL)isActiveVideoMaxFrameDurationSet;
- (BOOL)isActiveVideoMinFrameDurationSet;
- (BOOL)isAdjustingExposure;
- (BOOL)isAdjustingFocus;
- (BOOL)isAdjustingWhiteBalance;
- (BOOL)isAutoFocusRangeRestrictionSupported;
- (BOOL)isConnected;
- (BOOL)isExposureModeSupported:(int)arg1;
- (BOOL)isExposurePointOfInterestSupported;
- (BOOL)isFaceDetectionDebugMetadataReportingEnabled;
- (BOOL)isFaceDetectionDrivenImageProcessingEnabled;
- (BOOL)isFaceDetectionDuringVideoPreviewSupported;
- (BOOL)isFaceDetectionSupported;
- (BOOL)isFlashActive;
- (BOOL)isFlashAvailable;
- (BOOL)isFlashModeSupported:(int)arg1;
- (BOOL)isFocusModeSupported:(int)arg1;
- (BOOL)isFocusPointOfInterestSupported;
- (BOOL)isHDRSupported;
- (BOOL)isHighDynamicRangeScene;
- (BOOL)isHighDynamicRangeSceneDetectionEnabled;
- (BOOL)isHighDynamicRangeSceneDetectionSupported;
- (BOOL)isImageControlModeSupported:(int)arg1;
- (BOOL)isInUseByAnotherApplication;
- (BOOL)isKindOfClass:(Class)arg1;
- (BOOL)isLowLightBoostEnabled;
- (BOOL)isLowLightBoostSupported;
- (BOOL)isMachineReadableCodeDetectionSupported;
- (BOOL)isManualExposureSupportEnabled;
- (BOOL)isManualFocusSupportEnabled;
- (BOOL)isRampingVideoZoom;
- (BOOL)isSISSupported;
- (BOOL)isSmoothAutoFocusEnabled;
- (BOOL)isSmoothAutoFocusSupported;
- (BOOL)isSubjectAreaChangeMonitoringEnabled;
- (BOOL)isTorchActive;
- (BOOL)isTorchAvailable;
- (BOOL)isTorchModeSupported:(int)arg1;
- (BOOL)isWhiteBalanceModeSupported:(int)arg1;
- (id)localizedName;
- (id)modelID;
- (int)position;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)rampToVideoZoomFactor:(float)arg1 withRate:(float)arg2;
- (float)saturation;
- (void)setActiveFormat:(id)arg1;
- (void)setActiveInput:(id)arg1;
- (void)setActiveVideoMaxFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setActiveVideoMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setAutoExposureBias:(float)arg1;
- (void)setAutoFocusRangeRestriction:(int)arg1;
- (void)setAutomaticallyAdjustsImageControlMode:(BOOL)arg1;
- (void)setAutomaticallyEnablesLowLightBoostWhenAvailable:(BOOL)arg1;
- (void)setContrast:(float)arg1;
- (void)setExposureDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setExposureGain:(float)arg1;
- (void)setExposureMode:(int)arg1;
- (void)setExposurePointOfInterest:(struct CGPoint { float x1; float x2; })arg1;
- (void)setExposureTargetBias:(float)arg1 completionHandler:(id)arg2;
- (void)setFaceDetectionDebugMetadataReportingEnabled:(BOOL)arg1;
- (void)setFaceDetectionDrivenImageProcessingEnabled:(BOOL)arg1;
- (void)setFlashMode:(int)arg1;
- (void)setFocusMode:(int)arg1;
- (void)setFocusPointOfInterest:(struct CGPoint { float x1; float x2; })arg1;
- (void)setFocusPosition:(float)arg1;
- (void)setHighDynamicRangeSceneDetectionEnabled:(BOOL)arg1;
- (void)setImageControlMode:(int)arg1;
- (void)setManualExposureSupportEnabled:(BOOL)arg1;
- (void)setManualFocusSupportEnabled:(BOOL)arg1;
- (void)setSaturation:(float)arg1;
- (void)setSmoothAutoFocusEnabled:(BOOL)arg1;
- (void)setSubjectAreaChangeMonitoringEnabled:(BOOL)arg1;
- (void)setTorchMode:(int)arg1;
- (BOOL)setTorchModeOnWithLevel:(float)arg1 error:(id*)arg2;
- (void)setVideoZoomDownscaleStageHint:(int)arg1;
- (void)setVideoZoomDrawOverlay:(BOOL)arg1;
- (void)setVideoZoomFactor:(float)arg1;
- (void)setVideoZoomRampAcceleration:(float)arg1;
- (void)setVideoZoomUpscaleStageHint:(int)arg1;
- (void)setWhiteBalanceMode:(int)arg1;
- (void)setWhiteBalanceTemperature:(float)arg1;
- (BOOL)startUsingDevice:(id*)arg1;
- (void)stopUsingDevice;
- (BOOL)supportsAVCaptureSessionPreset:(id)arg1;
- (float)torchLevel;
- (int)torchMode;
- (id)uniqueID;
- (int)videoZoomDownscaleStageHint;
- (BOOL)videoZoomDrawOverlay;
- (float)videoZoomFactor;
- (float)videoZoomRampAcceleration;
- (int)videoZoomUpscaleStageHint;
- (int)whiteBalanceMode;
- (float)whiteBalanceTemperature;

@end
