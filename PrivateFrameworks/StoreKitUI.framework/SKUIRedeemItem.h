/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, SKUIArtworkList;

@interface SKUIRedeemItem : SKUIItem {
    SKUIArtworkList *artworks;
    long long itemIdentifier;
    int itemKind;
    NSString *title;
}

@property(retain) SKUIArtworkList * artworks;
@property long long itemIdentifier;
@property int itemKind;
@property(retain) NSString * title;

- (void).cxx_destruct;
- (struct _NSRange { unsigned int x1; unsigned int x2; })ageBandRange;
- (id)artworkURLForSize:(int)arg1;
- (id)artworks;
- (long long)itemIdentifier;
- (int)itemKind;
- (id)largestArtworkURL;
- (void)setArtworks:(id)arg1;
- (void)setItemIdentifier:(long long)arg1;
- (void)setItemKind:(int)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
