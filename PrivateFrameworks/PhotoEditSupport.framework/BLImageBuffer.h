/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@class CIContext;

@interface BLImageBuffer : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    CIContext *_ciContext;
    int _colorManagement;
    struct CGColorSpace { } *_colorSpace;
    } _size;
}

@property(readonly) struct CGSize { float x1; float x2; } size;

- (id)ciImage;
- (void)dealloc;
- (id)image;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1 colorManagement:(int)arg2 ciContext:(id)arg3 colorSpace:(struct CGColorSpace { }*)arg4;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1 colorManagement:(int)arg2;
- (void)readPixelsByAddressInBlock:(id)arg1;
- (void)renderCIImage:(id)arg1;
- (struct CGSize { float x1; float x2; })size;

@end
