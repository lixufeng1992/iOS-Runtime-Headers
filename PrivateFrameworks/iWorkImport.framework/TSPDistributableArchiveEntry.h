/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString, SFUDataRepresentation;

@interface TSPDistributableArchiveEntry : NSObject <TSPIdentifiedDataRepresentation> {
    int _classType;
    NSString *_fileStateIdentifier;
    long long _identifier;
    SFUDataRepresentation *_objectData;
    struct set<long long, std::__1::less<long long>, std::__1::allocator<long long> > { struct __tree<long long, std::__1::less<long long>, std::__1::allocator<long long> > { struct __tree_node<long long, void *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<long long, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::less<long long> > { unsigned long x_3_2_1; } x_1_1_3; } x1; } *_ownedIds;
    NSString *_relativeDataPath;
    unsigned int _version;
}

@property int classType;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(copy) NSString * relativeDataPath;
@property(readonly) Class superclass;
@property unsigned int version;

- (void).cxx_destruct;
- (int)classType;
- (id)dataRepresentation;
- (void)dealloc;
- (id)fileStateIdentifier;
- (long long)identifier;
- (id)initWithIdentifier:(long long)arg1;
- (BOOL)isLoaded;
- (const struct set<long long, std::__1::less<long long>, std::__1::allocator<long long> > { struct __tree<long long, std::__1::less<long long>, std::__1::allocator<long long> > { struct __tree_node<long long, void *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<long long, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::less<long long> > { unsigned long x_3_2_1; } x_1_1_3; } x1; }*)ownedIds;
- (id)relativeDataPath;
- (void)setClassType:(int)arg1;
- (BOOL)setDataRepresentation:(id)arg1 shouldCopy:(BOOL)arg2 error:(id*)arg3;
- (void)setFileStateIdentifier:(id)arg1;
- (void)setOwnedIds:(const struct set<long long, std::__1::less<long long>, std::__1::allocator<long long> > { struct __tree<long long, std::__1::less<long long>, std::__1::allocator<long long> > { struct __tree_node<long long, void *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<long long, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::less<long long> > { unsigned long x_3_2_1; } x_1_1_3; } x1; }*)arg1;
- (void)setRelativeDataPath:(id)arg1;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)version;

@end
