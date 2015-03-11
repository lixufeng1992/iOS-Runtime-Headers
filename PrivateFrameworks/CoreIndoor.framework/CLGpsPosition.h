/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
 */

@interface CLGpsPosition : NSObject <NSSecureCoding> {
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
    double _deltaDistance;
    double _deltaDistanceAccuracy;
    } _gpsLocation;
    float _horzUncSemiMaj;
    float _horzUncSemiMajAz;
    float _horzUncSemiMin;
    double _timestampGps;
}

@property double deltaDistance;
@property double deltaDistanceAccuracy;
@property struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; } gpsLocation;
@property float horzUncSemiMaj;
@property float horzUncSemiMajAz;
@property float horzUncSemiMin;
@property double timestampGps;

+ (BOOL)supportsSecureCoding;

- (id).cxx_construct;
- (double)deltaDistance;
- (double)deltaDistanceAccuracy;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; })gpsLocation;
- (float)horzUncSemiMaj;
- (float)horzUncSemiMajAz;
- (float)horzUncSemiMin;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(const struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; }*)arg1 andPrivateLocation:(const struct { double x1; double x2; double x3; double x4; float x5; float x6; float x7; boolx8; int x9; struct { double x_10_1_1; double x_10_1_2; } x10; double x11; int x12; int x13; boolx14; }*)arg2;
- (void)setDeltaDistance:(double)arg1;
- (void)setDeltaDistanceAccuracy:(double)arg1;
- (void)setGpsLocation:(struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; })arg1;
- (void)setHorzUncSemiMaj:(float)arg1;
- (void)setHorzUncSemiMajAz:(float)arg1;
- (void)setHorzUncSemiMin:(float)arg1;
- (void)setTimestampGps:(double)arg1;
- (double)timestampGps;

@end
