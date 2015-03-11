/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString;

@interface SAReminderEmailPayload : AceObject <SAReminderPayload> {
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(copy) NSArray * recipientsTo;
@property(copy) NSString * subject;
@property(readonly) Class superclass;

+ (id)emailPayload;
+ (id)emailPayloadWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)recipientsTo;
- (void)setRecipientsTo:(id)arg1;
- (void)setSubject:(id)arg1;
- (id)subject;

@end
