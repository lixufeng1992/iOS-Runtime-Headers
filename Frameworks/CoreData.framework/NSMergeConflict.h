/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSDictionary, NSManagedObject;

@interface NSMergeConflict : NSObject {
    unsigned int _newVersion;
    unsigned int _oldVersion;
    id _snapshot1;
    id _snapshot2;
    id _snapshot3;
    id _source;
}

@property(retain,readonly) NSDictionary * cachedSnapshot;
@property(readonly) unsigned int newVersionNumber;
@property(retain,readonly) NSDictionary * objectSnapshot;
@property(readonly) unsigned int oldVersionNumber;
@property(retain,readonly) NSDictionary * persistedSnapshot;
@property(retain,readonly) NSManagedObject * sourceObject;

- (id)ancestorSnapshot;
- (id)cachedSnapshot;
- (void)dealloc;
- (id)description;
- (id)initWithSource:(id)arg1 newVersion:(unsigned int)arg2 oldVersion:(unsigned int)arg3 cachedSnapshot:(id)arg4 persistedSnapshot:(id)arg5;
- (id)initWithSource:(id)arg1 newVersion:(unsigned int)arg2 oldVersion:(unsigned int)arg3 snapshot1:(id)arg4 snapshot2:(id)arg5 snapshot3:(id)arg6;
- (unsigned int)newVersionNumber;
- (id)objectForKey:(id)arg1;
- (id)objectSnapshot;
- (unsigned int)oldVersionNumber;
- (id)persistedSnapshot;
- (id)sourceObject;
- (id)valueForKey:(id)arg1;

@end
