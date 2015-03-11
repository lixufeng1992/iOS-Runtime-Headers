/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@class <CLLocationManagerDelegate>, NSMutableSet, NSString;

@interface CLLocationManagerInternal : NSObject {
    struct { 
        int suitability; 
        struct { 
            double latitude; 
            double longitude; 
        } coordinate; 
        double horizontalAccuracy; 
        double altitude; 
        double verticalAccuracy; 
        double speed; 
        double speedAccuracy; 
        double course; 
        double courseAccuracy; 
        double timestamp; 
        int confidence; 
        double lifespan; 
        int type; 
        struct { 
            double latitude; 
            double longitude; 
        } rawCoordinate; 
        double rawCourse; 
        int floor; 
    struct { 
        double bestAccuracy; 
    int fActivityType;
    BOOL fAllowsLocationPrompts;
    BOOL fAllowsMapCorrection;
    BOOL fBatchingLocation;
    } fCapabilities;
    BOOL fCapabilitiesValid;
    struct __CLClient { } *fClient;
    BOOL fCourtesyPromptNeeded;
    <CLLocationManagerDelegate> *fDelegate;
    double fDesiredAccuracy;
    double fDistanceFilter;
    BOOL fDynamicAccuracyReductionEnabled;
    double fHeadingFilter;
    int fHeadingOrientation;
    } fLocation;
    NSString *fLocationEventType;
    double fLocationRequestAccuracy;
    double fLocationRequestTimeout;
    struct __CFRunLoopTimer { } *fLocationRequestTimer;
    BOOL fMatchInfoEnabled;
    BOOL fPaused;
    int fPausesLocationUpdatesAutomatically;
    BOOL fPersistentMonitoringEnabled;
    int fPreviousAuthorizationStatus;
    BOOL fPreviousAuthorizationStatusValid;
    NSMutableSet *fRangedRegions;
    BOOL fRequestingLocation;
    BOOL fUpdatingHeading;
    BOOL fUpdatingLocation;
    BOOL fUpdatingVehicleHeading;
    BOOL fUpdatingVehicleSpeed;
}

@property(readonly) NSMutableSet * rangedRegions;

- (int)PausesLocationUpdatesAutomatically;
- (void)cancelLocationRequest;
- (void)dealloc;
- (id)initWithInfo:(id)arg1 bundleIdentifier:(id)arg2 bundle:(id)arg3;
- (void)performCourtesyPromptIfNeeded;
- (id)rangedRegions;
- (void)setPausesLocationUpdatesAutomatically:(int)arg1;
- (void)stopUpdatingLocationAutoPaused;

@end
