/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class NSMutableDictionary;

@interface PUPhotoEditTaskManager : NSObject {
    NSMutableDictionary *_pendingRequestsByAsset;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_requestDidFinish:(id)arg1;
- (id)_saveEditsForPhoto:(id)arg1 saveRequest:(id)arg2 completionHandler:(id)arg3;
- (id)clearEditsForPhoto:(id)arg1 completionHandler:(id)arg2;
- (void)createEditableCopyForReadOnlyPhoto:(id)arg1 completionHandler:(id)arg2;
- (id)init;
- (id)pendingSaveRequestForPhoto:(id)arg1;
- (id)saveEditsForPhoto:(id)arg1 contentEditingOutput:(id)arg2 workImageVersion:(int)arg3 completionHandler:(id)arg4;
- (id)saveEditsForPhoto:(id)arg1 editModel:(id)arg2 workImageVersion:(int)arg3 completionHandler:(id)arg4;

@end
