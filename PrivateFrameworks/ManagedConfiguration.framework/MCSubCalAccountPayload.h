/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSString;

@interface MCSubCalAccountPayload : MCPayload {
    NSString *_accountDescription;
    NSString *_accountPersistentUUID;
    NSString *_hostname;
    NSString *_password;
    BOOL _useSSL;
    NSString *_username;
}

@property(retain,readonly) NSString * accountDescription;
@property(copy) NSString * accountPersistentUUID;
@property(retain,readonly) NSString * hostname;
@property(retain,readonly) NSString * password;
@property(readonly) BOOL useSSL;
@property(retain,readonly) NSString * username;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)accountDescription;
- (id)accountPersistentUUID;
- (id)description;
- (id)hostname;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)password;
- (id)payloadDescriptionKeyValueSections;
- (void)setAccountPersistentUUID:(id)arg1;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)title;
- (BOOL)useSSL;
- (id)username;

@end
