/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <SPRemoteInterfaceDataDelegateProtocol>, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface SPRemoteInterface : NSObject <SPRemoteInterfaceProtocol> {
    NSMutableArray *_activeComplicationsConnections;
    <SPRemoteInterfaceDataDelegateProtocol> *_dataDelegate;
    NSMutableDictionary *_interfaceControllers;
    NSObject<OS_dispatch_queue> *_interfaceControllersAccessQueue;
    NSMutableDictionary *_interfaceControllersOwners;
    NSString *_navigatingViewControllerID;
    NSMutableArray *_openParentRequests;
    NSString *_rootViewControllerID;
    id _runLoopObserver;
    id _textInputCompletion;
}

@property(retain) NSMutableArray * activeComplicationsConnections;
@property(retain) <SPRemoteInterfaceDataDelegateProtocol> * dataDelegate;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(retain) NSMutableDictionary * interfaceControllers;
@property(retain) NSObject<OS_dispatch_queue> * interfaceControllersAccessQueue;
@property(retain) NSMutableDictionary * interfaceControllersOwners;
@property(retain) NSString * navigatingViewControllerID;
@property(retain) NSMutableArray * openParentRequests;
@property(retain) NSString * rootViewControllerID;
@property(retain) id runLoopObserver;
@property(readonly) Class superclass;
@property(copy) id textInputCompletion;

+ (id)SerializablePropertyValue:(id)arg1;
+ (void)_logDuplicate:(id)arg1 controller:(id)arg2 key:(id)arg3 property:(id)arg4 value:(id)arg5;
+ (id)_remoteIdentifier;
+ (void)_setupStorageForController:(id)arg1;
+ (void)_updateAccessibility;
+ (id)cacheIdentifier;
+ (void)clearStorageForController:(id)arg1;
+ (void)controller:(id)arg1 presentInterfaceController:(id)arg2 context:(id)arg3;
+ (void)controller:(id)arg1 presentInterfaceControllers:(id)arg2 contexts:(id)arg3;
+ (void)controller:(id)arg1 presentTextInputControllerWithSuggestions:(id)arg2 allowedInputMode:(id)arg3 completion:(id)arg4;
+ (void)controller:(id)arg1 pushInterfaceController:(id)arg2 context:(id)arg3;
+ (id)controller:(id)arg1 setupProperties:(id)arg2 viewControllerID:(id)arg3 tableIndex:(int)arg4 rowIndex:(int)arg5 classForType:(int (*)())arg6;
+ (void)controllerBecomeCurrentPage:(id)arg1;
+ (void)controllerDismiss:(id)arg1;
+ (void)controllerDismissTextInputController:(id)arg1;
+ (void)controllerPop:(id)arg1;
+ (void)controllerPopToRoot:(id)arg1;
+ (void)handleEvent:(id)arg1;
+ (void)insertPageControllerAtIndexes:(id)arg1 withNames:(id)arg2 contexts:(id)arg3;
+ (void)movePageControllerAtIndex:(int)arg1 toIndex:(int)arg2;
+ (void)notificationController:(id)arg1 showNotificationInterfaceType:(int)arg2;
+ (BOOL)openParentApplication:(id)arg1 reply:(id)arg2;
+ (void)reloadRootControllersWithNames:(id)arg1 contexts:(id)arg2;
+ (void)removePageControllerAtIndexes:(id)arg1;
+ (void)sendCacheRequest:(id)arg1;
+ (void)sendCacheRequestMessage:(id)arg1;
+ (void)setController:(id)arg1 key:(id)arg2 property:(id)arg3 value:(id)arg4;
+ (void)setControllerActive:(id)arg1;
+ (void)setControllerInactive:(id)arg1;
+ (id)startRemoteInterface;
+ (void)updateUserActivity:(id)arg1 userInfo:(id)arg2 webpageURL:(id)arg3 interfaceController:(id)arg4;

