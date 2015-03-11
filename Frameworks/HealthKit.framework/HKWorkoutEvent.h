/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@class NSDate, NSString;

@interface HKWorkoutEvent : NSObject <NSSecureCoding, HDCoding> {
    NSDate *_date;
    int _type;
}

@property(copy,readonly) NSDate * date;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(readonly) int type;

+ (id)_newWorkoutEventWithType:(int)arg1 date:(id)arg2;
+ (id)_workoutEventWithType:(int)arg1 date:(id)arg2;
+ (id)createWithCodable:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)workoutEventWithType:(int)arg1 date:(id)arg2;

- (void).cxx_destruct;
- (void)_assertPropertiesValid;
- (id)_init;
- (void)_setDate:(id)arg1;
- (void)_setType:(int)arg1;
- (id)_validateConfiguration;
- (id)awakeAfterUsingCoder:(id)arg1;
- (id)codableRepresentationForSync;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (int)type;

@end
