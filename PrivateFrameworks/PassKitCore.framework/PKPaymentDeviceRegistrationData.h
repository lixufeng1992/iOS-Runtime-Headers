/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSDictionary, NSString;

@interface PKPaymentDeviceRegistrationData : NSObject <NSSecureCoding> {
    BOOL _devSigned;
    NSString *_deviceSerialNumber;
    NSString *_productType;
    NSString *_secureElementIdentifier;
    NSString *_signedAuthToken;
    NSDictionary *_stateInformation;
}

@property BOOL devSigned;
@property(copy) NSString * deviceSerialNumber;
@property(copy) NSString * productType;
@property(copy) NSString * secureElementIdentifier;
@property(copy) NSString * signedAuthToken;
@property(copy) NSDictionary * stateInformation;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (BOOL)devSigned;
- (id)deviceSerialNumber;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)productType;
- (id)secureElementIdentifier;
- (void)setDevSigned:(BOOL)arg1;
- (void)setDeviceSerialNumber:(id)arg1;
- (void)setProductType:(id)arg1;
- (void)setSecureElementIdentifier:(id)arg1;
- (void)setSignedAuthToken:(id)arg1;
- (void)setStateInformation:(id)arg1;
- (id)signedAuthToken;
- (id)stateInformation;

@end
