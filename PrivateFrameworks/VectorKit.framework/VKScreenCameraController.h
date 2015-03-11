/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class <VKTrackableAnnotation>, NSString, VKAnimation, VKAnnotationTrackingCameraController;

@interface VKScreenCameraController : VKCameraController <VKCameraControllerDelegate> {
    struct VKEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    VKAnnotationTrackingCameraController *_annotationTrackingCameraController;
    int _annotationTrackingZoomStyle;
    double _beganDoublePanPitch;
    } _edgeInsets;
    BOOL _isPitchIncreasing;
    BOOL _isPitchable;
    double _lastRotation;
    } _panLastScreenPoint;
    } _panStartScreenPoint;
    VKAnimation *_pitchAnimation;
    VKAnimation *_regionAnimation;
    VKAnimation *_rotationAnimation;
    BOOL _rotationLowZoomSnappingEnabled;
    BOOL _shouldRotationRubberband;
    BOOL _staysCenteredDuringPinch;
    BOOL _staysCenteredDuringRotation;
    VKAnimation *_zoomAnimation;
}

@property(getter=isAnimatingToTrackAnnotation,readonly) BOOL animatingToTrackAnnotation;
@property int annotationTrackingZoomStyle;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property struct VKEdgeInsets { float x1; float x2; float x3; float x4; } edgeInsets;
@property(readonly) unsigned int hash;
@property BOOL isPitchable;
@property BOOL staysCenteredDuringPinch;
@property BOOL staysCenteredDuringRotation;
@property(readonly) Class superclass;
@property(readonly) <VKTrackableAnnotation> * trackingAnnotation;
@property(getter=isTrackingHeading,readonly) BOOL trackingHeading;

- (id).cxx_construct;
- (int)annotationTrackingZoomStyle;
- (void)cameraController:(id)arg1 canEnter3DModeDidChange:(BOOL)arg2;
- (void)cameraController:(id)arg1 canZoomInDidChange:(BOOL)arg2;
- (void)cameraController:(id)arg1 canZoomOutDidChange:(BOOL)arg2;
- (void)cameraController:(id)arg1 didBecomePitched:(BOOL)arg2;
- (void)cameraController:(id)arg1 didChangeRegionAnimated:(BOOL)arg2;
- (id)cameraController:(id)arg1 presentationForAnnotation:(id)arg2;
- (void)cameraController:(id)arg1 requestsDisplayRate:(int)arg2;
- (void)cameraController:(id)arg1 willChangeRegionAnimated:(BOOL)arg2;
- (void)cameraControllerDidChangeCameraState:(id)arg1;
- (void)cameraControllerDidFinishInitialTrackingAnimation:(id)arg1;
- (void)dealloc;
- (struct VKEdgeInsets { float x1; float x2; float x3; float x4; })edgeInsets;
- (BOOL)isAnimating;
- (BOOL)isAnimatingToTrackAnnotation;
- (BOOL)isPitchable;
- (BOOL)isTrackingHeading;
- (double)rubberBandOffsetForOffset:(double)arg1 maxOffset:(double)arg2 minOffset:(double)arg3 range:(double)arg4;
- (void)runAnimation:(id)arg1;
- (void)setAnnotationTrackingZoomStyle:(int)arg1;
- (void)setEdgeInsets:(struct VKEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setIsPitchable:(BOOL)arg1;
- (void)setStaysCenteredDuringPinch:(BOOL)arg1;
- (void)setStaysCenteredDuringRotation:(BOOL)arg1;
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(BOOL)arg2 animated:(BOOL)arg3;
- (BOOL)staysCenteredDuringPinch;
- (BOOL)staysCenteredDuringRotation;
- (void)stopRegionAnimation;
- (void)stopSnappingAnimations;
- (void)stopTrackingAnnotation;
- (id)trackingAnnotation;

@end
