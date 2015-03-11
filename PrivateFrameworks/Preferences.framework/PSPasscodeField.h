/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class <PSPasscodeFieldDelegate>, NSMutableArray, NSMutableString, NSString;

@interface PSPasscodeField : UIView <UIKeyInput> {
    NSMutableArray *_dashViews;
    <PSPasscodeFieldDelegate> *_delegate;
    NSMutableArray *_digitViews;
    NSMutableArray *_dotViews;
    unsigned int _numberOfEntryFields;
    BOOL _securePasscodeEntry;
    NSMutableString *_stringValue;
}

@property int autocapitalizationType;
@property int autocorrectionType;
@property(copy,readonly) NSString * debugDescription;
@property <PSPasscodeFieldDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property BOOL enablesReturnKeyAutomatically;
@property(readonly) unsigned int hash;
@property int keyboardAppearance;
@property int keyboardType;
@property(readonly) unsigned int numberOfEntryFields;
@property int returnKeyType;
@property BOOL securePasscodeEntry;
@property(getter=isSecureTextEntry) BOOL secureTextEntry;
@property int spellCheckingType;
@property(readonly) Class superclass;

- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (void)dealloc;
- (id)delegate;
- (void)deleteBackward;
- (BOOL)hasText;
- (id)initWithNumberOfEntryFields:(unsigned int)arg1;
- (void)insertText:(id)arg1;
- (BOOL)isSecureTextEntry;
- (int)keyboardAppearance;
- (int)keyboardType;
- (void)layoutSubviews;
- (unsigned int)numberOfEntryFields;
- (BOOL)securePasscodeEntry;
- (void)setDelegate:(id)arg1;
- (void)setSecurePasscodeEntry:(BOOL)arg1;
- (void)setSecureTextEntry:(BOOL)arg1;
- (void)setStringValue:(id)arg1;
- (id)stringValue;

@end
