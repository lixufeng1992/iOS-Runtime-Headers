/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSString, PLPhotoLibrary, UIActionSheet, UIAlertView;

@interface PLDeletePhotosActionController : NSObject <UIActionSheetDelegate, UIAlertViewDelegate> {
    int _action;
    UIActionSheet *_actionSheet;
    int _actionSheetStyle;
    NSArray *_additionalAssetsToDelete;
    NSArray *_assets;
    id _completionHandler;
    BOOL _handlesDuplicates;
    BOOL _needsOnetimeConfirmationSheet;
    UIAlertView *_onetimeConfirmationSheet;
    PLPhotoLibrary *_photoLibrary;
    id _willDeleteHandler;
}

@property(readonly) int action;
@property int actionSheetStyle;
@property(readonly) NSArray * assets;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) BOOL handlesDuplicates;
@property(readonly) unsigned int hash;
@property(readonly) PLPhotoLibrary * photoLibrary;
@property(readonly) Class superclass;

- (void)_didCompleteWithDestructiveAction:(BOOL)arg1;
- (void)_getDeleteActionSheetTitle:(id*)arg1 destructiveButtonTitle:(id*)arg2 cancelButtonTitle:(id*)arg3 forAssets:(id)arg4 additionalPhotoStreamAssets:(id)arg5;
- (void)_setupActionSheet;
- (void)_setupOnetimeConfirmationSheet;
- (void)_showOnetimeConfirmation;
- (int)action;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)actionSheet:(id)arg1 willDismissWithButtonIndex:(int)arg2;
- (int)actionSheetStyle;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (id)assets;
- (void)dealloc;
- (void)dismissAnimated:(BOOL)arg1;
- (BOOL)handlesDuplicates;
- (id)initWithPhotoLibrary:(id)arg1 assets:(id)arg2 action:(int)arg3 handleDuplicates:(BOOL)arg4;
- (id)photoLibrary;
- (void)redisplayFromObject:(id)arg1 animated:(BOOL)arg2;
- (void)setActionSheetStyle:(int)arg1;
- (void)showFromObject:(id)arg1 animated:(BOOL)arg2 willDeleteHandler:(id)arg3 completionHandler:(id)arg4;
- (void)showInView:(id)arg1 willDeleteHandler:(id)arg2 completionHandler:(id)arg3;

@end
