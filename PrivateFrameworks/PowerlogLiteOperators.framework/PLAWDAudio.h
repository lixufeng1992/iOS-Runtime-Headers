/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@class NSDate, PLEntryNotificationOperatorComposition;

@interface PLAWDAudio : PLAWDAuxMetrics {
    PLEntryNotificationOperatorComposition *_audioRailCallback;
    NSDate *_startTime;
}

@property(retain) PLEntryNotificationOperatorComposition * audioRailCallback;
@property(retain) NSDate * startTime;

+ (id)entryAggregateDefinitionAwdAudio;
+ (id)entryAggregateDefinitions;
+ (id)getSharedObjWithOperator:(id)arg1;

- (void).cxx_destruct;
- (id)audioRailCallback;
- (void)finalizeAudioTable;
- (void)handleAudioRailCallback:(id)arg1;
- (void)resetAudioTable;
- (void)setAudioRailCallback:(id)arg1;
- (void)setStartTime:(id)arg1;
- (void)startMetricCollection:(id)arg1;
- (id)startTime;
- (void)stopMetricCollection:(id)arg1;
- (BOOL)submitDataToAWDServer:(id)arg1 withAwdConn:(id)arg2;

@end
