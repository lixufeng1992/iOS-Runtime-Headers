/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class KNAnimatedSlideView, KNPlaybackSession, NSArray, NSMutableArray, TSUNoCopyDictionary;

@interface KNAnimatedSlideModel : NSObject {
    KNAnimatedSlideView *_ASV;
    TSUNoCopyDictionary *_animatedBuildToRendererMap;
    NSMutableArray *_animatedBuilds;
    NSMutableArray *_buildEvents;
    TSUNoCopyDictionary *_infoToAnimatedBuildMap;
    NSArray *_infos;
    unsigned int _numberOfAddedEvents;
    KNPlaybackSession *_session;
}

@property(readonly) NSArray * animatedBuilds;
@property(getter=isFirstBuildEventAutomatic,readonly) BOOL firstBuildEventAutomatic;
@property unsigned int numberOfAddedEvents;

- (id)actionEffectForDrawable:(id)arg1 atBeginningOfEvent:(int)arg2;
- (id)animatedBuildForInfo:(id)arg1 aroundEvent:(int)arg2 isAtEndOfBuild:(BOOL*)arg3;
- (id)animatedBuildForInfo:(id)arg1 atEvent:(int)arg2;
- (id)animatedBuilds;
- (id)buildChunksForEventRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (unsigned int)count;
- (id)createInfoToBuildMap:(id)arg1;
- (void)dealloc;
- (double)durationForEventIndexes:(id)arg1;
- (void)enumerateAnimatedBuildsAndTimeRangesAtIndex:(unsigned int)arg1 ignoreInitialDelay:(BOOL)arg2 usingBlock:(id)arg3;
- (void)enumerateAnimatedBuildsAndTimeRangesAtIndex:(unsigned int)arg1 usingBlock:(id)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })eventRangeForInfos:(id)arg1;
- (id)eventsAtIndex:(unsigned int)arg1;
- (id)finalActionEffectForDrawable:(id)arg1;
- (id)firstAnimatedBuildForInfo:(id)arg1;
- (int)inEventForInfo:(id)arg1;
- (BOOL)info:(id)arg1 isVisibleDuringEvent:(int)arg2;
- (id)initWithBuildChunks:(id)arg1 infos:(id)arg2 session:(id)arg3 animatedSlideView:(id)arg4;
- (double)initialDelayForEventIndex:(unsigned int)arg1;
- (BOOL)isFirstBuildEventAutomatic;
- (id)lastAnimatedBuildForInfo:(id)arg1;
- (float)maxScaleFactorForDrawable:(id)arg1;
- (unsigned int)numberOfAddedEvents;
- (int)outEventForInfo:(id)arg1;
- (id)p_animatedBuildForInfo:(id)arg1 event:(int)arg2 buildIn:(BOOL)arg3;
- (id)p_convertToBuildEvents:(id)arg1;
- (id)p_createBuildAnimationRecords:(id)arg1 info:(id)arg2 event:(int)arg3 start:(double)arg4 eventStart:(double)arg5 animateAtEndOfPreviousBuild:(BOOL)arg6 previousAnimatedBuild:(id)arg7 movieDrawables:(id)arg8;
- (id)p_createInfoListFromRendererList:(id)arg1;
- (id)p_createMovieBuild:(id)arg1 stageIndex:(int)arg2 buildChunk:(id)arg3 startTime:(double)arg4 eventStartTime:(double)arg5 event:(int)arg6 animateAtEndOfPreviousBuild:(BOOL)arg7;
- (BOOL)p_determineVisiblityOfInfo:(id)arg1 inOverloadedEvent:(int)arg2 duringEvent:(int)arg3;
- (int)p_eventNumberForInfo:(id)arg1 animationType:(int)arg2 defaultResult:(int)arg3;
- (void)p_insertInitialMovies;
- (void)p_setRenderer:(id)arg1 forAnimatedBuild:(id)arg2;
- (void)p_updatePreviousAndFinalAttributes;
- (void)p_updateVisibilityOnAnimatedBuild:(id)arg1;
- (id)previousAnimatedBuildForInfo:(id)arg1 priorToBuild:(id)arg2;
- (id)previousBuildInForInfo:(id)arg1 priorToBuild:(id)arg2;
- (id)rendererForAnimatedBuild:(id)arg1;
- (void)setNumberOfAddedEvents:(unsigned int)arg1;
- (void)setTransition:(id)arg1;
- (id)transition;

@end
