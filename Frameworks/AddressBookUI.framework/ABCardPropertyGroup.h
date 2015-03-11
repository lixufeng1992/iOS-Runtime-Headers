/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSArray, NSString;

@interface ABCardPropertyGroup : ABCardGroup {
    NSArray *_contacts;
    NSArray *_deletedItems;
    NSArray *_displayItems;
    NSArray *_editingItems;
    BOOL _isAdded;
    NSArray *_originalEditingItems;
    NSString *_property;
    NSArray *_propertyItems;
    BOOL _showActionsWhenEmpty;
}

@property(readonly) BOOL allowsAdding;
@property(copy) NSArray * contacts;
@property(retain) NSArray * deletedItems;
@property(retain) NSArray * editingItems;
@property(getter=isFixedValue,readonly) BOOL fixedValue;
@property BOOL isAdded;
@property(readonly) BOOL modified;
@property(getter=isMultiLine,readonly) BOOL multiLine;
@property(getter=isMultiValue,readonly) BOOL multiValue;
@property(readonly) NSString * property;
@property(readonly) NSArray * propertyItems;
@property BOOL showActionsWhenEmpty;

+ (id)groupForProperty:(id)arg1 contact:(id)arg2 withLinkedContacts:(id)arg3;

- (BOOL)_arrayContainsMaxAllowedItems:(id)arg1;
- (id)_availableLabelsInLabels:(id)arg1 forItem:(id)arg2 withValueSelector:(SEL)arg3 usedLabelsCount:(int*)arg4;
- (id)_itemToBeMergedWith:(id)arg1 fromItems:(id)arg2 forEditing:(BOOL)arg3;
- (id)_loadPropertyItems;
- (id)_mergeItems:(id)arg1 forEditing:(bool)arg2;
- (id)_nextAvailableInstantMessageService;
- (id)_nextAvailableLabel;
- (id)_nextAvailableLabelInLabels:(id)arg1 withValueSelector:(SEL)arg2;
- (id)_nextAvailableSocialService;
- (BOOL)_shoulShowGroupWhenEditing:(BOOL)arg1;
- (void)_updateNameValuesForItems:(id)arg1;
- (BOOL)addEditingItem;
- (BOOL)allowsAdding;
- (BOOL)canAddEditingItem;
- (id)contacts;
- (void)dealloc;
- (id)deletedItems;
- (id)description;
- (id)displayItems;
- (id)editingItems;
- (id)emptyLabeledValue;
- (id)initWithProperty:(id)arg1 contact:(id)arg2 withLinkedContacts:(id)arg3;
- (BOOL)isAdded;
- (BOOL)isFixedValue;
- (BOOL)isMultiLine;
- (BOOL)isMultiValue;
- (BOOL)isRequired;
- (BOOL)labelsAreUnique;
- (BOOL)modified;
- (id)nextAvailableLabel;
- (id)property;
- (id)propertyItems;
- (void)reloadDataPreservingChanges:(BOOL)arg1;
- (void)removeEditingItem:(id)arg1;
- (void)saveChanges;
- (void)saveChangesForItems:(id)arg1;
- (void)setContacts:(id)arg1;
- (void)setDeletedItems:(id)arg1;
- (void)setEditingItems:(id)arg1;
- (void)setIsAdded:(BOOL)arg1;
- (void)setShowActionsWhenEmpty:(BOOL)arg1;
- (BOOL)showActionsWhenEmpty;
- (id)supportedLabelsForItem:(id)arg1;

@end
