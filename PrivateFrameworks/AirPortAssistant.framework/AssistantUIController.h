/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@class AUSetupController, AutoGuessController, NSArray, NSDictionary, NSMutableDictionary, NSString, StepByStepController;

@interface AssistantUIController : NSObject <AutoGuessUIDelegate, SetupUIDelegate, StepByStepUIDelegate, AssistantUIDelegateResult, SetupUIConfigDelegate> {
    long _assistantResult;
    AutoGuessController *_autoGuessController;
    int _connectionStatusSelectorAwaitingResolution;
    id _delegate;
    NSDictionary *_guessCompleteDict;
    NSDictionary *_lastAssociatedInfo;
    NSDictionary *_lastAutoguessInstrumentation;
    NSDictionary *_lastSetupInstrumentation;
    NSDictionary *_lastStepByStepInstrumentation;
    NSArray *_paramScanResults;
    AUSetupController *_setupController;
    NSMutableDictionary *_setupOptions;
    int _state;
    StepByStepController *_stepByStepController;
    NSDictionary *_targetBrowseRecord;
    NSString *_targetMACAddress;
    NSDictionary *_targetScanRecord;
}

@property(readonly) long assistantResult;
@property(retain) AutoGuessController * autoGuessController;
@property(readonly) int connectionStatusSelectorAwaitingResolution;
@property id delegate;
@property(retain) NSDictionary * guessCompleteDict;
@property(retain) NSDictionary * lastAssociatedInfo;
@property(retain) NSDictionary * lastAutoguessInstrumentation;
@property(retain) NSDictionary * lastSetupInstrumentation;
@property(retain) NSDictionary * lastStepByStepInstrumentation;
@property(retain) NSArray * paramScanResults;
@property(retain) AUSetupController * setupController;
@property(retain) NSMutableDictionary * setupOptions;
@property(readonly) int state;
@property(retain) StepByStepController * stepByStepController;
@property(retain) NSDictionary * targetBrowseRecord;
@property(retain) NSString * targetMACAddress;
@property(retain) NSDictionary * targetScanRecord;

- (long)assistantResult;
- (id)autoGuessController;
- (void)autoguessProgressComplete:(id)arg1;
- (void)autoguessProgressUpdated:(int)arg1 paramString:(id)arg2;
- (void)autoguessUpdateTargetInfo:(id)arg1;
- (long)cancelCurrentAssistantState:(BOOL)arg1;
- (int)connectionStatusSelectorAwaitingResolution;
- (void)dealloc;
- (id)delegate;
- (void)deliverSetupUIConfigResult:(long)arg1 withOptions:(id)arg2;
- (long)doneWithAssistant:(BOOL)arg1;
- (id)guessCompleteDict;
- (void)handlePresentAutoGuessUIFromAutoGuessCompleteResult:(BOOL)arg1;
- (id)init;
- (id)lastAssociatedInfo;
- (id)lastAutoguessInstrumentation;
- (id)lastSetupInstrumentation;
- (id)lastStepByStepInstrumentation;
- (id)modifyTopoUIInLayer:(id)arg1 withLayout:(id)arg2 andOwningView:(id)arg3 targetProductID:(id)arg4 targetDeviceKind:(id)arg5 targetName:(id)arg6 targetWiFiName:(id)arg7 sourceProductID:(id)arg8 sourceDeviceKind:(id)arg9 sourceName:(id)arg10 sourceWiFiName:(id)arg11 connectionType:(id)arg12;
- (id)paramScanResults;
- (void)presentUIForConnectionVerification:(int)arg1 status:(long)arg2 paramDict:(id)arg3;
- (void)presentUIForConnectionVerificationResult:(long)arg1 withOptions:(id)arg2;
- (void)presentUIForStepByStepNextStepResult:(long)arg1 withOptions:(id)arg2;
- (void)presentUIForUIConfigPrompt:(int)arg1 paramDict:(id)arg2;
- (void)restoreNetworkDone:(id)arg1;
- (BOOL)restoreNetworkIfNeeded:(BOOL)arg1 disassociateIfNeeded:(BOOL)arg2 forceQuit:(BOOL)arg3;
- (void)setAutoGuessController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGuessCompleteDict:(id)arg1;
- (void)setLastAssociatedInfo:(id)arg1;
- (void)setLastAutoguessInstrumentation:(id)arg1;
- (void)setLastSetupInstrumentation:(id)arg1;
- (void)setLastStepByStepInstrumentation:(id)arg1;
- (void)setParamScanResults:(id)arg1;
- (void)setSetupController:(id)arg1;
- (void)setSetupOptions:(id)arg1;
- (void)setStepByStepController:(id)arg1;
- (void)setTargetBrowseRecord:(id)arg1;
- (void)setTargetMACAddress:(id)arg1;
- (void)setTargetScanRecord:(id)arg1;
- (void)setupCompleteWithResult:(long)arg1 baseStationInfo:(id)arg2 forController:(id)arg3;
- (id)setupController;
- (id)setupOptions;
- (void)setupProgressUpdated:(int)arg1 status:(long)arg2 paramDict:(id)arg3 forController:(id)arg4;
- (id)setupPromptStringForBaseInfo:(id)arg1 andResult:(long)arg2;
- (void)setupUIConfigConnectionStatusUpdated:(int)arg1 status:(long)arg2 paramDict:(id)arg3 forController:(id)arg4;
- (void)setupUIConfigPrompt:(int)arg1 paramDict:(id)arg2 forController:(id)arg3;
- (void)showUIConfigPromptResult:(long)arg1 withOptions:(id)arg2;
- (long)startAutoGuess;
- (long)startRestoreFromAutoGuessRecommendation;
- (long)startRestoreNetwork:(id)arg1;
- (long)startSetupFromAutoGuessRecommendation:(id)arg1;
- (long)startSetupFromStepByStepResults:(id)arg1;
- (long)startStepByStepFromAutoGuessRecommendation;
- (int)state;
- (void)stepByStepCompleteWithResult:(long)arg1 paramDict:(id)arg2;
- (id)stepByStepController;
- (void)stepByStepNextStep:(int)arg1 paramDict:(id)arg2;
- (void)stepByStepProgressUpdated:(int)arg1 status:(long)arg2 paramString:(id)arg3;
- (id)targetBrowseRecord;
- (id)targetMACAddress;
- (id)targetScanRecord;

@end
