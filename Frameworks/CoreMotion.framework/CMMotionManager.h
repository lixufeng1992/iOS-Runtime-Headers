/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class CMAccelerometerData, CMAmbientPressureData, CMDeviceMotion, CMGyroData, CMMagnetometerData;

@interface CMMotionManager : NSObject {
    id _internal;
}

@property(getter=isAccelerometerActive,readonly) BOOL accelerometerActive;
@property(getter=isAccelerometerAvailable,readonly) BOOL accelerometerAvailable;
@property(readonly) CMAccelerometerData * accelerometerData;
@property double accelerometerUpdateInterval;
@property(readonly) CMAmbientPressureData * ambientPressureData;
@property(readonly) int attitudeReferenceFrame;
@property(readonly) CMDeviceMotion * deviceMotion;
@property(getter=isDeviceMotionActive,readonly) BOOL deviceMotionActive;
@property(getter=isDeviceMotionAvailable,readonly) BOOL deviceMotionAvailable;
@property double deviceMotionUpdateInterval;
@property(getter=isGyroActive,readonly) BOOL gyroActive;
@property(getter=isGyroAvailable,readonly) BOOL gyroAvailable;
@property(readonly) CMGyroData * gyroData;
@property double gyroUpdateInterval;
@property(getter=isMagnetometerActive,readonly) BOOL magnetometerActive;
@property(getter=isMagnetometerAvailable,readonly) BOOL magnetometerAvailable;
@property(readonly) CMMagnetometerData * magnetometerData;
@property double magnetometerUpdateInterval;
@property BOOL showsDeviceMovementDisplay;
@property(getter=isSidebandSensorFusionAvailable,readonly) BOOL sidebandSensorFusionAvailable;

+ (unsigned int)availableAttitudeReferenceFrames;
+ (BOOL)configureM7Activity:(BOOL)arg1 stepCounting:(BOOL)arg2 activityForceCodeTransition:(BOOL)arg3 stepCountingForceCodeTransition:(BOOL)arg4 threshold:(BOOL)arg5 impulse:(BOOL)arg6 onBodyDetection:(BOOL)arg7 ispMode:(unsigned char)arg8 predictionInterval:(float)arg9 logLevel:(BOOL)arg10 proactiveRevisitTime:(unsigned short)arg11;
+ (void)dummySelector:(id)arg1;
+ (struct { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; double x3; })gyroCalibrationDatabaseGetBiasFit;
+ (BOOL)hasRunMiniCal;
+ (void)initialize;
+ (void)setAllowInBackground:(BOOL)arg1;
+ (BOOL)startGyroMiniCalibration;
+ (BOOL)supportsGyroMiniCalibration;

