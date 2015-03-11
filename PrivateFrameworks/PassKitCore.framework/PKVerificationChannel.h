/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSString;

@interface PKVerificationChannel : NSObject <NSCopying, NSSecureCoding> {
    NSString *_contactPoint;
    NSString *_identifier;
    BOOL _requiresUserInteraction;
    NSString *_sourceAddress;
    unsigned int _type;
    NSString *_typeDescription;
}

@property(copy) NSString * contactPoint;
@property(copy) NSString * identifier;
@property BOOL requiresUserInteraction;
@property(copy) NSString * sourceAddress;
@property unsigned int type;
@property(copy) NSString * typeDescription;
@property(readonly) NSString * typeDescriptionUnlocalized;

+ (BOOL)supportsSecureCoding;
+ (id)verificationChannelWithDictionary:(id)arg1;

- (id)contactPoint;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (BOOL)needsServerRequest;
- (BOOL)requiresUserInteraction;
- (void)setContactPoint:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setRequiresUserInteraction:(BOOL)arg1;
- (void)setSourceAddress:(id)arg1;
- (void)setType:(unsigned int)arg1;
- (void)setTypeDescription:(id)arg1;
- (id)sourceAddress;
- (unsigned int)type;
- (id)typeDescription;
- (id)typeDescriptionUnlocalized;

@end
