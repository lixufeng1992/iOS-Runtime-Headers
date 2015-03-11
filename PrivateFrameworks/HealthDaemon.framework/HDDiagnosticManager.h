/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@class NSHashTable;

@interface HDDiagnosticManager : NSObject {
    int _lock;
    NSHashTable *_objects;
}

+ (id)sharedDiagnosticManager;

- (void).cxx_destruct;
- (id)_diagnosticsForKey:(id)arg1 shouldLog:(BOOL)arg2;
- (id)_diagnosticsOverview;
- (void)addObject:(id)arg1;
- (id)diagnosticsForKey:(id)arg1;
- (id)init;
- (void)logAllDiagnostics;
- (void)removeObject:(id)arg1;

@end
