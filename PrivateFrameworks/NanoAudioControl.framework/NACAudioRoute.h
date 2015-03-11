/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

@class NSString;

@interface NACAudioRoute : NSObject {
    BOOL _picked;
    NSString *_routeName;
    int _routeSubtype;
    int _routeType;
    BOOL _supportsVolumeControl;
    NSString *_uniqueIdentifier;
}

@property(getter=isPicked,readonly) BOOL picked;
@property(readonly) NSString * routeName;
@property(readonly) int routeSubtype;
@property(readonly) int routeType;
@property(readonly) BOOL supportsVolumeControl;
@property(readonly) NSString * uniqueIdentifier;

+ (int)_routeBufferSubtypeFromMPAVRouteSubtype:(int)arg1;
+ (int)_routeBufferTypeFromMPAVRouteType:(int)arg1;
+ (int)_routeBufferTypeFromRouteType:(int)arg1;
+ (int)_routeSubtypeFromRouteBufferSubtype:(int)arg1;
+ (int)_routeTypeFromMPAVRouteType:(int)arg1;
+ (int)_routeTypeFromRouteBufferType:(int)arg1;
+ (id)audioRouteFromBuffer:(id)arg1;
+ (id)audioRouteWithMPAVRoute:(id)arg1;
+ (id)audioRoutesFromBuffers:(id)arg1;
+ (id)buffersFromAudioRoutes:(id)arg1;

- (void).cxx_destruct;
- (id)buffer;
- (id)description;
- (id)initWithMPAVRoute:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToAudioRoute:(id)arg1;
- (BOOL)isPicked;
- (id)routeName;
- (int)routeSubtype;
- (int)routeType;
- (void)setSupportsVolumeControl:(BOOL)arg1;
- (BOOL)supportsVolumeControl;
- (id)uniqueIdentifier;

@end
