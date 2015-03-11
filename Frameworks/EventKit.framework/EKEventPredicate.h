/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSDate, NSString, NSTimeZone;

@interface EKEventPredicate : EKPredicate <EKDefaultPropertiesLoading, NSSecureCoding> {
    NSDate *_endDate;
    BOOL _shouldLoadDefaultProperties;
    NSDate *_startDate;
    NSTimeZone *_timeZone;
    NSString *_title;
    NSString *_uuid;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) NSDate * endDate;
@property(readonly) NSString * eventUUID;
@property(readonly) unsigned int hash;
@property(readonly) BOOL shouldLoadDefaultProperties;
@property(readonly) NSDate * startDate;
@property(readonly) Class superclass;
@property(readonly) NSTimeZone * timeZone;
@property(readonly) NSString * title;

+ (id)predicateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4 loadDefaultProperties:(BOOL)arg5;
+ (id)predicateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4;
+ (id)predicateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 eventUUID:(id)arg4 calendars:(id)arg5;
+ (id)predicateWithStartDate:(id)arg1 title:(id)arg2 calendars:(id)arg3;
+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)defaultPropertiesToLoad;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (BOOL)evaluateWithObject:(id)arg1;
- (id)eventUUID;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4 loadDefaultProperties:(BOOL)arg5;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 eventUUID:(id)arg4 calendars:(id)arg5;
- (id)initWithStartDate:(id)arg1 title:(id)arg2 calendars:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)predicateFormat;
- (BOOL)shouldLoadDefaultProperties;
- (id)startDate;
- (id)timeZone;
- (id)title;

@end
