/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class KNRecording, KNSlideTree, KNSoundtrack, KNTheme, KNUIState, TSSStylesheet;

@interface KNShow : TSPObject {
    struct CGSize { 
        float width; 
        float height; 
    BOOL mAutomaticallyPlaysUponOpen;
    double mAutoplayBuildDelay;
    double mAutoplayTransitionDelay;
    BOOL mIdleTimerActive;
    double mIdleTimerDelay;
    BOOL mLoopPresentation;
    int mMode;
    BOOL mNeedsToUpdateThumbnails;
    KNRecording *mRecording;
    } mSize;
    KNSlideTree *mSlideTree;
    KNSoundtrack *mSoundtrack;
    TSSStylesheet *mStylesheet;
    KNTheme *mTheme;
    KNUIState *mUIState;
    BOOL mWasImportedAsPreUFF;
}

@property BOOL automaticallyPlaysUponOpen;
@property double autoplayBuildDelay;
@property double autoplayTransitionDelay;
@property BOOL idleTimerActive;
@property double idleTimerDelay;
@property BOOL loopPresentation;
@property int mode;
@property(readonly) BOOL needsToUpdateThumbnails;
@property(retain) KNRecording * recording;
@property struct CGSize { float x1; float x2; } size;
@property(readonly) BOOL slideNumbersVisible;
@property(retain) KNSlideTree * slideTree;
@property(retain) KNSoundtrack * soundtrack;
@property(readonly) TSSStylesheet * stylesheet;
@property(retain) KNTheme * theme;
@property(retain) KNUIState * uiState;
@property(readonly) BOOL wasImportedAsPreUFF;

+ (id)showWithSize:(struct CGSize { float x1; float x2; })arg1 context:(id)arg2;

- (BOOL)automaticallyPlaysUponOpen;
- (double)autoplayBuildDelay;
- (double)autoplayTransitionDelay;
- (struct CGPoint { float x1; float x2; })center;
- (void)dealloc;
- (BOOL)idleTimerActive;
- (double)idleTimerDelay;
- (unsigned int)indexOfSlideNode:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1 context:(id)arg2;
- (void)loadFromArchive:(const struct ShowArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Reference {} *x3; struct Reference {} *x4; struct SlideTreeArchive {} *x5; struct Size {} *x6; struct Reference {} *x7; struct Reference {} *x8; double x9; int x10; boolx11; boolx12; boolx13; boolx14; double x15; double x16; struct Reference {} *x17; int x18; unsigned int x19[1]; }*)arg1 unarchiver:(id)arg2;
- (BOOL)loopPresentation;
- (int)mode;
- (BOOL)needsToUpdateThumbnails;
- (id)recording;
- (void)saveToArchive:(struct ShowArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Reference {} *x3; struct Reference {} *x4; struct SlideTreeArchive {} *x5; struct Size {} *x6; struct Reference {} *x7; struct Reference {} *x8; double x9; int x10; boolx11; boolx12; boolx13; boolx14; double x15; double x16; struct Reference {} *x17; int x18; unsigned int x19[1]; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setAutomaticallyPlaysUponOpen:(BOOL)arg1;
- (void)setAutoplayBuildDelay:(double)arg1;
- (void)setAutoplayTransitionDelay:(double)arg1;
- (void)setIdleTimerActive:(BOOL)arg1;
- (void)setIdleTimerDelay:(double)arg1;
- (void)setLoopPresentation:(BOOL)arg1;
- (void)setMode:(int)arg1;
- (void)setRecording:(id)arg1;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setSlideTree:(id)arg1;
- (void)setSoundtrack:(id)arg1;
- (void)setTheme:(id)arg1;
- (void)setUiState:(id)arg1;
- (struct CGSize { float x1; float x2; })size;
- (id)slideNodeAtIndex:(unsigned int)arg1;
- (BOOL)slideNumbersVisible;
- (id)slideTree;
- (id)soundtrack;
- (id)stylesheet;
- (id)theme;
- (id)uiState;
- (BOOL)wasImportedAsPreUFF;
- (void)willModify;

@end
