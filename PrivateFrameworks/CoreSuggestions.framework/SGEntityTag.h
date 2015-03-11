/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@class NSString;

@interface SGEntityTag : NSObject <NSCopying> {
    BOOL _indexed;
    NSString *_name;
    BOOL _stored;
}

@property(readonly) BOOL indexed;
@property(readonly) NSString * name;
@property(readonly) BOOL stored;

+ (id)allDay;
+ (id)contactDetail:(id)arg1;
+ (id)containsEntityExtraction:(long long)arg1;
+ (id)defaultDuration;
+ (id)extraKey:(id)arg1;
+ (id)extractedBus;
+ (id)extractedCarRental;
+ (id)extractedEvent;
+ (id)extractedEventCancellation;
+ (id)extractedFlight;
+ (id)extractedFood;
+ (id)extractedFromTemplateWithShortName:(id)arg1;
+ (id)extractedHotel;
+ (id)extractedMovie;
+ (id)extractedSocial;
+ (id)extractedTicket;
+ (id)extractedTrain;
+ (id)fromExtractedDomain;
+ (id)fromForwardedMessage;
+ (id)fromReply;
+ (id)hardName;
+ (id)human;
+ (id)identity:(id)arg1;
+ (id)inhuman;
+ (void)initialize;
+ (id)messageWithMessageIdHash:(long long)arg1 fromSource:(id)arg2;
+ (id)remember:(id)arg1;
+ (void)rememberPrefix:(id)arg1 stored:(BOOL)arg2 indexed:(BOOL)arg3;
+ (id)resolveName:(id)arg1;
+ (id)tagForPrefix:(id)arg1 value:(id)arg2;
+ (id)testTag:(int)arg1;
+ (id)url:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)indexed;
- (id)initWithName:(id)arg1 stored:(BOOL)arg2 indexed:(BOOL)arg3;
- (BOOL)isContactDetail;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToEntityTag:(id)arg1;
- (BOOL)isExtraKey;
- (BOOL)isTemplateShortName;
- (BOOL)isUrl;
- (id)name;
- (BOOL)stored;
- (id)value;

@end
