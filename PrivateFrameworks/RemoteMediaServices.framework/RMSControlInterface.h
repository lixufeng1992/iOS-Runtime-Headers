/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSControlInterface : NSObject {
    BOOL _supportsDirectionalControl;
    BOOL _supportsSpeakerSelection;
    BOOL _supportsVolumeControl;
}

@property BOOL supportsDirectionalControl;
@property BOOL supportsSpeakerSelection;
@property BOOL supportsVolumeControl;

- (id)initWithProtobuf:(id)arg1;
- (id)protobuf;
- (void)setSupportsDirectionalControl:(BOOL)arg1;
- (void)setSupportsSpeakerSelection:(BOOL)arg1;
- (void)setSupportsVolumeControl:(BOOL)arg1;
- (BOOL)supportsDirectionalControl;
- (BOOL)supportsSpeakerSelection;
- (BOOL)supportsVolumeControl;

@end
