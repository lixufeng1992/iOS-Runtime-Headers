/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@class HDCodableSample, NSMutableArray;

@interface HDCodableWorkout : PBCodable <NSCopying> {
    struct { 
        unsigned int duration : 1; 
        unsigned int goal : 1; 
        unsigned int goalType : 1; 
        unsigned int totalDistanceInCanonicalUnit : 1; 
        unsigned int totalEnergyBurnedInCanonicalUnit : 1; 
        unsigned int type : 1; 
    double _duration;
    NSMutableArray *_events;
    double _goal;
    long long _goalType;
    } _has;
    HDCodableSample *_sample;
    double _totalDistanceInCanonicalUnit;
    double _totalEnergyBurnedInCanonicalUnit;
    long long _type;
}

@property double duration;
@property(retain) NSMutableArray * events;
@property double goal;
@property long long goalType;
@property BOOL hasDuration;
@property BOOL hasGoal;
@property BOOL hasGoalType;
@property(readonly) BOOL hasSample;
@property BOOL hasTotalDistanceInCanonicalUnit;
@property BOOL hasTotalEnergyBurnedInCanonicalUnit;
@property BOOL hasType;
@property(retain) HDCodableSample * sample;
@property double totalDistanceInCanonicalUnit;
@property double totalEnergyBurnedInCanonicalUnit;
@property long long type;

- (void).cxx_destruct;
- (void)addEvents:(id)arg1;
- (void)clearEvents;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decodedGoal;
- (unsigned int)decodedGoalType;
- (id)decodedTotalDistance;
- (id)decodedTotalEnergyBurned;
- (id)decodedWorkoutEvents;
- (id)description;
- (id)dictionaryRepresentation;
- (double)duration;
- (id)events;
- (id)eventsAtIndex:(unsigned int)arg1;
- (unsigned int)eventsCount;
- (double)goal;
- (long long)goalType;
- (BOOL)hasDuration;
- (BOOL)hasGoal;
- (BOOL)hasGoalType;
- (BOOL)hasSample;
- (BOOL)hasTotalDistanceInCanonicalUnit;
- (BOOL)hasTotalEnergyBurnedInCanonicalUnit;
- (BOOL)hasType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)sample;
- (void)setDuration:(double)arg1;
- (void)setEvents:(id)arg1;
- (void)setGoal:(double)arg1;
- (void)setGoalType:(long long)arg1;
- (void)setHasDuration:(BOOL)arg1;
- (void)setHasGoal:(BOOL)arg1;
- (void)setHasGoalType:(BOOL)arg1;
- (void)setHasTotalDistanceInCanonicalUnit:(BOOL)arg1;
- (void)setHasTotalEnergyBurnedInCanonicalUnit:(BOOL)arg1;
- (void)setHasType:(BOOL)arg1;
- (void)setSample:(id)arg1;
- (void)setTotalDistanceInCanonicalUnit:(double)arg1;
- (void)setTotalEnergyBurnedInCanonicalUnit:(double)arg1;
- (void)setType:(long long)arg1;
- (double)totalDistanceInCanonicalUnit;
- (double)totalEnergyBurnedInCanonicalUnit;
- (long long)type;
- (void)writeTo:(id)arg1;

@end
