/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@class NSSet, NSString;

@interface AFPerson : AFSiriModelObject <AFTranscriptionType> {
    NSSet *_contactHandles;
    NSString *_fullName;
}

@property(copy) NSSet * contactHandles;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(copy) NSString * fullName;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contactHandles;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fullName;
- (id)initWithCoder:(id)arg1;
- (void)setContactHandles:(id)arg1;
- (void)setFullName:(id)arg1;

@end
