/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class NSArray, NSData, NSDate, NSString;

@interface CPLMasterChange : CPLItemChange {
    NSDate *_creationDate;
    NSString *_filename;
    unsigned int _fullSizeJPEGSource;
    NSDate *_importDate;
    NSString *_importGroupIdentifier;
    NSString *_itemType;
    NSData *_mediaMetaData;
    NSString *_mediaMetaDataType;
    int _originalOrientation;
    NSArray *_resources;
}

@property(copy) NSDate * creationDate;
@property(copy) NSString * filename;
@property unsigned int fullSizeJPEGSource;
@property(copy) NSDate * importDate;
@property(copy) NSString * importGroupIdentifier;
@property(readonly) BOOL isImage;
@property(readonly) BOOL isVideo;
@property(copy) NSString * itemType;
@property(retain) NSData * mediaMetaData;
@property(copy) NSString * mediaMetaDataType;
@property int originalOrientation;
@property(copy) NSArray * resources;

- (void).cxx_destruct;
- (void)awakeFromStorage;
- (id)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg1;
- (id)creationDate;
- (unsigned int)dataClassType;
- (int)dequeueOrder;
- (id)filename;
- (unsigned int)fullSizeJPEGSource;
- (id)importDate;
- (id)importGroupIdentifier;
- (id)init;
- (BOOL)isImage;
- (BOOL)isVideo;
- (id)itemType;
- (id)mediaMetaData;
- (id)mediaMetaDataType;
- (id)name;
- (int)originalOrientation;
- (void)prepareForStorage;
- (id)propertiesDescription;
- (id)propertiesForChangeType:(unsigned int)arg1;
- (id)resources;
- (void)setCreationDate:(id)arg1;
- (void)setFilename:(id)arg1;
- (void)setFullSizeJPEGSource:(unsigned int)arg1;
- (void)setImportDate:(id)arg1;
- (void)setImportGroupIdentifier:(id)arg1;
- (void)setItemType:(id)arg1;
- (void)setMediaMetaData:(id)arg1;
- (void)setMediaMetaDataType:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOriginalOrientation:(int)arg1;
- (void)setResources:(id)arg1;
- (BOOL)supportsResources;

@end
