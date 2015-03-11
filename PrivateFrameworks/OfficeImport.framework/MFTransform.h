/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSObject<MFDeviceDriver>;

@interface MFTransform : NSObject <NSCopying> {
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } m_combinedTransform;
    NSObject<MFDeviceDriver> *m_deviceDriver;
    int m_mapMode;
    } m_viewportExt;
    } m_viewportOrg;
    } m_windowExt;
    } m_windowOrg;
    } m_world;
}

- (id).cxx_construct;
- (struct CGPoint { float x1; float x2; })DPtoLP:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })LPtoDP:(struct CGPoint { float x1; float x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)getMapMode;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })getTransformMatrix;
- (struct CGPoint { float x1; float x2; })getViewportExtent;
- (struct CGPoint { float x1; float x2; })getViewportOrg;
- (struct CGPoint { float x1; float x2; })getWindowExtent;
- (struct CGPoint { float x1; float x2; })getWindowOrg;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })getWorldMatrix;
- (id)initWithDriver:(id)arg1;
- (BOOL)isUpsideDown;
- (int)modifyWorldTransform:(const struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg1 :(int)arg2;
- (int)offsetViewportOrg:(int)arg1 :(int)arg2;
- (int)offsetWindowOrg:(int)arg1 :(int)arg2;
- (int)scaleViewportExt:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4;
- (int)scaleWindowExt:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4;
- (int)setMapMode:(int)arg1;
- (void)setTransformMatrix:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (int)setViewportExt:(int)arg1 :(int)arg2;
- (void)setViewportExt:(struct CGPoint { float x1; float x2; })arg1;
- (int)setViewportOrg:(int)arg1 :(int)arg2;
- (void)setViewportOrg:(struct CGPoint { float x1; float x2; })arg1;
- (int)setWindowExt:(int)arg1 :(int)arg2;
- (void)setWindowExt:(struct CGPoint { float x1; float x2; })arg1;
- (int)setWindowOrg:(int)arg1 :(int)arg2;
- (void)setWindowOrg:(struct CGPoint { float x1; float x2; })arg1;
- (void)setWorldMatrix:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (int)setWorldTransform:(const struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg1;
- (int)updateTransform;

@end
