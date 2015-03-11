/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@class NSString, SGIdentityKey;

@interface SGPseudoContactKey : NSObject <SGEntityKey> {
    SGIdentityKey *_identityKey;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) SGIdentityKey * identityKey;
@property(readonly) Class superclass;

+ (BOOL)isSupportedEntityType:(long long)arg1;

- (void).cxx_destruct;
- (id)description;
- (unsigned int)hash;
- (id)identityKey;
- (id)initWithEmail:(id)arg1;
- (id)initWithIdentityKey:(id)arg1;
- (id)initWithNormalizedEmail:(id)arg1;
- (id)initWithSerialized:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPseudoContactKey:(id)arg1;
- (id)serialize;

@end
