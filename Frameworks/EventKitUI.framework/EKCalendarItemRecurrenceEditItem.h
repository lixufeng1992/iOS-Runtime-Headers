/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKCalendarItemRecurrenceEndCell, EKRecurrenceTypeEditItemViewController, NSDate, NSString, PreferencesValueCell;

@interface EKCalendarItemRecurrenceEditItem : EKCalendarItemEditItem <EKRecurrenceTypeEditItemViewControllerDelegate, EKCellShortener> {
    NSString *_customRepeatDescription;
    unsigned int _disclosedSubitem;
    NSDate *_originalRepeatEnd;
    int _originalRepeatType;
    EKRecurrenceTypeEditItemViewController *_recurrenceTypeVC;
    NSDate *_repeatEnd;
    PreferencesValueCell *_repeatEndDateCell;
    EKCalendarItemRecurrenceEndCell *_repeatEndPickerCell;
    int _repeatType;
    int _shorteningStatus;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_contentSizeCategoryChanged:(id)arg1;
- (void)_neverRepeatButtonTapped:(id)arg1;
- (id)_recurrenceTypeVC;
- (void)_repeatEndDateChanged:(id)arg1;
- (id)_repeatEndPickerCell;
- (void)_updateRepeatEndDateCell;
- (BOOL)_validateRecurrenceType:(id)arg1;
- (BOOL)canBeConfiguredForCalendarConstraints:(id)arg1;
- (id)cellForSubitemAtIndex:(unsigned int)arg1;
- (void)dealloc;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forSubitemAtIndex:(unsigned int)arg2;
- (BOOL)editItemViewControllerCommit:(id)arg1 notify:(BOOL)arg2;
- (BOOL)editItemViewControllerCommit:(id)arg1;
- (BOOL)forceRefreshStartAndEndDatesOnCommit;
- (id)init;
- (id)minRecurrenceEndDate;
- (unsigned int)numberOfSubitems;
- (id)recurrenceDate;
- (id)recurrenceTimeZone;
- (void)refreshFromCalendarItemAndStore;
- (int)repeatTypeForRecurrenceRule:(id)arg1;
- (void)reset;
- (BOOL)saveAndDismissWithForce:(BOOL)arg1;
- (void)shortenCell:(id)arg1;
- (id)stringForDate:(id)arg1;

@end
