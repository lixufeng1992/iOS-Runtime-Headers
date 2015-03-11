/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

@class NSData;

@interface PBCodable : NSObject <NSSecureCoding> {
}

@property(readonly) NSData * data;

+ (id)options;
+ (BOOL)supportsSecureCoding;

- (BOOL)_isRedactable:(id)arg1;
- (id)_redact:(id)arg1;
- (id)data;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)formattedText;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)nmr_valueForPotentiallyUndefinedKey:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)redact;
- (void)writeTo:(id)arg1;

@end
