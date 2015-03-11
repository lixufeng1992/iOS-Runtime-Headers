/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKImageAttachment : NNMKAttachment <NSSecureCoding> {
    struct CGSize { 
        float width; 
        float height; 
    } _imageSize;
    BOOL _renderOnClient;
}

@property struct CGSize { float x1; float x2; } imageSize;
@property BOOL renderOnClient;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (struct CGSize { float x1; float x2; })imageSize;
- (id)initWithCoder:(id)arg1;
- (BOOL)renderOnClient;
- (void)setImageSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setRenderOnClient:(BOOL)arg1;

@end
