/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSObject<OS_dispatch_queue>, NSString;

@interface GEOCacheManagerLocalProxy : NSObject <GEOCacheManaging> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (int)_invalidationDataHasExpired:(id)arg1;
- (BOOL)_invalidationDataHasExpiredByVersion:(unsigned int)arg1 domains:(id)arg2;
- (int)_invalidationStateForTTL:(double)arg1 timestamp:(double)arg2 version:(unsigned int)arg3 versionDomains:(id)arg4;
- (BOOL)_isKey:(id)arg1 subsetOf:(id)arg2;
- (void)checkHasExpiredWithInvalidationDatas:(id)arg1 handler:(id)arg2;
- (void)dealloc;
- (id)init;
- (int)invalidationStateForPlace:(id)arg1;
- (void)versionsForDomains:(id)arg1 handler:(id)arg2;

@end
