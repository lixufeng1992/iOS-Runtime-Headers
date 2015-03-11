/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface UIInputViewAnimationControllerSlide : NSObject <UIInputViewAnimationController> {
    int _slide;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void)completeAnimationWithHost:(id)arg1 context:(id)arg2;
- (id)initWithSlide:(int)arg1;
- (void)performAnimationWithHost:(id)arg1 context:(id)arg2;
- (id)placementForSlideStart:(BOOL)arg1;
- (id)prepareAnimationWithHost:(id)arg1 startPlacement:(id)arg2 endPlacement:(id)arg3;

@end
