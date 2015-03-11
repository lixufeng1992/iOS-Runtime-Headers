/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSAttributedString, NSString, NSURL, UIImage;

@interface SKUIBadgeViewElement : SKUIViewElement {
    struct CGSize { 
        float width; 
        float height; 
    UIImage *_fallbackImage;
    NSString *_resourceName;
    } _size;
    NSString *_text;
    NSURL *_url;
}

@property(readonly) NSURL * URL;
@property(readonly) NSAttributedString * attributedString;
@property(readonly) int badgeType;
@property(readonly) UIImage * fallbackImage;
@property(readonly) NSString * resourceName;
@property(readonly) struct CGSize { float x1; float x2; } size;

- (void).cxx_destruct;
- (id)URL;
- (id)accessibilityText;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)attributedString;
- (int)badgeType;
- (id)fallbackImage;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)resourceName;
- (struct CGSize { float x1; float x2; })size;

@end
