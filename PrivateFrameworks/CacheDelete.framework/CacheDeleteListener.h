/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CacheDelete.framework/CacheDelete
 */

@class NSMutableSet, NSString, NSXPCListener, Protocol;

@interface CacheDeleteListener : NSObject <NSXPCListenerDelegate> {
    NSXPCListener *_listener;
    Protocol *_protocol;
    NSMutableSet *_requiredEntitlements;
    id _xObj;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(retain) NSXPCListener * listener;
@property(retain) Protocol * protocol;
@property(retain) NSMutableSet * requiredEntitlements;
@property(readonly) Class superclass;
@property(retain) id xObj;

+ (id)daemonListenerWithExportedObject:(id)arg1;

- (void).cxx_destruct;
- (void)addRequiredEntitlement:(id)arg1;
- (id)initWithName:(id)arg1 listener:(id)arg2 protocol:(id)arg3 exportedObj:(id)arg4;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)listener;
- (id)protocol;
- (id)requiredEntitlements;
- (void)resume;
- (void)setListener:(id)arg1;
- (void)setProtocol:(id)arg1;
- (void)setRequiredEntitlements:(id)arg1;
- (void)setXObj:(id)arg1;
- (id)xObj;

@end
