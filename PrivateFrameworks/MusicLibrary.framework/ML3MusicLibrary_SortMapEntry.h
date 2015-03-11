/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSData, NSString;

@interface ML3MusicLibrary_SortMapEntry : NSObject {
    BOOL _dirty;
    NSString *_name;
    long long _nameOrder;
    int _nameSection;
    NSData *_sortKey;
}

- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)arg1 nameSection:(int)arg2 sortKey:(id)arg3 nameOrder:(long long)arg4 dirtyFlag:(BOOL)arg5;
- (id)initWithName:(id)arg1 nameSection:(int)arg2 sortKey:(id)arg3;

@end
