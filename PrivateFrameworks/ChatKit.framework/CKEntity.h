/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class IMHandle, NSString, UIImage;

@interface CKEntity : NSObject {
    IMHandle *_handle;
}

@property(copy,readonly) NSString * IDSCanonicalAddress;
@property(readonly) void* abRecord;
@property(retain,readonly) IMHandle * defaultIMHandle;
@property(copy,readonly) NSString * fullName;
@property(retain) IMHandle * handle;
@property(readonly) int identifier;
@property(retain,readonly) UIImage * locationMapViewContactImage;
@property(retain,readonly) UIImage * locationShareBalloonContactImage;
@property(copy,readonly) NSString * name;
@property(copy,readonly) NSString * originalAddress;
@property(readonly) int propertyType;
@property(copy,readonly) NSString * rawAddress;
@property(copy,readonly) NSString * textToneIdentifier;
@property(copy,readonly) NSString * textVibrationIdentifier;
@property(retain,readonly) UIImage * transcriptContactImage;
@property(retain,readonly) UIImage * transcriptDrawerContactImage;

+ (id)_copyEntityForAddressString:(id)arg1 onAccount:(id)arg2;
+ (id)copyEntityForAddressString:(id)arg1;

- (id)IDSCanonicalAddress;
- (void*)abRecord;
- (void)dealloc;
- (id)defaultIMHandle;
- (id)description;
- (id)fullName;
- (id)handle;
- (unsigned int)hash;
- (int)identifier;
- (id)initWithIMHandle:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)locationMapViewContactImage;
- (id)locationShareBalloonContactImage;
- (id)name;
- (id)originalAddress;
- (id)personViewControllerWithDelegate:(id)arg1;
- (int)propertyType;
- (id)rawAddress;
- (void)setHandle:(id)arg1;
- (id)textToneIdentifier;
- (id)textVibrationIdentifier;
- (id)transcriptContactImage;
- (id)transcriptDrawerContactImage;

@end
