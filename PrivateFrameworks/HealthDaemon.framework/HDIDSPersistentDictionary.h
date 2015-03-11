/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@class NSString;

@interface HDIDSPersistentDictionary : NSObject {
    struct sqlite3_stmt { } *_byDate;
    struct sqlite3 { } *_db;
    struct sqlite3_stmt { } *_fetch;
    struct sqlite3_stmt { } *_insert;
    Class _objectClass;
    NSString *_path;
    struct sqlite3_stmt { } *_remove;
    struct sqlite3_stmt { } *_removeAll;
}

- (void).cxx_destruct;
- (id)_dataFromObj:(id)arg1;
- (id)_objectFromData:(id)arg1;
- (void)_openDBForceRecreate:(BOOL)arg1;
- (void)dealloc;
- (void)enumerateObjectsSortedByExpirationDate:(id)arg1;
- (id)initWithPath:(id)arg1 objectClass:(Class)arg2;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 expires:(id)arg3;

@end
