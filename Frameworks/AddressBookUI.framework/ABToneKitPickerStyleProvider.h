/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class CNContactStyle, NSString, UIColor, UIFont;

@interface ABToneKitPickerStyleProvider : NSObject <TKTonePickerStyleProvider, TKVibrationPickerStyleProvider> {
    CNContactStyle *_contactStyle;
}

@property(retain) CNContactStyle * contactStyle;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(readonly) UIColor * tonePickerCellBackgroundColor;
@property(readonly) UIColor * tonePickerCellHighlightedTextColor;
@property(readonly) UIColor * tonePickerCellTextColor;
@property(readonly) UIFont * tonePickerCellTextFont;
@property(readonly) int tonePickerCustomTableSeparatorBackdropOverlayBlendMode;
@property(readonly) UIColor * tonePickerCustomTableSeparatorColor;
@property(readonly) UIColor * tonePickerHeaderTextColor;
@property(readonly) UIFont * tonePickerHeaderTextFont;
@property(readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } tonePickerHeaderTextPaddingInsets;
@property(readonly) UIColor * tonePickerHeaderTextShadowColor;
@property(readonly) struct UIOffset { float x1; float x2; } tonePickerHeaderTextShadowOffset;
@property(readonly) BOOL tonePickerHeaderTextShouldBeUppercase;
@property(readonly) int tonePickerTableViewSeparatorStyle;
@property(readonly) BOOL tonePickerUsesOpaqueBackground;
@property(readonly) UIColor * vibrationPickerCellBackgroundColor;
@property(readonly) UIColor * vibrationPickerCellHighlightedTextColor;
@property(readonly) UIColor * vibrationPickerCellTextColor;
@property(readonly) UIFont * vibrationPickerCellTextFont;
@property(readonly) int vibrationPickerCustomTableSeparatorBackdropOverlayBlendMode;
@property(readonly) UIColor * vibrationPickerCustomTableSeparatorColor;
@property(readonly) UIColor * vibrationPickerHeaderTextColor;
@property(readonly) UIFont * vibrationPickerHeaderTextFont;
@property(readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } vibrationPickerHeaderTextPaddingInsets;
@property(readonly) UIColor * vibrationPickerHeaderTextShadowColor;
@property(readonly) struct UIOffset { float x1; float x2; } vibrationPickerHeaderTextShadowOffset;
@property(readonly) BOOL vibrationPickerHeaderTextShouldBeUppercase;
@property(readonly) int vibrationPickerTableViewSeparatorStyle;
@property(readonly) BOOL vibrationPickerUsesOpaqueBackground;
@property(readonly) BOOL wantsCustomTonePickerHeaderView;
@property(readonly) BOOL wantsCustomVibrationPickerHeaderView;

- (id)contactStyle;
- (id)newAccessoryDisclosureIndicatorViewForTonePickerCell;
- (id)newAccessoryDisclosureIndicatorViewForVibrationPickerCell;
- (id)newBackgroundViewForSelectedTonePickerCell:(BOOL)arg1;
- (id)newBackgroundViewForSelectedVibrationPickerCell:(BOOL)arg1;
- (void)setContactStyle:(id)arg1;
- (id)tonePickerCellBackgroundColor;
- (id)tonePickerCellHighlightedTextColor;
- (id)tonePickerCellTextColor;
- (id)tonePickerCellTextFont;
- (int)tonePickerCustomTableSeparatorBackdropOverlayBlendMode;
- (id)tonePickerCustomTableSeparatorColor;
- (id)tonePickerHeaderTextColor;
- (id)tonePickerHeaderTextFont;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })tonePickerHeaderTextPaddingInsets;
- (id)tonePickerHeaderTextShadowColor;
- (struct UIOffset { float x1; float x2; })tonePickerHeaderTextShadowOffset;
- (BOOL)tonePickerHeaderTextShouldBeUppercase;
- (int)tonePickerTableViewSeparatorStyle;
- (BOOL)tonePickerUsesOpaqueBackground;
- (id)vibrationPickerCellBackgroundColor;
- (id)vibrationPickerCellHighlightedTextColor;
- (id)vibrationPickerCellTextColor;
- (id)vibrationPickerCellTextFont;
- (int)vibrationPickerCustomTableSeparatorBackdropOverlayBlendMode;
- (id)vibrationPickerCustomTableSeparatorColor;
- (id)vibrationPickerHeaderTextColor;
- (id)vibrationPickerHeaderTextFont;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })vibrationPickerHeaderTextPaddingInsets;
- (id)vibrationPickerHeaderTextShadowColor;
- (struct UIOffset { float x1; float x2; })vibrationPickerHeaderTextShadowOffset;
- (BOOL)vibrationPickerHeaderTextShouldBeUppercase;
- (int)vibrationPickerTableViewSeparatorStyle;
- (BOOL)vibrationPickerUsesOpaqueBackground;
- (BOOL)wantsCustomTonePickerHeaderView;
- (BOOL)wantsCustomVibrationPickerHeaderView;

@end
