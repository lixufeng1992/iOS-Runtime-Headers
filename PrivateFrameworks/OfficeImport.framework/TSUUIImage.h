/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class UIImage;

@interface TSUUIImage : OITSUImage {
    UIImage *mUIImage;
}

+ (id)imageNamed:(id)arg1;

- (struct CGImage { }*)CGImage;
- (struct CGImage { }*)CGImageForSize:(struct CGSize { float x1; float x2; })arg1;
- (id)UIImage;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (int)imageOrientation;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithUIImage:(id)arg1;
- (float)scale;
- (struct CGSize { float x1; float x2; })size;

@end
