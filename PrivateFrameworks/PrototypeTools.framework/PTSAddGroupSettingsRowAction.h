/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@class NSString;

@interface PTSAddGroupSettingsRowAction : PTSRowAction {
    NSString *_groupKeyPath;
    Class _settingsClass;
}

@property(copy) NSString * groupKeyPath;
@property(retain) Class settingsClass;

+ (id)actionWithGroupKeyPath:(id)arg1 settingsClass:(Class)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)groupKeyPath;
- (id)init;
- (void)resolveTemplatesWithIndex:(unsigned int)arg1;
- (void)setGroupKeyPath:(id)arg1;
- (void)setSettingsClass:(Class)arg1;
- (Class)settingsClass;

@end
