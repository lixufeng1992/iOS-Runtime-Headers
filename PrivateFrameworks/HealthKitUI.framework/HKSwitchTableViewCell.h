/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@class <HKSwitchTableViewCellDelegate>, UIImageView, UILabel, UISwitch;

@interface HKSwitchTableViewCell : UITableViewCell {
    BOOL _centersIcon;
    <HKSwitchTableViewCellDelegate> *_delegate;
    UILabel *_displayLabel;
    BOOL _enabled;
    UIImageView *_iconImageView;
    UISwitch *_switch;
}

@property BOOL centersIcon;
@property <HKSwitchTableViewCellDelegate> * delegate;
@property(getter=isEnabled) BOOL enabled;
@property(readonly) struct CGSize { float x1; float x2; } iconSize;
@property(getter=isOn) BOOL on;

- (void).cxx_destruct;
- (void)_setupUI;
- (BOOL)centersIcon;
- (id)delegate;
- (struct CGSize { float x1; float x2; })iconSize;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (BOOL)isEnabled;
- (BOOL)isOn;
- (void)layoutSubviews;
- (void)setCentersIcon:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayText:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setIconImage:(id)arg1;
- (void)setOn:(BOOL)arg1;
- (void)switchValueChanged:(id)arg1;

@end
