/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

@class NSString;

@interface NACAudioRouteBuffer : PBCodable <NSCopying> {
    struct { 
        unsigned int routeSubtype : 1; 
        unsigned int routeType : 1; 
        unsigned int picked : 1; 
        unsigned int supportsVolumeControl : 1; 
    } _has;
    BOOL _picked;
    NSString *_routeName;
    int _routeSubtype;
    int _routeType;
    BOOL _supportsVolumeControl;
    NSString *_uniqueIdentifier;
}

@property BOOL hasPicked;
@property(readonly) BOOL hasRouteName;
@property BOOL hasRouteSubtype;
@property BOOL hasRouteType;
@property BOOL hasSupportsVolumeControl;
@property(readonly) BOOL hasUniqueIdentifier;
@property BOOL picked;
@property(retain) NSString * routeName;
@property int routeSubtype;
@property int routeType;
@property BOOL supportsVolumeControl;
@property(retain) NSString * uniqueIdentifier;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasPicked;
- (BOOL)hasRouteName;
- (BOOL)hasRouteSubtype;
- (BOOL)hasRouteType;
- (BOOL)hasSupportsVolumeControl;
- (BOOL)hasUniqueIdentifier;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)picked;
- (BOOL)readFrom:(id)arg1;
- (id)routeName;
- (int)routeSubtype;
- (int)routeType;
- (void)setHasPicked:(BOOL)arg1;
- (void)setHasRouteSubtype:(BOOL)arg1;
- (void)setHasRouteType:(BOOL)arg1;
- (void)setHasSupportsVolumeControl:(BOOL)arg1;
- (void)setPicked:(BOOL)arg1;
- (void)setRouteName:(id)arg1;
- (void)setRouteSubtype:(int)arg1;
- (void)setRouteType:(int)arg1;
- (void)setSupportsVolumeControl:(BOOL)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (BOOL)supportsVolumeControl;
- (id)uniqueIdentifier;
- (void)writeTo:(id)arg1;

@end
