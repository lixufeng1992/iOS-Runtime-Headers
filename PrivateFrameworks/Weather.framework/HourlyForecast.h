/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

@class NSString;

@interface HourlyForecast : NSObject <NSCopying> {
    int _conditionCode;
    NSString *_detail;
    unsigned int _eventType;
    int _hourIndex;
    float _percentPrecipitation;
    NSString *_time;
}

@property int conditionCode;
@property(copy) NSString * detail;
@property unsigned int eventType;
@property int hourIndex;
@property float percentPrecipitation;
@property(copy) NSString * time;

+ (int)TimeValueFromString:(id)arg1;

- (int)conditionCode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)detail;
- (unsigned int)eventType;
- (int)hourIndex;
- (float)percentPrecipitation;
- (void)setConditionCode:(int)arg1;
- (void)setDetail:(id)arg1;
- (void)setEventType:(unsigned int)arg1;
- (void)setHourIndex:(int)arg1;
- (void)setPercentPrecipitation:(float)arg1;
- (void)setTime:(id)arg1;
- (id)time;

@end
