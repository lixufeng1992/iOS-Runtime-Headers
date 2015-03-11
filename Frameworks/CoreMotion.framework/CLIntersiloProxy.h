/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@class <CLIntersiloProxyDelegateProtocol>, CLIntersiloInterface, CLIntersiloInterfaceSelectorInfo, CLIntersiloProxy, CLSilo;

@interface CLIntersiloProxy : NSProxy <CLIntersiloServiceProtocol> {
    CLIntersiloProxy *_asymStrongPeer;
    <CLIntersiloProxyDelegateProtocol> *_delegate;
    CLIntersiloInterface *_delegateInterface;
    CLSilo *_delegateSilo;
    CLIntersiloInterfaceSelectorInfo *_last;
    CLIntersiloProxy *_peer;
    CLIntersiloInterface *_proxiedInterface;
}

@property(readonly) <CLIntersiloProxyDelegateProtocol> * delegate;
@property(copy,readonly) CLIntersiloInterface * delegateInterface;
@property(readonly) CLSilo * delegateSilo;
@property(copy,readonly) CLIntersiloInterface * proxiedInterface;
@property BOOL valid;

+ (void)becameFatallyBlocked:(id)arg1;
+ (id)getSilo;
+ (BOOL)isSupported;
+ (id)proxyForRecipientObject:(id)arg1 inSilo:(id)arg2 withInboundInterface:(id)arg3 andOutboundInterface:(id)arg4;

- (void).cxx_destruct;
- (BOOL)conformsToProtocol:(id)arg1;
- (id)delegate;
- (id)delegateInterface;
- (id)delegateSilo;
- (void)forwardInvocation:(id)arg1;
- (id)initWithDelegateInterface:(id)arg1 proxiedInterface:(id)arg2 andUninitializedPeer:(id)arg3;
- (id)initWithDelegateInterface:(id)arg1 proxiedInterface:(id)arg2 delegateObject:(id)arg3 delegateSilo:(id)arg4 andUninitializedPeer:(id)arg5;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)proxiedInterface;
- (void)registerDelegate:(id)arg1 inSilo:(id)arg2;

@end
