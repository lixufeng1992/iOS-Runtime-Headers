/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSNowPlayingArtworkRequest : HSRequest {
    struct CGSize { 
        float width; 
        float height; 
    unsigned int _interfaceID;
    } _maximumSize;
    unsigned int _playQueueIndex;
}

@property(readonly) unsigned int interfaceID;
@property(readonly) struct CGSize { float x1; float x2; } maximumSize;
@property(readonly) unsigned int playQueueIndex;

- (id)canonicalResponseForResponse:(id)arg1;
- (id)initWithInterfaceID:(unsigned int)arg1 maximumSize:(struct CGSize { float x1; float x2; })arg2 playQueueIndex:(unsigned int)arg3;
- (unsigned int)interfaceID;
- (struct CGSize { float x1; float x2; })maximumSize;
- (unsigned int)playQueueIndex;

@end
