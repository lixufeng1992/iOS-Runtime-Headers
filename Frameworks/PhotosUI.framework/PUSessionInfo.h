/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<PLAlbumProtocol>, NSOrderedSet, NSPointerArray, NSString, PUPhotoSelectionManager;

@interface PUSessionInfo : NSObject <PUPhotoSelectionManagerDelegate> {
    id _bannerGenerator;
    NSString *_localizedPrompt;
    NSPointerArray *_observers;
    PUPhotoSelectionManager *_photoSelectionManager;
    int _promptLocation;
    BOOL _selectingAssets;
    BOOL _selectingTargetAlbum;
    struct NSObject { Class x1; } *_sourceAlbum;
    int _status;
    struct NSObject { Class x1; } *_targetAlbum;
    BOOL _targetAlbumIsNewLocalAlbum;
    NSOrderedSet *_transferredAssets;
}

@property(copy) id bannerGenerator;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(copy) NSString * localizedPrompt;
@property(retain) PUPhotoSelectionManager * photoSelectionManager;
@property int promptLocation;
@property(getter=isSelectingAssets,readonly) BOOL selectingAssets;
@property(getter=isSelectingTargetAlbum,readonly) BOOL selectingTargetAlbum;
@property(retain) NSObject<PLAlbumProtocol> * sourceAlbum;
@property int status;
@property(readonly) Class superclass;
@property(retain) NSObject<PLAlbumProtocol> * targetAlbum;
@property BOOL targetAlbumIsNewLocalAlbum;
@property(copy) NSOrderedSet * transferredAssets;

- (void).cxx_destruct;
- (void)_enumerateObserversWithBlock:(id)arg1;
- (void)addSessionInfoObserver:(id)arg1;
- (id)bannerGenerator;
- (id)init;
- (BOOL)isSelectingAssets;
- (BOOL)isSelectingTargetAlbum;
- (id)localizedPrompt;
- (id)photoSelectionManager;
- (void)photoSelectionManagerSelectionDidChange:(id)arg1;
- (int)promptLocation;
- (void)removeSessionInfoObserver:(id)arg1;
- (void)setBannerGenerator:(id)arg1;
- (void)setLocalizedPrompt:(id)arg1;
- (void)setPhotoSelectionManager:(id)arg1;
- (void)setPromptLocation:(int)arg1;
- (void)setSourceAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)setStatus:(int)arg1;
- (void)setTargetAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)setTargetAlbumIsNewLocalAlbum:(BOOL)arg1;
- (void)setTransferredAssets:(id)arg1;
- (struct NSObject { Class x1; }*)sourceAlbum;
- (int)status;
- (struct NSObject { Class x1; }*)targetAlbum;
- (BOOL)targetAlbumIsNewLocalAlbum;
- (id)transferredAssets;

@end
