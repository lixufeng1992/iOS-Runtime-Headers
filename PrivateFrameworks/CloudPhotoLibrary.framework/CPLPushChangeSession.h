/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class CPLPlatformObject, NSString;

@interface CPLPushChangeSession : CPLChangeSession <CPLAbstractObject> {
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) CPLPlatformObject * platformObject;
@property(readonly) Class superclass;

- (id)_sessionLogDomain;
- (void)commitChangeBatch:(id)arg1 withCompletionHandler:(id)arg2;
- (void)commitChangeBatch:(id)arg1 withUnderlyingCompletionHandler:(id)arg2;
- (id)initWithLibraryManager:(id)arg1;

@end
