/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@class HKMedicalIDEditorDateCell;

@interface HKEmergencyCardBirthdateTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorCellEditDelegate> {
    HKMedicalIDEditorDateCell *_cell;
}

- (void).cxx_destruct;
- (id)_cell;
- (BOOL)canEditRowAtIndex:(int)arg1;
- (int)commitEditingStyle:(int)arg1 forRowAtIndex:(int)arg2;
- (void)didCommitEditingStyle:(int)arg1 forRowAtIndex:(int)arg2;
- (int)editingStyleForRowAtIndex:(int)arg1;
- (id)initInEditMode:(BOOL)arg1;
- (void)medicalIDEditorCellDidChangeValue:(id)arg1;
- (BOOL)shouldHighlightRowAtIndex:(int)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndex:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndex:(int)arg2;
- (id)title;

@end
