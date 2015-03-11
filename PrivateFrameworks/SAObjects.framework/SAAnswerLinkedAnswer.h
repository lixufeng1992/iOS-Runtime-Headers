/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSURL;

@interface SAAnswerLinkedAnswer : AceObject <SAAceSerializable> {
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(copy) NSString * descriptionText;
@property(readonly) unsigned int hash;
@property(copy) NSURL * image;
@property(copy) NSURL * link;
@property(copy) NSString * name;
@property(readonly) Class superclass;

+ (id)linkedAnswer;
+ (id)linkedAnswerWithDictionary:(id)arg1 context:(id)arg2;

- (id)descriptionText;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)image;
- (id)link;
- (id)name;
- (void)setDescriptionText:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setLink:(id)arg1;
- (void)setName:(id)arg1;

@end
