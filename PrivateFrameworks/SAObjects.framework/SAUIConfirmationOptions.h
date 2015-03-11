/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString;

@interface SAUIConfirmationOptions : AceObject <SAAceSerializable> {
}

@property(copy) NSArray * allConfirmationOptions;
@property(copy) NSString * cancelTrigger;
@property(copy) NSArray * confirmCommands;
@property(copy) NSString * confirmText;
@property(copy,readonly) NSString * debugDescription;
@property(copy) NSArray * denyCommands;
@property(copy) NSString * denyText;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (id)confirmationOptions;
+ (id)confirmationOptionsWithDictionary:(id)arg1 context:(id)arg2;

- (id)allConfirmationOptions;
- (id)cancelTrigger;
- (id)confirmCommands;
- (id)confirmText;
- (id)denyCommands;
- (id)denyText;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setAllConfirmationOptions:(id)arg1;
- (void)setCancelTrigger:(id)arg1;
- (void)setConfirmCommands:(id)arg1;
- (void)setConfirmText:(id)arg1;
- (void)setDenyCommands:(id)arg1;
- (void)setDenyText:(id)arg1;

@end
