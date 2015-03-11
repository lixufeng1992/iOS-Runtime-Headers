/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@class NSArray, NSString;

@interface CalMeCard : NSObject <NSSecureCoding> {
    NSString *_displayName;
    NSArray *_emailAddresses;
    NSString *_uniqueID;
    int _version;
}

@property(retain,readonly) NSString * displayName;
@property(retain,readonly) NSArray * emailAddresses;
@property(retain,readonly) NSString * uniqueID;
@property int version;

+ (id)cardFromPath:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)displayName;
- (id)emailAddresses;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayName:(id)arg1 emailAddresses:(id)arg2 uniqueID:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToMeCard:(id)arg1;
- (id)preferredEmailAddress;
- (void)setVersion:(int)arg1;
- (id)uniqueID;
- (int)version;
- (BOOL)writeToPath:(id)arg1;

@end
