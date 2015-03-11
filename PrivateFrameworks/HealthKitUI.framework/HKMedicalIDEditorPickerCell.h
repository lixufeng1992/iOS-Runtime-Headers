/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@class NSArray, NSString, UIPickerView;

@interface HKMedicalIDEditorPickerCell : HKMedicalIDEditorCell <UIPickerViewDataSource, UIPickerViewDelegate> {
    int _chosenValueIndex;
    UIPickerView *_picker;
    NSArray *_possibleValues;
}

@property int chosenValueIndex;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(retain) NSArray * possibleValues;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_hidePicker;
- (void)_showPicker;
- (void)beginEditing;
- (int)chosenValueIndex;
- (void)commitEditing;
- (void)dealloc;
- (id)formattedValue;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3;
- (id)possibleValues;
- (void)setChosenValueIndex:(int)arg1;
- (void)setPossibleValues:(id)arg1;

@end
