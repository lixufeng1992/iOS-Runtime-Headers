/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSMTraceBuffer;

@interface TSTTracingManager : NSObject {
    TSMTraceBuffer *mBuffer;
}

+ (id)_singletonAlloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedManager;

- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (oneway void)release;
- (id)retain;
- (unsigned int)retainCount;
- (void)setup;
- (void)teardown;

@end
