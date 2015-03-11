/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@class HMHome, HMMessageDispatcher, NSArray, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSUUID;

@interface HMZone : NSObject <HMMessageReceiver, NSSecureCoding> {
    NSMutableArray *_currentRooms;
    HMHome *_home;
    HMMessageDispatcher *_msgDispatcher;
    NSString *_name;
    NSMutableDictionary *_pendingRequests;
    NSUUID *_uuid;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property(retain) NSMutableArray * currentRooms;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property HMHome * home;
@property(readonly) NSObject<OS_dispatch_queue> * messageReceiveQueue;
@property(readonly) NSUUID * messageTargetUUID;
@property(retain) HMMessageDispatcher * msgDispatcher;
@property(copy,readonly) NSString * name;
@property(retain) NSMutableDictionary * pendingRequests;
@property(copy,readonly) NSArray * rooms;
@property(readonly) Class superclass;
@property(retain) NSUUID * uuid;
@property(retain) NSObject<OS_dispatch_queue> * workQueue;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_registerNotificationHandlers;
- (void)addRoom:(id)arg1 completionHandler:(id)arg2;
- (void)configure:(id)arg1 uuid:(id)arg2 messageDispatcher:(id)arg3;
- (id)currentRooms;
- (void)encodeWithCoder:(id)arg1;
- (void)handleRoomAddedNotification:(id)arg1;
- (void)handleRoomRemovedNotification:(id)arg1;
- (void)handleZoneRenamedNotification:(id)arg1;
- (id)home;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (void)invalidate;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (id)name;
- (id)pendingRequests;
- (void)removeRoom:(id)arg1 completionHandler:(id)arg2;
- (void)removeRoom:(id)arg1;
- (id)roomWithUUID:(id)arg1;
- (id)rooms;
- (void)setCurrentRooms:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setPendingRequests:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)updateName:(id)arg1 completionHandler:(id)arg2;
- (id)uuid;
- (id)workQueue;

@end
