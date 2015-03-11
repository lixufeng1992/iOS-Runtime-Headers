/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABUIPerson, NSString;

@interface ABActionsController : NSObject {
    struct __CFArray { } *_actionsForProperty;
    void *_context;
    int _lastPropertyForActions;
    int _multiValueIdentifier;
    ABUIPerson *_person;
    int _property;
    NSString *_stringValue;
    id _value;
}

@property(retain) ABUIPerson * person;

+ (int)defaultActionForProperty:(int)arg1;
+ (id)newActionsControllerForProperty:(int)arg1;

- (int)_actionAtIndex:(int)arg1 forProperty:(int)arg2;
- (struct __CFArray { }*)_actionsForProperty:(int)arg1;
- (void)_performAction:(int)arg1 forProperty:(int)arg2;
- (int)actionsCountForProperty:(int)arg1;
- (void*)context;
- (void)dealloc;
- (int)defaultAction;
- (id)init;
- (id)initWithProperty:(int)arg1;
- (void)performAction:(int)arg1;
- (void)performActionAtIndex:(int)arg1 forProperty:(int)arg2;
- (void)performDefaultAction;
- (id)person;
- (void)resetPrimaryPropertyActions;
- (void)setContext:(void*)arg1;
- (void)setMultiValueIdentifier:(int)arg1;
- (void)setPerson:(id)arg1;
- (void)setStringValue:(id)arg1;
- (void)setValue:(id)arg1;
- (id)stringValue;
- (id)titleAtIndex:(int)arg1 forProperty:(int)arg2;
- (id)titleForAction:(int)arg1;
- (id)urlForAction:(int)arg1 forProperty:(int)arg2;
- (id)value;

@end
