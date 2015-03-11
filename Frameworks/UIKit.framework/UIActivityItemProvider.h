/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface UIActivityItemProvider : NSOperation <UIActivityItemSource> {
    NSString *_activityType;
    id _placeholderItem;
    float _progress;
    id _providedItem;
    NSString *_status;
}

@property(readonly) NSString * activityType;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(retain) id placeholderItem;
@property float progress;
@property(retain) id providedItem;
@property(copy) NSString * status;
@property(readonly) Class superclass;

- (void)_setActivityType:(id)arg1;
- (id)activityType;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (void)dealloc;
- (id)initWithPlaceholderItem:(id)arg1;
- (id)item;
- (void)main;
- (id)placeholderItem;
- (float)progress;
- (id)providedItem;
- (void)setPlaceholderItem:(id)arg1;
- (void)setProgress:(float)arg1;
- (void)setProvidedItem:(id)arg1;
- (void)setStatus:(id)arg1;
- (id)status;

@end
