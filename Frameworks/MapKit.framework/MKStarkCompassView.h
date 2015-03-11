/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKLocationManager, NSString, UILabel, UIView;

@interface MKStarkCompassView : UIView <MKLocationManagerObserver> {
    int _compassPoint;
    UIView *_contentsView;
    double _heading;
    UILabel *_label;
    MKLocationManager *_locationManager;
    BOOL _monitoringCourse;
}

@property int compassPoint;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property double heading;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createSubviews;
- (void)_startLocationUpdates;
- (void)_updateContents;
- (void)_updateDisplayedHeadingWithHeading:(double)arg1;
- (void)_updateStyling;
- (int)compassPoint;
- (void)dealloc;
- (void)didMoveToWindow;
- (double)heading;
- (id)initWithEffectiveBundleIdentifier:(id)arg1;
- (id)initWithSharedMKLocationManager;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (void)setCompassPoint:(int)arg1;
- (void)setHeading:(double)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;

@end
