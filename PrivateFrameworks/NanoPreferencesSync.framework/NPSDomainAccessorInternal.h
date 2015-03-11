/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPreferencesSync.framework/NanoPreferencesSync
 */

@class NPSDomainAccessorFilePresenter, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, NSURL, NSUUID;

@interface NPSDomainAccessorInternal : NSObject <NPSDomainAccessorFilePresenterDelegate> {
    NSMutableSet *_dirtyKeysForWriting;
    NSString *_domain;
    NSURL *_domainURL;
    NSObject<OS_dispatch_queue> *_externalQueue;
    NPSDomainAccessorFilePresenter *_filePresenter;
    BOOL _hasReadFromDisk;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableDictionary *_map;
    BOOL _nanoSettingsDirectoryExists;
    NSUUID *_pairingID;
    NSString *_pairingStorePath;
    unsigned int _referenceCounter;
}

@property(retain) NSMutableSet * dirtyKeysForWriting;
@property(retain) NSString * domain;
@property(retain) NSURL * domainURL;
@property(retain) NSObject<OS_dispatch_queue> * externalQueue;
@property(retain) NPSDomainAccessorFilePresenter * filePresenter;
@property BOOL hasReadFromDisk;
@property(retain) NSObject<OS_dispatch_queue> * internalQueue;
@property(retain) NSMutableDictionary * map;
@property BOOL nanoSettingsDirectoryExists;
@property(retain) NSUUID * pairingID;
@property(retain) NSString * pairingStorePath;
@property unsigned int referenceCounter;

+ (void)applicationDidEnterBackground;
+ (void)applicationDidResume;
+ (id)cfTypeNameForCFPropertyListRef:(void*)arg1;
+ (id)copyDomainListForPairingDataStore:(id)arg1;
+ (void)decrementInternalAccessorReferenceCount:(id)arg1;
+ (BOOL)domainIsValid:(id)arg1;
+ (void)extensionDidBecomeActive;
+ (void)extensionWillResignActive;
+ (void)initialize;
+ (id)internalAccessorForPairingID:(id)arg1 pairingDataStore:(id)arg2 domain:(id)arg3;
+ (void)invalidateAndReleaseUnreferencedAccessors;
+ (void)mergeDirtyKeys:(id)arg1 fromDictionary:(id)arg2 toDictionary:(id)arg3;
+ (id)readDomainURL:(id)arg1 withError:(id*)arg2;
+ (id)urlForDomain:(id)arg1 pairingDataStore:(id)arg2;
+ (BOOL)valueIsValid:(id)arg1;
+ (id)writeDomain:(id)arg1 toURL:(id)arg2;

- (void).cxx_destruct;
- (id)URLForKey:(id)arg1;
- (id)_copyKeyList;
- (void)_invalidatePresenter;
- (id)_objectForKey:(id)arg1 error:(id*)arg2;
- (void)_setObject:(id)arg1 forKey:(id)arg2;
- (id)_synchronizeReadOnly:(BOOL)arg1;
- (id)arrayForKey:(id)arg1;
- (BOOL)boolForKey:(id)arg1 keyExistsAndHasValidFormat:(BOOL*)arg2;
- (BOOL)boolForKey:(id)arg1;
- (id)canSynchronizeForReadingURL:(id)arg1;
- (id)canSynchronizeForWritingURL:(id)arg1 readFirst:(BOOL)arg2;
- (id)copyKeyList;
- (id)createNanoSettingsDirectory;
- (id)dataForKey:(id)arg1;
- (void)dealloc;
- (id)dictionaryForKey:(id)arg1;
- (id)dirtyKeysForWriting;
- (id)domain;
- (id)domainURL;
- (double)doubleForKey:(id)arg1 keyExistsAndHasValidFormat:(BOOL*)arg2;
- (double)doubleForKey:(id)arg1;
- (id)externalQueue;
- (id)filePresenter;
- (void)filePresenterBecameNonCurrent:(id)arg1;
- (float)floatForKey:(id)arg1 keyExistsAndHasValidFormat:(BOOL*)arg2;
- (float)floatForKey:(id)arg1;
- (BOOL)hasReadFromDisk;
- (id)initWithPairingID:(id)arg1 pairingDataStore:(id)arg2 domain:(id)arg3;
- (int)integerForKey:(id)arg1 keyExistsAndHasValidFormat:(BOOL*)arg2;
- (int)integerForKey:(id)arg1;
- (id)internalQueue;
- (void)invalidatePresenter;
- (long long)longForKey:(id)arg1 keyExistsAndHasValidFormat:(BOOL*)arg2;
- (long long)longForKey:(id)arg1;
- (id)map;
- (BOOL)nanoSettingsDirectoryExists;
- (void)objectForKey:(id)arg1 completionHandler:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)pairingID;
- (id)pairingStorePath;
- (unsigned int)referenceCounter;
- (void)removeObjectForKey:(id)arg1;
- (void)setBool:(BOOL)arg1 forKey:(id)arg2;
- (void)setDirtyKeysForWriting:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setDomainURL:(id)arg1;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setExternalQueue:(id)arg1;
- (void)setFilePresenter:(id)arg1;
- (void)setFloat:(float)arg1 forKey:(id)arg2;
- (void)setHasReadFromDisk:(BOOL)arg1;
- (void)setInteger:(int)arg1 forKey:(id)arg2;
- (void)setInternalQueue:(id)arg1;
- (void)setLong:(long long)arg1 forKey:(id)arg2;
- (void)setMap:(id)arg1;
- (void)setNanoSettingsDirectoryExists:(BOOL)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 completionHandler:(id)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setPairingID:(id)arg1;
- (void)setPairingStorePath:(id)arg1;
- (void)setReferenceCounter:(unsigned int)arg1;
- (void)setURL:(id)arg1 forKey:(id)arg2;
- (id)stringArrayForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)synchronize;
- (void)synchronizeWithCompletionHandler:(id)arg1;

@end
