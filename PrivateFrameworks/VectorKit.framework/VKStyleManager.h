/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSString, VKGenericShieldDrawStyle, VKPGlobalProperties, VKSharedResources, VKStylesheet;

@interface VKStyleManager : NSObject {
    struct unordered_map<StyleKey, std::__1::weak_ptr<md::StyleQuery>, std::__1::hash<StyleKey>, std::__1::equal_to<StyleKey>, std::__1::allocator<std::__1::pair<const StyleKey, std::__1::weak_ptr<md::StyleQuery> > > > { 
        struct __hash_table<std::__1::__hash_value_type<StyleKey, std::__1::weak_ptr<md::StyleQuery> >, std::__1::__unordered_map_hasher<StyleKey, std::__1::__hash_value_type<StyleKey, std::__1::weak_ptr<md::StyleQuery> >, std::__1::hash<StyleKey>, true>, std::__1::__unordered_map_equal<StyleKey, std::__1::__hash_value_type<StyleKey, std::__1::weak_ptr<md::StyleQuery> >, std::__1::equal_to<StyleKey>, true>, std::__1::allocator<std::__1::__hash_value_type<StyleKey, std::__1::weak_ptr<md::StyleQuery> > > > { 
            struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<StyleKey, std::__1::weak_ptr<md::StyleQuery> >, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<StyleKey, std::__1::weak_ptr<md::StyleQuery> >, void *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<StyleKey, std::__1::weak_ptr<md::StyleQuery> >, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<StyleKey, std::__1::weak_ptr<md::StyleQuery> >, void *> *> > > { 
                    struct __hash_node<std::__1::__hash_value_type<StyleKey, std::__1::weak_ptr<md::StyleQuery> >, void *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<StyleKey, std::__1::weak_ptr<md::StyleQuery> >, void *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<StyleKey, std::__1::weak_ptr<md::StyleQuery> >, void *> *> > { 
                            unsigned long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<StyleKey, std::__1::weak_ptr<md::StyleQuery> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<StyleKey, std::__1::weak_ptr<md::StyleQuery> >, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<StyleKey, std::__1::weak_ptr<md::StyleQuery> >, void *> *> { 
                    struct __hash_node<std::__1::__hash_value_type<StyleKey, std::__1::weak_ptr<md::StyleQuery> >, void *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<StyleKey, std::__1::__hash_value_type<StyleKey, std::__1::weak_ptr<md::StyleQuery> >, std::__1::hash<StyleKey>, true> > { 
                unsigned long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<StyleKey, std::__1::__hash_value_type<StyleKey, std::__1::weak_ptr<md::StyleQuery> >, std::__1::equal_to<StyleKey>, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    struct _opaque_pthread_rwlock_t { 
        long __sig; 
        BOOL __opaque[124]; 
    float _blendingFactor;
    BOOL _canSelectIcons;
    unsigned int _connectedVariant;
    VKGenericShieldDrawStyle *_defaultGenericShieldStyle;
    unsigned int _mapDisplayStyle;
    unsigned int _mapDisplayStyleVariant;
    int _mapMode;
    VKSharedResources *_sharedResources;
    } _styleQueries;
    } _styleQueryCreationLock;
    VKStylesheet *_stylesheet;
    int _targetDisplay;
    unsigned int _updateStamp;
}

@property(readonly) unsigned int activeMapDisplayStyle;
@property float blendingFactor;
@property BOOL canSelectIcons;
@property(readonly) VKGenericShieldDrawStyle * defaultGenericShieldStyle;
@property(getter=isFinishedDecoding,readonly) BOOL finishedDecoding;
@property(readonly) BOOL isDevResource;
@property unsigned int mapDisplayStyle;
@property unsigned int mapDisplayStyleVariant;
@property int mapMode;
@property(readonly) NSString * sheetName;
@property(readonly) VKPGlobalProperties * styleGlobalProperties;
@property(readonly) BOOL supportsNightMode;
@property(readonly) int targetDisplay;
@property(readonly) unsigned int updateStamp;

- (id).cxx_construct;
- (void).cxx_destruct;
- (float)_nightShieldBrightnessForVectorType:(int)arg1;
- (unsigned int)activeMapDisplayStyle;
- (void)addFinishedDecodingCallback:(id)arg1;
- (float)blendingFactor;
- (float*)blendingFactorPointer;
- (BOOL)canSelectIcons;
- (void)clearCaches;
- (void)dealloc;
- (id)defaultGenericShieldStyle;
- (id)init;
- (id)initWithName:(id)arg1 scale:(float)arg2 ppi:(float)arg3 targetDisplay:(int)arg4 sharedResources:(id)arg5;
- (BOOL)isDevResource;
- (BOOL)isFinishedDecoding;
- (unsigned int)mapDisplayStyle;
- (unsigned int)mapDisplayStyleVariant;
- (int)mapMode;
- (void)prepareStyleVariantsForMapDisplayStyle:(unsigned int)arg1;
- (int)rasterPolygonChangeoverZ;
- (void)setBlendingFactor:(float)arg1;
- (void)setCanSelectIcons:(BOOL)arg1;
- (void)setMapDisplayStyle:(unsigned int)arg1;
- (void)setMapDisplayStyleVariant:(unsigned int)arg1;
- (void)setMapMode:(int)arg1;
- (id)sheetName;
- (float)shieldBrightnessForDisplayStyle:(unsigned int)arg1;
- (float)shieldBrightnessForVectorType:(int)arg1;
- (id)styleGlobalProperties;
- (struct shared_ptr<md::StyleQuery> { struct StyleQuery {} *x1; struct __shared_weak_count {} *x2; })styleQueryForFeatureAttributes:(id)arg1 vectorType:(const int*)arg2 locale:(id)arg3 selectionState:(BOOL)arg4;
- (struct shared_ptr<md::StyleQuery> { struct StyleQuery {} *x1; struct __shared_weak_count {} *x2; })styleQueryForFeatureAttributes:(id)arg1 vectorType:(int)arg2;
- (struct shared_ptr<md::StyleQuery> { struct StyleQuery {} *x1; struct __shared_weak_count {} *x2; })styleQueryForFeatureAttributes:(id)arg1;
- (id)stylesheet;
- (BOOL)supportsMapDisplayStyle:(unsigned int)arg1;
- (BOOL)supportsNightMode;
- (int)targetDisplay;
- (unsigned int)updateStamp;

@end
