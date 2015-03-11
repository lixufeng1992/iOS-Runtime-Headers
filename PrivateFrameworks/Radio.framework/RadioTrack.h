/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@class NSArray, NSData, NSDate, NSDictionary, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSURL, RadioArtworkCollection, RadioAudioClip, RadioTrackAdInfo;

@interface RadioTrack : NSObject <NSSecureCoding> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSDictionary *_bestOfferDictionary;
    NSDate *_expirationDate;
    BOOL _isPreorderAlbum;
    NSMutableDictionary *_trackDictionary;
}

@property(copy,readonly) NSData * adData;
@property(readonly) RadioTrackAdInfo * adInfo;
@property(readonly) RadioAudioClip * afterPromoAudioClip;
@property(copy,readonly) NSString * album;
@property(copy,readonly) NSString * albumBuyButtonText;
@property(readonly) int albumBuyButtonType;
@property(readonly) long long albumID;
@property(copy,readonly) NSURL * albumURL;
@property(copy,readonly) NSString * artist;
@property(readonly) RadioArtworkCollection * artworkCollection;
@property(copy,readonly) NSArray * assets;
@property(readonly) RadioAudioClip * beforePromoAudioClip;
@property(copy,readonly) NSString * copyrightText;
@property(readonly) long long dateFetched;
@property(copy,readonly) NSString * debugMessage;
@property(readonly) double duration;
@property(retain) NSDate * expirationDate;
@property(copy,readonly) NSDictionary * feedbackDictionaryRepresentation;
@property BOOL inWishList;
@property(readonly) BOOL isExplicit;
@property(readonly) BOOL isPreorderAlbum;
@property(readonly) int likeStatus;
@property(copy) NSDictionary * metadataDictionary;
@property(copy,readonly) NSArray * offers;
@property(copy,readonly) NSURL * previewURL;
@property(readonly) long long shuffleSeed;
@property(readonly) double startTime;
@property(readonly) long long storeID;
@property(copy,readonly) NSString * title;
@property(copy,readonly) NSDictionary * trackDictionary;
@property(copy,readonly) NSDictionary * trackInfo;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_offers;
- (void)_performTransaction:(id)arg1;
- (void)_performTransactionAndWait:(id)arg1;
- (void)_performWriteTransaction:(id)arg1;
- (void)_performWriteTransactionAndWait:(id)arg1;
- (id)_valueOfClass:(Class)arg1 forAssetInfoKey:(id)arg2;
- (id)_valueOfClass:(Class)arg1 forMetadataKey:(id)arg2 fallbackTrackDictionaryKey:(id)arg3;
- (id)_valueRespondingToSelector:(SEL)arg1 forMetadataKey:(id)arg2 fallbackTrackDictionaryKey:(id)arg3;
- (id)adData;
- (id)adInfo;
- (id)afterPromoAudioClip;
- (id)album;
- (id)albumBuyButtonText;
- (int)albumBuyButtonType;
- (long long)albumID;
- (id)albumURL;
- (id)artist;
- (id)artworkCollection;
- (id)assets;
- (id)beforePromoAudioClip;
- (id)copyrightText;
- (long long)dateFetched;
- (id)debugMessage;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)feedbackDictionaryRepresentation;
- (BOOL)inWishList;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTrackDictionary:(id)arg1;
- (BOOL)isExplicit;
- (BOOL)isPreorderAlbum;
- (int)likeStatus;
- (id)metadataDictionary;
- (id)offers;
- (id)previewURL;
- (void)setExpirationDate:(id)arg1;
- (void)setInWishList:(BOOL)arg1;
- (void)setMetadataDictionary:(id)arg1;
- (long long)shuffleSeed;
- (double)startTime;
- (long long)storeID;
- (id)title;
- (id)trackDictionary;
- (id)trackInfo;

@end
