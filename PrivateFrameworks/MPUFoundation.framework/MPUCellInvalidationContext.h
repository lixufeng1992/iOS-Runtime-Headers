/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUCellInvalidationContext : NSObject {
    BOOL _animated;
    BOOL _invalidateDownloadStatus;
    BOOL _invalidateEverything;
    BOOL _invalidateLayout;
}

@property(getter=isAnimated) BOOL animated;
@property BOOL invalidateDownloadStatus;
@property BOOL invalidateEverything;
@property BOOL invalidateLayout;

- (BOOL)invalidateDownloadStatus;
- (BOOL)invalidateEverything;
- (BOOL)invalidateLayout;
- (BOOL)isAnimated;
- (void)setAnimated:(BOOL)arg1;
- (void)setInvalidateDownloadStatus:(BOOL)arg1;
- (void)setInvalidateEverything:(BOOL)arg1;
- (void)setInvalidateLayout:(BOOL)arg1;

@end
