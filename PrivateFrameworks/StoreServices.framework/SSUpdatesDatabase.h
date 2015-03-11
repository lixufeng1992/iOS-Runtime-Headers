/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSSQLiteDatabase;

@interface SSUpdatesDatabase : NSObject {
    SSSQLiteDatabase *_database;
}

@property(readonly) BOOL requiresMigration;

- (void)_dispatchBlockAsync:(id)arg1;
- (id)_initReadOnly:(BOOL)arg1;
- (void)dealloc;
- (id)init;
- (id)initReadOnly;
- (void)modifyAsyncUsingTransactionBlock:(id)arg1;
- (void)modifyUsingTransactionBlock:(id)arg1;
- (void)readAsyncUsingSessionBlock:(id)arg1;
- (void)readUsingSessionBlock:(id)arg1;
- (BOOL)requiresMigration;

@end
