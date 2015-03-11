/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSArray, NSMutableDictionary, NSString, NSURL, SUClientInterface, SUGradient, SUPageSectionGroup, SUSearchFieldConfiguration, UIColor, UIImage;

@interface SUSection : NSObject {
    SUClientInterface *_clientInterface;
    NSMutableDictionary *_dictionary;
    UIImage *_image;
    UIImage *_moreListImage;
    SUSearchFieldConfiguration *_searchFieldConfiguration;
    NSMutableDictionary *_sectionButtonImages;
    UIImage *_selectedImage;
    UIImage *_selectedMoreListImage;
}

@property(readonly) SUGradient * backgroundGradient;
@property(readonly) int defaultPNGStyle;
@property(getter=isDefaultSection,readonly) BOOL defaultSection;
@property(readonly) NSString * identifier;
@property(retain) UIImage * image;
@property(readonly) NSArray * itemImages;
@property(readonly) NSArray * leftSectionButtons;
@property(readonly) UIColor * loadingIndicatorColor;
@property(readonly) UIColor * loadingTextColor;
@property(readonly) UIColor * loadingTextShadowColor;
@property(readonly) int minimumNetworkType;
@property(retain) UIImage * moreListImage;
@property(readonly) SUPageSectionGroup * pageSectionGroup;
@property(readonly) NSString * partnerHeader;
@property(readonly) NSArray * rightSectionButtons;
@property(retain) SUSearchFieldConfiguration * searchFieldConfiguration;
@property(retain) UIImage * selectedImage;
@property(retain) UIImage * selectedMoreListImage;
@property(readonly) NSString * title;
@property(getter=isTransient,readonly) BOOL transient;
@property(readonly) int type;
@property(readonly) NSURL * url;
@property(readonly) NSString * urlBagKey;
@property(getter=isUsingLocalArtwork,readonly) BOOL usingLocalArtwork;

- (id)_colorForKey:(id)arg1;
- (id)_imageBaseName;
- (int)_minimumNetworkTypeFromDictionary:(id)arg1;
- (id)_sectionButtonsForKey:(id)arg1;
- (int)_typeForString:(id)arg1;
- (id)backgroundGradient;
- (void)dealloc;
- (int)defaultPNGStyle;
- (id)description;
- (id)identifier;
- (id)image;
- (id)imageForSectionButtonWithTag:(int)arg1;
- (id)initWithClientInterface:(id)arg1 sectionType:(int)arg2 defaultPNGStyle:(int)arg3;
- (id)initWithClientInterface:(id)arg1;
- (BOOL)isDefaultSection;
- (BOOL)isTransient;
- (BOOL)isUsingLocalArtwork;
- (id)itemImages;
- (id)leftSectionButtons;
- (BOOL)loadFromDictionary:(id)arg1 searchField:(id)arg2;
- (id)loadingIndicatorColor;
- (id)loadingTextColor;
- (id)loadingTextShadowColor;
- (int)minimumNetworkType;
- (id)moreListImage;
- (id)pageSectionGroup;
- (id)partnerHeader;
- (id)rightSectionButtons;
- (id)searchFieldConfiguration;
- (id)selectedImage;
- (id)selectedMoreListImage;
- (void)setImage:(id)arg1;
- (void)setMoreListImage:(id)arg1;
- (void)setSearchFieldConfiguration:(id)arg1;
- (void)setSectionButtonImage:(id)arg1 forTag:(int)arg2;
- (void)setSelectedImage:(id)arg1;
- (void)setSelectedMoreListImage:(id)arg1;
- (id)title;
- (int)type;
- (id)url;
- (id)urlBagKey;
- (id)valueForProperty:(id)arg1;

@end
