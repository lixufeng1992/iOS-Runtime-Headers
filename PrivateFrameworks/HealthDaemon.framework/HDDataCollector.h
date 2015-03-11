/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@class <HDHealthDaemon>, HDSourceEntity, HKObjectType, NSObject<OS_dispatch_queue>, NSString;

@interface HDDataCollector : NSObject <HDHealthDataCollector> {
    double _collectionInterval;
    BOOL _disabled;
    int _failureRetryCount;
    <HDHealthDaemon> *_healthDaemon;
    HKObjectType *_observedType;
    NSObject<OS_dispatch_queue> *_queue;
    HDSourceEntity *_sourceEntity;
    int _state;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property BOOL disabled;
@property(readonly) unsigned int hash;
@property(readonly) HDSourceEntity * sourceEntity;
@property(readonly) Class superclass;

+ (id)domain;
+ (id)observedType;
+ (id)secondaryContextClasses;
+ (Class)sensorDatumClass;

- (void).cxx_destruct;
- (id)_contextFromDictionary:(id)arg1;
- (id)_contextFromSensorDatum:(id)arg1;
- (id)_dictionaryFromContext:(id)arg1;
- (void)_performAsync:(id)arg1;
- (void)_performSync:(id)arg1;
- (BOOL)_persistContext:(id)arg1 forKey:(id)arg2;
- (BOOL)_persistPrimaryContext:(id)arg1;
- (BOOL)_persistSecondaryContext:(id)arg1;
- (void)_queue_beginStreaming;
- (void)_queue_beginStreamingIfNecessary;
- (BOOL)_queue_disabled;
- (void)_queue_incrementFailureRetryCounter;
- (void)_queue_receivedData;
- (void)_queue_resetFailureRetryCounter;
- (void)_queue_retryFromFailure;
- (BOOL)_queue_shouldRetryFromFailure;
- (id)_queue_sourceEntity;
- (BOOL)_queue_streaming;
- (void)_queue_transitionToFailure;
- (void)_queue_transitionToIdle;
- (void)_queue_transitionToStreaming;
- (void)_queue_updateCollectionInterval:(double)arg1;
- (id)_retrieveContextForKey:(id)arg1;
- (id)_retrievePrimaryContext;
- (id)_retrieveSecondaryContext;
- (id)_sensorDatumFromContext:(id)arg1;
- (double)collectionInterval;
- (void)collectionStartedForType:(id)arg1 collectionInterval:(double)arg2;
- (void)collectionStoppedForType:(id)arg1;
- (id)dataCollectorDiagnosticDescription;
- (BOOL)disabled;
- (id)initWithHealthDaemon:(id)arg1;
- (void)setCollectionInterval:(double)arg1;
- (void)setDisabled:(BOOL)arg1;
- (id)sourceEntity;
- (void)stopPerformingUpdatesWithErrorEncountered:(BOOL)arg1;
- (void)updateCollectionInterval:(double)arg1 forType:(id)arg2;
- (void)updateHistoricalData;

@end
