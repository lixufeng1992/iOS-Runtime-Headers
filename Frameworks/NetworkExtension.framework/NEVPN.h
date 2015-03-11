/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@class NEVPNProtocol, NSArray;

@interface NEVPN : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying> {
    BOOL _enabled;
    BOOL _onDemandEnabled;
    NSArray *_onDemandRules;
    NEVPNProtocol *_protocol;
}

@property(getter=isEnabled) BOOL enabled;
@property(getter=isOnDemandEnabled) BOOL onDemandEnabled;
@property(copy) NSArray * onDemandRules;
@property(copy) NEVPNProtocol * protocol;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (BOOL)checkValidityAndCollectErrors:(id)arg1;
- (id)copyLegacyDictionary;
- (id)copyProfileDictionaryWithCertificateUUID:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithIndent:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEnabled;
- (BOOL)isOnDemandEnabled;
- (id)onDemandRules;
- (id)protocol;
- (void)setEnabled:(BOOL)arg1;
- (void)setOnDemandEnabled:(BOOL)arg1;
- (void)setOnDemandRules:(id)arg1;
- (void)setProtocol:(id)arg1;

@end
