/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSLock, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString, VKPGlobalProperties, VKStylesheetVendor;

@interface VKStylesheet : NSObject {
    struct unique_ptr<md::StyleMatchingTree, std::__1::default_delete<md::StyleMatchingTree> > { 
        struct __compressed_pair<md::StyleMatchingTree *, std::__1::default_delete<md::StyleMatchingTree> > { 
            struct StyleMatchingTree {} *__first_; 
        } __ptr_; 
    NSObject<OS_dispatch_semaphore> *_everythingLoadingSemaphore;
    NSMutableArray *_finishedDecodingCallbacks;
    NSLock *_finishedDecodingCallbacksLock;
    NSObject<OS_dispatch_semaphore> *_globalResourcesLoadingSemaphore;
    NSMutableArray *_inheritance;
    BOOL _isDevResource;
    int _loadedEverything;
    int _loadedGlobalResources;
    NSObject<OS_dispatch_queue> *_loadingQueue;
    } _matchingTree;
    float _ppi;
    int _rasterPolygonChangeoverZ;
    NSMutableDictionary *_resultCache;
    NSObject<OS_dispatch_queue> *_resultCacheQueue;
    float _scale;
    NSString *_sheetName;
    VKPGlobalProperties *_styleGlobalProperties;
    VKStylesheetVendor *_stylesheetVendor;
    BOOL _supportsNightMode;
    BOOL _supportsRouteMode;
    int _targetDisplay;
}

@property(getter=isFinishedDecoding,readonly) BOOL finishedDecoding;
@property(readonly) BOOL isDevResource;
@property(readonly) int rasterPolygonChangeoverZ;
@property(readonly) NSString * sheetName;
@property(readonly) VKPGlobalProperties * styleGlobalProperties;
@property(readonly) BOOL supportsNightMode;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct unordered_map<unsigned int, unsigned long long, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned long long> > > { struct __hash_table<std::__1::__hash_value_type<unsigned int, unsigned long long>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, unsigned long long>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, unsigned long long>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, unsigned long long> > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unsigned long long>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unsigned long long>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unsigned long long>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unsigned long long>, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<unsigned int, unsigned long long>, void *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unsigned long long>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unsigned long long>, void *> *> > { unsigned long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unsigned long long>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unsigned long long>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unsigned long long>, void *> *> { struct __hash_node<std::__1::__hash_value_type<unsigned int, unsigned long long>, void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, unsigned long long>, std::__1::hash<unsigned int>, true> > { unsigned long x_3_2_1; } x_1_1_3; struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, unsigned long long>, std::__1::equal_to<unsigned int>, true> > { float x_4_2_1; } x_1_1_4; } x1; })_attributeMapForAttributes:(id)arg1 clientAttributes:(struct { int x1; int x2; int x3; BOOL x4; id x5; BOOL x6; unsigned int x7; }*)arg2;
- (id)_styleMatchingAttributes:(id)arg1 clientAttributes:(struct { int x1; int x2; int x3; BOOL x4; id x5; BOOL x6; unsigned int x7; }*)arg2;
- (id)_stylesMatchingAttributes:(id)arg1 clientAttributes:(struct { int x1; int x2; int x3; BOOL x4; id x5; BOOL x6; unsigned int x7; }*)arg2;
- (void)addFinishedDecodingCallback:(id)arg1;
- (void)clearCaches;
- (void)dealloc;
- (id)init;
- (id)initWithData:(id)arg1 miniData:(id)arg2 forName:(id)arg3 scale:(float)arg4 ppi:(float)arg5 vendor:(id)arg6 targetDisplay:(int)arg7 isDevResource:(BOOL)arg8;
- (id)initWithName:(id)arg1 scale:(float)arg2 ppi:(float)arg3 targetDisplay:(int)arg4 vendor:(id)arg5 resourceManager:(id)arg6;
- (BOOL)isDevResource;
- (BOOL)isFinishedDecoding;
- (int)rasterPolygonChangeoverZ;
- (id)sheetName;
- (int)styleAttributeValueForLocalization:(id)arg1;
- (id)styleForFeatureAttributes:(id)arg1 clientAttributes:(struct { int x1; int x2; int x3; BOOL x4; id x5; BOOL x6; unsigned int x7; }*)arg2;
- (id)styleGlobalProperties;
- (id)styleMatchingAttributes:(id)arg1 vectorType:(int)arg2 locale:(id)arg3 mapDisplayStyle:(unsigned int)arg4 mapDisplayStyleVariant:(unsigned int)arg5 canSelectIcons:(BOOL)arg6 selected:(BOOL)arg7;
- (id)styleMatchingAttributes:(id)arg1 vectorType:(int)arg2 locale:(id)arg3 mapDisplayStyle:(unsigned int)arg4 mapDisplayStyleVariant:(unsigned int)arg5;
- (BOOL)supportsNightMode;

@end
