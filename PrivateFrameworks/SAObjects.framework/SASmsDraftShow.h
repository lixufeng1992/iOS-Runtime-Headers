/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL;

@interface SASmsDraftShow : SADomainCommand {
}

@property(copy) NSURL * smsIdentifier;

+ (id)draftShow;
+ (id)draftShowWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (void)setSmsIdentifier:(id)arg1;
- (id)smsIdentifier;

@end
