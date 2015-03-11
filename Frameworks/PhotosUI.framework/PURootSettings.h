/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class PUFeedSettings, PUMomentsSettings, PUPhotoEditProtoSettings, PUPhotosGridSettings;

@interface PURootSettings : PUSettings {
    PUFeedSettings *_feedSettings;
    int _imagePickerTestSourceType;
    PUMomentsSettings *_momentsSettings;
    PUPhotoEditProtoSettings *_photoEditingSettings;
    PUPhotosGridSettings *_photosGridSettings;
    unsigned int _settingsVersion;
}

@property(retain) PUFeedSettings * feedSettings;
@property int imagePickerTestSourceType;
@property(retain) PUMomentsSettings * momentsSettings;
@property(retain) PUPhotoEditProtoSettings * photoEditingSettings;
@property(retain) PUPhotosGridSettings * photosGridSettings;
@property unsigned int settingsVersion;

+ (void)_addRandomPhoto;
+ (id)_currentViewControllerStack;
+ (id)_debugRowsForViewControllerStack:(id)arg1;
+ (void)_deleteAllDiagnosticFiles;
+ (void)_setDebugRows:(id)arg1;
+ (void)presentSettingsController;
+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_save;
- (id)feedSettings;
- (int)imagePickerTestSourceType;
- (id)momentsSettings;
- (id)photoEditingSettings;
- (id)photosGridSettings;
- (void)setDefaultValues;
- (void)setFeedSettings:(id)arg1;
- (void)setImagePickerTestSourceType:(int)arg1;
- (void)setMomentsSettings:(id)arg1;
- (void)setPhotoEditingSettings:(id)arg1;
- (void)setPhotosGridSettings:(id)arg1;
- (void)setSettingsVersion:(unsigned int)arg1;
- (unsigned int)settingsVersion;

@end
