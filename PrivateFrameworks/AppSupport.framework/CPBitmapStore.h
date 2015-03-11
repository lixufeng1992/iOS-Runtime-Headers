/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@class NSCache, NSObject<OS_dispatch_queue>, NSString;

@interface CPBitmapStore : NSObject {
    NSCache *_cache;
    NSString *_imagePath;
    BOOL _lockOnRead;
    NSString *_path;
    NSObject<OS_dispatch_queue> *_serialQueueRemoveImagesBackground;
    NSObject<OS_dispatch_queue> *_serialQueueRemoveImagesDefault;
    int _version;
    NSString *_versionPath;
}

@property unsigned int cacheItemLimit;
@property BOOL lockOnRead;
@property(readonly) int version;

- (struct CGImage { }*)_copyAndStoreImageForKey:(id)arg1 inGroup:(id)arg2 withSize:(struct CGSize { float x1; float x2; })arg3 format:(int)arg4 scale:(float)arg5 fillMem:(id)arg6 alternateCompletion:(id)arg7;
- (id)_versionPath;
- (id)allGroups;
- (unsigned int)cacheItemLimit;
- (id)cacheNumberForKey:(id)arg1;
- (void)commitTransaction;
- (void)commitTxn;
- (struct CGImage { }*)copyAndStoreImageForKey:(id)arg1 inGroup:(id)arg2 withSize:(struct CGSize { float x1; float x2; })arg3 opaque:(BOOL)arg4 scale:(float)arg5 draw:(id)arg6;
- (struct CGImage { }*)copyImageForKey:(id)arg1 inGroup:(id)arg2;
- (struct CGImage { }*)copyImageForKey:(id)arg1;
- (void)dealloc;
- (BOOL)findImageWithKey:(id)arg1 inGroup:(id)arg2 andInfo:(struct _img { id x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned char x6; }*)arg3;
- (unsigned int)imageCount;
- (id)imageNameForKey:(id)arg1 inGroup:(id)arg2;
- (id)imagePath;
- (id)initWithPath:(id)arg1 version:(int)arg2;
- (BOOL)lockOnRead;
- (unsigned int)memContentOffset;
- (void*)openAndMmap:(id)arg1 withInfo:(struct _img { id x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned char x6; }*)arg2;
- (void)purge;
- (void)removeImagesInGroups:(id)arg1 completion:(id)arg2;
- (void)removeImagesInGroups:(id)arg1;
- (BOOL)saveImageWithKey:(id)arg1 inGroup:(id)arg2 andInfo:(struct _img { id x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned char x6; }*)arg3;
- (void)setCacheItemLimit:(unsigned int)arg1;
- (void)setLockOnRead:(BOOL)arg1;
- (int)setVersion:(int)arg1 withOptions:(unsigned int)arg2;
- (int)setVersion:(int)arg1;
- (void)storeGrayscaleImageDataForKey:(id)arg1 inGroup:(id)arg2 withSize:(struct CGSize { float x1; float x2; })arg3 opaque:(BOOL)arg4 scale:(float)arg5 data:(id)arg6;
- (void)storeImageDataForKey:(id)arg1 inGroup:(id)arg2 withSize:(struct CGSize { float x1; float x2; })arg3 opaque:(BOOL)arg4 scale:(float)arg5 data:(id)arg6;
- (void)storeImageForKey:(id)arg1 inGroup:(id)arg2 opaque:(BOOL)arg3 image:(struct CGImage { }*)arg4;
- (int)version;

@end
