/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class TSCH3DEnvironmentPackage, TSCH3DLightingPackage, TSCH3DMaterialPackage;

@interface TSCH3DLightingModel : NSObject <NSCopying> {
    TSCH3DEnvironmentPackage *mEnvironment;
    TSCH3DLightingPackage *mLightings;
    TSCH3DMaterialPackage *mMaterials;
}

@property(retain) TSCH3DEnvironmentPackage * environment;
@property(retain) TSCH3DLightingPackage * lightings;
@property(retain) TSCH3DMaterialPackage * materials;

+ (id)instanceWithArchive:(const struct Chart3DLightingModelArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Chart3DPhongLightingModelArchive {} *x3; struct Chart3DFixedFunctionLightingModelArchive {} *x4; struct Chart3DEnvironmentPackageArchive {} *x5; int x6; unsigned int x7[1]; }*)arg1 unarchiver:(id)arg2;
+ (id)lightingModel;

- (void)affect:(id)arg1 states:(id)arg2 scene:(id)arg3 texturePool:(id)arg4;
- (id)clone;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)diffuseTextureTiling;
- (id)environment;
- (BOOL)hasCompleteData;
- (unsigned int)hash;
- (id)initWithArchive:(const struct Chart3DLightingModelArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Chart3DPhongLightingModelArchive {} *x3; struct Chart3DFixedFunctionLightingModelArchive {} *x4; struct Chart3DEnvironmentPackageArchive {} *x5; int x6; unsigned int x7[1]; }*)arg1 unarchiver:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)lightingModelWithLightings:(id)arg1;
- (id)lightings;
- (id)materials;
- (id)representativeMaterialLightenedByPercentage:(id)arg1;
- (void)saveToArchive:(struct Chart3DLightingModelArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Chart3DPhongLightingModelArchive {} *x3; struct Chart3DFixedFunctionLightingModelArchive {} *x4; struct Chart3DEnvironmentPackageArchive {} *x5; int x6; unsigned int x7[1]; }*)arg1 archiver:(id)arg2;
- (void)setEnvironment:(id)arg1;
- (void)setLightings:(id)arg1;
- (void)setMaterials:(id)arg1;

@end
