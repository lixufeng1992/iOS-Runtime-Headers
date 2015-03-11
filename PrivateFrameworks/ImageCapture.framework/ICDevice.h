/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@class <ICDeviceDelegate>, DeviceManager, NSString;

@interface ICDevice : NSObject {
    void *_deviceProperties;
}

@property(copy) NSString * UUIDString;
@property BOOL autoOpenSession;
@property BOOL closeSessionPending;
@property <ICDeviceDelegate> * delegate;
@property DeviceManager * deviceManager;
@property BOOL hasOpenSession;
@property(readonly) struct CGImage { }* icon;
@property(copy) NSString * name;
@property BOOL openSessionPending;
@property(copy) NSString * productKind;
@property(copy) NSString * transportType;
@property int usbLocationID;
@property int usbProductID;
@property int usbVendorID;

- (id)UUIDString;
- (BOOL)autoOpenSession;
- (BOOL)closeSessionPending;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)deviceManager;
- (void)finalize;
- (void)handleCommandCompletionNotification:(id)arg1;
- (void)handleImageCaptureEventNotification:(id)arg1;
- (BOOL)hasOpenSession;
- (struct CGImage { }*)icon;
- (id)init;
- (BOOL)isCameraDevice;
- (id)name;
- (BOOL)openSessionPending;
- (id)productKind;
- (void)requestCloseSession;
- (void)requestOpenSession;
- (void)setAutoOpenSession:(BOOL)arg1;
- (void)setCloseSessionPending:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceManager:(id)arg1;
- (void)setHasOpenSession:(BOOL)arg1;
- (void)setName:(id)arg1;
- (void)setOpenSessionPending:(BOOL)arg1;
- (void)setProductKind:(id)arg1;
- (void)setTransportType:(id)arg1;
- (void)setUUIDString:(id)arg1;
- (void)setUsbLocationID:(int)arg1;
- (void)setUsbProductID:(int)arg1;
- (void)setUsbVendorID:(int)arg1;
- (id)transportType;
- (int)usbLocationID;
- (int)usbProductID;
- (int)usbVendorID;
- (id)valueForUndefinedKey:(id)arg1;

@end
