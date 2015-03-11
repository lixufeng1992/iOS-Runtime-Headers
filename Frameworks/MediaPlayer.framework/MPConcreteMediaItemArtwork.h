/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPArtworkCatalog;

@interface MPConcreteMediaItemArtwork : MPMediaItemArtwork {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _bounds;
    MPArtworkCatalog *_catalog;
}

@property(readonly) MPArtworkCatalog * artworkCatalog;

- (void).cxx_destruct;
- (id)artworkCatalog;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (id)imageWithSize:(struct CGSize { float x1; float x2; })arg1;
- (id)initWithArtworkCatalog:(id)arg1;

@end