- (id)accelerometerData;
- (double)accelerometerUpdateInterval;
- (id)ambientPressureData;
- (double)ambientPressureUpdateInterval;
- (int)attitudeReferenceFrame;
- (void)dealloc;
- (void)deallocPrivate;
- (id)deviceMotion;
- (double)deviceMotionGyroDt;
- (double)deviceMotionRequestedAccelerometerUpdateInterval;
- (double)deviceMotionRequestedCompassUpdateInterval;
- (double)deviceMotionRequestedGyroUpdateInterval;
- (double)deviceMotionUpdateInterval;
- (void)didBecomeActive:(id)arg1;
- (void)didBecomeActivePrivate:(id)arg1;
- (void)dismissDeviceMovementDisplay;
- (id)gyroData;
- (int)gyroStartupLatency;
- (double)gyroUpdateInterval;
- (int)gyttNumTemperatures;
- (id)init;
- (id)initPrivate;
- (id)initUsing6AxisSensorFusion;
- (id)initUsingGyroOnlySensorFusion;
- (BOOL)isAccelerometerActive;
- (BOOL)isAccelerometerAvailable;
- (BOOL)isAmbientPressureActive;
- (BOOL)isAmbientPressureAvailable;
- (BOOL)isDeviceMotionActive;
- (BOOL)isDeviceMotionAvailable;
- (BOOL)isGyroActive;
- (BOOL)isGyroAvailable;
- (BOOL)isMagnetometerActive;
- (BOOL)isMagnetometerAvailable;
- (BOOL)isSidebandSensorFusionAvailable;
- (id)magnetometerData;
- (double)magnetometerUpdateInterval;
- (void)onAccelerometer:(const struct Sample { double x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; }*)arg1;
- (void)onAmbientPressure:(const struct Sample { double x1; struct { float x_2_1_1; float x_2_1_2; } x2; }*)arg1;
- (void)onDeviceMotion:(const struct Sample { double x1; struct { struct { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_2_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_2_1_2; struct { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_2_1_3; struct { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_2_1_4; int x_2_1_5; boolx_2_1_6; boolx_2_1_7; boolx_2_1_8; } x2; boolx3; }*)arg1;
- (void)onGeomagneticModel:(const struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; }*)arg1;
- (void)onGyro:(const struct Sample { double x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; unsigned short x3; boolx4; }*)arg1;
- (void)onMagnetometer:(const struct Sample { double x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; }*)arg1;
- (void)rebuildGytt;
- (void)setAccelerometerDataCallback:(int (*)())arg1 info:(void*)arg2 interval:(double)arg3;
- (void)setAccelerometerUpdateInterval:(double)arg1;
- (void)setAccelerometerUpdateIntervalPrivate:(double)arg1;
- (void)setAmbientPressureUpdateInterval:(double)arg1;
- (void)setAmbientPressureUpdateIntervalPrivate:(double)arg1;
- (void)setDeviceMotionCallback:(int (*)())arg1 info:(void*)arg2 interval:(double)arg3 fsync:(BOOL)arg4;
- (void)setDeviceMotionCompassAlignmentCallback:(int (*)())arg1 info:(void*)arg2;
- (void)setDeviceMotionCompassDataCallback:(int (*)())arg1 info:(void*)arg2;
- (void)setDeviceMotionUpdateInterval:(double)arg1;
- (void)setDeviceMotionUpdateIntervalPrivate:(double)arg1;
- (void)setGyroBiasAndVarianceCallback:(int (*)())arg1 info:(void*)arg2;
- (void)setGyroDataCallback:(int (*)())arg1 info:(void*)arg2 interval:(double)arg3;
- (void)setGyroUpdateInterval:(double)arg1;
- (void)setGyroUpdateIntervalPrivate:(double)arg1;
- (void)setMagnetometerDataCallback:(int (*)())arg1 info:(void*)arg2 interval:(double)arg3;
- (void)setMagnetometerUpdateInterval:(double)arg1;
- (void)setMagnetometerUpdateIntervalPrivate:(double)arg1;
- (void)setMaxAccelerationVarianceForStability:(float)arg1;
- (void)setNotificationCallback:(int (*)())arg1 info:(void*)arg2;
- (void)setSensorThrottleTime:(double)arg1;
- (void)setSensorTurnOffTime:(double)arg1;
- (void)setShowsDeviceMovementDisplay:(BOOL)arg1;
- (void)setShowsDeviceMovementDisplayPrivate:(BOOL)arg1;
- (BOOL)setSidebandSensorFusionEnable:(BOOL)arg1 measureLatency:(BOOL)arg2 withSnoopHandler:(id)arg3;
- (BOOL)setSidebandSensorFusionEnable:(BOOL)arg1 withSnoopHandler:(id)arg2;
- (BOOL)setSidebandSensorFusionEnable:(BOOL)arg1;
- (void)setSidebandTimeSyncHandler:(id)arg1;
- (void)setUseAccelerometer:(BOOL)arg1;
- (void)setWantsPowerConservativeDeviceMotion:(BOOL)arg1;
- (void)showDeviceMovementDisplay;
- (BOOL)showsDeviceMovementDisplay;
- (void)startAccelerometerUpdates;
- (void)startAccelerometerUpdatesPrivateToQueue:(id)arg1 withHandler:(id)arg2;
- (void)startAccelerometerUpdatesToQueue:(id)arg1 withHandler:(id)arg2;
- (void)startAmbientPressureUpdates;
- (void)startAmbientPressureUpdatesPrivateToQueue:(id)arg1 withHandler:(id)arg2;
- (void)startAmbientPressureUpdatesToQueue:(id)arg1 withHandler:(id)arg2;
- (void)startDeviceMotionUpdates;
- (void)startDeviceMotionUpdatesPrivateUsingReferenceFrame:(int)arg1 toQueue:(id)arg2 withHandler:(id)arg3;
- (void)startDeviceMotionUpdatesToQueue:(id)arg1 withHandler:(id)arg2;
- (void)startDeviceMotionUpdatesUsingReferenceFrame:(int)arg1 toQueue:(id)arg2 withHandler:(id)arg3;
- (void)startDeviceMotionUpdatesUsingReferenceFrame:(int)arg1;
- (void)startGyroUpdates;
- (void)startGyroUpdatesPrivateToQueue:(id)arg1 withHandler:(id)arg2;
- (void)startGyroUpdatesToQueue:(id)arg1 withHandler:(id)arg2;
- (void)startMagnetometerUpdates;
- (void)startMagnetometerUpdatesPrivateToQueue:(id)arg1 withHandler:(id)arg2;
- (void)startMagnetometerUpdatesToQueue:(id)arg1 withHandler:(id)arg2;
- (void)startWatchdogCheckinsPrivate;
- (void)stopAccelerometerUpdates;
- (void)stopAccelerometerUpdatesPrivate;
- (void)stopAmbientPressureUpdates;
- (void)stopAmbientPressureUpdatesPrivate;
- (void)stopDeviceMotionUpdates;
- (void)stopDeviceMotionUpdatesPrivate;
- (void)stopGyroUpdates;
- (void)stopGyroUpdatesPrivate;
- (void)stopMagnetometerUpdates;
- (void)stopMagnetometerUpdatesPrivate;
- (void)stopWatchdogCheckinsPrivate;
- (BOOL)useAccelerometer;
- (void)willResignActive:(id)arg1;
- (void)willResignActivePrivate:(id)arg1;

@end
