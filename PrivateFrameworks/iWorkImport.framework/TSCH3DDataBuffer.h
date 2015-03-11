/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DDataBuffer : NSObject {
}

@property(readonly) unsigned int byteSize;
@property(readonly) unsigned int componentByteSize;
@property(readonly) unsigned int elementByteSize;
@property(readonly) BOOL hasLevels;
@property(readonly) struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; } size2;
@property(readonly) struct tvec3<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; union { int x_3_1_1; int x_3_1_2; int x_3_1_3; } x3; } size;

- (struct DataBufferInfo { int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; })bufferInfo;
- (unsigned int)byteSize;
- (unsigned int)componentByteSize;
- (struct DataBufferLevelData { void *x1; struct tvec3<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_2_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_2_1_2; union { int x_3_2_1; int x_3_2_2; int x_3_2_3; } x_2_1_3; } x2; })dataAtLevel:(unsigned int)arg1;
- (struct DataBufferLevelData { void *x1; struct tvec3<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_2_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_2_1_2; union { int x_3_2_1; int x_3_2_2; int x_3_2_3; } x_2_1_3; } x2; })dataWithSizeGreaterOrEqualTo:(unsigned int)arg1;
- (id)description;
- (unsigned int)elementByteSize;
- (BOOL)hasLevels;
- (struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })size2;
- (struct tvec3<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; union { int x_3_1_1; int x_3_1_2; int x_3_1_3; } x3; })size;

@end
