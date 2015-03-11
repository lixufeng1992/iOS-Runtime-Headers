/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@class HMCharacteristicMetadata, HMService, NSArray, NSNumber, NSString;

@interface HMCharacteristic : NSObject <NSSecureCoding> {
    NSString *_characteristicType;
    NSNumber *_instanceID;
    HMCharacteristicMetadata *_metadata;
    BOOL _notificationEnabled;
    NSArray *_properties;
    HMService *_service;
    id _value;
}

@property(copy,readonly) NSString * characteristicType;
@property(retain) NSNumber * instanceID;
@property(readonly) HMCharacteristicMetadata * metadata;
@property(getter=isNotificationEnabled) BOOL notificationEnabled;
@property(copy,readonly) NSArray * properties;
@property HMService * service;
@property(copy) id value;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)characteristicType;
- (id)characteristicTypeDescription;
- (void)configure:(id)arg1;
- (void)enableNotification:(BOOL)arg1 completionHandler:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)instanceID;
- (BOOL)isNotificationEnabled;
- (id)mapCuapProperties:(int)arg1;
- (int)mapToCuapProperties:(id)arg1;
- (id)metadata;
- (id)properties;
- (void)readValueWithCompletionHandler:(id)arg1;
- (id)service;
- (void)setInstanceID:(id)arg1;
- (void)setNotificationEnabled:(BOOL)arg1;
- (void)setService:(id)arg1;
- (void)setValue:(id)arg1;
- (void)updateAuthorizationData:(id)arg1 completionHandler:(id)arg2;
- (void)updateValue:(id)arg1;
- (id)value;
- (void)writeValue:(id)arg1 completionHandler:(id)arg2;

@end
