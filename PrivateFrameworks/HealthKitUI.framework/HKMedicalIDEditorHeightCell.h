/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@class NSLengthFormatter, NSNumber, NSString, UIPickerView;

@interface HKMedicalIDEditorHeightCell : HKMedicalIDEditorCell <UIPickerViewDataSource, UIPickerViewDelegate> {
    NSNumber *_centimeterValue;
    NSLengthFormatter *_lengthFormatter;
    UIPickerView *_picker;
    BOOL _usesImperialUnits;
}

@property(retain) NSNumber * centimeterValue;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (double)defaultCentimeterValue;

- (void).cxx_destruct;
- (void)_commonInit;
- (id)_formattedValueForCentimeters:(double)arg1;
- (id)_formattedValueForFeet:(double)arg1;
- (id)_formattedValueForInches:(double)arg1;
- (void)_hidePicker;
- (void)_localeDidChange:(id)arg1;
- (void)_showPicker;
- (void)beginEditing;
- (id)centimeterValue;
- (void)commitEditing;
- (void)dealloc;
- (id)formattedValue;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3;
- (void)setCentimeterValue:(id)arg1;

@end
