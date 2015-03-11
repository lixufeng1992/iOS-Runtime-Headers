/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@class <BLTObjectCacheDelegate>, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>;

@interface BLTObjectCache : NSObject {
    NSMutableDictionary *_cachedObjects;
    <BLTObjectCacheDelegate> *_delegate;
    NSMutableSet *_keys;
    double _maxItemAge;
    int _maxItemCount;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)_addKeyToSet:(id)arg1;
- (void)_addObjectToCache:(id)arg1 withKey:(id)arg2;
- (id)_cachedObjectForKey:(id)arg1;
- (void)_deleteObjectFromCacheWithKey:(id)arg1;
- (BOOL)_doesObjectWithKeyExist:(id)arg1;
- (BOOL)_isObjectWithKeyCached:(id)arg1;
- (void)_pruneCache;
- (void)_updateCachedObjectIfNecessary:(id)arg1 withKey:(id)arg2;
- (id)initWithDelegate:(id)arg1 withMaxItemAge:(double)arg2;
- (id)initWithDelegate:(id)arg1 withMaxItemCount:(int)arg2 andMaxItemAge:(double)arg3;
- (id)initWithDelegate:(id)arg1 withMaxItemCount:(int)arg2;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)storeObject:(id)arg1 withKey:(id)arg2;

@end
