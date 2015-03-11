/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSString;

@interface VKMapMatch : NSObject {
    struct { 
        double latitude; 
        double longitude; 
    } coordinateOnFeature;
    double courseOnFeature;
    float distanceFromJunction;
    NSString *featureName;
    float junctionRadius;
    struct { struct { id x_1_1_1; char *x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; BOOL x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; unsigned long long x_1_1_12; id x_1_1_13; int x_1_1_14; } x1; unsigned int x2; unsigned int x3; int x4; int x5; int x6; unsigned int x7; unsigned int x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; } *roadFeature;
    float roadWidth;
}

@property(readonly) struct { double x1; double x2; } coordinateOnFeature;
@property(readonly) double courseOnFeature;
@property(readonly) float distanceFromJunction;
@property(readonly) NSString * featureName;
@property(readonly) float junctionRadius;
@property(readonly) struct { struct { id x_1_1_1; char *x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; BOOL x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; unsigned long long x_1_1_12; id x_1_1_13; int x_1_1_14; } x1; unsigned int x2; unsigned int x3; int x4; int x5; int x6; unsigned int x7; unsigned int x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; }* roadFeature;
@property(readonly) float roadWidth;

- (id).cxx_construct;
- (struct { double x1; double x2; })coordinateOnFeature;
- (double)courseOnFeature;
- (void)dealloc;
- (id)description;
- (float)distanceFromJunction;
- (id)featureName;
- (id)initWithGEORoadFeature:(struct { struct { id x_1_1_1; char *x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; BOOL x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; unsigned long long x_1_1_12; id x_1_1_13; int x_1_1_14; } x1; unsigned int x2; unsigned int x3; int x4; int x5; int x6; unsigned int x7; unsigned int x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; }*)arg1 pointOnFeature:(struct VKPoint { double x1; double x2; double x3; })arg2 courseOnFeature:(float)arg3 distanceFromJunction:(float)arg4 junctionRadius:(float)arg5 roadWidth:(float)arg6;
- (float)junctionRadius;
- (struct { struct { id x_1_1_1; char *x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; BOOL x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; unsigned long long x_1_1_12; id x_1_1_13; int x_1_1_14; } x1; unsigned int x2; unsigned int x3; int x4; int x5; int x6; unsigned int x7; unsigned int x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; }*)roadFeature;
- (float)roadWidth;

@end
