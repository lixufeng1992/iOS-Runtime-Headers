/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@class <WKRotatingPopoverDelegate>, NSString, UIPopoverController, WKContentView;

@interface WKRotatingPopover : NSObject <UIPopoverControllerDelegate> {
    struct CGPoint { 
        float x; 
        float y; 
    struct RetainPtr<UIPopoverController> { 
        void *m_ptr; 
    <WKRotatingPopoverDelegate> *_dismissionDelegate;
    BOOL _isRotating;
    } _popoverController;
    } _presentationPoint;
    WKContentView *_view;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property <WKRotatingPopoverDelegate> * dismissionDelegate;
@property(readonly) unsigned int hash;
@property(retain) UIPopoverController * popoverController;
@property struct CGPoint { float x1; float x2; } presentationPoint;
@property(readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didRotate:(id)arg1;
- (void)dismissPopoverAnimated:(BOOL)arg1;
- (id)dismissionDelegate;
- (id)initWithView:(id)arg1;
- (unsigned int)popoverArrowDirections;
- (id)popoverController;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)presentPopoverAnimated:(BOOL)arg1;
- (struct CGPoint { float x1; float x2; })presentationPoint;
- (void)setDismissionDelegate:(id)arg1;
- (void)setPopoverController:(id)arg1;
- (void)setPresentationPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)willRotate:(id)arg1;

@end
