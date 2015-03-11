/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@class NSUUID;

@interface CBPeer : NSObject <NSCopying> {
    struct __CFUUID { } *_UUID;
    int _hostState;
    NSUUID *_identifier;
    BOOL _isLinkEncrypted;
    unsigned int _mtuLength;
    int _pairingState;
}

@property(readonly) struct __CFUUID { }* UUID;
@property int hostState;
@property(readonly) NSUUID * identifier;
@property BOOL isLinkEncrypted;
@property unsigned int mtuLength;
@property int pairingState;

- (struct __CFUUID { }*)UUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)handleHostStateUpdated:(id)arg1;
- (void)handleLinkEncryptionChanged:(id)arg1;
- (void)handleMTUChanged:(id)arg1;
- (void)handleMsg:(int)arg1 args:(id)arg2;
- (int)hostState;
- (id)identifier;
- (id)initWithInfo:(id)arg1;
- (BOOL)isLinkEncrypted;
- (unsigned int)mtuLength;
- (int)pairingState;
- (void)setHostState:(int)arg1;
- (void)setIsLinkEncrypted:(BOOL)arg1;
- (void)setMtuLength:(unsigned int)arg1;
- (void)setPairingState:(int)arg1;

@end
