/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@class CBPeripheral, NSArray, NSNumber;

@interface CBService : CBAttribute {
    NSArray *_characteristics;
    NSNumber *_endHandle;
    NSArray *_includedServices;
    BOOL _isPrimary;
    CBPeripheral *_peripheral;
    NSNumber *_startHandle;
}

@property(retain) NSArray * characteristics;
@property(readonly) NSNumber * endHandle;
@property(retain) NSArray * includedServices;
@property BOOL isPrimary;
@property(readonly) CBPeripheral * peripheral;
@property(readonly) NSNumber * startHandle;

- (id)characteristics;
- (void)dealloc;
- (id)description;
- (id)endHandle;
- (id)handleCharacteristicsDiscovered:(id)arg1;
- (id)handleIncludedServicesDiscovered:(id)arg1;
- (id)includedServices;
- (id)initWithPeripheral:(id)arg1 dictionary:(id)arg2;
- (void)invalidate;
- (BOOL)isPrimary;
- (id)peripheral;
- (void)setCharacteristics:(id)arg1;
- (void)setIncludedServices:(id)arg1;
- (void)setIsPrimary:(BOOL)arg1;
- (id)startHandle;

@end
