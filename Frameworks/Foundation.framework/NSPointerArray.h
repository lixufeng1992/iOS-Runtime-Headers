/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSPointerFunctions;

@interface NSPointerArray : NSObject <NSFastEnumeration, NSCopying, NSCoding> {
}

@property unsigned int count;
@property(copy,readonly) NSPointerFunctions * pointerFunctions;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)pointerArrayWithOptions:(unsigned int)arg1;
+ (id)pointerArrayWithPointerFunctions:(id)arg1;
+ (id)pointerArrayWithStrongObjects;
+ (id)pointerArrayWithWeakObjects;
+ (id)strongObjectsPointerArray;
+ (id)weakObjectsPointerArray;

- (void)addPointer:(void*)arg1;
- (id)allObjects;
- (id)bl_firstObject;
- (void)compact;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithOptions:(unsigned int)arg1;
- (id)initWithPointerFunctions:(id)arg1;
- (void)insertPointer:(void*)arg1 atIndex:(unsigned int)arg2;
- (id)mutableArray;
- (void*)pointerAtIndex:(unsigned int)arg1;
- (id)pointerFunctions;
- (void)removePointerAtIndex:(unsigned int)arg1;
- (void)replacePointerAtIndex:(unsigned int)arg1 withPointer:(void*)arg2;
- (void)setCount:(unsigned int)arg1;

@end