- (void).cxx_destruct;
- (void)_callDidDeactivate;
- (void)_deregisterInterfaceControllerID:(id)arg1;
- (void)_dumpInterfaceDictionary;
- (void)_fillDataWithRandom:(id)arg1 length:(int)arg2;
- (id)_interfaceControllerClientIDForControllerID:(id)arg1;
- (id)_interfaceControllerID:(id)arg1;
- (id)_interfaceControllerIDsForClientID:(id)arg1;
- (id)_interfaceControllerWithID:(id)arg1;
- (void)_registerInterfaceController:(id)arg1 interfaceControllerID:(id)arg2 interfaceControllerClientID:(id)arg3 applicationRootController:(BOOL)arg4;
- (void)_sendOpenParentApplicationRequest;
- (id)_setupSignal:(int)arg1 handler:(id)arg2;
- (void)_setupSignalHandlers;
- (id)activeComplicationsConnections;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidFinishConnecting:(id)arg1;
- (void)applicationDidTerminate:(id)arg1;
- (void)applicationIsStillActive;
- (void)applicationWillResignActive:(id)arg1;
- (void)controller:(id)arg1 presentInterfaceController:(id)arg2 initializationContextID:(id)arg3;
- (void)controller:(id)arg1 presentInterfaceControllers:(id)arg2 initializationContextIDs:(id)arg3;
- (void)controller:(id)arg1 pushInterfaceController:(id)arg2 initializationContextID:(id)arg3;
- (void)controllerBecomeCurrentPage:(id)arg1;
- (void)controllerDismiss:(id)arg1;
- (void)controllerDismissTextInputController:(id)arg1;
- (id)controllerMethods:(id)arg1;
- (void)controllerPop:(id)arg1;
- (void)controllerPopToRoot:(id)arg1;
- (void)controllerPresentTextInputController:(id)arg1 allowedInputMode:(id)arg2 suggestions:(id)arg3;
- (id)dataDelegate;
- (void)dataInterfaceDidBecomeActive:(id)arg1;
- (void)dataInterfaceWillResignActive:(id)arg1;
- (void)dealloc;
- (void)fetchNotificationForNotificationID:(id)arg1 completion:(id)arg2;
- (void)getComplicationData:(id)arg1;
- (id)init;
- (void)insertPageControllerAtIndexes:(id)arg1 withNames:(id)arg2 initializationContextIDs:(id)arg3;
- (id)interfaceControllers;
- (id)interfaceControllersAccessQueue;
- (id)interfaceControllersOwners;
- (id)interfaceCreationContextForID:(id)arg1;
- (void)movePageControllerAtIndex:(int)arg1 toIndex:(int)arg2;
- (id)navigatingViewControllerID;
- (void)notificationController:(id)arg1 showNotificationInterfaceType:(int)arg2;
- (BOOL)openParentApplication:(id)arg1 reply:(id)arg2;
- (id)openParentRequests;
- (void)receiveData:(id)arg1 fromIdentifier:(id)arg2;
- (void)receiveProtoData:(id)arg1 fromIdentifier:(id)arg2;
- (void)reloadRootControllersWithNames:(id)arg1 initializationContextIDs:(id)arg2;
- (void)removeInterfaceControllersForClient:(id)arg1;
- (void)removePageControllerAtIndexes:(id)arg1;
- (id)rootViewControllerID;
- (id)runLoopObserver;
- (void)sendCacheRequestMessage:(id)arg1;
- (void)sendComplicationObject:(id)arg1;
- (void)sendPlist:(id)arg1 clientIdentifiers:(id)arg2;
- (void)sendTimingInfo:(id)arg1 clientIdentifiers:(id)arg2 index:(int)arg3;
- (void)sendWillActivateReplyForController:(id)arg1;
- (void)setActiveComplicationsConnections:(id)arg1;
- (void)setDataDelegate:(id)arg1;
- (void)setInterfaceControllers:(id)arg1;
- (void)setInterfaceControllersAccessQueue:(id)arg1;
- (void)setInterfaceControllersOwners:(id)arg1;
- (void)setNavigatingViewControllerID:(id)arg1;
- (void)setOpenParentRequests:(id)arg1;
- (void)setRootViewControllerID:(id)arg1;
- (void)setRunLoopObserver:(id)arg1;
- (void)setTextInputCompletion:(id)arg1;
- (id)storeInterfaceCreationContext:(id)arg1;
- (id)textInputCompletion;
- (void)updateUserActivity:(id)arg1 userInfo:(id)arg2 webpageURL:(id)arg3 controller:(id)arg4;

@end
