/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIVirtualResizeAction : BSAction {
}

@property(readonly) int virtualHorizontalSizeClass;
@property(readonly) struct CGSize { float x1; float x2; } virtualSize;
@property(readonly) int virtualVerticalSizeClass;

- (int)UIActionType;
- (id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(id)arg4;
- (id)initWithVirtualSize:(struct CGSize { float x1; float x2; })arg1 virtualHorizontalSizeClass:(int)arg2 virtualVerticalSizeClass:(int)arg3;
- (id)keyDescriptionForSetting:(unsigned int)arg1;
- (int)virtualHorizontalSizeClass;
- (struct CGSize { float x1; float x2; })virtualSize;
- (int)virtualVerticalSizeClass;

@end
