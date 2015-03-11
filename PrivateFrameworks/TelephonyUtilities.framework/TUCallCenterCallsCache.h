/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@class NSMapTable, NSMutableSet, NSObject<OS_dispatch_semaphore>;

@interface TUCallCenterCallsCache : NSObject {
    NSMapTable *_callRefToTelephonyCall;
    NSObject<OS_dispatch_semaphore> *_callRefToTelephonyCallSemaphore;
    NSMapTable *_chatGUIDToFaceTimeCall;
    NSObject<OS_dispatch_semaphore> *_chatGUIDToFaceTimeCallSemaphore;
    NSMutableSet *_currentCallSet;
    NSMapTable *_uniqueProxyIdentifierToProxyCall;
    NSObject<OS_dispatch_semaphore> *_uniqueProxyIdentifierToProxyCallSemaphore;
}

@property(retain) NSMapTable * callRefToTelephonyCall;
@property(retain) NSObject<OS_dispatch_semaphore> * callRefToTelephonyCallSemaphore;
@property(retain) NSMapTable * chatGUIDToFaceTimeCall;
@property(retain) NSObject<OS_dispatch_semaphore> * chatGUIDToFaceTimeCallSemaphore;
@property(retain) NSMutableSet * currentCallSet;
@property(retain) NSMapTable * uniqueProxyIdentifierToProxyCall;
@property(retain) NSObject<OS_dispatch_semaphore> * uniqueProxyIdentifierToProxyCallSemaphore;

- (void)_updateCallWithCallState:(id)arg1 loadPersistentState:(BOOL)arg2;
- (id)callForCTCall:(struct __CTCall { }*)arg1 shouldSkipLoadingCallState:(BOOL)arg2;
- (id)callForCTCall:(struct __CTCall { }*)arg1;
- (id)callForChat:(id)arg1 shouldSkipLoadingCallState:(BOOL)arg2;
- (id)callForChat:(id)arg1;
- (id)callRefToTelephonyCall;
- (id)callRefToTelephonyCallSemaphore;
- (id)chatGUIDToFaceTimeCall;
- (id)chatGUIDToFaceTimeCallSemaphore;
- (id)currentCallSet;
- (void)dealloc;
- (id)init;
- (id)proxyCallForProxyCall:(id)arg1;
- (void)setCallRefToTelephonyCall:(id)arg1;
- (void)setCallRefToTelephonyCallSemaphore:(id)arg1;
- (void)setChatGUIDToFaceTimeCall:(id)arg1;
- (void)setChatGUIDToFaceTimeCallSemaphore:(id)arg1;
- (void)setCurrentCallSet:(id)arg1;
- (void)setUniqueProxyIdentifierToProxyCall:(id)arg1;
- (void)setUniqueProxyIdentifierToProxyCallSemaphore:(id)arg1;
- (void)stopTrackingCall:(id)arg1;
- (id)uniqueProxyIdentifierToProxyCall;
- (id)uniqueProxyIdentifierToProxyCallSemaphore;

@end
