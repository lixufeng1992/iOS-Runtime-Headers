/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class NSString;

@interface CPLProxyPullSession : CPLProxySession <CPLPullChangeSessionImplementation> {
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (void)beginSessionForProxy:(id)arg1 knownVersion:(id)arg2 completionHandler:(id)arg3;

- (void)acknowledgeChangeBatch:(id)arg1 withCompletionHandler:(id)arg2;
- (void)getChangeBatchWithCompletionHandler:(id)arg1;

@end
