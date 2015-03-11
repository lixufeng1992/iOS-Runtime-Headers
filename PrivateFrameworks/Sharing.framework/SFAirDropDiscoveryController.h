/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@class <SFAirDropDiscoveryActionSheetDelegate>, <SFAirDropDiscoveryControllerDelegate>, NSString, UIActionSheet;

@interface SFAirDropDiscoveryController : NSObject <UIActionSheetDelegate> {
    UIActionSheet *_actionSheet;
    id _actionSheetDelegate;
    struct __SFOperation { } *_controller;
    id _delegate;
    int _discoverableMode;
    BOOL _isLegacyDevice;
    BOOL _isLegacyModeEnabled;
    BOOL _isLegacyModeSettable;
    BOOL _isVisible;
}

@property <SFAirDropDiscoveryActionSheetDelegate> * actionSheetDelegate;
@property(copy,readonly) NSString * debugDescription;
@property <SFAirDropDiscoveryControllerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property int discoverableMode;
@property(readonly) unsigned int hash;
@property(getter=isLegacyDevice,readonly) BOOL legacyDevice;
@property(getter=isLegacyModeEnabled) BOOL legacyModeEnabled;
@property(getter=isLegacyModeSettable,readonly) BOOL legacyModeSettable;
@property(readonly) Class superclass;
@property(getter=isVisible,readonly) BOOL visible;

- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)actionSheet:(id)arg1 willDismissWithButtonIndex:(int)arg2;
- (id)actionSheetDelegate;
- (void)dealloc;
- (id)delegate;
- (int)discoverableMode;
- (id)discoverableModeActionSheet;
- (id)discoverableModeToString:(int)arg1;
- (void)handleOperationCallback:(struct __SFOperation { }*)arg1 event:(long)arg2 withResults:(id)arg3;
- (id)init;
- (BOOL)isLegacyDevice;
- (BOOL)isLegacyModeEnabled;
- (BOOL)isLegacyModeSettable;
- (BOOL)isVisible;
- (int)operationDiscoverableModeToInteger:(id)arg1;
- (void)setActionSheetDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDiscoverableMode:(int)arg1;
- (void)setLegacyModeEnabled:(BOOL)arg1;

@end
