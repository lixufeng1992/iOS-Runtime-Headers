/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UIWebFileUploadPanelDelegate>, DOMNode, NSArray, NSObject<WebOpenPanelResultListener>, NSString, UIAlertController, UIImagePickerController, UIPopoverController, UIViewController, UIWebDocumentView;

@interface UIWebFileUploadPanel : UIViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIPopoverControllerDelegate> {
    struct CGPoint { 
        float x; 
        float y; 
    BOOL _allowMultipleFiles;
    <UIWebFileUploadPanelDelegate> *_delegate;
    UIWebDocumentView *_documentView;
    BOOL _documentViewPresentedViewController;
    UIImagePickerController *_imagePicker;
    DOMNode *_interactionElement;
    } _interactionPoint;
    BOOL _isUsingCamera;
    NSArray *_mimeTypes;
    UIPopoverController *_presentationPopover;
    UIViewController *_presentationViewController;
    NSObject<WebOpenPanelResultListener> *_resultListener;
    UIAlertController *_selectPickerTypeSheet;
}

@property BOOL allowMultipleFiles;
@property(copy,readonly) NSString * debugDescription;
@property <UIWebFileUploadPanelDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property UIWebDocumentView * documentView;
@property(readonly) unsigned int hash;
@property BOOL isUsingCamera;
@property(copy) NSArray * mimeTypes;
@property(retain) NSObject<WebOpenPanelResultListener> * resultListener;
@property(readonly) Class superclass;

- (void)_cancel;
- (void)_chooseFilename:(id)arg1 displayString:(id)arg2 iconImage:(id)arg3;
- (void)_chooseFilenames:(id)arg1 displayString:(id)arg2 iconImage:(id)arg3;
- (float)_compressionQuality;
- (void)_dismissDisplayAnimated:(BOOL)arg1;
- (void)_dispatchDidDismiss;
- (id)_displayStringForPhotos:(unsigned int)arg1 videos:(unsigned int)arg2;
- (id)_filePathForMediaURL:(id)arg1;
- (void)_filePathFromMediaInfo:(id)arg1 successBlock:(id)arg2 failureBlock:(id)arg3;
- (id)_mediaTypesForPickerSourceType:(int)arg1;
- (id)_photoPickerWithSourceType:(int)arg1;
- (void)_presentFullscreenViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_presentPopoverWithContentViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_processMediaInfoDictionaries:(id)arg1 atIndex:(unsigned int)arg2 processedResults:(id)arg3 processedImageCount:(unsigned int)arg4 processedVideoCount:(unsigned int)arg5 successBlock:(id)arg6 failureBlock:(id)arg7;
- (void)_processMediaInfoDictionaries:(id)arg1 successBlock:(id)arg2 failureBlock:(id)arg3;
- (void)_showMediaSourceSelectionSheet;
- (void)_showPhotoPickerWithSourceType:(int)arg1;
- (BOOL)_string:(id)arg1 hasPrefixCaseInsensitive:(id)arg2;
- (void)_temporaryFilePathForOriginalImage:(id)arg1 successBlock:(id)arg2 failureBlock:(id)arg3;
- (id)_thumbnailSizedImageForImage:(id)arg1;
- (BOOL)_willMultipleSelectionDelegateBeCalled;
- (BOOL)allowMultipleFiles;
- (void)dealloc;
- (id)delegate;
- (void)dismiss;
- (id)documentView;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingMultipleMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)initWithResultListener:(id)arg1 mimeTypes:(id)arg2 allowMultipleFiles:(BOOL)arg3 documentView:(id)arg4;
- (BOOL)isUsingCamera;
- (id)mimeTypes;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)present;
- (id)resultListener;
- (void)setAllowMultipleFiles:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDocumentView:(id)arg1;
- (void)setIsUsingCamera:(BOOL)arg1;
- (void)setMimeTypes:(id)arg1;
- (void)setResultListener:(id)arg1;

@end
