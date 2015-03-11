/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@class NSString;

@interface SPRemoteInterfaceKeyedArchiverDelegate : NSObject <NSKeyedArchiverDelegate> {
    BOOL _imageIsNamed;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property BOOL imageIsNamed;
@property(readonly) Class superclass;

- (void)archiver:(id)arg1 didEncodeObject:(id)arg2;
- (id)archiver:(id)arg1 willEncodeObject:(id)arg2;
- (BOOL)imageIsNamed;
- (void)setImageIsNamed:(BOOL)arg1;

@end
