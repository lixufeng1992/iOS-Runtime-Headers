/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSCH3DResource, TSCH3DTextureResource;

@interface TSCH3DTexture : NSObject {
    TSCH3DTextureResource *mTextureResource;
}

@property(readonly) TSCH3DResource * resource;

- (BOOL)canLoadCachedFullMipmapBufferForDataCache:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (BOOL)hasCompleteData;
- (unsigned int)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)optimizedMipmapBuffer;
- (void)resetResource;
- (id)resource;

@end
