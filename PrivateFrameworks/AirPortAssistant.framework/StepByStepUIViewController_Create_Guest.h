/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@class NSString;

@interface StepByStepUIViewController_Create_Guest : StepByStepUIViewController <TableViewManagerDelegate> {
    int _guestNetSecMode;
    BOOL _guestNetworkEnabled;
    NSString *_wifiName;
    NSString *_wifiPassword;
}

@property int guestNetSecMode;
@property BOOL guestNetworkEnabled;
@property(copy) NSString * wifiName;
@property(copy) NSString * wifiPassword;

- (void)addGuestNetworkIsEnabledSection;
- (void)addGuestNetworkPasswordSection;
- (int)guestNetSecMode;
- (BOOL)guestNetworkEnabled;
- (void)loadView;
- (void)setGuestNetSecMode:(int)arg1;
- (void)setGuestNetworkEnabled:(BOOL)arg1;
- (void)setWifiName:(id)arg1;
- (void)setWifiPassword:(id)arg1;
- (void)setupInitialTableHeaderConfiguration;
- (void)setupTable;
- (BOOL)shouldChangeTextField:(id)arg1 atIndexPath:(id)arg2 forTextIndex:(unsigned int)arg3 toString:(id)arg4;
- (void)switchTouchedInCellAtIndexPath:(id)arg1 forSwitchIndex:(unsigned int)arg2 isOn:(BOOL)arg3;
- (void)textFieldDidChangeAtIndexPath:(id)arg1;
- (void)updateTable;
- (BOOL)validateAndSetValues;
- (void)validateAndUpdateNextButton;
- (void)viewWillAppear:(BOOL)arg1;
- (id)wifiName;
- (id)wifiPassword;

@end
