/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@class NSString, SPProtoCacheAssets;

@interface SPProtoCacheSyncData : PBCodable <NSCopying> {
    NSString *_cacheIdentifier;
    SPProtoCacheAssets *_permanentCache;
    SPProtoCacheAssets *_transientCache;
}

@property(retain) NSString * cacheIdentifier;
@property(retain) SPProtoCacheAssets * permanentCache;
@property(retain) SPProtoCacheAssets * transientCache;

- (void).cxx_destruct;
- (id)cacheIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)permanentCache;
- (BOOL)readFrom:(id)arg1;
- (void)setCacheIdentifier:(id)arg1;
- (void)setPermanentCache:(id)arg1;
- (void)setTransientCache:(id)arg1;
- (id)transientCache;
- (void)writeTo:(id)arg1;

@end
