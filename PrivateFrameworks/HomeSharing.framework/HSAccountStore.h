/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@class NSObject<OS_dispatch_queue>, NSString, SSURLConnectionRequest;

@interface HSAccountStore : NSObject {
    int _defaultsDidChangeToken;
    SSURLConnectionRequest *_groupIDRequest;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(copy) NSString * appleID;
@property(copy) NSString * groupID;
@property(retain) SSURLConnectionRequest * groupIDRequest;
@property(copy) NSString * password;
@property(retain) NSObject<OS_dispatch_queue> * queue;

+ (id)defaultStore;

- (void).cxx_destruct;
- (void)_onBackgroundQueue_determineGroupIDWithCompletionHandler:(id)arg1;
- (id)appleID;
- (BOOL)canDetermineGroupID;
- (void)clearAllCredentials;
- (void)clearCaches;
- (void)clearGroupID;
- (void)dealloc;
- (void)determineGroupIDWithCompletionHandler:(id)arg1;
- (id)groupID;
- (id)groupIDRequest;
- (id)init;
- (id)password;
- (id)queue;
- (void)setAppleID:(id)arg1;
- (void)setGroupID:(id)arg1;
- (void)setGroupIDRequest:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setQueue:(id)arg1;

@end
