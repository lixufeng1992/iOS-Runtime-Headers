/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@class CADisplay, NSString;

@interface FBSDisplay : NSObject <BSXPCCoding, NSCopying, NSSecureCoding> {
    CADisplay *_caDisplay;
    unsigned int _seed;
    int _tags;
    unsigned int _type;
}

@property(retain,readonly) CADisplay * caDisplay;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) float orientation;
@property(readonly) float scale;
@property unsigned int seed;
@property(readonly) Class superclass;
@property(readonly) int tags;
@property(readonly) unsigned int type;

+ (id)_CADisplayForId:(unsigned int)arg1;
+ (BOOL)supportsSecureCoding;

- (id)_nameForDisplayType;
- (id)_screen;
- (unsigned int)_typeFromTags:(unsigned int)arg1;
- (id)caDisplay;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned int)hash;
- (id)initWithCADisplay:(id)arg1 isMainDisplay:(BOOL)arg2 seed:(unsigned int)arg3 tags:(int)arg4;
- (id)initWithCADisplay:(id)arg1 isMainDisplay:(BOOL)arg2;
- (id)initWithCADisplay:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (BOOL)isAirPlayDisplay;
- (BOOL)isCarDisplay;
- (BOOL)isConnected;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isExternal;
- (BOOL)isHiddenDisplay;
- (BOOL)isMainDisplay;
- (BOOL)isMusicOnlyDisplay;
- (BOOL)isWatchOnlyDisplay;
- (BOOL)isiPodOnlyDisplay;
- (float)orientation;
- (float)scale;
- (unsigned int)seed;
- (void)setConnected:(BOOL)arg1;
- (void)setSeed:(unsigned int)arg1;
- (int)tags;
- (unsigned int)type;

@end
