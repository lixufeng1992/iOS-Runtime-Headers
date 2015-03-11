/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@class NSMutableDictionary;

@interface GKNetworkImageSource : GKImageSource {
    NSMutableDictionary *_loadingGroups;
}

@property NSMutableDictionary * loadingGroups;

- (void)dealloc;
- (BOOL)imageNeedsRefresh:(id)arg1;
- (void)loadImageForURLString:(id)arg1 reference:(id)arg2 queue:(id)arg3 handler:(id)arg4;
- (id)loadingGroups;
- (void)setLoadingGroups:(id)arg1;

@end
