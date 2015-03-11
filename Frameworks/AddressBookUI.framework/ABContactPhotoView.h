/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABContactPhotoViewDelegate>, <ABPresenterDelegate>, CNContact, NSDictionary, NSString, UIGestureRecognizer, UIImage, UIImageView, UILabel;

@interface ABContactPhotoView : UIControl <UINavigationControllerDelegate, UIImagePickerControllerDelegate, QLPreviewControllerDelegate, QLPreviewControllerDataSource> {
    UILabel *_addPhotoLabel;
    UIImageView *_attributionImageView;
    CNContact *_contact;
    UIImageView *_contactImageView;
    UIImage *_currentImage;
    UIImage *_currentThumbnailImage;
    <ABPresenterDelegate> *_delegate;
    UILabel *_editPhotoLabel;
    BOOL _editing;
    BOOL _isAnimatingBounce;
    BOOL _modified;
    NSDictionary *_photoPickerInfo;
    <ABContactPhotoViewDelegate> *_photoViewDelegate;
    UIGestureRecognizer *_tapGesture;
}

@property(retain) UILabel * addPhotoLabel;
@property(retain) UIImageView * attributionImageView;
@property(retain) CNContact * contact;
@property(retain) UIImageView * contactImageView;
@property(retain) UIImage * currentImage;
@property(retain) UIImage * currentThumbnailImage;
@property(copy,readonly) NSString * debugDescription;
@property <ABPresenterDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(retain) UILabel * editPhotoLabel;
@property(getter=isEditing) BOOL editing;
@property(readonly) unsigned int hash;
@property BOOL isAnimatingBounce;
@property BOOL modified;
@property(retain) NSDictionary * photoPickerInfo;
@property <ABContactPhotoViewDelegate> * photoViewDelegate;
@property(readonly) Class superclass;
@property(retain) UIGestureRecognizer * tapGesture;

+ (id)supportedPasteboardTypes;

- (void)_bounceSmallPhoto;
- (id)_createImagePicker;
- (id)_createImagePickerForEditingImageData:(id)arg1 withCropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)_presentFullScreenPhoto:(id)arg1;
- (void)_presentPhotoEditingSheet;
- (void)_zoomContactPhoto;
- (id)addPhotoLabel;
- (id)attributionImageView;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)contact;
- (id)contactImageView;
- (void)copy:(id)arg1;
- (id)currentImage;
- (id)currentImageData;
- (id)currentImageDataAndCropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1;
- (id)currentThumbnailImage;
- (void)dealloc;
- (id)delegate;
- (void)disablePhotoTapGesture;
- (id)editPhotoLabel;
- (BOOL)hasPhoto;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)initWithContact:(id)arg1 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (BOOL)isAnimatingBounce;
- (BOOL)isEditing;
- (void)layoutSubviews;
- (void)longPressGesture:(id)arg1;
- (void)menuWillHide:(id)arg1;
- (BOOL)modified;
- (int)numberOfPreviewItemsInPreviewController:(id)arg1;
- (void)paste:(id)arg1;
- (id)photoPickerInfo;
- (id)photoViewDelegate;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id*)arg3;
- (id)previewController:(id)arg1 previewItemAtIndex:(int)arg2;
- (id)previewController:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg3;
- (void)previewControllerDidDismiss:(id)arg1;
- (id)previewPath;
- (void)resetPhoto;
- (void)saveEdits;
- (void)setAddPhotoLabel:(id)arg1;
- (void)setAttributionImageView:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setContactImageView:(id)arg1;
- (void)setCurrentImage:(id)arg1;
- (void)setCurrentThumbnailImage:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditPhotoLabel:(id)arg1;
- (void)setEditing:(BOOL)arg1;
- (void)setHighlightedFrame:(BOOL)arg1;
- (void)setIsAnimatingBounce:(BOOL)arg1;
- (void)setModified:(BOOL)arg1;
- (void)setPhotoPickerInfo:(id)arg1;
- (void)setPhotoViewDelegate:(id)arg1;
- (void)setTapGesture:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)tapGesture:(id)arg1;
- (id)tapGesture;
- (void)tintColorDidChange;
- (void)updateAttributionBadge;
- (void)updateFontSizes;
- (void)updatePhoto;
- (void)updatePhotoWithImage:(id)arg1;

@end
